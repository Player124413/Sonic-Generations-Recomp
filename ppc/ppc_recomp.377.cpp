#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831246A0"))) PPC_WEAK_FUNC(sub_831246A0);
PPC_FUNC_IMPL(__imp__sub_831246A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x831246B0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x830f1388
	ctx.lr = 0x831246C8;
	sub_830F1388(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-18328
	ctx.r11.s64 = ctx.r11.s64 + -18328;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r29,504(r30)
	PPC_STORE_U8(ctx.r30.u32 + 504, ctx.r29.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 508, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r9,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r9.u32);
	// li r4,1023
	ctx.r4.s64 = 1023;
	// stw r29,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r29.u32);
	// addi r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 + 520;
	// bl 0x830e40b8
	ctx.lr = 0x83124700;
	sub_830E40B8(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,14496
	ctx.r11.s64 = ctx.r11.s64 + 14496;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r29,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r29.u32);
	// stw r10,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r10.u32);
	// stw r29,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r29.u32);
	// stw r29,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r29.u32);
	// stw r29,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r29.u32);
	// stw r29,568(r30)
	PPC_STORE_U32(ctx.r30.u32 + 568, ctx.r29.u32);
	// stw r29,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r29.u32);
	// stw r29,576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 576, ctx.r29.u32);
	// stw r29,580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 580, ctx.r29.u32);
	// stw r29,584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 584, ctx.r29.u32);
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// stw r29,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r29.u32);
	// stw r29,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r29.u32);
	// stw r29,600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 600, ctx.r29.u32);
	// stw r29,604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 604, ctx.r29.u32);
	// stw r29,608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 608, ctx.r29.u32);
	// stw r29,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r29.u32);
	// stw r29,616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 616, ctx.r29.u32);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311fd50
	ctx.lr = 0x83124770;
	sub_8311FD50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124780"))) PPC_WEAK_FUNC(sub_83124780);
PPC_FUNC_IMPL(__imp__sub_83124780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-18180(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18180);
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
	ctx.lr = 0x831247BC;
	sub_833A7198(ctx, base);
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
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x830f1810
	ctx.lr = 0x831247D4;
	sub_830F1810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124788"))) PPC_WEAK_FUNC(sub_83124788);
PPC_FUNC_IMPL(__imp__sub_83124788) {
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
	ctx.lr = 0x831247BC;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_831247BC"))) PPC_WEAK_FUNC(sub_831247BC);
PPC_FUNC_IMPL(__imp__sub_831247BC) {
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
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x830f1810
	ctx.lr = 0x831247D4;
	sub_830F1810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831247E4"))) PPC_WEAK_FUNC(sub_831247E4);
PPC_FUNC_IMPL(__imp__sub_831247E4) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// bl 0x830e4138
	ctx.lr = 0x83124800;
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

__attribute__((alias("__imp__sub_83124810"))) PPC_WEAK_FUNC(sub_83124810);
PPC_FUNC_IMPL(__imp__sub_83124810) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319be68
	ctx.lr = 0x83124828;
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

__attribute__((alias("__imp__sub_83124838"))) PPC_WEAK_FUNC(sub_83124838);
PPC_FUNC_IMPL(__imp__sub_83124838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-5572
	ctx.r3.s64 = ctx.r11.s64 + -5572;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124844"))) PPC_WEAK_FUNC(sub_83124844);
PPC_FUNC_IMPL(__imp__sub_83124844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124848"))) PPC_WEAK_FUNC(sub_83124848);
PPC_FUNC_IMPL(__imp__sub_83124848) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124850"))) PPC_WEAK_FUNC(sub_83124850);
PPC_FUNC_IMPL(__imp__sub_83124850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-18072(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18072);
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-18328
	ctx.r11.s64 = ctx.r11.s64 + -18328;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831238a0
	ctx.lr = 0x83124888;
	sub_831238A0(ctx, base);
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// addi r11,r30,520
	ctx.r11.s64 = ctx.r30.s64 + 520;
	// lwz r4,544(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831248A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1810
	ctx.lr = 0x831248B0;
	sub_830F1810(ctx, base);
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

__attribute__((alias("__imp__sub_83124858"))) PPC_WEAK_FUNC(sub_83124858);
PPC_FUNC_IMPL(__imp__sub_83124858) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-18328
	ctx.r11.s64 = ctx.r11.s64 + -18328;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831238a0
	ctx.lr = 0x83124888;
	sub_831238A0(ctx, base);
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// addi r11,r30,520
	ctx.r11.s64 = ctx.r30.s64 + 520;
	// lwz r4,544(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831248A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1810
	ctx.lr = 0x831248B0;
	sub_830F1810(ctx, base);
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

__attribute__((alias("__imp__sub_831248C8"))) PPC_WEAK_FUNC(sub_831248C8);
PPC_FUNC_IMPL(__imp__sub_831248C8) {
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
	// bl 0x830f1810
	ctx.lr = 0x831248E0;
	sub_830F1810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831248F0"))) PPC_WEAK_FUNC(sub_831248F0);
PPC_FUNC_IMPL(__imp__sub_831248F0) {
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
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// bl 0x830e4138
	ctx.lr = 0x8312490C;
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

__attribute__((alias("__imp__sub_8312491C"))) PPC_WEAK_FUNC(sub_8312491C);
PPC_FUNC_IMPL(__imp__sub_8312491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124920"))) PPC_WEAK_FUNC(sub_83124920);
PPC_FUNC_IMPL(__imp__sub_83124920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17796(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17796);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x83124938;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// bl 0x830ed840
	ctx.lr = 0x8312494C;
	sub_830ED840(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83124c58
	if (ctx.cr0.eq) {
		sub_83124C58(ctx, base);
		return;
	}
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,17792
	ctx.r11.s64 = ctx.r11.s64 + 17792;
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x8312498C;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x831249d4
	if (!ctx.cr6.eq) goto loc_831249D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831249C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83124be4
	goto loc_83124BE4;
loc_831249D4:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x83124a50
	if (!ctx.cr6.eq) goto loc_83124A50;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83124a48
	if (ctx.cr6.eq) goto loc_83124A48;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x831249F0;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x83124A0C;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83124A38;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124A48:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x83124be4
	goto loc_83124BE4;
loc_83124A50:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x83124aec
	if (ctx.cr6.eq) goto loc_83124AEC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83124ad0
	if (ctx.cr6.eq) goto loc_83124AD0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x83124ac0
	if (ctx.cr6.eq) goto loc_83124AC0;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x83124ab4
	if (ctx.cr6.eq) goto loc_83124AB4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x83124a90
	if (ctx.cr6.eq) goto loc_83124A90;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x83124A8C;
	sub_830ED2B8(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124A90:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83124aac
	if (ctx.cr0.eq) goto loc_83124AAC;
	// bl 0x831220e0
	ctx.lr = 0x83124AA8;
	sub_831220E0(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124AAC:
	// bl 0x83123a78
	ctx.lr = 0x83124AB0;
	sub_83123A78(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124AB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x83124ABC;
	sub_830EE4B0(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124AC0:
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831219b8
	ctx.lr = 0x83124ACC;
	sub_831219B8(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124AD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x83124AD8;
	sub_830EF610(ctx, base);
loc_83124AD8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83124b38
	goto loc_83124B38;
loc_83124AEC:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83124b14
	if (!ctx.cr6.eq) goto loc_83124B14;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83124B04;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124B14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124B38:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83124b70
	if (ctx.cr6.eq) goto loc_83124B70;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83124B60;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124B70:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83124be4
	if (!ctx.cr0.eq) goto loc_83124BE4;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83124ba0
	if (ctx.cr0.eq) goto loc_83124BA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1b98
	ctx.lr = 0x83124B90;
	sub_830F1B98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124BA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0538
	ctx.lr = 0x83124BA8;
	sub_830F0538(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83124be4
	if (ctx.cr6.eq) goto loc_83124BE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124BE4:
	// b 0x83124c00
	// ERROR 83124C00
	return;
}

__attribute__((alias("__imp__sub_83124928"))) PPC_WEAK_FUNC(sub_83124928);
PPC_FUNC_IMPL(__imp__sub_83124928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x83124938;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// bl 0x830ed840
	ctx.lr = 0x8312494C;
	sub_830ED840(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83124c58
	if (ctx.cr0.eq) goto loc_83124C58;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,17792
	ctx.r11.s64 = ctx.r11.s64 + 17792;
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_83124980:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x8312498C;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x831249d4
	if (!ctx.cr6.eq) goto loc_831249D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831249C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83124be4
	goto loc_83124BE4;
loc_831249D4:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x83124a50
	if (!ctx.cr6.eq) goto loc_83124A50;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83124a48
	if (ctx.cr6.eq) goto loc_83124A48;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x831249F0;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x83124A0C;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83124A38;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124A48:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x83124be4
	goto loc_83124BE4;
loc_83124A50:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x83124aec
	if (ctx.cr6.eq) goto loc_83124AEC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83124ad0
	if (ctx.cr6.eq) goto loc_83124AD0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x83124ac0
	if (ctx.cr6.eq) goto loc_83124AC0;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x83124ab4
	if (ctx.cr6.eq) goto loc_83124AB4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x83124a90
	if (ctx.cr6.eq) goto loc_83124A90;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x83124A8C;
	sub_830ED2B8(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124A90:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83124aac
	if (ctx.cr0.eq) goto loc_83124AAC;
	// bl 0x831220e0
	ctx.lr = 0x83124AA8;
	sub_831220E0(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124AAC:
	// bl 0x83123a78
	ctx.lr = 0x83124AB0;
	sub_83123A78(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124AB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x83124ABC;
	sub_830EE4B0(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124AC0:
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831219b8
	ctx.lr = 0x83124ACC;
	sub_831219B8(ctx, base);
	// b 0x83124ad8
	goto loc_83124AD8;
loc_83124AD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x83124AD8;
	sub_830EF610(ctx, base);
loc_83124AD8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83124b38
	goto loc_83124B38;
loc_83124AEC:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83124b14
	if (!ctx.cr6.eq) goto loc_83124B14;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83124B04;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124B14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124B38:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83124b70
	if (ctx.cr6.eq) goto loc_83124B70;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83124B60;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124B70:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83124be4
	if (!ctx.cr0.eq) goto loc_83124BE4;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83124ba0
	if (ctx.cr0.eq) goto loc_83124BA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1b98
	ctx.lr = 0x83124B90;
	sub_830F1B98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124BA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0538
	ctx.lr = 0x83124BA8;
	sub_830F0538(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83124be4
	if (ctx.cr6.eq) goto loc_83124BE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124BE4:
	// b 0x83124c00
	goto loc_83124C00;
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83124980
	goto loc_83124980;
	// b 0x83124bfc
	goto loc_83124BFC;
	// b 0x83124bfc
	goto loc_83124BFC;
loc_83124BFC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83124C00:
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x83124c24
	if (ctx.cr0.eq) goto loc_83124C24;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// b 0x83124c28
	goto loc_83124C28;
loc_83124C24:
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_83124C28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83124c4c
	if (ctx.cr6.eq) goto loc_83124C4C;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83124c4c
	if (ctx.cr6.eq) goto loc_83124C4C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83124C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83124C4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_83124C58:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,78
	ctx.r6.s64 = 78;
	// addi r4,r11,-19864
	ctx.r4.s64 = ctx.r11.s64 + -19864;
	// li r5,311
	ctx.r5.s64 = 311;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830d5dc0
	ctx.lr = 0x83124C74;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83124C84;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83124BE8"))) PPC_WEAK_FUNC(sub_83124BE8);
PPC_FUNC_IMPL(__imp__sub_83124BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83124980
	// ERROR 83124980
	return;
}

__attribute__((alias("__imp__sub_83124BF4"))) PPC_WEAK_FUNC(sub_83124BF4);
PPC_FUNC_IMPL(__imp__sub_83124BF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x83124bfc
	sub_83124BFC(ctx, base);
	return;
	// b 0x83124bfc
	sub_83124BFC(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124BFC"))) PPC_WEAK_FUNC(sub_83124BFC);
PPC_FUNC_IMPL(__imp__sub_83124BFC) {
	PPC_FUNC_PROLOGUE();
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x83124c24
	if (ctx.cr0.eq) goto loc_83124C24;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// b 0x83124c28
	goto loc_83124C28;
loc_83124C24:
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_83124C28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83124c4c
	if (ctx.cr6.eq) goto loc_83124C4C;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83124c4c
	if (ctx.cr6.eq) goto loc_83124C4C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83124C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83124C4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124C58"))) PPC_WEAK_FUNC(sub_83124C58);
PPC_FUNC_IMPL(__imp__sub_83124C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,78
	ctx.r6.s64 = 78;
	// addi r4,r11,-19864
	ctx.r4.s64 = ctx.r11.s64 + -19864;
	// li r5,311
	ctx.r5.s64 = 311;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830d5dc0
	ctx.lr = 0x83124C74;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83124C84;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17796(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17796);
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
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83124cd4
	if (ctx.cr6.eq) goto loc_83124CD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124CD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r3,r3,19432
	ctx.r3.s64 = ctx.r3.s64 + 19432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124C8C"))) PPC_WEAK_FUNC(sub_83124C8C);
PPC_FUNC_IMPL(__imp__sub_83124C8C) {
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
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83124cd4
	if (ctx.cr6.eq) goto loc_83124CD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124CD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r3,r3,19432
	ctx.r3.s64 = ctx.r3.s64 + 19432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124CEC"))) PPC_WEAK_FUNC(sub_83124CEC);
PPC_FUNC_IMPL(__imp__sub_83124CEC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17796(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17796);
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x83124D28;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17796(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17796);
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,19444
	ctx.r3.s64 = ctx.r3.s64 + 19444;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124CF4"))) PPC_WEAK_FUNC(sub_83124CF4);
PPC_FUNC_IMPL(__imp__sub_83124CF4) {
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x83124D28;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83124D30"))) PPC_WEAK_FUNC(sub_83124D30);
PPC_FUNC_IMPL(__imp__sub_83124D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,19444
	ctx.r3.s64 = ctx.r3.s64 + 19444;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D50"))) PPC_WEAK_FUNC(sub_83124D50);
PPC_FUNC_IMPL(__imp__sub_83124D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17796(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17796);
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,19448
	ctx.r3.s64 = ctx.r3.s64 + 19448;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D58"))) PPC_WEAK_FUNC(sub_83124D58);
PPC_FUNC_IMPL(__imp__sub_83124D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,19448
	ctx.r3.s64 = ctx.r3.s64 + 19448;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D78"))) PPC_WEAK_FUNC(sub_83124D78);
PPC_FUNC_IMPL(__imp__sub_83124D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17796(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17796);
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
	// lwz r28,212(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x83124DA8;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83124ddc
	if (!ctx.cr0.eq) goto loc_83124DDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x83124e14
	goto loc_83124E14;
loc_83124DDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x83124DE4;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x83124e34
	if (ctx.cr6.lt) goto loc_83124E34;
	// bctrl 
	ctx.lr = 0x83124E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,292
	ctx.r4.s64 = 292;
loc_83124E14:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x83124E2C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83124e60
	goto loc_83124E60;
loc_83124E34:
	// bctrl 
	ctx.lr = 0x83124E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x83124E5C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124E60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r3,r3,19452
	ctx.r3.s64 = ctx.r3.s64 + 19452;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D80"))) PPC_WEAK_FUNC(sub_83124D80);
PPC_FUNC_IMPL(__imp__sub_83124D80) {
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
	// lwz r28,212(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x83124DA8;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83124ddc
	if (!ctx.cr0.eq) goto loc_83124DDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x83124e14
	goto loc_83124E14;
loc_83124DDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x83124DE4;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x83124e34
	if (ctx.cr6.lt) goto loc_83124E34;
	// bctrl 
	ctx.lr = 0x83124E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,292
	ctx.r4.s64 = 292;
loc_83124E14:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x83124E2C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83124e60
	goto loc_83124E60;
loc_83124E34:
	// bctrl 
	ctx.lr = 0x83124E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x83124E5C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124E60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r3,r3,19452
	ctx.r3.s64 = ctx.r3.s64 + 19452;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124E80"))) PPC_WEAK_FUNC(sub_83124E80);
PPC_FUNC_IMPL(__imp__sub_83124E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17796(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17796);
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x83124EBC;
	sub_833A7198(ctx, base);
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8319be68
	ctx.lr = 0x83124ED4;
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

__attribute__((alias("__imp__sub_83124E88"))) PPC_WEAK_FUNC(sub_83124E88);
PPC_FUNC_IMPL(__imp__sub_83124E88) {
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x83124EBC;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83124EBC"))) PPC_WEAK_FUNC(sub_83124EBC);
PPC_FUNC_IMPL(__imp__sub_83124EBC) {
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8319be68
	ctx.lr = 0x83124ED4;
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

__attribute__((alias("__imp__sub_83124EE4"))) PPC_WEAK_FUNC(sub_83124EE4);
PPC_FUNC_IMPL(__imp__sub_83124EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124EE8"))) PPC_WEAK_FUNC(sub_83124EE8);
PPC_FUNC_IMPL(__imp__sub_83124EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17284(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17284);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x83124F00;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831250d0
	if (ctx.cr0.eq) {
		sub_831250D0(ctx, base);
		return;
	}
loc_83124F2C:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831250cc
	if (ctx.cr0.eq) {
		sub_831250CC(ctx, base);
		return;
	}
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x83124F44;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83124f70
	if (!ctx.cr6.eq) goto loc_83124F70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83124f2c
	goto loc_83124F2C;
loc_83124F70:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x83124fc8
	if (!ctx.cr6.eq) goto loc_83124FC8;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83124fc0
	if (ctx.cr6.eq) goto loc_83124FC0;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x83124F8C;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x83124F9C;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83124FBC;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124FC0:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x83124f2c
	goto loc_83124F2C;
loc_83124FC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x83125058
	if (ctx.cr6.eq) goto loc_83125058;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83125048
	if (ctx.cr6.eq) goto loc_83125048;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x83125038
	if (ctx.cr6.eq) goto loc_83125038;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8312502c
	if (ctx.cr6.eq) goto loc_8312502C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x83125008
	if (ctx.cr6.eq) goto loc_83125008;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x83125004;
	sub_830ED2B8(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_83125008:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125024
	if (ctx.cr0.eq) goto loc_83125024;
	// bl 0x831220e0
	ctx.lr = 0x83125020;
	sub_831220E0(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_83125024:
	// bl 0x83123a78
	ctx.lr = 0x83125028;
	sub_83123A78(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_8312502C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x83125034;
	sub_830EE4B0(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_83125038:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831219b8
	ctx.lr = 0x83125044;
	sub_831219B8(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_83125048:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x83125050;
	sub_830EF610(ctx, base);
loc_83125050:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312508c
	goto loc_8312508C;
loc_83125058:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83125074
	if (!ctx.cr6.eq) goto loc_83125074;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125070;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125074:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312508C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831250b8
	if (ctx.cr6.eq) goto loc_831250B8;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831250B4;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831250B8:
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// b 0x83124f2c
	goto loc_83124F2C;
}

__attribute__((alias("__imp__sub_83124EF0"))) PPC_WEAK_FUNC(sub_83124EF0);
PPC_FUNC_IMPL(__imp__sub_83124EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x83124F00;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_83124F20:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831250d0
	if (ctx.cr0.eq) goto loc_831250D0;
loc_83124F2C:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831250cc
	if (ctx.cr0.eq) goto loc_831250CC;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x83124F44;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83124f70
	if (!ctx.cr6.eq) goto loc_83124F70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83124F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83124f2c
	goto loc_83124F2C;
loc_83124F70:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x83124fc8
	if (!ctx.cr6.eq) goto loc_83124FC8;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83124fc0
	if (ctx.cr6.eq) goto loc_83124FC0;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x83124F8C;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x83124F9C;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83124FBC;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83124FC0:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x83124f2c
	goto loc_83124F2C;
loc_83124FC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x83125058
	if (ctx.cr6.eq) goto loc_83125058;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83125048
	if (ctx.cr6.eq) goto loc_83125048;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x83125038
	if (ctx.cr6.eq) goto loc_83125038;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8312502c
	if (ctx.cr6.eq) goto loc_8312502C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x83125008
	if (ctx.cr6.eq) goto loc_83125008;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x83125004;
	sub_830ED2B8(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_83125008:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125024
	if (ctx.cr0.eq) goto loc_83125024;
	// bl 0x831220e0
	ctx.lr = 0x83125020;
	sub_831220E0(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_83125024:
	// bl 0x83123a78
	ctx.lr = 0x83125028;
	sub_83123A78(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_8312502C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x83125034;
	sub_830EE4B0(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_83125038:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831219b8
	ctx.lr = 0x83125044;
	sub_831219B8(ctx, base);
	// b 0x83125050
	goto loc_83125050;
loc_83125048:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x83125050;
	sub_830EF610(ctx, base);
loc_83125050:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312508c
	goto loc_8312508C;
loc_83125058:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83125074
	if (!ctx.cr6.eq) goto loc_83125074;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125070;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125074:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312508C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831250b8
	if (ctx.cr6.eq) goto loc_831250B8;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831250B4;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831250B8:
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// b 0x83124f2c
	goto loc_83124F2C;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83124f20
	goto loc_83124F20;
loc_831250CC:
	// b 0x83124f20
	goto loc_83124F20;
loc_831250D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831250C0"))) PPC_WEAK_FUNC(sub_831250C0);
PPC_FUNC_IMPL(__imp__sub_831250C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83124f20
	// ERROR 83124F20
	return;
}

__attribute__((alias("__imp__sub_831250CC"))) PPC_WEAK_FUNC(sub_831250CC);
PPC_FUNC_IMPL(__imp__sub_831250CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x83124f20
	// ERROR 83124F20
	return;
}

__attribute__((alias("__imp__sub_831250D0"))) PPC_WEAK_FUNC(sub_831250D0);
PPC_FUNC_IMPL(__imp__sub_831250D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831250DC"))) PPC_WEAK_FUNC(sub_831250DC);
PPC_FUNC_IMPL(__imp__sub_831250DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17284(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17284);
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
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125114
	if (ctx.cr0.eq) goto loc_83125114;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125110;
	sub_830EDFF8(ctx, base);
	// b 0x83125118
	goto loc_83125118;
loc_83125114:
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_83125118:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83125140
	if (ctx.cr6.eq) goto loc_83125140;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83125140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r3,r3,20672
	ctx.r3.s64 = ctx.r3.s64 + 20672;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831250E4"))) PPC_WEAK_FUNC(sub_831250E4);
PPC_FUNC_IMPL(__imp__sub_831250E4) {
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
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125114
	if (ctx.cr0.eq) goto loc_83125114;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125110;
	sub_830EDFF8(ctx, base);
	// b 0x83125118
	goto loc_83125118;
loc_83125114:
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_83125118:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83125140
	if (ctx.cr6.eq) goto loc_83125140;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83125140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r3,r3,20672
	ctx.r3.s64 = ctx.r3.s64 + 20672;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125160"))) PPC_WEAK_FUNC(sub_83125160);
PPC_FUNC_IMPL(__imp__sub_83125160) {
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
	// bl 0x83124858
	ctx.lr = 0x83125180;
	sub_83124858(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125190
	if (ctx.cr0.eq) goto loc_83125190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83125190;
	sub_830DD3E0(ctx, base);
loc_83125190:
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

__attribute__((alias("__imp__sub_831251AC"))) PPC_WEAK_FUNC(sub_831251AC);
PPC_FUNC_IMPL(__imp__sub_831251AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831251B0"))) PPC_WEAK_FUNC(sub_831251B0);
PPC_FUNC_IMPL(__imp__sub_831251B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17064(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17064);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x831251C8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r10,r10,17792
	ctx.r10.s64 = ctx.r10.s64 + 17792;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r29,r3,128
	ctx.r29.s64 = ctx.r3.s64 + 128;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83125254
	if (ctx.cr6.eq) goto loc_83125254;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125254:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0760
	ctx.lr = 0x8312525C;
	sub_830F0760(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4778
	ctx.lr = 0x83125274;
	sub_830F4778(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x831252ac
	if (ctx.cr0.eq) goto loc_831252AC;
	// li r4,279
	ctx.r4.s64 = 279;
	// bl 0x830edff8
	ctx.lr = 0x83125298;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83125324
	goto loc_83125324;
loc_831252AC:
	// bl 0x83124ef0
	ctx.lr = 0x831252B0;
	sub_83124EF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125324
	if (ctx.cr0.eq) goto loc_83125324;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831252ec
	if (ctx.cr0.eq) goto loc_831252EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1b98
	ctx.lr = 0x831252DC;
	sub_830F1B98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831252EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4778
	ctx.lr = 0x831252F4;
	sub_830F4778(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125324
	if (!ctx.cr0.eq) goto loc_83125324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0538
	ctx.lr = 0x83125314;
	sub_830F0538(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125324:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83125350
	if (ctx.cr6.eq) goto loc_83125350;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125350:
	// b 0x8312535c
	sub_8312535C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831251B8"))) PPC_WEAK_FUNC(sub_831251B8);
PPC_FUNC_IMPL(__imp__sub_831251B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x831251C8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r10,r10,17792
	ctx.r10.s64 = ctx.r10.s64 + 17792;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r29,r3,128
	ctx.r29.s64 = ctx.r3.s64 + 128;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83125254
	if (ctx.cr6.eq) goto loc_83125254;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125254:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0760
	ctx.lr = 0x8312525C;
	sub_830F0760(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4778
	ctx.lr = 0x83125274;
	sub_830F4778(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x831252ac
	if (ctx.cr0.eq) goto loc_831252AC;
	// li r4,279
	ctx.r4.s64 = 279;
	// bl 0x830edff8
	ctx.lr = 0x83125298;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83125324
	goto loc_83125324;
loc_831252AC:
	// bl 0x83124ef0
	ctx.lr = 0x831252B0;
	sub_83124EF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125324
	if (ctx.cr0.eq) goto loc_83125324;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831252ec
	if (ctx.cr0.eq) goto loc_831252EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1b98
	ctx.lr = 0x831252DC;
	sub_830F1B98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831252EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4778
	ctx.lr = 0x831252F4;
	sub_830F4778(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125324
	if (!ctx.cr0.eq) goto loc_83125324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0538
	ctx.lr = 0x83125314;
	sub_830F0538(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125324:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83125350
	if (ctx.cr6.eq) goto loc_83125350;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125350:
	// b 0x8312535c
	goto loc_8312535C;
	// b 0x8312535c
	goto loc_8312535C;
	// b 0x8312535c
	goto loc_8312535C;
loc_8312535C:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83125384
	if (ctx.cr6.eq) goto loc_83125384;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83125384
	if (ctx.cr6.eq) goto loc_83125384;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83125384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83125384:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125354"))) PPC_WEAK_FUNC(sub_83125354);
PPC_FUNC_IMPL(__imp__sub_83125354) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312535c
	sub_8312535C(ctx, base);
	return;
	// b 0x8312535c
	sub_8312535C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312535C"))) PPC_WEAK_FUNC(sub_8312535C);
PPC_FUNC_IMPL(__imp__sub_8312535C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83125384
	if (ctx.cr6.eq) goto loc_83125384;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83125384
	if (ctx.cr6.eq) goto loc_83125384;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83125384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83125384:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312538C"))) PPC_WEAK_FUNC(sub_8312538C);
PPC_FUNC_IMPL(__imp__sub_8312538C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17064(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17064);
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x831253C8;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17064(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17064);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,21332
	ctx.r3.s64 = ctx.r3.s64 + 21332;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125394"))) PPC_WEAK_FUNC(sub_83125394);
PPC_FUNC_IMPL(__imp__sub_83125394) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x831253C8;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_831253D0"))) PPC_WEAK_FUNC(sub_831253D0);
PPC_FUNC_IMPL(__imp__sub_831253D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,21332
	ctx.r3.s64 = ctx.r3.s64 + 21332;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831253E4"))) PPC_WEAK_FUNC(sub_831253E4);
PPC_FUNC_IMPL(__imp__sub_831253E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17064(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17064);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,21336
	ctx.r3.s64 = ctx.r3.s64 + 21336;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831253EC"))) PPC_WEAK_FUNC(sub_831253EC);
PPC_FUNC_IMPL(__imp__sub_831253EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,21336
	ctx.r3.s64 = ctx.r3.s64 + 21336;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125400"))) PPC_WEAK_FUNC(sub_83125400);
PPC_FUNC_IMPL(__imp__sub_83125400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17064(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17064);
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
	// lwz r28,180(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x83125430;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83125464
	if (!ctx.cr0.eq) goto loc_83125464;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8312549c
	goto loc_8312549C;
loc_83125464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312546C;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x831254bc
	if (ctx.cr6.lt) goto loc_831254BC;
	// bctrl 
	ctx.lr = 0x83125490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,292
	ctx.r4.s64 = 292;
loc_8312549C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x831254B4;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831254e8
	goto loc_831254E8;
loc_831254BC:
	// bctrl 
	ctx.lr = 0x831254C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x831254E4;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831254E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r3,r3,21340
	ctx.r3.s64 = ctx.r3.s64 + 21340;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125408"))) PPC_WEAK_FUNC(sub_83125408);
PPC_FUNC_IMPL(__imp__sub_83125408) {
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
	// lwz r28,180(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x83125430;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83125464
	if (!ctx.cr0.eq) goto loc_83125464;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8312549c
	goto loc_8312549C;
loc_83125464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312546C;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x831254bc
	if (ctx.cr6.lt) goto loc_831254BC;
	// bctrl 
	ctx.lr = 0x83125490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,292
	ctx.r4.s64 = 292;
loc_8312549C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x831254B4;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831254e8
	goto loc_831254E8;
loc_831254BC:
	// bctrl 
	ctx.lr = 0x831254C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x831254E4;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831254E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r3,r3,21340
	ctx.r3.s64 = ctx.r3.s64 + 21340;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125500"))) PPC_WEAK_FUNC(sub_83125500);
PPC_FUNC_IMPL(__imp__sub_83125500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-17064(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17064);
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312553C;
	sub_833A7198(ctx, base);
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319be68
	ctx.lr = 0x83125554;
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

__attribute__((alias("__imp__sub_83125508"))) PPC_WEAK_FUNC(sub_83125508);
PPC_FUNC_IMPL(__imp__sub_83125508) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312553C;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8312553C"))) PPC_WEAK_FUNC(sub_8312553C);
PPC_FUNC_IMPL(__imp__sub_8312553C) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319be68
	ctx.lr = 0x83125554;
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

__attribute__((alias("__imp__sub_83125564"))) PPC_WEAK_FUNC(sub_83125564);
PPC_FUNC_IMPL(__imp__sub_83125564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125568"))) PPC_WEAK_FUNC(sub_83125568);
PPC_FUNC_IMPL(__imp__sub_83125568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83125570;
	__savegprlr_29(ctx, base);
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831255c4
	if (ctx.cr6.lt) goto loc_831255C4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,49177
	ctx.r11.u64 = ctx.r11.u64 | 49177;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831255b4
	if (ctx.cr0.eq) goto loc_831255B4;
loc_831255AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83125630
	goto loc_83125630;
loc_831255B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e58
	ctx.lr = 0x831255BC;
	sub_830F9E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831255ac
	if (ctx.cr0.eq) goto loc_831255AC;
loc_831255C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831255ac
	if (ctx.cr6.eq) goto loc_831255AC;
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
	// beq 0x8312561c
	if (ctx.cr0.eq) goto loc_8312561C;
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
	// b 0x8312562c
	goto loc_8312562C;
loc_8312561C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fa918
	ctx.lr = 0x8312562C;
	sub_830FA918(ctx, base);
loc_8312562C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83125630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125638"))) PPC_WEAK_FUNC(sub_83125638);
PPC_FUNC_IMPL(__imp__sub_83125638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125650"))) PPC_WEAK_FUNC(sub_83125650);
PPC_FUNC_IMPL(__imp__sub_83125650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83125658;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831256b8
	if (!ctx.cr6.eq) goto loc_831256B8;
	// li r4,245
	ctx.r4.s64 = 245;
	// bl 0x830edff8
	ctx.lr = 0x83125680;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x8312568C;
	sub_830ED2B8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,77
	ctx.r6.s64 = 77;
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,592
	ctx.r5.s64 = 592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5dc0
	ctx.lr = 0x831256A8;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x831256B8;
	sub_833A7198(ctx, base);
loc_831256B8:
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831256e0
	if (ctx.cr0.eq) goto loc_831256E0;
	// lwz r10,472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r27,44(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x831256e4
	goto loc_831256E4;
loc_831256E0:
	// lwz r27,44(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_831256E4:
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x831256EC;
	sub_8311D468(ctx, base);
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x83125708;
	sub_830E3560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x83125714;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125750
	if (!ctx.cr0.eq) goto loc_83125750;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x83125724;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,202
	ctx.r4.s64 = 202;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x830ee100
	ctx.lr = 0x83125740;
	sub_830EE100(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x8312574C;
	sub_830ED2B8(ctx, base);
	// b 0x83125958
	goto loc_83125958;
loc_83125750:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83125778
	if (ctx.cr6.eq) goto loc_83125778;
	// li r4,278
	ctx.r4.s64 = 278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125778;
	sub_830EDFF8(ctx, base);
loc_83125778:
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83125788;
	sub_830F50E0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4f70
	ctx.lr = 0x83125794;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831257c4
	if (!ctx.cr0.eq) goto loc_831257C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x831257A8;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x830ee100
	ctx.lr = 0x831257C4;
	sub_830EE100(ctx, base);
loc_831257C4:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831258f8
	if (ctx.cr0.eq) goto loc_831258F8;
	// lbz r11,33(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125810
	if (ctx.cr0.eq) goto loc_83125810;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83125810
	if (!ctx.cr6.eq) goto loc_83125810;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x831257F4;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,110
	ctx.r4.s64 = 110;
	// bl 0x8311e658
	ctx.lr = 0x83125810;
	sub_8311E658(ctx, base);
loc_83125810:
	// lbz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125850
	if (ctx.cr0.eq) goto loc_83125850;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x83125850
	if (!ctx.cr6.eq) goto loc_83125850;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x83125834;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,113
	ctx.r4.s64 = 113;
	// bl 0x8311e658
	ctx.lr = 0x83125850;
	sub_8311E658(ctx, base);
loc_83125850:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x831258f8
	if (ctx.cr0.lt) goto loc_831258F8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831258a4
	if (!ctx.cr6.eq) goto loc_831258A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,16
	ctx.r4.s64 = 16;
loc_8312589C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831258e4
	goto loc_831258E4;
loc_831258A4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x831258c4
	if (ctx.cr6.lt) goto loc_831258C4;
	// bctrl 
	ctx.lr = 0x831258BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x8312589c
	goto loc_8312589C;
loc_831258C4:
	// bctrl 
	ctx.lr = 0x831258C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x830e3560
	ctx.lr = 0x831258DC;
	sub_830E3560(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_831258E4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8311e658
	ctx.lr = 0x831258F8;
	sub_8311E658(ctx, base);
loc_831258F8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83125948
	if (ctx.cr6.eq) goto loc_83125948;
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125920
	if (ctx.cr0.eq) goto loc_83125920;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x83125928
	goto loc_83125928;
loc_83125920:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r7,r11,-5740
	ctx.r7.s64 = ctx.r11.s64 + -5740;
loc_83125928:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83125948:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
loc_83125958:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125960"))) PPC_WEAK_FUNC(sub_83125960);
PPC_FUNC_IMPL(__imp__sub_83125960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83125968;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83125a84
	if (ctx.cr6.eq) goto loc_83125A84;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125a44
	if (ctx.cr0.eq) goto loc_83125A44;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,432
	ctx.r3.s64 = ctx.r3.s64 + 432;
	// sthx r26,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u16);
	// lwz r28,24(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8311d6e8
	ctx.lr = 0x831259AC;
	sub_8311D6E8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831259C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83125a34
	if (ctx.cr0.eq) goto loc_83125A34;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f9048
	ctx.lr = 0x831259D8;
	sub_830F9048(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125a2c
	if (ctx.cr0.eq) goto loc_83125A2C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x83125a0c
	if (!ctx.cr6.eq) goto loc_83125A0C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83125a78
	if (ctx.cr6.eq) goto loc_83125A78;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x83125a6c
	goto loc_83125A6C;
loc_83125A0C:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x83125a78
	if (!ctx.cr6.eq) goto loc_83125A78;
loc_83125A14:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83125a78
	if (ctx.cr6.eq) goto loc_83125A78;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x83125a60
	goto loc_83125A60;
loc_83125A2C:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x83125a14
	if (ctx.cr6.eq) goto loc_83125A14;
loc_83125A34:
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x83125A40;
	sub_8311E528(ctx, base);
	// b 0x83125a78
	goto loc_83125A78;
loc_83125A44:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83125a78
	if (ctx.cr6.eq) goto loc_83125A78;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
loc_83125A60:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83125A6C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83125A78:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
loc_83125A84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125A8C"))) PPC_WEAK_FUNC(sub_83125A8C);
PPC_FUNC_IMPL(__imp__sub_83125A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125A90"))) PPC_WEAK_FUNC(sub_83125A90);
PPC_FUNC_IMPL(__imp__sub_83125A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83125A98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r11,-5736
	ctx.r28.s64 = ctx.r11.s64 + -5736;
	// addi r27,r10,-6224
	ctx.r27.s64 = ctx.r10.s64 + -6224;
	// beq cr6,0x83125b5c
	if (ctx.cr6.eq) goto loc_83125B5C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125b5c
	if (ctx.cr0.eq) goto loc_83125B5C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,-5980
	ctx.r4.s64 = ctx.r11.s64 + -5980;
	// bl 0x830d8d28
	ctx.lr = 0x83125ADC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125aec
	if (ctx.cr0.eq) goto loc_83125AEC;
	// li r4,301
	ctx.r4.s64 = 301;
	// b 0x83125b18
	goto loc_83125B18;
loc_83125AEC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83125AF8;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125b20
	if (ctx.cr0.eq) goto loc_83125B20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83125B0C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125b20
	if (!ctx.cr0.eq) goto loc_83125B20;
	// li r4,303
	ctx.r4.s64 = 303;
loc_83125B18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125B20;
	sub_830EDFF8(ctx, base);
loc_83125B20:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83125b40
	if (ctx.cr6.eq) goto loc_83125B40;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83125b5c
	if (!ctx.cr0.eq) goto loc_83125B5C;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83125b5c
	if (!ctx.cr6.eq) goto loc_83125B5C;
loc_83125B40:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,300
	ctx.r4.s64 = 300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ee100
	ctx.lr = 0x83125B5C;
	sub_830EE100(ctx, base);
loc_83125B5C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-5952
	ctx.r4.s64 = ctx.r11.s64 + -5952;
	// bl 0x830d8d28
	ctx.lr = 0x83125B6C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125b7c
	if (ctx.cr0.eq) goto loc_83125B7C;
	// li r4,302
	ctx.r4.s64 = 302;
	// b 0x83125ba8
	goto loc_83125BA8;
loc_83125B7C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83125B88;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125bb0
	if (ctx.cr0.eq) goto loc_83125BB0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83125B9C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125bb0
	if (!ctx.cr0.eq) goto loc_83125BB0;
	// li r4,304
	ctx.r4.s64 = 304;
loc_83125BA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125BB0;
	sub_830EDFF8(ctx, base);
loc_83125BB0:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x8311df30
	ctx.lr = 0x83125BD8;
	sub_8311DF30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125BE0"))) PPC_WEAK_FUNC(sub_83125BE0);
PPC_FUNC_IMPL(__imp__sub_83125BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-16508(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16508);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a0188
	ctx.lr = 0x83125BF8;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r6,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r6.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// beq cr6,0x83125c30
	if (ctx.cr6.eq) goto loc_83125C30;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x83125c34
	goto loc_83125C34;
loc_83125C30:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83125C34:
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// stw r26,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r26.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r26.u16);
	// bl 0x830f5060
	ctx.lr = 0x83125C50;
	sub_830F5060(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125d38
	if (ctx.cr0.eq) goto loc_83125D38;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r21,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r21.u32);
	// beq cr6,0x83125c7c
	if (ctx.cr6.eq) goto loc_83125C7C;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// b 0x83125c80
	goto loc_83125C80;
loc_83125C7C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83125C80:
	// li r25,1
	ctx.r25.s64 = 1;
	// sth r26,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r26.u16);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stb r26,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r26.u8);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r27,r11,32852
	ctx.r27.u64 = ctx.r11.u64 | 32852;
loc_83125CA8:
	// addi r30,r29,128
	ctx.r30.s64 = ctx.r29.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x83125CB4;
	sub_830F4DD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r3,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r3.u16);
	// bne 0x83125cf8
	if (!ctx.cr0.eq) goto loc_83125CF8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,2498
	ctx.r5.s64 = 2498;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x830ed320
	ctx.lr = 0x83125CE0;
	sub_830ED320(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x83125CF4;
	sub_833A7198(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125CF8:
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83125d4c
	if (!ctx.cr6.eq) goto loc_83125D4C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// beq cr6,0x83125d44
	if (ctx.cr6.eq) goto loc_83125D44;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// ble cr6,0x83125d4c
	if (!ctx.cr6.gt) goto loc_83125D4C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125D34;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125D38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83125D3C:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
loc_83125D44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83125d3c
	goto loc_83125D3C;
loc_83125D4C:
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
	// cmplwi cr6,r10,38
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 38, ctx.xer);
	// bne cr6,0x83125d90
	if (!ctx.cr6.eq) goto loc_83125D90;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,86
	ctx.r6.s64 = ctx.r31.s64 + 86;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83125e5c
	if (ctx.cr6.eq) goto loc_83125E5C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x83125ca8
	goto loc_83125CA8;
loc_83125D90:
	// cmplwi cr6,r10,55296
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55296, ctx.xer);
	// blt cr6,0x83125dc4
	if (ctx.cr6.lt) goto loc_83125DC4;
	// cmplwi cr6,r10,56319
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56319, ctx.xer);
	// bgt cr6,0x83125dc4
	if (ctx.cr6.gt) goto loc_83125DC4;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125dbc
	if (ctx.cr0.eq) goto loc_83125DBC;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125DB4;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83125e5c
	goto loc_83125E5C;
loc_83125DBC:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x83125e5c
	goto loc_83125E5C;
loc_83125DC4:
	// cmplwi cr6,r10,56320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56320, ctx.xer);
	// blt cr6,0x83125df0
	if (ctx.cr6.lt) goto loc_83125DF0;
	// cmplwi cr6,r10,57343
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57343, ctx.xer);
	// bgt cr6,0x83125df0
	if (ctx.cr6.gt) goto loc_83125DF0;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125e58
	if (!ctx.cr0.eq) goto loc_83125E58;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125DE8;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83125e58
	goto loc_83125E58;
loc_83125DF0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125e08
	if (ctx.cr0.eq) goto loc_83125E08;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125E04;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125E08:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lhz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125e58
	if (!ctx.cr0.eq) goto loc_83125E58;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,220(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// bl 0x830d6590
	ctx.lr = 0x83125E34;
	sub_830D6590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee100
	ctx.lr = 0x83125E54;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125E58:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_83125E5C:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83125e94
	if (!ctx.cr0.eq) goto loc_83125E94;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x83125e94
	if (!ctx.cr6.eq) goto loc_83125E94;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee100
	ctx.lr = 0x83125E90;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125E94:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83125f40
	if (!ctx.cr6.eq) goto loc_83125F40;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83125f10
	if (!ctx.cr0.eq) goto loc_83125F10;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x83125ec8
	if (ctx.cr6.eq) goto loc_83125EC8;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83125ec8
	if (ctx.cr6.eq) goto loc_83125EC8;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x83125f10
	if (!ctx.cr6.eq) goto loc_83125F10;
loc_83125EC8:
	// lbz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125f08
	if (ctx.cr0.eq) goto loc_83125F08;
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125f08
	if (ctx.cr0.eq) goto loc_83125F08;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125f08
	if (ctx.cr0.eq) goto loc_83125F08;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8311e658
	ctx.lr = 0x83125F04;
	sub_8311E658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125F08:
	// li r11,32
	ctx.r11.s64 = 32;
	// sth r11,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
loc_83125F10:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// bl 0x830d5880
	ctx.lr = 0x83125F1C;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// mr. r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830d5880
	ctx.lr = 0x83125F34;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r26,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r26.u16);
	// b 0x83125ca8
	goto loc_83125CA8;
loc_83125F40:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x83125fa4
	if (!ctx.cr6.eq) goto loc_83125FA4;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125f60
	if (ctx.cr0.eq) goto loc_83125F60;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x83125f78
	if (!ctx.cr6.eq) goto loc_83125F78;
loc_83125F60:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125ca8
	if (!ctx.cr0.eq) goto loc_83125CA8;
loc_83125F78:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125f90
	if (ctx.cr0.eq) goto loc_83125F90;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830d5880
	ctx.lr = 0x83125F8C;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125F90:
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
loc_83125F98:
	// li r24,1
	ctx.r24.s64 = 1;
	// stb r24,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r24.u8);
	// b 0x83125f10
	goto loc_83125F10;
loc_83125FA4:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x83125f10
	if (!ctx.cr6.eq) goto loc_83125F10;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x83125fd8
	if (ctx.cr6.eq) goto loc_83125FD8;
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83125f98
	if (ctx.cr0.eq) goto loc_83125F98;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83125f98
	if (!ctx.cr0.eq) goto loc_83125F98;
loc_83125FD8:
	// lbz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 14);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
	// lbz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
	// clrlwi. r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
	// clrlwi. r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83126034
	if (ctx.cr0.eq) goto loc_83126034;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x83126034
	if (!ctx.cr6.eq) goto loc_83126034;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f08
	ctx.lr = 0x83126018;
	sub_830F4F08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
loc_83126034:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8311e658
	ctx.lr = 0x83126050;
	sub_8311E658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83125ca8
	goto loc_83125CA8;
}

__attribute__((alias("__imp__sub_83125BE8"))) PPC_WEAK_FUNC(sub_83125BE8);
PPC_FUNC_IMPL(__imp__sub_83125BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a0188
	ctx.lr = 0x83125BF8;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r6,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r6.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// beq cr6,0x83125c30
	if (ctx.cr6.eq) goto loc_83125C30;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x83125c34
	goto loc_83125C34;
loc_83125C30:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83125C34:
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// stw r26,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r26.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r26.u16);
	// bl 0x830f5060
	ctx.lr = 0x83125C50;
	sub_830F5060(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125d38
	if (ctx.cr0.eq) goto loc_83125D38;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r21,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r21.u32);
	// beq cr6,0x83125c7c
	if (ctx.cr6.eq) goto loc_83125C7C;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// b 0x83125c80
	goto loc_83125C80;
loc_83125C7C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83125C80:
	// li r25,1
	ctx.r25.s64 = 1;
	// sth r26,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r26.u16);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stb r26,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r26.u8);
loc_83125CA0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r27,r11,32852
	ctx.r27.u64 = ctx.r11.u64 | 32852;
loc_83125CA8:
	// addi r30,r29,128
	ctx.r30.s64 = ctx.r29.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x83125CB4;
	sub_830F4DD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r3,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r3.u16);
	// bne 0x83125cf8
	if (!ctx.cr0.eq) goto loc_83125CF8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,2498
	ctx.r5.s64 = 2498;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x830ed320
	ctx.lr = 0x83125CE0;
	sub_830ED320(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x83125CF4;
	sub_833A7198(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125CF8:
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83125d4c
	if (!ctx.cr6.eq) goto loc_83125D4C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// beq cr6,0x83125d44
	if (ctx.cr6.eq) goto loc_83125D44;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// ble cr6,0x83125d4c
	if (!ctx.cr6.gt) goto loc_83125D4C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125D34;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125D38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83125D3C:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
loc_83125D44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83125d3c
	goto loc_83125D3C;
loc_83125D4C:
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
	// cmplwi cr6,r10,38
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 38, ctx.xer);
	// bne cr6,0x83125d90
	if (!ctx.cr6.eq) goto loc_83125D90;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,86
	ctx.r6.s64 = ctx.r31.s64 + 86;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83125D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83125e5c
	if (ctx.cr6.eq) goto loc_83125E5C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x83125ca8
	goto loc_83125CA8;
loc_83125D90:
	// cmplwi cr6,r10,55296
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55296, ctx.xer);
	// blt cr6,0x83125dc4
	if (ctx.cr6.lt) goto loc_83125DC4;
	// cmplwi cr6,r10,56319
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56319, ctx.xer);
	// bgt cr6,0x83125dc4
	if (ctx.cr6.gt) goto loc_83125DC4;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125dbc
	if (ctx.cr0.eq) goto loc_83125DBC;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125DB4;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83125e5c
	goto loc_83125E5C;
loc_83125DBC:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x83125e5c
	goto loc_83125E5C;
loc_83125DC4:
	// cmplwi cr6,r10,56320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56320, ctx.xer);
	// blt cr6,0x83125df0
	if (ctx.cr6.lt) goto loc_83125DF0;
	// cmplwi cr6,r10,57343
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57343, ctx.xer);
	// bgt cr6,0x83125df0
	if (ctx.cr6.gt) goto loc_83125DF0;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125e58
	if (!ctx.cr0.eq) goto loc_83125E58;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125DE8;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83125e58
	goto loc_83125E58;
loc_83125DF0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125e08
	if (ctx.cr0.eq) goto loc_83125E08;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830edff8
	ctx.lr = 0x83125E04;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125E08:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lhz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125e58
	if (!ctx.cr0.eq) goto loc_83125E58;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,220(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// bl 0x830d6590
	ctx.lr = 0x83125E34;
	sub_830D6590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee100
	ctx.lr = 0x83125E54;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125E58:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_83125E5C:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83125e94
	if (!ctx.cr0.eq) goto loc_83125E94;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x83125e94
	if (!ctx.cr6.eq) goto loc_83125E94;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ee100
	ctx.lr = 0x83125E90;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125E94:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83125f40
	if (!ctx.cr6.eq) goto loc_83125F40;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83125f10
	if (!ctx.cr0.eq) goto loc_83125F10;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x83125ec8
	if (ctx.cr6.eq) goto loc_83125EC8;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83125ec8
	if (ctx.cr6.eq) goto loc_83125EC8;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x83125f10
	if (!ctx.cr6.eq) goto loc_83125F10;
loc_83125EC8:
	// lbz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125f08
	if (ctx.cr0.eq) goto loc_83125F08;
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125f08
	if (ctx.cr0.eq) goto loc_83125F08;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125f08
	if (ctx.cr0.eq) goto loc_83125F08;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8311e658
	ctx.lr = 0x83125F04;
	sub_8311E658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125F08:
	// li r11,32
	ctx.r11.s64 = 32;
	// sth r11,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
loc_83125F10:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// bl 0x830d5880
	ctx.lr = 0x83125F1C;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// mr. r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830d5880
	ctx.lr = 0x83125F34;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r26,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r26.u16);
	// b 0x83125ca8
	goto loc_83125CA8;
loc_83125F40:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x83125fa4
	if (!ctx.cr6.eq) goto loc_83125FA4;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83125f60
	if (ctx.cr0.eq) goto loc_83125F60;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x83125f78
	if (!ctx.cr6.eq) goto loc_83125F78;
loc_83125F60:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83125ca8
	if (!ctx.cr0.eq) goto loc_83125CA8;
loc_83125F78:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125f90
	if (ctx.cr0.eq) goto loc_83125F90;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830d5880
	ctx.lr = 0x83125F8C;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83125F90:
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
loc_83125F98:
	// li r24,1
	ctx.r24.s64 = 1;
	// stb r24,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r24.u8);
	// b 0x83125f10
	goto loc_83125F10;
loc_83125FA4:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x83125f10
	if (!ctx.cr6.eq) goto loc_83125F10;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x83125fd8
	if (ctx.cr6.eq) goto loc_83125FD8;
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83125f98
	if (ctx.cr0.eq) goto loc_83125F98;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83125f98
	if (!ctx.cr0.eq) goto loc_83125F98;
loc_83125FD8:
	// lbz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 14);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
	// lbz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
	// clrlwi. r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
	// clrlwi. r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83126034
	if (ctx.cr0.eq) goto loc_83126034;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x83126034
	if (!ctx.cr6.eq) goto loc_83126034;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4f08
	ctx.lr = 0x83126018;
	sub_830F4F08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83125ca8
	if (ctx.cr0.eq) goto loc_83125CA8;
loc_83126034:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8311e658
	ctx.lr = 0x83126050;
	sub_8311E658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83125ca8
	goto loc_83125CA8;
	// lwz r29,292(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r22,316(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r20,308(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r21,100(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r23,82(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// lwz r25,92(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r24,81(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// lbz r28,83(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 83);
	// b 0x83125ca0
	goto loc_83125CA0;
}

__attribute__((alias("__imp__sub_83126058"))) PPC_WEAK_FUNC(sub_83126058);
PPC_FUNC_IMPL(__imp__sub_83126058) {
	PPC_FUNC_PROLOGUE();
	// lwz r29,292(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r22,316(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r20,308(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r21,100(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r23,82(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// lwz r25,92(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r24,81(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// lbz r28,83(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 83);
	// b 0x83125ca0
	// ERROR 83125CA0
	return;
}

__attribute__((alias("__imp__sub_83126080"))) PPC_WEAK_FUNC(sub_83126080);
PPC_FUNC_IMPL(__imp__sub_83126080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-16508(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16508);
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r26,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r26.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
	// addi r3,r3,24664
	ctx.r3.s64 = ctx.r3.s64 + 24664;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126088"))) PPC_WEAK_FUNC(sub_83126088);
PPC_FUNC_IMPL(__imp__sub_83126088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// stb r26,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r26.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// stb r26,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r26.u8);
	// addi r3,r3,24664
	ctx.r3.s64 = ctx.r3.s64 + 24664;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831260AC"))) PPC_WEAK_FUNC(sub_831260AC);
PPC_FUNC_IMPL(__imp__sub_831260AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831260B0"))) PPC_WEAK_FUNC(sub_831260B0);
PPC_FUNC_IMPL(__imp__sub_831260B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-16448(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16448);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x831260C0;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,128
	ctx.r26.s64 = ctx.r3.s64 + 128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f70
	ctx.lr = 0x831260DC;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126110
	if (!ctx.cr0.eq) goto loc_83126110;
	// li r4,261
	ctx.r4.s64 = 261;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831260F0;
	sub_830EDFF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f50e0
	ctx.lr = 0x831260FC;
	sub_830F50E0(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f70
	ctx.lr = 0x83126108;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312637c
	if (ctx.cr0.eq) goto loc_8312637C;
loc_83126110:
	// addi r25,r30,224
	ctx.r25.s64 = ctx.r30.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312611C;
	sub_830E4258(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8311d6e8
	ctx.lr = 0x83126138;
	sub_8311D6E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x8312615C;
	sub_830F4DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x831262c4
	if (ctx.cr0.eq) goto loc_831262C4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// ori r22,r10,32852
	ctx.r22.u64 = ctx.r10.u64 | 32852;
	// addi r20,r11,-16464
	ctx.r20.s64 = ctx.r11.s64 + -16464;
loc_83126178:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831261c8
	if (ctx.cr0.eq) goto loc_831261C8;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831261c8
	if (ctx.cr0.eq) goto loc_831261C8;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831261c8
	if (ctx.cr0.eq) goto loc_831261C8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831261c8
	if (ctx.cr0.eq) goto loc_831261C8;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x831261c8
	if (!ctx.cr6.eq) goto loc_831261C8;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x831261C8;
	sub_8311E528(ctx, base);
loc_831261C8:
	// cmplwi cr6,r29,93
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 93, ctx.xer);
	// bne cr6,0x831261e4
	if (!ctx.cr6.eq) goto loc_831261E4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x831261DC;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831262fc
	if (!ctx.cr0.eq) goto loc_831262FC;
loc_831261E4:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831262a4
	if (!ctx.cr0.eq) goto loc_831262A4;
	// cmplwi cr6,r29,55296
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 55296, ctx.xer);
	// blt cr6,0x8312621c
	if (ctx.cr6.lt) goto loc_8312621C;
	// cmplwi cr6,r29,56319
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56319, ctx.xer);
	// bgt cr6,0x8312621c
	if (ctx.cr6.gt) goto loc_8312621C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126214
	if (ctx.cr0.eq) goto loc_83126214;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126210;
	sub_830EDFF8(ctx, base);
	// b 0x831262a4
	goto loc_831262A4;
loc_83126214:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x831262a4
	goto loc_831262A4;
loc_8312621C:
	// cmplwi cr6,r29,56320
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56320, ctx.xer);
	// blt cr6,0x8312623c
	if (ctx.cr6.lt) goto loc_8312623C;
	// cmplwi cr6,r29,57343
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 57343, ctx.xer);
	// bgt cr6,0x8312623c
	if (ctx.cr6.gt) goto loc_8312623C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831262a0
	if (!ctx.cr0.eq) goto loc_831262A0;
	// li r4,282
	ctx.r4.s64 = 282;
	// b 0x83126248
	goto loc_83126248;
loc_8312623C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126254
	if (ctx.cr0.eq) goto loc_83126254;
	// li r4,249
	ctx.r4.s64 = 249;
loc_83126248:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126250;
	sub_830EDFF8(ctx, base);
	// b 0x831262a0
	goto loc_831262A0;
loc_83126254:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831262a0
	if (!ctx.cr0.eq) goto loc_831262A0;
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
	ctx.lr = 0x83126280;
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
	ctx.lr = 0x8312629C;
	sub_830EE100(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
loc_831262A0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_831262A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830d5880
	ctx.lr = 0x831262B0;
	sub_830D5880(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x831262B8;
	sub_830F4DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83126178
	if (!ctx.cr0.eq) goto loc_83126178;
loc_831262C4:
	// li r4,264
	ctx.r4.s64 = 264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831262D0;
	sub_830EDFF8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,2709
	ctx.r5.s64 = 2709;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830ed320
	ctx.lr = 0x831262EC;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x831262FC;
	sub_833A7198(ctx, base);
loc_831262FC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126310
	if (ctx.cr0.eq) goto loc_83126310;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126310;
	sub_830EDFF8(ctx, base);
loc_83126310:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126330
	if (ctx.cr0.eq) goto loc_83126330;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// beq cr6,0x83126330
	if (ctx.cr6.eq) goto loc_83126330;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x83126330;
	sub_8311E528(ctx, base);
loc_83126330:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83126370
	if (ctx.cr6.eq) goto loc_83126370;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,24(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83126370:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312637C;
	sub_830E4388(ctx, base);
loc_8312637C:
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831260B8"))) PPC_WEAK_FUNC(sub_831260B8);
PPC_FUNC_IMPL(__imp__sub_831260B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x831260C0;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,128
	ctx.r26.s64 = ctx.r3.s64 + 128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f70
	ctx.lr = 0x831260DC;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126110
	if (!ctx.cr0.eq) goto loc_83126110;
	// li r4,261
	ctx.r4.s64 = 261;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831260F0;
	sub_830EDFF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f50e0
	ctx.lr = 0x831260FC;
	sub_830F50E0(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4f70
	ctx.lr = 0x83126108;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312637c
	if (ctx.cr0.eq) goto loc_8312637C;
loc_83126110:
	// addi r25,r30,224
	ctx.r25.s64 = ctx.r30.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312611C;
	sub_830E4258(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8311d6e8
	ctx.lr = 0x83126138;
	sub_8311D6E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x8312615C;
	sub_830F4DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x831262c4
	if (ctx.cr0.eq) goto loc_831262C4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// ori r22,r10,32852
	ctx.r22.u64 = ctx.r10.u64 | 32852;
	// addi r20,r11,-16464
	ctx.r20.s64 = ctx.r11.s64 + -16464;
loc_83126178:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831261c8
	if (ctx.cr0.eq) goto loc_831261C8;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831261c8
	if (ctx.cr0.eq) goto loc_831261C8;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831261c8
	if (ctx.cr0.eq) goto loc_831261C8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831261c8
	if (ctx.cr0.eq) goto loc_831261C8;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x831261c8
	if (!ctx.cr6.eq) goto loc_831261C8;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x831261C8;
	sub_8311E528(ctx, base);
loc_831261C8:
	// cmplwi cr6,r29,93
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 93, ctx.xer);
	// bne cr6,0x831261e4
	if (!ctx.cr6.eq) goto loc_831261E4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa6b0
	ctx.lr = 0x831261DC;
	sub_830FA6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831262fc
	if (!ctx.cr0.eq) goto loc_831262FC;
loc_831261E4:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831262a4
	if (!ctx.cr0.eq) goto loc_831262A4;
	// cmplwi cr6,r29,55296
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 55296, ctx.xer);
	// blt cr6,0x8312621c
	if (ctx.cr6.lt) goto loc_8312621C;
	// cmplwi cr6,r29,56319
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56319, ctx.xer);
	// bgt cr6,0x8312621c
	if (ctx.cr6.gt) goto loc_8312621C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126214
	if (ctx.cr0.eq) goto loc_83126214;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126210;
	sub_830EDFF8(ctx, base);
	// b 0x831262a4
	goto loc_831262A4;
loc_83126214:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x831262a4
	goto loc_831262A4;
loc_8312621C:
	// cmplwi cr6,r29,56320
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 56320, ctx.xer);
	// blt cr6,0x8312623c
	if (ctx.cr6.lt) goto loc_8312623C;
	// cmplwi cr6,r29,57343
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 57343, ctx.xer);
	// bgt cr6,0x8312623c
	if (ctx.cr6.gt) goto loc_8312623C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831262a0
	if (!ctx.cr0.eq) goto loc_831262A0;
	// li r4,282
	ctx.r4.s64 = 282;
	// b 0x83126248
	goto loc_83126248;
loc_8312623C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126254
	if (ctx.cr0.eq) goto loc_83126254;
	// li r4,249
	ctx.r4.s64 = 249;
loc_83126248:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126250;
	sub_830EDFF8(ctx, base);
	// b 0x831262a0
	goto loc_831262A0;
loc_83126254:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831262a0
	if (!ctx.cr0.eq) goto loc_831262A0;
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
	ctx.lr = 0x83126280;
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
	ctx.lr = 0x8312629C;
	sub_830EE100(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
loc_831262A0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_831262A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830d5880
	ctx.lr = 0x831262B0;
	sub_830D5880(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x831262B8;
	sub_830F4DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83126178
	if (!ctx.cr0.eq) goto loc_83126178;
loc_831262C4:
	// li r4,264
	ctx.r4.s64 = 264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831262D0;
	sub_830EDFF8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,2709
	ctx.r5.s64 = 2709;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830ed320
	ctx.lr = 0x831262EC;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x831262FC;
	sub_833A7198(ctx, base);
loc_831262FC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126310
	if (ctx.cr0.eq) goto loc_83126310;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126310;
	sub_830EDFF8(ctx, base);
loc_83126310:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126330
	if (ctx.cr0.eq) goto loc_83126330;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// beq cr6,0x83126330
	if (ctx.cr6.eq) goto loc_83126330;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x83126330;
	sub_8311E528(ctx, base);
loc_83126330:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83126370
	if (ctx.cr6.eq) goto loc_83126370;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,24(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83126370:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312637C;
	sub_830E4388(ctx, base);
loc_8312637C:
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126384"))) PPC_WEAK_FUNC(sub_83126384);
PPC_FUNC_IMPL(__imp__sub_83126384) {
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
	ctx.lr = 0x8312639C;
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

__attribute__((alias("__imp__sub_831263AC"))) PPC_WEAK_FUNC(sub_831263AC);
PPC_FUNC_IMPL(__imp__sub_831263AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831263B0"))) PPC_WEAK_FUNC(sub_831263B0);
PPC_FUNC_IMPL(__imp__sub_831263B0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x831263f8
	if (!ctx.cr6.eq) goto loc_831263F8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,5348
	ctx.r4.s64 = ctx.r11.s64 + 5348;
	// li r5,94
	ctx.r5.s64 = 94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5a30
	ctx.lr = 0x831263E8;
	sub_830D5A30(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28580
	ctx.r4.s64 = ctx.r11.s64 + -28580;
	// bl 0x833a7198
	ctx.lr = 0x831263F8;
	sub_833A7198(ctx, base);
loc_831263F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x833a2b30
	ctx.lr = 0x83126428;
	sub_833A2B30(ctx, base);
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

__attribute__((alias("__imp__sub_8312643C"))) PPC_WEAK_FUNC(sub_8312643C);
PPC_FUNC_IMPL(__imp__sub_8312643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126440"))) PPC_WEAK_FUNC(sub_83126440);
PPC_FUNC_IMPL(__imp__sub_83126440) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r8,r8,-32764
	ctx.r8.s64 = ctx.r8.s64 + -32764;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831264a0
	if (!ctx.cr6.lt) goto loc_831264A0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8312646C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm. r6,r6,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x831264a0
	if (ctx.cr0.eq) goto loc_831264A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8312646c
	if (ctx.cr6.lt) goto loc_8312646C;
loc_831264A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 131072;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// addi r7,r7,-16376
	ctx.r7.s64 = ctx.r7.s64 + -16376;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r11,r9,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x830db3b8
	sub_830DB3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831264D8"))) PPC_WEAK_FUNC(sub_831264D8);
PPC_FUNC_IMPL(__imp__sub_831264D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831264DC"))) PPC_WEAK_FUNC(sub_831264DC);
PPC_FUNC_IMPL(__imp__sub_831264DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831264E0"))) PPC_WEAK_FUNC(sub_831264E0);
PPC_FUNC_IMPL(__imp__sub_831264E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x831264E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x830d6af0
	ctx.lr = 0x8312650C;
	sub_830D6AF0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bne cr6,0x8312654c
	if (!ctx.cr6.eq) goto loc_8312654C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-5740
	ctx.r4.s64 = ctx.r10.s64 + -5740;
	// extsh r5,r27
	ctx.r5.s64 = ctx.r27.s16;
	// addi r3,r28,432
	ctx.r3.s64 = ctx.r28.s64 + 432;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// bl 0x8311d750
	ctx.lr = 0x83126548;
	sub_8311D750(ctx, base);
	// b 0x8312661c
	goto loc_8312661C;
loc_8312654C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830db3b8
	ctx.lr = 0x83126558;
	sub_830DB3B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r11,-5980
	ctx.r4.s64 = ctx.r11.s64 + -5980;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u16);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8d28
	ctx.lr = 0x8312657C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831265b4
	if (ctx.cr0.eq) goto loc_831265B4;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x831265ac
	if (!ctx.cr6.eq) goto loc_831265AC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,305
	ctx.r4.s64 = 305;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee100
	ctx.lr = 0x831265AC;
	sub_830EE100(ctx, base);
loc_831265AC:
	// lwz r3,56(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// b 0x8312661c
	goto loc_8312661C;
loc_831265B4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6224
	ctx.r4.s64 = ctx.r11.s64 + -6224;
	// bl 0x830d8d28
	ctx.lr = 0x831265C4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831265d4
	if (ctx.cr0.eq) goto loc_831265D4;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// b 0x8312661c
	goto loc_8312661C;
loc_831265D4:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// extsh r5,r27
	ctx.r5.s64 = ctx.r27.s16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,432
	ctx.r3.s64 = ctx.r28.s64 + 432;
	// bl 0x8311d750
	ctx.lr = 0x831265EC;
	sub_8311D750(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126618
	if (ctx.cr0.eq) goto loc_83126618;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,277
	ctx.r4.s64 = 277;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee100
	ctx.lr = 0x83126618;
	sub_830EE100(ctx, base);
loc_83126618:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8312661C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126624"))) PPC_WEAK_FUNC(sub_83126624);
PPC_FUNC_IMPL(__imp__sub_83126624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126628"))) PPC_WEAK_FUNC(sub_83126628);
PPC_FUNC_IMPL(__imp__sub_83126628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-16336(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16336);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x83126638;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-336
	ctx.r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,224
	ctx.r28.s64 = ctx.r3.s64 + 224;
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312665C;
	sub_830E4258(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7488
	ctx.lr = 0x83126680;
	sub_830D7488(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r26,24(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// bl 0x830e4258
	ctx.lr = 0x831266A0;
	sub_830E4258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83126754
	if (ctx.cr6.eq) goto loc_83126754;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831266D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831266f0
	if (!ctx.cr0.eq) goto loc_831266F0;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8c98
	ctx.lr = 0x831266F0;
	sub_830D8C98(ctx, base);
loc_831266F0:
	// addi r26,r30,128
	ctx.r26.s64 = ctx.r30.s64 + 128;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f52b8
	ctx.lr = 0x83126700;
	sub_830F52B8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// sthx r27,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u16);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312674C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x83126764
	goto loc_83126764;
loc_83126754:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8c98
	ctx.lr = 0x83126764;
	sub_830D8C98(ctx, base);
loc_83126764:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x831268fc
	if (!ctx.cr6.eq) goto loc_831268FC;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126798
	if (ctx.cr0.eq) goto loc_83126798;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x83126784;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x83126790;
	sub_830E4388(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83126918
	goto loc_83126918;
loc_83126798:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830f52b8
	ctx.lr = 0x831267A4;
	sub_830F52B8(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b358
	ctx.lr = 0x831267B0;
	sub_8311B358(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8311c7d0
	ctx.lr = 0x831267D4;
	sub_8311C7D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126868
	if (ctx.cr0.eq) goto loc_83126868;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b408
	ctx.lr = 0x831267E4;
	sub_8311B408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126868
	if (!ctx.cr0.eq) goto loc_83126868;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126834
	if (ctx.cr0.eq) goto loc_83126834;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b440
	ctx.lr = 0x83126800;
	sub_8311B440(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126834
	if (ctx.cr0.eq) goto loc_83126834;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,2437
	ctx.r5.s64 = 2437;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x83126824;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x83126834;
	sub_833A7198(ctx, base);
loc_83126834:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83126840;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312685c
	if (ctx.cr0.eq) goto loc_8312685C;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b150
	ctx.lr = 0x83126858;
	sub_8311B150(ctx, base);
	// b 0x83126860
	goto loc_83126860;
loc_8312685C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83126860:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x831268f4
	goto loc_831268F4;
loc_83126868:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83126920
	if (!ctx.cr0.eq) goto loc_83126920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312687C;
	sub_830E4258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830e07d8
	ctx.lr = 0x831268A4;
	sub_830E07D8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x831268B0;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831268e0
	if (ctx.cr0.eq) goto loc_831268E0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x830dddc0
	ctx.lr = 0x831268DC;
	sub_830DDDC0(ctx, base);
	// b 0x831268e4
	goto loc_831268E4;
loc_831268E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_831268E4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x831268F4;
	sub_830E4388(ctx, base);
loc_831268F4:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x831268FC;
	sub_8311BEE8(ctx, base);
loc_831268FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x83126908;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x83126914;
	sub_830E4388(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_83126918:
	// addi r1,r31,336
	ctx.r1.s64 = ctx.r31.s64 + 336;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_83126920:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,2432
	ctx.r5.s64 = 2432;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x8312693C;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x8312694C;
	sub_833A7198(ctx, base);
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
	ctx.lr = 0x83126964;
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

__attribute__((alias("__imp__sub_83126630"))) PPC_WEAK_FUNC(sub_83126630);
PPC_FUNC_IMPL(__imp__sub_83126630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x83126638;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-336
	ctx.r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,224
	ctx.r28.s64 = ctx.r3.s64 + 224;
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312665C;
	sub_830E4258(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7488
	ctx.lr = 0x83126680;
	sub_830D7488(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r26,24(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// bl 0x830e4258
	ctx.lr = 0x831266A0;
	sub_830E4258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83126754
	if (ctx.cr6.eq) goto loc_83126754;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831266D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831266f0
	if (!ctx.cr0.eq) goto loc_831266F0;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8c98
	ctx.lr = 0x831266F0;
	sub_830D8C98(ctx, base);
loc_831266F0:
	// addi r26,r30,128
	ctx.r26.s64 = ctx.r30.s64 + 128;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f52b8
	ctx.lr = 0x83126700;
	sub_830F52B8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// sthx r27,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u16);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312674C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x83126764
	goto loc_83126764;
loc_83126754:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8c98
	ctx.lr = 0x83126764;
	sub_830D8C98(ctx, base);
loc_83126764:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x831268fc
	if (!ctx.cr6.eq) goto loc_831268FC;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126798
	if (ctx.cr0.eq) goto loc_83126798;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x83126784;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x83126790;
	sub_830E4388(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83126918
	goto loc_83126918;
loc_83126798:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830f52b8
	ctx.lr = 0x831267A4;
	sub_830F52B8(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b358
	ctx.lr = 0x831267B0;
	sub_8311B358(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8311c7d0
	ctx.lr = 0x831267D4;
	sub_8311C7D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126868
	if (ctx.cr0.eq) goto loc_83126868;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b408
	ctx.lr = 0x831267E4;
	sub_8311B408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126868
	if (!ctx.cr0.eq) goto loc_83126868;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126834
	if (ctx.cr0.eq) goto loc_83126834;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b440
	ctx.lr = 0x83126800;
	sub_8311B440(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126834
	if (ctx.cr0.eq) goto loc_83126834;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,2437
	ctx.r5.s64 = 2437;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x83126824;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x83126834;
	sub_833A7198(ctx, base);
loc_83126834:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83126840;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312685c
	if (ctx.cr0.eq) goto loc_8312685C;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b150
	ctx.lr = 0x83126858;
	sub_8311B150(ctx, base);
	// b 0x83126860
	goto loc_83126860;
loc_8312685C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83126860:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x831268f4
	goto loc_831268F4;
loc_83126868:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83126920
	if (!ctx.cr0.eq) goto loc_83126920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312687C;
	sub_830E4258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830e07d8
	ctx.lr = 0x831268A4;
	sub_830E07D8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x831268B0;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831268e0
	if (ctx.cr0.eq) goto loc_831268E0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x830dddc0
	ctx.lr = 0x831268DC;
	sub_830DDDC0(ctx, base);
	// b 0x831268e4
	goto loc_831268E4;
loc_831268E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_831268E4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x831268F4;
	sub_830E4388(ctx, base);
loc_831268F4:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x831268FC;
	sub_8311BEE8(ctx, base);
loc_831268FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x83126908;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x83126914;
	sub_830E4388(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_83126918:
	// addi r1,r31,336
	ctx.r1.s64 = ctx.r31.s64 + 336;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_83126920:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,2432
	ctx.r5.s64 = 2432;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x8312693C;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x8312694C;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8312694C"))) PPC_WEAK_FUNC(sub_8312694C);
PPC_FUNC_IMPL(__imp__sub_8312694C) {
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
	ctx.lr = 0x83126964;
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

__attribute__((alias("__imp__sub_83126974"))) PPC_WEAK_FUNC(sub_83126974);
PPC_FUNC_IMPL(__imp__sub_83126974) {
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
	ctx.lr = 0x8312698C;
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

__attribute__((alias("__imp__sub_8312699C"))) PPC_WEAK_FUNC(sub_8312699C);
PPC_FUNC_IMPL(__imp__sub_8312699C) {
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
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x831269B4;
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

__attribute__((alias("__imp__sub_831269C4"))) PPC_WEAK_FUNC(sub_831269C4);
PPC_FUNC_IMPL(__imp__sub_831269C4) {
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
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831269E4;
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

__attribute__((alias("__imp__sub_831269F4"))) PPC_WEAK_FUNC(sub_831269F4);
PPC_FUNC_IMPL(__imp__sub_831269F4) {
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
	ctx.lr = 0x83126A0C;
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

__attribute__((alias("__imp__sub_83126A1C"))) PPC_WEAK_FUNC(sub_83126A1C);
PPC_FUNC_IMPL(__imp__sub_83126A1C) {
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
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83126A3C;
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

__attribute__((alias("__imp__sub_83126A4C"))) PPC_WEAK_FUNC(sub_83126A4C);
PPC_FUNC_IMPL(__imp__sub_83126A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126A50"))) PPC_WEAK_FUNC(sub_83126A50);
PPC_FUNC_IMPL(__imp__sub_83126A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-16084(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16084);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a0190
	ctx.lr = 0x83126A68;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r23,r3,128
	ctx.r23.s64 = ctx.r3.s64 + 128;
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// stw r27,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r27.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r27.u16);
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stb r22,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r22.u8);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r27.u16);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stb r22,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r22.u8);
loc_83126AC0:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126d60
	if (ctx.cr0.eq) {
		sub_83126D60(ctx, base);
		return;
	}
loc_83126ACC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x83126aec
	if (!ctx.cr6.eq) goto loc_83126AEC;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126aec
	if (!ctx.cr0.eq) goto loc_83126AEC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x83126440
	ctx.lr = 0x83126AE8;
	sub_83126440(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126AEC:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x83125568
	ctx.lr = 0x83126AFC;
	sub_83125568(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126b28
	if (!ctx.cr0.eq) goto loc_83126B28;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126b20
	if (ctx.cr0.eq) goto loc_83126B20;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126B1C;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126B20:
	// stb r27,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r27.u8);
	// b 0x83126ac0
	goto loc_83126AC0;
loc_83126B28:
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x83126bdc
	if (!ctx.cr6.eq) goto loc_83126BDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r28,156(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// stb r27,156(r30)
	PPC_STORE_U8(ctx.r30.u32 + 156, ctx.r27.u8);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stb r28,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r28.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,86
	ctx.r6.s64 = ctx.r31.s64 + 86;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83126bd0
	if (!ctx.cr6.eq) goto loc_83126BD0;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126bc8
	if (ctx.cr0.eq) goto loc_83126BC8;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83126bc8
	if (ctx.cr6.eq) goto loc_83126BC8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stb r22,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r22.u8);
loc_83126BC8:
	// stb r28,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r28.u8);
	// b 0x83126cb0
	goto loc_83126CB0;
loc_83126BD0:
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stb r28,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r28.u8);
	// b 0x83126acc
	goto loc_83126ACC;
loc_83126BDC:
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// blt cr6,0x83126c10
	if (ctx.cr6.lt) goto loc_83126C10;
	// cmplwi cr6,r11,56319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56319, ctx.xer);
	// bgt cr6,0x83126c10
	if (ctx.cr6.gt) goto loc_83126C10;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126c08
	if (ctx.cr0.eq) goto loc_83126C08;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126C00;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83126cb0
	goto loc_83126CB0;
loc_83126C08:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// b 0x83126cb0
	goto loc_83126CB0;
loc_83126C10:
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// blt cr6,0x83126c3c
	if (ctx.cr6.lt) goto loc_83126C3C;
	// cmplwi cr6,r11,57343
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57343, ctx.xer);
	// bgt cr6,0x83126c3c
	if (ctx.cr6.gt) goto loc_83126C3C;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126cac
	if (!ctx.cr0.eq) goto loc_83126CAC;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126C34;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83126cac
	goto loc_83126CAC;
loc_83126C3C:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126c54
	if (ctx.cr0.eq) goto loc_83126C54;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126C50;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126C54:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lhz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// ori r11,r11,32852
	ctx.r11.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126cac
	if (!ctx.cr0.eq) goto loc_83126CAC;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// bl 0x830d6590
	ctx.lr = 0x83126C88;
	sub_830D6590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83126CA8;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126CAC:
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_83126CB0:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83126d08
	if (!ctx.cr0.eq) goto loc_83126D08;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x83126ce8
	if (!ctx.cr6.eq) goto loc_83126CE8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x83126cd8
	if (!ctx.cr6.eq) goto loc_83126CD8;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// b 0x83126d0c
	goto loc_83126D0C;
loc_83126CD8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x83126d10
	if (!ctx.cr6.eq) goto loc_83126D10;
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x83126d0c
	goto loc_83126D0C;
loc_83126CE8:
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x83126d08
	if (!ctx.cr6.eq) goto loc_83126D08;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x83126d08
	if (!ctx.cr6.eq) goto loc_83126D08;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126D04;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126D08:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_83126D0C:
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
loc_83126D10:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// bl 0x830d5880
	ctx.lr = 0x83126D1C;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// mr. r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126acc
	if (ctx.cr0.eq) goto loc_83126ACC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d5880
	ctx.lr = 0x83126D34;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r27.u16);
	// b 0x83126acc
	goto loc_83126ACC;
}

__attribute__((alias("__imp__sub_83126A58"))) PPC_WEAK_FUNC(sub_83126A58);
PPC_FUNC_IMPL(__imp__sub_83126A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a0190
	ctx.lr = 0x83126A68;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r23,r3,128
	ctx.r23.s64 = ctx.r3.s64 + 128;
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// stw r27,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r27.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r27.u16);
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stb r22,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r22.u8);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r27.u16);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stb r22,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r22.u8);
loc_83126AC0:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126d60
	if (ctx.cr0.eq) goto loc_83126D60;
loc_83126ACC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x83126aec
	if (!ctx.cr6.eq) goto loc_83126AEC;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126aec
	if (!ctx.cr0.eq) goto loc_83126AEC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x83126440
	ctx.lr = 0x83126AE8;
	sub_83126440(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126AEC:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x83125568
	ctx.lr = 0x83126AFC;
	sub_83125568(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126b28
	if (!ctx.cr0.eq) goto loc_83126B28;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126b20
	if (ctx.cr0.eq) goto loc_83126B20;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126B1C;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126B20:
	// stb r27,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r27.u8);
	// b 0x83126ac0
	goto loc_83126AC0;
loc_83126B28:
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x83126bdc
	if (!ctx.cr6.eq) goto loc_83126BDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r28,156(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// stb r27,156(r30)
	PPC_STORE_U8(ctx.r30.u32 + 156, ctx.r27.u8);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stb r28,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r28.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,86
	ctx.r6.s64 = ctx.r31.s64 + 86;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83126bd0
	if (!ctx.cr6.eq) goto loc_83126BD0;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126bc8
	if (ctx.cr0.eq) goto loc_83126BC8;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83126bc8
	if (ctx.cr6.eq) goto loc_83126BC8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stb r22,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r22.u8);
loc_83126BC8:
	// stb r28,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r28.u8);
	// b 0x83126cb0
	goto loc_83126CB0;
loc_83126BD0:
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stb r28,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r28.u8);
	// b 0x83126acc
	goto loc_83126ACC;
loc_83126BDC:
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// blt cr6,0x83126c10
	if (ctx.cr6.lt) goto loc_83126C10;
	// cmplwi cr6,r11,56319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56319, ctx.xer);
	// bgt cr6,0x83126c10
	if (ctx.cr6.gt) goto loc_83126C10;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126c08
	if (ctx.cr0.eq) goto loc_83126C08;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126C00;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83126cb0
	goto loc_83126CB0;
loc_83126C08:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// b 0x83126cb0
	goto loc_83126CB0;
loc_83126C10:
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// blt cr6,0x83126c3c
	if (ctx.cr6.lt) goto loc_83126C3C;
	// cmplwi cr6,r11,57343
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57343, ctx.xer);
	// bgt cr6,0x83126c3c
	if (ctx.cr6.gt) goto loc_83126C3C;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126cac
	if (!ctx.cr0.eq) goto loc_83126CAC;
	// li r4,282
	ctx.r4.s64 = 282;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126C34;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83126cac
	goto loc_83126CAC;
loc_83126C3C:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126c54
	if (ctx.cr0.eq) goto loc_83126C54;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126C50;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126C54:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lhz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// ori r11,r11,32852
	ctx.r11.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83126cac
	if (!ctx.cr0.eq) goto loc_83126CAC;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// bl 0x830d6590
	ctx.lr = 0x83126C88;
	sub_830D6590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83126CA8;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126CAC:
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_83126CB0:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83126d08
	if (!ctx.cr0.eq) goto loc_83126D08;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x83126ce8
	if (!ctx.cr6.eq) goto loc_83126CE8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x83126cd8
	if (!ctx.cr6.eq) goto loc_83126CD8;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// b 0x83126d0c
	goto loc_83126D0C;
loc_83126CD8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x83126d10
	if (!ctx.cr6.eq) goto loc_83126D10;
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x83126d0c
	goto loc_83126D0C;
loc_83126CE8:
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x83126d08
	if (!ctx.cr6.eq) goto loc_83126D08;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x83126d08
	if (!ctx.cr6.eq) goto loc_83126D08;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83126D04;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83126D08:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_83126D0C:
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
loc_83126D10:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// bl 0x830d5880
	ctx.lr = 0x83126D1C;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// mr. r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126acc
	if (ctx.cr0.eq) goto loc_83126ACC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d5880
	ctx.lr = 0x83126D34;
	sub_830D5880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r27,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r27.u16);
	// b 0x83126acc
	goto loc_83126ACC;
	// lwz r30,244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r26,252(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r23,100(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r24,88(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lbz r25,82(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// b 0x83126ac0
	goto loc_83126AC0;
loc_83126D60:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126ddc
	if (ctx.cr0.eq) goto loc_83126DDC;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126ddc
	if (ctx.cr0.eq) goto loc_83126DDC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830f9098
	ctx.lr = 0x83126D98;
	sub_830F9098(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126ddc
	if (ctx.cr0.eq) goto loc_83126DDC;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d6e8
	ctx.lr = 0x83126DA8;
	sub_8311D6E8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126ddc
	if (ctx.cr0.eq) goto loc_83126DDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83126ddc
	if (!ctx.cr6.eq) goto loc_83126DDC;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x83126DDC;
	sub_8311E528(ctx, base);
loc_83126DDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// stb r11,28(r23)
	PPC_STORE_U8(ctx.r23.u32 + 28, ctx.r11.u8);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126D40"))) PPC_WEAK_FUNC(sub_83126D40);
PPC_FUNC_IMPL(__imp__sub_83126D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r26,252(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r23,100(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r24,88(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lbz r25,82(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// b 0x83126ac0
	// ERROR 83126AC0
	return;
}

__attribute__((alias("__imp__sub_83126D60"))) PPC_WEAK_FUNC(sub_83126D60);
PPC_FUNC_IMPL(__imp__sub_83126D60) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126ddc
	if (ctx.cr0.eq) goto loc_83126DDC;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126ddc
	if (ctx.cr0.eq) goto loc_83126DDC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830f9098
	ctx.lr = 0x83126D98;
	sub_830F9098(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83126ddc
	if (ctx.cr0.eq) goto loc_83126DDC;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d6e8
	ctx.lr = 0x83126DA8;
	sub_8311D6E8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83126ddc
	if (ctx.cr0.eq) goto loc_83126DDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83126ddc
	if (!ctx.cr6.eq) goto loc_83126DDC;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x83126DDC;
	sub_8311E528(ctx, base);
loc_83126DDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// stb r11,28(r23)
	PPC_STORE_U8(ctx.r23.u32 + 28, ctx.r11.u8);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126E04"))) PPC_WEAK_FUNC(sub_83126E04);
PPC_FUNC_IMPL(__imp__sub_83126E04) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-16084(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16084);
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83126e68
	if (ctx.cr6.eq) goto loc_83126E68;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83126E68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r3,r3,27968
	ctx.r3.s64 = ctx.r3.s64 + 27968;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126E0C"))) PPC_WEAK_FUNC(sub_83126E0C);
PPC_FUNC_IMPL(__imp__sub_83126E0C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83126e68
	if (ctx.cr6.eq) goto loc_83126E68;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83126E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83126E68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31982
	ctx.r3.s64 = -2095972352;
	// addi r3,r3,27968
	ctx.r3.s64 = ctx.r3.s64 + 27968;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126E80"))) PPC_WEAK_FUNC(sub_83126E80);
PPC_FUNC_IMPL(__imp__sub_83126E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
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
	// bl 0x830ed308
	ctx.lr = 0x83126E98;
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

__attribute__((alias("__imp__sub_83126EA8"))) PPC_WEAK_FUNC(sub_83126EA8);
PPC_FUNC_IMPL(__imp__sub_83126EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
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
	// bl 0x830ed308
	ctx.lr = 0x83126EC0;
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

__attribute__((alias("__imp__sub_83126ED0"))) PPC_WEAK_FUNC(sub_83126ED0);
PPC_FUNC_IMPL(__imp__sub_83126ED0) {
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
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bl 0x831263b0
	ctx.lr = 0x83126F0C;
	sub_831263B0(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83126F2C"))) PPC_WEAK_FUNC(sub_83126F2C);
PPC_FUNC_IMPL(__imp__sub_83126F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126F30"))) PPC_WEAK_FUNC(sub_83126F30);
PPC_FUNC_IMPL(__imp__sub_83126F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-15776(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -15776);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83126F40;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x83126fe4
	if (!ctx.cr6.gt) goto loc_83126FE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83126fe0
	if (!ctx.cr6.eq) goto loc_83126FE0;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83126F80;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83126fd4
	if (ctx.cr0.eq) goto loc_83126FD4;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83126F98;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83126fb0
	if (ctx.cr0.eq) goto loc_83126FB0;
	// bl 0x83116550
	ctx.lr = 0x83126FA8;
	sub_83116550(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83126fb4
	goto loc_83126FB4;
loc_83126FB0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83126FB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x83126ed0
	ctx.lr = 0x83126FD0;
	sub_83126ED0(ctx, base);
	// b 0x83126fd8
	goto loc_83126FD8;
loc_83126FD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83126FD8:
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// b 0x83126fe4
	goto loc_83126FE4;
loc_83126FE0:
	// bl 0x830ef878
	ctx.lr = 0x83126FE4;
	sub_830EF878(ctx, base);
loc_83126FE4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126F38"))) PPC_WEAK_FUNC(sub_83126F38);
PPC_FUNC_IMPL(__imp__sub_83126F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83126F40;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x83126fe4
	if (!ctx.cr6.gt) goto loc_83126FE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83126fe0
	if (!ctx.cr6.eq) goto loc_83126FE0;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83126F80;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83126fd4
	if (ctx.cr0.eq) goto loc_83126FD4;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83126F98;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83126fb0
	if (ctx.cr0.eq) goto loc_83126FB0;
	// bl 0x83116550
	ctx.lr = 0x83126FA8;
	sub_83116550(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83126fb4
	goto loc_83126FB4;
loc_83126FB0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83126FB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x83126ed0
	ctx.lr = 0x83126FD0;
	sub_83126ED0(ctx, base);
	// b 0x83126fd8
	goto loc_83126FD8;
loc_83126FD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83126FD8:
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// b 0x83126fe4
	goto loc_83126FE4;
loc_83126FE0:
	// bl 0x830ef878
	ctx.lr = 0x83126FE4;
	sub_830EF878(ctx, base);
loc_83126FE4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126FEC"))) PPC_WEAK_FUNC(sub_83126FEC);
PPC_FUNC_IMPL(__imp__sub_83126FEC) {
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
	ctx.lr = 0x8312700C;
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

__attribute__((alias("__imp__sub_8312701C"))) PPC_WEAK_FUNC(sub_8312701C);
PPC_FUNC_IMPL(__imp__sub_8312701C) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8312703C;
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

__attribute__((alias("__imp__sub_8312704C"))) PPC_WEAK_FUNC(sub_8312704C);
PPC_FUNC_IMPL(__imp__sub_8312704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127050"))) PPC_WEAK_FUNC(sub_83127050);
PPC_FUNC_IMPL(__imp__sub_83127050) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-4640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4640);
	// bl 0x8311cde0
	ctx.lr = 0x8312707C;
	sub_8311CDE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127090
	if (ctx.cr0.eq) goto loc_83127090;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831270ac
	if (!ctx.cr6.eq) goto loc_831270AC;
loc_83127090:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311cde0
	ctx.lr = 0x831270A0;
	sub_8311CDE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831270ac
	if (ctx.cr0.eq) goto loc_831270AC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_831270AC:
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

__attribute__((alias("__imp__sub_831270C4"))) PPC_WEAK_FUNC(sub_831270C4);
PPC_FUNC_IMPL(__imp__sub_831270C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831270C8"))) PPC_WEAK_FUNC(sub_831270C8);
PPC_FUNC_IMPL(__imp__sub_831270C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-15608(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -15608);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0180
	ctx.lr = 0x831270D8;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-368
	ctx.r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127104
	if (ctx.cr6.eq) goto loc_83127104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127104:
	// addi r21,r30,128
	ctx.r21.s64 = ctx.r30.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83127114;
	sub_830F50E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83127138
	if (!ctx.cr0.eq) goto loc_83127138;
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83127128;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x83127134;
	sub_830ED2B8(ctx, base);
	// b 0x831279dc
	goto loc_831279DC;
loc_83127138:
	// addi r19,r30,224
	ctx.r19.s64 = ctx.r30.s64 + 224;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4258
	ctx.lr = 0x83127144;
	sub_830E4258(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r19,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r19.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127180
	if (ctx.cr0.eq) goto loc_83127180;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa338
	ctx.lr = 0x8312717C;
	sub_830FA338(ctx, base);
	// b 0x831271a0
	goto loc_831271A0;
loc_83127180:
	// lwz r11,24(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r22.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa120
	ctx.lr = 0x831271A0;
	sub_830FA120(ctx, base);
loc_831271A0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831271f8
	if (!ctx.cr0.eq) goto loc_831271F8;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831271c4
	if (!ctx.cr6.eq) goto loc_831271C4;
	// li r4,208
	ctx.r4.s64 = 208;
	// bl 0x830edff8
	ctx.lr = 0x831271C0;
	sub_830EDFF8(ctx, base);
	// b 0x831271e8
	goto loc_831271E8;
loc_831271C4:
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,307
	ctx.r4.s64 = 307;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r5,24(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x831271E8;
	sub_830EE100(ctx, base);
loc_831271E8:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x831271F4;
	sub_830ED2B8(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_831271F8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// bl 0x8311ed28
	ctx.lr = 0x83127214;
	sub_8311ED28(ctx, base);
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127228
	if (ctx.cr0.eq) goto loc_83127228;
	// lwz r29,220(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// b 0x8312722c
	goto loc_8312722C;
loc_83127228:
	// lwz r29,184(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
loc_8312722C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x8312723C;
	sub_830DD390(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127274
	if (ctx.cr0.eq) goto loc_83127274;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83175008
	ctx.lr = 0x8312726C;
	sub_83175008(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x83127278
	goto loc_83127278;
loc_83127274:
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83127278:
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// stb r18,20(r23)
	PPC_STORE_U8(ctx.r23.u32 + 20, ctx.r18.u8);
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831272c0
	if (!ctx.cr0.eq) goto loc_831272C0;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831272B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// b 0x83127310
	goto loc_83127310;
loc_831272C0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// bl 0x8311f228
	ctx.lr = 0x831272E0;
	sub_8311F228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127300
	if (ctx.cr0.eq) goto loc_83127300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83127300
	if (ctx.cr6.eq) goto loc_83127300;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r11.u32);
	// b 0x83127314
	goto loc_83127314;
loc_83127300:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// bl 0x8311f668
	ctx.lr = 0x8312730C;
	sub_8311F668(ctx, base);
	// stw r3,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r3.u32);
loc_83127310:
	// stw r22,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r22.u32);
loc_83127314:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83127320;
	sub_830F50E0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f70
	ctx.lr = 0x8312732C;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83127374
	if (ctx.cr0.eq) goto loc_83127374;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127364
	if (ctx.cr6.eq) goto loc_83127364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127364:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x83127370;
	sub_8312C778(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_83127374:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83127390
	if (!ctx.cr6.eq) goto loc_83127390;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83127390
	if (!ctx.cr0.eq) goto loc_83127390;
	// stb r18,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r18.u8);
loc_83127390:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// lwz r6,184(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// bl 0x83171070
	ctx.lr = 0x831273B8;
	sub_83171070(ctx, base);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8316ed38
	ctx.lr = 0x831273CC;
	sub_8316ED38(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f08
	ctx.lr = 0x831273D4;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x831273e8
	if (!ctx.cr6.eq) goto loc_831273E8;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// b 0x831274ec
	goto loc_831274EC;
loc_831273E8:
	// stb r22,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r22.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// bl 0x830e4258
	ctx.lr = 0x831273F8;
	sub_830E4258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r19,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r19.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312740C;
	sub_830E4258(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r19,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r19.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831718d0
	ctx.lr = 0x8312742C;
	sub_831718D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83127470
	if (!ctx.cr0.eq) goto loc_83127470;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x83127440;
	sub_830ED2B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312744C;
	sub_830E4388(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x83127458;
	sub_830E4388(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x83127460;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x8312746C;
	sub_8312C778(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_83127470:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830d58e8
	ctx.lr = 0x8312748C;
	sub_830D58E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830d58e8
	ctx.lr = 0x831274AC;
	sub_830D58E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x831274BC;
	sub_830F50E0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f08
	ctx.lr = 0x831274C4;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x831274d4
	if (!ctx.cr6.eq) goto loc_831274D4;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
loc_831274D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x831274E0;
	sub_830E4388(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x831274EC;
	sub_830E4388(ctx, base);
loc_831274EC:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127538
	if (ctx.cr6.eq) goto loc_83127538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127538:
	// clrlwi. r29,r26,24
	ctx.r29.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x831275dc
	if (ctx.cr0.eq) goto loc_831275DC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x83127548;
	sub_830F4DD0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f10a8
	ctx.lr = 0x8312755C;
	sub_830F10A8(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831746f0
	ctx.lr = 0x83127564;
	sub_831746F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831275a8
	if (!ctx.cr0.eq) goto loc_831275A8;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x83127578;
	sub_830ED2B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x831b3a50
	ctx.lr = 0x83127584;
	sub_831B3A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x831b3a50
	ctx.lr = 0x83127590;
	sub_831B3A50(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x83127598;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x831275A4;
	sub_8312C778(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_831275A8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4b40
	ctx.lr = 0x831275B0;
	sub_830F4B40(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x831275d0
	if (!ctx.cr6.gt) goto loc_831275D0;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831275C4;
	sub_830EDFF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f47b0
	ctx.lr = 0x831275D0;
	sub_830F47B0(ctx, base);
loc_831275D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x831275DC;
	sub_830F50E0(ctx, base);
loc_831275DC:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f70
	ctx.lr = 0x831275E8;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83127640
	if (!ctx.cr0.eq) goto loc_83127640;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f70
	ctx.lr = 0x831275FC;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83127628
	if (ctx.cr0.eq) goto loc_83127628;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f70
	ctx.lr = 0x83127610;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83127628
	if (ctx.cr0.eq) goto loc_83127628;
	// li r4,257
	ctx.r4.s64 = 257;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83127624;
	sub_830EDFF8(ctx, base);
	// b 0x83127640
	goto loc_83127640;
loc_83127628:
	// li r4,212
	ctx.r4.s64 = 212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83127634;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x83127640;
	sub_830ED2B8(ctx, base);
loc_83127640:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831279a4
	if (ctx.cr0.eq) goto loc_831279A4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// stw r22,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312776c
	if (ctx.cr0.eq) goto loc_8312776C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8312776c
	if (!ctx.cr6.eq) goto loc_8312776C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// beq 0x8312776c
	if (ctx.cr0.eq) goto loc_8312776C;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8312c778
	ctx.lr = 0x83127698;
	sub_8312C778(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831276AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec670
	ctx.lr = 0x831276B8;
	sub_830EC670(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83127768
	if (ctx.cr0.eq) goto loc_83127768;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831276D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83127768
	if (!ctx.cr0.eq) goto loc_83127768;
	// stw r29,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r29.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831276FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312772c
	if (ctx.cr6.eq) goto loc_8312772C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312772C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312772C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8312c778
	ctx.lr = 0x83127738;
	sub_8312C778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x831b3a50
	ctx.lr = 0x83127744;
	sub_831B3A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x831b3a50
	ctx.lr = 0x83127750;
	sub_831B3A50(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x83127758;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x83127764;
	sub_8312C778(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_83127768:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_8312776C:
	// lbz r11,23(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83127784
	if (!ctx.cr0.eq) goto loc_83127784;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127998
	if (ctx.cr0.eq) goto loc_83127998;
loc_83127784:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831277b0
	if (ctx.cr6.eq) goto loc_831277B0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4868
	ctx.lr = 0x831277A8;
	sub_830F4868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831277f4
	goto loc_831277F4;
loc_831277B0:
	// lbz r3,9(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r3,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f5698
	ctx.lr = 0x831277E4;
	sub_830F5698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8312c778
	ctx.lr = 0x831277F4;
	sub_8312C778(ctx, base);
loc_831277F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83127860
	if (!ctx.cr6.eq) goto loc_83127860;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127820
	if (ctx.cr6.eq) goto loc_83127820;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x83127824
	goto loc_83127824;
loc_83127820:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_83127824:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,-16656
	ctx.r4.s64 = ctx.r9.s64 + -16656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,45
	ctx.r6.s64 = 45;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1032
	ctx.r5.s64 = 1032;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311e9c0
	ctx.lr = 0x83127850;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83127860;
	sub_833A7198(ctx, base);
loc_83127860:
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127904
	if (ctx.cr0.eq) goto loc_83127904;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312788C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831278A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831278BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r4,r11,-5660
	ctx.r4.s64 = ctx.r11.s64 + -5660;
	// bl 0x830ec4e0
	ctx.lr = 0x831278D0;
	sub_830EC4E0(ctx, base);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831278E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831278F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec8f8
	ctx.lr = 0x83127904;
	sub_830EC8F8(ctx, base);
loc_83127904:
	// li r11,68
	ctx.r11.s64 = 68;
	// sth r22,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r22.u16);
	// li r10,84
	ctx.r10.s64 = 84;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
	// li r3,44
	ctx.r3.s64 = 44;
	// sth r10,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r10.u16);
	// sth r11,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r11.u16);
	// bl 0x830dd390
	ctx.lr = 0x83127928;
	sub_830DD390(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312794c
	if (ctx.cr0.eq) goto loc_8312794C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// bl 0x8311eba0
	ctx.lr = 0x83127944;
	sub_8311EBA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83127950
	goto loc_83127950;
loc_8312794C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83127950:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311eb38
	ctx.lr = 0x8312795C;
	sub_8311EB38(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r11,r11,32841
	ctx.r11.u64 = ctx.r11.u64 | 32841;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stbx r18,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r18.u8);
	// bl 0x830f5368
	ctx.lr = 0x8312797C;
	sub_830F5368(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x83173c48
	ctx.lr = 0x8312798C;
	sub_83173C48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8312c778
	ctx.lr = 0x83127998;
	sub_8312C778(ctx, base);
loc_83127998:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8312c778
	ctx.lr = 0x831279A4;
	sub_8312C778(ctx, base);
loc_831279A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x831b3a50
	ctx.lr = 0x831279B0;
	sub_831B3A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x831b3a50
	ctx.lr = 0x831279BC;
	sub_831B3A50(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x831279C4;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x831279D0;
	sub_8312C778(ctx, base);
loc_831279D0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x831279DC;
	sub_830E4388(ctx, base);
loc_831279DC:
	// addi r1,r31,368
	ctx.r1.s64 = ctx.r31.s64 + 368;
	// b 0x833a01d0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831270D0"))) PPC_WEAK_FUNC(sub_831270D0);
PPC_FUNC_IMPL(__imp__sub_831270D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0180
	ctx.lr = 0x831270D8;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-368
	ctx.r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127104
	if (ctx.cr6.eq) goto loc_83127104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127104:
	// addi r21,r30,128
	ctx.r21.s64 = ctx.r30.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83127114;
	sub_830F50E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83127138
	if (!ctx.cr0.eq) goto loc_83127138;
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83127128;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x83127134;
	sub_830ED2B8(ctx, base);
	// b 0x831279dc
	goto loc_831279DC;
loc_83127138:
	// addi r19,r30,224
	ctx.r19.s64 = ctx.r30.s64 + 224;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4258
	ctx.lr = 0x83127144;
	sub_830E4258(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r19,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r19.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127180
	if (ctx.cr0.eq) goto loc_83127180;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa338
	ctx.lr = 0x8312717C;
	sub_830FA338(ctx, base);
	// b 0x831271a0
	goto loc_831271A0;
loc_83127180:
	// lwz r11,24(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r22.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa120
	ctx.lr = 0x831271A0;
	sub_830FA120(ctx, base);
loc_831271A0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831271f8
	if (!ctx.cr0.eq) goto loc_831271F8;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831271c4
	if (!ctx.cr6.eq) goto loc_831271C4;
	// li r4,208
	ctx.r4.s64 = 208;
	// bl 0x830edff8
	ctx.lr = 0x831271C0;
	sub_830EDFF8(ctx, base);
	// b 0x831271e8
	goto loc_831271E8;
loc_831271C4:
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,307
	ctx.r4.s64 = 307;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r5,24(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x831271E8;
	sub_830EE100(ctx, base);
loc_831271E8:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x831271F4;
	sub_830ED2B8(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_831271F8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// bl 0x8311ed28
	ctx.lr = 0x83127214;
	sub_8311ED28(ctx, base);
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127228
	if (ctx.cr0.eq) goto loc_83127228;
	// lwz r29,220(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// b 0x8312722c
	goto loc_8312722C;
loc_83127228:
	// lwz r29,184(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
loc_8312722C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x8312723C;
	sub_830DD390(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127274
	if (ctx.cr0.eq) goto loc_83127274;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83175008
	ctx.lr = 0x8312726C;
	sub_83175008(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x83127278
	goto loc_83127278;
loc_83127274:
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83127278:
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// stb r18,20(r23)
	PPC_STORE_U8(ctx.r23.u32 + 20, ctx.r18.u8);
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831272c0
	if (!ctx.cr0.eq) goto loc_831272C0;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831272B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// b 0x83127310
	goto loc_83127310;
loc_831272C0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// bl 0x8311f228
	ctx.lr = 0x831272E0;
	sub_8311F228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127300
	if (ctx.cr0.eq) goto loc_83127300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83127300
	if (ctx.cr6.eq) goto loc_83127300;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r11.u32);
	// b 0x83127314
	goto loc_83127314;
loc_83127300:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// bl 0x8311f668
	ctx.lr = 0x8312730C;
	sub_8311F668(ctx, base);
	// stw r3,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r3.u32);
loc_83127310:
	// stw r22,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r22.u32);
loc_83127314:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83127320;
	sub_830F50E0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f70
	ctx.lr = 0x8312732C;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83127374
	if (ctx.cr0.eq) goto loc_83127374;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127364
	if (ctx.cr6.eq) goto loc_83127364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127364:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x83127370;
	sub_8312C778(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_83127374:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83127390
	if (!ctx.cr6.eq) goto loc_83127390;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83127390
	if (!ctx.cr0.eq) goto loc_83127390;
	// stb r18,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r18.u8);
loc_83127390:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// lwz r6,184(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// bl 0x83171070
	ctx.lr = 0x831273B8;
	sub_83171070(ctx, base);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8316ed38
	ctx.lr = 0x831273CC;
	sub_8316ED38(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f08
	ctx.lr = 0x831273D4;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x831273e8
	if (!ctx.cr6.eq) goto loc_831273E8;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// b 0x831274ec
	goto loc_831274EC;
loc_831273E8:
	// stb r22,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r22.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// bl 0x830e4258
	ctx.lr = 0x831273F8;
	sub_830E4258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r19,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r19.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312740C;
	sub_830E4258(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r19,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r19.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831718d0
	ctx.lr = 0x8312742C;
	sub_831718D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83127470
	if (!ctx.cr0.eq) goto loc_83127470;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x83127440;
	sub_830ED2B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312744C;
	sub_830E4388(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x83127458;
	sub_830E4388(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x83127460;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x8312746C;
	sub_8312C778(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_83127470:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830d58e8
	ctx.lr = 0x8312748C;
	sub_830D58E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830d58e8
	ctx.lr = 0x831274AC;
	sub_830D58E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x831274BC;
	sub_830F50E0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f08
	ctx.lr = 0x831274C4;
	sub_830F4F08(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x831274d4
	if (!ctx.cr6.eq) goto loc_831274D4;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
loc_831274D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x831274E0;
	sub_830E4388(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x831274EC;
	sub_830E4388(ctx, base);
loc_831274EC:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127538
	if (ctx.cr6.eq) goto loc_83127538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127538:
	// clrlwi. r29,r26,24
	ctx.r29.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x831275dc
	if (ctx.cr0.eq) goto loc_831275DC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x83127548;
	sub_830F4DD0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f10a8
	ctx.lr = 0x8312755C;
	sub_830F10A8(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831746f0
	ctx.lr = 0x83127564;
	sub_831746F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831275a8
	if (!ctx.cr0.eq) goto loc_831275A8;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x83127578;
	sub_830ED2B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x831b3a50
	ctx.lr = 0x83127584;
	sub_831B3A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x831b3a50
	ctx.lr = 0x83127590;
	sub_831B3A50(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x83127598;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x831275A4;
	sub_8312C778(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_831275A8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4b40
	ctx.lr = 0x831275B0;
	sub_830F4B40(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x831275d0
	if (!ctx.cr6.gt) goto loc_831275D0;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831275C4;
	sub_830EDFF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f47b0
	ctx.lr = 0x831275D0;
	sub_830F47B0(ctx, base);
loc_831275D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x831275DC;
	sub_830F50E0(ctx, base);
loc_831275DC:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f70
	ctx.lr = 0x831275E8;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83127640
	if (!ctx.cr0.eq) goto loc_83127640;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f70
	ctx.lr = 0x831275FC;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83127628
	if (ctx.cr0.eq) goto loc_83127628;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f70
	ctx.lr = 0x83127610;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83127628
	if (ctx.cr0.eq) goto loc_83127628;
	// li r4,257
	ctx.r4.s64 = 257;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83127624;
	sub_830EDFF8(ctx, base);
	// b 0x83127640
	goto loc_83127640;
loc_83127628:
	// li r4,212
	ctx.r4.s64 = 212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83127634;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x83127640;
	sub_830ED2B8(ctx, base);
loc_83127640:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831279a4
	if (ctx.cr0.eq) goto loc_831279A4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// stw r22,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312776c
	if (ctx.cr0.eq) goto loc_8312776C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8312776c
	if (!ctx.cr6.eq) goto loc_8312776C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// beq 0x8312776c
	if (ctx.cr0.eq) goto loc_8312776C;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8312c778
	ctx.lr = 0x83127698;
	sub_8312C778(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831276AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec670
	ctx.lr = 0x831276B8;
	sub_830EC670(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83127768
	if (ctx.cr0.eq) goto loc_83127768;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831276D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83127768
	if (!ctx.cr0.eq) goto loc_83127768;
	// stw r29,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r29.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831276FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312772c
	if (ctx.cr6.eq) goto loc_8312772C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312772C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312772C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8312c778
	ctx.lr = 0x83127738;
	sub_8312C778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x831b3a50
	ctx.lr = 0x83127744;
	sub_831B3A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x831b3a50
	ctx.lr = 0x83127750;
	sub_831B3A50(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x83127758;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x83127764;
	sub_8312C778(ctx, base);
	// b 0x831279d0
	goto loc_831279D0;
loc_83127768:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_8312776C:
	// lbz r11,23(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83127784
	if (!ctx.cr0.eq) goto loc_83127784;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127998
	if (ctx.cr0.eq) goto loc_83127998;
loc_83127784:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831277b0
	if (ctx.cr6.eq) goto loc_831277B0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4868
	ctx.lr = 0x831277A8;
	sub_830F4868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831277f4
	goto loc_831277F4;
loc_831277B0:
	// lbz r3,9(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r3,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f5698
	ctx.lr = 0x831277E4;
	sub_830F5698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8312c778
	ctx.lr = 0x831277F4;
	sub_8312C778(ctx, base);
loc_831277F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83127860
	if (!ctx.cr6.eq) goto loc_83127860;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127820
	if (ctx.cr6.eq) goto loc_83127820;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x83127824
	goto loc_83127824;
loc_83127820:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_83127824:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,-16656
	ctx.r4.s64 = ctx.r9.s64 + -16656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,45
	ctx.r6.s64 = 45;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1032
	ctx.r5.s64 = 1032;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8311e9c0
	ctx.lr = 0x83127850;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83127860;
	sub_833A7198(ctx, base);
loc_83127860:
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127904
	if (ctx.cr0.eq) goto loc_83127904;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312788C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831278A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831278BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r4,r11,-5660
	ctx.r4.s64 = ctx.r11.s64 + -5660;
	// bl 0x830ec4e0
	ctx.lr = 0x831278D0;
	sub_830EC4E0(ctx, base);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831278E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831278F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec8f8
	ctx.lr = 0x83127904;
	sub_830EC8F8(ctx, base);
loc_83127904:
	// li r11,68
	ctx.r11.s64 = 68;
	// sth r22,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r22.u16);
	// li r10,84
	ctx.r10.s64 = 84;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
	// li r3,44
	ctx.r3.s64 = 44;
	// sth r10,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r10.u16);
	// sth r11,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r11.u16);
	// bl 0x830dd390
	ctx.lr = 0x83127928;
	sub_830DD390(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312794c
	if (ctx.cr0.eq) goto loc_8312794C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// bl 0x8311eba0
	ctx.lr = 0x83127944;
	sub_8311EBA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83127950
	goto loc_83127950;
loc_8312794C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83127950:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311eb38
	ctx.lr = 0x8312795C;
	sub_8311EB38(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r11,r11,32841
	ctx.r11.u64 = ctx.r11.u64 | 32841;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stbx r18,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r18.u8);
	// bl 0x830f5368
	ctx.lr = 0x8312797C;
	sub_830F5368(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x83173c48
	ctx.lr = 0x8312798C;
	sub_83173C48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8312c778
	ctx.lr = 0x83127998;
	sub_8312C778(ctx, base);
loc_83127998:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8312c778
	ctx.lr = 0x831279A4;
	sub_8312C778(ctx, base);
loc_831279A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x831b3a50
	ctx.lr = 0x831279B0;
	sub_831B3A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x831b3a50
	ctx.lr = 0x831279BC;
	sub_831B3A50(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x831279C4;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x831279D0;
	sub_8312C778(ctx, base);
loc_831279D0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x830e4388
	ctx.lr = 0x831279DC;
	sub_830E4388(ctx, base);
loc_831279DC:
	// addi r1,r31,368
	ctx.r1.s64 = ctx.r31.s64 + 368;
	// b 0x833a01d0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831279E4"))) PPC_WEAK_FUNC(sub_831279E4);
PPC_FUNC_IMPL(__imp__sub_831279E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x830d9068
	ctx.lr = 0x831279FC;
	sub_830D9068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127A0C"))) PPC_WEAK_FUNC(sub_83127A0C);
PPC_FUNC_IMPL(__imp__sub_83127A0C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x830dd3e0
	ctx.lr = 0x83127A28;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127A38"))) PPC_WEAK_FUNC(sub_83127A38);
PPC_FUNC_IMPL(__imp__sub_83127A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x830f4658
	ctx.lr = 0x83127A50;
	sub_830F4658(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127A60"))) PPC_WEAK_FUNC(sub_83127A60);
PPC_FUNC_IMPL(__imp__sub_83127A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831723a8
	ctx.lr = 0x83127A78;
	sub_831723A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127A88"))) PPC_WEAK_FUNC(sub_83127A88);
PPC_FUNC_IMPL(__imp__sub_83127A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830d9068
	ctx.lr = 0x83127AA0;
	sub_830D9068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127AB0"))) PPC_WEAK_FUNC(sub_83127AB0);
PPC_FUNC_IMPL(__imp__sub_83127AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830d9068
	ctx.lr = 0x83127AC8;
	sub_830D9068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127AD8"))) PPC_WEAK_FUNC(sub_83127AD8);
PPC_FUNC_IMPL(__imp__sub_83127AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x831b4220
	ctx.lr = 0x83127AF0;
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

__attribute__((alias("__imp__sub_83127B00"))) PPC_WEAK_FUNC(sub_83127B00);
PPC_FUNC_IMPL(__imp__sub_83127B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x831b4220
	ctx.lr = 0x83127B18;
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

__attribute__((alias("__imp__sub_83127B28"))) PPC_WEAK_FUNC(sub_83127B28);
PPC_FUNC_IMPL(__imp__sub_83127B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x830f4658
	ctx.lr = 0x83127B40;
	sub_830F4658(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127B50"))) PPC_WEAK_FUNC(sub_83127B50);
PPC_FUNC_IMPL(__imp__sub_83127B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x830dd3e0
	ctx.lr = 0x83127B70;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127B80"))) PPC_WEAK_FUNC(sub_83127B80);
PPC_FUNC_IMPL(__imp__sub_83127B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-368
	ctx.r31.s64 = ctx.r12.s64 + -368;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x830f4658
	ctx.lr = 0x83127B98;
	sub_830F4658(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127BA8"))) PPC_WEAK_FUNC(sub_83127BA8);
PPC_FUNC_IMPL(__imp__sub_83127BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-15160(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -15160);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83127BB8;
	__savegprlr_24(ctx, base);
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
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127c04
	if (ctx.cr0.eq) goto loc_83127C04;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127C04:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x830dd390
	ctx.lr = 0x83127C10;
	sub_830DD390(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127c2c
	if (ctx.cr0.eq) goto loc_83127C2C;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x83140df0
	ctx.lr = 0x83127C24;
	sub_83140DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83127c30
	goto loc_83127C30;
loc_83127C2C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83127C30:
	// stw r4,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r4.u32);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec8f8
	ctx.lr = 0x83127C3C;
	sub_830EC8F8(ctx, base);
	// lwz r4,512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r4,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127c74
	if (ctx.cr6.eq) goto loc_83127C74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127C74:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127c90
	if (ctx.cr6.eq) goto loc_83127C90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127C90:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127cac
	if (ctx.cr6.eq) goto loc_83127CAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127CAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311ed88
	ctx.lr = 0x83127CB4;
	sub_8311ED88(ctx, base);
	// clrlwi. r24,r29,24
	ctx.r24.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x83127d54
	if (ctx.cr0.eq) goto loc_83127D54;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r4,r11,-5660
	ctx.r4.s64 = ctx.r11.s64 + -5660;
	// bl 0x830ec4e0
	ctx.lr = 0x83127D20;
	sub_830EC4E0(ctx, base);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec8f8
	ctx.lr = 0x83127D54;
	sub_830EC8F8(ctx, base);
loc_83127D54:
	// addi r25,r30,128
	ctx.r25.s64 = ctx.r30.s64 + 128;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830f4868
	ctx.lr = 0x83127D78;
	sub_830F4868(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x83127e30
	if (!ctx.cr0.eq) goto loc_83127E30;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,220(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x83127df0
	if (ctx.cr0.eq) goto loc_83127DF0;
	// bctrl 
	ctx.lr = 0x83127DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,1776
	ctx.r5.s64 = 1776;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8311e9c0
	ctx.lr = 0x83127DE0;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83127DF0;
	sub_833A7198(ctx, base);
loc_83127DF0:
	// bctrl 
	ctx.lr = 0x83127DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1778
	ctx.r5.s64 = 1778;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8311e9c0
	ctx.lr = 0x83127E20;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83127E30;
	sub_833A7198(ctx, base);
loc_83127E30:
	// li r11,68
	ctx.r11.s64 = 68;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r10,84
	ctx.r10.s64 = 84;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r11.u16);
	// sth r10,106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 106, ctx.r10.u16);
	// li r3,44
	ctx.r3.s64 = 44;
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// sth r9,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r9.u16);
	// bl 0x830dd390
	ctx.lr = 0x83127E58;
	sub_830DD390(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127e7c
	if (ctx.cr0.eq) goto loc_83127E7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// bl 0x8311eba0
	ctx.lr = 0x83127E74;
	sub_8311EBA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83127e80
	goto loc_83127E80;
loc_83127E7C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83127E80:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311eb38
	ctx.lr = 0x83127EA0;
	sub_8311EB38(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r11,r11,32841
	ctx.r11.u64 = ctx.r11.u64 | 32841;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stbx r26,r27,r11
	PPC_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r26.u8);
	// bl 0x830f5368
	ctx.lr = 0x83127EC4;
	sub_830F5368(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83127f7c
	if (ctx.cr6.eq) goto loc_83127F7C;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x830dd390
	ctx.lr = 0x83127EDC;
	sub_830DD390(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127f04
	if (ctx.cr0.eq) goto loc_83127F04;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83175008
	ctx.lr = 0x83127EFC;
	sub_83175008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83127f08
	goto loc_83127F08;
loc_83127F04:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83127F08:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stb r26,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r26.u8);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8312c778
	ctx.lr = 0x83127F7C;
	sub_8312C778(ctx, base);
loc_83127F7C:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r6,184(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// bl 0x83171070
	ctx.lr = 0x83127F94;
	sub_83171070(ctx, base);
	// addi r6,r30,224
	ctx.r6.s64 = ctx.r30.s64 + 224;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8316ed38
	ctx.lr = 0x83127FA8;
	sub_8316ED38(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83173c48
	ctx.lr = 0x83127FB8;
	sub_83173C48(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127fe0
	if (ctx.cr0.eq) goto loc_83127FE0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127FE0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83127ff0
	if (ctx.cr6.eq) goto loc_83127FF0;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec9c8
	ctx.lr = 0x83127FF0;
	sub_830EC9C8(ctx, base);
loc_83127FF0:
	// lwz r30,512(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x831723a8
	ctx.lr = 0x83127FFC;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x83128008;
	sub_8312C778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83127BB0"))) PPC_WEAK_FUNC(sub_83127BB0);
PPC_FUNC_IMPL(__imp__sub_83127BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83127BB8;
	__savegprlr_24(ctx, base);
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
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127c04
	if (ctx.cr0.eq) goto loc_83127C04;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127C04:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x830dd390
	ctx.lr = 0x83127C10;
	sub_830DD390(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127c2c
	if (ctx.cr0.eq) goto loc_83127C2C;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x83140df0
	ctx.lr = 0x83127C24;
	sub_83140DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83127c30
	goto loc_83127C30;
loc_83127C2C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83127C30:
	// stw r4,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r4.u32);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec8f8
	ctx.lr = 0x83127C3C;
	sub_830EC8F8(ctx, base);
	// lwz r4,512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r4,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127c74
	if (ctx.cr6.eq) goto loc_83127C74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127C74:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127c90
	if (ctx.cr6.eq) goto loc_83127C90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127C90:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83127cac
	if (ctx.cr6.eq) goto loc_83127CAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127CAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311ed88
	ctx.lr = 0x83127CB4;
	sub_8311ED88(ctx, base);
	// clrlwi. r24,r29,24
	ctx.r24.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x83127d54
	if (ctx.cr0.eq) goto loc_83127D54;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r4,r11,-5660
	ctx.r4.s64 = ctx.r11.s64 + -5660;
	// bl 0x830ec4e0
	ctx.lr = 0x83127D20;
	sub_830EC4E0(ctx, base);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec8f8
	ctx.lr = 0x83127D54;
	sub_830EC8F8(ctx, base);
loc_83127D54:
	// addi r25,r30,128
	ctx.r25.s64 = ctx.r30.s64 + 128;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830f4868
	ctx.lr = 0x83127D78;
	sub_830F4868(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x83127e30
	if (!ctx.cr0.eq) goto loc_83127E30;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,220(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x83127df0
	if (ctx.cr0.eq) goto loc_83127DF0;
	// bctrl 
	ctx.lr = 0x83127DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,1776
	ctx.r5.s64 = 1776;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8311e9c0
	ctx.lr = 0x83127DE0;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83127DF0;
	sub_833A7198(ctx, base);
loc_83127DF0:
	// bctrl 
	ctx.lr = 0x83127DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1778
	ctx.r5.s64 = 1778;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8311e9c0
	ctx.lr = 0x83127E20;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83127E30;
	sub_833A7198(ctx, base);
loc_83127E30:
	// li r11,68
	ctx.r11.s64 = 68;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r10,84
	ctx.r10.s64 = 84;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r11.u16);
	// sth r10,106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 106, ctx.r10.u16);
	// li r3,44
	ctx.r3.s64 = 44;
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// sth r9,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r9.u16);
	// bl 0x830dd390
	ctx.lr = 0x83127E58;
	sub_830DD390(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127e7c
	if (ctx.cr0.eq) goto loc_83127E7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// bl 0x8311eba0
	ctx.lr = 0x83127E74;
	sub_8311EBA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83127e80
	goto loc_83127E80;
loc_83127E7C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83127E80:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311eb38
	ctx.lr = 0x83127EA0;
	sub_8311EB38(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r11,r11,32841
	ctx.r11.u64 = ctx.r11.u64 | 32841;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stbx r26,r27,r11
	PPC_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r26.u8);
	// bl 0x830f5368
	ctx.lr = 0x83127EC4;
	sub_830F5368(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83127f7c
	if (ctx.cr6.eq) goto loc_83127F7C;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x830dd390
	ctx.lr = 0x83127EDC;
	sub_830DD390(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83127f04
	if (ctx.cr0.eq) goto loc_83127F04;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83175008
	ctx.lr = 0x83127EFC;
	sub_83175008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83127f08
	goto loc_83127F08;
loc_83127F04:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83127F08:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stb r26,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r26.u8);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8312c778
	ctx.lr = 0x83127F7C;
	sub_8312C778(ctx, base);
loc_83127F7C:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r6,184(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// bl 0x83171070
	ctx.lr = 0x83127F94;
	sub_83171070(ctx, base);
	// addi r6,r30,224
	ctx.r6.s64 = ctx.r30.s64 + 224;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8316ed38
	ctx.lr = 0x83127FA8;
	sub_8316ED38(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83173c48
	ctx.lr = 0x83127FB8;
	sub_83173C48(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83127fe0
	if (ctx.cr0.eq) goto loc_83127FE0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83127FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83127FE0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83127ff0
	if (ctx.cr6.eq) goto loc_83127FF0;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec9c8
	ctx.lr = 0x83127FF0;
	sub_830EC9C8(ctx, base);
loc_83127FF0:
	// lwz r30,512(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x831723a8
	ctx.lr = 0x83127FFC;
	sub_831723A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8312c778
	ctx.lr = 0x83128008;
	sub_8312C778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128014"))) PPC_WEAK_FUNC(sub_83128014);
PPC_FUNC_IMPL(__imp__sub_83128014) {
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
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830dd3e0
	ctx.lr = 0x83128034;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128044"))) PPC_WEAK_FUNC(sub_83128044);
PPC_FUNC_IMPL(__imp__sub_83128044) {
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
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830dd3e0
	ctx.lr = 0x83128064;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128074"))) PPC_WEAK_FUNC(sub_83128074);
PPC_FUNC_IMPL(__imp__sub_83128074) {
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
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x830f4658
	ctx.lr = 0x8312808C;
	sub_830F4658(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312809C"))) PPC_WEAK_FUNC(sub_8312809C);
PPC_FUNC_IMPL(__imp__sub_8312809C) {
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
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831280BC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831280CC"))) PPC_WEAK_FUNC(sub_831280CC);
PPC_FUNC_IMPL(__imp__sub_831280CC) {
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
	// bl 0x830f4658
	ctx.lr = 0x831280E4;
	sub_830F4658(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831280F4"))) PPC_WEAK_FUNC(sub_831280F4);
PPC_FUNC_IMPL(__imp__sub_831280F4) {
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
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x831723a8
	ctx.lr = 0x8312810C;
	sub_831723A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312811C"))) PPC_WEAK_FUNC(sub_8312811C);
PPC_FUNC_IMPL(__imp__sub_8312811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83128120"))) PPC_WEAK_FUNC(sub_83128120);
PPC_FUNC_IMPL(__imp__sub_83128120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14968(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14968);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83128130;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312814C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312816c
	if (ctx.cr0.eq) goto loc_8312816C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83164c20
	ctx.lr = 0x83128168;
	sub_83164C20(ctx, base);
	// b 0x83128170
	goto loc_83128170;
loc_8312816C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83128170:
	// stw r3,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83128180;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312819c
	if (ctx.cr0.eq) goto loc_8312819C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83168888
	ctx.lr = 0x83128194;
	sub_83168888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x831281a0
	goto loc_831281A0;
loc_8312819C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831281A0:
	// stw r4,508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 508, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed638
	ctx.lr = 0x831281AC;
	sub_830ED638(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x831281B8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831281d8
	if (ctx.cr0.eq) goto loc_831281D8;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8313fff0
	ctx.lr = 0x831281D4;
	sub_8313FFF0(ctx, base);
	// b 0x831281dc
	goto loc_831281DC;
loc_831281D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831281DC:
	// stw r3,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x831281EC;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83128238
	if (ctx.cr0.eq) goto loc_83128238;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83128204;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312821c
	if (ctx.cr0.eq) goto loc_8312821C;
	// bl 0x83105e58
	ctx.lr = 0x83128214;
	sub_83105E58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83128220
	goto loc_83128220;
loc_8312821C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83128220:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,131
	ctx.r4.s64 = 131;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83194ef0
	ctx.lr = 0x83128234;
	sub_83194EF0(ctx, base);
	// b 0x8312823c
	goto loc_8312823C;
loc_83128238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312823C:
	// stw r3,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312824C;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// beq 0x83128298
	if (ctx.cr0.eq) goto loc_83128298;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83128264;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312827c
	if (ctx.cr0.eq) goto loc_8312827C;
	// bl 0x83116550
	ctx.lr = 0x83128274;
	sub_83116550(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83128280
	goto loc_83128280;
loc_8312827C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83128280:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83194ef0
	ctx.lr = 0x83128294;
	sub_83194EF0(ctx, base);
	// b 0x8312829c
	goto loc_8312829C;
loc_83128298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312829C:
	// stw r3,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r3.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831282f0
	if (ctx.cr6.eq) goto loc_831282F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831282BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831282f8
	if (!ctx.cr0.eq) goto loc_831282F8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,1868
	ctx.r5.s64 = 1868;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x831282E0;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x831282F0;
	sub_833A7198(ctx, base);
loc_831282F0:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
loc_831282F8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128128"))) PPC_WEAK_FUNC(sub_83128128);
PPC_FUNC_IMPL(__imp__sub_83128128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83128130;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312814C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312816c
	if (ctx.cr0.eq) goto loc_8312816C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83164c20
	ctx.lr = 0x83128168;
	sub_83164C20(ctx, base);
	// b 0x83128170
	goto loc_83128170;
loc_8312816C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83128170:
	// stw r3,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83128180;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312819c
	if (ctx.cr0.eq) goto loc_8312819C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83168888
	ctx.lr = 0x83128194;
	sub_83168888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x831281a0
	goto loc_831281A0;
loc_8312819C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831281A0:
	// stw r4,508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 508, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed638
	ctx.lr = 0x831281AC;
	sub_830ED638(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x831281B8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831281d8
	if (ctx.cr0.eq) goto loc_831281D8;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8313fff0
	ctx.lr = 0x831281D4;
	sub_8313FFF0(ctx, base);
	// b 0x831281dc
	goto loc_831281DC;
loc_831281D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831281DC:
	// stw r3,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x831281EC;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83128238
	if (ctx.cr0.eq) goto loc_83128238;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83128204;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312821c
	if (ctx.cr0.eq) goto loc_8312821C;
	// bl 0x83105e58
	ctx.lr = 0x83128214;
	sub_83105E58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83128220
	goto loc_83128220;
loc_8312821C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83128220:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,131
	ctx.r4.s64 = 131;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83194ef0
	ctx.lr = 0x83128234;
	sub_83194EF0(ctx, base);
	// b 0x8312823c
	goto loc_8312823C;
loc_83128238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312823C:
	// stw r3,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312824C;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// beq 0x83128298
	if (ctx.cr0.eq) goto loc_83128298;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83128264;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312827c
	if (ctx.cr0.eq) goto loc_8312827C;
	// bl 0x83116550
	ctx.lr = 0x83128274;
	sub_83116550(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83128280
	goto loc_83128280;
loc_8312827C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83128280:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83194ef0
	ctx.lr = 0x83128294;
	sub_83194EF0(ctx, base);
	// b 0x8312829c
	goto loc_8312829C;
loc_83128298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312829C:
	// stw r3,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r3.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831282f0
	if (ctx.cr6.eq) goto loc_831282F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831282BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831282f8
	if (!ctx.cr0.eq) goto loc_831282F8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,1868
	ctx.r5.s64 = 1868;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830d5dc0
	ctx.lr = 0x831282E0;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x831282F0;
	sub_833A7198(ctx, base);
loc_831282F0:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
loc_831282F8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128300"))) PPC_WEAK_FUNC(sub_83128300);
PPC_FUNC_IMPL(__imp__sub_83128300) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83128320;
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

__attribute__((alias("__imp__sub_83128330"))) PPC_WEAK_FUNC(sub_83128330);
PPC_FUNC_IMPL(__imp__sub_83128330) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83128350;
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

__attribute__((alias("__imp__sub_83128360"))) PPC_WEAK_FUNC(sub_83128360);
PPC_FUNC_IMPL(__imp__sub_83128360) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83128380;
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

__attribute__((alias("__imp__sub_83128390"))) PPC_WEAK_FUNC(sub_83128390);
PPC_FUNC_IMPL(__imp__sub_83128390) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831283B0;
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

__attribute__((alias("__imp__sub_831283C0"))) PPC_WEAK_FUNC(sub_831283C0);
PPC_FUNC_IMPL(__imp__sub_831283C0) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831283E0;
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

__attribute__((alias("__imp__sub_831283F0"))) PPC_WEAK_FUNC(sub_831283F0);
PPC_FUNC_IMPL(__imp__sub_831283F0) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83128410;
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

__attribute__((alias("__imp__sub_83128420"))) PPC_WEAK_FUNC(sub_83128420);
PPC_FUNC_IMPL(__imp__sub_83128420) {
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
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83128440;
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

__attribute__((alias("__imp__sub_83128450"))) PPC_WEAK_FUNC(sub_83128450);
PPC_FUNC_IMPL(__imp__sub_83128450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14792(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14792);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x83128460;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831284a8
	if (!ctx.cr0.eq) goto loc_831284A8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831284a8
	if (!ctx.cr6.eq) goto loc_831284A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312882c
	goto loc_8312882C;
loc_831284A8:
	// lwz r21,8(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83128828
	if (ctx.cr6.eq) goto loc_83128828;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831284CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831284E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83128828
	if (ctx.cr0.eq) goto loc_83128828;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r26,r11,-5740
	ctx.r26.s64 = ctx.r11.s64 + -5740;
loc_831284F8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,524(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83128528;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312854c
	if (ctx.cr0.eq) goto loc_8312854C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312854c
	if (ctx.cr6.eq) goto loc_8312854C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,520(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 520);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83128808
	if (!ctx.cr6.lt) goto loc_83128808;
loc_8312854C:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831285fc
	if (ctx.cr0.eq) goto loc_831285FC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x83128598
	if (!ctx.cr6.eq) goto loc_83128598;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8311e658
	ctx.lr = 0x83128594;
	sub_8311E658(ctx, base);
	// b 0x83128808
	goto loc_83128808;
loc_83128598:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x831285a8
	if (ctx.cr6.eq) goto loc_831285A8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x831285fc
	if (!ctx.cr6.eq) goto loc_831285FC;
loc_831285A8:
	// lbz r11,14(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831285fc
	if (ctx.cr0.eq) goto loc_831285FC;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831285fc
	if (ctx.cr0.eq) goto loc_831285FC;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x831285C8;
	sub_830E3560(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831285E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8311e658
	ctx.lr = 0x831285FC;
	sub_8311E658(ctx, base);
loc_831285FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8312860c
	if (ctx.cr6.eq) goto loc_8312860C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x83128808
	if (!ctx.cr6.eq) goto loc_83128808;
loc_8312860C:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312863c
	if (ctx.cr0.eq) goto loc_8312863C;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312863C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312863C:
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x83128744
	if (ctx.cr6.lt) goto loc_83128744;
	// lbz r11,10(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831286c4
	if (ctx.cr0.eq) goto loc_831286C4;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,220(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312865C;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// beq 0x831286b8
	if (ctx.cr0.eq) goto loc_831286B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r20,8(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r19,220(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// bl 0x830f8b50
	ctx.lr = 0x831286B4;
	sub_830F8B50(ctx, base);
	// b 0x831286bc
	goto loc_831286BC;
loc_831286B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_831286BC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83128734
	goto loc_83128734;
loc_831286C4:
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,220(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x831286D0;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// beq 0x8312872c
	if (ctx.cr0.eq) goto loc_8312872C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r20,8(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r19,220(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831286FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// bl 0x830f8b50
	ctx.lr = 0x83128728;
	sub_830F8B50(ctx, base);
	// b 0x83128730
	goto loc_83128730;
loc_8312872C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83128730:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83128734:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// bl 0x830f4660
	ctx.lr = 0x83128740;
	sub_830F4660(ctx, base);
	// b 0x831287c4
	goto loc_831287C4;
loc_83128744:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// bl 0x831a0220
	ctx.lr = 0x83128750;
	sub_831A0220(ctx, base);
	// lbz r11,10(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r20,8(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x83128790
	if (ctx.cr0.eq) goto loc_83128790;
	// bctrl 
	ctx.lr = 0x8312877C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x830e3cf0
	ctx.lr = 0x8312878C;
	sub_830E3CF0(ctx, base);
	// b 0x831287a8
	goto loc_831287A8;
loc_83128790:
	// bctrl 
	ctx.lr = 0x83128794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830e3c68
	ctx.lr = 0x831287A8;
	sub_830E3C68(ctx, base);
loc_831287A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a20
	ctx.lr = 0x831287B4;
	sub_830F8A20(ctx, base);
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// stb r27,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r27.u8);
	// stw r20,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r20.u32);
	// stb r27,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r27.u8);
loc_831287C4:
	// lbz r11,10(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128804
	if (ctx.cr0.eq) goto loc_83128804;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83128804
	if (ctx.cr6.eq) goto loc_83128804;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128804
	if (ctx.cr0.eq) goto loc_83128804;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831332c8
	ctx.lr = 0x831287F8;
	sub_831332C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a10
	ctx.lr = 0x83128804;
	sub_830F8A10(ctx, base);
loc_83128804:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_83128808:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x831284f8
	if (ctx.cr6.lt) goto loc_831284F8;
loc_83128828:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8312882C:
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128458"))) PPC_WEAK_FUNC(sub_83128458);
PPC_FUNC_IMPL(__imp__sub_83128458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x83128460;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831284a8
	if (!ctx.cr0.eq) goto loc_831284A8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831284a8
	if (!ctx.cr6.eq) goto loc_831284A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312882c
	goto loc_8312882C;
loc_831284A8:
	// lwz r21,8(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83128828
	if (ctx.cr6.eq) goto loc_83128828;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831284CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831284E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83128828
	if (ctx.cr0.eq) goto loc_83128828;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r26,r11,-5740
	ctx.r26.s64 = ctx.r11.s64 + -5740;
loc_831284F8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,524(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83128528;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312854c
	if (ctx.cr0.eq) goto loc_8312854C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312854c
	if (ctx.cr6.eq) goto loc_8312854C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,520(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 520);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83128808
	if (!ctx.cr6.lt) goto loc_83128808;
loc_8312854C:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831285fc
	if (ctx.cr0.eq) goto loc_831285FC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x83128598
	if (!ctx.cr6.eq) goto loc_83128598;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8311e658
	ctx.lr = 0x83128594;
	sub_8311E658(ctx, base);
	// b 0x83128808
	goto loc_83128808;
loc_83128598:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x831285a8
	if (ctx.cr6.eq) goto loc_831285A8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x831285fc
	if (!ctx.cr6.eq) goto loc_831285FC;
loc_831285A8:
	// lbz r11,14(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831285fc
	if (ctx.cr0.eq) goto loc_831285FC;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831285fc
	if (ctx.cr0.eq) goto loc_831285FC;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x831285C8;
	sub_830E3560(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831285E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8311e658
	ctx.lr = 0x831285FC;
	sub_8311E658(ctx, base);
loc_831285FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8312860c
	if (ctx.cr6.eq) goto loc_8312860C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x83128808
	if (!ctx.cr6.eq) goto loc_83128808;
loc_8312860C:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312863c
	if (ctx.cr0.eq) goto loc_8312863C;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312863C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312863C:
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x83128744
	if (ctx.cr6.lt) goto loc_83128744;
	// lbz r11,10(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831286c4
	if (ctx.cr0.eq) goto loc_831286C4;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,220(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312865C;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// beq 0x831286b8
	if (ctx.cr0.eq) goto loc_831286B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r20,8(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r19,220(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// bl 0x830f8b50
	ctx.lr = 0x831286B4;
	sub_830F8B50(ctx, base);
	// b 0x831286bc
	goto loc_831286BC;
loc_831286B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_831286BC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83128734
	goto loc_83128734;
loc_831286C4:
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,220(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x831286D0;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// beq 0x8312872c
	if (ctx.cr0.eq) goto loc_8312872C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r20,8(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r19,220(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831286FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// bl 0x830f8b50
	ctx.lr = 0x83128728;
	sub_830F8B50(ctx, base);
	// b 0x83128730
	goto loc_83128730;
loc_8312872C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83128730:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83128734:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// bl 0x830f4660
	ctx.lr = 0x83128740;
	sub_830F4660(ctx, base);
	// b 0x831287c4
	goto loc_831287C4;
loc_83128744:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// bl 0x831a0220
	ctx.lr = 0x83128750;
	sub_831A0220(ctx, base);
	// lbz r11,10(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r20,8(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x83128790
	if (ctx.cr0.eq) goto loc_83128790;
	// bctrl 
	ctx.lr = 0x8312877C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x830e3cf0
	ctx.lr = 0x8312878C;
	sub_830E3CF0(ctx, base);
	// b 0x831287a8
	goto loc_831287A8;
loc_83128790:
	// bctrl 
	ctx.lr = 0x83128794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830e3c68
	ctx.lr = 0x831287A8;
	sub_830E3C68(ctx, base);
loc_831287A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a20
	ctx.lr = 0x831287B4;
	sub_830F8A20(ctx, base);
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// stb r27,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r27.u8);
	// stw r20,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r20.u32);
	// stb r27,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r27.u8);
loc_831287C4:
	// lbz r11,10(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128804
	if (ctx.cr0.eq) goto loc_83128804;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83128804
	if (ctx.cr6.eq) goto loc_83128804;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128804
	if (ctx.cr0.eq) goto loc_83128804;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831332c8
	ctx.lr = 0x831287F8;
	sub_831332C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a10
	ctx.lr = 0x83128804;
	sub_830F8A10(ctx, base);
loc_83128804:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_83128808:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x831284f8
	if (ctx.cr6.lt) goto loc_831284F8;
loc_83128828:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8312882C:
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128834"))) PPC_WEAK_FUNC(sub_83128834);
PPC_FUNC_IMPL(__imp__sub_83128834) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830dd3e0
	ctx.lr = 0x83128854;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128864"))) PPC_WEAK_FUNC(sub_83128864);
PPC_FUNC_IMPL(__imp__sub_83128864) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830dd3e0
	ctx.lr = 0x83128884;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128894"))) PPC_WEAK_FUNC(sub_83128894);
PPC_FUNC_IMPL(__imp__sub_83128894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83128898"))) PPC_WEAK_FUNC(sub_83128898);
PPC_FUNC_IMPL(__imp__sub_83128898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14704(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14704);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x831288A8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r4,21(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// bl 0x830ec4a0
	ctx.lr = 0x831288C8;
	sub_830EC4A0(ctx, base);
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x830dd390
	ctx.lr = 0x831288E0;
	sub_830DD390(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83128900
	if (ctx.cr0.eq) goto loc_83128900;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x83140df0
	ctx.lr = 0x831288F8;
	sub_83140DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83128904
	goto loc_83128904;
loc_83128900:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_83128904:
	// stw r4,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r4.u32);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec8f8
	ctx.lr = 0x83128910;
	sub_830EC8F8(ctx, base);
	// lwz r4,512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// stw r27,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r27.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r4,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// beq cr6,0x83128960
	if (ctx.cr6.eq) goto loc_83128960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83128960:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312897c
	if (ctx.cr6.eq) goto loc_8312897C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312897C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312897C:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128998
	if (ctx.cr6.eq) goto loc_83128998;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83128998:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311ed88
	ctx.lr = 0x831289A0;
	sub_8311ED88(ctx, base);
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831289B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r27.u32);
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x8311d860
	ctx.lr = 0x831289D4;
	sub_8311D860(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r27.u8);
	// stb r11,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r11.u8);
	// stb r27,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r27.u8);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831289FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128a28
	if (ctx.cr0.eq) goto loc_83128A28;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83128A28:
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4868
	ctx.lr = 0x83128A4C;
	sub_830F4868(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x83128b04
	if (!ctx.cr0.eq) goto loc_83128B04;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,220(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x83128ac4
	if (ctx.cr0.eq) goto loc_83128AC4;
	// bctrl 
	ctx.lr = 0x83128A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,2156
	ctx.r5.s64 = 2156;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8311e9c0
	ctx.lr = 0x83128AB4;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83128AC4;
	sub_833A7198(ctx, base);
loc_83128AC4:
	// bctrl 
	ctx.lr = 0x83128AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2158
	ctx.r5.s64 = 2158;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8311e9c0
	ctx.lr = 0x83128AF4;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83128B04;
	sub_833A7198(ctx, base);
loc_83128B04:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f5368
	ctx.lr = 0x83128B10;
	sub_830F5368(ctx, base);
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128b34
	if (ctx.cr6.eq) goto loc_83128B34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
loc_83128B34:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x83128b54
	if (ctx.cr6.lt) goto loc_83128B54;
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// bl 0x8311faa0
	ctx.lr = 0x83128B48;
	sub_8311FAA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edb18
	ctx.lr = 0x83128B50;
	sub_830EDB18(ctx, base);
	// b 0x83128b5c
	goto loc_83128B5C;
loc_83128B54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edad0
	ctx.lr = 0x83128B5C;
	sub_830EDAD0(ctx, base);
loc_83128B5C:
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// bl 0x8311faa0
	ctx.lr = 0x83128B64;
	sub_8311FAA0(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831288A0"))) PPC_WEAK_FUNC(sub_831288A0);
PPC_FUNC_IMPL(__imp__sub_831288A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x831288A8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r4,21(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// bl 0x830ec4a0
	ctx.lr = 0x831288C8;
	sub_830EC4A0(ctx, base);
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x830dd390
	ctx.lr = 0x831288E0;
	sub_830DD390(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83128900
	if (ctx.cr0.eq) goto loc_83128900;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x83140df0
	ctx.lr = 0x831288F8;
	sub_83140DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83128904
	goto loc_83128904;
loc_83128900:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_83128904:
	// stw r4,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r4.u32);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec8f8
	ctx.lr = 0x83128910;
	sub_830EC8F8(ctx, base);
	// lwz r4,512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// stw r27,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r27.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r4,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// beq cr6,0x83128960
	if (ctx.cr6.eq) goto loc_83128960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83128960:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312897c
	if (ctx.cr6.eq) goto loc_8312897C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312897C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312897C:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128998
	if (ctx.cr6.eq) goto loc_83128998;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83128998:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311ed88
	ctx.lr = 0x831289A0;
	sub_8311ED88(ctx, base);
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831289B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r27.u32);
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x8311d860
	ctx.lr = 0x831289D4;
	sub_8311D860(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r27.u8);
	// stb r11,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r11.u8);
	// stb r27,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r27.u8);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831289FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128a28
	if (ctx.cr0.eq) goto loc_83128A28;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83128A28:
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// lbz r9,9(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4868
	ctx.lr = 0x83128A4C;
	sub_830F4868(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x83128b04
	if (!ctx.cr0.eq) goto loc_83128B04;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,220(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x83128ac4
	if (ctx.cr0.eq) goto loc_83128AC4;
	// bctrl 
	ctx.lr = 0x83128A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,2156
	ctx.r5.s64 = 2156;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8311e9c0
	ctx.lr = 0x83128AB4;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83128AC4;
	sub_833A7198(ctx, base);
loc_83128AC4:
	// bctrl 
	ctx.lr = 0x83128AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2158
	ctx.r5.s64 = 2158;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8311e9c0
	ctx.lr = 0x83128AF4;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83128B04;
	sub_833A7198(ctx, base);
loc_83128B04:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f5368
	ctx.lr = 0x83128B10;
	sub_830F5368(ctx, base);
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128b34
	if (ctx.cr6.eq) goto loc_83128B34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
loc_83128B34:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x83128b54
	if (ctx.cr6.lt) goto loc_83128B54;
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// bl 0x8311faa0
	ctx.lr = 0x83128B48;
	sub_8311FAA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edb18
	ctx.lr = 0x83128B50;
	sub_830EDB18(ctx, base);
	// b 0x83128b5c
	goto loc_83128B5C;
loc_83128B54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edad0
	ctx.lr = 0x83128B5C;
	sub_830EDAD0(ctx, base);
loc_83128B5C:
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// bl 0x8311faa0
	ctx.lr = 0x83128B64;
	sub_8311FAA0(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128B6C"))) PPC_WEAK_FUNC(sub_83128B6C);
PPC_FUNC_IMPL(__imp__sub_83128B6C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83128B8C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128B9C"))) PPC_WEAK_FUNC(sub_83128B9C);
PPC_FUNC_IMPL(__imp__sub_83128B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83128BA0"))) PPC_WEAK_FUNC(sub_83128BA0);
PPC_FUNC_IMPL(__imp__sub_83128BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14624(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14624);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x83128BB0;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// sth r27,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r27.u16);
	// addi r23,r3,128
	ctx.r23.s64 = ctx.r3.s64 + 128;
	// stb r27,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r27.u8);
	// ori r28,r11,32808
	ctx.r28.u64 = ctx.r11.u64 | 32808;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwzx r26,r11,r28
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x830f4f70
	ctx.lr = 0x83128BF8;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83128c4c
	if (ctx.cr0.eq) goto loc_83128C4C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef408
	ctx.lr = 0x83128C10;
	sub_830EF408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128c20
	if (!ctx.cr0.eq) goto loc_83128C20;
loc_83128C18:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831291cc
	goto loc_831291CC;
loc_83128C20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83128c44
	if (ctx.cr6.eq) goto loc_83128C44;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83128C44;
	sub_830EDFF8(ctx, base);
loc_83128C44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831291cc
	goto loc_831291CC;
loc_83128C4C:
	// addi r21,r30,224
	ctx.r21.s64 = ctx.r30.s64 + 224;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830e4258
	ctx.lr = 0x83128C58;
	sub_830E4258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r21,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r21.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128c90
	if (ctx.cr0.eq) goto loc_83128C90;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa338
	ctx.lr = 0x83128C8C;
	sub_830FA338(ctx, base);
	// b 0x83128cac
	goto loc_83128CAC;
loc_83128C90:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa120
	ctx.lr = 0x83128CAC;
	sub_830FA120(ctx, base);
loc_83128CAC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128d04
	if (!ctx.cr0.eq) goto loc_83128D04;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83128cd0
	if (!ctx.cr6.eq) goto loc_83128CD0;
	// li r4,226
	ctx.r4.s64 = 226;
	// bl 0x830edff8
	ctx.lr = 0x83128CCC;
	sub_830EDFF8(ctx, base);
	// b 0x83128cf4
	goto loc_83128CF4;
loc_83128CD0:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,310
	ctx.r4.s64 = 310;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128CF4;
	sub_830EE100(ctx, base);
loc_83128CF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830e4388
	ctx.lr = 0x83128D00;
	sub_830E4388(ctx, base);
	// b 0x83128c18
	goto loc_83128C18;
loc_83128D04:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f4f70
	ctx.lr = 0x83128D10;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128d44
	if (!ctx.cr0.eq) goto loc_83128D44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,229
	ctx.r4.s64 = 229;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128D44;
	sub_830EE100(ctx, base);
loc_83128D44:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83128d60
	if (ctx.cr6.eq) goto loc_83128D60;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83128D60;
	sub_830EDFF8(ctx, base);
loc_83128D60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// bl 0x83127050
	ctx.lr = 0x83128D7C;
	sub_83127050(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83128e08
	if (!ctx.cr0.eq) goto loc_83128E08;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83128dd8
	if (!ctx.cr0.eq) goto loc_83128DD8;
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83128dd8
	if (!ctx.cr0.eq) goto loc_83128DD8;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128e04
	if (ctx.cr0.eq) goto loc_83128E04;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e658
	ctx.lr = 0x83128DD4;
	sub_8311E658(ctx, base);
	// b 0x83128e04
	goto loc_83128E04;
loc_83128DD8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,227
	ctx.r4.s64 = 227;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128E04;
	sub_830EE100(ctx, base);
loc_83128E04:
	// b 0x83128cf4
	goto loc_83128CF4;
loc_83128E08:
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128e5c
	if (ctx.cr0.eq) goto loc_83128E5C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128e5c
	if (!ctx.cr0.eq) goto loc_83128E5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,298
	ctx.r4.s64 = 298;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128E5C;
	sub_830EE100(ctx, base);
loc_83128E5C:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83128e78
	if (!ctx.cr6.eq) goto loc_83128E78;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x83128e7c
	if (ctx.cr6.eq) goto loc_83128E7C;
loc_83128E78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83128E7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129088
	if (ctx.cr0.eq) goto loc_83129088;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83128ec0
	if (ctx.cr6.eq) goto loc_83128EC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,228
	ctx.r4.s64 = 228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128EBC;
	sub_830EE100(ctx, base);
	// b 0x83128cf4
	goto loc_83128CF4;
loc_83128EC0:
	// clrlwi. r26,r22,24
	ctx.r26.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x83128ed4
	if (ctx.cr0.eq) goto loc_83128ED4;
	// li r4,270
	ctx.r4.s64 = 270;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83128ED4;
	sub_830EDFF8(ctx, base);
loc_83128ED4:
	// lbz r24,9(r30)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addi r25,r31,116
	ctx.r25.s64 = ctx.r31.s64 + 116;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,24(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stb r24,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r24.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// bl 0x830f5ba8
	ctx.lr = 0x83128F10;
	sub_830F5BA8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bne 0x83128f84
	if (!ctx.cr0.eq) goto loc_83128F84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83128f44
	if (ctx.cr6.eq) goto loc_83128F44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x83128f48
	goto loc_83128F48;
loc_83128F44:
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
loc_83128F48:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,-16656
	ctx.r4.s64 = ctx.r9.s64 + -16656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,46
	ctx.r6.s64 = 46;
	// li r5,3155
	ctx.r5.s64 = 3155;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8311e9c0
	ctx.lr = 0x83128F74;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83128F84;
	sub_833A7198(ctx, base);
loc_83128F84:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f5368
	ctx.lr = 0x83128F90;
	sub_830F5368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128fd8
	if (!ctx.cr0.eq) goto loc_83128FD8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83128FB4;
	sub_830EE100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8312c778
	ctx.lr = 0x83128FC0;
	sub_8312C778(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
loc_83128FC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830e4388
	ctx.lr = 0x83128FD0;
	sub_830E4388(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831291cc
	goto loc_831291CC;
loc_83128FD8:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83129030
	if (ctx.cr6.eq) goto loc_83129030;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x83129030
	if (!ctx.cr6.gt) goto loc_83129030;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x830d6588
	ctx.lr = 0x83129010;
	sub_830D6588(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312902C;
	sub_830EE100(ctx, base);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
loc_83129030:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129058
	if (ctx.cr6.eq) goto loc_83129058;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x83129058
	if (!ctx.cr6.eq) goto loc_83129058;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129058:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef0a8
	ctx.lr = 0x83129064;
	sub_830EF0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129078
	if (ctx.cr0.eq) goto loc_83129078;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee8a8
	ctx.lr = 0x83129078;
	sub_830EE8A8(ctx, base);
loc_83129078:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8312c778
	ctx.lr = 0x83129084;
	sub_8312C778(ctx, base);
	// b 0x831291bc
	goto loc_831291BC;
loc_83129088:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312909C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x831290c0
	if (ctx.cr0.eq) goto loc_831290C0;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
	// stb r10,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83128fc4
	goto loc_83128FC4;
loc_831290C0:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f3db0
	ctx.lr = 0x831290E0;
	sub_830F3DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f5368
	ctx.lr = 0x831290F0;
	sub_830F5368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129114
	if (!ctx.cr0.eq) goto loc_83129114;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83129114;
	sub_830EE100(ctx, base);
loc_83129114:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83129168
	if (ctx.cr6.eq) goto loc_83129168;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x83129168
	if (!ctx.cr6.gt) goto loc_83129168;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x830d6588
	ctx.lr = 0x8312914C;
	sub_830D6588(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83129168;
	sub_830EE100(ctx, base);
loc_83129168:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129190
	if (ctx.cr6.eq) goto loc_83129190;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129190
	if (!ctx.cr0.eq) goto loc_83129190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129190:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef0a8
	ctx.lr = 0x8312919C;
	sub_830EF0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831291bc
	if (ctx.cr0.eq) goto loc_831291BC;
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831291B0;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x831291BC;
	sub_830ED2B8(ctx, base);
loc_831291BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830e4388
	ctx.lr = 0x831291C8;
	sub_830E4388(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831291CC:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128BA8"))) PPC_WEAK_FUNC(sub_83128BA8);
PPC_FUNC_IMPL(__imp__sub_83128BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x83128BB0;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// sth r27,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r27.u16);
	// addi r23,r3,128
	ctx.r23.s64 = ctx.r3.s64 + 128;
	// stb r27,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r27.u8);
	// ori r28,r11,32808
	ctx.r28.u64 = ctx.r11.u64 | 32808;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwzx r26,r11,r28
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x830f4f70
	ctx.lr = 0x83128BF8;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83128c4c
	if (ctx.cr0.eq) goto loc_83128C4C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef408
	ctx.lr = 0x83128C10;
	sub_830EF408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128c20
	if (!ctx.cr0.eq) goto loc_83128C20;
loc_83128C18:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831291cc
	goto loc_831291CC;
loc_83128C20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83128c44
	if (ctx.cr6.eq) goto loc_83128C44;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83128C44;
	sub_830EDFF8(ctx, base);
loc_83128C44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831291cc
	goto loc_831291CC;
loc_83128C4C:
	// addi r21,r30,224
	ctx.r21.s64 = ctx.r30.s64 + 224;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830e4258
	ctx.lr = 0x83128C58;
	sub_830E4258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r21,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r21.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128c90
	if (ctx.cr0.eq) goto loc_83128C90;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa338
	ctx.lr = 0x83128C8C;
	sub_830FA338(ctx, base);
	// b 0x83128cac
	goto loc_83128CAC;
loc_83128C90:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x830fa120
	ctx.lr = 0x83128CAC;
	sub_830FA120(ctx, base);
loc_83128CAC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128d04
	if (!ctx.cr0.eq) goto loc_83128D04;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83128cd0
	if (!ctx.cr6.eq) goto loc_83128CD0;
	// li r4,226
	ctx.r4.s64 = 226;
	// bl 0x830edff8
	ctx.lr = 0x83128CCC;
	sub_830EDFF8(ctx, base);
	// b 0x83128cf4
	goto loc_83128CF4;
loc_83128CD0:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,310
	ctx.r4.s64 = 310;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128CF4;
	sub_830EE100(ctx, base);
loc_83128CF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830e4388
	ctx.lr = 0x83128D00;
	sub_830E4388(ctx, base);
	// b 0x83128c18
	goto loc_83128C18;
loc_83128D04:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f4f70
	ctx.lr = 0x83128D10;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128d44
	if (!ctx.cr0.eq) goto loc_83128D44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,229
	ctx.r4.s64 = 229;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128D44;
	sub_830EE100(ctx, base);
loc_83128D44:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83128d60
	if (ctx.cr6.eq) goto loc_83128D60;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83128D60;
	sub_830EDFF8(ctx, base);
loc_83128D60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// bl 0x83127050
	ctx.lr = 0x83128D7C;
	sub_83127050(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83128e08
	if (!ctx.cr0.eq) goto loc_83128E08;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83128dd8
	if (!ctx.cr0.eq) goto loc_83128DD8;
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83128dd8
	if (!ctx.cr0.eq) goto loc_83128DD8;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128e04
	if (ctx.cr0.eq) goto loc_83128E04;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e658
	ctx.lr = 0x83128DD4;
	sub_8311E658(ctx, base);
	// b 0x83128e04
	goto loc_83128E04;
loc_83128DD8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,227
	ctx.r4.s64 = 227;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128E04;
	sub_830EE100(ctx, base);
loc_83128E04:
	// b 0x83128cf4
	goto loc_83128CF4;
loc_83128E08:
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83128e5c
	if (ctx.cr0.eq) goto loc_83128E5C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128e5c
	if (!ctx.cr0.eq) goto loc_83128E5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,298
	ctx.r4.s64 = 298;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128E5C;
	sub_830EE100(ctx, base);
loc_83128E5C:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83128e78
	if (!ctx.cr6.eq) goto loc_83128E78;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x83128e7c
	if (ctx.cr6.eq) goto loc_83128E7C;
loc_83128E78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83128E7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129088
	if (ctx.cr0.eq) goto loc_83129088;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83128ec0
	if (ctx.cr6.eq) goto loc_83128EC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,228
	ctx.r4.s64 = 228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83128EBC;
	sub_830EE100(ctx, base);
	// b 0x83128cf4
	goto loc_83128CF4;
loc_83128EC0:
	// clrlwi. r26,r22,24
	ctx.r26.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x83128ed4
	if (ctx.cr0.eq) goto loc_83128ED4;
	// li r4,270
	ctx.r4.s64 = 270;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83128ED4;
	sub_830EDFF8(ctx, base);
loc_83128ED4:
	// lbz r24,9(r30)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addi r25,r31,116
	ctx.r25.s64 = ctx.r31.s64 + 116;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,24(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stb r24,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r24.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// bl 0x830f5ba8
	ctx.lr = 0x83128F10;
	sub_830F5BA8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bne 0x83128f84
	if (!ctx.cr0.eq) goto loc_83128F84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83128f44
	if (ctx.cr6.eq) goto loc_83128F44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83128F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x83128f48
	goto loc_83128F48;
loc_83128F44:
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
loc_83128F48:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,-16656
	ctx.r4.s64 = ctx.r9.s64 + -16656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,46
	ctx.r6.s64 = 46;
	// li r5,3155
	ctx.r5.s64 = 3155;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8311e9c0
	ctx.lr = 0x83128F74;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83128F84;
	sub_833A7198(ctx, base);
loc_83128F84:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f5368
	ctx.lr = 0x83128F90;
	sub_830F5368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83128fd8
	if (!ctx.cr0.eq) goto loc_83128FD8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83128FB4;
	sub_830EE100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8312c778
	ctx.lr = 0x83128FC0;
	sub_8312C778(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
loc_83128FC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830e4388
	ctx.lr = 0x83128FD0;
	sub_830E4388(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831291cc
	goto loc_831291CC;
loc_83128FD8:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83129030
	if (ctx.cr6.eq) goto loc_83129030;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x83129030
	if (!ctx.cr6.gt) goto loc_83129030;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x830d6588
	ctx.lr = 0x83129010;
	sub_830D6588(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312902C;
	sub_830EE100(ctx, base);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
loc_83129030:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129058
	if (ctx.cr6.eq) goto loc_83129058;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x83129058
	if (!ctx.cr6.eq) goto loc_83129058;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129058:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef0a8
	ctx.lr = 0x83129064;
	sub_830EF0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129078
	if (ctx.cr0.eq) goto loc_83129078;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee8a8
	ctx.lr = 0x83129078;
	sub_830EE8A8(ctx, base);
loc_83129078:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8312c778
	ctx.lr = 0x83129084;
	sub_8312C778(ctx, base);
	// b 0x831291bc
	goto loc_831291BC;
loc_83129088:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312909C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x831290c0
	if (ctx.cr0.eq) goto loc_831290C0;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
	// stb r10,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83128fc4
	goto loc_83128FC4;
loc_831290C0:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f3db0
	ctx.lr = 0x831290E0;
	sub_830F3DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f5368
	ctx.lr = 0x831290F0;
	sub_830F5368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129114
	if (!ctx.cr0.eq) goto loc_83129114;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83129114;
	sub_830EE100(ctx, base);
loc_83129114:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83129168
	if (ctx.cr6.eq) goto loc_83129168;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x83129168
	if (!ctx.cr6.gt) goto loc_83129168;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x830d6588
	ctx.lr = 0x8312914C;
	sub_830D6588(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// li r4,172
	ctx.r4.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x83129168;
	sub_830EE100(ctx, base);
loc_83129168:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129190
	if (ctx.cr6.eq) goto loc_83129190;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129190
	if (!ctx.cr0.eq) goto loc_83129190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129190:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef0a8
	ctx.lr = 0x8312919C;
	sub_830EF0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831291bc
	if (ctx.cr0.eq) goto loc_831291BC;
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x831291B0;
	sub_830EDFF8(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x831291BC;
	sub_830ED2B8(ctx, base);
loc_831291BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830e4388
	ctx.lr = 0x831291C8;
	sub_830E4388(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831291CC:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831291D4"))) PPC_WEAK_FUNC(sub_831291D4);
PPC_FUNC_IMPL(__imp__sub_831291D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830d9068
	ctx.lr = 0x831291EC;
	sub_830D9068(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831291FC"))) PPC_WEAK_FUNC(sub_831291FC);
PPC_FUNC_IMPL(__imp__sub_831291FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830f4658
	ctx.lr = 0x83129214;
	sub_830F4658(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129224"))) PPC_WEAK_FUNC(sub_83129224);
PPC_FUNC_IMPL(__imp__sub_83129224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129228"))) PPC_WEAK_FUNC(sub_83129228);
PPC_FUNC_IMPL(__imp__sub_83129228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14312(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14312);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x83129240;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,17792
	ctx.r11.s64 = ctx.r11.s64 + 17792;
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// bl 0x830ec4a0
	ctx.lr = 0x83129290;
	sub_830EC4A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stb r29,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r29,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r29.u32);
	// bne cr6,0x831292c0
	if (!ctx.cr6.eq) goto loc_831292C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
loc_831292C0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r29,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r29.u8);
	// extsh. r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r29,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r29.u8);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stb r10,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r10.u8);
	// bne 0x83129300
	if (!ctx.cr0.eq) goto loc_83129300;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83127bb0
	ctx.lr = 0x831292EC;
	sub_83127BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_83129300:
	// b 0x8312930c
	sub_8312930C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129230"))) PPC_WEAK_FUNC(sub_83129230);
PPC_FUNC_IMPL(__imp__sub_83129230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x83129240;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,17792
	ctx.r11.s64 = ctx.r11.s64 + 17792;
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// bl 0x830ec4a0
	ctx.lr = 0x83129290;
	sub_830EC4A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stb r29,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r29,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r29.u32);
	// bne cr6,0x831292c0
	if (!ctx.cr6.eq) goto loc_831292C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
loc_831292C0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r29,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r29.u8);
	// extsh. r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r29,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r29.u8);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stb r10,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r10.u8);
	// bne 0x83129300
	if (!ctx.cr0.eq) goto loc_83129300;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83127bb0
	ctx.lr = 0x831292EC;
	sub_83127BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_83129300:
	// b 0x8312930c
	goto loc_8312930C;
	// b 0x8312930c
	goto loc_8312930C;
	// b 0x8312930c
	goto loc_8312930C;
loc_8312930C:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83129334
	if (ctx.cr6.eq) goto loc_83129334;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83129334
	if (ctx.cr6.eq) goto loc_83129334;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83129334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129334:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129304"))) PPC_WEAK_FUNC(sub_83129304);
PPC_FUNC_IMPL(__imp__sub_83129304) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312930c
	sub_8312930C(ctx, base);
	return;
	// b 0x8312930c
	sub_8312930C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312930C"))) PPC_WEAK_FUNC(sub_8312930C);
PPC_FUNC_IMPL(__imp__sub_8312930C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83129334
	if (ctx.cr6.eq) goto loc_83129334;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83129334
	if (ctx.cr6.eq) goto loc_83129334;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83129334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129334:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129340"))) PPC_WEAK_FUNC(sub_83129340);
PPC_FUNC_IMPL(__imp__sub_83129340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14312(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14312);
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
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312937C;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14312(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14312);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-27900
	ctx.r3.s64 = ctx.r3.s64 + -27900;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129348"))) PPC_WEAK_FUNC(sub_83129348);
PPC_FUNC_IMPL(__imp__sub_83129348) {
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
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312937C;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83129384"))) PPC_WEAK_FUNC(sub_83129384);
PPC_FUNC_IMPL(__imp__sub_83129384) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-27900
	ctx.r3.s64 = ctx.r3.s64 + -27900;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129398"))) PPC_WEAK_FUNC(sub_83129398);
PPC_FUNC_IMPL(__imp__sub_83129398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14312(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14312);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-27896
	ctx.r3.s64 = ctx.r3.s64 + -27896;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831293A0"))) PPC_WEAK_FUNC(sub_831293A0);
PPC_FUNC_IMPL(__imp__sub_831293A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-27896
	ctx.r3.s64 = ctx.r3.s64 + -27896;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831293B4"))) PPC_WEAK_FUNC(sub_831293B4);
PPC_FUNC_IMPL(__imp__sub_831293B4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14312(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14312);
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
	// lwz r28,196(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x831293E4;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8312940c
	if (!ctx.cr0.eq) goto loc_8312940C;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x83129458
	goto loc_83129458;
loc_8312940C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x83129414;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x83129464
	if (ctx.cr6.lt) goto loc_83129464;
	// bctrl 
	ctx.lr = 0x83129438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83129458:
	// bl 0x830ee370
	ctx.lr = 0x8312945C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83129490
	goto loc_83129490;
loc_83129464:
	// bctrl 
	ctx.lr = 0x83129468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312948C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83129490:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r3,r3,-27892
	ctx.r3.s64 = ctx.r3.s64 + -27892;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831293BC"))) PPC_WEAK_FUNC(sub_831293BC);
PPC_FUNC_IMPL(__imp__sub_831293BC) {
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
	// lwz r28,196(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x831293E4;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8312940c
	if (!ctx.cr0.eq) goto loc_8312940C;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x83129458
	goto loc_83129458;
loc_8312940C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x83129414;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x83129464
	if (ctx.cr6.lt) goto loc_83129464;
	// bctrl 
	ctx.lr = 0x83129438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83129458:
	// bl 0x830ee370
	ctx.lr = 0x8312945C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83129490
	goto loc_83129490;
loc_83129464:
	// bctrl 
	ctx.lr = 0x83129468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312948C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83129490:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r3,r3,-27892
	ctx.r3.s64 = ctx.r3.s64 + -27892;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831294A8"))) PPC_WEAK_FUNC(sub_831294A8);
PPC_FUNC_IMPL(__imp__sub_831294A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-14312(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14312);
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
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x831294E4;
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319be68
	ctx.lr = 0x831294FC;
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

__attribute__((alias("__imp__sub_831294B0"))) PPC_WEAK_FUNC(sub_831294B0);
PPC_FUNC_IMPL(__imp__sub_831294B0) {
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
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x831294E4;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_831294E4"))) PPC_WEAK_FUNC(sub_831294E4);
PPC_FUNC_IMPL(__imp__sub_831294E4) {
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
	ctx.lr = 0x831294FC;
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

__attribute__((alias("__imp__sub_8312950C"))) PPC_WEAK_FUNC(sub_8312950C);
PPC_FUNC_IMPL(__imp__sub_8312950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129510"))) PPC_WEAK_FUNC(sub_83129510);
PPC_FUNC_IMPL(__imp__sub_83129510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83129518;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83129544
	if (ctx.cr6.lt) goto loc_83129544;
	// bl 0x8317eef8
	ctx.lr = 0x83129544;
	sub_8317EEF8(ctx, base);
loc_83129544:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8315d680
	ctx.lr = 0x83129558;
	sub_8315D680(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83129598
	if (ctx.cr0.eq) goto loc_83129598;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83129588
	if (ctx.cr0.eq) goto loc_83129588;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83129588
	if (ctx.cr6.eq) goto loc_83129588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f8ae8
	ctx.lr = 0x83129580;
	sub_830F8AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83129588;
	sub_830DD3E0(ctx, base);
loc_83129588:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// b 0x831295fc
	goto loc_831295FC;
loc_83129598:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831295B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831295e0
	if (ctx.cr0.eq) goto loc_831295E0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x831295e4
	goto loc_831295E4;
loc_831295E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831295E4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_831295FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129604"))) PPC_WEAK_FUNC(sub_83129604);
PPC_FUNC_IMPL(__imp__sub_83129604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129608"))) PPC_WEAK_FUNC(sub_83129608);
PPC_FUNC_IMPL(__imp__sub_83129608) {
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
	// lwz r3,504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129634
	if (ctx.cr6.eq) goto loc_83129634;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83165830
	ctx.lr = 0x83129634;
	sub_83165830(ctx, base);
loc_83129634:
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129654
	if (ctx.cr6.eq) goto loc_83129654;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129654:
	// lwz r30,516(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83129670
	if (ctx.cr6.eq) goto loc_83129670;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83140358
	ctx.lr = 0x83129668;
	sub_83140358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83129670;
	sub_830DD3E0(ctx, base);
loc_83129670:
	// lwz r30,524(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8312968c
	if (ctx.cr6.eq) goto loc_8312968C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311fc80
	ctx.lr = 0x83129684;
	sub_8311FC80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8312968C;
	sub_830DD3E0(ctx, base);
loc_8312968C:
	// lwz r31,528(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831296a8
	if (ctx.cr6.eq) goto loc_831296A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311fc80
	ctx.lr = 0x831296A0;
	sub_8311FC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831296A8;
	sub_830DD3E0(ctx, base);
loc_831296A8:
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

__attribute__((alias("__imp__sub_831296C0"))) PPC_WEAK_FUNC(sub_831296C0);
PPC_FUNC_IMPL(__imp__sub_831296C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x831296C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8312973c
	if (!ctx.cr6.gt) goto loc_8312973C;
loc_831296F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83164c98
	ctx.lr = 0x83129700;
	sub_83164C98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x831332c8
	ctx.lr = 0x8312971C;
	sub_831332C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a10
	ctx.lr = 0x83129728;
	sub_830F8A10(ctx, base);
	// lwz r3,504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831296f8
	if (ctx.cr6.lt) goto loc_831296F8;
loc_8312973C:
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83126f38
	ctx.lr = 0x83129754;
	sub_83126F38(ctx, base);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x83129864
	if (!ctx.cr6.gt) goto loc_83129864;
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_83129764:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831a0220
	ctx.lr = 0x83129770;
	sub_831A0220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x831297f8
	if (!ctx.cr6.eq) goto loc_831297F8;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83129858
	if (!ctx.cr6.gt) goto loc_83129858;
loc_83129788:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831a0220
	ctx.lr = 0x83129794;
	sub_831A0220(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x831297e8
	if (!ctx.cr6.eq) goto loc_831297E8;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x830d8d28
	ctx.lr = 0x831297B8;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831297e8
	if (ctx.cr0.eq) goto loc_831297E8;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x831297C8;
	sub_830E3560(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x831297E8;
	sub_830EE100(ctx, base);
loc_831297E8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x83129788
	if (ctx.cr6.lt) goto loc_83129788;
	// b 0x83129858
	goto loc_83129858;
loc_831297F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x83178e18
	ctx.lr = 0x83129810;
	sub_83178E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83129840
	if (ctx.cr0.eq) goto loc_83129840;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x83129820;
	sub_830E3560(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83129840;
	sub_830EE100(ctx, base);
loc_83129840:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x83129510
	ctx.lr = 0x83129858;
	sub_83129510(ctx, base);
loc_83129858:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x83129764
	if (ctx.cr6.lt) goto loc_83129764;
loc_83129864:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312986C"))) PPC_WEAK_FUNC(sub_8312986C);
PPC_FUNC_IMPL(__imp__sub_8312986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129870"))) PPC_WEAK_FUNC(sub_83129870);
PPC_FUNC_IMPL(__imp__sub_83129870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13932(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13932);
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
	// bl 0x830f1388
	ctx.lr = 0x831298A4;
	sub_830F1388(ctx, base);
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-27128
	ctx.r10.s64 = ctx.r10.s64 + -27128;
	// addi r9,r9,-14072
	ctx.r9.s64 = ctx.r9.s64 + -14072;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// stw r11,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r11,508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 508, ctx.r11.u32);
	// stw r11,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r11.u32);
	// stw r11,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r11.u32);
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
	// stw r11,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r11.u32);
	// stw r11,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r11.u32);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83128128
	ctx.lr = 0x831298F4;
	sub_83128128(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_83129878"))) PPC_WEAK_FUNC(sub_83129878);
PPC_FUNC_IMPL(__imp__sub_83129878) {
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
	// bl 0x830f1388
	ctx.lr = 0x831298A4;
	sub_830F1388(ctx, base);
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-27128
	ctx.r10.s64 = ctx.r10.s64 + -27128;
	// addi r9,r9,-14072
	ctx.r9.s64 = ctx.r9.s64 + -14072;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// stw r11,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r11,508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 508, ctx.r11.u32);
	// stw r11,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r11.u32);
	// stw r11,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r11.u32);
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
	// stw r11,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r11.u32);
	// stw r11,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r11.u32);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83128128
	ctx.lr = 0x831298F4;
	sub_83128128(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_83129914"))) PPC_WEAK_FUNC(sub_83129914);
PPC_FUNC_IMPL(__imp__sub_83129914) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13932(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13932);
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x83129950;
	sub_833A7198(ctx, base);
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
	// bl 0x830f1810
	ctx.lr = 0x83129968;
	sub_830F1810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312991C"))) PPC_WEAK_FUNC(sub_8312991C);
PPC_FUNC_IMPL(__imp__sub_8312991C) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x83129950;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83129950"))) PPC_WEAK_FUNC(sub_83129950);
PPC_FUNC_IMPL(__imp__sub_83129950) {
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
	// bl 0x830f1810
	ctx.lr = 0x83129968;
	sub_830F1810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129978"))) PPC_WEAK_FUNC(sub_83129978);
PPC_FUNC_IMPL(__imp__sub_83129978) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319be68
	ctx.lr = 0x83129990;
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

__attribute__((alias("__imp__sub_831299A0"))) PPC_WEAK_FUNC(sub_831299A0);
PPC_FUNC_IMPL(__imp__sub_831299A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-5516
	ctx.r3.s64 = ctx.r11.s64 + -5516;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831299AC"))) PPC_WEAK_FUNC(sub_831299AC);
PPC_FUNC_IMPL(__imp__sub_831299AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831299B0"))) PPC_WEAK_FUNC(sub_831299B0);
PPC_FUNC_IMPL(__imp__sub_831299B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13856(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13856);
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14072
	ctx.r11.s64 = ctx.r11.s64 + -14072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x83129608
	ctx.lr = 0x831299E8;
	sub_83129608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1810
	ctx.lr = 0x831299F0;
	sub_830F1810(ctx, base);
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

__attribute__((alias("__imp__sub_831299B8"))) PPC_WEAK_FUNC(sub_831299B8);
PPC_FUNC_IMPL(__imp__sub_831299B8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14072
	ctx.r11.s64 = ctx.r11.s64 + -14072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x83129608
	ctx.lr = 0x831299E8;
	sub_83129608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1810
	ctx.lr = 0x831299F0;
	sub_830F1810(ctx, base);
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

__attribute__((alias("__imp__sub_83129A08"))) PPC_WEAK_FUNC(sub_83129A08);
PPC_FUNC_IMPL(__imp__sub_83129A08) {
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
	// bl 0x830f1810
	ctx.lr = 0x83129A20;
	sub_830F1810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129A30"))) PPC_WEAK_FUNC(sub_83129A30);
PPC_FUNC_IMPL(__imp__sub_83129A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13768(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13768);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x83129A40;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-304
	ctx.r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r4,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r4.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r29,r3,320
	ctx.r29.s64 = ctx.r3.s64 + 320;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r19,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r19.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// sth r19,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r19.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// beq 0x83129a98
	if (ctx.cr0.eq) goto loc_83129A98;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// bl 0x830fa338
	ctx.lr = 0x83129A94;
	sub_830FA338(ctx, base);
	// b 0x83129aa0
	goto loc_83129AA0;
loc_83129A98:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fa120
	ctx.lr = 0x83129AA0;
	sub_830FA120(ctx, base);
loc_83129AA0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bne 0x83129b04
	if (!ctx.cr0.eq) goto loc_83129B04;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x83129ac4
	if (!ctx.cr6.eq) goto loc_83129AC4;
	// li r4,183
	ctx.r4.s64 = 183;
	// bl 0x830edff8
	ctx.lr = 0x83129AC0;
	sub_830EDFF8(ctx, base);
	// b 0x83129af0
	goto loc_83129AF0;
loc_83129AC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,308
	ctx.r4.s64 = 308;
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83129AF0;
	sub_830EE100(ctx, base);
loc_83129AF0:
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x83129AFC;
	sub_830ED2B8(ctx, base);
loc_83129AFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312a508
	goto loc_8312A508;
loc_83129B04:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,472(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r19,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r19.u8);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// rlwinm r24,r9,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r27,24(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stb r24,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r24.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x83129bd8
	if (!ctx.cr0.eq) goto loc_83129BD8;
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8311f228
	ctx.lr = 0x83129B74;
	sub_8311F228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83129b88
	if (ctx.cr0.eq) goto loc_83129B88;
	// lwz r22,0(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x83129bd8
	if (!ctx.cr6.eq) goto loc_83129BD8;
loc_83129B88:
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x830dd390
	ctx.lr = 0x83129B98;
	sub_830DD390(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83129bc0
	if (ctx.cr0.eq) goto loc_83129BC0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83175008
	ctx.lr = 0x83129BB8;
	sub_83175008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83129bc4
	goto loc_83129BC4;
loc_83129BC0:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_83129BC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// bl 0x8311f668
	ctx.lr = 0x83129BD4;
	sub_8311F668(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
loc_83129BD8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83129c38
	if (ctx.cr0.eq) goto loc_83129C38;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129bf8
	if (ctx.cr0.eq) goto loc_83129BF8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r11.u32);
	// b 0x83129c04
	goto loc_83129C04;
loc_83129BF8:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83129c20
	if (ctx.cr6.eq) goto loc_83129C20;
loc_83129C04:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8311e658
	ctx.lr = 0x83129C20;
	sub_8311E658(ctx, base);
loc_83129C20:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129C38:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r30,432
	ctx.r28.s64 = ctx.r30.s64 + 432;
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8311dd68
	ctx.lr = 0x83129C5C;
	sub_8311DD68(ctx, base);
	// clrlwi. r25,r24,24
	ctx.r25.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r25,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r25.u32);
	// beq 0x83129ca8
	if (ctx.cr0.eq) goto loc_83129CA8;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r11.u32);
	// beq 0x83129cc4
	if (ctx.cr0.eq) goto loc_83129CC4;
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83129cc4
	if (ctx.cr6.eq) goto loc_83129CC4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83129C90;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129cc4
	if (!ctx.cr0.eq) goto loc_83129CC4;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x83129CA4;
	sub_8311E528(ctx, base);
	// b 0x83129cc4
	goto loc_83129CC4;
loc_83129CA8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83129cc4
	if (ctx.cr0.eq) goto loc_83129CC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311d558
	ctx.lr = 0x83129CC4;
	sub_8311D558(ctx, base);
loc_83129CC4:
	// addi r21,r30,128
	ctx.r21.s64 = ctx.r30.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83129CD4;
	sub_830F50E0(ctx, base);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// ori r18,r6,32852
	ctx.r18.u64 = ctx.r6.u64 | 32852;
	// addi r20,r9,-5740
	ctx.r20.s64 = ctx.r9.s64 + -5740;
	// addi r15,r8,-18456
	ctx.r15.s64 = ctx.r8.s64 + -18456;
	// addi r14,r7,-13800
	ctx.r14.s64 = ctx.r7.s64 + -13800;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r16,r11,-5980
	ctx.r16.s64 = ctx.r11.s64 + -5980;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r10,r10,-6224
	ctx.r10.s64 = ctx.r10.s64 + -6224;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// b 0x83129d2c
	goto loc_83129D2C;
loc_83129D28:
	// lwz r26,332(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
loc_83129D2C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f08
	ctx.lr = 0x83129D34;
	sub_830F4F08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83129d90
	if (ctx.cr6.eq) goto loc_83129D90;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x83129d90
	if (ctx.cr6.eq) goto loc_83129D90;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x83129d90
	if (ctx.cr6.eq) goto loc_83129D90;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129d84
	if (ctx.cr0.eq) goto loc_83129D84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83129D74;
	sub_830F50E0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f08
	ctx.lr = 0x83129D7C;
	sub_830F4F08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83129d90
	goto loc_83129D90;
loc_83129D84:
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83129D90;
	sub_830EDFF8(ctx, base);
loc_83129D90:
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8312a25c
	if (!ctx.cr0.eq) goto loc_8312A25C;
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// addi r26,r30,236
	ctx.r26.s64 = ctx.r30.s64 + 236;
	// stw r19,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r19.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// sth r19,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r19.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// beq 0x83129ddc
	if (ctx.cr0.eq) goto loc_83129DDC;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// bl 0x830fa338
	ctx.lr = 0x83129DD8;
	sub_830FA338(ctx, base);
	// b 0x83129de4
	goto loc_83129DE4;
loc_83129DDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fa120
	ctx.lr = 0x83129DE4;
	sub_830FA120(ctx, base);
loc_83129DE4:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x8312a2bc
	if (ctx.cr0.eq) goto loc_8312A2BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830ed900
	ctx.lr = 0x83129DF8;
	sub_830ED900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129e50
	if (!ctx.cr0.eq) goto loc_83129E50;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83129E0C;
	sub_830EDFF8(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f5218
	ctx.lr = 0x83129E18;
	sub_830F5218(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x83129d28
	if (ctx.cr6.eq) goto loc_83129D28;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x83129d28
	if (ctx.cr6.eq) goto loc_83129D28;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x83129e50
	if (ctx.cr6.eq) goto loc_83129E50;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x83129e50
	if (ctx.cr6.eq) goto loc_83129E50;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8312a310
	if (ctx.cr0.eq) goto loc_8312A310;
loc_83129E50:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r27,24(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83175888
	ctx.lr = 0x83129E74;
	sub_83175888(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83129E84;
	sub_830F50E0(ctx, base);
	// addi r24,r30,264
	ctx.r24.s64 = ctx.r30.s64 + 264;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83125be8
	ctx.lr = 0x83129E9C;
	sub_83125BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129ee4
	if (!ctx.cr0.eq) goto loc_83129EE4;
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83129EB0;
	sub_830EDFF8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f5218
	ctx.lr = 0x83129EBC;
	sub_830F5218(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x83129ee4
	if (ctx.cr6.eq) goto loc_83129EE4;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x83129ee4
	if (ctx.cr6.eq) goto loc_83129EE4;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8312a310
	if (ctx.cr0.eq) goto loc_8312A310;
loc_83129EE4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r9.u32, ctx.xer);
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r23,24(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// blt cr6,0x83129f48
	if (ctx.cr6.lt) goto loc_83129F48;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83129F14;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83129f30
	if (ctx.cr0.eq) goto loc_83129F30;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830f8968
	ctx.lr = 0x83129F28;
	sub_830F8968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83129f34
	goto loc_83129F34;
loc_83129F30:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_83129F34:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// bl 0x830f4660
	ctx.lr = 0x83129F44;
	sub_830F4660(ctx, base);
	// b 0x83129f5c
	goto loc_83129F5C;
loc_83129F48:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x831a0220
	ctx.lr = 0x83129F54;
	sub_831A0220(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_83129F5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a0b4
	if (ctx.cr0.eq) goto loc_8312A0B4;
	// beq cr6,0x83129f80
	if (ctx.cr6.eq) goto loc_83129F80;
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x83129f84
	goto loc_83129F84;
loc_83129F80:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_83129F84:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x830e3cf0
	ctx.lr = 0x83129F94;
	sub_830E3CF0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a20
	ctx.lr = 0x83129FA0;
	sub_830F8A20(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stb r19,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r19.u8);
	// stw r19,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r19.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r27,24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// beq cr6,0x8312a028
	if (ctx.cr6.eq) goto loc_8312A028;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a028
	if (ctx.cr0.eq) goto loc_8312A028;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830d8d28
	ctx.lr = 0x83129FD8;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129ff0
	if (ctx.cr0.eq) goto loc_83129FF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x830f8a10
	ctx.lr = 0x83129FEC;
	sub_830F8A10(ctx, base);
	// b 0x8312a050
	goto loc_8312A050;
loc_83129FF0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83129FFC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a018
	if (ctx.cr0.eq) goto loc_8312A018;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830f8a10
	ctx.lr = 0x8312A010;
	sub_830F8A10(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x8312a040
	goto loc_8312A040;
loc_8312A018:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r3,504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// bl 0x831001e0
	ctx.lr = 0x8312A024;
	sub_831001E0(ctx, base);
	// b 0x8312a050
	goto loc_8312A050;
loc_8312A028:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x830d8d28
	ctx.lr = 0x8312A034;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a050
	if (ctx.cr0.eq) goto loc_8312A050;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_8312A040:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83125a90
	ctx.lr = 0x8312A050;
	sub_83125A90(ctx, base);
loc_8312A050:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8312a1b4
	if (ctx.cr6.eq) goto loc_8312A1B4;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x8312A068;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312a07c
	if (ctx.cr0.eq) goto loc_8312A07C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312a09c
	if (!ctx.cr6.eq) goto loc_8312A09C;
loc_8312A07C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed968
	ctx.lr = 0x8312A084;
	sub_830ED968(ctx, base);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// b 0x8312a188
	goto loc_8312A188;
loc_8312A09C:
	// lwz r10,520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8312a1b4
	if (!ctx.cr6.lt) goto loc_8312A1B4;
loc_8312A0AC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8312a1b4
	goto loc_8312A1B4;
loc_8312A0B4:
	// beq cr6,0x8312a0c0
	if (ctx.cr6.eq) goto loc_8312A0C0;
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x8312a0c4
	goto loc_8312A0C4;
loc_8312A0C0:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_8312A0C4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x830e3c68
	ctx.lr = 0x8312A0D8;
	sub_830E3C68(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a20
	ctx.lr = 0x8312A0E4;
	sub_830F8A20(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stb r19,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r19.u8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r19,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r19.u32);
	// beq cr6,0x8312a158
	if (ctx.cr6.eq) goto loc_8312A158;
	// addi r5,r31,116
	ctx.r5.s64 = ctx.r31.s64 + 116;
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x8312A108;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312a07c
	if (ctx.cr0.eq) goto loc_8312A07C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312a07c
	if (ctx.cr6.eq) goto loc_8312A07C;
	// lwz r10,520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8312a0ac
	if (ctx.cr6.lt) goto loc_8312A0AC;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A134;
	sub_830E3560(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x8312a1a0
	goto loc_8312A1A0;
loc_8312A158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a08
	ctx.lr = 0x8312A160;
	sub_830F8A08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x8312A174;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8312a190
	if (!ctx.cr0.eq) goto loc_8312A190;
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8312A188:
	// bl 0x83104570
	ctx.lr = 0x8312A18C;
	sub_83104570(ctx, base);
	// b 0x8312a1b4
	goto loc_8312A1B4;
loc_8312A190:
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A198;
	sub_830E3560(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8312A1A0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312A1B4;
	sub_830EE100(ctx, base);
loc_8312A1B4:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a234
	if (ctx.cr0.eq) goto loc_8312A234;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8312a204
	if (ctx.cr6.eq) goto loc_8312A204;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8312a234
	goto loc_8312A234;
loc_8312A204:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x8311e658
	ctx.lr = 0x8312A234;
	sub_8311E658(ctx, base);
loc_8312A234:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a20
	ctx.lr = 0x8312A240;
	sub_830F8A20(ctx, base);
	// lwz r25,104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r28,108(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r27,88(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lbz r24,80(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// lbz r23,81(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// b 0x83129d28
	goto loc_83129D28;
loc_8312A25C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312a340
	if (ctx.cr6.eq) goto loc_8312A340;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x8312a36c
	if (ctx.cr6.eq) goto loc_8312A36C;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x8312a44c
	if (ctx.cr6.eq) goto loc_8312A44C;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x8312a38c
	if (ctx.cr6.eq) goto loc_8312A38C;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x8312a28c
	if (ctx.cr6.eq) goto loc_8312A28C;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x83129d2c
	if (!ctx.cr6.eq) goto loc_83129D2C;
loc_8312A28C:
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312A298;
	sub_830EDFF8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x8312A2A0;
	sub_830F4DD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f5160
	ctx.lr = 0x8312A2AC;
	sub_830F5160(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x8312A2B8;
	sub_830F50E0(ctx, base);
	// b 0x83129d2c
	goto loc_83129D2C;
loc_8312A2BC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312a2d4
	if (!ctx.cr6.eq) goto loc_8312A2D4;
	// li r4,174
	ctx.r4.s64 = 174;
	// bl 0x830edff8
	ctx.lr = 0x8312A2D0;
	sub_830EDFF8(ctx, base);
	// b 0x8312a300
	goto loc_8312A300;
loc_8312A2D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,309
	ctx.r4.s64 = 309;
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x8312A300;
	sub_830EE100(ctx, base);
loc_8312A300:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x8312A30C;
	sub_830ED2B8(ctx, base);
	// b 0x83129afc
	goto loc_83129AFC;
loc_8312A310:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x83129afc
	if (!ctx.cr6.eq) goto loc_83129AFC;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A320;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x830ee100
	ctx.lr = 0x8312A33C;
	sub_830EE100(ctx, base);
	// b 0x83129afc
	goto loc_83129AFC;
loc_8312A340:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,1458
	ctx.r5.s64 = 1458;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830ed320
	ctx.lr = 0x8312A35C;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x8312A36C;
	sub_833A7198(ctx, base);
loc_8312A36C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x8312A374;
	sub_830F4DD0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x830f4f70
	ctx.lr = 0x8312A384;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312a3b0
	if (!ctx.cr0.eq) goto loc_8312A3B0;
loc_8312A38C:
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A394;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312A3B0;
	sub_830EE100(ctx, base);
loc_8312A3B0:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a3d8
	if (ctx.cr0.eq) goto loc_8312A3D8;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8312a3e8
	if (ctx.cr6.eq) goto loc_8312A3E8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831296c0
	ctx.lr = 0x8312A3D8;
	sub_831296C0(ctx, base);
loc_8312A3D8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8312a3e8
	if (ctx.cr6.eq) goto loc_8312A3E8;
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// bl 0x8311faa0
	ctx.lr = 0x8312A3E8;
	sub_8311FAA0(ctx, base);
loc_8312A3E8:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83128458
	ctx.lr = 0x8312A3FC;
	sub_83128458(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312a484
	if (ctx.cr6.eq) goto loc_8312A484;
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a434
	if (ctx.cr0.eq) goto loc_8312A434;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x831332c8
	ctx.lr = 0x8312A430;
	sub_831332C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8312A434:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a458
	if (ctx.cr0.eq) goto loc_8312A458;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8312a45c
	goto loc_8312A45C;
loc_8312A44C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x8312A454;
	sub_830F4DD0(ctx, base);
	// b 0x8312a3b0
	goto loc_8312A3B0;
loc_8312A458:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8312A45C:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r7,88(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312A484:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a504
	if (ctx.cr0.eq) goto loc_8312A504;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a4f0
	if (ctx.cr0.eq) goto loc_8312A4F0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8312a4f0
	if (ctx.cr0.lt) goto loc_8312A4F0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8311e658
	ctx.lr = 0x8312A4F0;
	sub_8311E658(ctx, base);
loc_8312A4F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311d468
	ctx.lr = 0x8312A4F8;
	sub_8311D468(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8312a504
	if (ctx.cr6.eq) goto loc_8312A504;
	// stb r19,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r19.u8);
loc_8312A504:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8312A508:
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129A38"))) PPC_WEAK_FUNC(sub_83129A38);
PPC_FUNC_IMPL(__imp__sub_83129A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x83129A40;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-304
	ctx.r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r4,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r4.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r29,r3,320
	ctx.r29.s64 = ctx.r3.s64 + 320;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r19,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r19.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// sth r19,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r19.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// beq 0x83129a98
	if (ctx.cr0.eq) goto loc_83129A98;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// bl 0x830fa338
	ctx.lr = 0x83129A94;
	sub_830FA338(ctx, base);
	// b 0x83129aa0
	goto loc_83129AA0;
loc_83129A98:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fa120
	ctx.lr = 0x83129AA0;
	sub_830FA120(ctx, base);
loc_83129AA0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bne 0x83129b04
	if (!ctx.cr0.eq) goto loc_83129B04;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x83129ac4
	if (!ctx.cr6.eq) goto loc_83129AC4;
	// li r4,183
	ctx.r4.s64 = 183;
	// bl 0x830edff8
	ctx.lr = 0x83129AC0;
	sub_830EDFF8(ctx, base);
	// b 0x83129af0
	goto loc_83129AF0;
loc_83129AC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,308
	ctx.r4.s64 = 308;
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x83129AF0;
	sub_830EE100(ctx, base);
loc_83129AF0:
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x83129AFC;
	sub_830ED2B8(ctx, base);
loc_83129AFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312a508
	goto loc_8312A508;
loc_83129B04:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,472(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r19,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r19.u8);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// rlwinm r24,r9,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r27,24(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stb r24,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r24.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x83129bd8
	if (!ctx.cr0.eq) goto loc_83129BD8;
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8311f228
	ctx.lr = 0x83129B74;
	sub_8311F228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83129b88
	if (ctx.cr0.eq) goto loc_83129B88;
	// lwz r22,0(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x83129bd8
	if (!ctx.cr6.eq) goto loc_83129BD8;
loc_83129B88:
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x830dd390
	ctx.lr = 0x83129B98;
	sub_830DD390(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83129bc0
	if (ctx.cr0.eq) goto loc_83129BC0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83175008
	ctx.lr = 0x83129BB8;
	sub_83175008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83129bc4
	goto loc_83129BC4;
loc_83129BC0:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_83129BC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// bl 0x8311f668
	ctx.lr = 0x83129BD4;
	sub_8311F668(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
loc_83129BD8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83129c38
	if (ctx.cr0.eq) goto loc_83129C38;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129bf8
	if (ctx.cr0.eq) goto loc_83129BF8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r11.u32);
	// b 0x83129c04
	goto loc_83129C04;
loc_83129BF8:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83129c20
	if (ctx.cr6.eq) goto loc_83129C20;
loc_83129C04:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8311e658
	ctx.lr = 0x83129C20;
	sub_8311E658(ctx, base);
loc_83129C20:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129C38:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r30,432
	ctx.r28.s64 = ctx.r30.s64 + 432;
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8311dd68
	ctx.lr = 0x83129C5C;
	sub_8311DD68(ctx, base);
	// clrlwi. r25,r24,24
	ctx.r25.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r25,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r25.u32);
	// beq 0x83129ca8
	if (ctx.cr0.eq) goto loc_83129CA8;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r11.u32);
	// beq 0x83129cc4
	if (ctx.cr0.eq) goto loc_83129CC4;
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83129cc4
	if (ctx.cr6.eq) goto loc_83129CC4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83129C90;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129cc4
	if (!ctx.cr0.eq) goto loc_83129CC4;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8311e528
	ctx.lr = 0x83129CA4;
	sub_8311E528(ctx, base);
	// b 0x83129cc4
	goto loc_83129CC4;
loc_83129CA8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83129cc4
	if (ctx.cr0.eq) goto loc_83129CC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311d558
	ctx.lr = 0x83129CC4;
	sub_8311D558(ctx, base);
loc_83129CC4:
	// addi r21,r30,128
	ctx.r21.s64 = ctx.r30.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83129CD4;
	sub_830F50E0(ctx, base);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// ori r18,r6,32852
	ctx.r18.u64 = ctx.r6.u64 | 32852;
	// addi r20,r9,-5740
	ctx.r20.s64 = ctx.r9.s64 + -5740;
	// addi r15,r8,-18456
	ctx.r15.s64 = ctx.r8.s64 + -18456;
	// addi r14,r7,-13800
	ctx.r14.s64 = ctx.r7.s64 + -13800;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r16,r11,-5980
	ctx.r16.s64 = ctx.r11.s64 + -5980;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r10,r10,-6224
	ctx.r10.s64 = ctx.r10.s64 + -6224;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// b 0x83129d2c
	goto loc_83129D2C;
loc_83129D28:
	// lwz r26,332(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
loc_83129D2C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f08
	ctx.lr = 0x83129D34;
	sub_830F4F08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83129d90
	if (ctx.cr6.eq) goto loc_83129D90;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x83129d90
	if (ctx.cr6.eq) goto loc_83129D90;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x83129d90
	if (ctx.cr6.eq) goto loc_83129D90;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129d84
	if (ctx.cr0.eq) goto loc_83129D84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83129D74;
	sub_830F50E0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4f08
	ctx.lr = 0x83129D7C;
	sub_830F4F08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83129d90
	goto loc_83129D90;
loc_83129D84:
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83129D90;
	sub_830EDFF8(ctx, base);
loc_83129D90:
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8312a25c
	if (!ctx.cr0.eq) goto loc_8312A25C;
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// addi r26,r30,236
	ctx.r26.s64 = ctx.r30.s64 + 236;
	// stw r19,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r19.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// sth r19,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r19.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// beq 0x83129ddc
	if (ctx.cr0.eq) goto loc_83129DDC;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// bl 0x830fa338
	ctx.lr = 0x83129DD8;
	sub_830FA338(ctx, base);
	// b 0x83129de4
	goto loc_83129DE4;
loc_83129DDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830fa120
	ctx.lr = 0x83129DE4;
	sub_830FA120(ctx, base);
loc_83129DE4:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x8312a2bc
	if (ctx.cr0.eq) goto loc_8312A2BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830ed900
	ctx.lr = 0x83129DF8;
	sub_830ED900(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129e50
	if (!ctx.cr0.eq) goto loc_83129E50;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83129E0C;
	sub_830EDFF8(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f5218
	ctx.lr = 0x83129E18;
	sub_830F5218(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x83129d28
	if (ctx.cr6.eq) goto loc_83129D28;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x83129d28
	if (ctx.cr6.eq) goto loc_83129D28;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x83129e50
	if (ctx.cr6.eq) goto loc_83129E50;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x83129e50
	if (ctx.cr6.eq) goto loc_83129E50;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8312a310
	if (ctx.cr0.eq) goto loc_8312A310;
loc_83129E50:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r27,24(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83175888
	ctx.lr = 0x83129E74;
	sub_83175888(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x83129E84;
	sub_830F50E0(ctx, base);
	// addi r24,r30,264
	ctx.r24.s64 = ctx.r30.s64 + 264;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83125be8
	ctx.lr = 0x83129E9C;
	sub_83125BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83129ee4
	if (!ctx.cr0.eq) goto loc_83129EE4;
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x83129EB0;
	sub_830EDFF8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f5218
	ctx.lr = 0x83129EBC;
	sub_830F5218(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x83129ee4
	if (ctx.cr6.eq) goto loc_83129EE4;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x83129ee4
	if (ctx.cr6.eq) goto loc_83129EE4;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8312a310
	if (ctx.cr0.eq) goto loc_8312A310;
loc_83129EE4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r9.u32, ctx.xer);
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r23,24(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// blt cr6,0x83129f48
	if (ctx.cr6.lt) goto loc_83129F48;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x83129F14;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83129f30
	if (ctx.cr0.eq) goto loc_83129F30;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830f8968
	ctx.lr = 0x83129F28;
	sub_830F8968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83129f34
	goto loc_83129F34;
loc_83129F30:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_83129F34:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// bl 0x830f4660
	ctx.lr = 0x83129F44;
	sub_830F4660(ctx, base);
	// b 0x83129f5c
	goto loc_83129F5C;
loc_83129F48:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x831a0220
	ctx.lr = 0x83129F54;
	sub_831A0220(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_83129F5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a0b4
	if (ctx.cr0.eq) goto loc_8312A0B4;
	// beq cr6,0x83129f80
	if (ctx.cr6.eq) goto loc_83129F80;
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x83129f84
	goto loc_83129F84;
loc_83129F80:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_83129F84:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x830e3cf0
	ctx.lr = 0x83129F94;
	sub_830E3CF0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a20
	ctx.lr = 0x83129FA0;
	sub_830F8A20(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stb r19,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r19.u8);
	// stw r19,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r19.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r27,24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// beq cr6,0x8312a028
	if (ctx.cr6.eq) goto loc_8312A028;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a028
	if (ctx.cr0.eq) goto loc_8312A028;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830d8d28
	ctx.lr = 0x83129FD8;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83129ff0
	if (ctx.cr0.eq) goto loc_83129FF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x830f8a10
	ctx.lr = 0x83129FEC;
	sub_830F8A10(ctx, base);
	// b 0x8312a050
	goto loc_8312A050;
loc_83129FF0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83129FFC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a018
	if (ctx.cr0.eq) goto loc_8312A018;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830f8a10
	ctx.lr = 0x8312A010;
	sub_830F8A10(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x8312a040
	goto loc_8312A040;
loc_8312A018:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r3,504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// bl 0x831001e0
	ctx.lr = 0x8312A024;
	sub_831001E0(ctx, base);
	// b 0x8312a050
	goto loc_8312A050;
loc_8312A028:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x830d8d28
	ctx.lr = 0x8312A034;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a050
	if (ctx.cr0.eq) goto loc_8312A050;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_8312A040:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83125a90
	ctx.lr = 0x8312A050;
	sub_83125A90(ctx, base);
loc_8312A050:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8312a1b4
	if (ctx.cr6.eq) goto loc_8312A1B4;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x8312A068;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312a07c
	if (ctx.cr0.eq) goto loc_8312A07C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312a09c
	if (!ctx.cr6.eq) goto loc_8312A09C;
loc_8312A07C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed968
	ctx.lr = 0x8312A084;
	sub_830ED968(ctx, base);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// b 0x8312a188
	goto loc_8312A188;
loc_8312A09C:
	// lwz r10,520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8312a1b4
	if (!ctx.cr6.lt) goto loc_8312A1B4;
loc_8312A0AC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8312a1b4
	goto loc_8312A1B4;
loc_8312A0B4:
	// beq cr6,0x8312a0c0
	if (ctx.cr6.eq) goto loc_8312A0C0;
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x8312a0c4
	goto loc_8312A0C4;
loc_8312A0C0:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_8312A0C4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x830e3c68
	ctx.lr = 0x8312A0D8;
	sub_830E3C68(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a20
	ctx.lr = 0x8312A0E4;
	sub_830F8A20(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stb r19,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r19.u8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r19,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r19.u32);
	// beq cr6,0x8312a158
	if (ctx.cr6.eq) goto loc_8312A158;
	// addi r5,r31,116
	ctx.r5.s64 = ctx.r31.s64 + 116;
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x8312A108;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312a07c
	if (ctx.cr0.eq) goto loc_8312A07C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312a07c
	if (ctx.cr6.eq) goto loc_8312A07C;
	// lwz r10,520(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8312a0ac
	if (ctx.cr6.lt) goto loc_8312A0AC;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A134;
	sub_830E3560(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x8312a1a0
	goto loc_8312A1A0;
loc_8312A158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a08
	ctx.lr = 0x8312A160;
	sub_830F8A08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x8312A174;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8312a190
	if (!ctx.cr0.eq) goto loc_8312A190;
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8312A188:
	// bl 0x83104570
	ctx.lr = 0x8312A18C;
	sub_83104570(ctx, base);
	// b 0x8312a1b4
	goto loc_8312A1B4;
loc_8312A190:
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A198;
	sub_830E3560(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8312A1A0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312A1B4;
	sub_830EE100(ctx, base);
loc_8312A1B4:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a234
	if (ctx.cr0.eq) goto loc_8312A234;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8312a204
	if (ctx.cr6.eq) goto loc_8312A204;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8312a234
	goto loc_8312A234;
loc_8312A204:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x8311e658
	ctx.lr = 0x8312A234;
	sub_8311E658(ctx, base);
loc_8312A234:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f8a20
	ctx.lr = 0x8312A240;
	sub_830F8A20(ctx, base);
	// lwz r25,104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r28,108(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r27,88(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lbz r24,80(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// lbz r23,81(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// b 0x83129d28
	goto loc_83129D28;
loc_8312A25C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312a340
	if (ctx.cr6.eq) goto loc_8312A340;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x8312a36c
	if (ctx.cr6.eq) goto loc_8312A36C;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x8312a44c
	if (ctx.cr6.eq) goto loc_8312A44C;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x8312a38c
	if (ctx.cr6.eq) goto loc_8312A38C;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x8312a28c
	if (ctx.cr6.eq) goto loc_8312A28C;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x83129d2c
	if (!ctx.cr6.eq) goto loc_83129D2C;
loc_8312A28C:
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312A298;
	sub_830EDFF8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x8312A2A0;
	sub_830F4DD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f5160
	ctx.lr = 0x8312A2AC;
	sub_830F5160(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f50e0
	ctx.lr = 0x8312A2B8;
	sub_830F50E0(ctx, base);
	// b 0x83129d2c
	goto loc_83129D2C;
loc_8312A2BC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312a2d4
	if (!ctx.cr6.eq) goto loc_8312A2D4;
	// li r4,174
	ctx.r4.s64 = 174;
	// bl 0x830edff8
	ctx.lr = 0x8312A2D0;
	sub_830EDFF8(ctx, base);
	// b 0x8312a300
	goto loc_8312A300;
loc_8312A2D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,309
	ctx.r4.s64 = 309;
	// sthx r19,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x830ee100
	ctx.lr = 0x8312A300;
	sub_830EE100(ctx, base);
loc_8312A300:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x8312A30C;
	sub_830ED2B8(ctx, base);
	// b 0x83129afc
	goto loc_83129AFC;
loc_8312A310:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x83129afc
	if (!ctx.cr6.eq) goto loc_83129AFC;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A320;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x830ee100
	ctx.lr = 0x8312A33C;
	sub_830EE100(ctx, base);
	// b 0x83129afc
	goto loc_83129AFC;
loc_8312A340:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,1458
	ctx.r5.s64 = 1458;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830ed320
	ctx.lr = 0x8312A35C;
	sub_830ED320(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x833a7198
	ctx.lr = 0x8312A36C;
	sub_833A7198(ctx, base);
loc_8312A36C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x8312A374;
	sub_830F4DD0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x830f4f70
	ctx.lr = 0x8312A384;
	sub_830F4F70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312a3b0
	if (!ctx.cr0.eq) goto loc_8312A3B0;
loc_8312A38C:
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A394;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312A3B0;
	sub_830EE100(ctx, base);
loc_8312A3B0:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a3d8
	if (ctx.cr0.eq) goto loc_8312A3D8;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8312a3e8
	if (ctx.cr6.eq) goto loc_8312A3E8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831296c0
	ctx.lr = 0x8312A3D8;
	sub_831296C0(ctx, base);
loc_8312A3D8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8312a3e8
	if (ctx.cr6.eq) goto loc_8312A3E8;
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// bl 0x8311faa0
	ctx.lr = 0x8312A3E8;
	sub_8311FAA0(ctx, base);
loc_8312A3E8:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83128458
	ctx.lr = 0x8312A3FC;
	sub_83128458(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312a484
	if (ctx.cr6.eq) goto loc_8312A484;
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a434
	if (ctx.cr0.eq) goto loc_8312A434;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x831332c8
	ctx.lr = 0x8312A430;
	sub_831332C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8312A434:
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a458
	if (ctx.cr0.eq) goto loc_8312A458;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8312a45c
	goto loc_8312A45C;
loc_8312A44C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f4dd0
	ctx.lr = 0x8312A454;
	sub_830F4DD0(ctx, base);
	// b 0x8312a3b0
	goto loc_8312A3B0;
loc_8312A458:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_8312A45C:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r7,88(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312A484:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a504
	if (ctx.cr0.eq) goto loc_8312A504;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a4f0
	if (ctx.cr0.eq) goto loc_8312A4F0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8312a4f0
	if (ctx.cr0.lt) goto loc_8312A4F0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8311e658
	ctx.lr = 0x8312A4F0;
	sub_8311E658(ctx, base);
loc_8312A4F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311d468
	ctx.lr = 0x8312A4F8;
	sub_8311D468(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8312a504
	if (ctx.cr6.eq) goto loc_8312A504;
	// stb r19,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r19.u8);
loc_8312A504:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8312A508:
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A510"))) PPC_WEAK_FUNC(sub_8312A510);
PPC_FUNC_IMPL(__imp__sub_8312A510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x830dd3e0
	ctx.lr = 0x8312A530;
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

__attribute__((alias("__imp__sub_8312A540"))) PPC_WEAK_FUNC(sub_8312A540);
PPC_FUNC_IMPL(__imp__sub_8312A540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8312A560;
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

__attribute__((alias("__imp__sub_8312A570"))) PPC_WEAK_FUNC(sub_8312A570);
PPC_FUNC_IMPL(__imp__sub_8312A570) {
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
	// bl 0x831299b8
	ctx.lr = 0x8312A590;
	sub_831299B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a5a0
	if (ctx.cr0.eq) goto loc_8312A5A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8312A5A0;
	sub_830DD3E0(ctx, base);
loc_8312A5A0:
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

__attribute__((alias("__imp__sub_8312A5BC"))) PPC_WEAK_FUNC(sub_8312A5BC);
PPC_FUNC_IMPL(__imp__sub_8312A5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A5C0"))) PPC_WEAK_FUNC(sub_8312A5C0);
PPC_FUNC_IMPL(__imp__sub_8312A5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13476(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13476);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x8312A5D8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// bl 0x830ed840
	ctx.lr = 0x8312A5EC;
	sub_830ED840(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a8e4
	if (ctx.cr0.eq) {
		sub_8312A8E4(ctx, base);
		return;
	}
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,17792
	ctx.r11.s64 = ctx.r11.s64 + 17792;
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x8312A62C;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8312a674
	if (!ctx.cr6.eq) goto loc_8312A674;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312a870
	goto loc_8312A870;
loc_8312A674:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8312a6f0
	if (!ctx.cr6.eq) goto loc_8312A6F0;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312a6e8
	if (ctx.cr6.eq) goto loc_8312A6E8;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x8312A690;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A6AC;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312A6D8;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A6E8:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x8312a870
	goto loc_8312A870;
loc_8312A6F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x8312a778
	if (ctx.cr6.eq) goto loc_8312A778;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8312a75c
	if (ctx.cr6.eq) goto loc_8312A75C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8312a74c
	if (ctx.cr6.eq) goto loc_8312A74C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8312a740
	if (ctx.cr6.eq) goto loc_8312A740;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8312a730
	if (ctx.cr6.eq) goto loc_8312A730;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x8312A72C;
	sub_830ED2B8(ctx, base);
	// b 0x8312a764
	goto loc_8312A764;
loc_8312A730:
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129a38
	ctx.lr = 0x8312A73C;
	sub_83129A38(ctx, base);
	// b 0x8312a764
	goto loc_8312A764;
loc_8312A740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x8312A748;
	sub_830EE4B0(ctx, base);
	// b 0x8312a764
	goto loc_8312A764;
loc_8312A74C:
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83125650
	ctx.lr = 0x8312A758;
	sub_83125650(ctx, base);
	// b 0x8312a764
	goto loc_8312A764;
loc_8312A75C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x8312A764;
	sub_830EF610(ctx, base);
loc_8312A764:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312a7c4
	goto loc_8312A7C4;
loc_8312A778:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312a7a0
	if (!ctx.cr6.eq) goto loc_8312A7A0;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312A790;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A7A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A7C4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8312a7fc
	if (ctx.cr6.eq) goto loc_8312A7FC;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312A7EC;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A7FC:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8312a870
	if (!ctx.cr0.eq) goto loc_8312A870;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a82c
	if (ctx.cr0.eq) goto loc_8312A82C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1b98
	ctx.lr = 0x8312A81C;
	sub_830F1B98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A82C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0538
	ctx.lr = 0x8312A834;
	sub_830F0538(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a870
	if (ctx.cr6.eq) goto loc_8312A870;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A870:
	// b 0x8312a88c
	// ERROR 8312A88C
	return;
}

__attribute__((alias("__imp__sub_8312A5C8"))) PPC_WEAK_FUNC(sub_8312A5C8);
PPC_FUNC_IMPL(__imp__sub_8312A5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x8312A5D8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// bl 0x830ed840
	ctx.lr = 0x8312A5EC;
	sub_830ED840(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312a8e4
	if (ctx.cr0.eq) goto loc_8312A8E4;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,17792
	ctx.r11.s64 = ctx.r11.s64 + 17792;
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_8312A620:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x8312A62C;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8312a674
	if (!ctx.cr6.eq) goto loc_8312A674;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312a870
	goto loc_8312A870;
loc_8312A674:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8312a6f0
	if (!ctx.cr6.eq) goto loc_8312A6F0;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312a6e8
	if (ctx.cr6.eq) goto loc_8312A6E8;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x8312A690;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312A6AC;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312A6D8;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A6E8:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x8312a870
	goto loc_8312A870;
loc_8312A6F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x8312a778
	if (ctx.cr6.eq) goto loc_8312A778;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8312a75c
	if (ctx.cr6.eq) goto loc_8312A75C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8312a74c
	if (ctx.cr6.eq) goto loc_8312A74C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8312a740
	if (ctx.cr6.eq) goto loc_8312A740;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8312a730
	if (ctx.cr6.eq) goto loc_8312A730;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x8312A72C;
	sub_830ED2B8(ctx, base);
	// b 0x8312a764
	goto loc_8312A764;
loc_8312A730:
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129a38
	ctx.lr = 0x8312A73C;
	sub_83129A38(ctx, base);
	// b 0x8312a764
	goto loc_8312A764;
loc_8312A740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x8312A748;
	sub_830EE4B0(ctx, base);
	// b 0x8312a764
	goto loc_8312A764;
loc_8312A74C:
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83125650
	ctx.lr = 0x8312A758;
	sub_83125650(ctx, base);
	// b 0x8312a764
	goto loc_8312A764;
loc_8312A75C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x8312A764;
	sub_830EF610(ctx, base);
loc_8312A764:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312a7c4
	goto loc_8312A7C4;
loc_8312A778:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312a7a0
	if (!ctx.cr6.eq) goto loc_8312A7A0;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312A790;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A7A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A7C4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8312a7fc
	if (ctx.cr6.eq) goto loc_8312A7FC;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312A7EC;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A7FC:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8312a870
	if (!ctx.cr0.eq) goto loc_8312A870;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312a82c
	if (ctx.cr0.eq) goto loc_8312A82C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1b98
	ctx.lr = 0x8312A81C;
	sub_830F1B98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A82C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0538
	ctx.lr = 0x8312A834;
	sub_830F0538(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a870
	if (ctx.cr6.eq) goto loc_8312A870;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A870:
	// b 0x8312a88c
	goto loc_8312A88C;
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8312a620
	goto loc_8312A620;
	// b 0x8312a888
	goto loc_8312A888;
	// b 0x8312a888
	goto loc_8312A888;
loc_8312A888:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8312A88C:
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8312a8b0
	if (ctx.cr0.eq) goto loc_8312A8B0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// b 0x8312a8b4
	goto loc_8312A8B4;
loc_8312A8B0:
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_8312A8B4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8312a8d8
	if (ctx.cr6.eq) goto loc_8312A8D8;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8312a8d8
	if (ctx.cr6.eq) goto loc_8312A8D8;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312A8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312A8D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_8312A8E4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,78
	ctx.r6.s64 = 78;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,274
	ctx.r5.s64 = 274;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830d5dc0
	ctx.lr = 0x8312A900;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8312A910;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8312A874"))) PPC_WEAK_FUNC(sub_8312A874);
PPC_FUNC_IMPL(__imp__sub_8312A874) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8312a620
	// ERROR 8312A620
	return;
}

__attribute__((alias("__imp__sub_8312A880"))) PPC_WEAK_FUNC(sub_8312A880);
PPC_FUNC_IMPL(__imp__sub_8312A880) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312a888
	sub_8312A888(ctx, base);
	return;
	// b 0x8312a888
	sub_8312A888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A888"))) PPC_WEAK_FUNC(sub_8312A888);
PPC_FUNC_IMPL(__imp__sub_8312A888) {
	PPC_FUNC_PROLOGUE();
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8312a8b0
	if (ctx.cr0.eq) goto loc_8312A8B0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// b 0x8312a8b4
	goto loc_8312A8B4;
loc_8312A8B0:
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_8312A8B4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8312a8d8
	if (ctx.cr6.eq) goto loc_8312A8D8;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8312a8d8
	if (ctx.cr6.eq) goto loc_8312A8D8;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312A8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312A8D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A8E4"))) PPC_WEAK_FUNC(sub_8312A8E4);
PPC_FUNC_IMPL(__imp__sub_8312A8E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,78
	ctx.r6.s64 = 78;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// li r5,274
	ctx.r5.s64 = 274;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x830d5dc0
	ctx.lr = 0x8312A900;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8312A910;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13476(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13476);
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
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a960
	if (ctx.cr6.eq) goto loc_8312A960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A960:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r3,r3,-22412
	ctx.r3.s64 = ctx.r3.s64 + -22412;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A918"))) PPC_WEAK_FUNC(sub_8312A918);
PPC_FUNC_IMPL(__imp__sub_8312A918) {
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
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a960
	if (ctx.cr6.eq) goto loc_8312A960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312A950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312A960:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r3,r3,-22412
	ctx.r3.s64 = ctx.r3.s64 + -22412;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A978"))) PPC_WEAK_FUNC(sub_8312A978);
PPC_FUNC_IMPL(__imp__sub_8312A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13476(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13476);
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312A9B4;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13476(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13476);
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-22400
	ctx.r3.s64 = ctx.r3.s64 + -22400;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A980"))) PPC_WEAK_FUNC(sub_8312A980);
PPC_FUNC_IMPL(__imp__sub_8312A980) {
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312A9B4;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8312A9BC"))) PPC_WEAK_FUNC(sub_8312A9BC);
PPC_FUNC_IMPL(__imp__sub_8312A9BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-22400
	ctx.r3.s64 = ctx.r3.s64 + -22400;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A9DC"))) PPC_WEAK_FUNC(sub_8312A9DC);
PPC_FUNC_IMPL(__imp__sub_8312A9DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13476(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13476);
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-22396
	ctx.r3.s64 = ctx.r3.s64 + -22396;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A9E4"))) PPC_WEAK_FUNC(sub_8312A9E4);
PPC_FUNC_IMPL(__imp__sub_8312A9E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-22396
	ctx.r3.s64 = ctx.r3.s64 + -22396;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AA04"))) PPC_WEAK_FUNC(sub_8312AA04);
PPC_FUNC_IMPL(__imp__sub_8312AA04) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13476(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13476);
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
	// lwz r28,212(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312AA34;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8312aa68
	if (!ctx.cr0.eq) goto loc_8312AA68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312AA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8312aaa0
	goto loc_8312AAA0;
loc_8312AA68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312AA70;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x8312aac0
	if (ctx.cr6.lt) goto loc_8312AAC0;
	// bctrl 
	ctx.lr = 0x8312AA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,292
	ctx.r4.s64 = 292;
loc_8312AAA0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312AAB8;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312aaec
	goto loc_8312AAEC;
loc_8312AAC0:
	// bctrl 
	ctx.lr = 0x8312AAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312AAE8;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AAEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r3,r3,-22392
	ctx.r3.s64 = ctx.r3.s64 + -22392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AA0C"))) PPC_WEAK_FUNC(sub_8312AA0C);
PPC_FUNC_IMPL(__imp__sub_8312AA0C) {
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
	// lwz r28,212(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312AA34;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8312aa68
	if (!ctx.cr0.eq) goto loc_8312AA68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312AA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8312aaa0
	goto loc_8312AAA0;
loc_8312AA68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312AA70;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x8312aac0
	if (ctx.cr6.lt) goto loc_8312AAC0;
	// bctrl 
	ctx.lr = 0x8312AA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,292
	ctx.r4.s64 = 292;
loc_8312AAA0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312AAB8;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312aaec
	goto loc_8312AAEC;
loc_8312AAC0:
	// bctrl 
	ctx.lr = 0x8312AAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312AAE8;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AAEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r3,r3,-22392
	ctx.r3.s64 = ctx.r3.s64 + -22392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AB0C"))) PPC_WEAK_FUNC(sub_8312AB0C);
PPC_FUNC_IMPL(__imp__sub_8312AB0C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-13476(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13476);
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312AB48;
	sub_833A7198(ctx, base);
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8319be68
	ctx.lr = 0x8312AB60;
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

__attribute__((alias("__imp__sub_8312AB14"))) PPC_WEAK_FUNC(sub_8312AB14);
PPC_FUNC_IMPL(__imp__sub_8312AB14) {
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312AB48;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8312AB48"))) PPC_WEAK_FUNC(sub_8312AB48);
PPC_FUNC_IMPL(__imp__sub_8312AB48) {
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8319be68
	ctx.lr = 0x8312AB60;
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

__attribute__((alias("__imp__sub_8312AB70"))) PPC_WEAK_FUNC(sub_8312AB70);
PPC_FUNC_IMPL(__imp__sub_8312AB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12964(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12964);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x8312AB88;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312ad44
	if (ctx.cr0.eq) {
		sub_8312AD44(ctx, base);
		return;
	}
loc_8312ABB4:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312ad40
	if (ctx.cr0.eq) {
		sub_8312AD40(ctx, base);
		return;
	}
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x8312ABCC;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8312abf8
	if (!ctx.cr6.eq) goto loc_8312ABF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312ABF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312abb4
	goto loc_8312ABB4;
loc_8312ABF8:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8312ac50
	if (!ctx.cr6.eq) goto loc_8312AC50;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312ac48
	if (ctx.cr6.eq) goto loc_8312AC48;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x8312AC14;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312AC24;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312AC44;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AC48:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x8312abb4
	goto loc_8312ABB4;
loc_8312AC50:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x8312accc
	if (ctx.cr6.eq) goto loc_8312ACCC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8312acbc
	if (ctx.cr6.eq) goto loc_8312ACBC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8312acac
	if (ctx.cr6.eq) goto loc_8312ACAC;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8312aca0
	if (ctx.cr6.eq) goto loc_8312ACA0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8312ac90
	if (ctx.cr6.eq) goto loc_8312AC90;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x8312AC8C;
	sub_830ED2B8(ctx, base);
	// b 0x8312acc4
	goto loc_8312ACC4;
loc_8312AC90:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129a38
	ctx.lr = 0x8312AC9C;
	sub_83129A38(ctx, base);
	// b 0x8312acc4
	goto loc_8312ACC4;
loc_8312ACA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x8312ACA8;
	sub_830EE4B0(ctx, base);
	// b 0x8312acc4
	goto loc_8312ACC4;
loc_8312ACAC:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83125650
	ctx.lr = 0x8312ACB8;
	sub_83125650(ctx, base);
	// b 0x8312acc4
	goto loc_8312ACC4;
loc_8312ACBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x8312ACC4;
	sub_830EF610(ctx, base);
loc_8312ACC4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312ad00
	goto loc_8312AD00;
loc_8312ACCC:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312ace8
	if (!ctx.cr6.eq) goto loc_8312ACE8;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312ACE4;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312ACE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312ACFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AD00:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8312ad2c
	if (ctx.cr6.eq) goto loc_8312AD2C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312AD28;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AD2C:
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// b 0x8312abb4
	goto loc_8312ABB4;
}

__attribute__((alias("__imp__sub_8312AB78"))) PPC_WEAK_FUNC(sub_8312AB78);
PPC_FUNC_IMPL(__imp__sub_8312AB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x8312AB88;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_8312ABA8:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312ad44
	if (ctx.cr0.eq) goto loc_8312AD44;
loc_8312ABB4:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312ad40
	if (ctx.cr0.eq) goto loc_8312AD40;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x8312ABCC;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8312abf8
	if (!ctx.cr6.eq) goto loc_8312ABF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312ABF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312abb4
	goto loc_8312ABB4;
loc_8312ABF8:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8312ac50
	if (!ctx.cr6.eq) goto loc_8312AC50;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312ac48
	if (ctx.cr6.eq) goto loc_8312AC48;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x8312AC14;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312AC24;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312AC44;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AC48:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x8312abb4
	goto loc_8312ABB4;
loc_8312AC50:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x8312accc
	if (ctx.cr6.eq) goto loc_8312ACCC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8312acbc
	if (ctx.cr6.eq) goto loc_8312ACBC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8312acac
	if (ctx.cr6.eq) goto loc_8312ACAC;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8312aca0
	if (ctx.cr6.eq) goto loc_8312ACA0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8312ac90
	if (ctx.cr6.eq) goto loc_8312AC90;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x8312AC8C;
	sub_830ED2B8(ctx, base);
	// b 0x8312acc4
	goto loc_8312ACC4;
loc_8312AC90:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129a38
	ctx.lr = 0x8312AC9C;
	sub_83129A38(ctx, base);
	// b 0x8312acc4
	goto loc_8312ACC4;
loc_8312ACA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x8312ACA8;
	sub_830EE4B0(ctx, base);
	// b 0x8312acc4
	goto loc_8312ACC4;
loc_8312ACAC:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83125650
	ctx.lr = 0x8312ACB8;
	sub_83125650(ctx, base);
	// b 0x8312acc4
	goto loc_8312ACC4;
loc_8312ACBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x8312ACC4;
	sub_830EF610(ctx, base);
loc_8312ACC4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312ad00
	goto loc_8312AD00;
loc_8312ACCC:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312ace8
	if (!ctx.cr6.eq) goto loc_8312ACE8;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312ACE4;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312ACE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312ACFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AD00:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8312ad2c
	if (ctx.cr6.eq) goto loc_8312AD2C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312AD28;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AD2C:
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// b 0x8312abb4
	goto loc_8312ABB4;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8312aba8
	goto loc_8312ABA8;
loc_8312AD40:
	// b 0x8312aba8
	goto loc_8312ABA8;
loc_8312AD44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AD34"))) PPC_WEAK_FUNC(sub_8312AD34);
PPC_FUNC_IMPL(__imp__sub_8312AD34) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8312aba8
	// ERROR 8312ABA8
	return;
}

__attribute__((alias("__imp__sub_8312AD40"))) PPC_WEAK_FUNC(sub_8312AD40);
PPC_FUNC_IMPL(__imp__sub_8312AD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312aba8
	// ERROR 8312ABA8
	return;
}

__attribute__((alias("__imp__sub_8312AD44"))) PPC_WEAK_FUNC(sub_8312AD44);
PPC_FUNC_IMPL(__imp__sub_8312AD44) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AD50"))) PPC_WEAK_FUNC(sub_8312AD50);
PPC_FUNC_IMPL(__imp__sub_8312AD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12964(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12964);
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
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312ad88
	if (ctx.cr0.eq) goto loc_8312AD88;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312AD84;
	sub_830EDFF8(ctx, base);
	// b 0x8312ad8c
	goto loc_8312AD8C;
loc_8312AD88:
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_8312AD8C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312adb4
	if (ctx.cr6.eq) goto loc_8312ADB4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312ADB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312ADB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r3,r3,-21196
	ctx.r3.s64 = ctx.r3.s64 + -21196;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AD58"))) PPC_WEAK_FUNC(sub_8312AD58);
PPC_FUNC_IMPL(__imp__sub_8312AD58) {
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
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312ad88
	if (ctx.cr0.eq) goto loc_8312AD88;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312AD84;
	sub_830EDFF8(ctx, base);
	// b 0x8312ad8c
	goto loc_8312AD8C;
loc_8312AD88:
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_8312AD8C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312adb4
	if (ctx.cr6.eq) goto loc_8312ADB4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312ADB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312ADB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r3,r3,-21196
	ctx.r3.s64 = ctx.r3.s64 + -21196;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312ADD4"))) PPC_WEAK_FUNC(sub_8312ADD4);
PPC_FUNC_IMPL(__imp__sub_8312ADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ADD8"))) PPC_WEAK_FUNC(sub_8312ADD8);
PPC_FUNC_IMPL(__imp__sub_8312ADD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12744(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12744);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x8312ADF0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r10,r10,17792
	ctx.r10.s64 = ctx.r10.s64 + 17792;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r29,r3,128
	ctx.r29.s64 = ctx.r3.s64 + 128;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312AE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312ae7c
	if (ctx.cr6.eq) goto loc_8312AE7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312AE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AE7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0760
	ctx.lr = 0x8312AE84;
	sub_830F0760(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4778
	ctx.lr = 0x8312AE9C;
	sub_830F4778(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x8312aed4
	if (ctx.cr0.eq) goto loc_8312AED4;
	// li r4,279
	ctx.r4.s64 = 279;
	// bl 0x830edff8
	ctx.lr = 0x8312AEC0;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312af4c
	goto loc_8312AF4C;
loc_8312AED4:
	// bl 0x8312ab78
	ctx.lr = 0x8312AED8;
	sub_8312AB78(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312af4c
	if (ctx.cr0.eq) goto loc_8312AF4C;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312af14
	if (ctx.cr0.eq) goto loc_8312AF14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1b98
	ctx.lr = 0x8312AF04;
	sub_830F1B98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AF14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4778
	ctx.lr = 0x8312AF1C;
	sub_830F4778(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312af4c
	if (!ctx.cr0.eq) goto loc_8312AF4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0538
	ctx.lr = 0x8312AF3C;
	sub_830F0538(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AF4C:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312af78
	if (ctx.cr6.eq) goto loc_8312AF78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312AF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AF78:
	// b 0x8312af84
	sub_8312AF84(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312ADE0"))) PPC_WEAK_FUNC(sub_8312ADE0);
PPC_FUNC_IMPL(__imp__sub_8312ADE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x8312ADF0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r10,r10,17792
	ctx.r10.s64 = ctx.r10.s64 + 17792;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r29,r3,128
	ctx.r29.s64 = ctx.r3.s64 + 128;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312AE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312ae7c
	if (ctx.cr6.eq) goto loc_8312AE7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312AE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AE7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0760
	ctx.lr = 0x8312AE84;
	sub_830F0760(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4778
	ctx.lr = 0x8312AE9C;
	sub_830F4778(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x8312aed4
	if (ctx.cr0.eq) goto loc_8312AED4;
	// li r4,279
	ctx.r4.s64 = 279;
	// bl 0x830edff8
	ctx.lr = 0x8312AEC0;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312af4c
	goto loc_8312AF4C;
loc_8312AED4:
	// bl 0x8312ab78
	ctx.lr = 0x8312AED8;
	sub_8312AB78(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312af4c
	if (ctx.cr0.eq) goto loc_8312AF4C;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312af14
	if (ctx.cr0.eq) goto loc_8312AF14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1b98
	ctx.lr = 0x8312AF04;
	sub_830F1B98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AF14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f4778
	ctx.lr = 0x8312AF1C;
	sub_830F4778(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312af4c
	if (!ctx.cr0.eq) goto loc_8312AF4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f0538
	ctx.lr = 0x8312AF3C;
	sub_830F0538(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AF4C:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312af78
	if (ctx.cr6.eq) goto loc_8312AF78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312AF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312AF78:
	// b 0x8312af84
	goto loc_8312AF84;
	// b 0x8312af84
	goto loc_8312AF84;
	// b 0x8312af84
	goto loc_8312AF84;
loc_8312AF84:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8312afac
	if (ctx.cr6.eq) goto loc_8312AFAC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312afac
	if (ctx.cr6.eq) goto loc_8312AFAC;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312AFAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312AFAC:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AF7C"))) PPC_WEAK_FUNC(sub_8312AF7C);
PPC_FUNC_IMPL(__imp__sub_8312AF7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312af84
	sub_8312AF84(ctx, base);
	return;
	// b 0x8312af84
	sub_8312AF84(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AF84"))) PPC_WEAK_FUNC(sub_8312AF84);
PPC_FUNC_IMPL(__imp__sub_8312AF84) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8312afac
	if (ctx.cr6.eq) goto loc_8312AFAC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312afac
	if (ctx.cr6.eq) goto loc_8312AFAC;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8312AFAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312AFAC:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AFB4"))) PPC_WEAK_FUNC(sub_8312AFB4);
PPC_FUNC_IMPL(__imp__sub_8312AFB4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12744(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12744);
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312AFF0;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12744(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12744);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-20612
	ctx.r3.s64 = ctx.r3.s64 + -20612;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312AFBC"))) PPC_WEAK_FUNC(sub_8312AFBC);
PPC_FUNC_IMPL(__imp__sub_8312AFBC) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312AFF0;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8312AFF8"))) PPC_WEAK_FUNC(sub_8312AFF8);
PPC_FUNC_IMPL(__imp__sub_8312AFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-20612
	ctx.r3.s64 = ctx.r3.s64 + -20612;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B00C"))) PPC_WEAK_FUNC(sub_8312B00C);
PPC_FUNC_IMPL(__imp__sub_8312B00C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12744(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12744);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-20608
	ctx.r3.s64 = ctx.r3.s64 + -20608;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B014"))) PPC_WEAK_FUNC(sub_8312B014);
PPC_FUNC_IMPL(__imp__sub_8312B014) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-20608
	ctx.r3.s64 = ctx.r3.s64 + -20608;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B028"))) PPC_WEAK_FUNC(sub_8312B028);
PPC_FUNC_IMPL(__imp__sub_8312B028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12744(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12744);
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
	// lwz r28,180(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312B058;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8312b08c
	if (!ctx.cr0.eq) goto loc_8312B08C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8312b0c4
	goto loc_8312B0C4;
loc_8312B08C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312B094;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x8312b0e4
	if (ctx.cr6.lt) goto loc_8312B0E4;
	// bctrl 
	ctx.lr = 0x8312B0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,292
	ctx.r4.s64 = 292;
loc_8312B0C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312B0DC;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312b110
	goto loc_8312B110;
loc_8312B0E4:
	// bctrl 
	ctx.lr = 0x8312B0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312B10C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B110:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r3,r3,-20604
	ctx.r3.s64 = ctx.r3.s64 + -20604;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B030"))) PPC_WEAK_FUNC(sub_8312B030);
PPC_FUNC_IMPL(__imp__sub_8312B030) {
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
	// lwz r28,180(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r11.u8);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312B058;
	sub_830ED1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8312b08c
	if (!ctx.cr0.eq) goto loc_8312B08C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8312b0c4
	goto loc_8312B0C4;
loc_8312B08C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed1a0
	ctx.lr = 0x8312B094;
	sub_830ED1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// blt cr6,0x8312b0e4
	if (ctx.cr6.lt) goto loc_8312B0E4;
	// bctrl 
	ctx.lr = 0x8312B0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,292
	ctx.r4.s64 = 292;
loc_8312B0C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312B0DC;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312b110
	goto loc_8312B110;
loc_8312B0E4:
	// bctrl 
	ctx.lr = 0x8312B0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ee370
	ctx.lr = 0x8312B10C;
	sub_830EE370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B110:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// addi r3,r3,-20604
	ctx.r3.s64 = ctx.r3.s64 + -20604;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B128"))) PPC_WEAK_FUNC(sub_8312B128);
PPC_FUNC_IMPL(__imp__sub_8312B128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12744(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12744);
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312B164;
	sub_833A7198(ctx, base);
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319be68
	ctx.lr = 0x8312B17C;
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

__attribute__((alias("__imp__sub_8312B130"))) PPC_WEAK_FUNC(sub_8312B130);
PPC_FUNC_IMPL(__imp__sub_8312B130) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// bl 0x833a7198
	ctx.lr = 0x8312B164;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8312B164"))) PPC_WEAK_FUNC(sub_8312B164);
PPC_FUNC_IMPL(__imp__sub_8312B164) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319be68
	ctx.lr = 0x8312B17C;
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

__attribute__((alias("__imp__sub_8312B18C"))) PPC_WEAK_FUNC(sub_8312B18C);
PPC_FUNC_IMPL(__imp__sub_8312B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B190"))) PPC_WEAK_FUNC(sub_8312B190);
PPC_FUNC_IMPL(__imp__sub_8312B190) {
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
	// lbz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8312b1e8
	if (!ctx.cr0.eq) goto loc_8312B1E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
loc_8312B1E8:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
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

__attribute__((alias("__imp__sub_8312B204"))) PPC_WEAK_FUNC(sub_8312B204);
PPC_FUNC_IMPL(__imp__sub_8312B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B208"))) PPC_WEAK_FUNC(sub_8312B208);
PPC_FUNC_IMPL(__imp__sub_8312B208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12304(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12304);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8312B218;
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312b254
	if (ctx.cr6.eq) goto loc_8312B254;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312B254:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x830dd390
	ctx.lr = 0x8312B260;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312b284
	if (ctx.cr0.eq) goto loc_8312B284;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830e3e60
	ctx.lr = 0x8312B280;
	sub_830E3E60(ctx, base);
	// b 0x8312b288
	goto loc_8312B288;
loc_8312B284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312B288:
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B210"))) PPC_WEAK_FUNC(sub_8312B210);
PPC_FUNC_IMPL(__imp__sub_8312B210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8312B218;
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312b254
	if (ctx.cr6.eq) goto loc_8312B254;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312B254:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x830dd390
	ctx.lr = 0x8312B260;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312b284
	if (ctx.cr0.eq) goto loc_8312B284;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830e3e60
	ctx.lr = 0x8312B280;
	sub_830E3E60(ctx, base);
	// b 0x8312b288
	goto loc_8312B288;
loc_8312B284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312B288:
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B294"))) PPC_WEAK_FUNC(sub_8312B294);
PPC_FUNC_IMPL(__imp__sub_8312B294) {
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
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8312B2B4;
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

__attribute__((alias("__imp__sub_8312B2C4"))) PPC_WEAK_FUNC(sub_8312B2C4);
PPC_FUNC_IMPL(__imp__sub_8312B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B2C8"))) PPC_WEAK_FUNC(sub_8312B2C8);
PPC_FUNC_IMPL(__imp__sub_8312B2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12204(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12204);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x8312B2E0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b4a4
	if (ctx.cr0.eq) {
		sub_8312B4A4(ctx, base);
		return;
	}
loc_8312B30C:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b4a0
	if (ctx.cr0.eq) {
		sub_8312B4A0(ctx, base);
		return;
	}
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x8312B324;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8312b350
	if (!ctx.cr6.eq) goto loc_8312B350;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312b30c
	goto loc_8312B30C;
loc_8312B350:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8312b3a8
	if (!ctx.cr6.eq) goto loc_8312B3A8;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312b3a0
	if (ctx.cr6.eq) goto loc_8312B3A0;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x8312B36C;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312B37C;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312B39C;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B3A0:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x8312b30c
	goto loc_8312B30C;
loc_8312B3A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x8312b42c
	if (ctx.cr6.eq) goto loc_8312B42C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8312b41c
	if (ctx.cr6.eq) goto loc_8312B41C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8312b400
	if (ctx.cr6.eq) goto loc_8312B400;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8312b3f4
	if (ctx.cr6.eq) goto loc_8312B3F4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8312b3e8
	if (ctx.cr6.eq) goto loc_8312B3E8;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x8312B3E4;
	sub_830ED2B8(ctx, base);
	// b 0x8312b424
	goto loc_8312B424;
loc_8312B3E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x8312b408
	goto loc_8312B408;
loc_8312B3F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x8312B3FC;
	sub_830EE4B0(ctx, base);
	// b 0x8312b424
	goto loc_8312B424;
loc_8312B400:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_8312B408:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bctrl 
	ctx.lr = 0x8312B418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8312b424
	goto loc_8312B424;
loc_8312B41C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x8312B424;
	sub_830EF610(ctx, base);
loc_8312B424:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312b460
	goto loc_8312B460;
loc_8312B42C:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312b448
	if (!ctx.cr6.eq) goto loc_8312B448;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312B444;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B448:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B460:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8312b48c
	if (ctx.cr6.eq) goto loc_8312B48C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312B488;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B48C:
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// b 0x8312b30c
	goto loc_8312B30C;
}

__attribute__((alias("__imp__sub_8312B2D0"))) PPC_WEAK_FUNC(sub_8312B2D0);
PPC_FUNC_IMPL(__imp__sub_8312B2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x8312B2E0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_8312B300:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b4a4
	if (ctx.cr0.eq) goto loc_8312B4A4;
loc_8312B30C:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b4a0
	if (ctx.cr0.eq) goto loc_8312B4A0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef288
	ctx.lr = 0x8312B324;
	sub_830EF288(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8312b350
	if (!ctx.cr6.eq) goto loc_8312B350;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312b30c
	goto loc_8312B30C;
loc_8312B350:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8312b3a8
	if (!ctx.cr6.eq) goto loc_8312B3A8;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312b3a0
	if (ctx.cr6.eq) goto loc_8312B3A0;
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// bl 0x8311d468
	ctx.lr = 0x8312B36C;
	sub_8311D468(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x830e3560
	ctx.lr = 0x8312B37C;
	sub_830E3560(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312B39C;
	sub_830EE100(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B3A0:
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x8312b30c
	goto loc_8312B30C;
loc_8312B3A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// beq cr6,0x8312b42c
	if (ctx.cr6.eq) goto loc_8312B42C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8312b41c
	if (ctx.cr6.eq) goto loc_8312B41C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8312b400
	if (ctx.cr6.eq) goto loc_8312B400;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8312b3f4
	if (ctx.cr6.eq) goto loc_8312B3F4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8312b3e8
	if (ctx.cr6.eq) goto loc_8312B3E8;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830ed2b8
	ctx.lr = 0x8312B3E4;
	sub_830ED2B8(ctx, base);
	// b 0x8312b424
	goto loc_8312B424;
loc_8312B3E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x8312b408
	goto loc_8312B408;
loc_8312B3F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ee4b0
	ctx.lr = 0x8312B3FC;
	sub_830EE4B0(ctx, base);
	// b 0x8312b424
	goto loc_8312B424;
loc_8312B400:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_8312B408:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bctrl 
	ctx.lr = 0x8312B418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8312b424
	goto loc_8312B424;
loc_8312B41C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef610
	ctx.lr = 0x8312B424;
	sub_830EF610(ctx, base);
loc_8312B424:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8312b460
	goto loc_8312B460;
loc_8312B42C:
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8312b448
	if (!ctx.cr6.eq) goto loc_8312B448;
	// li r4,280
	ctx.r4.s64 = 280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312B444;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B448:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B460:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,32808
	ctx.r11.u64 = ctx.r11.u64 | 32808;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8312b48c
	if (ctx.cr6.eq) goto loc_8312B48C;
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312B488;
	sub_830EDFF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8312B48C:
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// b 0x8312b30c
	goto loc_8312B30C;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8312b300
	goto loc_8312B300;
loc_8312B4A0:
	// b 0x8312b300
	goto loc_8312B300;
loc_8312B4A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B494"))) PPC_WEAK_FUNC(sub_8312B494);
PPC_FUNC_IMPL(__imp__sub_8312B494) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8312b300
	// ERROR 8312B300
	return;
}

__attribute__((alias("__imp__sub_8312B4A0"))) PPC_WEAK_FUNC(sub_8312B4A0);
PPC_FUNC_IMPL(__imp__sub_8312B4A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312b300
	// ERROR 8312B300
	return;
}

__attribute__((alias("__imp__sub_8312B4A4"))) PPC_WEAK_FUNC(sub_8312B4A4);
PPC_FUNC_IMPL(__imp__sub_8312B4A4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B4B0"))) PPC_WEAK_FUNC(sub_8312B4B0);
PPC_FUNC_IMPL(__imp__sub_8312B4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-12204(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12204);
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
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b4e8
	if (ctx.cr0.eq) goto loc_8312B4E8;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312B4E4;
	sub_830EDFF8(ctx, base);
	// b 0x8312b4ec
	goto loc_8312B4EC;
loc_8312B4E8:
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_8312B4EC:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312b514
	if (ctx.cr6.eq) goto loc_8312B514;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312B514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r3,r3,-19308
	ctx.r3.s64 = ctx.r3.s64 + -19308;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B4B8"))) PPC_WEAK_FUNC(sub_8312B4B8);
PPC_FUNC_IMPL(__imp__sub_8312B4B8) {
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
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b4e8
	if (ctx.cr0.eq) goto loc_8312B4E8;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r4,231
	ctx.r4.s64 = 231;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312B4E4;
	sub_830EDFF8(ctx, base);
	// b 0x8312b4ec
	goto loc_8312B4EC;
loc_8312B4E8:
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_8312B4EC:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312b514
	if (ctx.cr6.eq) goto loc_8312B514;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312B514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-31981
	ctx.r3.s64 = -2095906816;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r3,r3,-19308
	ctx.r3.s64 = ctx.r3.s64 + -19308;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B534"))) PPC_WEAK_FUNC(sub_8312B534);
PPC_FUNC_IMPL(__imp__sub_8312B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B538"))) PPC_WEAK_FUNC(sub_8312B538);
PPC_FUNC_IMPL(__imp__sub_8312B538) {
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
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12144
	ctx.r4.s64 = ctx.r11.s64 + -12144;
	// bl 0x830f51c0
	ctx.lr = 0x8312B55C;
	sub_830F51C0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x8312b574
	if (!ctx.cr6.eq) goto loc_8312B574;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x8312B574;
	sub_830ED2B8(ctx, base);
loc_8312B574:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ed2b8
	ctx.lr = 0x8312B580;
	sub_830ED2B8(ctx, base);
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

__attribute__((alias("__imp__sub_8312B594"))) PPC_WEAK_FUNC(sub_8312B594);
PPC_FUNC_IMPL(__imp__sub_8312B594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B598"))) PPC_WEAK_FUNC(sub_8312B598);
PPC_FUNC_IMPL(__imp__sub_8312B598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8312B5A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8312b600
	if (!ctx.cr6.gt) goto loc_8312B600;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8312B5E0:
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8312b5e0
	if (ctx.cr6.lt) goto loc_8312B5E0;
loc_8312B600:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312B618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r29,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B628"))) PPC_WEAK_FUNC(sub_8312B628);
PPC_FUNC_IMPL(__imp__sub_8312B628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x8312B630;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8312b654
	if (ctx.cr6.eq) goto loc_8312B654;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8312b658
	goto loc_8312B658;
loc_8312B654:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8312B658:
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// sth r25,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r25.u16);
	// beq cr6,0x8312b678
	if (ctx.cr6.eq) goto loc_8312B678;
	// lbz r21,17(r4)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// b 0x8312b67c
	goto loc_8312B67C;
loc_8312B678:
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
loc_8312B67C:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8312b7d8
	if (ctx.cr6.eq) goto loc_8312B7D8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8312b7d8
	if (ctx.cr6.gt) goto loc_8312B7D8;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b89c
	if (ctx.cr0.eq) goto loc_8312B89C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r28,r11,32852
	ctx.r28.u64 = ctx.r11.u64 | 32852;
loc_8312B6AC:
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// bne cr6,0x8312b6c4
	if (!ctx.cr6.eq) goto loc_8312B6C4;
	// lhzu r31,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r31.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// b 0x8312b6ec
	goto loc_8312B6EC;
loc_8312B6C4:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x8312b6ec
	if (!ctx.cr6.eq) goto loc_8312B6EC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312B6E8;
	sub_830EE100(ctx, base);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
loc_8312B6EC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8312b748
	if (!ctx.cr6.eq) goto loc_8312B748;
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312b734
	if (!ctx.cr0.eq) goto loc_8312B734;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312b720
	if (ctx.cr0.eq) goto loc_8312B720;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830d5880
	ctx.lr = 0x8312B720;
	sub_830D5880(ctx, base);
loc_8312B720:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8312B724:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8312B728:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830d5880
	ctx.lr = 0x8312B734;
	sub_830D5880(ctx, base);
loc_8312B734:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_8312B738:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8312b6ac
	if (!ctx.cr0.eq) goto loc_8312B6AC;
	// b 0x8312b89c
	goto loc_8312B89C;
loc_8312B748:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8312b728
	if (!ctx.cr6.eq) goto loc_8312B728;
	// lwz r10,136(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8312b724
	if (ctx.cr0.eq) goto loc_8312B724;
	// lbz r9,14(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 14);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8312b738
	if (ctx.cr0.eq) goto loc_8312B738;
	// lbz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8312b738
	if (ctx.cr0.eq) goto loc_8312B738;
	// clrlwi. r9,r21,24
	ctx.r9.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8312b738
	if (ctx.cr0.eq) goto loc_8312B738;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8312b7b8
	if (ctx.cr0.eq) goto loc_8312B7B8;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8312b7b8
	if (!ctx.cr6.eq) goto loc_8312B7B8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b7b8
	if (ctx.cr0.eq) goto loc_8312B7B8;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312b738
	if (ctx.cr0.eq) goto loc_8312B738;
loc_8312B7B8:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,172(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8311e658
	ctx.lr = 0x8312B7D4;
	sub_8311E658(ctx, base);
	// b 0x8312b738
	goto loc_8312B738;
loc_8312B7D8:
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// b 0x8312b894
	goto loc_8312B894;
loc_8312B7E0:
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// bne cr6,0x8312b7f8
	if (!ctx.cr6.eq) goto loc_8312B7F8;
	// lhzu r31,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r31.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// b 0x8312b884
	goto loc_8312B884;
loc_8312B7F8:
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8312b85c
	if (ctx.cr6.gt) goto loc_8312B85C;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8312b818
	if (ctx.cr6.eq) goto loc_8312B818;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8312b818
	if (ctx.cr6.eq) goto loc_8312B818;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x8312b85c
	if (!ctx.cr6.eq) goto loc_8312B85C;
loc_8312B818:
	// lbz r11,14(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b854
	if (ctx.cr0.eq) goto loc_8312B854;
	// lbz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312b854
	if (ctx.cr0.eq) goto loc_8312B854;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312b854
	if (ctx.cr0.eq) goto loc_8312B854;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,172(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x8311e658
	ctx.lr = 0x8312B854;
	sub_8311E658(ctx, base);
loc_8312B854:
	// li r31,32
	ctx.r31.s64 = 32;
	// b 0x8312b884
	goto loc_8312B884;
loc_8312B85C:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x8312b884
	if (!ctx.cr6.eq) goto loc_8312B884;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312B880;
	sub_830EE100(ctx, base);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
loc_8312B884:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830d5880
	ctx.lr = 0x8312B890;
	sub_830D5880(ctx, base);
	// lhzu r11,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
loc_8312B894:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8312b7e0
	if (!ctx.cr0.eq) goto loc_8312B7E0;
loc_8312B89C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B8A8"))) PPC_WEAK_FUNC(sub_8312B8A8);
PPC_FUNC_IMPL(__imp__sub_8312B8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8312B8B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// b 0x8312b97c
	goto loc_8312B97C;
loc_8312B8E0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addis r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -65536;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq 0x8312b90c
	if (ctx.cr0.eq) goto loc_8312B90C;
	// lhzu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8312B90C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8312b96c
	if (!ctx.cr6.eq) goto loc_8312B96C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x8312b940
	if (!ctx.cr6.eq) goto loc_8312B940;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830ee100
	ctx.lr = 0x8312B93C;
	sub_830EE100(ctx, base);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_8312B940:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8312b96c
	if (!ctx.cr6.eq) goto loc_8312B96C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,136(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r11,r11,32852
	ctx.r11.u64 = ctx.r11.u64 | 32852;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312b96c
	if (ctx.cr0.eq) goto loc_8312B96C;
	// li r30,32
	ctx.r30.s64 = 32;
loc_8312B96C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d5880
	ctx.lr = 0x8312B978;
	sub_830D5880(ctx, base);
	// lhzu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
loc_8312B97C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8312b8e0
	if (!ctx.cr0.eq) goto loc_8312B8E0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B990"))) PPC_WEAK_FUNC(sub_8312B990);
PPC_FUNC_IMPL(__imp__sub_8312B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-11992(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11992);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8312B9A0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-336
	ctx.r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,224
	ctx.r28.s64 = ctx.r3.s64 + 224;
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312B9C4;
	sub_830E4258(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7488
	ctx.lr = 0x8312B9E8;
	sub_830D7488(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r26,24(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// bl 0x830e4258
	ctx.lr = 0x8312BA08;
	sub_830E4258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312babc
	if (ctx.cr6.eq) goto loc_8312BABC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312ba58
	if (!ctx.cr0.eq) goto loc_8312BA58;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8c98
	ctx.lr = 0x8312BA58;
	sub_830D8C98(ctx, base);
loc_8312BA58:
	// addi r26,r30,128
	ctx.r26.s64 = ctx.r30.s64 + 128;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f52b8
	ctx.lr = 0x8312BA68;
	sub_830F52B8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// sthx r27,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u16);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x8312bacc
	goto loc_8312BACC;
loc_8312BABC:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8c98
	ctx.lr = 0x8312BACC;
	sub_830D8C98(ctx, base);
loc_8312BACC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8312bc64
	if (!ctx.cr6.eq) goto loc_8312BC64;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312bb00
	if (ctx.cr0.eq) goto loc_8312BB00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BAEC;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BAF8;
	sub_830E4388(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312bc80
	goto loc_8312BC80;
loc_8312BB00:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830f52b8
	ctx.lr = 0x8312BB0C;
	sub_830F52B8(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b358
	ctx.lr = 0x8312BB18;
	sub_8311B358(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8311c7d0
	ctx.lr = 0x8312BB3C;
	sub_8311C7D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312bbd0
	if (ctx.cr0.eq) goto loc_8312BBD0;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b408
	ctx.lr = 0x8312BB4C;
	sub_8311B408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312bbd0
	if (!ctx.cr0.eq) goto loc_8312BBD0;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312bb9c
	if (ctx.cr0.eq) goto loc_8312BB9C;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b440
	ctx.lr = 0x8312BB68;
	sub_8311B440(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312bb9c
	if (ctx.cr0.eq) goto loc_8312BB9C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-12136
	ctx.r4.s64 = ctx.r11.s64 + -12136;
	// li r5,3889
	ctx.r5.s64 = 3889;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x8312BB8C;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x8312BB9C;
	sub_833A7198(ctx, base);
loc_8312BB9C:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312BBA8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312bbc4
	if (ctx.cr0.eq) goto loc_8312BBC4;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b150
	ctx.lr = 0x8312BBC0;
	sub_8311B150(ctx, base);
	// b 0x8312bbc8
	goto loc_8312BBC8;
loc_8312BBC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8312BBC8:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x8312bc5c
	goto loc_8312BC5C;
loc_8312BBD0:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8312bc88
	if (!ctx.cr0.eq) goto loc_8312BC88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312BBE4;
	sub_830E4258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830e07d8
	ctx.lr = 0x8312BC0C;
	sub_830E07D8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312BC18;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312bc48
	if (ctx.cr0.eq) goto loc_8312BC48;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x830dddc0
	ctx.lr = 0x8312BC44;
	sub_830DDDC0(ctx, base);
	// b 0x8312bc4c
	goto loc_8312BC4C;
loc_8312BC48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8312BC4C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BC5C;
	sub_830E4388(ctx, base);
loc_8312BC5C:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x8312BC64;
	sub_8311BEE8(ctx, base);
loc_8312BC64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BC70;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BC7C;
	sub_830E4388(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8312BC80:
	// addi r1,r31,336
	ctx.r1.s64 = ctx.r31.s64 + 336;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_8312BC88:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-12136
	ctx.r4.s64 = ctx.r11.s64 + -12136;
	// li r5,3884
	ctx.r5.s64 = 3884;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x8312BCA4;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x8312BCB4;
	sub_833A7198(ctx, base);
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
	ctx.lr = 0x8312BCCC;
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

__attribute__((alias("__imp__sub_8312B998"))) PPC_WEAK_FUNC(sub_8312B998);
PPC_FUNC_IMPL(__imp__sub_8312B998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8312B9A0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-336
	ctx.r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,224
	ctx.r28.s64 = ctx.r3.s64 + 224;
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312B9C4;
	sub_830E4258(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7488
	ctx.lr = 0x8312B9E8;
	sub_830D7488(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r26,24(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// bl 0x830e4258
	ctx.lr = 0x8312BA08;
	sub_830E4258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312babc
	if (ctx.cr6.eq) goto loc_8312BABC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312ba58
	if (!ctx.cr0.eq) goto loc_8312BA58;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8c98
	ctx.lr = 0x8312BA58;
	sub_830D8C98(ctx, base);
loc_8312BA58:
	// addi r26,r30,128
	ctx.r26.s64 = ctx.r30.s64 + 128;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f52b8
	ctx.lr = 0x8312BA68;
	sub_830F52B8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// sthx r27,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u16);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x8312bacc
	goto loc_8312BACC;
loc_8312BABC:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8c98
	ctx.lr = 0x8312BACC;
	sub_830D8C98(ctx, base);
loc_8312BACC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8312bc64
	if (!ctx.cr6.eq) goto loc_8312BC64;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312bb00
	if (ctx.cr0.eq) goto loc_8312BB00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BAEC;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BAF8;
	sub_830E4388(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312bc80
	goto loc_8312BC80;
loc_8312BB00:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x830f52b8
	ctx.lr = 0x8312BB0C;
	sub_830F52B8(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b358
	ctx.lr = 0x8312BB18;
	sub_8311B358(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8311c7d0
	ctx.lr = 0x8312BB3C;
	sub_8311C7D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312bbd0
	if (ctx.cr0.eq) goto loc_8312BBD0;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b408
	ctx.lr = 0x8312BB4C;
	sub_8311B408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8312bbd0
	if (!ctx.cr0.eq) goto loc_8312BBD0;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312bb9c
	if (ctx.cr0.eq) goto loc_8312BB9C;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311b440
	ctx.lr = 0x8312BB68;
	sub_8311B440(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312bb9c
	if (ctx.cr0.eq) goto loc_8312BB9C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-12136
	ctx.r4.s64 = ctx.r11.s64 + -12136;
	// li r5,3889
	ctx.r5.s64 = 3889;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x8312BB8C;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x8312BB9C;
	sub_833A7198(ctx, base);
loc_8312BB9C:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312BBA8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312bbc4
	if (ctx.cr0.eq) goto loc_8312BBC4;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8311b150
	ctx.lr = 0x8312BBC0;
	sub_8311B150(ctx, base);
	// b 0x8312bbc8
	goto loc_8312BBC8;
loc_8312BBC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8312BBC8:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x8312bc5c
	goto loc_8312BC5C;
loc_8312BBD0:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8312bc88
	if (!ctx.cr0.eq) goto loc_8312BC88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4258
	ctx.lr = 0x8312BBE4;
	sub_830E4258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x830e07d8
	ctx.lr = 0x8312BC0C;
	sub_830E07D8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x830dd390
	ctx.lr = 0x8312BC18;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312bc48
	if (ctx.cr0.eq) goto loc_8312BC48;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x830dddc0
	ctx.lr = 0x8312BC44;
	sub_830DDDC0(ctx, base);
	// b 0x8312bc4c
	goto loc_8312BC4C;
loc_8312BC48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8312BC4C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BC5C;
	sub_830E4388(ctx, base);
loc_8312BC5C:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x8312BC64;
	sub_8311BEE8(ctx, base);
loc_8312BC64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BC70;
	sub_830E4388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e4388
	ctx.lr = 0x8312BC7C;
	sub_830E4388(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8312BC80:
	// addi r1,r31,336
	ctx.r1.s64 = ctx.r31.s64 + 336;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_8312BC88:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-12136
	ctx.r4.s64 = ctx.r11.s64 + -12136;
	// li r5,3884
	ctx.r5.s64 = 3884;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830dee18
	ctx.lr = 0x8312BCA4;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x8312BCB4;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8312BCB4"))) PPC_WEAK_FUNC(sub_8312BCB4);
PPC_FUNC_IMPL(__imp__sub_8312BCB4) {
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
	ctx.lr = 0x8312BCCC;
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

__attribute__((alias("__imp__sub_8312BCDC"))) PPC_WEAK_FUNC(sub_8312BCDC);
PPC_FUNC_IMPL(__imp__sub_8312BCDC) {
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
	ctx.lr = 0x8312BCF4;
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

__attribute__((alias("__imp__sub_8312BD04"))) PPC_WEAK_FUNC(sub_8312BD04);
PPC_FUNC_IMPL(__imp__sub_8312BD04) {
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
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8311bee8
	ctx.lr = 0x8312BD1C;
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

__attribute__((alias("__imp__sub_8312BD2C"))) PPC_WEAK_FUNC(sub_8312BD2C);
PPC_FUNC_IMPL(__imp__sub_8312BD2C) {
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
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8312BD4C;
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

__attribute__((alias("__imp__sub_8312BD5C"))) PPC_WEAK_FUNC(sub_8312BD5C);
PPC_FUNC_IMPL(__imp__sub_8312BD5C) {
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
	ctx.lr = 0x8312BD74;
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

__attribute__((alias("__imp__sub_8312BD84"))) PPC_WEAK_FUNC(sub_8312BD84);
PPC_FUNC_IMPL(__imp__sub_8312BD84) {
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
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8312BDA4;
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

__attribute__((alias("__imp__sub_8312BDB4"))) PPC_WEAK_FUNC(sub_8312BDB4);
PPC_FUNC_IMPL(__imp__sub_8312BDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312BDB8"))) PPC_WEAK_FUNC(sub_8312BDB8);
PPC_FUNC_IMPL(__imp__sub_8312BDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-11784(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11784);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8312BDC8;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-720
	ctx.r31.s64 = ctx.r1.s64 + -720;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r3.u32);
	// lwz r3,568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,568(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// lbz r11,11(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// lwz r10,568(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// stb r11,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, ctx.r11.u8);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r10,568(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312be3c
	if (ctx.cr0.eq) goto loc_8312BE3C;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BE3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312BE3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83176d90
	ctx.lr = 0x8312BE50;
	sub_83176D90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830d95d0
	ctx.lr = 0x8312BE5C;
	sub_830D95D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830d95a0
	ctx.lr = 0x8312BE68;
	sub_830D95A0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83176c48
	ctx.lr = 0x8312BE74;
	sub_83176C48(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x83176c30
	ctx.lr = 0x8312BE80;
	sub_83176C30(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830db440
	ctx.lr = 0x8312BEBC;
	sub_830DB440(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 228);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312bef8
	if (ctx.cr0.eq) goto loc_8312BEF8;
	// lbz r11,11(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312bef8
	if (ctx.cr0.eq) goto loc_8312BEF8;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830edff8
	ctx.lr = 0x8312BEF8;
	sub_830EDFF8(ctx, base);
loc_8312BEF8:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83112010
	ctx.lr = 0x8312BF00;
	sub_83112010(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312c074
	if (ctx.cr0.eq) goto loc_8312C074;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8312c074
	if (ctx.cr0.eq) goto loc_8312C074;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x830dd390
	ctx.lr = 0x8312BF2C;
	sub_830DD390(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8312bf48
	if (ctx.cr0.eq) goto loc_8312BF48;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x83162188
	ctx.lr = 0x8312BF40;
	sub_83162188(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8312bf4c
	goto loc_8312BF4C;
loc_8312BF48:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8312BF4C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bctrl 
	ctx.lr = 0x8312BF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312BFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r29,220(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r27,108(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r24,104(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bctrl 
	ctx.lr = 0x8312BFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,196(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x83187bb8
	ctx.lr = 0x8312BFF0;
	sub_83187BB8(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8312c030
	if (ctx.cr0.eq) goto loc_8312C030;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312C014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8312C030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8312C030:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8312c040
	if (ctx.cr0.eq) goto loc_8312C040;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ec9c8
	ctx.lr = 0x8312C040;
	sub_830EC9C8(ctx, base);
loc_8312C040:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8312c058
	if (ctx.cr6.eq) goto loc_8312C058;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x830ecb90
	ctx.lr = 0x8312C054;
	sub_830ECB90(ctx, base);
	// stw r3,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r3.u32);
loc_8312C058:
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x831870d0
	ctx.lr = 0x8312C060;
	sub_831870D0(ctx, base);
loc_8312C060:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83177240
	ctx.lr = 0x8312C068;
	sub_83177240(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,720
	ctx.r1.s64 = ctx.r31.s64 + 720;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
loc_8312C074:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8312c060
	goto loc_8312C060;
}

