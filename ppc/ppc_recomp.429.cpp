#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832845A0"))) PPC_WEAK_FUNC(sub_832845A0);
PPC_FUNC_IMPL(__imp__sub_832845A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// addi r9,r5,15
	ctx.r9.s64 = ctx.r5.s64 + 15;
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
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// sth r8,14(r6)
	PPC_STORE_U16(ctx.r6.u32 + 14, ctx.r8.u16);
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
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
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// sth r8,12(r6)
	PPC_STORE_U16(ctx.r6.u32 + 12, ctx.r8.u16);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284620"))) PPC_WEAK_FUNC(sub_83284620);
PPC_FUNC_IMPL(__imp__sub_83284620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_83284644:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83284644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83284644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284654"))) PPC_WEAK_FUNC(sub_83284654);
PPC_FUNC_IMPL(__imp__sub_83284654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284658"))) PPC_WEAK_FUNC(sub_83284658);
PPC_FUNC_IMPL(__imp__sub_83284658) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,6000
	ctx.r10.s64 = ctx.r3.s64 + 6000;
	// addi r9,r3,10440
	ctx.r9.s64 = ctx.r3.s64 + 10440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_83284668:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83284688
	if (ctx.cr6.eq) goto loc_83284688;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x83284668
	if (ctx.cr6.lt) goto loc_83284668;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83284688:
	// mulli r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 * 280;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284694"))) PPC_WEAK_FUNC(sub_83284694);
PPC_FUNC_IMPL(__imp__sub_83284694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284698"))) PPC_WEAK_FUNC(sub_83284698);
PPC_FUNC_IMPL(__imp__sub_83284698) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,10440
	ctx.r3.s64 = ctx.r3.s64 + 10440;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832846A0:
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x832846a0
	if (ctx.cr6.lt) goto loc_832846A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832846C4"))) PPC_WEAK_FUNC(sub_832846C4);
PPC_FUNC_IMPL(__imp__sub_832846C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832846C8"))) PPC_WEAK_FUNC(sub_832846C8);
PPC_FUNC_IMPL(__imp__sub_832846C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,10428(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// addi r10,r3,10440
	ctx.r10.s64 = ctx.r3.s64 + 10440;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x832846f4
	if (!ctx.cr6.gt) goto loc_832846F4;
loc_832846DC:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x832846fc
	if (ctx.cr6.eq) goto loc_832846FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 + 280;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832846dc
	if (ctx.cr6.lt) goto loc_832846DC;
loc_832846F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832846FC:
	// mulli r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 * 144;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,6000
	ctx.r3.s64 = ctx.r11.s64 + 6000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328470C"))) PPC_WEAK_FUNC(sub_8328470C);
PPC_FUNC_IMPL(__imp__sub_8328470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284710"))) PPC_WEAK_FUNC(sub_83284710);
PPC_FUNC_IMPL(__imp__sub_83284710) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x832846c8
	ctx.lr = 0x83284728;
	sub_832846C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r4,10436(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10436, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328474C"))) PPC_WEAK_FUNC(sub_8328474C);
PPC_FUNC_IMPL(__imp__sub_8328474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284750"))) PPC_WEAK_FUNC(sub_83284750);
PPC_FUNC_IMPL(__imp__sub_83284750) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284758"))) PPC_WEAK_FUNC(sub_83284758);
PPC_FUNC_IMPL(__imp__sub_83284758) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284764"))) PPC_WEAK_FUNC(sub_83284764);
PPC_FUNC_IMPL(__imp__sub_83284764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284768"))) PPC_WEAK_FUNC(sub_83284768);
PPC_FUNC_IMPL(__imp__sub_83284768) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10432(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284770"))) PPC_WEAK_FUNC(sub_83284770);
PPC_FUNC_IMPL(__imp__sub_83284770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// addi r10,r3,10440
	ctx.r10.s64 = ctx.r3.s64 + 10440;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83284784:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83284798
	if (ctx.cr6.eq) goto loc_83284798;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x832847a0
	if (!ctx.cr6.eq) goto loc_832847A0;
loc_83284798:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r11.u32);
loc_832847A0:
	// addi r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 + 280;
	// bdnz 0x83284784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83284784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832847AC"))) PPC_WEAK_FUNC(sub_832847AC);
PPC_FUNC_IMPL(__imp__sub_832847AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832847B0"))) PPC_WEAK_FUNC(sub_832847B0);
PPC_FUNC_IMPL(__imp__sub_832847B0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x832847D0;
	sub_832821E0(ctx, base);
	// lwz r11,10428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10428);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r31,10440
	ctx.r10.s64 = ctx.r31.s64 + 10440;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83284814
	if (!ctx.cr6.gt) goto loc_83284814;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832847E8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x832847fc
	if (ctx.cr6.eq) goto loc_832847FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8328480c
	if (!ctx.cr6.eq) goto loc_8328480C;
loc_832847FC:
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8328480c
	if (!ctx.cr6.eq) goto loc_8328480C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8328480C:
	// addi r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 + 280;
	// bdnz 0x832847e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832847E8;
loc_83284814:
	// lwz r11,10432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10432);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8328482c
	if (!ctx.cr6.eq) goto loc_8328482C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8328482c
	if (!ctx.cr6.eq) goto loc_8328482C;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8328482C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x83284834;
	sub_832821F0(ctx, base);
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

__attribute__((alias("__imp__sub_83284850"))) PPC_WEAK_FUNC(sub_83284850);
PPC_FUNC_IMPL(__imp__sub_83284850) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x8328486C;
	sub_832821E0(ctx, base);
	// lwz r9,10428(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10428);
	// addi r11,r31,10440
	ctx.r11.s64 = ctx.r31.s64 + 10440;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x832848b4
	if (!ctx.cr6.gt) goto loc_832848B4;
loc_83284880:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x83284898
	if (!ctx.cr6.eq) goto loc_83284898;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x832848ac
	if (ctx.cr6.eq) goto loc_832848AC;
loc_83284898:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83284880
	if (ctx.cr6.lt) goto loc_83284880;
	// b 0x832848b4
	goto loc_832848B4;
loc_832848AC:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_832848B4:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x832821f0
	ctx.lr = 0x832848CC;
	sub_832821F0(ctx, base);
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

__attribute__((alias("__imp__sub_832848E4"))) PPC_WEAK_FUNC(sub_832848E4);
PPC_FUNC_IMPL(__imp__sub_832848E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832848E8"))) PPC_WEAK_FUNC(sub_832848E8);
PPC_FUNC_IMPL(__imp__sub_832848E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832848FC"))) PPC_WEAK_FUNC(sub_832848FC);
PPC_FUNC_IMPL(__imp__sub_832848FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284900"))) PPC_WEAK_FUNC(sub_83284900);
PPC_FUNC_IMPL(__imp__sub_83284900) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284914"))) PPC_WEAK_FUNC(sub_83284914);
PPC_FUNC_IMPL(__imp__sub_83284914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284918"))) PPC_WEAK_FUNC(sub_83284918);
PPC_FUNC_IMPL(__imp__sub_83284918) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328492C"))) PPC_WEAK_FUNC(sub_8328492C);
PPC_FUNC_IMPL(__imp__sub_8328492C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284930"))) PPC_WEAK_FUNC(sub_83284930);
PPC_FUNC_IMPL(__imp__sub_83284930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284960"))) PPC_WEAK_FUNC(sub_83284960);
PPC_FUNC_IMPL(__imp__sub_83284960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284988"))) PPC_WEAK_FUNC(sub_83284988);
PPC_FUNC_IMPL(__imp__sub_83284988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83284998
	if (!ctx.cr6.eq) goto loc_83284998;
loc_83284990:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83284998:
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83284990
	if (ctx.cr6.lt) goto loc_83284990;
	// ble cr6,0x832849b4
	if (!ctx.cr6.gt) goto loc_832849B4;
loc_832849AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832849B4:
	// lwz r11,248(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83284990
	if (ctx.cr6.lt) goto loc_83284990;
	// bgt cr6,0x832849ac
	if (ctx.cr6.gt) goto loc_832849AC;
	// lwz r11,252(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83284990
	if (ctx.cr6.lt) goto loc_83284990;
	// bgt cr6,0x832849ac
	if (ctx.cr6.gt) goto loc_832849AC;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r10,256(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832849FC"))) PPC_WEAK_FUNC(sub_832849FC);
PPC_FUNC_IMPL(__imp__sub_832849FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284A00"))) PPC_WEAK_FUNC(sub_83284A00);
PPC_FUNC_IMPL(__imp__sub_83284A00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addic. r10,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r10.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284A20"))) PPC_WEAK_FUNC(sub_83284A20);
PPC_FUNC_IMPL(__imp__sub_83284A20) {
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
	// lwz r11,2352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83284a54
	if (!ctx.cr6.gt) goto loc_83284A54;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x83284a4c
	if (!ctx.cr6.eq) goto loc_83284A4C;
	// lwz r11,2356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2356);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x83284a54
	if (ctx.cr6.eq) goto loc_83284A54;
loc_83284A4C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83284a7c
	goto loc_83284A7C;
loc_83284A54:
	// lwz r11,3468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3468);
	// lwz r3,3472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83284a78
	if (ctx.cr6.eq) goto loc_83284A78;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83284A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne 0x83284a7c
	if (!ctx.cr0.eq) goto loc_83284A7C;
loc_83284A78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83284A7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284A8C"))) PPC_WEAK_FUNC(sub_83284A8C);
PPC_FUNC_IMPL(__imp__sub_83284A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284A90"))) PPC_WEAK_FUNC(sub_83284A90);
PPC_FUNC_IMPL(__imp__sub_83284A90) {
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
	// addi r11,r3,14920
	ctx.r11.s64 = ctx.r3.s64 + 14920;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83284b2c
	if (ctx.cr6.eq) goto loc_83284B2C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x83284b2c
	if (ctx.cr6.eq) goto loc_83284B2C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83284b2c
	if (ctx.cr6.eq) goto loc_83284B2C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83284ad8
	if (!ctx.cr6.lt) goto loc_83284AD8;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3869
	ctx.r4.u64 = ctx.r4.u64 | 3869;
	// bl 0x83282390
	ctx.lr = 0x83284AD4;
	sub_83282390(ctx, base);
	// b 0x83284b38
	goto loc_83284B38;
loc_83284AD8:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_83284B00:
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt cr6,0x83284b10
	if (ctx.cr6.lt) goto loc_83284B10;
	// li r7,16
	ctx.r7.s64 = 16;
loc_83284B10:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x83284b34
	if (!ctx.cr6.lt) goto loc_83284B34;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x83284b00
	goto loc_83284B00;
loc_83284B2C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83284620
	ctx.lr = 0x83284B34;
	sub_83284620(ctx, base);
loc_83284B34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83284B38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284B48"))) PPC_WEAK_FUNC(sub_83284B48);
PPC_FUNC_IMPL(__imp__sub_83284B48) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83284ba8
	if (!ctx.cr6.eq) goto loc_83284BA8;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x83284698
	ctx.lr = 0x83284B6C;
	sub_83284698(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bne 0x83284b8c
	if (!ctx.cr0.eq) goto loc_83284B8C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3871
	ctx.r4.u64 = ctx.r4.u64 | 3871;
loc_83284B84:
	// bl 0x83282390
	ctx.lr = 0x83284B88;
	sub_83282390(ctx, base);
	// b 0x83284b98
	goto loc_83284B98;
loc_83284B8C:
	// bl 0x832846c8
	ctx.lr = 0x83284B90;
	sub_832846C8(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
loc_83284B94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83284B98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83284BA8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83284750
	ctx.lr = 0x83284BB0;
	sub_83284750(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// beq cr6,0x83284bd0
	if (ctx.cr6.eq) goto loc_83284BD0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3854
	ctx.r4.u64 = ctx.r4.u64 | 3854;
	// b 0x83284b84
	goto loc_83284B84;
loc_83284BD0:
	// bl 0x83284658
	ctx.lr = 0x83284BD4;
	sub_83284658(ctx, base);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r11,10436(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10436);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x83284b94
	if (ctx.cr6.eq) goto loc_83284B94;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// ori r4,r4,3855
	ctx.r4.u64 = ctx.r4.u64 | 3855;
	// b 0x83284b84
	goto loc_83284B84;
}

__attribute__((alias("__imp__sub_83284BF4"))) PPC_WEAK_FUNC(sub_83284BF4);
PPC_FUNC_IMPL(__imp__sub_83284BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284BF8"))) PPC_WEAK_FUNC(sub_83284BF8);
PPC_FUNC_IMPL(__imp__sub_83284BF8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x83284C18;
	sub_832821E0(ctx, base);
	// lwz r11,10428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10428);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r30,10440
	ctx.r4.s64 = ctx.r30.s64 + 10440;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83284c9c
	if (!ctx.cr6.gt) goto loc_83284C9C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_83284C34:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83284c48
	if (ctx.cr6.eq) goto loc_83284C48;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83284c6c
	if (!ctx.cr6.eq) goto loc_83284C6C;
loc_83284C48:
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83284c6c
	if (!ctx.cr6.eq) goto loc_83284C6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bl 0x83284988
	ctx.lr = 0x83284C60;
	sub_83284988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83284c6c
	if (ctx.cr0.eq) goto loc_83284C6C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_83284C6C:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r4,r4,280
	ctx.r4.s64 = ctx.r4.s64 + 280;
	// bne 0x83284c34
	if (!ctx.cr0.eq) goto loc_83284C34;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x83284c9c
	if (!ctx.cr6.eq) goto loc_83284C9C;
	// lwz r11,10432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83284c9c
	if (!ctx.cr6.eq) goto loc_83284C9C;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_83284C9C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x83284CA4;
	sub_832821F0(ctx, base);
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

__attribute__((alias("__imp__sub_83284CC0"))) PPC_WEAK_FUNC(sub_83284CC0);
PPC_FUNC_IMPL(__imp__sub_83284CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83284CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,10440
	ctx.r4.s64 = ctx.r3.s64 + 10440;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// ble cr6,0x83284d5c
	if (!ctx.cr6.gt) goto loc_83284D5C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83284CF8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83284d0c
	if (ctx.cr6.eq) goto loc_83284D0C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83284d50
	if (!ctx.cr6.eq) goto loc_83284D50;
loc_83284D0C:
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83284d50
	if (!ctx.cr6.eq) goto loc_83284D50;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83284988
	ctx.lr = 0x83284D28;
	sub_83284988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83284d3c
	if (ctx.cr0.eq) goto loc_83284D3C;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// b 0x83284d50
	goto loc_83284D50;
loc_83284D3C:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x83284988
	ctx.lr = 0x83284D44;
	sub_83284988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83284d50
	if (ctx.cr0.eq) goto loc_83284D50;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_83284D50:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r4,r4,280
	ctx.r4.s64 = ctx.r4.s64 + 280;
	// bne 0x83284cf8
	if (!ctx.cr0.eq) goto loc_83284CF8;
loc_83284D5C:
	// lwz r11,10432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83284d6c
	if (!ctx.cr6.eq) goto loc_83284D6C;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_83284D6C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x83284d7c
	if (ctx.cr6.gt) goto loc_83284D7C;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// b 0x83284d84
	goto loc_83284D84;
loc_83284D7C:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x83284d88
	if (!ctx.cr6.eq) goto loc_83284D88;
loc_83284D84:
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
loc_83284D88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284D90"))) PPC_WEAK_FUNC(sub_83284D90);
PPC_FUNC_IMPL(__imp__sub_83284D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83284D98;
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
	ctx.lr = 0x83284DB0;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83284dcc
	if (ctx.cr0.eq) goto loc_83284DCC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,389
	ctx.r4.u64 = ctx.r4.u64 | 389;
	// bl 0x83282390
	ctx.lr = 0x83284DC8;
	sub_83282390(ctx, base);
	// b 0x83284de0
	goto loc_83284DE0;
loc_83284DCC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284a90
	ctx.lr = 0x83284DE0;
	sub_83284A90(ctx, base);
loc_83284DE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284DE8"))) PPC_WEAK_FUNC(sub_83284DE8);
PPC_FUNC_IMPL(__imp__sub_83284DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r10,r11,11104
	ctx.r10.s64 = ctx.r11.s64 + 11104;
	// lwz r4,11104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11104);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83284a90
	sub_83284A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284E00"))) PPC_WEAK_FUNC(sub_83284E00);
PPC_FUNC_IMPL(__imp__sub_83284E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83284E08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83284bf8
	ctx.lr = 0x83284E20;
	sub_83284BF8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83284e38
	if (!ctx.cr0.eq) goto loc_83284E38;
loc_83284E28:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83284ee0
	goto loc_83284EE0;
loc_83284E38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284710
	ctx.lr = 0x83284E44;
	sub_83284710(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83284E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,4128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4128, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83278298
	ctx.lr = 0x83284E7C;
	sub_83278298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83284e28
	if (ctx.cr0.eq) goto loc_83284E28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832776c8
	ctx.lr = 0x83284E8C;
	sub_832776C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83284e28
	if (ctx.cr0.eq) goto loc_83284E28;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83284eb0
	if (!ctx.cr6.eq) goto loc_83284EB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284a00
	ctx.lr = 0x83284EA8;
	sub_83284A00(ctx, base);
	// stw r3,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r3.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_83284EB0:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83284ed0
	if (ctx.cr6.eq) goto loc_83284ED0;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83284ed0
	if (ctx.cr6.eq) goto loc_83284ED0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83284ee0
	goto loc_83284EE0;
loc_83284ED0:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3891
	ctx.r4.u64 = ctx.r4.u64 | 3891;
	// bl 0x83282390
	ctx.lr = 0x83284EE0;
	sub_83282390(ctx, base);
loc_83284EE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284EE8"))) PPC_WEAK_FUNC(sub_83284EE8);
PPC_FUNC_IMPL(__imp__sub_83284EE8) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x83284b48
	ctx.lr = 0x83284F00;
	sub_83284B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83284f20
	if (!ctx.cr0.eq) goto loc_83284F20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x83284930
	ctx.lr = 0x83284F1C;
	sub_83284930(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83284F20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284F30"))) PPC_WEAK_FUNC(sub_83284F30);
PPC_FUNC_IMPL(__imp__sub_83284F30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832821e0
	ctx.lr = 0x83284F50;
	sub_832821E0(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83284f64
	if (ctx.cr6.eq) goto loc_83284F64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83284fb0
	goto loc_83284FB0;
loc_83284F64:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83284cc0
	ctx.lr = 0x83284F74;
	sub_83284CC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83284fb0
	if (ctx.cr6.eq) goto loc_83284FB0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x83284F8C;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83284fb0
	if (ctx.cr0.eq) goto loc_83284FB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83278158
	ctx.lr = 0x83284FA4;
	sub_83278158(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_83284FB0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832821f0
	ctx.lr = 0x83284FB8;
	sub_832821F0(ctx, base);
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

__attribute__((alias("__imp__sub_83284FD4"))) PPC_WEAK_FUNC(sub_83284FD4);
PPC_FUNC_IMPL(__imp__sub_83284FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284FD8"))) PPC_WEAK_FUNC(sub_83284FD8);
PPC_FUNC_IMPL(__imp__sub_83284FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83284FE0;
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
	ctx.lr = 0x83284FF8;
	sub_832821E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284ee8
	ctx.lr = 0x83285008;
	sub_83284EE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x83285014;
	sub_832821F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285020"))) PPC_WEAK_FUNC(sub_83285020);
PPC_FUNC_IMPL(__imp__sub_83285020) {
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
	// bl 0x83282090
	ctx.lr = 0x83285038;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83285058
	if (ctx.cr0.eq) goto loc_83285058;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,387
	ctx.r4.u64 = ctx.r4.u64 | 387;
	// bl 0x83282390
	ctx.lr = 0x83285050;
	sub_83282390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83285068
	goto loc_83285068;
loc_83285058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284f30
	ctx.lr = 0x83285060;
	sub_83284F30(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_83285068:
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

__attribute__((alias("__imp__sub_8328507C"))) PPC_WEAK_FUNC(sub_8328507C);
PPC_FUNC_IMPL(__imp__sub_8328507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285080"))) PPC_WEAK_FUNC(sub_83285080);
PPC_FUNC_IMPL(__imp__sub_83285080) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r11,11116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285094"))) PPC_WEAK_FUNC(sub_83285094);
PPC_FUNC_IMPL(__imp__sub_83285094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285098"))) PPC_WEAK_FUNC(sub_83285098);
PPC_FUNC_IMPL(__imp__sub_83285098) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r11,11116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11116);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,11116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832850AC"))) PPC_WEAK_FUNC(sub_832850AC);
PPC_FUNC_IMPL(__imp__sub_832850AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832850B0"))) PPC_WEAK_FUNC(sub_832850B0);
PPC_FUNC_IMPL(__imp__sub_832850B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832850B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bge cr6,0x83285100
	if (!ctx.cr6.lt) goto loc_83285100;
loc_832850F0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83285224
	goto loc_83285224;
loc_83285100:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83291050
	ctx.lr = 0x8328510C;
	sub_83291050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x83285178
	if (ctx.cr0.eq) goto loc_83285178;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83290630
	ctx.lr = 0x83285124;
	sub_83290630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83285134
	if (!ctx.cr0.eq) goto loc_83285134;
loc_8328512C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83285224
	goto loc_83285224;
loc_83285134:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ff08
	ctx.lr = 0x83285144;
	sub_8328FF08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328512c
	if (ctx.cr0.eq) goto loc_8328512C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ff20
	ctx.lr = 0x8328515C;
	sub_8328FF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328516c
	if (!ctx.cr0.eq) goto loc_8328516C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_8328516C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x832851dc
	goto loc_832851DC;
loc_83285178:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8328fd28
	ctx.lr = 0x83285180;
	sub_8328FD28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832851d0
	if (ctx.cr0.eq) goto loc_832851D0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328fca0
	ctx.lr = 0x83285198;
	sub_8328FCA0(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328eb98
	ctx.lr = 0x832851A8;
	sub_8328EB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328512c
	if (ctx.cr0.eq) goto loc_8328512C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ec08
	ctx.lr = 0x832851C0;
	sub_8328EC08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328512c
	if (ctx.cr0.eq) goto loc_8328512C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832851D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832850f0
	if (!ctx.cr6.eq) goto loc_832850F0;
loc_832851DC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r8,r11,100
	ctx.r8.s64 = ctx.r11.s64 * 100;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r10,100
	ctx.r11.s64 = ctx.r10.s64 * 100;
	// mulli r10,r5,100
	ctx.r10.s64 = ctx.r5.s64 * 100;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
loc_83285224:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328522C"))) PPC_WEAK_FUNC(sub_8328522C);
PPC_FUNC_IMPL(__imp__sub_8328522C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285230"))) PPC_WEAK_FUNC(sub_83285230);
PPC_FUNC_IMPL(__imp__sub_83285230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285240
	if (!ctx.cr6.lt) goto loc_83285240;
	// b 0x83290598
	sub_83290598(ctx, base);
	return;
loc_83285240:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328524c
	if (!ctx.cr6.lt) goto loc_8328524C;
	// b 0x8328fb50
	sub_8328FB50(ctx, base);
	return;
loc_8328524C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285254"))) PPC_WEAK_FUNC(sub_83285254);
PPC_FUNC_IMPL(__imp__sub_83285254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285258"))) PPC_WEAK_FUNC(sub_83285258);
PPC_FUNC_IMPL(__imp__sub_83285258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285268
	if (!ctx.cr6.lt) goto loc_83285268;
	// b 0x83291170
	sub_83291170(ctx, base);
	return;
loc_83285268:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285274
	if (!ctx.cr6.lt) goto loc_83285274;
	// b 0x8328fb98
	sub_8328FB98(ctx, base);
	return;
loc_83285274:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328527C"))) PPC_WEAK_FUNC(sub_8328527C);
PPC_FUNC_IMPL(__imp__sub_8328527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285280"))) PPC_WEAK_FUNC(sub_83285280);
PPC_FUNC_IMPL(__imp__sub_83285280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285290
	if (!ctx.cr6.lt) goto loc_83285290;
	// b 0x83290630
	sub_83290630(ctx, base);
	return;
loc_83285290:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328529c
	if (!ctx.cr6.lt) goto loc_8328529C;
	// b 0x8328fca0
	sub_8328FCA0(ctx, base);
	return;
loc_8328529C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832852A4"))) PPC_WEAK_FUNC(sub_832852A4);
PPC_FUNC_IMPL(__imp__sub_832852A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832852A8"))) PPC_WEAK_FUNC(sub_832852A8);
PPC_FUNC_IMPL(__imp__sub_832852A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832852b8
	if (!ctx.cr6.lt) goto loc_832852B8;
	// b 0x8328ff38
	sub_8328FF38(ctx, base);
	return;
loc_832852B8:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832852c4
	if (!ctx.cr6.lt) goto loc_832852C4;
	// b 0x8328fc00
	sub_8328FC00(ctx, base);
	return;
loc_832852C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832852CC"))) PPC_WEAK_FUNC(sub_832852CC);
PPC_FUNC_IMPL(__imp__sub_832852CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832852D0"))) PPC_WEAK_FUNC(sub_832852D0);
PPC_FUNC_IMPL(__imp__sub_832852D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832852e0
	if (!ctx.cr6.lt) goto loc_832852E0;
	// b 0x8328ff98
	sub_8328FF98(ctx, base);
	return;
loc_832852E0:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832852ec
	if (!ctx.cr6.lt) goto loc_832852EC;
	// b 0x8328ec78
	sub_8328EC78(ctx, base);
	return;
loc_832852EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832852F4"))) PPC_WEAK_FUNC(sub_832852F4);
PPC_FUNC_IMPL(__imp__sub_832852F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832852F8"))) PPC_WEAK_FUNC(sub_832852F8);
PPC_FUNC_IMPL(__imp__sub_832852F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285308
	if (!ctx.cr6.lt) goto loc_83285308;
	// b 0x8328fff8
	sub_8328FFF8(ctx, base);
	return;
loc_83285308:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285314
	if (!ctx.cr6.lt) goto loc_83285314;
	// b 0x8328ec88
	sub_8328EC88(ctx, base);
	return;
loc_83285314:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328531C"))) PPC_WEAK_FUNC(sub_8328531C);
PPC_FUNC_IMPL(__imp__sub_8328531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285320"))) PPC_WEAK_FUNC(sub_83285320);
PPC_FUNC_IMPL(__imp__sub_83285320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285330
	if (!ctx.cr6.lt) goto loc_83285330;
	// b 0x83290058
	sub_83290058(ctx, base);
	return;
loc_83285330:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328533c
	if (!ctx.cr6.lt) goto loc_8328533C;
	// b 0x8328ec98
	sub_8328EC98(ctx, base);
	return;
loc_8328533C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285344"))) PPC_WEAK_FUNC(sub_83285344);
PPC_FUNC_IMPL(__imp__sub_83285344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285348"))) PPC_WEAK_FUNC(sub_83285348);
PPC_FUNC_IMPL(__imp__sub_83285348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285358
	if (!ctx.cr6.lt) goto loc_83285358;
	// b 0x832900b8
	sub_832900B8(ctx, base);
	return;
loc_83285358:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285364
	if (!ctx.cr6.lt) goto loc_83285364;
	// b 0x8328ed50
	sub_8328ED50(ctx, base);
	return;
loc_83285364:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328536C"))) PPC_WEAK_FUNC(sub_8328536C);
PPC_FUNC_IMPL(__imp__sub_8328536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285370"))) PPC_WEAK_FUNC(sub_83285370);
PPC_FUNC_IMPL(__imp__sub_83285370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285380
	if (!ctx.cr6.lt) goto loc_83285380;
	// b 0x83290118
	sub_83290118(ctx, base);
	return;
loc_83285380:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328538c
	if (!ctx.cr6.lt) goto loc_8328538C;
	// b 0x8328edb0
	sub_8328EDB0(ctx, base);
	return;
loc_8328538C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285394"))) PPC_WEAK_FUNC(sub_83285394);
PPC_FUNC_IMPL(__imp__sub_83285394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285398"))) PPC_WEAK_FUNC(sub_83285398);
PPC_FUNC_IMPL(__imp__sub_83285398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832853a8
	if (!ctx.cr6.lt) goto loc_832853A8;
	// b 0x83290178
	sub_83290178(ctx, base);
	return;
loc_832853A8:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832853b4
	if (!ctx.cr6.lt) goto loc_832853B4;
	// b 0x8328ee10
	sub_8328EE10(ctx, base);
	return;
loc_832853B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832853BC"))) PPC_WEAK_FUNC(sub_832853BC);
PPC_FUNC_IMPL(__imp__sub_832853BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832853C0"))) PPC_WEAK_FUNC(sub_832853C0);
PPC_FUNC_IMPL(__imp__sub_832853C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832853d0
	if (!ctx.cr6.lt) goto loc_832853D0;
	// b 0x832901d8
	sub_832901D8(ctx, base);
	return;
loc_832853D0:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832853dc
	if (!ctx.cr6.lt) goto loc_832853DC;
	// b 0x8328ee70
	sub_8328EE70(ctx, base);
	return;
loc_832853DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832853E4"))) PPC_WEAK_FUNC(sub_832853E4);
PPC_FUNC_IMPL(__imp__sub_832853E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832853E8"))) PPC_WEAK_FUNC(sub_832853E8);
PPC_FUNC_IMPL(__imp__sub_832853E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832853f8
	if (!ctx.cr6.lt) goto loc_832853F8;
	// b 0x83290238
	sub_83290238(ctx, base);
	return;
loc_832853F8:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285404
	if (!ctx.cr6.lt) goto loc_83285404;
	// b 0x8328eed0
	sub_8328EED0(ctx, base);
	return;
loc_83285404:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328540C"))) PPC_WEAK_FUNC(sub_8328540C);
PPC_FUNC_IMPL(__imp__sub_8328540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285410"))) PPC_WEAK_FUNC(sub_83285410);
PPC_FUNC_IMPL(__imp__sub_83285410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285420
	if (!ctx.cr6.lt) goto loc_83285420;
	// b 0x832902b0
	sub_832902B0(ctx, base);
	return;
loc_83285420:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328542c
	if (!ctx.cr6.lt) goto loc_8328542C;
	// b 0x8328ef30
	sub_8328EF30(ctx, base);
	return;
loc_8328542C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285434"))) PPC_WEAK_FUNC(sub_83285434);
PPC_FUNC_IMPL(__imp__sub_83285434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285438"))) PPC_WEAK_FUNC(sub_83285438);
PPC_FUNC_IMPL(__imp__sub_83285438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285448
	if (!ctx.cr6.lt) goto loc_83285448;
	// b 0x83290310
	sub_83290310(ctx, base);
	return;
loc_83285448:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285454
	if (!ctx.cr6.lt) goto loc_83285454;
	// b 0x8328ef90
	sub_8328EF90(ctx, base);
	return;
loc_83285454:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328545C"))) PPC_WEAK_FUNC(sub_8328545C);
PPC_FUNC_IMPL(__imp__sub_8328545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285460"))) PPC_WEAK_FUNC(sub_83285460);
PPC_FUNC_IMPL(__imp__sub_83285460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285470
	if (!ctx.cr6.lt) goto loc_83285470;
	// b 0x83290370
	sub_83290370(ctx, base);
	return;
loc_83285470:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328547c
	if (!ctx.cr6.lt) goto loc_8328547C;
	// b 0x8328eff0
	sub_8328EFF0(ctx, base);
	return;
loc_8328547C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285484"))) PPC_WEAK_FUNC(sub_83285484);
PPC_FUNC_IMPL(__imp__sub_83285484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285488"))) PPC_WEAK_FUNC(sub_83285488);
PPC_FUNC_IMPL(__imp__sub_83285488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285498
	if (!ctx.cr6.lt) goto loc_83285498;
	// b 0x832903d0
	sub_832903D0(ctx, base);
	return;
loc_83285498:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832854a4
	if (!ctx.cr6.lt) goto loc_832854A4;
	// b 0x8328f050
	sub_8328F050(ctx, base);
	return;
loc_832854A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832854AC"))) PPC_WEAK_FUNC(sub_832854AC);
PPC_FUNC_IMPL(__imp__sub_832854AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832854B0"))) PPC_WEAK_FUNC(sub_832854B0);
PPC_FUNC_IMPL(__imp__sub_832854B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x832854c8
	if (ctx.cr6.lt) goto loc_832854C8;
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832854c8
	if (!ctx.cr6.lt) goto loc_832854C8;
	// b 0x8328f0b0
	sub_8328F0B0(ctx, base);
	return;
loc_832854C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832854D0"))) PPC_WEAK_FUNC(sub_832854D0);
PPC_FUNC_IMPL(__imp__sub_832854D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832854e0
	if (!ctx.cr6.lt) goto loc_832854E0;
	// b 0x83290740
	sub_83290740(ctx, base);
	return;
loc_832854E0:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832854ec
	if (!ctx.cr6.lt) goto loc_832854EC;
	// b 0x8328f130
	sub_8328F130(ctx, base);
	return;
loc_832854EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832854F4"))) PPC_WEAK_FUNC(sub_832854F4);
PPC_FUNC_IMPL(__imp__sub_832854F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832854F8"))) PPC_WEAK_FUNC(sub_832854F8);
PPC_FUNC_IMPL(__imp__sub_832854F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285508
	if (!ctx.cr6.lt) goto loc_83285508;
	// b 0x83290800
	sub_83290800(ctx, base);
	return;
loc_83285508:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285514
	if (!ctx.cr6.lt) goto loc_83285514;
	// b 0x8328f218
	sub_8328F218(ctx, base);
	return;
loc_83285514:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328551C"))) PPC_WEAK_FUNC(sub_8328551C);
PPC_FUNC_IMPL(__imp__sub_8328551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285520"))) PPC_WEAK_FUNC(sub_83285520);
PPC_FUNC_IMPL(__imp__sub_83285520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285530
	if (!ctx.cr6.lt) goto loc_83285530;
	// b 0x83290888
	sub_83290888(ctx, base);
	return;
loc_83285530:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328553c
	if (!ctx.cr6.lt) goto loc_8328553C;
	// b 0x8328f2b8
	sub_8328F2B8(ctx, base);
	return;
loc_8328553C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285544"))) PPC_WEAK_FUNC(sub_83285544);
PPC_FUNC_IMPL(__imp__sub_83285544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285548"))) PPC_WEAK_FUNC(sub_83285548);
PPC_FUNC_IMPL(__imp__sub_83285548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285558
	if (!ctx.cr6.lt) goto loc_83285558;
	// b 0x832908f8
	sub_832908F8(ctx, base);
	return;
loc_83285558:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285564
	if (!ctx.cr6.lt) goto loc_83285564;
	// b 0x8328f330
	sub_8328F330(ctx, base);
	return;
loc_83285564:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328556C"))) PPC_WEAK_FUNC(sub_8328556C);
PPC_FUNC_IMPL(__imp__sub_8328556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285570"))) PPC_WEAK_FUNC(sub_83285570);
PPC_FUNC_IMPL(__imp__sub_83285570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285580
	if (!ctx.cr6.lt) goto loc_83285580;
	// b 0x83290968
	sub_83290968(ctx, base);
	return;
loc_83285580:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328558c
	if (!ctx.cr6.lt) goto loc_8328558C;
	// b 0x8328f3a8
	sub_8328F3A8(ctx, base);
	return;
loc_8328558C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285594"))) PPC_WEAK_FUNC(sub_83285594);
PPC_FUNC_IMPL(__imp__sub_83285594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285598"))) PPC_WEAK_FUNC(sub_83285598);
PPC_FUNC_IMPL(__imp__sub_83285598) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832855a8
	if (!ctx.cr6.lt) goto loc_832855A8;
	// b 0x83290a38
	sub_83290A38(ctx, base);
	return;
loc_832855A8:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832855b4
	if (!ctx.cr6.lt) goto loc_832855B4;
	// b 0x8328f490
	sub_8328F490(ctx, base);
	return;
loc_832855B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832855BC"))) PPC_WEAK_FUNC(sub_832855BC);
PPC_FUNC_IMPL(__imp__sub_832855BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832855C0"))) PPC_WEAK_FUNC(sub_832855C0);
PPC_FUNC_IMPL(__imp__sub_832855C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832855d0
	if (!ctx.cr6.lt) goto loc_832855D0;
	// b 0x83290ac0
	sub_83290AC0(ctx, base);
	return;
loc_832855D0:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832855dc
	if (!ctx.cr6.lt) goto loc_832855DC;
	// b 0x8328f518
	sub_8328F518(ctx, base);
	return;
loc_832855DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832855E4"))) PPC_WEAK_FUNC(sub_832855E4);
PPC_FUNC_IMPL(__imp__sub_832855E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832855E8"))) PPC_WEAK_FUNC(sub_832855E8);
PPC_FUNC_IMPL(__imp__sub_832855E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832855f8
	if (!ctx.cr6.lt) goto loc_832855F8;
	// b 0x83290b30
	sub_83290B30(ctx, base);
	return;
loc_832855F8:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285604
	if (!ctx.cr6.lt) goto loc_83285604;
	// b 0x8328f598
	sub_8328F598(ctx, base);
	return;
loc_83285604:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328560C"))) PPC_WEAK_FUNC(sub_8328560C);
PPC_FUNC_IMPL(__imp__sub_8328560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285610"))) PPC_WEAK_FUNC(sub_83285610);
PPC_FUNC_IMPL(__imp__sub_83285610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285620
	if (!ctx.cr6.lt) goto loc_83285620;
	// b 0x83290ba8
	sub_83290BA8(ctx, base);
	return;
loc_83285620:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328562c
	if (!ctx.cr6.lt) goto loc_8328562C;
	// b 0x8328f608
	sub_8328F608(ctx, base);
	return;
loc_8328562C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285634"))) PPC_WEAK_FUNC(sub_83285634);
PPC_FUNC_IMPL(__imp__sub_83285634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285638"))) PPC_WEAK_FUNC(sub_83285638);
PPC_FUNC_IMPL(__imp__sub_83285638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285648
	if (!ctx.cr6.lt) goto loc_83285648;
	// b 0x83290c18
	sub_83290C18(ctx, base);
	return;
loc_83285648:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285654
	if (!ctx.cr6.lt) goto loc_83285654;
	// b 0x8328f678
	sub_8328F678(ctx, base);
	return;
loc_83285654:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328565C"))) PPC_WEAK_FUNC(sub_8328565C);
PPC_FUNC_IMPL(__imp__sub_8328565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285660"))) PPC_WEAK_FUNC(sub_83285660);
PPC_FUNC_IMPL(__imp__sub_83285660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285670
	if (!ctx.cr6.lt) goto loc_83285670;
	// b 0x83290c88
	sub_83290C88(ctx, base);
	return;
loc_83285670:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328567c
	if (!ctx.cr6.lt) goto loc_8328567C;
	// b 0x8328f6e8
	sub_8328F6E8(ctx, base);
	return;
loc_8328567C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285684"))) PPC_WEAK_FUNC(sub_83285684);
PPC_FUNC_IMPL(__imp__sub_83285684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285688"))) PPC_WEAK_FUNC(sub_83285688);
PPC_FUNC_IMPL(__imp__sub_83285688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285698
	if (!ctx.cr6.lt) goto loc_83285698;
	// b 0x83290d00
	sub_83290D00(ctx, base);
	return;
loc_83285698:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832856a4
	if (!ctx.cr6.lt) goto loc_832856A4;
	// b 0x8328f760
	sub_8328F760(ctx, base);
	return;
loc_832856A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832856AC"))) PPC_WEAK_FUNC(sub_832856AC);
PPC_FUNC_IMPL(__imp__sub_832856AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832856B0"))) PPC_WEAK_FUNC(sub_832856B0);
PPC_FUNC_IMPL(__imp__sub_832856B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832856c0
	if (!ctx.cr6.lt) goto loc_832856C0;
	// b 0x83290d78
	sub_83290D78(ctx, base);
	return;
loc_832856C0:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832856cc
	if (!ctx.cr6.lt) goto loc_832856CC;
	// b 0x8328f7d8
	sub_8328F7D8(ctx, base);
	return;
loc_832856CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832856D4"))) PPC_WEAK_FUNC(sub_832856D4);
PPC_FUNC_IMPL(__imp__sub_832856D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832856D8"))) PPC_WEAK_FUNC(sub_832856D8);
PPC_FUNC_IMPL(__imp__sub_832856D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x832856e8
	if (!ctx.cr6.lt) goto loc_832856E8;
	// b 0x83290de8
	sub_83290DE8(ctx, base);
	return;
loc_832856E8:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x832856f4
	if (!ctx.cr6.lt) goto loc_832856F4;
	// b 0x8328f848
	sub_8328F848(ctx, base);
	return;
loc_832856F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832856FC"))) PPC_WEAK_FUNC(sub_832856FC);
PPC_FUNC_IMPL(__imp__sub_832856FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285700"))) PPC_WEAK_FUNC(sub_83285700);
PPC_FUNC_IMPL(__imp__sub_83285700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285710
	if (!ctx.cr6.lt) goto loc_83285710;
	// b 0x83290e68
	sub_83290E68(ctx, base);
	return;
loc_83285710:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328571c
	if (!ctx.cr6.lt) goto loc_8328571C;
	// b 0x8328f8c8
	sub_8328F8C8(ctx, base);
	return;
loc_8328571C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285724"))) PPC_WEAK_FUNC(sub_83285724);
PPC_FUNC_IMPL(__imp__sub_83285724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285728"))) PPC_WEAK_FUNC(sub_83285728);
PPC_FUNC_IMPL(__imp__sub_83285728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285738
	if (!ctx.cr6.lt) goto loc_83285738;
	// b 0x83290ee8
	sub_83290EE8(ctx, base);
	return;
loc_83285738:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285744
	if (!ctx.cr6.lt) goto loc_83285744;
	// b 0x8328f948
	sub_8328F948(ctx, base);
	return;
loc_83285744:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328574C"))) PPC_WEAK_FUNC(sub_8328574C);
PPC_FUNC_IMPL(__imp__sub_8328574C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285750"))) PPC_WEAK_FUNC(sub_83285750);
PPC_FUNC_IMPL(__imp__sub_83285750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285760
	if (!ctx.cr6.lt) goto loc_83285760;
	// b 0x83290f50
	sub_83290F50(ctx, base);
	return;
loc_83285760:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8328576c
	if (!ctx.cr6.lt) goto loc_8328576C;
	// b 0x8328f9b8
	sub_8328F9B8(ctx, base);
	return;
loc_8328576C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285774"))) PPC_WEAK_FUNC(sub_83285774);
PPC_FUNC_IMPL(__imp__sub_83285774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285778"))) PPC_WEAK_FUNC(sub_83285778);
PPC_FUNC_IMPL(__imp__sub_83285778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x83285788
	if (!ctx.cr6.lt) goto loc_83285788;
	// b 0x83290fd0
	sub_83290FD0(ctx, base);
	return;
loc_83285788:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x83285794
	if (!ctx.cr6.lt) goto loc_83285794;
	// b 0x8328fa38
	sub_8328FA38(ctx, base);
	return;
loc_83285794:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328579C"))) PPC_WEAK_FUNC(sub_8328579C);
PPC_FUNC_IMPL(__imp__sub_8328579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832857A0"))) PPC_WEAK_FUNC(sub_832857A0);
PPC_FUNC_IMPL(__imp__sub_832857A0) {
	PPC_FUNC_PROLOGUE();
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832857AC"))) PPC_WEAK_FUNC(sub_832857AC);
PPC_FUNC_IMPL(__imp__sub_832857AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832857B0"))) PPC_WEAK_FUNC(sub_832857B0);
PPC_FUNC_IMPL(__imp__sub_832857B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832857B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83285808
	if (ctx.cr6.eq) goto loc_83285808;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832857E4;
	sub_833A2B30(ctx, base);
	// cmpwi cr6,r30,2048
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2048, ctx.xer);
	// blt cr6,0x83285808
	if (ctx.cr6.lt) goto loc_83285808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832857a0
	ctx.lr = 0x832857F4;
	sub_832857A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83285808:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285814"))) PPC_WEAK_FUNC(sub_83285814);
PPC_FUNC_IMPL(__imp__sub_83285814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285818"))) PPC_WEAK_FUNC(sub_83285818);
PPC_FUNC_IMPL(__imp__sub_83285818) {
	PPC_FUNC_PROLOGUE();
	// b 0x832857a0
	sub_832857A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328581C"))) PPC_WEAK_FUNC(sub_8328581C);
PPC_FUNC_IMPL(__imp__sub_8328581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285820"))) PPC_WEAK_FUNC(sub_83285820);
PPC_FUNC_IMPL(__imp__sub_83285820) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328582C"))) PPC_WEAK_FUNC(sub_8328582C);
PPC_FUNC_IMPL(__imp__sub_8328582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285830"))) PPC_WEAK_FUNC(sub_83285830);
PPC_FUNC_IMPL(__imp__sub_83285830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285840"))) PPC_WEAK_FUNC(sub_83285840);
PPC_FUNC_IMPL(__imp__sub_83285840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285850"))) PPC_WEAK_FUNC(sub_83285850);
PPC_FUNC_IMPL(__imp__sub_83285850) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1372(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285858"))) PPC_WEAK_FUNC(sub_83285858);
PPC_FUNC_IMPL(__imp__sub_83285858) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8328587c
	if (!ctx.cr6.lt) goto loc_8328587C;
loc_83285874:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832858e8
	goto loc_832858E8;
loc_8328587C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285850
	ctx.lr = 0x83285884;
	sub_83285850(ctx, base);
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x8328589c
	if (ctx.cr6.lt) goto loc_8328589C;
loc_8328588C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,20292
	ctx.r3.s64 = ctx.r11.s64 + 20292;
	// bl 0x83278688
	ctx.lr = 0x83285898;
	sub_83278688(ctx, base);
	// b 0x83285874
	goto loc_83285874;
loc_8328589C:
	// lwz r11,1352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832858b4
	if (ctx.cr6.eq) goto loc_832858B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83273a68
	ctx.lr = 0x832858B0;
	sub_83273A68(ctx, base);
	// b 0x832858bc
	goto loc_832858BC;
loc_832858B4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83273aa0
	ctx.lr = 0x832858BC;
	sub_83273AA0(ctx, base);
loc_832858BC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8328588c
	if (ctx.cr6.eq) goto loc_8328588C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285850
	ctx.lr = 0x832858D0;
	sub_83285850(ctx, base);
	// addi r11,r3,344
	ctx.r11.s64 = ctx.r3.s64 + 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x83285830
	ctx.lr = 0x832858E4;
	sub_83285830(ctx, base);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_832858E8:
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

__attribute__((alias("__imp__sub_832858FC"))) PPC_WEAK_FUNC(sub_832858FC);
PPC_FUNC_IMPL(__imp__sub_832858FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285900"))) PPC_WEAK_FUNC(sub_83285900);
PPC_FUNC_IMPL(__imp__sub_83285900) {
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
	// lwz r11,1352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1352);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285928
	if (ctx.cr6.eq) goto loc_83285928;
	// bl 0x82c10e98
	ctx.lr = 0x83285924;
	sub_82C10E98(ctx, base);
	// b 0x83285930
	goto loc_83285930;
loc_83285928:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83273ae0
	ctx.lr = 0x83285930;
	sub_83273AE0(ctx, base);
loc_83285930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285840
	ctx.lr = 0x83285938;
	sub_83285840(ctx, base);
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

__attribute__((alias("__imp__sub_8328594C"))) PPC_WEAK_FUNC(sub_8328594C);
PPC_FUNC_IMPL(__imp__sub_8328594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285950"))) PPC_WEAK_FUNC(sub_83285950);
PPC_FUNC_IMPL(__imp__sub_83285950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83285958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,1500
	ctx.r31.s64 = ctx.r3.s64 + 1500;
	// li r29,32
	ctx.r29.s64 = 32;
loc_83285968:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83285984
	if (ctx.cr6.eq) goto loc_83285984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83285900
	ctx.lr = 0x8328597C;
	sub_83285900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83285984:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bne 0x83285968
	if (!ctx.cr0.eq) goto loc_83285968;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285998"))) PPC_WEAK_FUNC(sub_83285998);
PPC_FUNC_IMPL(__imp__sub_83285998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832859A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832859B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832859f8
	if (ctx.cr6.eq) goto loc_832859F8;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832859E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832859f8
	if (!ctx.cr0.eq) goto loc_832859F8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// blt cr6,0x832859b4
	if (ctx.cr6.lt) goto loc_832859B4;
loc_832859F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285A00"))) PPC_WEAK_FUNC(sub_83285A00);
PPC_FUNC_IMPL(__imp__sub_83285A00) {
	PPC_FUNC_PROLOGUE();
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285A34"))) PPC_WEAK_FUNC(sub_83285A34);
PPC_FUNC_IMPL(__imp__sub_83285A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285A38"))) PPC_WEAK_FUNC(sub_83285A38);
PPC_FUNC_IMPL(__imp__sub_83285A38) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,17
	ctx.r11.s64 = ctx.r4.s64 * 17;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r6,116
	ctx.r11.s64 = ctx.r6.s64 * 116;
	// addi r10,r10,2081
	ctx.r10.s64 = ctx.r10.s64 + 2081;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// stw r4,5148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5148, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285A5C"))) PPC_WEAK_FUNC(sub_83285A5C);
PPC_FUNC_IMPL(__imp__sub_83285A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285A60"))) PPC_WEAK_FUNC(sub_83285A60);
PPC_FUNC_IMPL(__imp__sub_83285A60) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// mulli r10,r5,68
	ctx.r10.s64 = ctx.r5.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r5,5152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5152, ctx.r5.u32);
	// stw r4,8320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8320, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285A7C"))) PPC_WEAK_FUNC(sub_83285A7C);
PPC_FUNC_IMPL(__imp__sub_83285A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285A80"))) PPC_WEAK_FUNC(sub_83285A80);
PPC_FUNC_IMPL(__imp__sub_83285A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83285A88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,8304
	ctx.r11.s64 = ctx.r3.s64 + 8304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_83285AA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285ad8
	if (ctx.cr6.eq) goto loc_83285AD8;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83285AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83285ae8
	if (!ctx.cr0.eq) goto loc_83285AE8;
loc_83285AD8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// blt cr6,0x83285aa4
	if (ctx.cr6.lt) goto loc_83285AA4;
loc_83285AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285AF0"))) PPC_WEAK_FUNC(sub_83285AF0);
PPC_FUNC_IMPL(__imp__sub_83285AF0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r11,8316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83285b14
	if (!ctx.cr6.eq) goto loc_83285B14;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83285B14:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83285B30"))) PPC_WEAK_FUNC(sub_83285B30);
PPC_FUNC_IMPL(__imp__sub_83285B30) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,8304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8304, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285B40"))) PPC_WEAK_FUNC(sub_83285B40);
PPC_FUNC_IMPL(__imp__sub_83285B40) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,8304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8304);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285B50"))) PPC_WEAK_FUNC(sub_83285B50);
PPC_FUNC_IMPL(__imp__sub_83285B50) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,8308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8308, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285B60"))) PPC_WEAK_FUNC(sub_83285B60);
PPC_FUNC_IMPL(__imp__sub_83285B60) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,8308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8308);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285B70"))) PPC_WEAK_FUNC(sub_83285B70);
PPC_FUNC_IMPL(__imp__sub_83285B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8316);
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

__attribute__((alias("__imp__sub_83285B88"))) PPC_WEAK_FUNC(sub_83285B88);
PPC_FUNC_IMPL(__imp__sub_83285B88) {
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
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x833a1390
	ctx.lr = 0x83285BA4;
	sub_833A1390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285998
	ctx.lr = 0x83285BB0;
	sub_83285998(ctx, base);
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

__attribute__((alias("__imp__sub_83285BC4"))) PPC_WEAK_FUNC(sub_83285BC4);
PPC_FUNC_IMPL(__imp__sub_83285BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285BC8"))) PPC_WEAK_FUNC(sub_83285BC8);
PPC_FUNC_IMPL(__imp__sub_83285BC8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83285998
	sub_83285998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285BD0"))) PPC_WEAK_FUNC(sub_83285BD0);
PPC_FUNC_IMPL(__imp__sub_83285BD0) {
	PPC_FUNC_PROLOGUE();
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x83285a60
	sub_83285A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285BDC"))) PPC_WEAK_FUNC(sub_83285BDC);
PPC_FUNC_IMPL(__imp__sub_83285BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285BE0"))) PPC_WEAK_FUNC(sub_83285BE0);
PPC_FUNC_IMPL(__imp__sub_83285BE0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83285a38
	sub_83285A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285BEC"))) PPC_WEAK_FUNC(sub_83285BEC);
PPC_FUNC_IMPL(__imp__sub_83285BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285BF0"))) PPC_WEAK_FUNC(sub_83285BF0);
PPC_FUNC_IMPL(__imp__sub_83285BF0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83285a38
	sub_83285A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285BFC"))) PPC_WEAK_FUNC(sub_83285BFC);
PPC_FUNC_IMPL(__imp__sub_83285BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285C00"))) PPC_WEAK_FUNC(sub_83285C00);
PPC_FUNC_IMPL(__imp__sub_83285C00) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x83285a38
	sub_83285A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285C0C"))) PPC_WEAK_FUNC(sub_83285C0C);
PPC_FUNC_IMPL(__imp__sub_83285C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285C10"))) PPC_WEAK_FUNC(sub_83285C10);
PPC_FUNC_IMPL(__imp__sub_83285C10) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83285a60
	ctx.lr = 0x83285C2C;
	sub_83285A60(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83285be0
	ctx.lr = 0x83285C38;
	sub_83285BE0(ctx, base);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285c60
	if (ctx.cr6.eq) goto loc_83285C60;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83285a60
	ctx.lr = 0x83285C50;
	sub_83285A60(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83285be0
	ctx.lr = 0x83285C5C;
	sub_83285BE0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
loc_83285C60:
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83285a60
	ctx.lr = 0x83285C68;
	sub_83285A60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285C78"))) PPC_WEAK_FUNC(sub_83285C78);
PPC_FUNC_IMPL(__imp__sub_83285C78) {
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
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83285a60
	ctx.lr = 0x83285C94;
	sub_83285A60(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83285be0
	ctx.lr = 0x83285CA0;
	sub_83285BE0(ctx, base);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// li r4,4
	ctx.r4.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285cc8
	if (ctx.cr6.eq) goto loc_83285CC8;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83285a60
	ctx.lr = 0x83285CB8;
	sub_83285A60(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83285be0
	ctx.lr = 0x83285CC4;
	sub_83285BE0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
loc_83285CC8:
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83285a60
	ctx.lr = 0x83285CD0;
	sub_83285A60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285CE0"))) PPC_WEAK_FUNC(sub_83285CE0);
PPC_FUNC_IMPL(__imp__sub_83285CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83285CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83285a60
	ctx.lr = 0x83285D00;
	sub_83285A60(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285d24
	if (ctx.cr6.eq) goto loc_83285D24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83285be0
	ctx.lr = 0x83285D18;
	sub_83285BE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83285c10
	ctx.lr = 0x83285D20;
	sub_83285C10(ctx, base);
	// b 0x83285d34
	goto loc_83285D34;
loc_83285D24:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83274d40
	ctx.lr = 0x83285D30;
	sub_83274D40(ctx, base);
	// stw r29,3024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3024, ctx.r29.u32);
loc_83285D34:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285d5c
	if (ctx.cr6.eq) goto loc_83285D5C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83285bf0
	ctx.lr = 0x83285D50;
	sub_83285BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83285c78
	ctx.lr = 0x83285D58;
	sub_83285C78(ctx, base);
	// b 0x83285d6c
	goto loc_83285D6C;
loc_83285D5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83274d40
	ctx.lr = 0x83285D68;
	sub_83274D40(ctx, base);
	// stw r29,3028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3028, ctx.r29.u32);
loc_83285D6C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285d90
	if (ctx.cr6.eq) goto loc_83285D90;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285c00
	ctx.lr = 0x83285D88;
	sub_83285C00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83285bd0
	ctx.lr = 0x83285D90;
	sub_83285BD0(ctx, base);
loc_83285D90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285D98"))) PPC_WEAK_FUNC(sub_83285D98);
PPC_FUNC_IMPL(__imp__sub_83285D98) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285dd4
	if (ctx.cr6.eq) goto loc_83285DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83285be0
	ctx.lr = 0x83285DC8;
	sub_83285BE0(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83285ce0
	ctx.lr = 0x83285DD0;
	sub_83285CE0(ctx, base);
	// b 0x83285e94
	goto loc_83285E94;
loc_83285DD4:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285e0c
	if (ctx.cr6.eq) goto loc_83285E0C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285be0
	ctx.lr = 0x83285DF0;
	sub_83285BE0(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83285c10
	ctx.lr = 0x83285DF8;
	sub_83285C10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83274d40
	ctx.lr = 0x83285E04;
	sub_83274D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83285e90
	goto loc_83285E90;
loc_83285E0C:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285e48
	if (ctx.cr6.eq) goto loc_83285E48;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285be0
	ctx.lr = 0x83285E28;
	sub_83285BE0(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83285c78
	ctx.lr = 0x83285E30;
	sub_83285C78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83274d40
	ctx.lr = 0x83285E3C;
	sub_83274D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3024, ctx.r11.u32);
	// b 0x83285e94
	goto loc_83285E94;
loc_83285E48:
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83285e9c
	if (ctx.cr6.eq) goto loc_83285E9C;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285be0
	ctx.lr = 0x83285E64;
	sub_83285BE0(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83285bd0
	ctx.lr = 0x83285E6C;
	sub_83285BD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83274d40
	ctx.lr = 0x83285E78;
	sub_83274D40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x83285E88;
	sub_83274D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3024, ctx.r11.u32);
loc_83285E90:
	// stw r11,3028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3028, ctx.r11.u32);
loc_83285E94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83285ea0
	goto loc_83285EA0;
loc_83285E9C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83285EA0:
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

__attribute__((alias("__imp__sub_83285EB4"))) PPC_WEAK_FUNC(sub_83285EB4);
PPC_FUNC_IMPL(__imp__sub_83285EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285EB8"))) PPC_WEAK_FUNC(sub_83285EB8);
PPC_FUNC_IMPL(__imp__sub_83285EB8) {
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
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_83285EDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwzu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// bl 0x83285a00
	ctx.lr = 0x83285EEC;
	sub_83285A00(ctx, base);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bne 0x83285edc
	if (!ctx.cr0.eq) goto loc_83285EDC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285d98
	ctx.lr = 0x83285F04;
	sub_83285D98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83285f20
	if (ctx.cr0.eq) goto loc_83285F20;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,770
	ctx.r4.u64 = ctx.r4.u64 | 770;
	// bl 0x83282390
	ctx.lr = 0x83285F1C;
	sub_83282390(ctx, base);
	// b 0x83285f24
	goto loc_83285F24;
loc_83285F20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83285F24:
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

__attribute__((alias("__imp__sub_83285F38"))) PPC_WEAK_FUNC(sub_83285F38);
PPC_FUNC_IMPL(__imp__sub_83285F38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83285f4c
	if (!ctx.cr6.eq) goto loc_83285F4C;
loc_83285F44:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83285F4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x83285f44
	if (ctx.cr6.eq) goto loc_83285F44;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,15380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285F68"))) PPC_WEAK_FUNC(sub_83285F68);
PPC_FUNC_IMPL(__imp__sub_83285F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -564);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83285fa0
	if (!ctx.cr6.gt) goto loc_83285FA0;
loc_83285F84:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83285f84
	if (ctx.cr6.lt) goto loc_83285F84;
loc_83285FA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285FA8"))) PPC_WEAK_FUNC(sub_83285FA8);
PPC_FUNC_IMPL(__imp__sub_83285FA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285FBC"))) PPC_WEAK_FUNC(sub_83285FBC);
PPC_FUNC_IMPL(__imp__sub_83285FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285FC0"))) PPC_WEAK_FUNC(sub_83285FC0);
PPC_FUNC_IMPL(__imp__sub_83285FC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285FE8"))) PPC_WEAK_FUNC(sub_83285FE8);
PPC_FUNC_IMPL(__imp__sub_83285FE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286010"))) PPC_WEAK_FUNC(sub_83286010);
PPC_FUNC_IMPL(__imp__sub_83286010) {
	PPC_FUNC_PROLOGUE();
	// b 0x8328c228
	sub_8328C228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286014"))) PPC_WEAK_FUNC(sub_83286014);
PPC_FUNC_IMPL(__imp__sub_83286014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286018"))) PPC_WEAK_FUNC(sub_83286018);
PPC_FUNC_IMPL(__imp__sub_83286018) {
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
	// bne cr6,0x83286040
	if (!ctx.cr6.eq) goto loc_83286040;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,-564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -564);
	// b 0x83286044
	goto loc_83286044;
loc_83286040:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_83286044:
	// bl 0x8328c150
	ctx.lr = 0x83286048;
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

__attribute__((alias("__imp__sub_83286060"))) PPC_WEAK_FUNC(sub_83286060);
PPC_FUNC_IMPL(__imp__sub_83286060) {
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
	// bne cr6,0x83286084
	if (!ctx.cr6.eq) goto loc_83286084;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,-564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -564);
	// b 0x832860ac
	goto loc_832860AC;
loc_83286084:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83285f38
	ctx.lr = 0x8328608C;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832860a8
	if (ctx.cr0.eq) goto loc_832860A8;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,257
	ctx.r4.u64 = ctx.r4.u64 | 257;
	// bl 0x83286018
	ctx.lr = 0x832860A4;
	sub_83286018(ctx, base);
	// b 0x832860b4
	goto loc_832860B4;
loc_832860A8:
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
loc_832860AC:
	// bl 0x83282080
	ctx.lr = 0x832860B0;
	sub_83282080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832860B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832860C4"))) PPC_WEAK_FUNC(sub_832860C4);
PPC_FUNC_IMPL(__imp__sub_832860C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832860C8"))) PPC_WEAK_FUNC(sub_832860C8);
PPC_FUNC_IMPL(__imp__sub_832860C8) {
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
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8328be48
	ctx.lr = 0x832860E8;
	sub_8328BE48(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8328c228
	ctx.lr = 0x832860F8;
	sub_8328C228(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x83285fa8
	ctx.lr = 0x83286104;
	sub_83285FA8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x83285fc0
	ctx.lr = 0x8328610C;
	sub_83285FC0(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x83285fc0
	ctx.lr = 0x83286114;
	sub_83285FC0(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x83285fc0
	ctx.lr = 0x8328611C;
	sub_83285FC0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x83285fc0
	ctx.lr = 0x83286124;
	sub_83285FC0(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x83285fe8
	ctx.lr = 0x8328612C;
	sub_83285FE8(ctx, base);
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,29672
	ctx.r10.s64 = ctx.r10.s64 + 29672;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83286180"))) PPC_WEAK_FUNC(sub_83286180);
PPC_FUNC_IMPL(__imp__sub_83286180) {
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
	// bl 0x83285f38
	ctx.lr = 0x83286194;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x832861b0
	if (ctx.cr0.eq) goto loc_832861B0;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
	// bl 0x83286018
	ctx.lr = 0x832861AC;
	sub_83286018(ctx, base);
	// b 0x832861b8
	goto loc_832861B8;
loc_832861B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_832861B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832861C8"))) PPC_WEAK_FUNC(sub_832861C8);
PPC_FUNC_IMPL(__imp__sub_832861C8) {
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
	// lis r30,-31822
	ctx.r30.s64 = -2085486592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-564(r30)
	PPC_STORE_U32(ctx.r30.u32 + -564, ctx.r3.u32);
	// mulli r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 * 304;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8328be48
	ctx.lr = 0x83286204;
	sub_8328BE48(ctx, base);
	// lwz r3,-564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -564);
	// bl 0x83286010
	ctx.lr = 0x8328620C;
	sub_83286010(ctx, base);
	// lwz r11,-564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -564);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,-564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -564);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x83286238
	if (!ctx.cr6.gt) goto loc_83286238;
	// addi r11,r11,-304
	ctx.r11.s64 = ctx.r11.s64 + -304;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8328622C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stwu r10,304(r11)
	ea = 304 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8328622c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328622C;
loc_83286238:
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

__attribute__((alias("__imp__sub_83286254"))) PPC_WEAK_FUNC(sub_83286254);
PPC_FUNC_IMPL(__imp__sub_83286254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286258"))) PPC_WEAK_FUNC(sub_83286258);
PPC_FUNC_IMPL(__imp__sub_83286258) {
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
	// lwz r11,-564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -564);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832862a8
	if (!ctx.cr6.gt) goto loc_832862A8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83286288:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8328629c
	if (ctx.cr6.eq) goto loc_8328629C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83286180
	ctx.lr = 0x8328629C;
	sub_83286180(ctx, base);
loc_8328629C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,304
	ctx.r31.s64 = ctx.r31.s64 + 304;
	// bne 0x83286288
	if (!ctx.cr0.eq) goto loc_83286288;
loc_832862A8:
	// bl 0x82c10e98
	ctx.lr = 0x832862AC;
	sub_82C10E98(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832862B0;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_832862C8"))) PPC_WEAK_FUNC(sub_832862C8);
PPC_FUNC_IMPL(__imp__sub_832862C8) {
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
	// bl 0x83285f68
	ctx.lr = 0x832862D8;
	sub_83285F68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832862e4
	if (ctx.cr0.eq) goto loc_832862E4;
	// bl 0x832860c8
	ctx.lr = 0x832862E4;
	sub_832860C8(ctx, base);
loc_832862E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832862F4"))) PPC_WEAK_FUNC(sub_832862F4);
PPC_FUNC_IMPL(__imp__sub_832862F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832862F8"))) PPC_WEAK_FUNC(sub_832862F8);
PPC_FUNC_IMPL(__imp__sub_832862F8) {
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
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,20992
	ctx.r11.s64 = ctx.r11.s64 + 20992;
	// stw r11,15376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15376, ctx.r11.u32);
	// bl 0x832861c8
	ctx.lr = 0x83286318;
	sub_832861C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328632c
	if (!ctx.cr0.eq) goto loc_8328632C;
	// bl 0x82c10e98
	ctx.lr = 0x83286324;
	sub_82C10E98(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x83286328;
	sub_82C10E98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328632C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328633C"))) PPC_WEAK_FUNC(sub_8328633C);
PPC_FUNC_IMPL(__imp__sub_8328633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286340"))) PPC_WEAK_FUNC(sub_83286340);
PPC_FUNC_IMPL(__imp__sub_83286340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83286348;
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
	ctx.lr = 0x8328635C;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328636c
	if (!ctx.cr0.eq) goto loc_8328636C;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r29,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r29.u32);
loc_8328636C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286374"))) PPC_WEAK_FUNC(sub_83286374);
PPC_FUNC_IMPL(__imp__sub_83286374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286378"))) PPC_WEAK_FUNC(sub_83286378);
PPC_FUNC_IMPL(__imp__sub_83286378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83286380;
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
	ctx.lr = 0x83286394;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832863a4
	if (!ctx.cr0.eq) goto loc_832863A4;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
loc_832863A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832863AC"))) PPC_WEAK_FUNC(sub_832863AC);
PPC_FUNC_IMPL(__imp__sub_832863AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832863B0"))) PPC_WEAK_FUNC(sub_832863B0);
PPC_FUNC_IMPL(__imp__sub_832863B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832863B8;
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
	ctx.lr = 0x832863CC;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832863dc
	if (!ctx.cr0.eq) goto loc_832863DC;
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r29,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r29.u32);
loc_832863DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832863E4"))) PPC_WEAK_FUNC(sub_832863E4);
PPC_FUNC_IMPL(__imp__sub_832863E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832863E8"))) PPC_WEAK_FUNC(sub_832863E8);
PPC_FUNC_IMPL(__imp__sub_832863E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832863F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83285f38
	ctx.lr = 0x83286418;
	sub_83285F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83286434
	if (ctx.cr0.eq) goto loc_83286434;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,769
	ctx.r4.u64 = ctx.r4.u64 | 769;
	// bl 0x83286018
	ctx.lr = 0x83286430;
	sub_83286018(ctx, base);
	// b 0x83286454
	goto loc_83286454;
loc_83286434:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83286454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83286454:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328645C"))) PPC_WEAK_FUNC(sub_8328645C);
PPC_FUNC_IMPL(__imp__sub_8328645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286460"))) PPC_WEAK_FUNC(sub_83286460);
PPC_FUNC_IMPL(__imp__sub_83286460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r9,30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 30, ctx.xer);
	// blt cr6,0x832864c4
	if (ctx.cr6.lt) goto loc_832864C4;
	// addic. r9,r9,-30
	ctx.xer.ca = ctx.r9.u32 > 29;
	ctx.r9.s64 = ctx.r9.s64 + -30;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832864b0
	if (ctx.cr0.eq) goto loc_832864B0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,2,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3;
	// b 0x832864b8
	goto loc_832864B8;
loc_832864B0:
	// rlwinm r30,r10,2,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832864B8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832864d0
	goto loc_832864D0;
loc_832864C4:
	// rlwinm r30,r10,2,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_832864D0:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x832864f0
	if (ctx.cr6.lt) goto loc_832864F0;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832864f4
	goto loc_832864F4;
loc_832864F0:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_832864F4:
	// cmpwi cr6,r9,29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 29, ctx.xer);
	// blt cr6,0x83286530
	if (ctx.cr6.lt) goto loc_83286530;
	// addic. r9,r9,-29
	ctx.xer.ca = ctx.r9.u32 > 28;
	ctx.r9.s64 = ctx.r9.s64 + -29;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8328651c
	if (ctx.cr0.eq) goto loc_8328651C;
	// subfic r8,r9,3
	ctx.xer.ca = ctx.r9.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r31,r8,3,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// b 0x83286524
	goto loc_83286524;
loc_8328651C:
	// rlwinm r31,r10,3,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83286524:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8328653c
	goto loc_8328653C;
loc_83286530:
	// rlwinm r31,r10,3,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_8328653C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x8328655c
	if (ctx.cr6.lt) goto loc_8328655C;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286560
	goto loc_83286560;
loc_8328655C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83286560:
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x8328659c
	if (ctx.cr6.lt) goto loc_8328659C;
	// addic. r9,r9,-17
	ctx.xer.ca = ctx.r9.u32 > 16;
	ctx.r9.s64 = ctx.r9.s64 + -17;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83286588
	if (ctx.cr0.eq) goto loc_83286588;
	// subfic r8,r9,15
	ctx.xer.ca = ctx.r9.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r4,r8,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7FFF;
	// b 0x83286590
	goto loc_83286590;
loc_83286588:
	// rlwinm r4,r10,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83286590:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832865a8
	goto loc_832865A8;
loc_8328659C:
	// rlwinm r4,r10,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_832865A8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x832865c8
	if (ctx.cr6.lt) goto loc_832865C8;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832865cc
	goto loc_832865CC;
loc_832865C8:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_832865CC:
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x83286608
	if (ctx.cr6.lt) goto loc_83286608;
	// addic. r9,r9,-17
	ctx.xer.ca = ctx.r9.u32 > 16;
	ctx.r9.s64 = ctx.r9.s64 + -17;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832865f4
	if (ctx.cr0.eq) goto loc_832865F4;
	// subfic r6,r9,15
	ctx.xer.ca = ctx.r9.u32 <= 15;
	ctx.r6.s64 = 15 - ctx.r9.s64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r6,r11,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// b 0x832865fc
	goto loc_832865FC;
loc_832865F4:
	// rlwinm r6,r10,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_832865FC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286614
	goto loc_83286614;
loc_83286608:
	// rlwinm r6,r10,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_83286614:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83286634
	if (ctx.cr6.lt) goto loc_83286634;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286638
	goto loc_83286638;
loc_83286634:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_83286638:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83286654
	if (ctx.cr6.lt) goto loc_83286654;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x83286658
	goto loc_83286658;
loc_83286654:
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_83286658:
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x8328667c
	if (ctx.cr6.lt) goto loc_8328667C;
	// addic. r10,r10,-10
	ctx.xer.ca = ctx.r10.u32 > 9;
	ctx.r10.s64 = ctx.r10.s64 + -10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328667c
	if (ctx.cr0.eq) goto loc_8328667C;
	// subfic r10,r10,22
	ctx.xer.ca = ctx.r10.u32 <= 22;
	ctx.r10.s64 = 22 - ctx.r10.s64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// b 0x83286680
	goto loc_83286680;
loc_8328667C:
	// rlwinm r11,r9,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
loc_83286680:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldimi r10,r31,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r31.u64, 15) & 0x7FFFFFFF8000) | (ctx.r10.u64 & 0xFFFF800000007FFF);
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rldicr r11,r11,15,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 15) & 0xFFFFFFFFFFFF8000;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832866C4"))) PPC_WEAK_FUNC(sub_832866C4);
PPC_FUNC_IMPL(__imp__sub_832866C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832866C8"))) PPC_WEAK_FUNC(sub_832866C8);
PPC_FUNC_IMPL(__imp__sub_832866C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832866D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x83286748
	if (ctx.cr6.lt) goto loc_83286748;
	// addic. r9,r9,-16
	ctx.xer.ca = ctx.r9.u32 > 15;
	ctx.r9.s64 = ctx.r9.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83286730
	if (ctx.cr0.eq) goto loc_83286730;
	// subfic r8,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8328673c
	goto loc_8328673C;
loc_83286730:
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
loc_8328673C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286758
	goto loc_83286758;
loc_83286748:
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
loc_83286758:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x83286778
	if (ctx.cr6.lt) goto loc_83286778;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8328677c
	goto loc_8328677C;
loc_83286778:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328677C:
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// blt cr6,0x832867c0
	if (ctx.cr6.lt) goto loc_832867C0;
	// addic. r9,r9,-10
	ctx.xer.ca = ctx.r9.u32 > 9;
	ctx.r9.s64 = ctx.r9.s64 + -10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832867a8
	if (ctx.cr0.eq) goto loc_832867A8;
	// subfic r8,r9,22
	ctx.xer.ca = ctx.r9.u32 <= 22;
	ctx.r8.s64 = 22 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x832867b4
	goto loc_832867B4;
loc_832867A8:
	// rlwinm r8,r10,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
loc_832867B4:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832867d0
	goto loc_832867D0;
loc_832867C0:
	// rlwinm r8,r10,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// addi r9,r9,22
	ctx.r9.s64 = ctx.r9.s64 + 22;
	// rlwinm r10,r10,22,0,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0xFFC00000;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
loc_832867D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x832867f0
	if (ctx.cr6.lt) goto loc_832867F0;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832867f4
	goto loc_832867F4;
loc_832867F0:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_832867F4:
	// cmpwi cr6,r9,26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 26, ctx.xer);
	// blt cr6,0x83286838
	if (ctx.cr6.lt) goto loc_83286838;
	// addic. r9,r9,-26
	ctx.xer.ca = ctx.r9.u32 > 25;
	ctx.r9.s64 = ctx.r9.s64 + -26;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83286820
	if (ctx.cr0.eq) goto loc_83286820;
	// subfic r8,r9,6
	ctx.xer.ca = ctx.r9.u32 <= 6;
	ctx.r8.s64 = 6 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3F;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x8328682c
	goto loc_8328682C;
loc_83286820:
	// rlwinm r8,r10,6,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
loc_8328682C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286848
	goto loc_83286848;
loc_83286838:
	// rlwinm r8,r10,6,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
loc_83286848:
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// stw r8,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r8.u32);
	// bne cr6,0x8328686c
	if (!ctx.cr6.eq) goto loc_8328686C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286874
	goto loc_83286874;
loc_8328686C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83286874:
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// bne cr6,0x83286898
	if (!ctx.cr6.eq) goto loc_83286898;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832868a0
	goto loc_832868A0;
loc_83286898:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_832868A0:
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// stw r8,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r8.u32);
	// bne cr6,0x832868c4
	if (!ctx.cr6.eq) goto loc_832868C4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832868cc
	goto loc_832868CC;
loc_832868C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_832868CC:
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// stw r8,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r8.u32);
	// bne cr6,0x832868f0
	if (!ctx.cr6.eq) goto loc_832868F0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832868f8
	goto loc_832868F8;
loc_832868F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_832868F8:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x83286918
	if (ctx.cr6.lt) goto loc_83286918;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8328691c
	goto loc_8328691C;
loc_83286918:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328691C:
	// cmpwi cr6,r9,27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 27, ctx.xer);
	// blt cr6,0x83286960
	if (ctx.cr6.lt) goto loc_83286960;
	// addic. r9,r9,-27
	ctx.xer.ca = ctx.r9.u32 > 26;
	ctx.r9.s64 = ctx.r9.s64 + -27;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83286948
	if (ctx.cr0.eq) goto loc_83286948;
	// subfic r8,r9,5
	ctx.xer.ca = ctx.r9.u32 <= 5;
	ctx.r8.s64 = 5 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x83286954
	goto loc_83286954;
loc_83286948:
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
loc_83286954:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286970
	goto loc_83286970;
loc_83286960:
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
loc_83286970:
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// blt cr6,0x832869ac
	if (ctx.cr6.lt) goto loc_832869AC;
	// addic. r9,r9,-24
	ctx.xer.ca = ctx.r9.u32 > 23;
	ctx.r9.s64 = ctx.r9.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83286998
	if (ctx.cr0.eq) goto loc_83286998;
	// subfic r8,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r30,r8,8,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// b 0x832869a0
	goto loc_832869A0;
loc_83286998:
	// rlwinm r30,r10,8,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832869A0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832869b8
	goto loc_832869B8;
loc_832869AC:
	// rlwinm r30,r10,8,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_832869B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83286a88
	goto loc_83286A88;
loc_832869C0:
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// blt cr6,0x832869fc
	if (ctx.cr6.lt) goto loc_832869FC;
	// addic. r9,r9,-24
	ctx.xer.ca = ctx.r9.u32 > 23;
	ctx.r9.s64 = ctx.r9.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832869e8
	if (ctx.cr0.eq) goto loc_832869E8;
	// subfic r6,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r6.s64 = 8 - ctx.r9.s64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// b 0x832869f0
	goto loc_832869F0;
loc_832869E8:
	// rlwinm r5,r10,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_832869F0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286a08
	goto loc_83286A08;
loc_832869FC:
	// rlwinm r5,r10,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83286A08:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83286a28
	if (ctx.cr6.lt) goto loc_83286A28;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286a2c
	goto loc_83286A2C;
loc_83286A28:
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_83286A2C:
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x83286b48
	if (!ctx.cr6.eq) goto loc_83286B48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_83286A48:
	// rlwinm r8,r10,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1FFF;
	// addi r9,r9,13
	ctx.r9.s64 = ctx.r9.s64 + 13;
	// rlwinm r10,r10,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
loc_83286A54:
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r26,r1,97
	ctx.r26.s64 = ctx.r1.s64 + 97;
	// addi r25,r1,98
	ctx.r25.s64 = ctx.r1.s64 + 98;
	// stbx r5,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u8);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r6,r5,r26
	PPC_STORE_U8(ctx.r5.u32 + ctx.r26.u32, ctx.r6.u8);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r8,r6,r25
	PPC_STORE_U16(ctx.r6.u32 + ctx.r25.u32, ctx.r8.u16);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
loc_83286A88:
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x832869c0
	if (ctx.cr6.lt) goto loc_832869C0;
	// addi r11,r9,7
	ctx.r11.s64 = ctx.r9.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// subf r11,r4,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x83288a58
	ctx.lr = 0x83286AB4;
	sub_83288A58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83286adc
	if (!ctx.cr0.eq) goto loc_83286ADC;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x83288a58
	ctx.lr = 0x83286AC4;
	sub_83288A58(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83286adc
	if (!ctx.cr6.eq) goto loc_83286ADC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83286ADC:
	// lwz r11,228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83286b40
	if (ctx.cr6.eq) goto loc_83286B40;
	// rlwinm r9,r30,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x1;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r7,r30,25
	ctx.r7.u64 = ctx.r30.u32 & 0x7F;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// lwz r3,232(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// bctrl 
	ctx.lr = 0x83286B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83286B40:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
loc_83286B48:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 19, ctx.xer);
	// blt cr6,0x83286a48
	if (ctx.cr6.lt) goto loc_83286A48;
	// addic. r9,r9,-19
	ctx.xer.ca = ctx.r9.u32 > 18;
	ctx.r9.s64 = ctx.r9.s64 + -19;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83286b78
	if (ctx.cr0.eq) goto loc_83286B78;
	// subfic r8,r9,13
	ctx.xer.ca = ctx.r9.u32 <= 13;
	ctx.r8.s64 = 13 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r8,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1FFF;
	// b 0x83286b80
	goto loc_83286B80;
loc_83286B78:
	// rlwinm r8,r10,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1FFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83286B80:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83286a54
	goto loc_83286A54;
}

__attribute__((alias("__imp__sub_83286B8C"))) PPC_WEAK_FUNC(sub_83286B8C);
PPC_FUNC_IMPL(__imp__sub_83286B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286B90"))) PPC_WEAK_FUNC(sub_83286B90);
PPC_FUNC_IMPL(__imp__sub_83286B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83286B98;
	__savegprlr_29(ctx, base);
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// addi r30,r3,168
	ctx.r30.s64 = ctx.r3.s64 + 168;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// blt cr6,0x83286bfc
	if (ctx.cr6.lt) goto loc_83286BFC;
	// addic. r10,r9,-24
	ctx.xer.ca = ctx.r9.u32 > 23;
	ctx.r10.s64 = ctx.r9.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83286be8
	if (ctx.cr0.eq) goto loc_83286BE8;
	// subfic r9,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r10.s64;
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r3,r11,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// b 0x83286bf0
	goto loc_83286BF0;
loc_83286BE8:
	// rlwinm r3,r8,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_83286BF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286c08
	goto loc_83286C08;
loc_83286BFC:
	// rlwinm r3,r8,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
loc_83286C08:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmpwi cr6,r3,224
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 224, ctx.xer);
	// blt cr6,0x83286c28
	if (ctx.cr6.lt) goto loc_83286C28;
	// cmpwi cr6,r3,239
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 239, ctx.xer);
	// bgt cr6,0x83286c28
	if (ctx.cr6.gt) goto loc_83286C28;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r3,-224
	ctx.r8.s64 = ctx.r3.s64 + -224;
	// b 0x83286c80
	goto loc_83286C80;
loc_83286C28:
	// cmpwi cr6,r3,192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 192, ctx.xer);
	// blt cr6,0x83286c44
	if (ctx.cr6.lt) goto loc_83286C44;
	// cmpwi cr6,r3,223
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 223, ctx.xer);
	// bgt cr6,0x83286c44
	if (ctx.cr6.gt) goto loc_83286C44;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r3,-192
	ctx.r8.s64 = ctx.r3.s64 + -192;
	// b 0x83286c80
	goto loc_83286C80;
loc_83286C44:
	// cmpwi cr6,r3,189
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 189, ctx.xer);
	// bne cr6,0x83286c58
	if (!ctx.cr6.eq) goto loc_83286C58;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x83286c80
	goto loc_83286C80;
loc_83286C58:
	// cmpwi cr6,r3,191
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 191, ctx.xer);
	// bne cr6,0x83286c6c
	if (!ctx.cr6.eq) goto loc_83286C6C;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x83286c80
	goto loc_83286C80;
loc_83286C6C:
	// cmpwi cr6,r3,190
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 190, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// beq cr6,0x83286c80
	if (ctx.cr6.eq) goto loc_83286C80;
	// li r9,4
	ctx.r9.s64 = 4;
loc_83286C80:
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// bne cr6,0x83286cec
	if (!ctx.cr6.eq) goto loc_83286CEC;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x83286cd4
	if (ctx.cr6.lt) goto loc_83286CD4;
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83286cbc
	if (ctx.cr0.eq) goto loc_83286CBC;
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x83286cc8
	goto loc_83286CC8;
loc_83286CBC:
	// rlwinm r9,r7,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
loc_83286CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286ce4
	goto loc_83286CE4;
loc_83286CD4:
	// rlwinm r9,r7,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r8,r7,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
loc_83286CE4:
	// li r29,6
	ctx.r29.s64 = 6;
	// b 0x83286d20
	goto loc_83286D20;
loc_83286CEC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83286d0c
	if (ctx.cr6.eq) goto loc_83286D0C;
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r10.s64;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x83286d14
	goto loc_83286D14;
loc_83286D0C:
	// stw r7,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r7.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_83286D14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r29,8
	ctx.r29.s64 = 8;
loc_83286D20:
	// cmpwi cr6,r3,191
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 191, ctx.xer);
	// beq cr6,0x83287310
	if (ctx.cr6.eq) goto loc_83287310;
	// cmpwi cr6,r3,190
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 190, ctx.xer);
	// beq cr6,0x83287310
	if (ctx.cr6.eq) goto loc_83287310;
loc_83286D30:
	// rlwinm r9,r8,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// ble cr6,0x83286d48
	if (!ctx.cr6.gt) goto loc_83286D48;
	// subfic r7,r10,56
	ctx.xer.ca = ctx.r10.u32 <= 56;
	ctx.r7.s64 = 56 - ctx.r10.s64;
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
loc_83286D48:
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x83286d78
	if (!ctx.cr6.eq) goto loc_83286D78;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83286d70
	if (ctx.cr6.lt) goto loc_83286D70;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286d30
	goto loc_83286D30;
loc_83286D70:
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83286d30
	goto loc_83286D30;
loc_83286D78:
	// rlwinm r9,r8,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// ble cr6,0x83286d90
	if (!ctx.cr6.gt) goto loc_83286D90;
	// subfic r7,r10,62
	ctx.xer.ca = ctx.r10.u32 <= 62;
	ctx.r7.s64 = 62 - ctx.r10.s64;
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
loc_83286D90:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x83286df8
	if (!ctx.cr6.eq) goto loc_83286DF8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83286db8
	if (ctx.cr6.lt) goto loc_83286DB8;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286dbc
	goto loc_83286DBC;
loc_83286DB8:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_83286DBC:
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x83286e38
	if (!ctx.cr6.eq) goto loc_83286E38;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83286DD8:
	// rlwinm r7,r9,13,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r10,r10,13
	ctx.r10.s64 = ctx.r10.s64 + 13;
	// rlwinm r8,r9,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
loc_83286DE4:
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83286df4
	if (ctx.cr6.eq) goto loc_83286DF4;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_83286DF4:
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
loc_83286DF8:
	// rlwinm r9,r8,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xF;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// ble cr6,0x83286e10
	if (!ctx.cr6.gt) goto loc_83286E10;
	// subfic r7,r10,60
	ctx.xer.ca = ctx.r10.u32 <= 60;
	ctx.r7.s64 = 60 - ctx.r10.s64;
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
loc_83286E10:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x83286fcc
	if (!ctx.cr6.eq) goto loc_83286FCC;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x83286e7c
	if (ctx.cr6.lt) goto loc_83286E7C;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286e80
	goto loc_83286E80;
loc_83286E38:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// blt cr6,0x83286dd8
	if (ctx.cr6.lt) goto loc_83286DD8;
	// addic. r10,r10,-19
	ctx.xer.ca = ctx.r10.u32 > 18;
	ctx.r10.s64 = ctx.r10.s64 + -19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83286e68
	if (ctx.cr0.eq) goto loc_83286E68;
	// subfic r7,r10,13
	ctx.xer.ca = ctx.r10.u32 <= 13;
	ctx.r7.s64 = 13 - ctx.r10.s64;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r7,r11,13,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// b 0x83286e70
	goto loc_83286E70;
loc_83286E68:
	// rlwinm r7,r9,13,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_83286E70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286de4
	goto loc_83286DE4;
loc_83286E7C:
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
loc_83286E80:
	// cmpwi cr6,r9,29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 29, ctx.xer);
	// blt cr6,0x83286ebc
	if (ctx.cr6.lt) goto loc_83286EBC;
	// addic. r9,r9,-29
	ctx.xer.ca = ctx.r9.u32 > 28;
	ctx.r9.s64 = ctx.r9.s64 + -29;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83286ea8
	if (ctx.cr0.eq) goto loc_83286EA8;
	// subfic r8,r9,3
	ctx.xer.ca = ctx.r9.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r8,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// b 0x83286eb0
	goto loc_83286EB0;
loc_83286EA8:
	// rlwinm r6,r10,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83286EB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286ec8
	goto loc_83286EC8;
loc_83286EBC:
	// rlwinm r6,r10,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_83286EC8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x83286ee8
	if (ctx.cr6.lt) goto loc_83286EE8;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286eec
	goto loc_83286EEC;
loc_83286EE8:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83286EEC:
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x83286f28
	if (ctx.cr6.lt) goto loc_83286F28;
	// addic. r9,r9,-17
	ctx.xer.ca = ctx.r9.u32 > 16;
	ctx.r9.s64 = ctx.r9.s64 + -17;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83286f14
	if (ctx.cr0.eq) goto loc_83286F14;
	// subfic r7,r9,15
	ctx.xer.ca = ctx.r9.u32 <= 15;
	ctx.r7.s64 = 15 - ctx.r9.s64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r7,r11,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// b 0x83286f1c
	goto loc_83286F1C;
loc_83286F14:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_83286F1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286f34
	goto loc_83286F34;
loc_83286F28:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_83286F34:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83286f54
	if (ctx.cr6.lt) goto loc_83286F54;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286f58
	goto loc_83286F58;
loc_83286F54:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_83286F58:
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x83286f88
	if (ctx.cr6.lt) goto loc_83286F88;
	// addic. r10,r10,-17
	ctx.xer.ca = ctx.r10.u32 > 16;
	ctx.r10.s64 = ctx.r10.s64 + -17;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83286f7c
	if (ctx.cr0.eq) goto loc_83286F7C;
	// subfic r8,r10,15
	ctx.xer.ca = ctx.r10.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r10.s64;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r11,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// b 0x83286f80
	goto loc_83286F80;
loc_83286F7C:
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
loc_83286F80:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286f90
	goto loc_83286F90;
loc_83286F88:
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
loc_83286F90:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83286fa4
	if (ctx.cr6.lt) goto loc_83286FA4;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83286FA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldimi r10,r6,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 15) & 0x7FFFFFFF8000) | (ctx.r10.u64 & 0xFFFF800000007FFF);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// rldicr r10,r10,15,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 15) & 0xFFFFFFFFFFFF8000;
	// std r8,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r8.u64);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x832872e4
	goto loc_832872E4;
loc_83286FCC:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x832872c8
	if (!ctx.cr6.eq) goto loc_832872C8;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x83286ff4
	if (ctx.cr6.lt) goto loc_83286FF4;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83286ff8
	goto loc_83286FF8;
loc_83286FF4:
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
loc_83286FF8:
	// cmpwi cr6,r9,29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 29, ctx.xer);
	// blt cr6,0x83287034
	if (ctx.cr6.lt) goto loc_83287034;
	// addic. r9,r9,-29
	ctx.xer.ca = ctx.r9.u32 > 28;
	ctx.r9.s64 = ctx.r9.s64 + -29;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83287020
	if (ctx.cr0.eq) goto loc_83287020;
	// subfic r8,r9,3
	ctx.xer.ca = ctx.r9.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r3,r8,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// b 0x83287028
	goto loc_83287028;
loc_83287020:
	// rlwinm r3,r10,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83287028:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83287040
	goto loc_83287040;
loc_83287034:
	// rlwinm r3,r10,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_83287040:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x83287060
	if (ctx.cr6.lt) goto loc_83287060;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83287064
	goto loc_83287064;
loc_83287060:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83287064:
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x832870a0
	if (ctx.cr6.lt) goto loc_832870A0;
	// addic. r9,r9,-17
	ctx.xer.ca = ctx.r9.u32 > 16;
	ctx.r9.s64 = ctx.r9.s64 + -17;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8328708c
	if (ctx.cr0.eq) goto loc_8328708C;
	// subfic r8,r9,15
	ctx.xer.ca = ctx.r9.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r8,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7FFF;
	// b 0x83287094
	goto loc_83287094;
loc_8328708C:
	// rlwinm r6,r10,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83287094:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x832870ac
	goto loc_832870AC;
loc_832870A0:
	// rlwinm r6,r10,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_832870AC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x832870cc
	if (ctx.cr6.lt) goto loc_832870CC;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x832870d0
	goto loc_832870D0;
loc_832870CC:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_832870D0:
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x8328710c
	if (ctx.cr6.lt) goto loc_8328710C;
	// addic. r9,r9,-17
	ctx.xer.ca = ctx.r9.u32 > 16;
	ctx.r9.s64 = ctx.r9.s64 + -17;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832870f8
	if (ctx.cr0.eq) goto loc_832870F8;
	// subfic r7,r9,15
	ctx.xer.ca = ctx.r9.u32 <= 15;
	ctx.r7.s64 = 15 - ctx.r9.s64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r7,r11,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// b 0x83287100
	goto loc_83287100;
loc_832870F8:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_83287100:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83287118
	goto loc_83287118;
loc_8328710C:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_83287118:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83287138
	if (ctx.cr6.lt) goto loc_83287138;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x8328713c
	goto loc_8328713C;
loc_83287138:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_8328713C:
	// li r8,0
	ctx.r8.s64 = 0;
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// rldimi r8,r3,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r3.u64, 15) & 0x7FFFFFFF8000) | (ctx.r8.u64 & 0xFFFF800000007FFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rldicr r8,r8,15,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 15) & 0xFFFFFFFFFFFF8000;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r8,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// blt cr6,0x8328717c
	if (ctx.cr6.lt) goto loc_8328717C;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83287180
	goto loc_83287180;
loc_8328717C:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_83287180:
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// blt cr6,0x832871bc
	if (ctx.cr6.lt) goto loc_832871BC;
	// addic. r10,r10,-29
	ctx.xer.ca = ctx.r10.u32 > 28;
	ctx.r10.s64 = ctx.r10.s64 + -29;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832871a8
	if (ctx.cr0.eq) goto loc_832871A8;
	// subfic r7,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r7.s64 = 3 - ctx.r10.s64;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r6,r11,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// b 0x832871b0
	goto loc_832871B0;
loc_832871A8:
	// rlwinm r6,r9,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_832871B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x832871c8
	goto loc_832871C8;
loc_832871BC:
	// rlwinm r6,r9,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_832871C8:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x832871e8
	if (ctx.cr6.lt) goto loc_832871E8;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x832871ec
	goto loc_832871EC;
loc_832871E8:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_832871EC:
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x83287228
	if (ctx.cr6.lt) goto loc_83287228;
	// addic. r9,r9,-17
	ctx.xer.ca = ctx.r9.u32 > 16;
	ctx.r9.s64 = ctx.r9.s64 + -17;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83287214
	if (ctx.cr0.eq) goto loc_83287214;
	// subfic r7,r9,15
	ctx.xer.ca = ctx.r9.u32 <= 15;
	ctx.r7.s64 = 15 - ctx.r9.s64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r7,r11,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// b 0x8328721c
	goto loc_8328721C;
loc_83287214:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8328721C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83287234
	goto loc_83287234;
loc_83287228:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_83287234:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83287254
	if (ctx.cr6.lt) goto loc_83287254;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83287258
	goto loc_83287258;
loc_83287254:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_83287258:
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x83287288
	if (ctx.cr6.lt) goto loc_83287288;
	// addic. r10,r10,-17
	ctx.xer.ca = ctx.r10.u32 > 16;
	ctx.r10.s64 = ctx.r10.s64 + -17;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8328727c
	if (ctx.cr0.eq) goto loc_8328727C;
	// subfic r8,r10,15
	ctx.xer.ca = ctx.r10.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r10.s64;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r11,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// b 0x83287280
	goto loc_83287280;
loc_8328727C:
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
loc_83287280:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83287290
	goto loc_83287290;
loc_83287288:
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
loc_83287290:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x832872a4
	if (ctx.cr6.lt) goto loc_832872A4;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_832872A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldimi r10,r6,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 15) & 0x7FFFFFFF8000) | (ctx.r10.u64 & 0xFFFF800000007FFF);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rldicr r10,r10,15,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 15) & 0xFFFFFFFFFFFF8000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// b 0x832872e8
	goto loc_832872E8;
loc_832872C8:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x832872dc
	if (ctx.cr6.lt) goto loc_832872DC;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_832872DC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
loc_832872E4:
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
loc_832872E8:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x83287318
	goto loc_83287318;
loc_83287310:
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_83287318:
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287320"))) PPC_WEAK_FUNC(sub_83287320);
PPC_FUNC_IMPL(__imp__sub_83287320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83287328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83288a58
	ctx.lr = 0x8328734C;
	sub_83288A58(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832873c4
	if (ctx.cr6.eq) goto loc_832873C4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832873b0
	if (ctx.cr6.eq) goto loc_832873B0;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x832873d8
	if (!ctx.cr6.eq) goto loc_832873D8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83286b90
	ctx.lr = 0x83287388;
	sub_83286B90(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832873d8
	if (ctx.cr6.eq) goto loc_832873D8;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bctrl 
	ctx.lr = 0x832873AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832873d8
	goto loc_832873D8;
loc_832873B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832866c8
	ctx.lr = 0x832873C0;
	sub_832866C8(ctx, base);
	// b 0x832873d4
	goto loc_832873D4;
loc_832873C4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83286460
	ctx.lr = 0x832873D4;
	sub_83286460(ctx, base);
loc_832873D4:
	// li r28,1
	ctx.r28.s64 = 1;
loc_832873D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832873E4"))) PPC_WEAK_FUNC(sub_832873E4);
PPC_FUNC_IMPL(__imp__sub_832873E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832873E8"))) PPC_WEAK_FUNC(sub_832873E8);
PPC_FUNC_IMPL(__imp__sub_832873E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832873F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// b 0x83287450
	goto loc_83287450;
loc_8328740C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83287320
	ctx.lr = 0x83287420;
	sub_83287320(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq 0x83287458
	if (ctx.cr0.eq) goto loc_83287458;
loc_83287450:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x8328740c
	if (!ctx.cr6.lt) goto loc_8328740C;
loc_83287458:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832874a0
	if (ctx.cr0.eq) goto loc_832874A0;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r4,r27,40
	ctx.r4.s64 = ctx.r27.s64 + 40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8328747c
	if (ctx.cr6.eq) goto loc_8328747C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8328748c
	goto loc_8328748C;
loc_8328747C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8328748C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,32
	ctx.r5.s64 = 32;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x833a1390
	ctx.lr = 0x832874A0;
	sub_833A1390(ctx, base);
loc_832874A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832874AC"))) PPC_WEAK_FUNC(sub_832874AC);
PPC_FUNC_IMPL(__imp__sub_832874AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832874B0"))) PPC_WEAK_FUNC(sub_832874B0);
PPC_FUNC_IMPL(__imp__sub_832874B0) {
	PPC_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832874C4:
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x832874c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832874C4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832874DC"))) PPC_WEAK_FUNC(sub_832874DC);
PPC_FUNC_IMPL(__imp__sub_832874DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832874E0"))) PPC_WEAK_FUNC(sub_832874E0);
PPC_FUNC_IMPL(__imp__sub_832874E0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// subf. r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bgt 0x83287520
	if (ctx.cr0.gt) goto loc_83287520;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1036
	ctx.r4.u64 = ctx.r4.u64 | 1036;
	// b 0x83287548
	goto loc_83287548;
loc_83287520:
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x832ee4c0
	ctx.lr = 0x83287530;
	sub_832EE4C0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x8328754c
	if (!ctx.cr0.eq) goto loc_8328754C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1034
	ctx.r4.u64 = ctx.r4.u64 | 1034;
loc_83287548:
	// bl 0x83282390
	ctx.lr = 0x8328754C;
	sub_83282390(ctx, base);
loc_8328754C:
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

__attribute__((alias("__imp__sub_83287560"))) PPC_WEAK_FUNC(sub_83287560);
PPC_FUNC_IMPL(__imp__sub_83287560) {
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
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,5072
	ctx.r10.s64 = ctx.r11.s64 + 5072;
	// addi r31,r10,16
	ctx.r31.s64 = ctx.r10.s64 + 16;
	// lwz r11,5072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5072);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x832875b0
	if (!ctx.cr6.eq) goto loc_832875B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832875b0
	if (ctx.cr6.eq) goto loc_832875B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832875A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832875B0:
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

__attribute__((alias("__imp__sub_832875C4"))) PPC_WEAK_FUNC(sub_832875C4);
PPC_FUNC_IMPL(__imp__sub_832875C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832875C8"))) PPC_WEAK_FUNC(sub_832875C8);
PPC_FUNC_IMPL(__imp__sub_832875C8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832875EC"))) PPC_WEAK_FUNC(sub_832875EC);
PPC_FUNC_IMPL(__imp__sub_832875EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832875F0"))) PPC_WEAK_FUNC(sub_832875F0);
PPC_FUNC_IMPL(__imp__sub_832875F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83287600:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83287600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83287600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287618"))) PPC_WEAK_FUNC(sub_83287618);
PPC_FUNC_IMPL(__imp__sub_83287618) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83285b70
	ctx.lr = 0x83287634;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83287644
	if (ctx.cr0.eq) goto loc_83287644;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8328767c
	goto loc_8328767C;
loc_83287644:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b70
	ctx.lr = 0x83287650;
	sub_83285B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83287660
	if (ctx.cr0.eq) goto loc_83287660;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8328767c
	goto loc_8328767C;
loc_83287660:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b70
	ctx.lr = 0x8328766C;
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
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8328767C:
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,5076(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5076);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832876a0
	if (ctx.cr6.eq) goto loc_832876A0;
	// lwz r11,5092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5092);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832876a4
	if (!ctx.cr6.eq) goto loc_832876A4;
loc_832876A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832876A4:
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

__attribute__((alias("__imp__sub_832876B8"))) PPC_WEAK_FUNC(sub_832876B8);
PPC_FUNC_IMPL(__imp__sub_832876B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832876cc
	if (!ctx.cr6.eq) goto loc_832876CC;
loc_832876C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832876CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83287700
	if (!ctx.cr6.eq) goto loc_83287700;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832876c4
	if (ctx.cr6.eq) goto loc_832876C4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832876c4
	if (!ctx.cr6.gt) goto loc_832876C4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_83287700:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287708"))) PPC_WEAK_FUNC(sub_83287708);
PPC_FUNC_IMPL(__imp__sub_83287708) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r5,318
	ctx.r10.s64 = ctx.r5.s64 + 318;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287740"))) PPC_WEAK_FUNC(sub_83287740);
PPC_FUNC_IMPL(__imp__sub_83287740) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,5088
	ctx.r11.s64 = ctx.r11.s64 + 5088;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287778"))) PPC_WEAK_FUNC(sub_83287778);
PPC_FUNC_IMPL(__imp__sub_83287778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83287780;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832877A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832877CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8328781c
	if (!ctx.cr6.lt) goto loc_8328781C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832877FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83287818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83287828
	goto loc_83287828;
loc_8328781C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_83287828:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83287844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287850"))) PPC_WEAK_FUNC(sub_83287850);
PPC_FUNC_IMPL(__imp__sub_83287850) {
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
	ctx.lr = 0x83287880;
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
	ctx.lr = 0x832878A0;
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

__attribute__((alias("__imp__sub_832878BC"))) PPC_WEAK_FUNC(sub_832878BC);
PPC_FUNC_IMPL(__imp__sub_832878BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832878C0"))) PPC_WEAK_FUNC(sub_832878C0);
PPC_FUNC_IMPL(__imp__sub_832878C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832878C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r11,r31,5112
	ctx.r11.s64 = ctx.r31.s64 + 5112;
	// bl 0x832821e0
	ctx.lr = 0x832878E8;
	sub_832821E0(ctx, base);
	// lwz r11,5112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,5116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5116);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x832821f0
	ctx.lr = 0x83287900;
	sub_832821F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287908"))) PPC_WEAK_FUNC(sub_83287908);
PPC_FUNC_IMPL(__imp__sub_83287908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83287910;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r11,r31,5112
	ctx.r11.s64 = ctx.r31.s64 + 5112;
	// bl 0x832821e0
	ctx.lr = 0x83287930;
	sub_832821E0(ctx, base);
	// stw r30,5112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5112, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r29.u32);
	// bl 0x832821f0
	ctx.lr = 0x83287940;
	sub_832821F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287948"))) PPC_WEAK_FUNC(sub_83287948);
PPC_FUNC_IMPL(__imp__sub_83287948) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,5100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287958"))) PPC_WEAK_FUNC(sub_83287958);
PPC_FUNC_IMPL(__imp__sub_83287958) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,5124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287968"))) PPC_WEAK_FUNC(sub_83287968);
PPC_FUNC_IMPL(__imp__sub_83287968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83287970;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821e0
	ctx.lr = 0x83287984;
	sub_832821E0(ctx, base);
	// lwz r30,5120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5120);
	// lwz r29,5124(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5124);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x832879bc
	if (!ctx.cr6.eq) goto loc_832879BC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x832879c8
	if (ctx.cr6.eq) goto loc_832879C8;
	// lwz r3,5092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832879B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_832879BC:
	// bge cr6,0x832879c8
	if (!ctx.cr6.lt) goto loc_832879C8;
	// lis r30,32767
	ctx.r30.s64 = 2147418112;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
loc_832879C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832821f0
	ctx.lr = 0x832879D0;
	sub_832821F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832879DC"))) PPC_WEAK_FUNC(sub_832879DC);
PPC_FUNC_IMPL(__imp__sub_832879DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832879E0"))) PPC_WEAK_FUNC(sub_832879E0);
PPC_FUNC_IMPL(__imp__sub_832879E0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,5076(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5076);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83287a08
	if (!ctx.cr6.eq) goto loc_83287A08;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
loc_83287A08:
	// lwz r11,5092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5092);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287A18"))) PPC_WEAK_FUNC(sub_83287A18);
PPC_FUNC_IMPL(__imp__sub_83287A18) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,5088
	ctx.r11.s64 = ctx.r11.s64 + 5088;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287A3C"))) PPC_WEAK_FUNC(sub_83287A3C);
PPC_FUNC_IMPL(__imp__sub_83287A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287A40"))) PPC_WEAK_FUNC(sub_83287A40);
PPC_FUNC_IMPL(__imp__sub_83287A40) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r10,5076(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5076);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83287a68
	if (!ctx.cr6.eq) goto loc_83287A68;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,5148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5148);
	// li r5,11
	ctx.r5.s64 = 11;
	// b 0x83285af0
	sub_83285AF0(ctx, base);
	return;
loc_83287A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287A70"))) PPC_WEAK_FUNC(sub_83287A70);
PPC_FUNC_IMPL(__imp__sub_83287A70) {
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
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,5076(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5076);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83287ab4
	if (!ctx.cr6.eq) goto loc_83287AB4;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,5148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5148);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285af0
	ctx.lr = 0x83287AB4;
	sub_83285AF0(ctx, base);
loc_83287AB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83287AD0"))) PPC_WEAK_FUNC(sub_83287AD0);
PPC_FUNC_IMPL(__imp__sub_83287AD0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,5080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5080, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287AE8"))) PPC_WEAK_FUNC(sub_83287AE8);
PPC_FUNC_IMPL(__imp__sub_83287AE8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x83287af8
	if (!ctx.cr6.eq) goto loc_83287AF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83287AF8:
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,5080(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5080);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287B08"))) PPC_WEAK_FUNC(sub_83287B08);
PPC_FUNC_IMPL(__imp__sub_83287B08) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,5084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5084, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287B20"))) PPC_WEAK_FUNC(sub_83287B20);
PPC_FUNC_IMPL(__imp__sub_83287B20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x83287b30
	if (!ctx.cr6.eq) goto loc_83287B30;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83287B30:
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,5084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5084);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287B40"))) PPC_WEAK_FUNC(sub_83287B40);
PPC_FUNC_IMPL(__imp__sub_83287B40) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ee4c0
	ctx.lr = 0x83287B64;
	sub_832EE4C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83287B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r30,15384
	ctx.r9.s64 = ctx.r30.s64 + 15384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83287B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832eed98
	ctx.lr = 0x83287BA8;
	sub_832EED98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83287BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,15384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15384, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83287BD8;
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

__attribute__((alias("__imp__sub_83287BF0"))) PPC_WEAK_FUNC(sub_83287BF0);
PPC_FUNC_IMPL(__imp__sub_83287BF0) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83287C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r11,15388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15388);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
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

__attribute__((alias("__imp__sub_83287C30"))) PPC_WEAK_FUNC(sub_83287C30);
PPC_FUNC_IMPL(__imp__sub_83287C30) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83287C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r11,15384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15384);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
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

__attribute__((alias("__imp__sub_83287C70"))) PPC_WEAK_FUNC(sub_83287C70);
PPC_FUNC_IMPL(__imp__sub_83287C70) {
	PPC_FUNC_PROLOGUE();
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83287c84
	if (ctx.cr6.lt) goto loc_83287C84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83287C84:
	// rldicr r10,r3,0,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFF00000000;
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287C9C"))) PPC_WEAK_FUNC(sub_83287C9C);
PPC_FUNC_IMPL(__imp__sub_83287C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287CA0"))) PPC_WEAK_FUNC(sub_83287CA0);
PPC_FUNC_IMPL(__imp__sub_83287CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83287b40
	sub_83287B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287CA4"))) PPC_WEAK_FUNC(sub_83287CA4);
PPC_FUNC_IMPL(__imp__sub_83287CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287CA8"))) PPC_WEAK_FUNC(sub_83287CA8);
PPC_FUNC_IMPL(__imp__sub_83287CA8) {
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
	// bl 0x83287560
	ctx.lr = 0x83287CC4;
	sub_83287560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83287560
	ctx.lr = 0x83287CD0;
	sub_83287560(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287560
	ctx.lr = 0x83287CDC;
	sub_83287560(ctx, base);
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

__attribute__((alias("__imp__sub_83287CF0"))) PPC_WEAK_FUNC(sub_83287CF0);
PPC_FUNC_IMPL(__imp__sub_83287CF0) {
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
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r7,116
	ctx.r10.s64 = ctx.r7.s64 * 116;
	// lwzux r11,r6,r30
	ea = ctx.r6.u32 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// subfe r5,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// bl 0x832875c8
	ctx.lr = 0x83287D30;
	sub_832875C8(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r31,6000
	ctx.r5.s64 = ctx.r31.s64 + 6000;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzux r10,r9,r30
	ea = ctx.r9.u32 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r5,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r5.u32);
loc_83287D60:
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r7,r7,144
	ctx.r7.s64 = ctx.r7.s64 + 144;
	// bdnz 0x83287d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83287D60;
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

__attribute__((alias("__imp__sub_83287D88"))) PPC_WEAK_FUNC(sub_83287D88);
PPC_FUNC_IMPL(__imp__sub_83287D88) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r6,116
	ctx.r10.s64 = ctx.r6.s64 * 116;
	// lwzux r11,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subfe r5,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x832875c8
	ctx.lr = 0x83287DBC;
	sub_832875C8(ctx, base);
	// lwzux r10,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
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
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287E08"))) PPC_WEAK_FUNC(sub_83287E08);
PPC_FUNC_IMPL(__imp__sub_83287E08) {
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
	// mulli r11,r6,116
	ctx.r11.s64 = ctx.r6.s64 * 116;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x832875c8
	ctx.lr = 0x83287E28;
	sub_832875C8(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x832875f0
	ctx.lr = 0x83287E30;
	sub_832875F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287E40"))) PPC_WEAK_FUNC(sub_83287E40);
PPC_FUNC_IMPL(__imp__sub_83287E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83287E48;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832821e0
	ctx.lr = 0x83287E64;
	sub_832821E0(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a1390
	ctx.lr = 0x83287E78;
	sub_833A1390(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x828a4c98
	ctx.lr = 0x83287E80;
	sub_828A4C98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x832821f0
	ctx.lr = 0x83287E94;
	sub_832821F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287E9C"))) PPC_WEAK_FUNC(sub_83287E9C);
PPC_FUNC_IMPL(__imp__sub_83287E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287EA0"))) PPC_WEAK_FUNC(sub_83287EA0);
PPC_FUNC_IMPL(__imp__sub_83287EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83287EA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r10,r4,116
	ctx.r10.s64 = ctx.r4.s64 * 116;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// addi r9,r10,5072
	ctx.r9.s64 = ctx.r10.s64 + 5072;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// lwz r11,5076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,5092(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5092);
	// beq cr6,0x83287f58
	if (ctx.cr6.eq) goto loc_83287F58;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83287f58
	if (ctx.cr6.eq) goto loc_83287F58;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287778
	ctx.lr = 0x83287F0C;
	sub_83287778(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bne cr6,0x83287f58
	if (!ctx.cr6.eq) goto loc_83287F58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287bf0
	ctx.lr = 0x83287F3C;
	sub_83287BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83287f58
	if (ctx.cr0.eq) goto loc_83287F58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ee438
	ctx.lr = 0x83287F54;
	sub_832EE438(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_83287F58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287F64"))) PPC_WEAK_FUNC(sub_83287F64);
PPC_FUNC_IMPL(__imp__sub_83287F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287F68"))) PPC_WEAK_FUNC(sub_83287F68);
PPC_FUNC_IMPL(__imp__sub_83287F68) {
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
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83287778
	ctx.lr = 0x83287F90;
	sub_83287778(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83287fb0
	if (ctx.cr6.lt) goto loc_83287FB0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83287fd8
	if (ctx.cr6.lt) goto loc_83287FD8;
loc_83287FB0:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83287fcc
	if (ctx.cr6.lt) goto loc_83287FCC;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83287fd8
	if (ctx.cr6.lt) goto loc_83287FD8;
loc_83287FCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83287FD8:
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

__attribute__((alias("__imp__sub_83287FEC"))) PPC_WEAK_FUNC(sub_83287FEC);
PPC_FUNC_IMPL(__imp__sub_83287FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287FF0"))) PPC_WEAK_FUNC(sub_83287FF0);
PPC_FUNC_IMPL(__imp__sub_83287FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83287FF8;
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
	// bl 0x83287bf0
	ctx.lr = 0x8328800C;
	sub_83287BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x83288040
	if (ctx.cr0.eq) goto loc_83288040;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832ee438
	ctx.lr = 0x83288024;
	sub_832EE438(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ee438
	ctx.lr = 0x83288038;
	sub_832EE438(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x83288088
	goto loc_83288088;
loc_83288040:
	// bl 0x83287c30
	ctx.lr = 0x83288044;
	sub_83287C30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328807c
	if (ctx.cr0.eq) goto loc_8328807C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832eed18
	ctx.lr = 0x83288054;
	sub_832EED18(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83288070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// b 0x83288084
	goto loc_83288084;
loc_8328807C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83288084:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83288088:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288090"))) PPC_WEAK_FUNC(sub_83288090);
PPC_FUNC_IMPL(__imp__sub_83288090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83288098;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r9,116
	ctx.r9.s64 = ctx.r9.s64 * 116;
	// lwzux r5,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x832880d0
	if (!ctx.cr6.eq) goto loc_832880D0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x8328810c
	goto loc_8328810C;
loc_832880D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r4,r10,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,5
	ctx.r29.s64 = 5;
	// bl 0x832874e0
	ctx.lr = 0x832880E8;
	sub_832874E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83288120
	if (!ctx.cr0.eq) goto loc_83288120;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83287e40
	ctx.lr = 0x83288104;
	sub_83287E40(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// bl 0x832884b8
	ctx.lr = 0x8328810C;
	sub_832884B8(ctx, base);
loc_8328810C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832875c8
	ctx.lr = 0x8328811C;
	sub_832875C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83288120:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288128"))) PPC_WEAK_FUNC(sub_83288128);
PPC_FUNC_IMPL(__imp__sub_83288128) {
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
	// mulli r11,r5,116
	ctx.r11.s64 = ctx.r5.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r11,5072
	ctx.r5.s64 = ctx.r11.s64 + 5072;
	// addi r31,r5,16
	ctx.r31.s64 = ctx.r5.s64 + 16;
	// lwz r11,5072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5072);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83288164
	if (ctx.cr6.eq) goto loc_83288164;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1033
	ctx.r4.u64 = ctx.r4.u64 | 1033;
	// bl 0x83282390
	ctx.lr = 0x83288160;
	sub_83282390(ctx, base);
	// b 0x83288184
	goto loc_83288184;
loc_83288164:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x83287e40
	ctx.lr = 0x83288178;
	sub_83287E40(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832884d8
	ctx.lr = 0x83288180;
	sub_832884D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83288184:
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

