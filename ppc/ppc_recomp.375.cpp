#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83115B2C"))) PPC_WEAK_FUNC(sub_83115B2C);
PPC_FUNC_IMPL(__imp__sub_83115B2C) {
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
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83115B4C;
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

__attribute__((alias("__imp__sub_83115B5C"))) PPC_WEAK_FUNC(sub_83115B5C);
PPC_FUNC_IMPL(__imp__sub_83115B5C) {
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
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83115B78;
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

__attribute__((alias("__imp__sub_83115B88"))) PPC_WEAK_FUNC(sub_83115B88);
PPC_FUNC_IMPL(__imp__sub_83115B88) {
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
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83115BA4;
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

__attribute__((alias("__imp__sub_83115BB4"))) PPC_WEAK_FUNC(sub_83115BB4);
PPC_FUNC_IMPL(__imp__sub_83115BB4) {
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
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83115BD0;
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

__attribute__((alias("__imp__sub_83115BE0"))) PPC_WEAK_FUNC(sub_83115BE0);
PPC_FUNC_IMPL(__imp__sub_83115BE0) {
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
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83115BFC;
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

__attribute__((alias("__imp__sub_83115C0C"))) PPC_WEAK_FUNC(sub_83115C0C);
PPC_FUNC_IMPL(__imp__sub_83115C0C) {
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83114e70
	ctx.lr = 0x83115C24;
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

__attribute__((alias("__imp__sub_83115C34"))) PPC_WEAK_FUNC(sub_83115C34);
PPC_FUNC_IMPL(__imp__sub_83115C34) {
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
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83115C50;
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

__attribute__((alias("__imp__sub_83115C60"))) PPC_WEAK_FUNC(sub_83115C60);
PPC_FUNC_IMPL(__imp__sub_83115C60) {
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
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83115C7C;
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

__attribute__((alias("__imp__sub_83115C8C"))) PPC_WEAK_FUNC(sub_83115C8C);
PPC_FUNC_IMPL(__imp__sub_83115C8C) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83116b38
	ctx.lr = 0x83115CA4;
	sub_83116B38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115CB4"))) PPC_WEAK_FUNC(sub_83115CB4);
PPC_FUNC_IMPL(__imp__sub_83115CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83115CB8"))) PPC_WEAK_FUNC(sub_83115CB8);
PPC_FUNC_IMPL(__imp__sub_83115CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-26848(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26848);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0188
	ctx.lr = 0x83115CC8;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// stw r21,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r21.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r6,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r6.u32);
	// stb r25,148(r30)
	PPC_STORE_U8(ctx.r30.u32 + 148, ctx.r25.u8);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r21,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r21.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r21,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r21.u32);
	// stw r21,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r21.u32);
	// stw r21,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r21.u32);
	// stw r21,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r21.u32);
	// stw r21,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r21.u32);
	// stb r21,149(r30)
	PPC_STORE_U8(ctx.r30.u32 + 149, ctx.r21.u8);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// bl 0x830dd390
	ctx.lr = 0x83115D2C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83115d44
	if (ctx.cr0.eq) goto loc_83115D44;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8314ef20
	ctx.lr = 0x83115D40;
	sub_8314EF20(ctx, base);
	// b 0x83115d48
	goto loc_83115D48;
loc_83115D44:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83115D48:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r3.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// li r26,14
	ctx.r26.s64 = 14;
	// addi r24,r11,-28032
	ctx.r24.s64 = ctx.r11.s64 + -28032;
loc_83115D60:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83115dc8
	if (ctx.cr6.eq) goto loc_83115DC8;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// ble cr6,0x83115d88
	if (!ctx.cr6.gt) goto loc_83115D88;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// ble cr6,0x83115dc8
	if (!ctx.cr6.gt) goto loc_83115DC8;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// ble cr6,0x83115d88
	if (!ctx.cr6.gt) goto loc_83115D88;
	// cmplwi cr6,r28,11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 11, ctx.xer);
	// bne cr6,0x83115dc8
	if (!ctx.cr6.eq) goto loc_83115DC8;
loc_83115D88:
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x83115D94;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83115dbc
	if (ctx.cr0.eq) goto loc_83115DBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,29
	ctx.r5.s64 = 29;
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x83114678
	ctx.lr = 0x83115DB8;
	sub_83114678(ctx, base);
	// b 0x83115dc0
	goto loc_83115DC0;
loc_83115DBC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83115DC0:
	// stw r3,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r3.u32);
	// b 0x83115dcc
	goto loc_83115DCC;
loc_83115DC8:
	// stw r21,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r21.u32);
loc_83115DCC:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x83115DD8;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83115e04
	if (ctx.cr0.eq) goto loc_83115E04;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd918
	ctx.lr = 0x83115DF8;
	sub_830DD918(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// b 0x83115e08
	goto loc_83115E08;
loc_83115E04:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115E08:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x83115d60
	if (!ctx.cr0.eq) goto loc_83115D60;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x83115E24;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83115e58
	if (ctx.cr0.eq) goto loc_83115E58;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7ac0
	ctx.lr = 0x83115E44;
	sub_830D7AC0(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,-11380
	ctx.r10.s64 = ctx.r10.s64 + -11380;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x83115e5c
	goto loc_83115E5C;
loc_83115E58:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115E5C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x83115E6C;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r28,r11,-27952
	ctx.r28.s64 = ctx.r11.s64 + -27952;
	// beq 0x83115ea0
	if (ctx.cr0.eq) goto loc_83115EA0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83113a38
	ctx.lr = 0x83115E94;
	sub_83113A38(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x83115ea4
	goto loc_83115EA4;
loc_83115EA0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115EA4:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x83115EB4;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83115ee0
	if (ctx.cr0.eq) goto loc_83115EE0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83113a38
	ctx.lr = 0x83115ED4;
	sub_83113A38(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x83115ee4
	goto loc_83115EE4;
loc_83115EE0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115EE4:
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x83115EF4;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83115f28
	if (ctx.cr0.eq) goto loc_83115F28;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8315d600
	ctx.lr = 0x83115F14;
	sub_8315D600(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,3848
	ctx.r10.s64 = ctx.r10.s64 + 3848;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x83115f2c
	goto loc_83115F2C;
loc_83115F28:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115F2C:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd390
	ctx.lr = 0x83115F3C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83115f5c
	if (ctx.cr0.eq) goto loc_83115F5C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8315dc48
	ctx.lr = 0x83115F58;
	sub_8315DC48(ctx, base);
	// b 0x83115f60
	goto loc_83115F60;
loc_83115F5C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83115F60:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116164
	if (ctx.cr6.eq) goto loc_83116164;
	// lbz r10,149(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 149);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83115f80
	if (ctx.cr0.eq) goto loc_83115F80;
	// stb r25,149(r30)
	PPC_STORE_U8(ctx.r30.u32 + 149, ctx.r25.u8);
loc_83115F80:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83115fe4
	if (ctx.cr6.eq) goto loc_83115FE4;
loc_83115F94:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x831a0220
	ctx.lr = 0x83115FA4;
	sub_831A0220(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f4660
	ctx.lr = 0x83115FB4;
	sub_830F4660(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,128(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// bl 0x830d58e8
	ctx.lr = 0x83115FC0;
	sub_830D58E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830f4660
	ctx.lr = 0x83115FCC;
	sub_830F4660(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83115f94
	if (ctx.cr6.lt) goto loc_83115F94;
loc_83115FE4:
	// li r26,12
	ctx.r26.s64 = 12;
	// li r24,14
	ctx.r24.s64 = 14;
loc_83115FEC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831160bc
	if (ctx.cr6.eq) goto loc_831160BC;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 3, ctx.xer);
	// ble cr6,0x83116014
	if (!ctx.cr6.gt) goto loc_83116014;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x831160bc
	if (!ctx.cr6.gt) goto loc_831160BC;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// ble cr6,0x83116014
	if (!ctx.cr6.gt) goto loc_83116014;
	// cmplwi cr6,r25,11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 11, ctx.xer);
	// bne cr6,0x831160bc
	if (!ctx.cr6.eq) goto loc_831160BC;
loc_83116014:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r27,r26,56
	ctx.r27.s64 = ctx.r26.s64 + 56;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831160bc
	if (ctx.cr6.eq) goto loc_831160BC;
loc_83116034:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83116054
	if (ctx.cr6.lt) goto loc_83116054;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x83116060
	goto loc_83116060;
loc_83116054:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831a0220
	ctx.lr = 0x8311605C;
	sub_831A0220(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83116060:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83116074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311608C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// bl 0x83114bc8
	ctx.lr = 0x831160A0;
	sub_83114BC8(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83116034
	if (ctx.cr6.lt) goto loc_83116034;
loc_831160BC:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116108
	if (ctx.cr6.eq) goto loc_83116108;
loc_831160D4:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x831a0220
	ctx.lr = 0x831160E4;
	sub_831A0220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r26,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// bl 0x830f4660
	ctx.lr = 0x831160F0;
	sub_830F4660(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831160d4
	if (ctx.cr6.lt) goto loc_831160D4;
loc_83116108:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bne 0x83115fec
	if (!ctx.cr0.eq) goto loc_83115FEC;
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116164
	if (ctx.cr6.eq) goto loc_83116164;
loc_83116130:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x831a0220
	ctx.lr = 0x83116140;
	sub_831A0220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x830f4660
	ctx.lr = 0x8311614C;
	sub_830F4660(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83116130
	if (ctx.cr6.lt) goto loc_83116130;
loc_83116164:
	// lwz r27,36(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// addi r25,r11,14464
	ctx.r25.s64 = ctx.r11.s64 + 14464;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,8(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116278
	if (ctx.cr6.eq) goto loc_83116278;
loc_8311618C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83164c98
	ctx.lr = 0x83116198;
	sub_83164C98(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831161B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83116268
	if (!ctx.cr6.eq) goto loc_83116268;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831161CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830d8d28
	ctx.lr = 0x831161D4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83116268
	if (!ctx.cr0.eq) goto loc_83116268;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831161F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x830d58e8
	ctx.lr = 0x831161F8;
	sub_830D58E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f4660
	ctx.lr = 0x83116208;
	sub_830F4660(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x830dd390
	ctx.lr = 0x83116214;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116238
	if (ctx.cr0.eq) goto loc_83116238;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83151638
	ctx.lr = 0x83116230;
	sub_83151638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311623c
	goto loc_8311623C;
loc_83116238:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_8311623C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x830f4660
	ctx.lr = 0x83116248;
	sub_830F4660(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83114958
	ctx.lr = 0x83116258;
	sub_83114958(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// bl 0x830f4660
	ctx.lr = 0x83116264;
	sub_830F4660(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_83116268:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8311618c
	if (ctx.cr6.lt) goto loc_8311618C;
loc_83116278:
	// lbz r11,149(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 149);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83116328
	if (!ctx.cr0.eq) goto loc_83116328;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831166c8
	ctx.lr = 0x83116290;
	sub_831166C8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83117d10
	ctx.lr = 0x83116298;
	sub_83117D10(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x830dd390
	ctx.lr = 0x831162A4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831162c8
	if (ctx.cr0.eq) goto loc_831162C8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83151830
	ctx.lr = 0x831162C0;
	sub_83151830(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831162cc
	goto loc_831162CC;
loc_831162C8:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_831162CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x830d58e8
	ctx.lr = 0x831162D8;
	sub_830D58E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830f4660
	ctx.lr = 0x831162E4;
	sub_830F4660(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x830f4660
	ctx.lr = 0x831162F0;
	sub_830F4660(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83114958
	ctx.lr = 0x83116300;
	sub_83114958(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// bl 0x830f4660
	ctx.lr = 0x8311630C;
	sub_830F4660(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,-4736(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	// bl 0x83114cf0
	ctx.lr = 0x83116320;
	sub_83114CF0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83116b38
	ctx.lr = 0x83116328;
	sub_83116B38(ctx, base);
loc_83116328:
	// add r28,r24,r23
	ctx.r28.u64 = ctx.r24.u64 + ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8311635c
	if (!ctx.cr6.lt) goto loc_8311635C;
loc_83116338:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831a0220
	ctx.lr = 0x83116344;
	sub_831A0220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831150d8
	ctx.lr = 0x83116350;
	sub_831150D8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83116338
	if (ctx.cr6.lt) goto loc_83116338;
loc_8311635C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115CC0"))) PPC_WEAK_FUNC(sub_83115CC0);
PPC_FUNC_IMPL(__imp__sub_83115CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0188
	ctx.lr = 0x83115CC8;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// stw r21,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r21.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r6,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r6.u32);
	// stb r25,148(r30)
	PPC_STORE_U8(ctx.r30.u32 + 148, ctx.r25.u8);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r21,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r21.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r21,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r21.u32);
	// stw r21,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r21.u32);
	// stw r21,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r21.u32);
	// stw r21,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r21.u32);
	// stw r21,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r21.u32);
	// stb r21,149(r30)
	PPC_STORE_U8(ctx.r30.u32 + 149, ctx.r21.u8);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// bl 0x830dd390
	ctx.lr = 0x83115D2C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83115d44
	if (ctx.cr0.eq) goto loc_83115D44;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8314ef20
	ctx.lr = 0x83115D40;
	sub_8314EF20(ctx, base);
	// b 0x83115d48
	goto loc_83115D48;
loc_83115D44:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83115D48:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r3.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// li r26,14
	ctx.r26.s64 = 14;
	// addi r24,r11,-28032
	ctx.r24.s64 = ctx.r11.s64 + -28032;
loc_83115D60:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83115dc8
	if (ctx.cr6.eq) goto loc_83115DC8;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// ble cr6,0x83115d88
	if (!ctx.cr6.gt) goto loc_83115D88;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// ble cr6,0x83115dc8
	if (!ctx.cr6.gt) goto loc_83115DC8;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// ble cr6,0x83115d88
	if (!ctx.cr6.gt) goto loc_83115D88;
	// cmplwi cr6,r28,11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 11, ctx.xer);
	// bne cr6,0x83115dc8
	if (!ctx.cr6.eq) goto loc_83115DC8;
loc_83115D88:
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x83115D94;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83115dbc
	if (ctx.cr0.eq) goto loc_83115DBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,29
	ctx.r5.s64 = 29;
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x83114678
	ctx.lr = 0x83115DB8;
	sub_83114678(ctx, base);
	// b 0x83115dc0
	goto loc_83115DC0;
loc_83115DBC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83115DC0:
	// stw r3,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r3.u32);
	// b 0x83115dcc
	goto loc_83115DCC;
loc_83115DC8:
	// stw r21,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r21.u32);
loc_83115DCC:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x83115DD8;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83115e04
	if (ctx.cr0.eq) goto loc_83115E04;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd918
	ctx.lr = 0x83115DF8;
	sub_830DD918(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// b 0x83115e08
	goto loc_83115E08;
loc_83115E04:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115E08:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x83115d60
	if (!ctx.cr0.eq) goto loc_83115D60;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x83115E24;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83115e58
	if (ctx.cr0.eq) goto loc_83115E58;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7ac0
	ctx.lr = 0x83115E44;
	sub_830D7AC0(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,-11380
	ctx.r10.s64 = ctx.r10.s64 + -11380;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x83115e5c
	goto loc_83115E5C;
loc_83115E58:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115E5C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x83115E6C;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r28,r11,-27952
	ctx.r28.s64 = ctx.r11.s64 + -27952;
	// beq 0x83115ea0
	if (ctx.cr0.eq) goto loc_83115EA0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83113a38
	ctx.lr = 0x83115E94;
	sub_83113A38(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x83115ea4
	goto loc_83115EA4;
loc_83115EA0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115EA4:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x83115EB4;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83115ee0
	if (ctx.cr0.eq) goto loc_83115EE0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83113a38
	ctx.lr = 0x83115ED4;
	sub_83113A38(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x83115ee4
	goto loc_83115EE4;
loc_83115EE0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115EE4:
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x83115EF4;
	sub_830DD390(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq 0x83115f28
	if (ctx.cr0.eq) goto loc_83115F28;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8315d600
	ctx.lr = 0x83115F14;
	sub_8315D600(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,3848
	ctx.r10.s64 = ctx.r10.s64 + 3848;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x83115f2c
	goto loc_83115F2C;
loc_83115F28:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83115F2C:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd390
	ctx.lr = 0x83115F3C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83115f5c
	if (ctx.cr0.eq) goto loc_83115F5C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8315dc48
	ctx.lr = 0x83115F58;
	sub_8315DC48(ctx, base);
	// b 0x83115f60
	goto loc_83115F60;
loc_83115F5C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83115F60:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116164
	if (ctx.cr6.eq) goto loc_83116164;
	// lbz r10,149(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 149);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83115f80
	if (ctx.cr0.eq) goto loc_83115F80;
	// stb r25,149(r30)
	PPC_STORE_U8(ctx.r30.u32 + 149, ctx.r25.u8);
loc_83115F80:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83115fe4
	if (ctx.cr6.eq) goto loc_83115FE4;
loc_83115F94:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x831a0220
	ctx.lr = 0x83115FA4;
	sub_831A0220(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f4660
	ctx.lr = 0x83115FB4;
	sub_830F4660(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,128(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// bl 0x830d58e8
	ctx.lr = 0x83115FC0;
	sub_830D58E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830f4660
	ctx.lr = 0x83115FCC;
	sub_830F4660(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83115f94
	if (ctx.cr6.lt) goto loc_83115F94;
loc_83115FE4:
	// li r26,12
	ctx.r26.s64 = 12;
	// li r24,14
	ctx.r24.s64 = 14;
loc_83115FEC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831160bc
	if (ctx.cr6.eq) goto loc_831160BC;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 3, ctx.xer);
	// ble cr6,0x83116014
	if (!ctx.cr6.gt) goto loc_83116014;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x831160bc
	if (!ctx.cr6.gt) goto loc_831160BC;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// ble cr6,0x83116014
	if (!ctx.cr6.gt) goto loc_83116014;
	// cmplwi cr6,r25,11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 11, ctx.xer);
	// bne cr6,0x831160bc
	if (!ctx.cr6.eq) goto loc_831160BC;
loc_83116014:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r27,r26,56
	ctx.r27.s64 = ctx.r26.s64 + 56;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831160bc
	if (ctx.cr6.eq) goto loc_831160BC;
loc_83116034:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83116054
	if (ctx.cr6.lt) goto loc_83116054;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x83116060
	goto loc_83116060;
loc_83116054:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831a0220
	ctx.lr = 0x8311605C;
	sub_831A0220(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83116060:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83116074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311608C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// bl 0x83114bc8
	ctx.lr = 0x831160A0;
	sub_83114BC8(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83116034
	if (ctx.cr6.lt) goto loc_83116034;
loc_831160BC:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116108
	if (ctx.cr6.eq) goto loc_83116108;
loc_831160D4:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x831a0220
	ctx.lr = 0x831160E4;
	sub_831A0220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r26,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// bl 0x830f4660
	ctx.lr = 0x831160F0;
	sub_830F4660(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831160d4
	if (ctx.cr6.lt) goto loc_831160D4;
loc_83116108:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bne 0x83115fec
	if (!ctx.cr0.eq) goto loc_83115FEC;
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116164
	if (ctx.cr6.eq) goto loc_83116164;
loc_83116130:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x831a0220
	ctx.lr = 0x83116140;
	sub_831A0220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x830f4660
	ctx.lr = 0x8311614C;
	sub_830F4660(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83116130
	if (ctx.cr6.lt) goto loc_83116130;
loc_83116164:
	// lwz r27,36(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// addi r25,r11,14464
	ctx.r25.s64 = ctx.r11.s64 + 14464;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,8(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116278
	if (ctx.cr6.eq) goto loc_83116278;
loc_8311618C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83164c98
	ctx.lr = 0x83116198;
	sub_83164C98(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831161B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83116268
	if (!ctx.cr6.eq) goto loc_83116268;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831161CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830d8d28
	ctx.lr = 0x831161D4;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83116268
	if (!ctx.cr0.eq) goto loc_83116268;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831161F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x830d58e8
	ctx.lr = 0x831161F8;
	sub_830D58E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f4660
	ctx.lr = 0x83116208;
	sub_830F4660(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x830dd390
	ctx.lr = 0x83116214;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116238
	if (ctx.cr0.eq) goto loc_83116238;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83151638
	ctx.lr = 0x83116230;
	sub_83151638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311623c
	goto loc_8311623C;
loc_83116238:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_8311623C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x830f4660
	ctx.lr = 0x83116248;
	sub_830F4660(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83114958
	ctx.lr = 0x83116258;
	sub_83114958(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// bl 0x830f4660
	ctx.lr = 0x83116264;
	sub_830F4660(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_83116268:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8311618c
	if (ctx.cr6.lt) goto loc_8311618C;
loc_83116278:
	// lbz r11,149(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 149);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83116328
	if (!ctx.cr0.eq) goto loc_83116328;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831166c8
	ctx.lr = 0x83116290;
	sub_831166C8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83117d10
	ctx.lr = 0x83116298;
	sub_83117D10(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x830dd390
	ctx.lr = 0x831162A4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831162c8
	if (ctx.cr0.eq) goto loc_831162C8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83151830
	ctx.lr = 0x831162C0;
	sub_83151830(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831162cc
	goto loc_831162CC;
loc_831162C8:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_831162CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x830d58e8
	ctx.lr = 0x831162D8;
	sub_830D58E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830f4660
	ctx.lr = 0x831162E4;
	sub_830F4660(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x830f4660
	ctx.lr = 0x831162F0;
	sub_830F4660(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83114958
	ctx.lr = 0x83116300;
	sub_83114958(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// bl 0x830f4660
	ctx.lr = 0x8311630C;
	sub_830F4660(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,-4736(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	// bl 0x83114cf0
	ctx.lr = 0x83116320;
	sub_83114CF0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83116b38
	ctx.lr = 0x83116328;
	sub_83116B38(ctx, base);
loc_83116328:
	// add r28,r24,r23
	ctx.r28.u64 = ctx.r24.u64 + ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8311635c
	if (!ctx.cr6.lt) goto loc_8311635C;
loc_83116338:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831a0220
	ctx.lr = 0x83116344;
	sub_831A0220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831150d8
	ctx.lr = 0x83116350;
	sub_831150D8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83116338
	if (ctx.cr6.lt) goto loc_83116338;
loc_8311635C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116368"))) PPC_WEAK_FUNC(sub_83116368);
PPC_FUNC_IMPL(__imp__sub_83116368) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83116384;
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

__attribute__((alias("__imp__sub_83116394"))) PPC_WEAK_FUNC(sub_83116394);
PPC_FUNC_IMPL(__imp__sub_83116394) {
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
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831163B4;
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

__attribute__((alias("__imp__sub_831163C4"))) PPC_WEAK_FUNC(sub_831163C4);
PPC_FUNC_IMPL(__imp__sub_831163C4) {
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
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831163E4;
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

__attribute__((alias("__imp__sub_831163F4"))) PPC_WEAK_FUNC(sub_831163F4);
PPC_FUNC_IMPL(__imp__sub_831163F4) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83116410;
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

__attribute__((alias("__imp__sub_83116420"))) PPC_WEAK_FUNC(sub_83116420);
PPC_FUNC_IMPL(__imp__sub_83116420) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8311643C;
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

__attribute__((alias("__imp__sub_8311644C"))) PPC_WEAK_FUNC(sub_8311644C);
PPC_FUNC_IMPL(__imp__sub_8311644C) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83116468;
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

__attribute__((alias("__imp__sub_83116478"))) PPC_WEAK_FUNC(sub_83116478);
PPC_FUNC_IMPL(__imp__sub_83116478) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83116494;
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

__attribute__((alias("__imp__sub_831164A4"))) PPC_WEAK_FUNC(sub_831164A4);
PPC_FUNC_IMPL(__imp__sub_831164A4) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831164C0;
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

__attribute__((alias("__imp__sub_831164D0"))) PPC_WEAK_FUNC(sub_831164D0);
PPC_FUNC_IMPL(__imp__sub_831164D0) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831164EC;
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

__attribute__((alias("__imp__sub_831164FC"))) PPC_WEAK_FUNC(sub_831164FC);
PPC_FUNC_IMPL(__imp__sub_831164FC) {
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83116b38
	ctx.lr = 0x83116514;
	sub_83116B38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116524"))) PPC_WEAK_FUNC(sub_83116524);
PPC_FUNC_IMPL(__imp__sub_83116524) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83116540;
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

__attribute__((alias("__imp__sub_83116550"))) PPC_WEAK_FUNC(sub_83116550);
PPC_FUNC_IMPL(__imp__sub_83116550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,-26624
	ctx.r11.s64 = ctx.r11.s64 + -26624;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116560"))) PPC_WEAK_FUNC(sub_83116560);
PPC_FUNC_IMPL(__imp__sub_83116560) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x830f8438
	sub_830F8438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116570"))) PPC_WEAK_FUNC(sub_83116570);
PPC_FUNC_IMPL(__imp__sub_83116570) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83116588;
	sub_830D8D28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_831165A4"))) PPC_WEAK_FUNC(sub_831165A4);
PPC_FUNC_IMPL(__imp__sub_831165A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831165A8"))) PPC_WEAK_FUNC(sub_831165A8);
PPC_FUNC_IMPL(__imp__sub_831165A8) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83151ff8
	ctx.lr = 0x831165D4;
	sub_83151FF8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-26548
	ctx.r11.s64 = ctx.r11.s64 + -26548;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83116600"))) PPC_WEAK_FUNC(sub_83116600);
PPC_FUNC_IMPL(__imp__sub_83116600) {
	PPC_FUNC_PROLOGUE();
	// b 0x83116610
	goto loc_83116610;
loc_83116604:
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x83116620
	if (ctx.cr6.eq) goto loc_83116620;
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
loc_83116610:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83116604
	if (!ctx.cr6.eq) goto loc_83116604;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83116620:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116628"))) PPC_WEAK_FUNC(sub_83116628);
PPC_FUNC_IMPL(__imp__sub_83116628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-26488(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26488);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83116638;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x830dd390
	ctx.lr = 0x83116664;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311668c
	if (ctx.cr0.eq) goto loc_8311668C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83153340
	ctx.lr = 0x83116688;
	sub_83153340(ctx, base);
	// b 0x83116690
	goto loc_83116690;
loc_8311668C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83116690:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116630"))) PPC_WEAK_FUNC(sub_83116630);
PPC_FUNC_IMPL(__imp__sub_83116630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83116638;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x830dd390
	ctx.lr = 0x83116664;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311668c
	if (ctx.cr0.eq) goto loc_8311668C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83153340
	ctx.lr = 0x83116688;
	sub_83153340(ctx, base);
	// b 0x83116690
	goto loc_83116690;
loc_8311668C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83116690:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116698"))) PPC_WEAK_FUNC(sub_83116698);
PPC_FUNC_IMPL(__imp__sub_83116698) {
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
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831166B4;
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

__attribute__((alias("__imp__sub_831166C4"))) PPC_WEAK_FUNC(sub_831166C4);
PPC_FUNC_IMPL(__imp__sub_831166C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831166C8"))) PPC_WEAK_FUNC(sub_831166C8);
PPC_FUNC_IMPL(__imp__sub_831166C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-26440
	ctx.r11.s64 = ctx.r11.s64 + -26440;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831166E4"))) PPC_WEAK_FUNC(sub_831166E4);
PPC_FUNC_IMPL(__imp__sub_831166E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831166E8"))) PPC_WEAK_FUNC(sub_831166E8);
PPC_FUNC_IMPL(__imp__sub_831166E8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd390
	ctx.lr = 0x83116708;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311672c
	if (ctx.cr0.eq) goto loc_8311672C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,-26440
	ctx.r11.s64 = ctx.r10.s64 + -26440;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83116730
	goto loc_83116730;
loc_8311672C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83116730:
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

__attribute__((alias("__imp__sub_83116744"))) PPC_WEAK_FUNC(sub_83116744);
PPC_FUNC_IMPL(__imp__sub_83116744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83116748"))) PPC_WEAK_FUNC(sub_83116748);
PPC_FUNC_IMPL(__imp__sub_83116748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r3,r11,24388
	ctx.r3.s64 = ctx.r11.s64 + 24388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116754"))) PPC_WEAK_FUNC(sub_83116754);
PPC_FUNC_IMPL(__imp__sub_83116754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83116758"))) PPC_WEAK_FUNC(sub_83116758);
PPC_FUNC_IMPL(__imp__sub_83116758) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26548
	ctx.r11.s64 = ctx.r11.s64 + -26548;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x83152b88
	ctx.lr = 0x83116784;
	sub_83152B88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83116794
	if (ctx.cr0.eq) goto loc_83116794;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83116794;
	sub_830DD3E0(ctx, base);
loc_83116794:
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

__attribute__((alias("__imp__sub_831167B0"))) PPC_WEAK_FUNC(sub_831167B0);
PPC_FUNC_IMPL(__imp__sub_831167B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x831167B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83116864
	if (ctx.cr6.eq) goto loc_83116864;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83116860
	if (!ctx.cr6.gt) goto loc_83116860;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_831167E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83116844
	if (ctx.cr6.eq) goto loc_83116844;
loc_831167F4:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83116820
	if (ctx.cr0.eq) goto loc_83116820;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83116820
	if (ctx.cr6.eq) goto loc_83116820;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c10e98
	ctx.lr = 0x83116818;
	sub_82C10E98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83116820;
	sub_830DD3E0(ctx, base);
loc_83116820:
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
	ctx.lr = 0x83116838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x831167f4
	if (!ctx.cr6.eq) goto loc_831167F4;
loc_83116844:
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
	// blt cr6,0x831167e4
	if (ctx.cr6.lt) goto loc_831167E4;
loc_83116860:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_83116864:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311686C"))) PPC_WEAK_FUNC(sub_8311686C);
PPC_FUNC_IMPL(__imp__sub_8311686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83116870"))) PPC_WEAK_FUNC(sub_83116870);
PPC_FUNC_IMPL(__imp__sub_83116870) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831168b8
	if (ctx.cr6.eq) goto loc_831168B8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
loc_83116894:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831168A4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831168d4
	if (!ctx.cr0.eq) goto loc_831168D4;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83116894
	if (!ctx.cr6.eq) goto loc_83116894;
loc_831168B8:
	// li r3,8
	ctx.r3.s64 = 8;
loc_831168BC:
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
loc_831168D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831168E4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x831168f4
	if (ctx.cr0.eq) goto loc_831168F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_831168F4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831168bc
	goto loc_831168BC;
}

__attribute__((alias("__imp__sub_831168FC"))) PPC_WEAK_FUNC(sub_831168FC);
PPC_FUNC_IMPL(__imp__sub_831168FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83116900"))) PPC_WEAK_FUNC(sub_83116900);
PPC_FUNC_IMPL(__imp__sub_83116900) {
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
	// beq cr6,0x83116958
	if (ctx.cr6.eq) goto loc_83116958;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
loc_83116924:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4736);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x830ec0c8
	ctx.lr = 0x83116934;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83116944
	if (ctx.cr0.eq) goto loc_83116944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83116944:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83116974
	if (ctx.cr6.eq) goto loc_83116974;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83116924
	if (!ctx.cr6.eq) goto loc_83116924;
loc_83116958:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311695C:
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
loc_83116974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8311695c
	goto loc_8311695C;
}

__attribute__((alias("__imp__sub_8311697C"))) PPC_WEAK_FUNC(sub_8311697C);
PPC_FUNC_IMPL(__imp__sub_8311697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83116980"))) PPC_WEAK_FUNC(sub_83116980);
PPC_FUNC_IMPL(__imp__sub_83116980) {
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
	// bl 0x831167b0
	ctx.lr = 0x83116998;
	sub_831167B0(ctx, base);
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
	ctx.lr = 0x831169B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831169d8
	if (ctx.cr6.eq) goto loc_831169D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831169D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831169D8:
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

__attribute__((alias("__imp__sub_831169EC"))) PPC_WEAK_FUNC(sub_831169EC);
PPC_FUNC_IMPL(__imp__sub_831169EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831169F0"))) PPC_WEAK_FUNC(sub_831169F0);
PPC_FUNC_IMPL(__imp__sub_831169F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x831169F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83116a24
	if (ctx.cr6.lt) goto loc_83116A24;
	// bl 0x8317ed50
	ctx.lr = 0x83116A24;
	sub_8317ED50(ctx, base);
loc_83116A24:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83116A34;
	sub_830EC0C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83116a70
	if (ctx.cr0.eq) goto loc_83116A70;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83116a64
	if (ctx.cr0.eq) goto loc_83116A64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83116a64
	if (ctx.cr6.eq) goto loc_83116A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x83116A5C;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83116A64;
	sub_830DD3E0(ctx, base);
loc_83116A64:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// b 0x83116ad0
	goto loc_83116AD0;
loc_83116A70:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83116A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116ab4
	if (ctx.cr0.eq) goto loc_83116AB4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x83116ab8
	goto loc_83116AB8;
loc_83116AB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83116AB8:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83116AD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116AD8"))) PPC_WEAK_FUNC(sub_83116AD8);
PPC_FUNC_IMPL(__imp__sub_83116AD8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83116b14
	if (ctx.cr6.eq) goto loc_83116B14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831147f8
	ctx.lr = 0x83116B04;
	sub_831147F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83116B0C;
	sub_830DD3E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_83116B14:
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

__attribute__((alias("__imp__sub_83116B2C"))) PPC_WEAK_FUNC(sub_83116B2C);
PPC_FUNC_IMPL(__imp__sub_83116B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83116B30"))) PPC_WEAK_FUNC(sub_83116B30);
PPC_FUNC_IMPL(__imp__sub_83116B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-26416(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26416);
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
	// addi r11,r11,-26440
	ctx.r11.s64 = ctx.r11.s64 + -26440;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x83116ad8
	ctx.lr = 0x83116B68;
	sub_83116AD8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
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

__attribute__((alias("__imp__sub_83116B38"))) PPC_WEAK_FUNC(sub_83116B38);
PPC_FUNC_IMPL(__imp__sub_83116B38) {
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
	// addi r11,r11,-26440
	ctx.r11.s64 = ctx.r11.s64 + -26440;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x83116ad8
	ctx.lr = 0x83116B68;
	sub_83116AD8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,19412
	ctx.r11.s64 = ctx.r11.s64 + 19412;
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

__attribute__((alias("__imp__sub_83116B8C"))) PPC_WEAK_FUNC(sub_83116B8C);
PPC_FUNC_IMPL(__imp__sub_83116B8C) {
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
	// bl 0x8313e940
	ctx.lr = 0x83116BA4;
	sub_8313E940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116BB4"))) PPC_WEAK_FUNC(sub_83116BB4);
PPC_FUNC_IMPL(__imp__sub_83116BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83116BB8"))) PPC_WEAK_FUNC(sub_83116BB8);
PPC_FUNC_IMPL(__imp__sub_83116BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-26240(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26240);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83116BC8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83116BDC;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83116c2c
	if (ctx.cr0.eq) goto loc_83116C2C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116BF0;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116c08
	if (ctx.cr0.eq) goto loc_83116C08;
	// bl 0x83105e58
	ctx.lr = 0x83116C00;
	sub_83105E58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83116c0c
	goto loc_83116C0C;
loc_83116C08:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83116C0C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,-5084(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83194ef0
	ctx.lr = 0x83116C24;
	sub_83194EF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83116c30
	goto loc_83116C30;
loc_83116C2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83116C30:
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,-4732(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4732, ctx.r11.u32);
	// bl 0x830dd340
	ctx.lr = 0x83116C40;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116c5c
	if (ctx.cr0.eq) goto loc_83116C5C;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x830f2cf0
	ctx.lr = 0x83116C54;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116c60
	goto loc_83116C60;
loc_83116C5C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116C60:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,16992
	ctx.r4.s64 = ctx.r11.s64 + 16992;
	// bl 0x830ec170
	ctx.lr = 0x83116C70;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116C84;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116C8C;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116ca8
	if (ctx.cr0.eq) goto loc_83116CA8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116CA0;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116cac
	goto loc_83116CAC;
loc_83116CA8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116CAC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,16976
	ctx.r4.s64 = ctx.r11.s64 + 16976;
	// bl 0x830ec170
	ctx.lr = 0x83116CBC;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116CD0;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116CD8;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116cf4
	if (ctx.cr0.eq) goto loc_83116CF4;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116CEC;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116cf8
	goto loc_83116CF8;
loc_83116CF4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116CF8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17096
	ctx.r4.s64 = ctx.r11.s64 + 17096;
	// bl 0x830ec170
	ctx.lr = 0x83116D08;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116D1C;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116D24;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116d40
	if (ctx.cr0.eq) goto loc_83116D40;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116D38;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116d44
	goto loc_83116D44;
loc_83116D40:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116D44:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17108
	ctx.r4.s64 = ctx.r11.s64 + 17108;
	// bl 0x830ec170
	ctx.lr = 0x83116D54;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116D68;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116D70;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116d8c
	if (ctx.cr0.eq) goto loc_83116D8C;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116D84;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116d90
	goto loc_83116D90;
loc_83116D8C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116D90:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17116
	ctx.r4.s64 = ctx.r11.s64 + 17116;
	// bl 0x830ec170
	ctx.lr = 0x83116DA0;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116DB4;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116DBC;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116dd8
	if (ctx.cr0.eq) goto loc_83116DD8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116DD0;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116ddc
	goto loc_83116DDC;
loc_83116DD8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116DDC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17128
	ctx.r4.s64 = ctx.r11.s64 + 17128;
	// bl 0x830ec170
	ctx.lr = 0x83116DEC;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116E00;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116E08;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116e24
	if (ctx.cr0.eq) goto loc_83116E24;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116E1C;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116e28
	goto loc_83116E28;
loc_83116E24:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116E28:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17140
	ctx.r4.s64 = ctx.r11.s64 + 17140;
	// bl 0x830ec170
	ctx.lr = 0x83116E38;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116E4C;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116E54;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116e70
	if (ctx.cr0.eq) goto loc_83116E70;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116E68;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116e74
	goto loc_83116E74;
loc_83116E70:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116E74:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17288
	ctx.r4.s64 = ctx.r11.s64 + 17288;
	// bl 0x830ec170
	ctx.lr = 0x83116E84;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116E98;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116EA0;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116ebc
	if (ctx.cr0.eq) goto loc_83116EBC;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116EB4;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116ec0
	goto loc_83116EC0;
loc_83116EBC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116EC0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17064
	ctx.r4.s64 = ctx.r11.s64 + 17064;
	// bl 0x830ec170
	ctx.lr = 0x83116ED0;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116EE4;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116EEC;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116f08
	if (ctx.cr0.eq) goto loc_83116F08;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116F00;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116f0c
	goto loc_83116F0C;
loc_83116F08:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116F0C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17180
	ctx.r4.s64 = ctx.r11.s64 + 17180;
	// bl 0x830ec170
	ctx.lr = 0x83116F1C;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116F30;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116F38;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116f54
	if (ctx.cr0.eq) goto loc_83116F54;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116F4C;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116f58
	goto loc_83116F58;
loc_83116F54:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116F58:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17208
	ctx.r4.s64 = ctx.r11.s64 + 17208;
	// bl 0x830ec170
	ctx.lr = 0x83116F68;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116F7C;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116F84;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116fa0
	if (ctx.cr0.eq) goto loc_83116FA0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116F98;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116fa4
	goto loc_83116FA4;
loc_83116FA0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116FA4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17232
	ctx.r4.s64 = ctx.r11.s64 + 17232;
	// bl 0x830ec170
	ctx.lr = 0x83116FB4;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116FC8;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116FD0;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116fec
	if (ctx.cr0.eq) goto loc_83116FEC;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116FE4;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116ff0
	goto loc_83116FF0;
loc_83116FEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116FF0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17260
	ctx.r4.s64 = ctx.r11.s64 + 17260;
	// bl 0x830ec170
	ctx.lr = 0x83117000;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83117014;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x8311701C;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117038
	if (ctx.cr0.eq) goto loc_83117038;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x830f2cf0
	ctx.lr = 0x83117030;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311703c
	goto loc_8311703C;
loc_83117038:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8311703C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17024
	ctx.r4.s64 = ctx.r11.s64 + 17024;
	// bl 0x830ec170
	ctx.lr = 0x8311704C;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83117060;
	sub_831169F0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116BC0"))) PPC_WEAK_FUNC(sub_83116BC0);
PPC_FUNC_IMPL(__imp__sub_83116BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83116BC8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83116BDC;
	sub_830DD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83116c2c
	if (ctx.cr0.eq) goto loc_83116C2C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116BF0;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116c08
	if (ctx.cr0.eq) goto loc_83116C08;
	// bl 0x83105e58
	ctx.lr = 0x83116C00;
	sub_83105E58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x83116c0c
	goto loc_83116C0C;
loc_83116C08:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83116C0C:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,-5084(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83194ef0
	ctx.lr = 0x83116C24;
	sub_83194EF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83116c30
	goto loc_83116C30;
loc_83116C2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83116C30:
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,-4732(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4732, ctx.r11.u32);
	// bl 0x830dd340
	ctx.lr = 0x83116C40;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116c5c
	if (ctx.cr0.eq) goto loc_83116C5C;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x830f2cf0
	ctx.lr = 0x83116C54;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116c60
	goto loc_83116C60;
loc_83116C5C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116C60:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,16992
	ctx.r4.s64 = ctx.r11.s64 + 16992;
	// bl 0x830ec170
	ctx.lr = 0x83116C70;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116C84;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116C8C;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116ca8
	if (ctx.cr0.eq) goto loc_83116CA8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116CA0;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116cac
	goto loc_83116CAC;
loc_83116CA8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116CAC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,16976
	ctx.r4.s64 = ctx.r11.s64 + 16976;
	// bl 0x830ec170
	ctx.lr = 0x83116CBC;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116CD0;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116CD8;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116cf4
	if (ctx.cr0.eq) goto loc_83116CF4;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116CEC;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116cf8
	goto loc_83116CF8;
loc_83116CF4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116CF8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17096
	ctx.r4.s64 = ctx.r11.s64 + 17096;
	// bl 0x830ec170
	ctx.lr = 0x83116D08;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116D1C;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116D24;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116d40
	if (ctx.cr0.eq) goto loc_83116D40;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116D38;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116d44
	goto loc_83116D44;
loc_83116D40:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116D44:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17108
	ctx.r4.s64 = ctx.r11.s64 + 17108;
	// bl 0x830ec170
	ctx.lr = 0x83116D54;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116D68;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116D70;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116d8c
	if (ctx.cr0.eq) goto loc_83116D8C;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116D84;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116d90
	goto loc_83116D90;
loc_83116D8C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116D90:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17116
	ctx.r4.s64 = ctx.r11.s64 + 17116;
	// bl 0x830ec170
	ctx.lr = 0x83116DA0;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116DB4;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116DBC;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116dd8
	if (ctx.cr0.eq) goto loc_83116DD8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116DD0;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116ddc
	goto loc_83116DDC;
loc_83116DD8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116DDC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17128
	ctx.r4.s64 = ctx.r11.s64 + 17128;
	// bl 0x830ec170
	ctx.lr = 0x83116DEC;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116E00;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116E08;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116e24
	if (ctx.cr0.eq) goto loc_83116E24;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116E1C;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116e28
	goto loc_83116E28;
loc_83116E24:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116E28:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17140
	ctx.r4.s64 = ctx.r11.s64 + 17140;
	// bl 0x830ec170
	ctx.lr = 0x83116E38;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116E4C;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116E54;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116e70
	if (ctx.cr0.eq) goto loc_83116E70;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830f2cf0
	ctx.lr = 0x83116E68;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116e74
	goto loc_83116E74;
loc_83116E70:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116E74:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17288
	ctx.r4.s64 = ctx.r11.s64 + 17288;
	// bl 0x830ec170
	ctx.lr = 0x83116E84;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116E98;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116EA0;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116ebc
	if (ctx.cr0.eq) goto loc_83116EBC;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116EB4;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116ec0
	goto loc_83116EC0;
loc_83116EBC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116EC0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17064
	ctx.r4.s64 = ctx.r11.s64 + 17064;
	// bl 0x830ec170
	ctx.lr = 0x83116ED0;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116EE4;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116EEC;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116f08
	if (ctx.cr0.eq) goto loc_83116F08;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116F00;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116f0c
	goto loc_83116F0C;
loc_83116F08:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116F0C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17180
	ctx.r4.s64 = ctx.r11.s64 + 17180;
	// bl 0x830ec170
	ctx.lr = 0x83116F1C;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116F30;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116F38;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116f54
	if (ctx.cr0.eq) goto loc_83116F54;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116F4C;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116f58
	goto loc_83116F58;
loc_83116F54:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116F58:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17208
	ctx.r4.s64 = ctx.r11.s64 + 17208;
	// bl 0x830ec170
	ctx.lr = 0x83116F68;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116F7C;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116F84;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116fa0
	if (ctx.cr0.eq) goto loc_83116FA0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116F98;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116fa4
	goto loc_83116FA4;
loc_83116FA0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116FA4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17232
	ctx.r4.s64 = ctx.r11.s64 + 17232;
	// bl 0x830ec170
	ctx.lr = 0x83116FB4;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83116FC8;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83116FD0;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83116fec
	if (ctx.cr0.eq) goto loc_83116FEC;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x830f2cf0
	ctx.lr = 0x83116FE4;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83116ff0
	goto loc_83116FF0;
loc_83116FEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83116FF0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17260
	ctx.r4.s64 = ctx.r11.s64 + 17260;
	// bl 0x830ec170
	ctx.lr = 0x83117000;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83117014;
	sub_831169F0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x8311701C;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117038
	if (ctx.cr0.eq) goto loc_83117038;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x830f2cf0
	ctx.lr = 0x83117030;
	sub_830F2CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311703c
	goto loc_8311703C;
loc_83117038:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8311703C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,17024
	ctx.r4.s64 = ctx.r11.s64 + 17024;
	// bl 0x830ec170
	ctx.lr = 0x8311704C;
	sub_830EC170(ctx, base);
	// lwz r11,-4732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831169f0
	ctx.lr = 0x83117060;
	sub_831169F0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83117068"))) PPC_WEAK_FUNC(sub_83117068);
PPC_FUNC_IMPL(__imp__sub_83117068) {
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
	ctx.lr = 0x83117080;
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

__attribute__((alias("__imp__sub_83117090"))) PPC_WEAK_FUNC(sub_83117090);
PPC_FUNC_IMPL(__imp__sub_83117090) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831170A8;
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

__attribute__((alias("__imp__sub_831170B8"))) PPC_WEAK_FUNC(sub_831170B8);
PPC_FUNC_IMPL(__imp__sub_831170B8) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831170D0;
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

__attribute__((alias("__imp__sub_831170E0"))) PPC_WEAK_FUNC(sub_831170E0);
PPC_FUNC_IMPL(__imp__sub_831170E0) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831170F8;
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

__attribute__((alias("__imp__sub_83117108"))) PPC_WEAK_FUNC(sub_83117108);
PPC_FUNC_IMPL(__imp__sub_83117108) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117120;
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

__attribute__((alias("__imp__sub_83117130"))) PPC_WEAK_FUNC(sub_83117130);
PPC_FUNC_IMPL(__imp__sub_83117130) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117148;
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

__attribute__((alias("__imp__sub_83117158"))) PPC_WEAK_FUNC(sub_83117158);
PPC_FUNC_IMPL(__imp__sub_83117158) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117170;
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

__attribute__((alias("__imp__sub_83117180"))) PPC_WEAK_FUNC(sub_83117180);
PPC_FUNC_IMPL(__imp__sub_83117180) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117198;
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

__attribute__((alias("__imp__sub_831171A8"))) PPC_WEAK_FUNC(sub_831171A8);
PPC_FUNC_IMPL(__imp__sub_831171A8) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831171C0;
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

__attribute__((alias("__imp__sub_831171D0"))) PPC_WEAK_FUNC(sub_831171D0);
PPC_FUNC_IMPL(__imp__sub_831171D0) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831171E8;
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

__attribute__((alias("__imp__sub_831171F8"))) PPC_WEAK_FUNC(sub_831171F8);
PPC_FUNC_IMPL(__imp__sub_831171F8) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117210;
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

__attribute__((alias("__imp__sub_83117220"))) PPC_WEAK_FUNC(sub_83117220);
PPC_FUNC_IMPL(__imp__sub_83117220) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117238;
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

__attribute__((alias("__imp__sub_83117248"))) PPC_WEAK_FUNC(sub_83117248);
PPC_FUNC_IMPL(__imp__sub_83117248) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117260;
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

__attribute__((alias("__imp__sub_83117270"))) PPC_WEAK_FUNC(sub_83117270);
PPC_FUNC_IMPL(__imp__sub_83117270) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117288;
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

__attribute__((alias("__imp__sub_83117298"))) PPC_WEAK_FUNC(sub_83117298);
PPC_FUNC_IMPL(__imp__sub_83117298) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831172B0;
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

__attribute__((alias("__imp__sub_831172C0"))) PPC_WEAK_FUNC(sub_831172C0);
PPC_FUNC_IMPL(__imp__sub_831172C0) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831172D8;
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

__attribute__((alias("__imp__sub_831172E8"))) PPC_WEAK_FUNC(sub_831172E8);
PPC_FUNC_IMPL(__imp__sub_831172E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-25920(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -25920);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0188
	ctx.lr = 0x831172F8;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83117328
	if (!ctx.cr6.eq) goto loc_83117328;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831175ec
	goto loc_831175EC;
loc_83117328:
	// clrlwi. r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x83117338
	if (ctx.cr0.eq) goto loc_83117338;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x83117340
	goto loc_83117340;
loc_83117338:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r30,-5084(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_83117340:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x830dd390
	ctx.lr = 0x83117350;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117374
	if (ctx.cr0.eq) goto loc_83117374;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x831537b0
	ctx.lr = 0x8311736C;
	sub_831537B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x83117378
	goto loc_83117378;
loc_83117374:
	// li r22,0
	ctx.r22.s64 = 0;
loc_83117378:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x831175e8
	if (ctx.cr6.eq) goto loc_831175E8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831173d4
	if (ctx.cr6.eq) goto loc_831173D4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831173c4
	if (!ctx.cr6.eq) goto loc_831173C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd390
	ctx.lr = 0x831173A0;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831173bc
	if (ctx.cr0.eq) goto loc_831173BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8311ceb0
	ctx.lr = 0x831173B8;
	sub_8311CEB0(ctx, base);
	// b 0x831173c0
	goto loc_831173C0;
loc_831173BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831173C0:
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
loc_831173C4:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x831173e4
	goto loc_831173E4;
loc_831173D4:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-4736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
loc_831173E4:
	// bl 0x8315f5d0
	ctx.lr = 0x831173E8;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83152200
	ctx.lr = 0x831173F4;
	sub_83152200(ctx, base);
	// lwz r23,8(r21)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x831175d4
	if (ctx.cr6.eq) goto loc_831175D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x8311740C;
	sub_831A0220(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x8311742c
	if (ctx.cr6.eq) goto loc_8311742C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x8311742c
	if (ctx.cr6.eq) goto loc_8311742C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x83117430
	if (!ctx.cr6.eq) goto loc_83117430;
loc_8311742C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83117430:
	// addi r11,r28,-26
	ctx.r11.s64 = ctx.r28.s64 + -26;
	// li r20,1
	ctx.r20.s64 = 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83117590
	if (ctx.cr6.eq) goto loc_83117590;
loc_8311745C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83117484
	if (!ctx.cr0.eq) goto loc_83117484;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83117484
	if (!ctx.cr0.eq) goto loc_83117484;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83117484
	if (!ctx.cr0.eq) goto loc_83117484;
	// clrlwi. r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83117484
	if (!ctx.cr0.eq) goto loc_83117484;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83117590
	if (ctx.cr0.eq) goto loc_83117590;
loc_83117484:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831174c4
	if (ctx.cr6.eq) goto loc_831174C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x83117498;
	sub_831A0220(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x831174b4
	if (ctx.cr6.eq) goto loc_831174B4;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x831174b4
	if (ctx.cr6.eq) goto loc_831174B4;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x831174b8
	if (!ctx.cr6.eq) goto loc_831174B8;
loc_831174B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831174B8:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831174C4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831174e4
	if (ctx.cr0.eq) goto loc_831174E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x831174D8;
	sub_831A0220(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831174E4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117508
	if (ctx.cr0.eq) goto loc_83117508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x831174F8;
	sub_831A0220(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 & ctx.r25.u64;
loc_83117508:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117560
	if (ctx.cr0.eq) goto loc_83117560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x8311751C;
	sub_831A0220(ctx, base);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311755c
	if (ctx.cr0.eq) goto loc_8311755C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x83117534;
	sub_831A0220(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x83117550
	if (ctx.cr6.eq) goto loc_83117550;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x83117550
	if (ctx.cr6.eq) goto loc_83117550;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x83117554
	if (!ctx.cr6.eq) goto loc_83117554;
loc_83117550:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83117554:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83117560
	if (ctx.cr6.eq) goto loc_83117560;
loc_8311755C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_83117560:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117584
	if (ctx.cr0.eq) goto loc_83117584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x83117574;
	sub_831A0220(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 & ctx.r26.u64;
loc_83117584:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8311745c
	if (ctx.cr6.lt) goto loc_8311745C;
loc_83117590:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831175ac
	if (ctx.cr0.eq) goto loc_831175AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x831175A4;
	sub_831A0220(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x831175b8
	goto loc_831175B8;
loc_831175AC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831175c0
	if (ctx.cr0.eq) goto loc_831175C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831175B8:
	// stw r11,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r11.u32);
	// b 0x831175c4
	goto loc_831175C4;
loc_831175C0:
	// stw r20,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r20.u32);
loc_831175C4:
	// stb r25,7(r22)
	PPC_STORE_U8(ctx.r22.u32 + 7, ctx.r25.u8);
	// stb r24,6(r22)
	PPC_STORE_U8(ctx.r22.u32 + 6, ctx.r24.u8);
	// stb r26,5(r22)
	PPC_STORE_U8(ctx.r22.u32 + 5, ctx.r26.u8);
	// b 0x831175e8
	goto loc_831175E8;
loc_831175D4:
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r20,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r20.u32);
	// stb r20,7(r22)
	PPC_STORE_U8(ctx.r22.u32 + 7, ctx.r20.u8);
	// stb r20,6(r22)
	PPC_STORE_U8(ctx.r22.u32 + 6, ctx.r20.u8);
	// stb r20,5(r22)
	PPC_STORE_U8(ctx.r22.u32 + 5, ctx.r20.u8);
loc_831175E8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_831175EC:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831172F0"))) PPC_WEAK_FUNC(sub_831172F0);
PPC_FUNC_IMPL(__imp__sub_831172F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0188
	ctx.lr = 0x831172F8;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83117328
	if (!ctx.cr6.eq) goto loc_83117328;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831175ec
	goto loc_831175EC;
loc_83117328:
	// clrlwi. r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x83117338
	if (ctx.cr0.eq) goto loc_83117338;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x83117340
	goto loc_83117340;
loc_83117338:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r30,-5084(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_83117340:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x830dd390
	ctx.lr = 0x83117350;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117374
	if (ctx.cr0.eq) goto loc_83117374;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x831537b0
	ctx.lr = 0x8311736C;
	sub_831537B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x83117378
	goto loc_83117378;
loc_83117374:
	// li r22,0
	ctx.r22.s64 = 0;
loc_83117378:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x831175e8
	if (ctx.cr6.eq) goto loc_831175E8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831173d4
	if (ctx.cr6.eq) goto loc_831173D4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831173c4
	if (!ctx.cr6.eq) goto loc_831173C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd390
	ctx.lr = 0x831173A0;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831173bc
	if (ctx.cr0.eq) goto loc_831173BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8311ceb0
	ctx.lr = 0x831173B8;
	sub_8311CEB0(ctx, base);
	// b 0x831173c0
	goto loc_831173C0;
loc_831173BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831173C0:
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
loc_831173C4:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x831173e4
	goto loc_831173E4;
loc_831173D4:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-4736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
loc_831173E4:
	// bl 0x8315f5d0
	ctx.lr = 0x831173E8;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83152200
	ctx.lr = 0x831173F4;
	sub_83152200(ctx, base);
	// lwz r23,8(r21)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x831175d4
	if (ctx.cr6.eq) goto loc_831175D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x8311740C;
	sub_831A0220(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x8311742c
	if (ctx.cr6.eq) goto loc_8311742C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x8311742c
	if (ctx.cr6.eq) goto loc_8311742C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x83117430
	if (!ctx.cr6.eq) goto loc_83117430;
loc_8311742C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83117430:
	// addi r11,r28,-26
	ctx.r11.s64 = ctx.r28.s64 + -26;
	// li r20,1
	ctx.r20.s64 = 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83117590
	if (ctx.cr6.eq) goto loc_83117590;
loc_8311745C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83117484
	if (!ctx.cr0.eq) goto loc_83117484;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83117484
	if (!ctx.cr0.eq) goto loc_83117484;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83117484
	if (!ctx.cr0.eq) goto loc_83117484;
	// clrlwi. r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83117484
	if (!ctx.cr0.eq) goto loc_83117484;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83117590
	if (ctx.cr0.eq) goto loc_83117590;
loc_83117484:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831174c4
	if (ctx.cr6.eq) goto loc_831174C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x83117498;
	sub_831A0220(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x831174b4
	if (ctx.cr6.eq) goto loc_831174B4;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x831174b4
	if (ctx.cr6.eq) goto loc_831174B4;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x831174b8
	if (!ctx.cr6.eq) goto loc_831174B8;
loc_831174B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831174B8:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831174C4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831174e4
	if (ctx.cr0.eq) goto loc_831174E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x831174D8;
	sub_831A0220(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831174E4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117508
	if (ctx.cr0.eq) goto loc_83117508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x831174F8;
	sub_831A0220(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 & ctx.r25.u64;
loc_83117508:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117560
	if (ctx.cr0.eq) goto loc_83117560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x8311751C;
	sub_831A0220(ctx, base);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311755c
	if (ctx.cr0.eq) goto loc_8311755C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x83117534;
	sub_831A0220(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x83117550
	if (ctx.cr6.eq) goto loc_83117550;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x83117550
	if (ctx.cr6.eq) goto loc_83117550;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x83117554
	if (!ctx.cr6.eq) goto loc_83117554;
loc_83117550:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83117554:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83117560
	if (ctx.cr6.eq) goto loc_83117560;
loc_8311755C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_83117560:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117584
	if (ctx.cr0.eq) goto loc_83117584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x83117574;
	sub_831A0220(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 & ctx.r26.u64;
loc_83117584:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8311745c
	if (ctx.cr6.lt) goto loc_8311745C;
loc_83117590:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831175ac
	if (ctx.cr0.eq) goto loc_831175AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831a0220
	ctx.lr = 0x831175A4;
	sub_831A0220(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x831175b8
	goto loc_831175B8;
loc_831175AC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831175c0
	if (ctx.cr0.eq) goto loc_831175C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831175B8:
	// stw r11,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r11.u32);
	// b 0x831175c4
	goto loc_831175C4;
loc_831175C0:
	// stw r20,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r20.u32);
loc_831175C4:
	// stb r25,7(r22)
	PPC_STORE_U8(ctx.r22.u32 + 7, ctx.r25.u8);
	// stb r24,6(r22)
	PPC_STORE_U8(ctx.r22.u32 + 6, ctx.r24.u8);
	// stb r26,5(r22)
	PPC_STORE_U8(ctx.r22.u32 + 5, ctx.r26.u8);
	// b 0x831175e8
	goto loc_831175E8;
loc_831175D4:
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r20,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r20.u32);
	// stb r20,7(r22)
	PPC_STORE_U8(ctx.r22.u32 + 7, ctx.r20.u8);
	// stb r20,6(r22)
	PPC_STORE_U8(ctx.r22.u32 + 6, ctx.r20.u8);
	// stb r20,5(r22)
	PPC_STORE_U8(ctx.r22.u32 + 5, ctx.r20.u8);
loc_831175E8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_831175EC:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x833a01d8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831175F4"))) PPC_WEAK_FUNC(sub_831175F4);
PPC_FUNC_IMPL(__imp__sub_831175F4) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117610;
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

__attribute__((alias("__imp__sub_83117620"))) PPC_WEAK_FUNC(sub_83117620);
PPC_FUNC_IMPL(__imp__sub_83117620) {
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
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8311763C;
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

__attribute__((alias("__imp__sub_8311764C"))) PPC_WEAK_FUNC(sub_8311764C);
PPC_FUNC_IMPL(__imp__sub_8311764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83117650"))) PPC_WEAK_FUNC(sub_83117650);
PPC_FUNC_IMPL(__imp__sub_83117650) {
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
	// bl 0x83116b38
	ctx.lr = 0x83117670;
	sub_83116B38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117680
	if (ctx.cr0.eq) goto loc_83117680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83117680;
	sub_830DD3E0(ctx, base);
loc_83117680:
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

__attribute__((alias("__imp__sub_8311769C"))) PPC_WEAK_FUNC(sub_8311769C);
PPC_FUNC_IMPL(__imp__sub_8311769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831176A0"))) PPC_WEAK_FUNC(sub_831176A0);
PPC_FUNC_IMPL(__imp__sub_831176A0) {
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
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r30,-4736(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4736);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831176d4
	if (ctx.cr6.eq) goto loc_831176D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831147f8
	ctx.lr = 0x831176CC;
	sub_831147F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831176D4;
	sub_830DD3E0(ctx, base);
loc_831176D4:
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4736, ctx.r11.u32);
	// lwz r31,-4732(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4732);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831176fc
	if (ctx.cr6.eq) goto loc_831176FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83116980
	ctx.lr = 0x831176F4;
	sub_83116980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831176FC;
	sub_830DD3E0(ctx, base);
loc_831176FC:
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-4744
	ctx.r31.s64 = ctx.r10.s64 + -4744;
	// stw r11,-4732(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4732, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83117728
	if (ctx.cr6.eq) goto loc_83117728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fcf30
	ctx.lr = 0x83117720;
	sub_830FCF30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83117728;
	sub_830DD3E0(ctx, base);
loc_83117728:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83117750"))) PPC_WEAK_FUNC(sub_83117750);
PPC_FUNC_IMPL(__imp__sub_83117750) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83117784
	if (ctx.cr6.eq) goto loc_83117784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831147f8
	ctx.lr = 0x8311777C;
	sub_831147F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83117784;
	sub_830DD3E0(ctx, base);
loc_83117784:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831177A4"))) PPC_WEAK_FUNC(sub_831177A4);
PPC_FUNC_IMPL(__imp__sub_831177A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831177A8"))) PPC_WEAK_FUNC(sub_831177A8);
PPC_FUNC_IMPL(__imp__sub_831177A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-25824(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -25824);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x831177B8;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83117814
	if (!ctx.cr6.eq) goto loc_83117814;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831177f4
	if (ctx.cr6.eq) goto loc_831177F4;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83117750
	ctx.lr = 0x831177F4;
	sub_83117750(ctx, base);
loc_831177F4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8311780c
	if (ctx.cr6.eq) goto loc_8311780C;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x8311780C;
	sub_8312C778(ctx, base);
loc_8311780C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83117ca8
	goto loc_83117CA8;
loc_83117814:
	// lwz r21,292(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// clrlwi. r22,r10,24
	ctx.r22.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x83117828
	if (ctx.cr0.eq) goto loc_83117828;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x83117830
	goto loc_83117830;
loc_83117828:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r29,-5084(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_83117830:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117924
	if (ctx.cr0.eq) goto loc_83117924;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x830dd390
	ctx.lr = 0x83117848;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117878
	if (ctx.cr0.eq) goto loc_83117878;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83154608
	ctx.lr = 0x83117870;
	sub_83154608(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311787c
	goto loc_8311787C;
loc_83117878:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8311787C:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stw r23,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r23.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r23,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r23.u8);
	// beq cr6,0x83117918
	if (ctx.cr6.eq) goto loc_83117918;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831178A4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831178b8
	if (ctx.cr0.eq) goto loc_831178B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117908
	if (!ctx.cr6.eq) goto loc_83117908;
loc_831178B8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15156
	ctx.r4.s64 = ctx.r11.s64 + 15156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831178CC;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117918
	if (ctx.cr0.eq) goto loc_83117918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117918
	if (ctx.cr6.eq) goto loc_83117918;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15080
	ctx.r4.s64 = ctx.r11.s64 + 15080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831178F4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117918
	if (ctx.cr0.eq) goto loc_83117918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117918
	if (ctx.cr6.eq) goto loc_83117918;
loc_83117908:
	// li r24,1
	ctx.r24.s64 = 1;
	// stb r24,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r24.u8);
	// stb r24,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r24.u8);
	// b 0x83117c30
	goto loc_83117C30;
loc_83117918:
	// stb r23,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r23.u8);
	// stb r23,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r23.u8);
	// b 0x83117c30
	goto loc_83117C30;
loc_83117924:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83117970
	if (ctx.cr6.eq) goto loc_83117970;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83117970
	if (ctx.cr6.eq) goto loc_83117970;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r28,r11,14896
	ctx.r28.s64 = ctx.r11.s64 + 14896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117950;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117970
	if (ctx.cr0.eq) goto loc_83117970;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117970
	if (ctx.cr6.eq) goto loc_83117970;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ebeb0
	ctx.lr = 0x83117970;
	sub_830EBEB0(ctx, base);
loc_83117970:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83117994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lbz r11,7(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// lwz r26,36(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r28,r11,15128
	ctx.r28.s64 = ctx.r11.s64 + 15128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831179D4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831179e8
	if (ctx.cr0.eq) goto loc_831179E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117a64
	if (!ctx.cr6.eq) goto loc_83117A64;
loc_831179E8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r29,r11,15100
	ctx.r29.s64 = ctx.r11.s64 + 15100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117A00;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117a14
	if (ctx.cr0.eq) goto loc_83117A14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117a64
	if (!ctx.cr6.eq) goto loc_83117A64;
loc_83117A14:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117A2C;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117a40
	if (ctx.cr0.eq) goto loc_83117A40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117a64
	if (!ctx.cr6.eq) goto loc_83117A64;
loc_83117A40:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117A50;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117b14
	if (ctx.cr0.eq) goto loc_83117B14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
loc_83117A64:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r28,r11,15052
	ctx.r28.s64 = ctx.r11.s64 + 15052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117A7C;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117a90
	if (ctx.cr0.eq) goto loc_83117A90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117b0c
	if (!ctx.cr6.eq) goto loc_83117B0C;
loc_83117A90:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r29,r11,15024
	ctx.r29.s64 = ctx.r11.s64 + 15024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117AA8;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117abc
	if (ctx.cr0.eq) goto loc_83117ABC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117b0c
	if (!ctx.cr6.eq) goto loc_83117B0C;
loc_83117ABC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117AD4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117ae8
	if (ctx.cr0.eq) goto loc_83117AE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117b0c
	if (!ctx.cr6.eq) goto loc_83117B0C;
loc_83117AE8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117AF8;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117b14
	if (ctx.cr0.eq) goto loc_83117B14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
loc_83117B0C:
	// stb r24,6(r25)
	PPC_STORE_U8(ctx.r25.u32 + 6, ctx.r24.u8);
	// b 0x83117b18
	goto loc_83117B18;
loc_83117B14:
	// stb r23,6(r25)
	PPC_STORE_U8(ctx.r25.u32 + 6, ctx.r23.u8);
loc_83117B18:
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83117c2c
	if (!ctx.cr0.eq) goto loc_83117C2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83117c24
	if (ctx.cr6.eq) goto loc_83117C24;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117B40;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117b54
	if (ctx.cr0.eq) goto loc_83117B54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c2c
	if (!ctx.cr6.eq) goto loc_83117C2C;
loc_83117B54:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15080
	ctx.r4.s64 = ctx.r11.s64 + 15080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117B68;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117b7c
	if (ctx.cr0.eq) goto loc_83117B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c2c
	if (!ctx.cr6.eq) goto loc_83117C2C;
loc_83117B7C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15228
	ctx.r4.s64 = ctx.r11.s64 + 15228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117B90;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117ba4
	if (ctx.cr0.eq) goto loc_83117BA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c2c
	if (!ctx.cr6.eq) goto loc_83117C2C;
loc_83117BA4:
	// lbz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83117bfc
	if (!ctx.cr0.eq) goto loc_83117BFC;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x83117c24
	if (!ctx.cr6.eq) goto loc_83117C24;
loc_83117BFC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15252
	ctx.r4.s64 = ctx.r11.s64 + 15252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117C10;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117c24
	if (ctx.cr0.eq) goto loc_83117C24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c2c
	if (!ctx.cr6.eq) goto loc_83117C2C;
loc_83117C24:
	// stb r23,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r23.u8);
	// b 0x83117c30
	goto loc_83117C30;
loc_83117C2C:
	// stb r24,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r24.u8);
loc_83117C30:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x83117c84
	if (ctx.cr6.eq) goto loc_83117C84;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c74
	if (!ctx.cr6.eq) goto loc_83117C74;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd390
	ctx.lr = 0x83117C50;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117c6c
	if (ctx.cr0.eq) goto loc_83117C6C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8311ceb0
	ctx.lr = 0x83117C68;
	sub_8311CEB0(ctx, base);
	// b 0x83117c70
	goto loc_83117C70;
loc_83117C6C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_83117C70:
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
loc_83117C74:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x83117c94
	goto loc_83117C94;
loc_83117C84:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,-4736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
loc_83117C94:
	// bl 0x8315f5d0
	ctx.lr = 0x83117C98;
	sub_8315F5D0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83152200
	ctx.lr = 0x83117CA4;
	sub_83152200(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_83117CA8:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831177B0"))) PPC_WEAK_FUNC(sub_831177B0);
PPC_FUNC_IMPL(__imp__sub_831177B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x831177B8;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83117814
	if (!ctx.cr6.eq) goto loc_83117814;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x831177f4
	if (ctx.cr6.eq) goto loc_831177F4;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83117750
	ctx.lr = 0x831177F4;
	sub_83117750(ctx, base);
loc_831177F4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8311780c
	if (ctx.cr6.eq) goto loc_8311780C;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x8311780C;
	sub_8312C778(ctx, base);
loc_8311780C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83117ca8
	goto loc_83117CA8;
loc_83117814:
	// lwz r21,292(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// clrlwi. r22,r10,24
	ctx.r22.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x83117828
	if (ctx.cr0.eq) goto loc_83117828;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x83117830
	goto loc_83117830;
loc_83117828:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r29,-5084(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
loc_83117830:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83117924
	if (ctx.cr0.eq) goto loc_83117924;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x830dd390
	ctx.lr = 0x83117848;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117878
	if (ctx.cr0.eq) goto loc_83117878;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83154608
	ctx.lr = 0x83117870;
	sub_83154608(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311787c
	goto loc_8311787C;
loc_83117878:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8311787C:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stw r23,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r23.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r23,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r23.u8);
	// beq cr6,0x83117918
	if (ctx.cr6.eq) goto loc_83117918;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831178A4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831178b8
	if (ctx.cr0.eq) goto loc_831178B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117908
	if (!ctx.cr6.eq) goto loc_83117908;
loc_831178B8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15156
	ctx.r4.s64 = ctx.r11.s64 + 15156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831178CC;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117918
	if (ctx.cr0.eq) goto loc_83117918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117918
	if (ctx.cr6.eq) goto loc_83117918;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15080
	ctx.r4.s64 = ctx.r11.s64 + 15080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831178F4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117918
	if (ctx.cr0.eq) goto loc_83117918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117918
	if (ctx.cr6.eq) goto loc_83117918;
loc_83117908:
	// li r24,1
	ctx.r24.s64 = 1;
	// stb r24,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r24.u8);
	// stb r24,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r24.u8);
	// b 0x83117c30
	goto loc_83117C30;
loc_83117918:
	// stb r23,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r23.u8);
	// stb r23,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r23.u8);
	// b 0x83117c30
	goto loc_83117C30;
loc_83117924:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83117970
	if (ctx.cr6.eq) goto loc_83117970;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83117970
	if (ctx.cr6.eq) goto loc_83117970;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r28,r11,14896
	ctx.r28.s64 = ctx.r11.s64 + 14896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117950;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117970
	if (ctx.cr0.eq) goto loc_83117970;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117970
	if (ctx.cr6.eq) goto loc_83117970;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ebeb0
	ctx.lr = 0x83117970;
	sub_830EBEB0(ctx, base);
loc_83117970:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83117994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lbz r11,7(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// lwz r26,36(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r28,r11,15128
	ctx.r28.s64 = ctx.r11.s64 + 15128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x831179D4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831179e8
	if (ctx.cr0.eq) goto loc_831179E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117a64
	if (!ctx.cr6.eq) goto loc_83117A64;
loc_831179E8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r29,r11,15100
	ctx.r29.s64 = ctx.r11.s64 + 15100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117A00;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117a14
	if (ctx.cr0.eq) goto loc_83117A14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117a64
	if (!ctx.cr6.eq) goto loc_83117A64;
loc_83117A14:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117A2C;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117a40
	if (ctx.cr0.eq) goto loc_83117A40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117a64
	if (!ctx.cr6.eq) goto loc_83117A64;
loc_83117A40:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117A50;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117b14
	if (ctx.cr0.eq) goto loc_83117B14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
loc_83117A64:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r28,r11,15052
	ctx.r28.s64 = ctx.r11.s64 + 15052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117A7C;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117a90
	if (ctx.cr0.eq) goto loc_83117A90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117b0c
	if (!ctx.cr6.eq) goto loc_83117B0C;
loc_83117A90:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r29,r11,15024
	ctx.r29.s64 = ctx.r11.s64 + 15024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117AA8;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117abc
	if (ctx.cr0.eq) goto loc_83117ABC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117b0c
	if (!ctx.cr6.eq) goto loc_83117B0C;
loc_83117ABC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117AD4;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117ae8
	if (ctx.cr0.eq) goto loc_83117AE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117b0c
	if (!ctx.cr6.eq) goto loc_83117B0C;
loc_83117AE8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117AF8;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117b14
	if (ctx.cr0.eq) goto loc_83117B14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83117b14
	if (ctx.cr6.eq) goto loc_83117B14;
loc_83117B0C:
	// stb r24,6(r25)
	PPC_STORE_U8(ctx.r25.u32 + 6, ctx.r24.u8);
	// b 0x83117b18
	goto loc_83117B18;
loc_83117B14:
	// stb r23,6(r25)
	PPC_STORE_U8(ctx.r25.u32 + 6, ctx.r23.u8);
loc_83117B18:
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83117c2c
	if (!ctx.cr0.eq) goto loc_83117C2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83117c24
	if (ctx.cr6.eq) goto loc_83117C24;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117B40;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117b54
	if (ctx.cr0.eq) goto loc_83117B54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c2c
	if (!ctx.cr6.eq) goto loc_83117C2C;
loc_83117B54:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15080
	ctx.r4.s64 = ctx.r11.s64 + 15080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117B68;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117b7c
	if (ctx.cr0.eq) goto loc_83117B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c2c
	if (!ctx.cr6.eq) goto loc_83117C2C;
loc_83117B7C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15228
	ctx.r4.s64 = ctx.r11.s64 + 15228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117B90;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117ba4
	if (ctx.cr0.eq) goto loc_83117BA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c2c
	if (!ctx.cr6.eq) goto loc_83117C2C;
loc_83117BA4:
	// lbz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83117bfc
	if (!ctx.cr0.eq) goto loc_83117BFC;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x83117bfc
	if (ctx.cr6.eq) goto loc_83117BFC;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x83117c24
	if (!ctx.cr6.eq) goto loc_83117C24;
loc_83117BFC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,15252
	ctx.r4.s64 = ctx.r11.s64 + 15252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x83117C10;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117c24
	if (ctx.cr0.eq) goto loc_83117C24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c2c
	if (!ctx.cr6.eq) goto loc_83117C2C;
loc_83117C24:
	// stb r23,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r23.u8);
	// b 0x83117c30
	goto loc_83117C30;
loc_83117C2C:
	// stb r24,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r24.u8);
loc_83117C30:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x83117c84
	if (ctx.cr6.eq) goto loc_83117C84;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117c74
	if (!ctx.cr6.eq) goto loc_83117C74;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd390
	ctx.lr = 0x83117C50;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117c6c
	if (ctx.cr0.eq) goto loc_83117C6C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8311ceb0
	ctx.lr = 0x83117C68;
	sub_8311CEB0(ctx, base);
	// b 0x83117c70
	goto loc_83117C70;
loc_83117C6C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_83117C70:
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
loc_83117C74:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x83117c94
	goto loc_83117C94;
loc_83117C84:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,-4736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
loc_83117C94:
	// bl 0x8315f5d0
	ctx.lr = 0x83117C98;
	sub_8315F5D0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83152200
	ctx.lr = 0x83117CA4;
	sub_83152200(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_83117CA8:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83117CB0"))) PPC_WEAK_FUNC(sub_83117CB0);
PPC_FUNC_IMPL(__imp__sub_83117CB0) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117CCC;
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

__attribute__((alias("__imp__sub_83117CDC"))) PPC_WEAK_FUNC(sub_83117CDC);
PPC_FUNC_IMPL(__imp__sub_83117CDC) {
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
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83117CF8;
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

__attribute__((alias("__imp__sub_83117D08"))) PPC_WEAK_FUNC(sub_83117D08);
PPC_FUNC_IMPL(__imp__sub_83117D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-25144(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -25144);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0174
	ctx.lr = 0x83117D18;
	__savegprlr_15(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r15,r11,-4744
	ctx.r15.s64 = ctx.r11.s64 + -4744;
	// lbz r11,-4744(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311958c
	if (!ctx.cr0.eq) goto loc_8311958C;
	// lwz r4,4(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83117d98
	if (!ctx.cr6.eq) goto loc_83117D98;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83117D58;
	sub_830FCF80(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117d8c
	if (!ctx.cr6.eq) goto loc_83117D8C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83117D6C;
	sub_830DD340(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117d84
	if (ctx.cr0.eq) goto loc_83117D84;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x83117D80;
	sub_830FCEF0(ctx, base);
	// b 0x83117d88
	goto loc_83117D88;
loc_83117D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83117D88:
	// stw r3,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r3.u32);
loc_83117D8C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fcfb8
	ctx.lr = 0x83117D94;
	sub_830FCFB8(ctx, base);
	// lwz r4,4(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
loc_83117D98:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x830fcf80
	ctx.lr = 0x83117DA0;
	sub_830FCF80(ctx, base);
	// lbz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83119584
	if (!ctx.cr0.eq) goto loc_83119584;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83117DB4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117dd4
	if (ctx.cr0.eq) goto loc_83117DD4;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83117DCC;
	sub_8311CEB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83117dd8
	goto loc_83117DD8;
loc_83117DD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83117DD8:
	// lis r16,-31827
	ctx.r16.s64 = -2085814272;
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r11,-4736(r16)
	PPC_STORE_U32(ctx.r16.u32 + -4736, ctx.r11.u32);
	// bl 0x830dd340
	ctx.lr = 0x83117DE8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117e04
	if (ctx.cr0.eq) goto loc_83117E04;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315cce8
	ctx.lr = 0x83117DFC;
	sub_8315CCE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117e08
	goto loc_83117E08;
loc_83117E04:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117E08:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r17,r11,14464
	ctx.r17.s64 = ctx.r11.s64 + 14464;
	// addi r26,r10,16900
	ctx.r26.s64 = ctx.r10.s64 + 16900;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117E28;
	sub_831520A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117E38;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83117E40;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117e5c
	if (ctx.cr0.eq) goto loc_83117E5C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315c7f8
	ctx.lr = 0x83117E54;
	sub_8315C7F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117e60
	goto loc_83117E60;
loc_83117E5C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117E60:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,-7072
	ctx.r28.s64 = ctx.r11.s64 + -7072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117E78;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117E88;
	sub_8315F5D0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x830dd340
	ctx.lr = 0x83117E90;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117eac
	if (ctx.cr0.eq) goto loc_83117EAC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315c610
	ctx.lr = 0x83117EA4;
	sub_8315C610(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117eb0
	goto loc_83117EB0;
loc_83117EAC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117EB0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17636
	ctx.r28.s64 = ctx.r11.s64 + 17636;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117EC8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117ED8;
	sub_8315F5D0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x830dd340
	ctx.lr = 0x83117EE0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117efc
	if (ctx.cr0.eq) goto loc_83117EFC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831165a8
	ctx.lr = 0x83117EF4;
	sub_831165A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117f00
	goto loc_83117F00;
loc_83117EFC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117F00:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17008
	ctx.r28.s64 = ctx.r11.s64 + 17008;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117F18;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117F28;
	sub_8315F5D0(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x830dd340
	ctx.lr = 0x83117F30;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117f4c
	if (ctx.cr0.eq) goto loc_83117F4C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315b308
	ctx.lr = 0x83117F44;
	sub_8315B308(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117f50
	goto loc_83117F50;
loc_83117F4C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117F50:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r21,r11,16992
	ctx.r21.s64 = ctx.r11.s64 + 16992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117F68;
	sub_831520A0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117F78;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83117F80;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117f9c
	if (ctx.cr0.eq) goto loc_83117F9C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315aff8
	ctx.lr = 0x83117F94;
	sub_8315AFF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117fa0
	goto loc_83117FA0;
loc_83117F9C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117FA0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17496
	ctx.r28.s64 = ctx.r11.s64 + 17496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117FB8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117FC8;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83117FD0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117fec
	if (ctx.cr0.eq) goto loc_83117FEC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315ac50
	ctx.lr = 0x83117FE4;
	sub_8315AC50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117ff0
	goto loc_83117FF0;
loc_83117FEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117FF0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17468
	ctx.r28.s64 = ctx.r11.s64 + 17468;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118008;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118018;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118020;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311803c
	if (ctx.cr0.eq) goto loc_8311803C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315a288
	ctx.lr = 0x83118034;
	sub_8315A288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118040
	goto loc_83118040;
loc_8311803C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118040:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17528
	ctx.r28.s64 = ctx.r11.s64 + 17528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118058;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118068;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118070;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311808c
	if (ctx.cr0.eq) goto loc_8311808C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831597e8
	ctx.lr = 0x83118084;
	sub_831597E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118090
	goto loc_83118090;
loc_8311808C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118090:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17516
	ctx.r28.s64 = ctx.r11.s64 + 17516;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831180A8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831180B8;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x831180C0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831180dc
	if (ctx.cr0.eq) goto loc_831180DC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83159410
	ctx.lr = 0x831180D4;
	sub_83159410(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831180e0
	goto loc_831180E0;
loc_831180DC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831180E0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17572
	ctx.r28.s64 = ctx.r11.s64 + 17572;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831180F8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118108;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83118110;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311812c
	if (ctx.cr0.eq) goto loc_8311812C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83158e38
	ctx.lr = 0x83118124;
	sub_83158E38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118130
	goto loc_83118130;
loc_8311812C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118130:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17588
	ctx.r28.s64 = ctx.r11.s64 + 17588;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118148;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118158;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118160;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311817c
	if (ctx.cr0.eq) goto loc_8311817C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83158978
	ctx.lr = 0x83118174;
	sub_83158978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118180
	goto loc_83118180;
loc_8311817C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118180:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17320
	ctx.r28.s64 = ctx.r11.s64 + 17320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118198;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831181A8;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x831181B0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831181cc
	if (ctx.cr0.eq) goto loc_831181CC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831584c0
	ctx.lr = 0x831181C4;
	sub_831584C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831181d0
	goto loc_831181D0;
loc_831181CC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831181D0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17340
	ctx.r28.s64 = ctx.r11.s64 + 17340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831181E8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831181F8;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118200;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311821c
	if (ctx.cr0.eq) goto loc_8311821C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83158008
	ctx.lr = 0x83118214;
	sub_83158008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118220
	goto loc_83118220;
loc_8311821C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118220:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17352
	ctx.r28.s64 = ctx.r11.s64 + 17352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118238;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118248;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118250;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311826c
	if (ctx.cr0.eq) goto loc_8311826C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83157c70
	ctx.lr = 0x83118264;
	sub_83157C70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118270
	goto loc_83118270;
loc_8311826C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118270:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17384
	ctx.r28.s64 = ctx.r11.s64 + 17384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118288;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118298;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x831182A0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831182bc
	if (ctx.cr0.eq) goto loc_831182BC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831578d8
	ctx.lr = 0x831182B4;
	sub_831578D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831182c0
	goto loc_831182C0;
loc_831182BC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831182C0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17396
	ctx.r28.s64 = ctx.r11.s64 + 17396;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831182D8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831182E8;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x831182F0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311830c
	if (ctx.cr0.eq) goto loc_8311830C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83157540
	ctx.lr = 0x83118304;
	sub_83157540(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118310
	goto loc_83118310;
loc_8311830C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118310:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17412
	ctx.r28.s64 = ctx.r11.s64 + 17412;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118328;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118338;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118340;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311835c
	if (ctx.cr0.eq) goto loc_8311835C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831571a8
	ctx.lr = 0x83118354;
	sub_831571A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118360
	goto loc_83118360;
loc_8311835C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118360:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17432
	ctx.r28.s64 = ctx.r11.s64 + 17432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118378;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118388;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118390;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831183ac
	if (ctx.cr0.eq) goto loc_831183AC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83156e10
	ctx.lr = 0x831183A4;
	sub_83156E10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831183b0
	goto loc_831183B0;
loc_831183AC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831183B0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17444
	ctx.r28.s64 = ctx.r11.s64 + 17444;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831183C8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831183D8;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x831183E0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831183fc
	if (ctx.cr0.eq) goto loc_831183FC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83156a68
	ctx.lr = 0x831183F4;
	sub_83156A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118400
	goto loc_83118400;
loc_831183FC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118400:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17364
	ctx.r28.s64 = ctx.r11.s64 + 17364;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118418;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118428;
	sub_8315F5D0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118430;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118450
	if (ctx.cr0.eq) goto loc_83118450;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118448;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118454
	goto loc_83118454;
loc_83118450:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118454:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311845C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,14896
	ctx.r27.s64 = ctx.r11.s64 + 14896;
	// beq 0x8311848c
	if (ctx.cr0.eq) goto loc_8311848C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,16884
	ctx.r5.s64 = ctx.r11.s64 + 16884;
	// bl 0x831565c8
	ctx.lr = 0x83118484;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118490
	goto loc_83118490;
loc_8311848C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118490:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x8311849C;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x831184AC;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17600
	ctx.r29.s64 = ctx.r11.s64 + 17600;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831184DC;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831184E4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118504
	if (ctx.cr0.eq) goto loc_83118504;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831184FC;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118508
	goto loc_83118508;
loc_83118504:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118508:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118510;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,16864
	ctx.r25.s64 = ctx.r11.s64 + 16864;
	// beq 0x8311853c
	if (ctx.cr0.eq) goto loc_8311853C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118534;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118540
	goto loc_83118540;
loc_8311853C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118540:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x8311854C;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x8311855C;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r24,r11,16916
	ctx.r24.s64 = ctx.r11.s64 + 16916;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x8311858C;
	sub_831177B0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83118594;
	sub_830DD340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// beq 0x831185d4
	if (ctx.cr0.eq) goto loc_831185D4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r28,-5084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x831185B0;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83156218
	ctx.lr = 0x831185CC;
	sub_83156218(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831185d8
	goto loc_831185D8;
loc_831185D4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831185D8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r29,r11,16948
	ctx.r29.s64 = ctx.r11.s64 + 16948;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831520a0
	ctx.lr = 0x831185F0;
	sub_831520A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118600;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83118608;
	sub_830DD340(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// beq 0x83118648
	if (ctx.cr0.eq) goto loc_83118648;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x83118624;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x83155f20
	ctx.lr = 0x83118640;
	sub_83155F20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311864c
	goto loc_8311864C;
loc_83118648:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8311864C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r18,r11,16960
	ctx.r18.s64 = ctx.r11.s64 + 16960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118664;
	sub_831520A0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118674;
	sub_8315F5D0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x8311867C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311869c
	if (ctx.cr0.eq) goto loc_8311869C;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118694;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831186a0
	goto loc_831186A0;
loc_8311869C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831186A0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831186A8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,15196
	ctx.r26.s64 = ctx.r11.s64 + 15196;
	// addi r23,r10,-26584
	ctx.r23.s64 = ctx.r10.s64 + -26584;
	// beq 0x831186dc
	if (ctx.cr0.eq) goto loc_831186DC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831565c8
	ctx.lr = 0x831186D4;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x831186e0
	goto loc_831186E0;
loc_831186DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_831186E0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x831186EC;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831186F4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118718
	if (ctx.cr0.eq) goto loc_83118718;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118710;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8311871c
	goto loc_8311871C;
loc_83118718:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8311871C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118728;
	sub_8315F5D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118738;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,-7040
	ctx.r29.s64 = ctx.r11.s64 + -7040;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118768;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118770;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118790
	if (ctx.cr0.eq) goto loc_83118790;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118788;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118794
	goto loc_83118794;
loc_83118790:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118794:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311879C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,15156
	ctx.r20.s64 = ctx.r11.s64 + 15156;
	// addi r19,r10,-1636
	ctx.r19.s64 = ctx.r10.s64 + -1636;
	// beq 0x831187d0
	if (ctx.cr0.eq) goto loc_831187D0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x831565c8
	ctx.lr = 0x831187C8;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x831187d4
	goto loc_831187D4;
loc_831187D0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_831187D4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x831187E0;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x831187F0;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7024
	ctx.r4.s64 = ctx.r11.s64 + -7024;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x8311881C;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118824;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118844
	if (ctx.cr0.eq) goto loc_83118844;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x8311883C;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118848
	goto loc_83118848;
loc_83118844:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118848:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118850;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118878
	if (ctx.cr0.eq) goto loc_83118878;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// bl 0x831565c8
	ctx.lr = 0x83118870;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8311887c
	goto loc_8311887C;
loc_83118878:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8311887C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118888;
	sub_8315F5D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118898;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,16928
	ctx.r4.s64 = ctx.r11.s64 + 16928;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831188C4;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831188CC;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831188ec
	if (ctx.cr0.eq) goto loc_831188EC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831188E4;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831188f0
	goto loc_831188F0;
loc_831188EC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831188F0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831188F8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,15252
	ctx.r29.s64 = ctx.r11.s64 + 15252;
	// addi r24,r10,-1804
	ctx.r24.s64 = ctx.r10.s64 + -1804;
	// beq 0x8311892c
	if (ctx.cr0.eq) goto loc_8311892C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118924;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118930
	goto loc_83118930;
loc_8311892C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118930:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x8311893C;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118944;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118968
	if (ctx.cr0.eq) goto loc_83118968;
	// addi r5,r23,8
	ctx.r5.s64 = ctx.r23.s64 + 8;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118960;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8311896c
	goto loc_8311896C;
loc_83118968:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8311896C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118978;
	sub_8315F5D0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118988;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r26,r11,16976
	ctx.r26.s64 = ctx.r11.s64 + 16976;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831189B8;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831189C0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831189e0
	if (ctx.cr0.eq) goto loc_831189E0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831189D8;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831189e4
	goto loc_831189E4;
loc_831189E0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831189E4:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831189EC;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,15052
	ctx.r27.s64 = ctx.r11.s64 + 15052;
	// beq 0x83118a18
	if (ctx.cr0.eq) goto loc_83118A18;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118A10;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118a1c
	goto loc_83118A1C;
loc_83118A18:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118A1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118A28;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118A38;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17024
	ctx.r29.s64 = ctx.r11.s64 + 17024;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118A68;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118A70;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118a90
	if (ctx.cr0.eq) goto loc_83118A90;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118A88;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118a94
	goto loc_83118A94;
loc_83118A90:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118A94:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118A9C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118ac4
	if (ctx.cr0.eq) goto loc_83118AC4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,108
	ctx.r5.s64 = ctx.r11.s64 + 108;
	// bl 0x831565c8
	ctx.lr = 0x83118ABC;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118ac8
	goto loc_83118AC8;
loc_83118AC4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118AC8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118AD4;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118AE4;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17064
	ctx.r4.s64 = ctx.r11.s64 + 17064;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118B10;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118B18;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118b38
	if (ctx.cr0.eq) goto loc_83118B38;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118B30;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118b3c
	goto loc_83118B3C;
loc_83118B38:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118B3C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118B44;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118b6c
	if (ctx.cr0.eq) goto loc_83118B6C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-916
	ctx.r5.s64 = ctx.r11.s64 + -916;
	// bl 0x831565c8
	ctx.lr = 0x83118B64;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118b70
	goto loc_83118B70;
loc_83118B6C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118B70:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118B7C;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118B84;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,15128
	ctx.r25.s64 = ctx.r11.s64 + 15128;
	// beq 0x83118bb4
	if (ctx.cr0.eq) goto loc_83118BB4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-1340
	ctx.r5.s64 = ctx.r11.s64 + -1340;
	// bl 0x831565c8
	ctx.lr = 0x83118BAC;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118bb8
	goto loc_83118BB8;
loc_83118BB4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118BB8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118BC4;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118BD4;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17096
	ctx.r29.s64 = ctx.r11.s64 + 17096;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118C04;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118C0C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118c2c
	if (ctx.cr0.eq) goto loc_83118C2C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118C24;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118c30
	goto loc_83118C30;
loc_83118C2C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118C30:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118C38;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118c60
	if (ctx.cr0.eq) goto loc_83118C60;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,116
	ctx.r5.s64 = ctx.r11.s64 + 116;
	// bl 0x831565c8
	ctx.lr = 0x83118C58;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118c64
	goto loc_83118C64;
loc_83118C60:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118C64:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118C70;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118C78;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118ca0
	if (ctx.cr0.eq) goto loc_83118CA0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-732
	ctx.r5.s64 = ctx.r11.s64 + -732;
	// bl 0x831565c8
	ctx.lr = 0x83118C98;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118ca4
	goto loc_83118CA4;
loc_83118CA0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118CA4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118CB0;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118CC0;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17108
	ctx.r29.s64 = ctx.r11.s64 + 17108;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118CF0;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118CF8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118d18
	if (ctx.cr0.eq) goto loc_83118D18;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118D10;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118d1c
	goto loc_83118D1C;
loc_83118D18:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118D1C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118D24;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118d4c
	if (ctx.cr0.eq) goto loc_83118D4C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-1044
	ctx.r5.s64 = ctx.r11.s64 + -1044;
	// bl 0x831565c8
	ctx.lr = 0x83118D44;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118d50
	goto loc_83118D50;
loc_83118D4C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118D50:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118D5C;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118D64;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118d8c
	if (ctx.cr0.eq) goto loc_83118D8C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,140
	ctx.r5.s64 = ctx.r11.s64 + 140;
	// bl 0x831565c8
	ctx.lr = 0x83118D84;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118d90
	goto loc_83118D90;
loc_83118D8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118D90:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118D9C;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118DAC;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17116
	ctx.r29.s64 = ctx.r11.s64 + 17116;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118DDC;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118DE4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118e04
	if (ctx.cr0.eq) goto loc_83118E04;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118DFC;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118e08
	goto loc_83118E08;
loc_83118E04:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118E08:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118E10;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118e38
	if (ctx.cr0.eq) goto loc_83118E38;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-156
	ctx.r5.s64 = ctx.r11.s64 + -156;
	// bl 0x831565c8
	ctx.lr = 0x83118E30;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118e3c
	goto loc_83118E3C;
loc_83118E38:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118E3C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118E48;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118E50;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118e78
	if (ctx.cr0.eq) goto loc_83118E78;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-876
	ctx.r5.s64 = ctx.r11.s64 + -876;
	// bl 0x831565c8
	ctx.lr = 0x83118E70;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118e7c
	goto loc_83118E7C;
loc_83118E78:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118E7C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118E88;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118E98;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17128
	ctx.r4.s64 = ctx.r11.s64 + 17128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118EC4;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118ECC;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118eec
	if (ctx.cr0.eq) goto loc_83118EEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118EE4;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118ef0
	goto loc_83118EF0;
loc_83118EEC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118EF0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118EF8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118f1c
	if (ctx.cr0.eq) goto loc_83118F1C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118F14;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118f20
	goto loc_83118F20;
loc_83118F1C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118F20:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118F2C;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118F3C;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r26,r11,17140
	ctx.r26.s64 = ctx.r11.s64 + 17140;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118F6C;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118F74;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118f94
	if (ctx.cr0.eq) goto loc_83118F94;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118F8C;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118f98
	goto loc_83118F98;
loc_83118F94:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118F98:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118FA0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118fc8
	if (ctx.cr0.eq) goto loc_83118FC8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-708
	ctx.r5.s64 = ctx.r11.s64 + -708;
	// bl 0x831565c8
	ctx.lr = 0x83118FC0;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118fcc
	goto loc_83118FCC;
loc_83118FC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118FCC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118FD8;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118FE8;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17180
	ctx.r29.s64 = ctx.r11.s64 + 17180;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83119018;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83119020;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119040
	if (ctx.cr0.eq) goto loc_83119040;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83119038;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83119044
	goto loc_83119044;
loc_83119040:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83119044:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311904C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119074
	if (ctx.cr0.eq) goto loc_83119074;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,156
	ctx.r5.s64 = ctx.r11.s64 + 156;
	// bl 0x831565c8
	ctx.lr = 0x8311906C;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119078
	goto loc_83119078;
loc_83119074:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119078:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119084;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119094;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17208
	ctx.r29.s64 = ctx.r11.s64 + 17208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831190C4;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831190CC;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831190ec
	if (ctx.cr0.eq) goto loc_831190EC;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831190E4;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831190f0
	goto loc_831190F0;
loc_831190EC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831190F0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831190F8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119120
	if (ctx.cr0.eq) goto loc_83119120;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-148
	ctx.r5.s64 = ctx.r11.s64 + -148;
	// bl 0x831565c8
	ctx.lr = 0x83119118;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119124
	goto loc_83119124;
loc_83119120:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119124:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119130;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119140;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17232
	ctx.r29.s64 = ctx.r11.s64 + 17232;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83119170;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83119178;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119198
	if (ctx.cr0.eq) goto loc_83119198;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83119190;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8311919c
	goto loc_8311919C;
loc_83119198:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8311919C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831191A4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831191cc
	if (ctx.cr0.eq) goto loc_831191CC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,180
	ctx.r5.s64 = ctx.r11.s64 + 180;
	// bl 0x831565c8
	ctx.lr = 0x831191C4;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x831191d0
	goto loc_831191D0;
loc_831191CC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_831191D0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x831191DC;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x831191EC;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17260
	ctx.r4.s64 = ctx.r11.s64 + 17260;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83119218;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83119220;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119240
	if (ctx.cr0.eq) goto loc_83119240;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83119238;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83119244
	goto loc_83119244;
loc_83119240:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83119244:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311924C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119270
	if (ctx.cr0.eq) goto loc_83119270;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831565c8
	ctx.lr = 0x83119268;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119274
	goto loc_83119274;
loc_83119270:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119274:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119280;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119290;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17288
	ctx.r4.s64 = ctx.r11.s64 + 17288;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831192BC;
	sub_831177B0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x831192C4;
	sub_830DD340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// beq 0x83119304
	if (ctx.cr0.eq) goto loc_83119304;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r28,-5084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x831192E0;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83155bc0
	ctx.lr = 0x831192FC;
	sub_83155BC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83119308
	goto loc_83119308;
loc_83119304:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83119308:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,-7404
	ctx.r28.s64 = ctx.r11.s64 + -7404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83119320;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83119330;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83119338;
	sub_830DD340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// beq 0x83119378
	if (ctx.cr0.eq) goto loc_83119378;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r28,-5084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x83119354;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83155870
	ctx.lr = 0x83119370;
	sub_83155870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311937c
	goto loc_8311937C;
loc_83119378:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8311937C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r27,r11,-7396
	ctx.r27.s64 = ctx.r11.s64 + -7396;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831520a0
	ctx.lr = 0x83119394;
	sub_831520A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831193A4;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x831193AC;
	sub_830DD340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// beq 0x831193ec
	if (ctx.cr0.eq) goto loc_831193EC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r28,-5084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x831193C8;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83155518
	ctx.lr = 0x831193E4;
	sub_83155518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831193f0
	goto loc_831193F0;
loc_831193EC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831193F0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r26,r11,-7732
	ctx.r26.s64 = ctx.r11.s64 + -7732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831520a0
	ctx.lr = 0x83119408;
	sub_831520A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83119418;
	sub_8315F5D0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83119420;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119440
	if (ctx.cr0.eq) goto loc_83119440;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83119438;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83119444
	goto loc_83119444;
loc_83119440:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83119444:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311944C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119470
	if (ctx.cr0.eq) goto loc_83119470;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x831565c8
	ctx.lr = 0x83119468;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119474
	goto loc_83119474;
loc_83119470:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119474:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119480;
	sub_8315F5D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119490;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7384
	ctx.r4.s64 = ctx.r11.s64 + -7384;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831194BC;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831194C4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831194e4
	if (ctx.cr0.eq) goto loc_831194E4;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831194DC;
	sub_8311CEB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831194e8
	goto loc_831194E8;
loc_831194E4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831194E8:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831194F0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119514
	if (ctx.cr0.eq) goto loc_83119514;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x831565c8
	ctx.lr = 0x8311950C;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119518
	goto loc_83119518;
loc_83119514:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119518:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119524;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r30,-5084(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119534;
	sub_830EC170(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7716
	ctx.r4.s64 = ctx.r11.s64 + -7716;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83119560;
	sub_831177B0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83116bc0
	ctx.lr = 0x83119568;
	sub_83116BC0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,30368
	ctx.r4.s64 = ctx.r11.s64 + 30368;
	// addi r3,r10,-4728
	ctx.r3.s64 = ctx.r10.s64 + -4728;
	// bl 0x830ff598
	ctx.lr = 0x8311957C;
	sub_830FF598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r11.u8);
loc_83119584:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x830fcfb8
	ctx.lr = 0x8311958C;
	sub_830FCFB8(ctx, base);
loc_8311958C:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x833a01c4
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83117D10"))) PPC_WEAK_FUNC(sub_83117D10);
PPC_FUNC_IMPL(__imp__sub_83117D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0174
	ctx.lr = 0x83117D18;
	__savegprlr_15(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r15,r11,-4744
	ctx.r15.s64 = ctx.r11.s64 + -4744;
	// lbz r11,-4744(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311958c
	if (!ctx.cr0.eq) goto loc_8311958C;
	// lwz r4,4(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83117d98
	if (!ctx.cr6.eq) goto loc_83117D98;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83117D58;
	sub_830FCF80(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83117d8c
	if (!ctx.cr6.eq) goto loc_83117D8C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x83117D6C;
	sub_830DD340(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117d84
	if (ctx.cr0.eq) goto loc_83117D84;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x83117D80;
	sub_830FCEF0(ctx, base);
	// b 0x83117d88
	goto loc_83117D88;
loc_83117D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83117D88:
	// stw r3,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r3.u32);
loc_83117D8C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830fcfb8
	ctx.lr = 0x83117D94;
	sub_830FCFB8(ctx, base);
	// lwz r4,4(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
loc_83117D98:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x830fcf80
	ctx.lr = 0x83117DA0;
	sub_830FCF80(ctx, base);
	// lbz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83119584
	if (!ctx.cr0.eq) goto loc_83119584;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83117DB4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117dd4
	if (ctx.cr0.eq) goto loc_83117DD4;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83117DCC;
	sub_8311CEB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83117dd8
	goto loc_83117DD8;
loc_83117DD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83117DD8:
	// lis r16,-31827
	ctx.r16.s64 = -2085814272;
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r11,-4736(r16)
	PPC_STORE_U32(ctx.r16.u32 + -4736, ctx.r11.u32);
	// bl 0x830dd340
	ctx.lr = 0x83117DE8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117e04
	if (ctx.cr0.eq) goto loc_83117E04;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315cce8
	ctx.lr = 0x83117DFC;
	sub_8315CCE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117e08
	goto loc_83117E08;
loc_83117E04:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117E08:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r17,r11,14464
	ctx.r17.s64 = ctx.r11.s64 + 14464;
	// addi r26,r10,16900
	ctx.r26.s64 = ctx.r10.s64 + 16900;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117E28;
	sub_831520A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117E38;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83117E40;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117e5c
	if (ctx.cr0.eq) goto loc_83117E5C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315c7f8
	ctx.lr = 0x83117E54;
	sub_8315C7F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117e60
	goto loc_83117E60;
loc_83117E5C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117E60:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,-7072
	ctx.r28.s64 = ctx.r11.s64 + -7072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117E78;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117E88;
	sub_8315F5D0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x830dd340
	ctx.lr = 0x83117E90;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117eac
	if (ctx.cr0.eq) goto loc_83117EAC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315c610
	ctx.lr = 0x83117EA4;
	sub_8315C610(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117eb0
	goto loc_83117EB0;
loc_83117EAC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117EB0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17636
	ctx.r28.s64 = ctx.r11.s64 + 17636;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117EC8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117ED8;
	sub_8315F5D0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x830dd340
	ctx.lr = 0x83117EE0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117efc
	if (ctx.cr0.eq) goto loc_83117EFC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831165a8
	ctx.lr = 0x83117EF4;
	sub_831165A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117f00
	goto loc_83117F00;
loc_83117EFC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117F00:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17008
	ctx.r28.s64 = ctx.r11.s64 + 17008;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117F18;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117F28;
	sub_8315F5D0(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x830dd340
	ctx.lr = 0x83117F30;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117f4c
	if (ctx.cr0.eq) goto loc_83117F4C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315b308
	ctx.lr = 0x83117F44;
	sub_8315B308(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117f50
	goto loc_83117F50;
loc_83117F4C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117F50:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r21,r11,16992
	ctx.r21.s64 = ctx.r11.s64 + 16992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117F68;
	sub_831520A0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117F78;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83117F80;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117f9c
	if (ctx.cr0.eq) goto loc_83117F9C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315aff8
	ctx.lr = 0x83117F94;
	sub_8315AFF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117fa0
	goto loc_83117FA0;
loc_83117F9C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117FA0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17496
	ctx.r28.s64 = ctx.r11.s64 + 17496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83117FB8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83117FC8;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83117FD0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83117fec
	if (ctx.cr0.eq) goto loc_83117FEC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315ac50
	ctx.lr = 0x83117FE4;
	sub_8315AC50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83117ff0
	goto loc_83117FF0;
loc_83117FEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83117FF0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17468
	ctx.r28.s64 = ctx.r11.s64 + 17468;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118008;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118018;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118020;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311803c
	if (ctx.cr0.eq) goto loc_8311803C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8315a288
	ctx.lr = 0x83118034;
	sub_8315A288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118040
	goto loc_83118040;
loc_8311803C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118040:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17528
	ctx.r28.s64 = ctx.r11.s64 + 17528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118058;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118068;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118070;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311808c
	if (ctx.cr0.eq) goto loc_8311808C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831597e8
	ctx.lr = 0x83118084;
	sub_831597E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118090
	goto loc_83118090;
loc_8311808C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118090:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17516
	ctx.r28.s64 = ctx.r11.s64 + 17516;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831180A8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831180B8;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x831180C0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831180dc
	if (ctx.cr0.eq) goto loc_831180DC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83159410
	ctx.lr = 0x831180D4;
	sub_83159410(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831180e0
	goto loc_831180E0;
loc_831180DC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831180E0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17572
	ctx.r28.s64 = ctx.r11.s64 + 17572;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831180F8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118108;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83118110;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311812c
	if (ctx.cr0.eq) goto loc_8311812C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83158e38
	ctx.lr = 0x83118124;
	sub_83158E38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118130
	goto loc_83118130;
loc_8311812C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118130:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17588
	ctx.r28.s64 = ctx.r11.s64 + 17588;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118148;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118158;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118160;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311817c
	if (ctx.cr0.eq) goto loc_8311817C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83158978
	ctx.lr = 0x83118174;
	sub_83158978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118180
	goto loc_83118180;
loc_8311817C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118180:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17320
	ctx.r28.s64 = ctx.r11.s64 + 17320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118198;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831181A8;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x831181B0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831181cc
	if (ctx.cr0.eq) goto loc_831181CC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831584c0
	ctx.lr = 0x831181C4;
	sub_831584C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831181d0
	goto loc_831181D0;
loc_831181CC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831181D0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17340
	ctx.r28.s64 = ctx.r11.s64 + 17340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831181E8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831181F8;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118200;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311821c
	if (ctx.cr0.eq) goto loc_8311821C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83158008
	ctx.lr = 0x83118214;
	sub_83158008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118220
	goto loc_83118220;
loc_8311821C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118220:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17352
	ctx.r28.s64 = ctx.r11.s64 + 17352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118238;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118248;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118250;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311826c
	if (ctx.cr0.eq) goto loc_8311826C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83157c70
	ctx.lr = 0x83118264;
	sub_83157C70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118270
	goto loc_83118270;
loc_8311826C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118270:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17384
	ctx.r28.s64 = ctx.r11.s64 + 17384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118288;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118298;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x831182A0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831182bc
	if (ctx.cr0.eq) goto loc_831182BC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831578d8
	ctx.lr = 0x831182B4;
	sub_831578D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831182c0
	goto loc_831182C0;
loc_831182BC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831182C0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17396
	ctx.r28.s64 = ctx.r11.s64 + 17396;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831182D8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831182E8;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x831182F0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311830c
	if (ctx.cr0.eq) goto loc_8311830C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83157540
	ctx.lr = 0x83118304;
	sub_83157540(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118310
	goto loc_83118310;
loc_8311830C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118310:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17412
	ctx.r28.s64 = ctx.r11.s64 + 17412;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118328;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118338;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118340;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311835c
	if (ctx.cr0.eq) goto loc_8311835C;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x831571a8
	ctx.lr = 0x83118354;
	sub_831571A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118360
	goto loc_83118360;
loc_8311835C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118360:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17432
	ctx.r28.s64 = ctx.r11.s64 + 17432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118378;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118388;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x83118390;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831183ac
	if (ctx.cr0.eq) goto loc_831183AC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83156e10
	ctx.lr = 0x831183A4;
	sub_83156E10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831183b0
	goto loc_831183B0;
loc_831183AC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831183B0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17444
	ctx.r28.s64 = ctx.r11.s64 + 17444;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x831183C8;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831183D8;
	sub_8315F5D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x830dd340
	ctx.lr = 0x831183E0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831183fc
	if (ctx.cr0.eq) goto loc_831183FC;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x83156a68
	ctx.lr = 0x831183F4;
	sub_83156A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83118400
	goto loc_83118400;
loc_831183FC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83118400:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,17364
	ctx.r28.s64 = ctx.r11.s64 + 17364;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118418;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118428;
	sub_8315F5D0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118430;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118450
	if (ctx.cr0.eq) goto loc_83118450;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118448;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118454
	goto loc_83118454;
loc_83118450:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118454:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311845C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,14896
	ctx.r27.s64 = ctx.r11.s64 + 14896;
	// beq 0x8311848c
	if (ctx.cr0.eq) goto loc_8311848C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,16884
	ctx.r5.s64 = ctx.r11.s64 + 16884;
	// bl 0x831565c8
	ctx.lr = 0x83118484;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118490
	goto loc_83118490;
loc_8311848C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118490:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x8311849C;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x831184AC;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17600
	ctx.r29.s64 = ctx.r11.s64 + 17600;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831184DC;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831184E4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118504
	if (ctx.cr0.eq) goto loc_83118504;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831184FC;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118508
	goto loc_83118508;
loc_83118504:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118508:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118510;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,16864
	ctx.r25.s64 = ctx.r11.s64 + 16864;
	// beq 0x8311853c
	if (ctx.cr0.eq) goto loc_8311853C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118534;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118540
	goto loc_83118540;
loc_8311853C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118540:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x8311854C;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x8311855C;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r24,r11,16916
	ctx.r24.s64 = ctx.r11.s64 + 16916;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x8311858C;
	sub_831177B0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83118594;
	sub_830DD340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// beq 0x831185d4
	if (ctx.cr0.eq) goto loc_831185D4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r28,-5084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x831185B0;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83156218
	ctx.lr = 0x831185CC;
	sub_83156218(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831185d8
	goto loc_831185D8;
loc_831185D4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831185D8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r29,r11,16948
	ctx.r29.s64 = ctx.r11.s64 + 16948;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831520a0
	ctx.lr = 0x831185F0;
	sub_831520A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118600;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83118608;
	sub_830DD340(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// beq 0x83118648
	if (ctx.cr0.eq) goto loc_83118648;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x83118624;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x83155f20
	ctx.lr = 0x83118640;
	sub_83155F20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311864c
	goto loc_8311864C;
loc_83118648:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8311864C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r18,r11,16960
	ctx.r18.s64 = ctx.r11.s64 + 16960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x831520a0
	ctx.lr = 0x83118664;
	sub_831520A0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83118674;
	sub_8315F5D0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x8311867C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311869c
	if (ctx.cr0.eq) goto loc_8311869C;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118694;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831186a0
	goto loc_831186A0;
loc_8311869C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831186A0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831186A8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,15196
	ctx.r26.s64 = ctx.r11.s64 + 15196;
	// addi r23,r10,-26584
	ctx.r23.s64 = ctx.r10.s64 + -26584;
	// beq 0x831186dc
	if (ctx.cr0.eq) goto loc_831186DC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831565c8
	ctx.lr = 0x831186D4;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x831186e0
	goto loc_831186E0;
loc_831186DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_831186E0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x831186EC;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831186F4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118718
	if (ctx.cr0.eq) goto loc_83118718;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118710;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8311871c
	goto loc_8311871C;
loc_83118718:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8311871C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118728;
	sub_8315F5D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118738;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,-7040
	ctx.r29.s64 = ctx.r11.s64 + -7040;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118768;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118770;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118790
	if (ctx.cr0.eq) goto loc_83118790;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118788;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118794
	goto loc_83118794;
loc_83118790:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118794:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311879C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,15156
	ctx.r20.s64 = ctx.r11.s64 + 15156;
	// addi r19,r10,-1636
	ctx.r19.s64 = ctx.r10.s64 + -1636;
	// beq 0x831187d0
	if (ctx.cr0.eq) goto loc_831187D0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x831565c8
	ctx.lr = 0x831187C8;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x831187d4
	goto loc_831187D4;
loc_831187D0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_831187D4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x831187E0;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x831187F0;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7024
	ctx.r4.s64 = ctx.r11.s64 + -7024;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x8311881C;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118824;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118844
	if (ctx.cr0.eq) goto loc_83118844;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x8311883C;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118848
	goto loc_83118848;
loc_83118844:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118848:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118850;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118878
	if (ctx.cr0.eq) goto loc_83118878;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// bl 0x831565c8
	ctx.lr = 0x83118870;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8311887c
	goto loc_8311887C;
loc_83118878:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8311887C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118888;
	sub_8315F5D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118898;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,16928
	ctx.r4.s64 = ctx.r11.s64 + 16928;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831188C4;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831188CC;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831188ec
	if (ctx.cr0.eq) goto loc_831188EC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831188E4;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831188f0
	goto loc_831188F0;
loc_831188EC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831188F0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831188F8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,15252
	ctx.r29.s64 = ctx.r11.s64 + 15252;
	// addi r24,r10,-1804
	ctx.r24.s64 = ctx.r10.s64 + -1804;
	// beq 0x8311892c
	if (ctx.cr0.eq) goto loc_8311892C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118924;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118930
	goto loc_83118930;
loc_8311892C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118930:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x8311893C;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118944;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118968
	if (ctx.cr0.eq) goto loc_83118968;
	// addi r5,r23,8
	ctx.r5.s64 = ctx.r23.s64 + 8;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118960;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8311896c
	goto loc_8311896C;
loc_83118968:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8311896C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118978;
	sub_8315F5D0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118988;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r26,r11,16976
	ctx.r26.s64 = ctx.r11.s64 + 16976;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831189B8;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831189C0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831189e0
	if (ctx.cr0.eq) goto loc_831189E0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831189D8;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831189e4
	goto loc_831189E4;
loc_831189E0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831189E4:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831189EC;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,15052
	ctx.r27.s64 = ctx.r11.s64 + 15052;
	// beq 0x83118a18
	if (ctx.cr0.eq) goto loc_83118A18;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118A10;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118a1c
	goto loc_83118A1C;
loc_83118A18:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118A1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118A28;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118A38;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17024
	ctx.r29.s64 = ctx.r11.s64 + 17024;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118A68;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118A70;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118a90
	if (ctx.cr0.eq) goto loc_83118A90;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118A88;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118a94
	goto loc_83118A94;
loc_83118A90:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118A94:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118A9C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118ac4
	if (ctx.cr0.eq) goto loc_83118AC4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,108
	ctx.r5.s64 = ctx.r11.s64 + 108;
	// bl 0x831565c8
	ctx.lr = 0x83118ABC;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118ac8
	goto loc_83118AC8;
loc_83118AC4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118AC8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118AD4;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118AE4;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17064
	ctx.r4.s64 = ctx.r11.s64 + 17064;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118B10;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118B18;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118b38
	if (ctx.cr0.eq) goto loc_83118B38;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118B30;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118b3c
	goto loc_83118B3C;
loc_83118B38:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118B3C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118B44;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118b6c
	if (ctx.cr0.eq) goto loc_83118B6C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-916
	ctx.r5.s64 = ctx.r11.s64 + -916;
	// bl 0x831565c8
	ctx.lr = 0x83118B64;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118b70
	goto loc_83118B70;
loc_83118B6C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118B70:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118B7C;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118B84;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,15128
	ctx.r25.s64 = ctx.r11.s64 + 15128;
	// beq 0x83118bb4
	if (ctx.cr0.eq) goto loc_83118BB4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-1340
	ctx.r5.s64 = ctx.r11.s64 + -1340;
	// bl 0x831565c8
	ctx.lr = 0x83118BAC;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118bb8
	goto loc_83118BB8;
loc_83118BB4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118BB8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118BC4;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118BD4;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17096
	ctx.r29.s64 = ctx.r11.s64 + 17096;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118C04;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118C0C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118c2c
	if (ctx.cr0.eq) goto loc_83118C2C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118C24;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118c30
	goto loc_83118C30;
loc_83118C2C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118C30:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118C38;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118c60
	if (ctx.cr0.eq) goto loc_83118C60;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,116
	ctx.r5.s64 = ctx.r11.s64 + 116;
	// bl 0x831565c8
	ctx.lr = 0x83118C58;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118c64
	goto loc_83118C64;
loc_83118C60:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118C64:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118C70;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118C78;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118ca0
	if (ctx.cr0.eq) goto loc_83118CA0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-732
	ctx.r5.s64 = ctx.r11.s64 + -732;
	// bl 0x831565c8
	ctx.lr = 0x83118C98;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118ca4
	goto loc_83118CA4;
loc_83118CA0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118CA4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118CB0;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118CC0;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17108
	ctx.r29.s64 = ctx.r11.s64 + 17108;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118CF0;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118CF8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118d18
	if (ctx.cr0.eq) goto loc_83118D18;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118D10;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118d1c
	goto loc_83118D1C;
loc_83118D18:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118D1C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118D24;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118d4c
	if (ctx.cr0.eq) goto loc_83118D4C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-1044
	ctx.r5.s64 = ctx.r11.s64 + -1044;
	// bl 0x831565c8
	ctx.lr = 0x83118D44;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118d50
	goto loc_83118D50;
loc_83118D4C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118D50:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118D5C;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118D64;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118d8c
	if (ctx.cr0.eq) goto loc_83118D8C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,140
	ctx.r5.s64 = ctx.r11.s64 + 140;
	// bl 0x831565c8
	ctx.lr = 0x83118D84;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118d90
	goto loc_83118D90;
loc_83118D8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118D90:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118D9C;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118DAC;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17116
	ctx.r29.s64 = ctx.r11.s64 + 17116;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118DDC;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118DE4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118e04
	if (ctx.cr0.eq) goto loc_83118E04;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118DFC;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118e08
	goto loc_83118E08;
loc_83118E04:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118E08:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118E10;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118e38
	if (ctx.cr0.eq) goto loc_83118E38;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-156
	ctx.r5.s64 = ctx.r11.s64 + -156;
	// bl 0x831565c8
	ctx.lr = 0x83118E30;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118e3c
	goto loc_83118E3C;
loc_83118E38:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118E3C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118E48;
	sub_8315F5D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118E50;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118e78
	if (ctx.cr0.eq) goto loc_83118E78;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-876
	ctx.r5.s64 = ctx.r11.s64 + -876;
	// bl 0x831565c8
	ctx.lr = 0x83118E70;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118e7c
	goto loc_83118E7C;
loc_83118E78:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118E7C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118E88;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118E98;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17128
	ctx.r4.s64 = ctx.r11.s64 + 17128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118EC4;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118ECC;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118eec
	if (ctx.cr0.eq) goto loc_83118EEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118EE4;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118ef0
	goto loc_83118EF0;
loc_83118EEC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118EF0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118EF8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118f1c
	if (ctx.cr0.eq) goto loc_83118F1C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831565c8
	ctx.lr = 0x83118F14;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118f20
	goto loc_83118F20;
loc_83118F1C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118F20:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118F2C;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118F3C;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r26,r11,17140
	ctx.r26.s64 = ctx.r11.s64 + 17140;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83118F6C;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83118F74;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118f94
	if (ctx.cr0.eq) goto loc_83118F94;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83118F8C;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83118f98
	goto loc_83118F98;
loc_83118F94:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83118F98:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83118FA0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83118fc8
	if (ctx.cr0.eq) goto loc_83118FC8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-708
	ctx.r5.s64 = ctx.r11.s64 + -708;
	// bl 0x831565c8
	ctx.lr = 0x83118FC0;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83118fcc
	goto loc_83118FCC;
loc_83118FC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83118FCC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83118FD8;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83118FE8;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17180
	ctx.r29.s64 = ctx.r11.s64 + 17180;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83119018;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83119020;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119040
	if (ctx.cr0.eq) goto loc_83119040;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83119038;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83119044
	goto loc_83119044;
loc_83119040:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83119044:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311904C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119074
	if (ctx.cr0.eq) goto loc_83119074;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,156
	ctx.r5.s64 = ctx.r11.s64 + 156;
	// bl 0x831565c8
	ctx.lr = 0x8311906C;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119078
	goto loc_83119078;
loc_83119074:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119078:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119084;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119094;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17208
	ctx.r29.s64 = ctx.r11.s64 + 17208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831190C4;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831190CC;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831190ec
	if (ctx.cr0.eq) goto loc_831190EC;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831190E4;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831190f0
	goto loc_831190F0;
loc_831190EC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831190F0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831190F8;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119120
	if (ctx.cr0.eq) goto loc_83119120;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-148
	ctx.r5.s64 = ctx.r11.s64 + -148;
	// bl 0x831565c8
	ctx.lr = 0x83119118;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119124
	goto loc_83119124;
loc_83119120:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119124:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119130;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119140;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,17232
	ctx.r29.s64 = ctx.r11.s64 + 17232;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83119170;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83119178;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119198
	if (ctx.cr0.eq) goto loc_83119198;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83119190;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8311919c
	goto loc_8311919C;
loc_83119198:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8311919C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831191A4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831191cc
	if (ctx.cr0.eq) goto loc_831191CC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,180
	ctx.r5.s64 = ctx.r11.s64 + 180;
	// bl 0x831565c8
	ctx.lr = 0x831191C4;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x831191d0
	goto loc_831191D0;
loc_831191CC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_831191D0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x831191DC;
	sub_8315F5D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x831191EC;
	sub_830EC170(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17260
	ctx.r4.s64 = ctx.r11.s64 + 17260;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83119218;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83119220;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119240
	if (ctx.cr0.eq) goto loc_83119240;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83119238;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83119244
	goto loc_83119244;
loc_83119240:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83119244:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311924C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119270
	if (ctx.cr0.eq) goto loc_83119270;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831565c8
	ctx.lr = 0x83119268;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119274
	goto loc_83119274;
loc_83119270:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119274:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119280;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119290;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17288
	ctx.r4.s64 = ctx.r11.s64 + 17288;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831192BC;
	sub_831177B0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x831192C4;
	sub_830DD340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// beq 0x83119304
	if (ctx.cr0.eq) goto loc_83119304;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r28,-5084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x831192E0;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83155bc0
	ctx.lr = 0x831192FC;
	sub_83155BC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83119308
	goto loc_83119308;
loc_83119304:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83119308:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r28,r11,-7404
	ctx.r28.s64 = ctx.r11.s64 + -7404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831520a0
	ctx.lr = 0x83119320;
	sub_831520A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83119330;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x83119338;
	sub_830DD340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// beq 0x83119378
	if (ctx.cr0.eq) goto loc_83119378;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r28,-5084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x83119354;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83155870
	ctx.lr = 0x83119370;
	sub_83155870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8311937c
	goto loc_8311937C;
loc_83119378:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8311937C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r27,r11,-7396
	ctx.r27.s64 = ctx.r11.s64 + -7396;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831520a0
	ctx.lr = 0x83119394;
	sub_831520A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x831193A4;
	sub_8315F5D0(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x830dd340
	ctx.lr = 0x831193AC;
	sub_830DD340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// beq 0x831193ec
	if (ctx.cr0.eq) goto loc_831193EC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r28,-5084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830ec170
	ctx.lr = 0x831193C8;
	sub_830EC170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83155518
	ctx.lr = 0x831193E4;
	sub_83155518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831193f0
	goto loc_831193F0;
loc_831193EC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831193F0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r26,r11,-7732
	ctx.r26.s64 = ctx.r11.s64 + -7732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831520a0
	ctx.lr = 0x83119408;
	sub_831520A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4736(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -4736);
	// bl 0x8315f5d0
	ctx.lr = 0x83119418;
	sub_8315F5D0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x83119420;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119440
	if (ctx.cr0.eq) goto loc_83119440;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x83119438;
	sub_8311CEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83119444
	goto loc_83119444;
loc_83119440:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83119444:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x8311944C;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119470
	if (ctx.cr0.eq) goto loc_83119470;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x831565c8
	ctx.lr = 0x83119468;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119474
	goto loc_83119474;
loc_83119470:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119474:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119480;
	sub_8315F5D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,-5084(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119490;
	sub_830EC170(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7384
	ctx.r4.s64 = ctx.r11.s64 + -7384;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x831194BC;
	sub_831177B0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830dd340
	ctx.lr = 0x831194C4;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831194e4
	if (ctx.cr0.eq) goto loc_831194E4;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,-5084(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x8311ceb0
	ctx.lr = 0x831194DC;
	sub_8311CEB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831194e8
	goto loc_831194E8;
loc_831194E4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831194E8:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x831194F0;
	sub_830DD340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83119514
	if (ctx.cr0.eq) goto loc_83119514;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x831565c8
	ctx.lr = 0x8311950C;
	sub_831565C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83119518
	goto loc_83119518;
loc_83119514:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83119518:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x83119524;
	sub_8315F5D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r30,-5084(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830ec170
	ctx.lr = 0x83119534;
	sub_830EC170(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7716
	ctx.r4.s64 = ctx.r11.s64 + -7716;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x831177b0
	ctx.lr = 0x83119560;
	sub_831177B0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83116bc0
	ctx.lr = 0x83119568;
	sub_83116BC0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,30368
	ctx.r4.s64 = ctx.r11.s64 + 30368;
	// addi r3,r10,-4728
	ctx.r3.s64 = ctx.r10.s64 + -4728;
	// bl 0x830ff598
	ctx.lr = 0x8311957C;
	sub_830FF598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r11.u8);
loc_83119584:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x830fcfb8
	ctx.lr = 0x8311958C;
	sub_830FCFB8(ctx, base);
loc_8311958C:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x833a01c4
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119594"))) PPC_WEAK_FUNC(sub_83119594);
PPC_FUNC_IMPL(__imp__sub_83119594) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	// bl 0x830fcfb8
	ctx.lr = 0x831195AC;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831195BC"))) PPC_WEAK_FUNC(sub_831195BC);
PPC_FUNC_IMPL(__imp__sub_831195BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x830dd3e0
	ctx.lr = 0x831195D4;
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

__attribute__((alias("__imp__sub_831195E4"))) PPC_WEAK_FUNC(sub_831195E4);
PPC_FUNC_IMPL(__imp__sub_831195E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	// bl 0x830fcfb8
	ctx.lr = 0x831195FC;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311960C"))) PPC_WEAK_FUNC(sub_8311960C);
PPC_FUNC_IMPL(__imp__sub_8311960C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119624;
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

__attribute__((alias("__imp__sub_83119634"))) PPC_WEAK_FUNC(sub_83119634);
PPC_FUNC_IMPL(__imp__sub_83119634) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311964C;
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

__attribute__((alias("__imp__sub_8311965C"))) PPC_WEAK_FUNC(sub_8311965C);
PPC_FUNC_IMPL(__imp__sub_8311965C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119674;
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

__attribute__((alias("__imp__sub_83119684"))) PPC_WEAK_FUNC(sub_83119684);
PPC_FUNC_IMPL(__imp__sub_83119684) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311969C;
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

__attribute__((alias("__imp__sub_831196AC"))) PPC_WEAK_FUNC(sub_831196AC);
PPC_FUNC_IMPL(__imp__sub_831196AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831196C4;
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

__attribute__((alias("__imp__sub_831196D4"))) PPC_WEAK_FUNC(sub_831196D4);
PPC_FUNC_IMPL(__imp__sub_831196D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831196EC;
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

__attribute__((alias("__imp__sub_831196FC"))) PPC_WEAK_FUNC(sub_831196FC);
PPC_FUNC_IMPL(__imp__sub_831196FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119714;
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

__attribute__((alias("__imp__sub_83119724"))) PPC_WEAK_FUNC(sub_83119724);
PPC_FUNC_IMPL(__imp__sub_83119724) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311973C;
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

__attribute__((alias("__imp__sub_8311974C"))) PPC_WEAK_FUNC(sub_8311974C);
PPC_FUNC_IMPL(__imp__sub_8311974C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119764;
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

__attribute__((alias("__imp__sub_83119774"))) PPC_WEAK_FUNC(sub_83119774);
PPC_FUNC_IMPL(__imp__sub_83119774) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311978C;
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

__attribute__((alias("__imp__sub_8311979C"))) PPC_WEAK_FUNC(sub_8311979C);
PPC_FUNC_IMPL(__imp__sub_8311979C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831197B4;
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

__attribute__((alias("__imp__sub_831197C4"))) PPC_WEAK_FUNC(sub_831197C4);
PPC_FUNC_IMPL(__imp__sub_831197C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831197DC;
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

__attribute__((alias("__imp__sub_831197EC"))) PPC_WEAK_FUNC(sub_831197EC);
PPC_FUNC_IMPL(__imp__sub_831197EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119804;
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

__attribute__((alias("__imp__sub_83119814"))) PPC_WEAK_FUNC(sub_83119814);
PPC_FUNC_IMPL(__imp__sub_83119814) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311982C;
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

__attribute__((alias("__imp__sub_8311983C"))) PPC_WEAK_FUNC(sub_8311983C);
PPC_FUNC_IMPL(__imp__sub_8311983C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119854;
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

__attribute__((alias("__imp__sub_83119864"))) PPC_WEAK_FUNC(sub_83119864);
PPC_FUNC_IMPL(__imp__sub_83119864) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311987C;
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

__attribute__((alias("__imp__sub_8311988C"))) PPC_WEAK_FUNC(sub_8311988C);
PPC_FUNC_IMPL(__imp__sub_8311988C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831198A4;
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

__attribute__((alias("__imp__sub_831198B4"))) PPC_WEAK_FUNC(sub_831198B4);
PPC_FUNC_IMPL(__imp__sub_831198B4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831198CC;
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

__attribute__((alias("__imp__sub_831198DC"))) PPC_WEAK_FUNC(sub_831198DC);
PPC_FUNC_IMPL(__imp__sub_831198DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831198F4;
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

__attribute__((alias("__imp__sub_83119904"))) PPC_WEAK_FUNC(sub_83119904);
PPC_FUNC_IMPL(__imp__sub_83119904) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311991C;
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

__attribute__((alias("__imp__sub_8311992C"))) PPC_WEAK_FUNC(sub_8311992C);
PPC_FUNC_IMPL(__imp__sub_8311992C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119944;
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

__attribute__((alias("__imp__sub_83119954"))) PPC_WEAK_FUNC(sub_83119954);
PPC_FUNC_IMPL(__imp__sub_83119954) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311996C;
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

__attribute__((alias("__imp__sub_8311997C"))) PPC_WEAK_FUNC(sub_8311997C);
PPC_FUNC_IMPL(__imp__sub_8311997C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119994;
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

__attribute__((alias("__imp__sub_831199A4"))) PPC_WEAK_FUNC(sub_831199A4);
PPC_FUNC_IMPL(__imp__sub_831199A4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831199BC;
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

__attribute__((alias("__imp__sub_831199CC"))) PPC_WEAK_FUNC(sub_831199CC);
PPC_FUNC_IMPL(__imp__sub_831199CC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x831199E4;
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

__attribute__((alias("__imp__sub_831199F4"))) PPC_WEAK_FUNC(sub_831199F4);
PPC_FUNC_IMPL(__imp__sub_831199F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119A0C;
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

__attribute__((alias("__imp__sub_83119A1C"))) PPC_WEAK_FUNC(sub_83119A1C);
PPC_FUNC_IMPL(__imp__sub_83119A1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119A34;
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

__attribute__((alias("__imp__sub_83119A44"))) PPC_WEAK_FUNC(sub_83119A44);
PPC_FUNC_IMPL(__imp__sub_83119A44) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119A5C;
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

__attribute__((alias("__imp__sub_83119A6C"))) PPC_WEAK_FUNC(sub_83119A6C);
PPC_FUNC_IMPL(__imp__sub_83119A6C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119A84;
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

__attribute__((alias("__imp__sub_83119A94"))) PPC_WEAK_FUNC(sub_83119A94);
PPC_FUNC_IMPL(__imp__sub_83119A94) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119AAC;
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

__attribute__((alias("__imp__sub_83119ABC"))) PPC_WEAK_FUNC(sub_83119ABC);
PPC_FUNC_IMPL(__imp__sub_83119ABC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119AD4;
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

__attribute__((alias("__imp__sub_83119AE4"))) PPC_WEAK_FUNC(sub_83119AE4);
PPC_FUNC_IMPL(__imp__sub_83119AE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119AFC;
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

__attribute__((alias("__imp__sub_83119B0C"))) PPC_WEAK_FUNC(sub_83119B0C);
PPC_FUNC_IMPL(__imp__sub_83119B0C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119B24;
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

__attribute__((alias("__imp__sub_83119B34"))) PPC_WEAK_FUNC(sub_83119B34);
PPC_FUNC_IMPL(__imp__sub_83119B34) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119B4C;
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

__attribute__((alias("__imp__sub_83119B5C"))) PPC_WEAK_FUNC(sub_83119B5C);
PPC_FUNC_IMPL(__imp__sub_83119B5C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119B74;
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

__attribute__((alias("__imp__sub_83119B84"))) PPC_WEAK_FUNC(sub_83119B84);
PPC_FUNC_IMPL(__imp__sub_83119B84) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119B9C;
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

__attribute__((alias("__imp__sub_83119BAC"))) PPC_WEAK_FUNC(sub_83119BAC);
PPC_FUNC_IMPL(__imp__sub_83119BAC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119BC4;
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

__attribute__((alias("__imp__sub_83119BD4"))) PPC_WEAK_FUNC(sub_83119BD4);
PPC_FUNC_IMPL(__imp__sub_83119BD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119BEC;
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

__attribute__((alias("__imp__sub_83119BFC"))) PPC_WEAK_FUNC(sub_83119BFC);
PPC_FUNC_IMPL(__imp__sub_83119BFC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119C14;
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

__attribute__((alias("__imp__sub_83119C24"))) PPC_WEAK_FUNC(sub_83119C24);
PPC_FUNC_IMPL(__imp__sub_83119C24) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119C3C;
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

__attribute__((alias("__imp__sub_83119C4C"))) PPC_WEAK_FUNC(sub_83119C4C);
PPC_FUNC_IMPL(__imp__sub_83119C4C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119C64;
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

__attribute__((alias("__imp__sub_83119C74"))) PPC_WEAK_FUNC(sub_83119C74);
PPC_FUNC_IMPL(__imp__sub_83119C74) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119C8C;
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

__attribute__((alias("__imp__sub_83119C9C"))) PPC_WEAK_FUNC(sub_83119C9C);
PPC_FUNC_IMPL(__imp__sub_83119C9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119CB4;
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

__attribute__((alias("__imp__sub_83119CC4"))) PPC_WEAK_FUNC(sub_83119CC4);
PPC_FUNC_IMPL(__imp__sub_83119CC4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119CDC;
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

__attribute__((alias("__imp__sub_83119CEC"))) PPC_WEAK_FUNC(sub_83119CEC);
PPC_FUNC_IMPL(__imp__sub_83119CEC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119D04;
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

__attribute__((alias("__imp__sub_83119D14"))) PPC_WEAK_FUNC(sub_83119D14);
PPC_FUNC_IMPL(__imp__sub_83119D14) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119D2C;
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

__attribute__((alias("__imp__sub_83119D3C"))) PPC_WEAK_FUNC(sub_83119D3C);
PPC_FUNC_IMPL(__imp__sub_83119D3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119D54;
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

__attribute__((alias("__imp__sub_83119D64"))) PPC_WEAK_FUNC(sub_83119D64);
PPC_FUNC_IMPL(__imp__sub_83119D64) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119D7C;
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

__attribute__((alias("__imp__sub_83119D8C"))) PPC_WEAK_FUNC(sub_83119D8C);
PPC_FUNC_IMPL(__imp__sub_83119D8C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119DA4;
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

__attribute__((alias("__imp__sub_83119DB4"))) PPC_WEAK_FUNC(sub_83119DB4);
PPC_FUNC_IMPL(__imp__sub_83119DB4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119DCC;
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

__attribute__((alias("__imp__sub_83119DDC"))) PPC_WEAK_FUNC(sub_83119DDC);
PPC_FUNC_IMPL(__imp__sub_83119DDC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119DF4;
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

__attribute__((alias("__imp__sub_83119E04"))) PPC_WEAK_FUNC(sub_83119E04);
PPC_FUNC_IMPL(__imp__sub_83119E04) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119E1C;
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

__attribute__((alias("__imp__sub_83119E2C"))) PPC_WEAK_FUNC(sub_83119E2C);
PPC_FUNC_IMPL(__imp__sub_83119E2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119E44;
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

__attribute__((alias("__imp__sub_83119E54"))) PPC_WEAK_FUNC(sub_83119E54);
PPC_FUNC_IMPL(__imp__sub_83119E54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119E6C;
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

__attribute__((alias("__imp__sub_83119E7C"))) PPC_WEAK_FUNC(sub_83119E7C);
PPC_FUNC_IMPL(__imp__sub_83119E7C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119E94;
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

__attribute__((alias("__imp__sub_83119EA4"))) PPC_WEAK_FUNC(sub_83119EA4);
PPC_FUNC_IMPL(__imp__sub_83119EA4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119EBC;
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

__attribute__((alias("__imp__sub_83119ECC"))) PPC_WEAK_FUNC(sub_83119ECC);
PPC_FUNC_IMPL(__imp__sub_83119ECC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119EE4;
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

__attribute__((alias("__imp__sub_83119EF4"))) PPC_WEAK_FUNC(sub_83119EF4);
PPC_FUNC_IMPL(__imp__sub_83119EF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119F0C;
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

__attribute__((alias("__imp__sub_83119F1C"))) PPC_WEAK_FUNC(sub_83119F1C);
PPC_FUNC_IMPL(__imp__sub_83119F1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119F34;
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

__attribute__((alias("__imp__sub_83119F44"))) PPC_WEAK_FUNC(sub_83119F44);
PPC_FUNC_IMPL(__imp__sub_83119F44) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119F5C;
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

__attribute__((alias("__imp__sub_83119F6C"))) PPC_WEAK_FUNC(sub_83119F6C);
PPC_FUNC_IMPL(__imp__sub_83119F6C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119F84;
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

__attribute__((alias("__imp__sub_83119F94"))) PPC_WEAK_FUNC(sub_83119F94);
PPC_FUNC_IMPL(__imp__sub_83119F94) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119FAC;
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

__attribute__((alias("__imp__sub_83119FBC"))) PPC_WEAK_FUNC(sub_83119FBC);
PPC_FUNC_IMPL(__imp__sub_83119FBC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119FD4;
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

__attribute__((alias("__imp__sub_83119FE4"))) PPC_WEAK_FUNC(sub_83119FE4);
PPC_FUNC_IMPL(__imp__sub_83119FE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x83119FFC;
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

__attribute__((alias("__imp__sub_8311A00C"))) PPC_WEAK_FUNC(sub_8311A00C);
PPC_FUNC_IMPL(__imp__sub_8311A00C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A024;
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

__attribute__((alias("__imp__sub_8311A034"))) PPC_WEAK_FUNC(sub_8311A034);
PPC_FUNC_IMPL(__imp__sub_8311A034) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A04C;
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

__attribute__((alias("__imp__sub_8311A05C"))) PPC_WEAK_FUNC(sub_8311A05C);
PPC_FUNC_IMPL(__imp__sub_8311A05C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A074;
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

__attribute__((alias("__imp__sub_8311A084"))) PPC_WEAK_FUNC(sub_8311A084);
PPC_FUNC_IMPL(__imp__sub_8311A084) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A09C;
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

__attribute__((alias("__imp__sub_8311A0AC"))) PPC_WEAK_FUNC(sub_8311A0AC);
PPC_FUNC_IMPL(__imp__sub_8311A0AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A0C4;
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

__attribute__((alias("__imp__sub_8311A0D4"))) PPC_WEAK_FUNC(sub_8311A0D4);
PPC_FUNC_IMPL(__imp__sub_8311A0D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A0EC;
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

__attribute__((alias("__imp__sub_8311A0FC"))) PPC_WEAK_FUNC(sub_8311A0FC);
PPC_FUNC_IMPL(__imp__sub_8311A0FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A114;
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

__attribute__((alias("__imp__sub_8311A124"))) PPC_WEAK_FUNC(sub_8311A124);
PPC_FUNC_IMPL(__imp__sub_8311A124) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A13C;
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

__attribute__((alias("__imp__sub_8311A14C"))) PPC_WEAK_FUNC(sub_8311A14C);
PPC_FUNC_IMPL(__imp__sub_8311A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A150"))) PPC_WEAK_FUNC(sub_8311A150);
PPC_FUNC_IMPL(__imp__sub_8311A150) {
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
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a184
	if (!ctx.cr0.eq) goto loc_8311A184;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83160bf8
	ctx.lr = 0x8311A180;
	sub_83160BF8(ctx, base);
	// b 0x8311a1a0
	goto loc_8311A1A0;
loc_8311A184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83117d10
	ctx.lr = 0x8311A18C;
	sub_83117D10(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8315ff68
	ctx.lr = 0x8311A1A0;
	sub_8315FF68(ctx, base);
loc_8311A1A0:
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

__attribute__((alias("__imp__sub_8311A1B8"))) PPC_WEAK_FUNC(sub_8311A1B8);
PPC_FUNC_IMPL(__imp__sub_8311A1B8) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x830dd340
	ctx.lr = 0x8311A1D0;
	sub_830DD340(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a200
	if (ctx.cr0.eq) goto loc_8311A200;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-26440
	ctx.r10.s64 = ctx.r10.s64 + -26440;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-5084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8311a204
	goto loc_8311A204;
loc_8311A200:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8311A204:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8311a22c
	if (ctx.cr6.eq) goto loc_8311A22C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83117d10
	ctx.lr = 0x8311A214;
	sub_83117D10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311A22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311A22C:
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

__attribute__((alias("__imp__sub_8311A240"))) PPC_WEAK_FUNC(sub_8311A240);
PPC_FUNC_IMPL(__imp__sub_8311A240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A250"))) PPC_WEAK_FUNC(sub_8311A250);
PPC_FUNC_IMPL(__imp__sub_8311A250) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8311A268"))) PPC_WEAK_FUNC(sub_8311A268);
PPC_FUNC_IMPL(__imp__sub_8311A268) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8311a294
	if (ctx.cr0.eq) goto loc_8311A294;
	// bl 0x830dd3e0
	ctx.lr = 0x8311A294;
	sub_830DD3E0(ctx, base);
loc_8311A294:
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

__attribute__((alias("__imp__sub_8311A2AC"))) PPC_WEAK_FUNC(sub_8311A2AC);
PPC_FUNC_IMPL(__imp__sub_8311A2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A2B0"))) PPC_WEAK_FUNC(sub_8311A2B0);
PPC_FUNC_IMPL(__imp__sub_8311A2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23800(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23800);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A2C0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a348
	if (!ctx.cr0.eq) goto loc_8311A348;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bne cr6,0x8311a328
	if (!ctx.cr6.eq) goto loc_8311A328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x830dd390
	ctx.lr = 0x8311A300;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a320
	if (ctx.cr0.eq) goto loc_8311A320;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,109
	ctx.r5.s64 = 109;
	// bl 0x83161538
	ctx.lr = 0x8311A31C;
	sub_83161538(ctx, base);
	// b 0x8311a324
	goto loc_8311A324;
loc_8311A320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A324:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_8311A328:
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a348
	if (!ctx.cr0.eq) goto loc_8311A348;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311A348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311A348:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A2B8"))) PPC_WEAK_FUNC(sub_8311A2B8);
PPC_FUNC_IMPL(__imp__sub_8311A2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A2C0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a348
	if (!ctx.cr0.eq) goto loc_8311A348;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bne cr6,0x8311a328
	if (!ctx.cr6.eq) goto loc_8311A328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x830dd390
	ctx.lr = 0x8311A300;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a320
	if (ctx.cr0.eq) goto loc_8311A320;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,109
	ctx.r5.s64 = 109;
	// bl 0x83161538
	ctx.lr = 0x8311A31C;
	sub_83161538(ctx, base);
	// b 0x8311a324
	goto loc_8311A324;
loc_8311A320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A324:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_8311A328:
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a348
	if (!ctx.cr0.eq) goto loc_8311A348;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311A348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311A348:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A350"))) PPC_WEAK_FUNC(sub_8311A350);
PPC_FUNC_IMPL(__imp__sub_8311A350) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A36C;
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

__attribute__((alias("__imp__sub_8311A37C"))) PPC_WEAK_FUNC(sub_8311A37C);
PPC_FUNC_IMPL(__imp__sub_8311A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A380"))) PPC_WEAK_FUNC(sub_8311A380);
PPC_FUNC_IMPL(__imp__sub_8311A380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A388;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311a408
	if (ctx.cr0.eq) goto loc_8311A408;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311a3e4
	if (ctx.cr6.eq) goto loc_8311A3E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311A3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311a3e0
	if (ctx.cr6.eq) goto loc_8311A3E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311A3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311A3E0:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_8311A3E4:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r29,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r29.u8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8311a408
	if (ctx.cr6.eq) goto loc_8311A408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83114f48
	ctx.lr = 0x8311A3FC;
	sub_83114F48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311A404;
	sub_830DD3E0(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_8311A408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A410"))) PPC_WEAK_FUNC(sub_8311A410);
PPC_FUNC_IMPL(__imp__sub_8311A410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23728(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23728);
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A444;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a45c
	if (ctx.cr0.eq) goto loc_8311A45C;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83140df0
	ctx.lr = 0x8311A458;
	sub_83140DF0(ctx, base);
	// b 0x8311a460
	goto loc_8311A460;
loc_8311A45C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A460:
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

__attribute__((alias("__imp__sub_8311A418"))) PPC_WEAK_FUNC(sub_8311A418);
PPC_FUNC_IMPL(__imp__sub_8311A418) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A444;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a45c
	if (ctx.cr0.eq) goto loc_8311A45C;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83140df0
	ctx.lr = 0x8311A458;
	sub_83140DF0(ctx, base);
	// b 0x8311a460
	goto loc_8311A460;
loc_8311A45C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A460:
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

__attribute__((alias("__imp__sub_8311A478"))) PPC_WEAK_FUNC(sub_8311A478);
PPC_FUNC_IMPL(__imp__sub_8311A478) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A494;
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

__attribute__((alias("__imp__sub_8311A4A4"))) PPC_WEAK_FUNC(sub_8311A4A4);
PPC_FUNC_IMPL(__imp__sub_8311A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A4A8"))) PPC_WEAK_FUNC(sub_8311A4A8);
PPC_FUNC_IMPL(__imp__sub_8311A4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23672(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23672);
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A4DC;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a4f4
	if (ctx.cr0.eq) goto loc_8311A4F4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83162188
	ctx.lr = 0x8311A4F0;
	sub_83162188(ctx, base);
	// b 0x8311a4f8
	goto loc_8311A4F8;
loc_8311A4F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A4F8:
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

__attribute__((alias("__imp__sub_8311A4B0"))) PPC_WEAK_FUNC(sub_8311A4B0);
PPC_FUNC_IMPL(__imp__sub_8311A4B0) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A4DC;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a4f4
	if (ctx.cr0.eq) goto loc_8311A4F4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83162188
	ctx.lr = 0x8311A4F0;
	sub_83162188(ctx, base);
	// b 0x8311a4f8
	goto loc_8311A4F8;
loc_8311A4F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A4F8:
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

__attribute__((alias("__imp__sub_8311A510"))) PPC_WEAK_FUNC(sub_8311A510);
PPC_FUNC_IMPL(__imp__sub_8311A510) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A52C;
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

__attribute__((alias("__imp__sub_8311A53C"))) PPC_WEAK_FUNC(sub_8311A53C);
PPC_FUNC_IMPL(__imp__sub_8311A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A540"))) PPC_WEAK_FUNC(sub_8311A540);
PPC_FUNC_IMPL(__imp__sub_8311A540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23616(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23616);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A550;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A570;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a58c
	if (ctx.cr0.eq) goto loc_8311A58C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83162a88
	ctx.lr = 0x8311A588;
	sub_83162A88(ctx, base);
	// b 0x8311a590
	goto loc_8311A590;
loc_8311A58C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A590:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A548"))) PPC_WEAK_FUNC(sub_8311A548);
PPC_FUNC_IMPL(__imp__sub_8311A548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A550;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A570;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a58c
	if (ctx.cr0.eq) goto loc_8311A58C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83162a88
	ctx.lr = 0x8311A588;
	sub_83162A88(ctx, base);
	// b 0x8311a590
	goto loc_8311A590;
loc_8311A58C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A590:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A598"))) PPC_WEAK_FUNC(sub_8311A598);
PPC_FUNC_IMPL(__imp__sub_8311A598) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A5B4;
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

__attribute__((alias("__imp__sub_8311A5C4"))) PPC_WEAK_FUNC(sub_8311A5C4);
PPC_FUNC_IMPL(__imp__sub_8311A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A5C8"))) PPC_WEAK_FUNC(sub_8311A5C8);
PPC_FUNC_IMPL(__imp__sub_8311A5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23560(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23560);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A5D8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A5F8;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a614
	if (ctx.cr0.eq) goto loc_8311A614;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83163430
	ctx.lr = 0x8311A610;
	sub_83163430(ctx, base);
	// b 0x8311a618
	goto loc_8311A618;
loc_8311A614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A618:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A5D0"))) PPC_WEAK_FUNC(sub_8311A5D0);
PPC_FUNC_IMPL(__imp__sub_8311A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A5D8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A5F8;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a614
	if (ctx.cr0.eq) goto loc_8311A614;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83163430
	ctx.lr = 0x8311A610;
	sub_83163430(ctx, base);
	// b 0x8311a618
	goto loc_8311A618;
loc_8311A614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A618:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A620"))) PPC_WEAK_FUNC(sub_8311A620);
PPC_FUNC_IMPL(__imp__sub_8311A620) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A63C;
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

__attribute__((alias("__imp__sub_8311A64C"))) PPC_WEAK_FUNC(sub_8311A64C);
PPC_FUNC_IMPL(__imp__sub_8311A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A650"))) PPC_WEAK_FUNC(sub_8311A650);
PPC_FUNC_IMPL(__imp__sub_8311A650) {
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
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a68c
	if (!ctx.cr0.eq) goto loc_8311A68C;
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a68c
	if (!ctx.cr0.eq) goto loc_8311A68C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311A68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311A68C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
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

__attribute__((alias("__imp__sub_8311A6A4"))) PPC_WEAK_FUNC(sub_8311A6A4);
PPC_FUNC_IMPL(__imp__sub_8311A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A6A8"))) PPC_WEAK_FUNC(sub_8311A6A8);
PPC_FUNC_IMPL(__imp__sub_8311A6A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a6fc
	if (!ctx.cr0.eq) goto loc_8311A6FC;
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a6fc
	if (!ctx.cr0.eq) goto loc_8311A6FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311A6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8311A6FC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
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

__attribute__((alias("__imp__sub_8311A718"))) PPC_WEAK_FUNC(sub_8311A718);
PPC_FUNC_IMPL(__imp__sub_8311A718) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311a72c
	if (ctx.cr0.eq) goto loc_8311A72C;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
loc_8311A72C:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A734"))) PPC_WEAK_FUNC(sub_8311A734);
PPC_FUNC_IMPL(__imp__sub_8311A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A738"))) PPC_WEAK_FUNC(sub_8311A738);
PPC_FUNC_IMPL(__imp__sub_8311A738) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8311A750"))) PPC_WEAK_FUNC(sub_8311A750);
PPC_FUNC_IMPL(__imp__sub_8311A750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23504(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23504);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A760;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8311a788
	if (ctx.cr6.eq) goto loc_8311A788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83114f48
	ctx.lr = 0x8311A780;
	sub_83114F48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311A788;
	sub_830DD3E0(ctx, base);
loc_8311A788:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,152
	ctx.r3.s64 = 152;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A7A0;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a7bc
	if (ctx.cr0.eq) goto loc_8311A7BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83115660
	ctx.lr = 0x8311A7B8;
	sub_83115660(ctx, base);
	// b 0x8311a7c0
	goto loc_8311A7C0;
loc_8311A7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A7C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stb r11,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r11.u8);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A758"))) PPC_WEAK_FUNC(sub_8311A758);
PPC_FUNC_IMPL(__imp__sub_8311A758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311A760;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8311a788
	if (ctx.cr6.eq) goto loc_8311A788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83114f48
	ctx.lr = 0x8311A780;
	sub_83114F48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311A788;
	sub_830DD3E0(ctx, base);
loc_8311A788:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,152
	ctx.r3.s64 = 152;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// bl 0x830dd390
	ctx.lr = 0x8311A7A0;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a7bc
	if (ctx.cr0.eq) goto loc_8311A7BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83115660
	ctx.lr = 0x8311A7B8;
	sub_83115660(ctx, base);
	// b 0x8311a7c0
	goto loc_8311A7C0;
loc_8311A7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A7C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stb r11,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r11.u8);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A7D4"))) PPC_WEAK_FUNC(sub_8311A7D4);
PPC_FUNC_IMPL(__imp__sub_8311A7D4) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A7F0;
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

__attribute__((alias("__imp__sub_8311A800"))) PPC_WEAK_FUNC(sub_8311A800);
PPC_FUNC_IMPL(__imp__sub_8311A800) {
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
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311a86c
	if (!ctx.cr0.eq) goto loc_8311A86C;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x830ebfd0
	ctx.lr = 0x8311A82C;
	sub_830EBFD0(ctx, base);
	// lbz r11,29(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311a864
	if (ctx.cr0.eq) goto loc_8311A864;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311a864
	if (ctx.cr6.eq) goto loc_8311A864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311A854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8311a864
	if (!ctx.cr6.eq) goto loc_8311A864;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
loc_8311A864:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8311a870
	goto loc_8311A870;
loc_8311A86C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311A870:
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

__attribute__((alias("__imp__sub_8311A888"))) PPC_WEAK_FUNC(sub_8311A888);
PPC_FUNC_IMPL(__imp__sub_8311A888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23360(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23360);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8311A898;
	__savegprlr_28(ctx, base);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-23456
	ctx.r11.s64 = ctx.r11.s64 + -23456;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stb r29,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r29.u8);
	// stb r29,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r29.u8);
	// bl 0x830dd390
	ctx.lr = 0x8311A8E8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a908
	if (ctx.cr0.eq) goto loc_8311A908;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8315dc48
	ctx.lr = 0x8311A904;
	sub_8315DC48(ctx, base);
	// b 0x8311a90c
	goto loc_8311A90C;
loc_8311A908:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8311A90C:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x8311A91C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a938
	if (ctx.cr0.eq) goto loc_8311A938;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x83104110
	ctx.lr = 0x8311A934;
	sub_83104110(ctx, base);
	// b 0x8311a93c
	goto loc_8311A93C;
loc_8311A938:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8311A93C:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A890"))) PPC_WEAK_FUNC(sub_8311A890);
PPC_FUNC_IMPL(__imp__sub_8311A890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8311A898;
	__savegprlr_28(ctx, base);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-23456
	ctx.r11.s64 = ctx.r11.s64 + -23456;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stb r29,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r29.u8);
	// stb r29,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r29.u8);
	// bl 0x830dd390
	ctx.lr = 0x8311A8E8;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a908
	if (ctx.cr0.eq) goto loc_8311A908;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8315dc48
	ctx.lr = 0x8311A904;
	sub_8315DC48(ctx, base);
	// b 0x8311a90c
	goto loc_8311A90C;
loc_8311A908:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8311A90C:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd390
	ctx.lr = 0x8311A91C;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a938
	if (ctx.cr0.eq) goto loc_8311A938;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x83104110
	ctx.lr = 0x8311A934;
	sub_83104110(ctx, base);
	// b 0x8311a93c
	goto loc_8311A93C;
loc_8311A938:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8311A93C:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A94C"))) PPC_WEAK_FUNC(sub_8311A94C);
PPC_FUNC_IMPL(__imp__sub_8311A94C) {
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
	// bl 0x8311a240
	ctx.lr = 0x8311A964;
	sub_8311A240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A974"))) PPC_WEAK_FUNC(sub_8311A974);
PPC_FUNC_IMPL(__imp__sub_8311A974) {
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
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A990;
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

__attribute__((alias("__imp__sub_8311A9A0"))) PPC_WEAK_FUNC(sub_8311A9A0);
PPC_FUNC_IMPL(__imp__sub_8311A9A0) {
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
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8311A9BC;
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

__attribute__((alias("__imp__sub_8311A9CC"))) PPC_WEAK_FUNC(sub_8311A9CC);
PPC_FUNC_IMPL(__imp__sub_8311A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A9D0"))) PPC_WEAK_FUNC(sub_8311A9D0);
PPC_FUNC_IMPL(__imp__sub_8311A9D0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8311a9f4
	if (!ctx.cr6.eq) goto loc_8311A9F4;
loc_8311A9EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8311aa28
	goto loc_8311AA28;
loc_8311A9F4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x8311AA1C;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311a9ec
	if (ctx.cr0.eq) goto loc_8311A9EC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8311AA28:
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

__attribute__((alias("__imp__sub_8311AA3C"))) PPC_WEAK_FUNC(sub_8311AA3C);
PPC_FUNC_IMPL(__imp__sub_8311AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311AA40"))) PPC_WEAK_FUNC(sub_8311AA40);
PPC_FUNC_IMPL(__imp__sub_8311AA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311AA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311aa94
	if (!ctx.cr0.eq) goto loc_8311AA94;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83114378
	ctx.lr = 0x8311AA64;
	sub_83114378(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r29.u8);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8311aa8c
	if (ctx.cr6.eq) goto loc_8311AA8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83114f48
	ctx.lr = 0x8311AA80;
	sub_83114F48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311AA88;
	sub_830DD3E0(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_8311AA8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8311aa98
	goto loc_8311AA98;
loc_8311AA94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311AA98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311AAA0"))) PPC_WEAK_FUNC(sub_8311AAA0);
PPC_FUNC_IMPL(__imp__sub_8311AAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23272(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23272);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311AAB0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-23456
	ctx.r11.s64 = ctx.r11.s64 + -23456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8311aae8
	if (ctx.cr6.eq) goto loc_8311AAE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831147f8
	ctx.lr = 0x8311AAE0;
	sub_831147F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311AAE8;
	sub_830DD3E0(ctx, base);
loc_8311AAE8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311ab08
	if (ctx.cr6.eq) goto loc_8311AB08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311AB08:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311ab2c
	if (ctx.cr6.eq) goto loc_8311AB2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AB2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311AB2C:
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8311ab4c
	if (ctx.cr6.eq) goto loc_8311AB4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x83114f48
	ctx.lr = 0x8311AB44;
	sub_83114F48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311AB4C;
	sub_830DD3E0(ctx, base);
loc_8311AB4C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311AAA8"))) PPC_WEAK_FUNC(sub_8311AAA8);
PPC_FUNC_IMPL(__imp__sub_8311AAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311AAB0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-23456
	ctx.r11.s64 = ctx.r11.s64 + -23456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8311aae8
	if (ctx.cr6.eq) goto loc_8311AAE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831147f8
	ctx.lr = 0x8311AAE0;
	sub_831147F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311AAE8;
	sub_830DD3E0(ctx, base);
loc_8311AAE8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311ab08
	if (ctx.cr6.eq) goto loc_8311AB08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311AB08:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311ab2c
	if (ctx.cr6.eq) goto loc_8311AB2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AB2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311AB2C:
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8311ab4c
	if (ctx.cr6.eq) goto loc_8311AB4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x83114f48
	ctx.lr = 0x8311AB44;
	sub_83114F48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311AB4C;
	sub_830DD3E0(ctx, base);
loc_8311AB4C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311AB60"))) PPC_WEAK_FUNC(sub_8311AB60);
PPC_FUNC_IMPL(__imp__sub_8311AB60) {
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
	// bl 0x8311a240
	ctx.lr = 0x8311AB78;
	sub_8311A240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AB88"))) PPC_WEAK_FUNC(sub_8311AB88);
PPC_FUNC_IMPL(__imp__sub_8311AB88) {
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
	// bl 0x8311aaa8
	ctx.lr = 0x8311ABA8;
	sub_8311AAA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311abb8
	if (ctx.cr0.eq) goto loc_8311ABB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311ABB8;
	sub_830DD3E0(ctx, base);
loc_8311ABB8:
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

__attribute__((alias("__imp__sub_8311ABD4"))) PPC_WEAK_FUNC(sub_8311ABD4);
PPC_FUNC_IMPL(__imp__sub_8311ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311ABD8"))) PPC_WEAK_FUNC(sub_8311ABD8);
PPC_FUNC_IMPL(__imp__sub_8311ABD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311ABE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8311ac88
	if (!ctx.cr0.eq) goto loc_8311AC88;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8311ac88
	if (ctx.cr6.eq) goto loc_8311AC88;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830ec0c8
	ctx.lr = 0x8311AC38;
	sub_830EC0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8311ac88
	if (!ctx.cr0.eq) goto loc_8311AC88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8315f5d0
	ctx.lr = 0x8311AC50;
	sub_8315F5D0(ctx, base);
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311ac80
	if (ctx.cr0.eq) goto loc_8311AC80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8311ac80
	if (!ctx.cr6.eq) goto loc_8311AC80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r11.u8);
loc_8311AC80:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8311ac8c
	goto loc_8311AC8C;
loc_8311AC88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311AC8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311AC94"))) PPC_WEAK_FUNC(sub_8311AC94);
PPC_FUNC_IMPL(__imp__sub_8311AC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311AC98"))) PPC_WEAK_FUNC(sub_8311AC98);
PPC_FUNC_IMPL(__imp__sub_8311AC98) {
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
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x83114120
	ctx.lr = 0x8311ACBC;
	sub_83114120(ctx, base);
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

__attribute__((alias("__imp__sub_8311ACD4"))) PPC_WEAK_FUNC(sub_8311ACD4);
PPC_FUNC_IMPL(__imp__sub_8311ACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311ACD8"))) PPC_WEAK_FUNC(sub_8311ACD8);
PPC_FUNC_IMPL(__imp__sub_8311ACD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-23112(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23112);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311ACE8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83114120
	ctx.lr = 0x8311AD0C;
	sub_83114120(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311ad30
	if (!ctx.cr6.eq) goto loc_8311AD30;
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
	// beq cr6,0x8311ad34
	if (ctx.cr6.eq) goto loc_8311AD34;
loc_8311AD30:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8311AD34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8311ad68
	if (!ctx.cr0.eq) goto loc_8311AD68;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,397
	ctx.r6.s64 = 397;
	// addi r4,r11,-23224
	ctx.r4.s64 = ctx.r11.s64 + -23224;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830ff898
	ctx.lr = 0x8311AD58;
	sub_830FF898(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// bl 0x833a7198
	ctx.lr = 0x8311AD68;
	sub_833A7198(ctx, base);
loc_8311AD68:
	// li r6,8192
	ctx.r6.s64 = 8192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83100f88
	ctx.lr = 0x8311AD7C;
	sub_83100F88(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83100d60
	ctx.lr = 0x8311AD88;
	sub_83100D60(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lbz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// bl 0x83100ae8
	ctx.lr = 0x8311AD94;
	sub_83100AE8(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311ADAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831611a8
	ctx.lr = 0x8311ADB8;
	sub_831611A8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83101510
	ctx.lr = 0x8311ADC0;
	sub_83101510(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83114e70
	ctx.lr = 0x8311ADC8;
	sub_83114E70(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311ACE0"))) PPC_WEAK_FUNC(sub_8311ACE0);
PPC_FUNC_IMPL(__imp__sub_8311ACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8311ACE8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83114120
	ctx.lr = 0x8311AD0C;
	sub_83114120(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311ad30
	if (!ctx.cr6.eq) goto loc_8311AD30;
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
	// beq cr6,0x8311ad34
	if (ctx.cr6.eq) goto loc_8311AD34;
loc_8311AD30:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8311AD34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8311ad68
	if (!ctx.cr0.eq) goto loc_8311AD68;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,397
	ctx.r6.s64 = 397;
	// addi r4,r11,-23224
	ctx.r4.s64 = ctx.r11.s64 + -23224;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x830ff898
	ctx.lr = 0x8311AD58;
	sub_830FF898(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// bl 0x833a7198
	ctx.lr = 0x8311AD68;
	sub_833A7198(ctx, base);
loc_8311AD68:
	// li r6,8192
	ctx.r6.s64 = 8192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83100f88
	ctx.lr = 0x8311AD7C;
	sub_83100F88(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83100d60
	ctx.lr = 0x8311AD88;
	sub_83100D60(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lbz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// bl 0x83100ae8
	ctx.lr = 0x8311AD94;
	sub_83100AE8(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311ADAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x831611a8
	ctx.lr = 0x8311ADB8;
	sub_831611A8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83101510
	ctx.lr = 0x8311ADC0;
	sub_83101510(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83114e70
	ctx.lr = 0x8311ADC8;
	sub_83114E70(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311ADD0"))) PPC_WEAK_FUNC(sub_8311ADD0);
PPC_FUNC_IMPL(__imp__sub_8311ADD0) {
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
	// bl 0x83114e70
	ctx.lr = 0x8311ADE8;
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

__attribute__((alias("__imp__sub_8311ADF8"))) PPC_WEAK_FUNC(sub_8311ADF8);
PPC_FUNC_IMPL(__imp__sub_8311ADF8) {
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
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83101510
	ctx.lr = 0x8311AE10;
	sub_83101510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AE20"))) PPC_WEAK_FUNC(sub_8311AE20);
PPC_FUNC_IMPL(__imp__sub_8311AE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-22956(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22956);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x8311AE38;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-400
	ctx.r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311ae84
	if (ctx.cr0.eq) goto loc_8311AE84;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x8311aec8
	if (ctx.cr6.gt) goto loc_8311AEC8;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311AE84:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// bl 0x83114120
	ctx.lr = 0x8311AE9C;
	sub_83114120(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311aef4
	if (!ctx.cr6.eq) goto loc_8311AEF4;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8311aef4
	if (!ctx.cr6.eq) goto loc_8311AEF4;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8311aefc
	goto loc_8311AEFC;
loc_8311AEC8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-23224
	ctx.r4.s64 = ctx.r11.s64 + -23224;
	// li r6,399
	ctx.r6.s64 = 399;
	// li r5,296
	ctx.r5.s64 = 296;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x830ff898
	ctx.lr = 0x8311AEE4;
	sub_830FF898(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// bl 0x833a7198
	ctx.lr = 0x8311AEF4;
	sub_833A7198(ctx, base);
loc_8311AEF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8311AEFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311af30
	if (ctx.cr0.eq) goto loc_8311AF30;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-23224
	ctx.r4.s64 = ctx.r11.s64 + -23224;
	// li r6,398
	ctx.r6.s64 = 398;
	// li r5,303
	ctx.r5.s64 = 303;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x830ff898
	ctx.lr = 0x8311AF20;
	sub_830FF898(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// bl 0x833a7198
	ctx.lr = 0x8311AF30;
	sub_833A7198(ctx, base);
loc_8311AF30:
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r11,r11,-22728
	ctx.r11.s64 = ctx.r11.s64 + -22728;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// li r6,8192
	ctx.r6.s64 = 8192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x83100838
	ctx.lr = 0x8311AF60;
	sub_83100838(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x83100cd0
	ctx.lr = 0x8311AF70;
	sub_83100CD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// sth r3,194(r31)
	PPC_STORE_U16(ctx.r31.u32 + 194, ctx.r3.u16);
	// ble cr6,0x8311affc
	if (!ctx.cr6.gt) goto loc_8311AFFC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// bl 0x830d6588
	ctx.lr = 0x8311AF98;
	sub_830D6588(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x830d6590
	ctx.lr = 0x8311AFB4;
	sub_830D6590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,-23224
	ctx.r4.s64 = ctx.r11.s64 + -23224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,168
	ctx.r8.s64 = ctx.r31.s64 + 168;
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// li r6,400
	ctx.r6.s64 = 400;
	// li r5,332
	ctx.r5.s64 = 332;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x830ff950
	ctx.lr = 0x8311AFE4;
	sub_830FF950(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// bl 0x833a7198
	ctx.lr = 0x8311AFF8;
	sub_833A7198(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8311AFFC:
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83100b50
	ctx.lr = 0x8311B00C;
	sub_83100B50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831601f8
	ctx.lr = 0x8311B040;
	sub_831601F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x83101510
	ctx.lr = 0x8311B04C;
	sub_83101510(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// beq 0x8311b084
	if (ctx.cr0.eq) goto loc_8311B084;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311B084:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83114e70
	ctx.lr = 0x8311B08C;
	sub_83114E70(ctx, base);
	// addi r1,r31,400
	ctx.r1.s64 = ctx.r31.s64 + 400;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311AE28"))) PPC_WEAK_FUNC(sub_8311AE28);
PPC_FUNC_IMPL(__imp__sub_8311AE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x8311AE38;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-400
	ctx.r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8311ae84
	if (ctx.cr0.eq) goto loc_8311AE84;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x8311aec8
	if (ctx.cr6.gt) goto loc_8311AEC8;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311AE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311AE84:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// bl 0x83114120
	ctx.lr = 0x8311AE9C;
	sub_83114120(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311aef4
	if (!ctx.cr6.eq) goto loc_8311AEF4;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8311aef4
	if (!ctx.cr6.eq) goto loc_8311AEF4;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8311aefc
	goto loc_8311AEFC;
loc_8311AEC8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-23224
	ctx.r4.s64 = ctx.r11.s64 + -23224;
	// li r6,399
	ctx.r6.s64 = 399;
	// li r5,296
	ctx.r5.s64 = 296;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x830ff898
	ctx.lr = 0x8311AEE4;
	sub_830FF898(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// bl 0x833a7198
	ctx.lr = 0x8311AEF4;
	sub_833A7198(ctx, base);
loc_8311AEF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8311AEFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311af30
	if (ctx.cr0.eq) goto loc_8311AF30;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-23224
	ctx.r4.s64 = ctx.r11.s64 + -23224;
	// li r6,398
	ctx.r6.s64 = 398;
	// li r5,303
	ctx.r5.s64 = 303;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x830ff898
	ctx.lr = 0x8311AF20;
	sub_830FF898(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// bl 0x833a7198
	ctx.lr = 0x8311AF30;
	sub_833A7198(ctx, base);
loc_8311AF30:
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r11,r11,-22728
	ctx.r11.s64 = ctx.r11.s64 + -22728;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// li r6,8192
	ctx.r6.s64 = 8192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x83100838
	ctx.lr = 0x8311AF60;
	sub_83100838(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x83100cd0
	ctx.lr = 0x8311AF70;
	sub_83100CD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// sth r3,194(r31)
	PPC_STORE_U16(ctx.r31.u32 + 194, ctx.r3.u16);
	// ble cr6,0x8311affc
	if (!ctx.cr6.gt) goto loc_8311AFFC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// bl 0x830d6588
	ctx.lr = 0x8311AF98;
	sub_830D6588(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x830d6590
	ctx.lr = 0x8311AFB4;
	sub_830D6590(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,-23224
	ctx.r4.s64 = ctx.r11.s64 + -23224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,168
	ctx.r8.s64 = ctx.r31.s64 + 168;
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// li r6,400
	ctx.r6.s64 = 400;
	// li r5,332
	ctx.r5.s64 = 332;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x830ff950
	ctx.lr = 0x8311AFE4;
	sub_830FF950(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// bl 0x833a7198
	ctx.lr = 0x8311AFF8;
	sub_833A7198(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8311AFFC:
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83100b50
	ctx.lr = 0x8311B00C;
	sub_83100B50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831601f8
	ctx.lr = 0x8311B040;
	sub_831601F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x83101510
	ctx.lr = 0x8311B04C;
	sub_83101510(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// beq 0x8311b084
	if (ctx.cr0.eq) goto loc_8311B084;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8311B084:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83114e70
	ctx.lr = 0x8311B08C;
	sub_83114E70(ctx, base);
	// addi r1,r31,400
	ctx.r1.s64 = ctx.r31.s64 + 400;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311B094"))) PPC_WEAK_FUNC(sub_8311B094);
PPC_FUNC_IMPL(__imp__sub_8311B094) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-22956(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22956);
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x8311B0D0;
	sub_833A7198(ctx, base);
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83114e70
	ctx.lr = 0x8311B0E8;
	sub_83114E70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B09C"))) PPC_WEAK_FUNC(sub_8311B09C);
PPC_FUNC_IMPL(__imp__sub_8311B09C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x833a7198
	ctx.lr = 0x8311B0D0;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8311B0D0"))) PPC_WEAK_FUNC(sub_8311B0D0);
PPC_FUNC_IMPL(__imp__sub_8311B0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83114e70
	ctx.lr = 0x8311B0E8;
	sub_83114E70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B0F8"))) PPC_WEAK_FUNC(sub_8311B0F8);
PPC_FUNC_IMPL(__imp__sub_8311B0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
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
	// bl 0x8319be68
	ctx.lr = 0x8311B110;
	sub_8319BE68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B120"))) PPC_WEAK_FUNC(sub_8311B120);
PPC_FUNC_IMPL(__imp__sub_8311B120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-400
	ctx.r31.s64 = ctx.r12.s64 + -400;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x83101510
	ctx.lr = 0x8311B138;
	sub_83101510(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B148"))) PPC_WEAK_FUNC(sub_8311B148);
PPC_FUNC_IMPL(__imp__sub_8311B148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-22632(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22632);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8311B158;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e3060
	ctx.lr = 0x8311B174;
	sub_830E3060(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// addi r11,r11,-22688
	ctx.r11.s64 = ctx.r11.s64 + -22688;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bd60
	ctx.lr = 0x8311B190;
	sub_8311BD60(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311b1a4
	if (!ctx.cr6.eq) goto loc_8311B1A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311b448
	ctx.lr = 0x8311B1A4;
	sub_8311B448(ctx, base);
loc_8311B1A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x830e3000
	ctx.lr = 0x8311B1B0;
	sub_830E3000(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311B150"))) PPC_WEAK_FUNC(sub_8311B150);
PPC_FUNC_IMPL(__imp__sub_8311B150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8311B158;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e3060
	ctx.lr = 0x8311B174;
	sub_830E3060(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// addi r11,r11,-22688
	ctx.r11.s64 = ctx.r11.s64 + -22688;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bd60
	ctx.lr = 0x8311B190;
	sub_8311BD60(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311b1a4
	if (!ctx.cr6.eq) goto loc_8311B1A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311b448
	ctx.lr = 0x8311B1A4;
	sub_8311B448(ctx, base);
loc_8311B1A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x830e3000
	ctx.lr = 0x8311B1B0;
	sub_830E3000(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311B1BC"))) PPC_WEAK_FUNC(sub_8311B1BC);
PPC_FUNC_IMPL(__imp__sub_8311B1BC) {
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
	// bl 0x830e2e70
	ctx.lr = 0x8311B1D4;
	sub_830E2E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B1E4"))) PPC_WEAK_FUNC(sub_8311B1E4);
PPC_FUNC_IMPL(__imp__sub_8311B1E4) {
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
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8311bee8
	ctx.lr = 0x8311B200;
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

__attribute__((alias("__imp__sub_8311B210"))) PPC_WEAK_FUNC(sub_8311B210);
PPC_FUNC_IMPL(__imp__sub_8311B210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-22560(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22560);
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
	// addi r11,r11,-22688
	ctx.r11.s64 = ctx.r11.s64 + -22688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8311bee8
	ctx.lr = 0x8311B24C;
	sub_8311BEE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e2e70
	ctx.lr = 0x8311B254;
	sub_830E2E70(ctx, base);
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

__attribute__((alias("__imp__sub_8311B218"))) PPC_WEAK_FUNC(sub_8311B218);
PPC_FUNC_IMPL(__imp__sub_8311B218) {
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
	// addi r11,r11,-22688
	ctx.r11.s64 = ctx.r11.s64 + -22688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8311bee8
	ctx.lr = 0x8311B24C;
	sub_8311BEE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e2e70
	ctx.lr = 0x8311B254;
	sub_830E2E70(ctx, base);
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

__attribute__((alias("__imp__sub_8311B26C"))) PPC_WEAK_FUNC(sub_8311B26C);
PPC_FUNC_IMPL(__imp__sub_8311B26C) {
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
	// bl 0x830e2e70
	ctx.lr = 0x8311B284;
	sub_830E2E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B294"))) PPC_WEAK_FUNC(sub_8311B294);
PPC_FUNC_IMPL(__imp__sub_8311B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B298"))) PPC_WEAK_FUNC(sub_8311B298);
PPC_FUNC_IMPL(__imp__sub_8311B298) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x8311bf58
	sub_8311BF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311B2A0"))) PPC_WEAK_FUNC(sub_8311B2A0);
PPC_FUNC_IMPL(__imp__sub_8311B2A0) {
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
	// bl 0x8311b218
	ctx.lr = 0x8311B2C0;
	sub_8311B218(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311b2d0
	if (ctx.cr0.eq) goto loc_8311B2D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8311B2D0;
	sub_830DD3E0(ctx, base);
loc_8311B2D0:
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

__attribute__((alias("__imp__sub_8311B2EC"))) PPC_WEAK_FUNC(sub_8311B2EC);
PPC_FUNC_IMPL(__imp__sub_8311B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B2F0"))) PPC_WEAK_FUNC(sub_8311B2F0);
PPC_FUNC_IMPL(__imp__sub_8311B2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8311B2F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,24396
	ctx.r28.s64 = ctx.r11.s64 + 24396;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
loc_8311B314:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830d6638
	ctx.lr = 0x8311B320;
	sub_830D6638(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8311b348
	if (ctx.cr0.eq) goto loc_8311B348;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r30,48
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 48, ctx.xer);
	// blt cr6,0x8311b314
	if (ctx.cr6.lt) goto loc_8311B314;
	// li r3,5
	ctx.r3.s64 = 5;
loc_8311B340:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_8311B348:
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// b 0x8311b340
	goto loc_8311B340;
}

__attribute__((alias("__imp__sub_8311B354"))) PPC_WEAK_FUNC(sub_8311B354);
PPC_FUNC_IMPL(__imp__sub_8311B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B358"))) PPC_WEAK_FUNC(sub_8311B358);
PPC_FUNC_IMPL(__imp__sub_8311B358) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-22404
	ctx.r10.s64 = ctx.r10.s64 + -22404;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B39C"))) PPC_WEAK_FUNC(sub_8311B39C);
PPC_FUNC_IMPL(__imp__sub_8311B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B3A0"))) PPC_WEAK_FUNC(sub_8311B3A0);
PPC_FUNC_IMPL(__imp__sub_8311B3A0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8311b3e4
	if (!ctx.cr6.eq) goto loc_8311B3E4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r4,r11,-22400
	ctx.r4.s64 = ctx.r11.s64 + -22400;
	// li r5,478
	ctx.r5.s64 = 478;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830dee18
	ctx.lr = 0x8311B3D4;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x8311B3E4;
	sub_833A7198(ctx, base);
loc_8311B3E4:
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// mulli r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 * 12;
	// addi r11,r10,24396
	ctx.r11.s64 = ctx.r10.s64 + 24396;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B408"))) PPC_WEAK_FUNC(sub_8311B408);
PPC_FUNC_IMPL(__imp__sub_8311B408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8311b41c
	if (!ctx.cr6.eq) goto loc_8311B41C;
loc_8311B414:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8311B41C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b414
	if (ctx.cr6.eq) goto loc_8311B414;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
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

__attribute__((alias("__imp__sub_8311B43C"))) PPC_WEAK_FUNC(sub_8311B43C);
PPC_FUNC_IMPL(__imp__sub_8311B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B440"))) PPC_WEAK_FUNC(sub_8311B440);
PPC_FUNC_IMPL(__imp__sub_8311B440) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B448"))) PPC_WEAK_FUNC(sub_8311B448);
PPC_FUNC_IMPL(__imp__sub_8311B448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x8311B450;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b498
	if (ctx.cr6.eq) goto loc_8311B498;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8311b498
	if (ctx.cr0.eq) goto loc_8311B498;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8311b484
	goto loc_8311B484;
loc_8311B480:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8311B484:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b480
	if (!ctx.cr0.eq) goto loc_8311B480;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r25,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b49c
	goto loc_8311B49C;
loc_8311B498:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_8311B49C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311b4d8
	if (ctx.cr6.eq) goto loc_8311B4D8;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311b4d8
	if (ctx.cr0.eq) goto loc_8311B4D8;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// b 0x8311b4c4
	goto loc_8311B4C4;
loc_8311B4C0:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8311B4C4:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b4c0
	if (!ctx.cr0.eq) goto loc_8311B4C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b4dc
	goto loc_8311B4DC;
loc_8311B4D8:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_8311B4DC:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311b518
	if (ctx.cr6.eq) goto loc_8311B518;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311b518
	if (ctx.cr0.eq) goto loc_8311B518;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// b 0x8311b504
	goto loc_8311B504;
loc_8311B500:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8311B504:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b500
	if (!ctx.cr0.eq) goto loc_8311B500;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r27,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b51c
	goto loc_8311B51C;
loc_8311B518:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_8311B51C:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311b558
	if (ctx.cr6.eq) goto loc_8311B558;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311b558
	if (ctx.cr0.eq) goto loc_8311B558;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// b 0x8311b544
	goto loc_8311B544;
loc_8311B540:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8311B544:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b540
	if (!ctx.cr0.eq) goto loc_8311B540;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b55c
	goto loc_8311B55C;
loc_8311B558:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8311B55C:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311b598
	if (ctx.cr6.eq) goto loc_8311B598;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311b598
	if (ctx.cr0.eq) goto loc_8311B598;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// b 0x8311b584
	goto loc_8311B584;
loc_8311B580:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8311B584:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b580
	if (!ctx.cr0.eq) goto loc_8311B580;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b59c
	goto loc_8311B59C;
loc_8311B598:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8311B59C:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311b5d8
	if (ctx.cr6.eq) goto loc_8311B5D8;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311b5d8
	if (ctx.cr0.eq) goto loc_8311B5D8;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// b 0x8311b5c4
	goto loc_8311B5C4;
loc_8311B5C0:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8311B5C4:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b5c0
	if (!ctx.cr0.eq) goto loc_8311B5C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b5dc
	goto loc_8311B5DC;
loc_8311B5D8:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8311B5DC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// li r29,58
	ctx.r29.s64 = 58;
	// sth r24,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r24.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lwz r31,40(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// beq cr6,0x8311b6ac
	if (ctx.cr6.eq) goto loc_8311B6AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311b3a0
	ctx.lr = 0x8311B648;
	sub_8311B3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x830d65b8
	ctx.lr = 0x8311B654;
	sub_830D65B8(ctx, base);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311b690
	if (ctx.cr6.eq) goto loc_8311B690;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311b690
	if (ctx.cr0.eq) goto loc_8311B690;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// b 0x8311b67c
	goto loc_8311B67C;
loc_8311B678:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8311B67C:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b678
	if (!ctx.cr0.eq) goto loc_8311B678;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b694
	goto loc_8311B694;
loc_8311B690:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8311B694:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,47
	ctx.r11.s64 = 47;
	// sthux r29,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r31.u32 = ea;
	// sthu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r31.u32 = ea;
	// sthu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_8311B6AC:
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8311b77c
	if (ctx.cr6.eq) goto loc_8311B77C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d6950
	ctx.lr = 0x8311B6C0;
	sub_830D6950(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b6fc
	if (ctx.cr6.eq) goto loc_8311B6FC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8311b6fc
	if (ctx.cr0.eq) goto loc_8311B6FC;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8311b6e8
	goto loc_8311B6E8;
loc_8311B6E4:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8311B6E8:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b6e4
	if (!ctx.cr0.eq) goto loc_8311B6E4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b700
	goto loc_8311B700;
loc_8311B6FC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8311B700:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311b770
	if (ctx.cr6.eq) goto loc_8311B770;
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d6950
	ctx.lr = 0x8311B728;
	sub_830D6950(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b764
	if (ctx.cr6.eq) goto loc_8311B764;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8311b764
	if (ctx.cr0.eq) goto loc_8311B764;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8311b750
	goto loc_8311B750;
loc_8311B74C:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8311B750:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b74c
	if (!ctx.cr0.eq) goto loc_8311B74C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b768
	goto loc_8311B768;
loc_8311B764:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8311B768:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8311B770:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_8311B77C:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8311b850
	if (ctx.cr6.eq) goto loc_8311B850;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d6950
	ctx.lr = 0x8311B790;
	sub_830D6950(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b7cc
	if (ctx.cr6.eq) goto loc_8311B7CC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8311b7cc
	if (ctx.cr0.eq) goto loc_8311B7CC;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8311b7b8
	goto loc_8311B7B8;
loc_8311B7B4:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8311B7B8:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b7b4
	if (!ctx.cr0.eq) goto loc_8311B7B4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b7d0
	goto loc_8311B7D0;
loc_8311B7CC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8311B7D0:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8311b850
	if (ctx.cr6.eq) goto loc_8311B850;
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bl 0x830d6588
	ctx.lr = 0x8311B804;
	sub_830D6588(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d6950
	ctx.lr = 0x8311B810;
	sub_830D6950(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8311b844
	if (ctx.cr0.eq) goto loc_8311B844;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// b 0x8311b82c
	goto loc_8311B82C;
loc_8311B828:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8311B82C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8311b828
	if (!ctx.cr0.eq) goto loc_8311B828;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b848
	goto loc_8311B848;
loc_8311B844:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8311B848:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8311B850:
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8311b8ac
	if (ctx.cr6.eq) goto loc_8311B8AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d6950
	ctx.lr = 0x8311B864;
	sub_830D6950(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b8a0
	if (ctx.cr6.eq) goto loc_8311B8A0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8311b8a0
	if (ctx.cr0.eq) goto loc_8311B8A0;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8311b88c
	goto loc_8311B88C;
loc_8311B888:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8311B88C:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b888
	if (!ctx.cr0.eq) goto loc_8311B888;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b8a4
	goto loc_8311B8A4;
loc_8311B8A0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8311B8A4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8311B8AC:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b918
	if (ctx.cr6.eq) goto loc_8311B918;
	// li r11,63
	ctx.r11.s64 = 63;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x830d6950
	ctx.lr = 0x8311B8D0;
	sub_830D6950(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b90c
	if (ctx.cr6.eq) goto loc_8311B90C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8311b90c
	if (ctx.cr0.eq) goto loc_8311B90C;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8311b8f8
	goto loc_8311B8F8;
loc_8311B8F4:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8311B8F8:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b8f4
	if (!ctx.cr0.eq) goto loc_8311B8F4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b910
	goto loc_8311B910;
loc_8311B90C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8311B910:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8311B918:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b984
	if (ctx.cr6.eq) goto loc_8311B984;
	// li r11,35
	ctx.r11.s64 = 35;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d6950
	ctx.lr = 0x8311B93C;
	sub_830D6950(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311b978
	if (ctx.cr6.eq) goto loc_8311B978;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8311b978
	if (ctx.cr0.eq) goto loc_8311B978;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8311b964
	goto loc_8311B964;
loc_8311B960:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8311B964:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8311b960
	if (!ctx.cr0.eq) goto loc_8311B960;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x8311b97c
	goto loc_8311B97C;
loc_8311B978:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8311B97C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8311B984:
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311B990"))) PPC_WEAK_FUNC(sub_8311B990);
PPC_FUNC_IMPL(__imp__sub_8311B990) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311B9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BA04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8311BA90"))) PPC_WEAK_FUNC(sub_8311BA90);
PPC_FUNC_IMPL(__imp__sub_8311BA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8311BA98;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8311bab8
	if (!ctx.cr6.eq) goto loc_8311BAB8;
loc_8311BAB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8311bad4
	goto loc_8311BAD4;
loc_8311BAB8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311bab0
	if (ctx.cr6.eq) goto loc_8311BAB0;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8311BAD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311bb18
	if (ctx.cr0.eq) goto loc_8311BB18;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8311bb10
	if (ctx.cr0.eq) goto loc_8311BB10;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,107
	ctx.r6.s64 = 107;
	// addi r4,r11,-22400
	ctx.r4.s64 = ctx.r11.s64 + -22400;
	// li r5,818
	ctx.r5.s64 = 818;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830dee18
	ctx.lr = 0x8311BB00;
	sub_830DEE18(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x833a7198
	ctx.lr = 0x8311BB10;
	sub_833A7198(ctx, base);
loc_8311BB10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8311bd4c
	goto loc_8311BD4C;
loc_8311BB18:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8311bd48
	if (!ctx.cr6.eq) goto loc_8311BD48;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8311bbd8
	if (!ctx.cr6.eq) goto loc_8311BBD8;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8311bbd8
	if (!ctx.cr6.eq) goto loc_8311BBD8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8311bbd8
	if (ctx.cr6.eq) goto loc_8311BBD8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x830d58e8
	ctx.lr = 0x8311BBA0;
	sub_830D58E8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x830d58e8
	ctx.lr = 0x8311BBB0;
	sub_830D58E8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x830d58e8
	ctx.lr = 0x8311BBC0;
	sub_830D58E8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x830d58e8
	ctx.lr = 0x8311BBD0;
	sub_830D58E8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x8311bd48
	goto loc_8311BD48;
loc_8311BBD8:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8311bd48
	if (!ctx.cr6.eq) goto loc_8311BD48;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8311bc04
	if (ctx.cr6.eq) goto loc_8311BC04;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311bd48
	if (!ctx.cr6.eq) goto loc_8311BD48;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311bd48
	if (ctx.cr6.eq) goto loc_8311BD48;
loc_8311BC04:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8311bca0
	if (ctx.cr6.eq) goto loc_8311BCA0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BC64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x830d58e8
	ctx.lr = 0x8311BC74;
	sub_830D58E8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x830d58e8
	ctx.lr = 0x8311BC84;
	sub_830D58E8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x830d58e8
	ctx.lr = 0x8311BC94;
	sub_830D58E8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8311BCA0:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe r11,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8311bcc0
	if (ctx.cr0.eq) goto loc_8311BCC0;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x8311bd48
	if (ctx.cr6.eq) goto loc_8311BD48;
loc_8311BCC0:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311bcf8
	if (ctx.cr6.eq) goto loc_8311BCF8;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830fcd38
	ctx.lr = 0x8311BCD4;
	sub_830FCD38(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8311BCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_8311BCF8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8311bd48
	if (!ctx.cr6.eq) goto loc_8311BD48;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311bd48
	if (!ctx.cr6.eq) goto loc_8311BD48;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311bd48
	if (ctx.cr6.eq) goto loc_8311BD48;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830d58e8
	ctx.lr = 0x8311BD20;
	sub_830D58E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8311bd48
	if (!ctx.cr6.eq) goto loc_8311BD48;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8311bd48
	if (ctx.cr6.eq) goto loc_8311BD48;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830d58e8
	ctx.lr = 0x8311BD44;
	sub_830D58E8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8311BD48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8311BD4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311BD54"))) PPC_WEAK_FUNC(sub_8311BD54);
PPC_FUNC_IMPL(__imp__sub_8311BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311BD58"))) PPC_WEAK_FUNC(sub_8311BD58);
PPC_FUNC_IMPL(__imp__sub_8311BD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,-22260(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22260);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x8311BD70;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-18032
	ctx.r10.s64 = ctx.r10.s64 + -18032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r9,r9,-22404
	ctx.r9.s64 = ctx.r9.s64 + -22404;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lbz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x830d58e8
	ctx.lr = 0x8311BDF4;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE08;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE1C;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE30;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE44;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE58;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE6C;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311BD60"))) PPC_WEAK_FUNC(sub_8311BD60);
PPC_FUNC_IMPL(__imp__sub_8311BD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x8311BD70;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-18032
	ctx.r10.s64 = ctx.r10.s64 + -18032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r9,r9,-22404
	ctx.r9.s64 = ctx.r9.s64 + -22404;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lbz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x830d58e8
	ctx.lr = 0x8311BDF4;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE08;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE1C;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE30;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE44;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE58;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x830d58e8
	ctx.lr = 0x8311BE6C;
	sub_830D58E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

