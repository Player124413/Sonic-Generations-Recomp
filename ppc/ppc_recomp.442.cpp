#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832F3D50"))) PPC_WEAK_FUNC(sub_832F3D50);
PPC_FUNC_IMPL(__imp__sub_832F3D50) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,154(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 154);
	// sth r11,152(r3)
	PPC_STORE_U16(ctx.r3.u32 + 152, ctx.r11.u16);
	// b 0x832f3110
	sub_832F3110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F3D5C"))) PPC_WEAK_FUNC(sub_832F3D5C);
PPC_FUNC_IMPL(__imp__sub_832F3D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F3D60"))) PPC_WEAK_FUNC(sub_832F3D60);
PPC_FUNC_IMPL(__imp__sub_832F3D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F3D68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-128
	ctx.r10.s64 = -128;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,216(r3)
	PPC_STORE_U16(ctx.r3.u32 + 216, ctx.r11.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r10,218(r3)
	PPC_STORE_U16(ctx.r3.u32 + 218, ctx.r10.u16);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r10,220(r3)
	PPC_STORE_U16(ctx.r3.u32 + 220, ctx.r10.u16);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x832f3dc4
	if (!ctx.cr6.eq) goto loc_832F3DC4;
	// bl 0x832f3a78
	ctx.lr = 0x832F3DC0;
	sub_832F3A78(ctx, base);
	// b 0x832f3e58
	goto loc_832F3E58;
loc_832F3DC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83304b30
	ctx.lr = 0x832F3DCC;
	sub_83304B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f3de8
	if (ctx.cr0.eq) goto loc_832F3DE8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83304a50
	ctx.lr = 0x832F3DE4;
	sub_83304A50(ctx, base);
	// b 0x832f3e58
	goto loc_832F3E58;
loc_832F3DE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83304808
	ctx.lr = 0x832F3DF0;
	sub_83304808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f3e0c
	if (ctx.cr0.eq) goto loc_832F3E0C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833042d8
	ctx.lr = 0x832F3E08;
	sub_833042D8(ctx, base);
	// b 0x832f3e58
	goto loc_832F3E58;
loc_832F3E0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83303c80
	ctx.lr = 0x832F3E14;
	sub_83303C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f3e30
	if (ctx.cr0.eq) goto loc_832F3E30;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83303df0
	ctx.lr = 0x832F3E2C;
	sub_83303DF0(ctx, base);
	// b 0x832f3e58
	goto loc_832F3E58;
loc_832F3E30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833032c0
	ctx.lr = 0x832F3E38;
	sub_833032C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f3e54
	if (ctx.cr0.eq) goto loc_832F3E54;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83303430
	ctx.lr = 0x832F3E50;
	sub_83303430(ctx, base);
	// b 0x832f3e58
	goto loc_832F3E58;
loc_832F3E54:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832F3E58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F3E60"))) PPC_WEAK_FUNC(sub_832F3E60);
PPC_FUNC_IMPL(__imp__sub_832F3E60) {
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
	// lha r11,152(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 152));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832f3e88
	if (!ctx.cr0.eq) goto loc_832F3E88;
	// bl 0x832f38b0
	ctx.lr = 0x832F3E84;
	sub_832F38B0(ctx, base);
	// b 0x832f3ee8
	goto loc_832F3EE8;
loc_832F3E88:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x832f3e9c
	if (!ctx.cr6.eq) goto loc_832F3E9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83304c00
	ctx.lr = 0x832F3E98;
	sub_83304C00(ctx, base);
	// b 0x832f3ee8
	goto loc_832F3EE8;
loc_832F3E9C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832f3eb0
	if (!ctx.cr6.eq) goto loc_832F3EB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83303ee8
	ctx.lr = 0x832F3EAC;
	sub_83303EE8(ctx, base);
	// b 0x832f3ee8
	goto loc_832F3EE8;
loc_832F3EB0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832f3ec4
	if (!ctx.cr6.eq) goto loc_832F3EC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83304038
	ctx.lr = 0x832F3EC0;
	sub_83304038(ctx, base);
	// b 0x832f3ee8
	goto loc_832F3EE8;
loc_832F3EC4:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x832f3ed8
	if (!ctx.cr6.eq) goto loc_832F3ED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83303960
	ctx.lr = 0x832F3ED4;
	sub_83303960(ctx, base);
	// b 0x832f3ee8
	goto loc_832F3EE8;
loc_832F3ED8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f3ee8
	if (!ctx.cr6.eq) goto loc_832F3EE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83304888
	ctx.lr = 0x832F3EE8;
	sub_83304888(ctx, base);
loc_832F3EE8:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f3f34
	if (ctx.cr6.eq) goto loc_832F3F34;
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// subf. r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x832f3f10
	if (!ctx.cr0.lt) goto loc_832F3F10;
	// addis r4,r4,-32768
	ctx.r4.s64 = ctx.r4.s64 + -2147483648;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_832F3F10:
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bctrl 
	ctx.lr = 0x832F3F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_832F3F34:
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

__attribute__((alias("__imp__sub_832F3F48"))) PPC_WEAK_FUNC(sub_832F3F48);
PPC_FUNC_IMPL(__imp__sub_832F3F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r27,-1052(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1052);
	// lwz r17,-30336(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30336);
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r11,r11,-21312
	ctx.r11.s64 = ctx.r11.s64 + -21312;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,-30948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30948, ctx.r11.u32);
	// bne cr6,0x832f3f94
	if (!ctx.cr6.eq) goto loc_832F3F94;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21128
	ctx.r3.s64 = ctx.r11.s64 + -21128;
loc_832F3F88:
	// bl 0x832f8608
	ctx.lr = 0x832F3F8C;
	sub_832F8608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f4000
	// ERROR 832F4000
	return;
loc_832F3F94:
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// bge cr6,0x832f3fa8
	if (!ctx.cr6.lt) goto loc_832F3FA8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21176
	ctx.r3.s64 = ctx.r11.s64 + -21176;
	// b 0x832f3f88
	goto loc_832F3F88;
loc_832F3FA8:
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// li r5,28
	ctx.r5.s64 = 28;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F3FC4;
	sub_833A2B30(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8368fda4
	ctx.lr = 0x832F3FD4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x832f3ffc
	sub_832F3FFC(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F3F50"))) PPC_WEAK_FUNC(sub_832F3F50);
PPC_FUNC_IMPL(__imp__sub_832F3F50) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r11,r11,-21312
	ctx.r11.s64 = ctx.r11.s64 + -21312;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,-30948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30948, ctx.r11.u32);
	// bne cr6,0x832f3f94
	if (!ctx.cr6.eq) goto loc_832F3F94;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21128
	ctx.r3.s64 = ctx.r11.s64 + -21128;
loc_832F3F88:
	// bl 0x832f8608
	ctx.lr = 0x832F3F8C;
	sub_832F8608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f4000
	goto loc_832F4000;
loc_832F3F94:
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// bge cr6,0x832f3fa8
	if (!ctx.cr6.lt) goto loc_832F3FA8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21176
	ctx.r3.s64 = ctx.r11.s64 + -21176;
	// b 0x832f3f88
	goto loc_832F3F88;
loc_832F3FA8:
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// li r5,28
	ctx.r5.s64 = 28;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F3FC4;
	sub_833A2B30(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8368fda4
	ctx.lr = 0x832F3FD4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x832f3ffc
	goto loc_832F3FFC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21228
	ctx.r3.s64 = ctx.r11.s64 + -21228;
	// bl 0x832f8608
	ctx.lr = 0x832F3FF0;
	sub_832F8608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x832f4000
	goto loc_832F4000;
loc_832F3FFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832F4000:
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

__attribute__((alias("__imp__sub_832F3FE4"))) PPC_WEAK_FUNC(sub_832F3FE4);
PPC_FUNC_IMPL(__imp__sub_832F3FE4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21228
	ctx.r3.s64 = ctx.r11.s64 + -21228;
	// bl 0x832f8608
	ctx.lr = 0x832F3FF0;
	sub_832F8608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x832f4000
	// ERROR 832F4000
	return;
}

__attribute__((alias("__imp__sub_832F3FFC"))) PPC_WEAK_FUNC(sub_832F3FFC);
PPC_FUNC_IMPL(__imp__sub_832F3FFC) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_832F4018"))) PPC_WEAK_FUNC(sub_832F4018);
PPC_FUNC_IMPL(__imp__sub_832F4018) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F4024"))) PPC_WEAK_FUNC(sub_832F4024);
PPC_FUNC_IMPL(__imp__sub_832F4024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4028"))) PPC_WEAK_FUNC(sub_832F4028);
PPC_FUNC_IMPL(__imp__sub_832F4028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r27,-1052(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1052);
	// lwz r17,-30312(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30312);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f4060
	if (!ctx.cr6.eq) goto loc_832F4060;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21032
	ctx.r3.s64 = ctx.r11.s64 + -21032;
	// bl 0x832f8608
	ctx.lr = 0x832F405C;
	sub_832F8608(ctx, base);
	// b 0x832f4098
	// ERROR 832F4098
	return;
loc_832F4060:
	// nop 
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
	// b 0x832f408c
	// ERROR 832F408C
	return;
}

__attribute__((alias("__imp__sub_832F4030"))) PPC_WEAK_FUNC(sub_832F4030);
PPC_FUNC_IMPL(__imp__sub_832F4030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f4060
	if (!ctx.cr6.eq) goto loc_832F4060;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21032
	ctx.r3.s64 = ctx.r11.s64 + -21032;
	// bl 0x832f8608
	ctx.lr = 0x832F405C;
	sub_832F8608(ctx, base);
	// b 0x832f4098
	goto loc_832F4098;
loc_832F4060:
	// nop 
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
	// b 0x832f408c
	goto loc_832F408C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21080
	ctx.r3.s64 = ctx.r11.s64 + -21080;
	// bl 0x832f8608
	ctx.lr = 0x832F4088;
	sub_832F8608(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
loc_832F408C:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F4098;
	sub_833A2B30(ctx, base);
loc_832F4098:
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

__attribute__((alias("__imp__sub_832F407C"))) PPC_WEAK_FUNC(sub_832F407C);
PPC_FUNC_IMPL(__imp__sub_832F407C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-21080
	ctx.r3.s64 = ctx.r11.s64 + -21080;
	// bl 0x832f8608
	ctx.lr = 0x832F4088;
	sub_832F8608(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F4098;
	sub_833A2B30(ctx, base);
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

__attribute__((alias("__imp__sub_832F40AC"))) PPC_WEAK_FUNC(sub_832F40AC);
PPC_FUNC_IMPL(__imp__sub_832F40AC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F40B8"))) PPC_WEAK_FUNC(sub_832F40B8);
PPC_FUNC_IMPL(__imp__sub_832F40B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r27,-1052(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1052);
	// lwz r17,-30288(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30288);
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f40f8
	if (!ctx.cr6.eq) goto loc_832F40F8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20944
	ctx.r3.s64 = ctx.r11.s64 + -20944;
	// bl 0x832f8608
	ctx.lr = 0x832F40F0;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f412c
	// ERROR 832F412C
	return;
loc_832F40F8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8368fd34
	ctx.lr = 0x832F4108;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x832f4128
	// ERROR 832F4128
	return;
}

__attribute__((alias("__imp__sub_832F40C0"))) PPC_WEAK_FUNC(sub_832F40C0);
PPC_FUNC_IMPL(__imp__sub_832F40C0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f40f8
	if (!ctx.cr6.eq) goto loc_832F40F8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20944
	ctx.r3.s64 = ctx.r11.s64 + -20944;
	// bl 0x832f8608
	ctx.lr = 0x832F40F0;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f412c
	goto loc_832F412C;
loc_832F40F8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8368fd34
	ctx.lr = 0x832F4108;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x832f4128
	goto loc_832F4128;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20988
	ctx.r3.s64 = ctx.r11.s64 + -20988;
	// bl 0x832f8608
	ctx.lr = 0x832F4124;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
loc_832F4128:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832F412C:
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

__attribute__((alias("__imp__sub_832F4118"))) PPC_WEAK_FUNC(sub_832F4118);
PPC_FUNC_IMPL(__imp__sub_832F4118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20988
	ctx.r3.s64 = ctx.r11.s64 + -20988;
	// bl 0x832f8608
	ctx.lr = 0x832F4124;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_832F4144"))) PPC_WEAK_FUNC(sub_832F4144);
PPC_FUNC_IMPL(__imp__sub_832F4144) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F4150"))) PPC_WEAK_FUNC(sub_832F4150);
PPC_FUNC_IMPL(__imp__sub_832F4150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r27,-1052(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1052);
	// lwz r17,-30264(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30264);
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f4190
	if (!ctx.cr6.eq) goto loc_832F4190;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20860
	ctx.r3.s64 = ctx.r11.s64 + -20860;
	// bl 0x832f8608
	ctx.lr = 0x832F4188;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f41c4
	// ERROR 832F41C4
	return;
loc_832F4190:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8368fd24
	ctx.lr = 0x832F41A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x832f41c0
	// ERROR 832F41C0
	return;
}

__attribute__((alias("__imp__sub_832F4158"))) PPC_WEAK_FUNC(sub_832F4158);
PPC_FUNC_IMPL(__imp__sub_832F4158) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f4190
	if (!ctx.cr6.eq) goto loc_832F4190;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20860
	ctx.r3.s64 = ctx.r11.s64 + -20860;
	// bl 0x832f8608
	ctx.lr = 0x832F4188;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f41c4
	goto loc_832F41C4;
loc_832F4190:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8368fd24
	ctx.lr = 0x832F41A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x832f41c0
	goto loc_832F41C0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// bl 0x832f8608
	ctx.lr = 0x832F41BC;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
loc_832F41C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832F41C4:
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

__attribute__((alias("__imp__sub_832F41B0"))) PPC_WEAK_FUNC(sub_832F41B0);
PPC_FUNC_IMPL(__imp__sub_832F41B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// bl 0x832f8608
	ctx.lr = 0x832F41BC;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_832F41DC"))) PPC_WEAK_FUNC(sub_832F41DC);
PPC_FUNC_IMPL(__imp__sub_832F41DC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F41E8"))) PPC_WEAK_FUNC(sub_832F41E8);
PPC_FUNC_IMPL(__imp__sub_832F41E8) {
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
	// lwz r11,-30944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30944);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-30944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30944, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f4220
	if (!ctx.cr6.eq) goto loc_832F4220;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,8320
	ctx.r5.s64 = 8320;
	// addi r3,r11,-17088
	ctx.r3.s64 = ctx.r11.s64 + -17088;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F4220;
	sub_833A2B30(ctx, base);
loc_832F4220:
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

__attribute__((alias("__imp__sub_832F4234"))) PPC_WEAK_FUNC(sub_832F4234);
PPC_FUNC_IMPL(__imp__sub_832F4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4238"))) PPC_WEAK_FUNC(sub_832F4238);
PPC_FUNC_IMPL(__imp__sub_832F4238) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-30944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30944);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-30944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30944, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,8320
	ctx.r5.s64 = 8320;
	// addi r3,r11,-17088
	ctx.r3.s64 = ctx.r11.s64 + -17088;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F4260"))) PPC_WEAK_FUNC(sub_832F4260);
PPC_FUNC_IMPL(__imp__sub_832F4260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F4264"))) PPC_WEAK_FUNC(sub_832F4264);
PPC_FUNC_IMPL(__imp__sub_832F4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4268"))) PPC_WEAK_FUNC(sub_832F4268);
PPC_FUNC_IMPL(__imp__sub_832F4268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,74(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f427c
	if (ctx.cr0.eq) goto loc_832F427C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_832F427C:
	// lbz r11,73(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f4290
	if (ctx.cr0.eq) goto loc_832F4290;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832F4290:
	// lbz r11,77(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
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

__attribute__((alias("__imp__sub_832F42A0"))) PPC_WEAK_FUNC(sub_832F42A0);
PPC_FUNC_IMPL(__imp__sub_832F42A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,73(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f42bc
	if (!ctx.cr0.eq) goto loc_832F42BC;
	// lbz r11,77(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_832F42BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F42C4"))) PPC_WEAK_FUNC(sub_832F42C4);
PPC_FUNC_IMPL(__imp__sub_832F42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F42C8"))) PPC_WEAK_FUNC(sub_832F42C8);
PPC_FUNC_IMPL(__imp__sub_832F42C8) {
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
	// bl 0x832fb0f0
	ctx.lr = 0x832F42D8;
	sub_832FB0F0(ctx, base);
	// bl 0x832fb7a8
	ctx.lr = 0x832F42DC;
	sub_832FB7A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F42EC"))) PPC_WEAK_FUNC(sub_832F42EC);
PPC_FUNC_IMPL(__imp__sub_832F42EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F42F0"))) PPC_WEAK_FUNC(sub_832F42F0);
PPC_FUNC_IMPL(__imp__sub_832F42F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,77(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F42FC"))) PPC_WEAK_FUNC(sub_832F42FC);
PPC_FUNC_IMPL(__imp__sub_832F42FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4300"))) PPC_WEAK_FUNC(sub_832F4300);
PPC_FUNC_IMPL(__imp__sub_832F4300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F4308;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82c10e98
	ctx.lr = 0x832F4324;
	sub_82C10E98(ctx, base);
	// srawi r11,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 11;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// srawi r10,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 11;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r29,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r29.u8);
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// extsw r8,r27
	ctx.r8.s64 = ctx.r27.s32;
	// stb r28,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r28.u8);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r7,512
	ctx.r7.s64 = 512;
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r9,65535
	ctx.r10.u64 = ctx.r9.u64 | 65535;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// beq cr6,0x832f43dc
	if (ctx.cr6.eq) goto loc_832F43DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F43B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F43CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_832F43DC:
	// stb r29,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r29.u8);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F43E8;
	sub_82C10E98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F43F0"))) PPC_WEAK_FUNC(sub_832F43F0);
PPC_FUNC_IMPL(__imp__sub_832F43F0) {
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
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x832f4480
	if (!ctx.cr6.lt) goto loc_832F4480;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r8,-29340(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29340);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x832f445c
	if (!ctx.cr6.gt) goto loc_832F445C;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// addi r9,r9,-17088
	ctx.r9.s64 = ctx.r9.s64 + -17088;
	// lwz r11,-30940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30940);
	// mulli r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 * 104;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_832F443C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x832f445c
	if (ctx.cr0.eq) goto loc_832F445C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832f443c
	if (ctx.cr6.lt) goto loc_832F443C;
loc_832F445C:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x832f44d0
	if (ctx.cr6.eq) goto loc_832F44D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4300
	ctx.lr = 0x832F4478;
	sub_832F4300(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832f44f0
	goto loc_832F44F0;
loc_832F4480:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r8,-29332(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29332);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x832f44c8
	if (!ctx.cr6.gt) goto loc_832F44C8;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// addi r9,r9,-17088
	ctx.r9.s64 = ctx.r9.s64 + -17088;
	// lwz r11,-29336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29336);
	// mulli r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 * 104;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_832F44A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x832f44c8
	if (ctx.cr0.eq) goto loc_832F44C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832f44a8
	if (ctx.cr6.lt) goto loc_832F44A8;
loc_832F44C8:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x832f44d8
	if (!ctx.cr6.eq) goto loc_832F44D8;
loc_832F44D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f44f8
	goto loc_832F44F8;
loc_832F44D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4300
	ctx.lr = 0x832F44EC;
	sub_832F4300(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F44F0:
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832F44F8:
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

__attribute__((alias("__imp__sub_832F450C"))) PPC_WEAK_FUNC(sub_832F450C);
PPC_FUNC_IMPL(__imp__sub_832F450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4510"))) PPC_WEAK_FUNC(sub_832F4510);
PPC_FUNC_IMPL(__imp__sub_832F4510) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F4528;
	sub_832F8758(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// bl 0x832f8798
	ctx.lr = 0x832F4534;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F454C"))) PPC_WEAK_FUNC(sub_832F454C);
PPC_FUNC_IMPL(__imp__sub_832F454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4550"))) PPC_WEAK_FUNC(sub_832F4550);
PPC_FUNC_IMPL(__imp__sub_832F4550) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F4570;
	sub_832F8758(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x832f4584
	if (!ctx.cr6.gt) goto loc_832F4584;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_832F4584:
	// lwz r31,92(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x832f8798
	ctx.lr = 0x832F458C;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F45A8"))) PPC_WEAK_FUNC(sub_832F45A8);
PPC_FUNC_IMPL(__imp__sub_832F45A8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F45C0;
	sub_832F8758(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f45d4
	if (ctx.cr6.eq) goto loc_832F45D4;
	// lwz r31,92(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x832f45d8
	goto loc_832F45D8;
loc_832F45D4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832F45D8:
	// bl 0x832f8798
	ctx.lr = 0x832F45DC;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F45F4"))) PPC_WEAK_FUNC(sub_832F45F4);
PPC_FUNC_IMPL(__imp__sub_832F45F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F45F8"))) PPC_WEAK_FUNC(sub_832F45F8);
PPC_FUNC_IMPL(__imp__sub_832F45F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F4600;
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
	// bl 0x832f8758
	ctx.lr = 0x832F4614;
	sub_832F8758(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// bl 0x832f8798
	ctx.lr = 0x832F4620;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F4628"))) PPC_WEAK_FUNC(sub_832F4628);
PPC_FUNC_IMPL(__imp__sub_832F4628) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F4648;
	sub_832F8758(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x832f4658
	if (ctx.cr6.lt) goto loc_832F4658;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x832f4660
	goto loc_832F4660;
loc_832F4658:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_832F4660:
	// bl 0x832f8798
	ctx.lr = 0x832F4664;
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

__attribute__((alias("__imp__sub_832F467C"))) PPC_WEAK_FUNC(sub_832F467C);
PPC_FUNC_IMPL(__imp__sub_832F467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4680"))) PPC_WEAK_FUNC(sub_832F4680);
PPC_FUNC_IMPL(__imp__sub_832F4680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832F4688;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x832fb820
	ctx.lr = 0x832F469C;
	sub_832FB820(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c10e98
	ctx.lr = 0x832F46A4;
	sub_82C10E98(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
	// li r26,3
	ctx.r26.s64 = 3;
	// li r23,4
	ctx.r23.s64 = 4;
	// lis r24,-31823
	ctx.r24.s64 = -2085552128;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4828
	if (!ctx.cr6.eq) goto loc_832F4828;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x832f47ac
	if (!ctx.cr6.eq) goto loc_832F47AC;
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F46D8;
	sub_82C10E98(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// rlwinm r29,r11,11,0,20
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832f0da8
	ctx.lr = 0x832F46F4;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F4710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F472C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x832f4778
	if (!ctx.cr6.eq) goto loc_832F4778;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f4778
	if (ctx.cr6.eq) goto loc_832F4778;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F4778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F4778:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x832f47a0
	if (!ctx.cr6.lt) goto loc_832F47A0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832f47a4
	if (ctx.cr6.lt) goto loc_832F47A4;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x832f47a4
	if (!ctx.cr6.lt) goto loc_832F47A4;
loc_832F47A0:
	// stb r26,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r26.u8);
loc_832F47A4:
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// b 0x832f482c
	goto loc_832F482C;
loc_832F47AC:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x832f4828
	if (!ctx.cr6.eq) goto loc_832F4828;
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F47BC;
	sub_82C10E98(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F47D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832fbb80
	ctx.lr = 0x832F47E8;
	sub_832FBB80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f4808
	if (ctx.cr0.eq) goto loc_832F4808;
	// lwz r11,-30928(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x832f4810
	if (ctx.cr6.lt) goto loc_832F4810;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f4810
	if (ctx.cr6.lt) goto loc_832F4810;
loc_832F4808:
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// b 0x832f482c
	goto loc_832F482C;
loc_832F4810:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x832f482c
	if (!ctx.cr6.lt) goto loc_832F482C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x832f482c
	goto loc_832F482C;
loc_832F4828:
	// bl 0x82c10e98
	ctx.lr = 0x832F482C;
	sub_82C10E98(ctx, base);
loc_832F482C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x832f4a44
	if (ctx.cr6.eq) goto loc_832F4A44;
	// bl 0x82c10e98
	ctx.lr = 0x832F483C;
	sub_82C10E98(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f4a40
	if (!ctx.cr0.eq) goto loc_832F4A40;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F4860;
	sub_82C10E98(ctx, base);
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f4a38
	if (ctx.cr6.eq) goto loc_832F4A38;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f4a38
	if (ctx.cr6.eq) goto loc_832F4A38;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f4894
	if (!ctx.cr6.eq) goto loc_832F4894;
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stb r26,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r26.u8);
	// b 0x832f4a44
	goto loc_832F4A44;
loc_832F4894:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832f4a20
	if (ctx.cr6.eq) goto loc_832F4A20;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f4a20
	if (ctx.cr6.eq) goto loc_832F4A20;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F48BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x832f4a38
	if (!ctx.cr6.lt) goto loc_832F4A38;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F48F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// srawi r8,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 11;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addze r30,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r30.s64 = temp.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f4914
	if (ctx.cr6.lt) goto loc_832F4914;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832F4914:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f4928
	if (ctx.cr6.lt) goto loc_832F4928;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832F4928:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f4938
	if (ctx.cr6.lt) goto loc_832F4938;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832F4938:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832fb5c0
	ctx.lr = 0x832F494C;
	sub_832FB5C0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x832f4974
	if (ctx.cr6.eq) goto loc_832F4974;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// srawi r10,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f4974
	if (ctx.cr6.lt) goto loc_832F4974;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832F4974:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832fb680
	ctx.lr = 0x832F4984;
	sub_832FB680(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bgt 0x832f4a44
	if (ctx.cr0.gt) goto loc_832F4A44;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F49BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832fb820
	ctx.lr = 0x832F49D0;
	sub_832FB820(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x832f4a44
	if (!ctx.cr6.eq) goto loc_832F4A44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832fbb80
	ctx.lr = 0x832F49E0;
	sub_832FBB80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f4a00
	if (ctx.cr0.eq) goto loc_832F4A00;
	// lwz r11,-30928(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x832f4a08
	if (ctx.cr6.lt) goto loc_832F4A08;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f4a08
	if (ctx.cr6.lt) goto loc_832F4A08;
loc_832F4A00:
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// b 0x832f4a44
	goto loc_832F4A44;
loc_832F4A08:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x832f4a44
	if (!ctx.cr6.lt) goto loc_832F4A44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x832f4a44
	goto loc_832F4A44;
loc_832F4A20:
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// lwz r11,-30924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30924);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-30924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30924, ctx.r11.u32);
	// b 0x832f4a44
	goto loc_832F4A44;
loc_832F4A38:
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// b 0x832f4a44
	goto loc_832F4A44;
loc_832F4A40:
	// bl 0x82c10e98
	ctx.lr = 0x832F4A44;
	sub_82C10E98(ctx, base);
loc_832F4A44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F4A4C"))) PPC_WEAK_FUNC(sub_832F4A4C);
PPC_FUNC_IMPL(__imp__sub_832F4A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4A50"))) PPC_WEAK_FUNC(sub_832F4A50);
PPC_FUNC_IMPL(__imp__sub_832F4A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F4A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f4cc0
	if (!ctx.cr0.eq) goto loc_832F4CC0;
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4a94
	if (!ctx.cr6.eq) goto loc_832F4A94;
	// lbz r11,75(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// stb r28,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r28.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f4a94
	if (!ctx.cr0.eq) goto loc_832F4A94;
	// stb r29,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r29.u8);
loc_832F4A94:
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4ac4
	if (!ctx.cr6.eq) goto loc_832F4AC4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f4ab4
	if (ctx.cr6.eq) goto loc_832F4AB4;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x832fb450
	ctx.lr = 0x832F4AB4;
	sub_832FB450(ctx, base);
loc_832F4AB4:
	// bl 0x82c10e98
	ctx.lr = 0x832F4AB8;
	sub_82C10E98(ctx, base);
	// stb r28,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r28.u8);
	// stb r28,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r28.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F4AC4;
	sub_82C10E98(ctx, base);
loc_832F4AC4:
	// bl 0x82c10e98
	ctx.lr = 0x832F4AC8;
	sub_82C10E98(ctx, base);
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4cac
	if (!ctx.cr6.eq) goto loc_832F4CAC;
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f4cec
	if (ctx.cr6.eq) goto loc_832F4CEC;
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f4b48
	if (!ctx.cr0.eq) goto loc_832F4B48;
	// stb r29,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r29.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F4AF8;
	sub_82C10E98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832f4b48
	if (!ctx.cr6.eq) goto loc_832F4B48;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x832fbfb0
	ctx.lr = 0x832F4B18;
	sub_832FBFB0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832f4b48
	if (!ctx.cr0.eq) goto loc_832F4B48;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r11,-20704
	ctx.r3.s64 = ctx.r11.s64 + -20704;
	// bl 0x832ffac8
	ctx.lr = 0x832F4B34;
	sub_832FFAC8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r28,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r28.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r28,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r28.u8);
	// b 0x832f4cec
	goto loc_832F4CEC;
loc_832F4B48:
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4cb0
	if (!ctx.cr6.eq) goto loc_832F4CB0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x832f4b60
	if (!ctx.cr6.eq) goto loc_832F4B60;
	// bl 0x82c10e98
	ctx.lr = 0x832F4B60;
	sub_82C10E98(ctx, base);
loc_832F4B60:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832fb8e0
	ctx.lr = 0x832F4B68;
	sub_832FB8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f4c64
	if (ctx.cr0.eq) goto loc_832F4C64;
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4b88
	if (!ctx.cr6.eq) goto loc_832F4B88;
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832f4cec
	if (ctx.cr6.eq) goto loc_832F4CEC;
loc_832F4B88:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832f4bd0
	if (!ctx.cr6.eq) goto loc_832F4BD0;
	// bl 0x832fba80
	ctx.lr = 0x832F4B9C;
	sub_832FBA80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x832f4bb4
	if (!ctx.cr6.lt) goto loc_832F4BB4;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x832fc150
	ctx.lr = 0x832F4BB0;
	sub_832FC150(ctx, base);
	// extsw r29,r3
	ctx.r29.s64 = ctx.r3.s32;
loc_832F4BB4:
	// addi r11,r29,2047
	ctx.r11.s64 = ctx.r29.s64 + 2047;
	// sradi r10,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 10;
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r11,r11,11
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 11;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// b 0x832f4c00
	goto loc_832F4C00;
loc_832F4BD0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832fb5c0
	ctx.lr = 0x832F4BDC;
	sub_832FB5C0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832fb500
	ctx.lr = 0x832F4BE4;
	sub_832FB500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r30,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 11) & 0xFFFFF800;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// bl 0x832fb5c0
	ctx.lr = 0x832F4C00;
	sub_832FB5C0(ctx, base);
loc_832F4C00:
	// li r11,-2048
	ctx.r11.s64 = -2048;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r11,r11,22
	ctx.r11.u64 = ctx.r11.u64 & 0x3FFFFFFFFFF;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x832f4c1c
	if (!ctx.cr6.eq) goto loc_832F4C1C;
	// std r29,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r29.u64);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_832F4C1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x832f4c2c
	if (!ctx.cr6.gt) goto loc_832F4C2C;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_832F4C2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x832f4c54
	if (!ctx.cr6.gt) goto loc_832F4C54;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// rldicr r11,r10,11,52
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0xFFFFFFFFFFFFF800;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_832F4C54:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4550
	ctx.lr = 0x832F4C60;
	sub_832F4550(ctx, base);
	// stb r28,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r28.u8);
loc_832F4C64:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832fb820
	ctx.lr = 0x832F4C6C;
	sub_832FB820(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x832f4cb0
	if (!ctx.cr6.eq) goto loc_832F4CB0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r11,-20748
	ctx.r3.s64 = ctx.r11.s64 + -20748;
	// bl 0x832ffac8
	ctx.lr = 0x832F4C84;
	sub_832FFAC8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f4c98
	if (ctx.cr6.eq) goto loc_832F4C98;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x832fb450
	ctx.lr = 0x832F4C98;
	sub_832FB450(ctx, base);
loc_832F4C98:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r28,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r28.u8);
	// stb r28,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r28.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// b 0x832f4cec
	goto loc_832F4CEC;
loc_832F4CAC:
	// bl 0x82c10e98
	ctx.lr = 0x832F4CB0;
	sub_82C10E98(ctx, base);
loc_832F4CB0:
	// lbz r11,75(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 75);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4cc0
	if (!ctx.cr6.eq) goto loc_832F4CC0;
	// stb r28,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r28.u8);
loc_832F4CC0:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832f4cec
	if (!ctx.cr6.eq) goto loc_832F4CEC;
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4cec
	if (!ctx.cr6.eq) goto loc_832F4CEC;
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f4cec
	if (!ctx.cr0.eq) goto loc_832F4CEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4680
	ctx.lr = 0x832F4CEC;
	sub_832F4680(ctx, base);
loc_832F4CEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F4CF4"))) PPC_WEAK_FUNC(sub_832F4CF4);
PPC_FUNC_IMPL(__imp__sub_832F4CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4CF8"))) PPC_WEAK_FUNC(sub_832F4CF8);
PPC_FUNC_IMPL(__imp__sub_832F4CF8) {
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
	ctx.lr = 0x832F4D08;
	sub_832F8758(ctx, base);
	// bl 0x832fb740
	ctx.lr = 0x832F4D0C;
	sub_832FB740(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F4D10;
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

__attribute__((alias("__imp__sub_832F4D20"))) PPC_WEAK_FUNC(sub_832F4D20);
PPC_FUNC_IMPL(__imp__sub_832F4D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F4D28;
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
	// bl 0x832f8758
	ctx.lr = 0x832F4D3C;
	sub_832F8758(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// bl 0x832f8798
	ctx.lr = 0x832F4D48;
	sub_832F8798(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F4D54"))) PPC_WEAK_FUNC(sub_832F4D54);
PPC_FUNC_IMPL(__imp__sub_832F4D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4D58"))) PPC_WEAK_FUNC(sub_832F4D58);
PPC_FUNC_IMPL(__imp__sub_832F4D58) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F4D70;
	sub_832F8758(ctx, base);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832f8798
	ctx.lr = 0x832F4D78;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F4D90"))) PPC_WEAK_FUNC(sub_832F4D90);
PPC_FUNC_IMPL(__imp__sub_832F4D90) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F4DB0;
	sub_832F8758(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f43f0
	ctx.lr = 0x832F4DBC;
	sub_832F43F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f8798
	ctx.lr = 0x832F4DC4;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F4DE0"))) PPC_WEAK_FUNC(sub_832F4DE0);
PPC_FUNC_IMPL(__imp__sub_832F4DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F4DE8;
	__savegprlr_27(ctx, base);
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x832f8758
	ctx.lr = 0x832F4E04;
	sub_832F8758(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F4E08;
	sub_82C10E98(ctx, base);
	// addi r11,r31,2047
	ctx.r11.s64 = ctx.r31.s64 + 2047;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// sradi r10,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 10;
	// std r31,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r31.u64);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// stw r28,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r28.u32);
	// stb r9,73(r30)
	PPC_STORE_U8(ctx.r30.u32 + 73, ctx.r9.u8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r11,r11,11
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 11;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832F4E3C;
	sub_82C10E98(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F4E40;
	sub_832F8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F4E48"))) PPC_WEAK_FUNC(sub_832F4E48);
PPC_FUNC_IMPL(__imp__sub_832F4E48) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F4E60;
	sub_832F8758(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F4E64;
	sub_82C10E98(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x832f4e84
	if (ctx.cr6.eq) goto loc_832F4E84;
	// li r10,2
	ctx.r10.s64 = 2;
loc_832F4E84:
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stb r9,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r9.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832F4EAC;
	sub_82C10E98(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F4EB0;
	sub_832F8798(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_832F4EC8"))) PPC_WEAK_FUNC(sub_832F4EC8);
PPC_FUNC_IMPL(__imp__sub_832F4EC8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F4EE0;
	sub_832F8758(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F4EE4;
	sub_82C10E98(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832f4ef8
	if (!ctx.cr6.eq) goto loc_832F4EF8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832fb970
	ctx.lr = 0x832F4EF8;
	sub_832FB970(ctx, base);
loc_832F4EF8:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832f4f30
	if (!ctx.cr6.eq) goto loc_832F4F30;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4f30
	if (!ctx.cr6.eq) goto loc_832F4F30;
	// lbz r11,75(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 75);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4f38
	if (!ctx.cr6.eq) goto loc_832F4F38;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r11.u8);
	// b 0x832f4f38
	goto loc_832F4F38;
loc_832F4F30:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_832F4F38:
	// bl 0x82c10e98
	ctx.lr = 0x832F4F3C;
	sub_82C10E98(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F4F40;
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

__attribute__((alias("__imp__sub_832F4F54"))) PPC_WEAK_FUNC(sub_832F4F54);
PPC_FUNC_IMPL(__imp__sub_832F4F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4F58"))) PPC_WEAK_FUNC(sub_832F4F58);
PPC_FUNC_IMPL(__imp__sub_832F4F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F4F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832f8758
	ctx.lr = 0x832F4F68;
	sub_832F8758(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r29,r11,-30936
	ctx.r29.s64 = ctx.r11.s64 + -30936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f57e0
	ctx.lr = 0x832F4F78;
	sub_832F57E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f4fb8
	if (ctx.cr0.eq) goto loc_832F4FB8;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r30,r11,-17088
	ctx.r30.s64 = ctx.r11.s64 + -17088;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F4F8C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f4fa0
	if (!ctx.cr6.eq) goto loc_832F4FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4a50
	ctx.lr = 0x832F4FA0;
	sub_832F4A50(ctx, base);
loc_832F4FA0:
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// addi r11,r30,8320
	ctx.r11.s64 = ctx.r30.s64 + 8320;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f4f8c
	if (ctx.cr6.lt) goto loc_832F4F8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832F4FB8:
	// bl 0x832f8798
	ctx.lr = 0x832F4FBC;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F4FC4"))) PPC_WEAK_FUNC(sub_832F4FC4);
PPC_FUNC_IMPL(__imp__sub_832F4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F4FC8"))) PPC_WEAK_FUNC(sub_832F4FC8);
PPC_FUNC_IMPL(__imp__sub_832F4FC8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F4FE0;
	sub_832F8758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4ec8
	ctx.lr = 0x832F4FE8;
	sub_832F4EC8(ctx, base);
loc_832F4FE8:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f5000
	if (!ctx.cr6.eq) goto loc_832F5000;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f500c
	if (ctx.cr6.eq) goto loc_832F500C;
loc_832F5000:
	// bl 0x832ffd60
	ctx.lr = 0x832F5004;
	sub_832FFD60(ctx, base);
	// bl 0x832f6790
	ctx.lr = 0x832F5008;
	sub_832F6790(ctx, base);
	// b 0x832f4fe8
	goto loc_832F4FE8;
loc_832F500C:
	// bl 0x832f8798
	ctx.lr = 0x832F5010;
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

__attribute__((alias("__imp__sub_832F5024"))) PPC_WEAK_FUNC(sub_832F5024);
PPC_FUNC_IMPL(__imp__sub_832F5024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5028"))) PPC_WEAK_FUNC(sub_832F5028);
PPC_FUNC_IMPL(__imp__sub_832F5028) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F5040;
	sub_832F8758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4ec8
	ctx.lr = 0x832F5048;
	sub_832F4EC8(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F504C;
	sub_82C10E98(ctx, base);
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f505c
	if (!ctx.cr6.eq) goto loc_832F505C;
	// stb r11,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r11.u8);
loc_832F505C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// bl 0x832f4a50
	ctx.lr = 0x832F506C;
	sub_832F4A50(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F5070;
	sub_82C10E98(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F5074;
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

__attribute__((alias("__imp__sub_832F5088"))) PPC_WEAK_FUNC(sub_832F5088);
PPC_FUNC_IMPL(__imp__sub_832F5088) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F50A0;
	sub_832F8758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4fc8
	ctx.lr = 0x832F50A8;
	sub_832F4FC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5028
	ctx.lr = 0x832F50B0;
	sub_832F5028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4a50
	ctx.lr = 0x832F50B8;
	sub_832F4A50(ctx, base);
loc_832F50B8:
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f50d0
	if (!ctx.cr0.eq) goto loc_832F50D0;
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f50dc
	if (ctx.cr0.eq) goto loc_832F50DC;
loc_832F50D0:
	// bl 0x832ffd60
	ctx.lr = 0x832F50D4;
	sub_832FFD60(ctx, base);
	// bl 0x832f6790
	ctx.lr = 0x832F50D8;
	sub_832F6790(ctx, base);
	// b 0x832f50b8
	goto loc_832F50B8;
loc_832F50DC:
	// bl 0x832f8798
	ctx.lr = 0x832F50E0;
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

__attribute__((alias("__imp__sub_832F50F4"))) PPC_WEAK_FUNC(sub_832F50F4);
PPC_FUNC_IMPL(__imp__sub_832F50F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F50F8"))) PPC_WEAK_FUNC(sub_832F50F8);
PPC_FUNC_IMPL(__imp__sub_832F50F8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F5110;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832f5140
	if (ctx.cr6.eq) goto loc_832F5140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f4fc8
	ctx.lr = 0x832F5120;
	sub_832F4FC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5088
	ctx.lr = 0x832F5128;
	sub_832F5088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F5140;
	sub_833A2B30(ctx, base);
loc_832F5140:
	// bl 0x832f8798
	ctx.lr = 0x832F5144;
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

__attribute__((alias("__imp__sub_832F5158"))) PPC_WEAK_FUNC(sub_832F5158);
PPC_FUNC_IMPL(__imp__sub_832F5158) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30916
	ctx.r11.s64 = ctx.r11.s64 + -30916;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f51b4
	if (ctx.cr6.eq) goto loc_832F51B4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832F5190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,-29940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832f51a8
	if (!ctx.cr6.eq) goto loc_832F51A8;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// stw r31,-29936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29936, ctx.r31.u32);
loc_832F51A8:
	// lwz r10,-29940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29940);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-29940(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29940, ctx.r10.u32);
loc_832F51B4:
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

__attribute__((alias("__imp__sub_832F51C8"))) PPC_WEAK_FUNC(sub_832F51C8);
PPC_FUNC_IMPL(__imp__sub_832F51C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832f5158
	sub_832F5158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F51D0"))) PPC_WEAK_FUNC(sub_832F51D0);
PPC_FUNC_IMPL(__imp__sub_832F51D0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-17376
	ctx.r31.s64 = ctx.r11.s64 + -17376;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F5220;
	sub_833A2B30(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832ff9f0
	ctx.lr = 0x832F5240;
	sub_832FF9F0(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,-30304
	ctx.r11.s64 = ctx.r11.s64 + -30304;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f5268
	if (ctx.cr6.eq) goto loc_832F5268;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832F5268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F5268:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f8608
	ctx.lr = 0x832F5270;
	sub_832F8608(ctx, base);
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

__attribute__((alias("__imp__sub_832F5288"))) PPC_WEAK_FUNC(sub_832F5288);
PPC_FUNC_IMPL(__imp__sub_832F5288) {
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
	// bne cr6,0x832f52c4
	if (!ctx.cr6.eq) goto loc_832F52C4;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-30304
	ctx.r10.s64 = ctx.r11.s64 + -30304;
	// lwz r11,-30304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30304);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F52C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832f530c
	goto loc_832F530C;
loc_832F52C4:
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r31,r11,-17376
	ctx.r31.s64 = ctx.r11.s64 + -17376;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ff918
	ctx.lr = 0x832F52DC;
	sub_832FF918(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,-30304
	ctx.r11.s64 = ctx.r11.s64 + -30304;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f5304
	if (ctx.cr6.eq) goto loc_832F5304;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832F5304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F5304:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f8608
	ctx.lr = 0x832F530C;
	sub_832F8608(ctx, base);
loc_832F530C:
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

__attribute__((alias("__imp__sub_832F5320"))) PPC_WEAK_FUNC(sub_832F5320);
PPC_FUNC_IMPL(__imp__sub_832F5320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r11,-30916
	ctx.r10.s64 = ctx.r11.s64 + -30916;
	// stw r3,-30916(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30916, ctx.r3.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F5334"))) PPC_WEAK_FUNC(sub_832F5334);
PPC_FUNC_IMPL(__imp__sub_832F5334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5338"))) PPC_WEAK_FUNC(sub_832F5338);
PPC_FUNC_IMPL(__imp__sub_832F5338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r11,-30908
	ctx.r10.s64 = ctx.r11.s64 + -30908;
	// stw r3,-30908(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30908, ctx.r3.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F534C"))) PPC_WEAK_FUNC(sub_832F534C);
PPC_FUNC_IMPL(__imp__sub_832F534C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5350"))) PPC_WEAK_FUNC(sub_832F5350);
PPC_FUNC_IMPL(__imp__sub_832F5350) {
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
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F5374;
	sub_833A2B30(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// addi r31,r10,-30920
	ctx.r31.s64 = ctx.r10.s64 + -30920;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-17120
	ctx.r9.s64 = ctx.r9.s64 + -17120;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_832F53B4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832f53b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F53B4;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F53D0;
	sub_833A2B30(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,576
	ctx.r5.s64 = 576;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F53E0;
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

__attribute__((alias("__imp__sub_832F53F4"))) PPC_WEAK_FUNC(sub_832F53F4);
PPC_FUNC_IMPL(__imp__sub_832F53F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F53F8"))) PPC_WEAK_FUNC(sub_832F53F8);
PPC_FUNC_IMPL(__imp__sub_832F53F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F5400;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r30,r11,-30200
	ctx.r30.s64 = ctx.r11.s64 + -30200;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// addi r11,r10,-20584
	ctx.r11.s64 = ctx.r10.s64 + -20584;
	// stw r11,-692(r30)
	PPC_STORE_U32(ctx.r30.u32 + -692, ctx.r11.u32);
	// lwz r11,-29944(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f5460
	if (!ctx.cr6.eq) goto loc_832F5460;
	// bl 0x832f5350
	ctx.lr = 0x832F542C;
	sub_832F5350(ctx, base);
	// addi r29,r30,-96
	ctx.r29.s64 = ctx.r30.s64 + -96;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F5434:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3f50
	ctx.lr = 0x832F5440;
	sub_832F3F50(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832f5474
	if (ctx.cr0.eq) goto loc_832F5474;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f5434
	if (ctx.cr6.lt) goto loc_832F5434;
loc_832F5460:
	// lwz r11,-29944(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29944);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-29944(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29944, ctx.r11.u32);
loc_832F546C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832F5474:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20504
	ctx.r3.s64 = ctx.r11.s64 + -20504;
	// bl 0x832f5288
	ctx.lr = 0x832F5480;
	sub_832F5288(ctx, base);
	// b 0x832f546c
	goto loc_832F546C;
}

__attribute__((alias("__imp__sub_832F5484"))) PPC_WEAK_FUNC(sub_832F5484);
PPC_FUNC_IMPL(__imp__sub_832F5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5488"))) PPC_WEAK_FUNC(sub_832F5488);
PPC_FUNC_IMPL(__imp__sub_832F5488) {
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
	// lwz r11,-29944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29944);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-29944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29944, ctx.r11.u32);
	// lwz r11,-29944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f54f0
	if (!ctx.cr6.eq) goto loc_832F54F0;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,-30304
	ctx.r30.s64 = ctx.r11.s64 + -30304;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
loc_832F54C4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832f4030
	ctx.lr = 0x832F54CC;
	sub_832F4030(ctx, base);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f54c4
	if (ctx.cr6.lt) goto loc_832F54C4;
	// bl 0x832f5350
	ctx.lr = 0x832F54E4;
	sub_832F5350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_832F54F0:
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

__attribute__((alias("__imp__sub_832F5508"))) PPC_WEAK_FUNC(sub_832F5508);
PPC_FUNC_IMPL(__imp__sub_832F5508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,-30920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30920);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f5524
	if (ctx.cr6.eq) goto loc_832F5524;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832F5524:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,-30920(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30920, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F5530"))) PPC_WEAK_FUNC(sub_832F5530);
PPC_FUNC_IMPL(__imp__sub_832F5530) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x832f5554
	if (ctx.cr6.lt) goto loc_832F5554;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x832f5560
	if (ctx.cr6.lt) goto loc_832F5560;
loc_832F5554:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20352
	ctx.r3.s64 = ctx.r11.s64 + -20352;
	// bl 0x832f5288
	ctx.lr = 0x832F5560;
	sub_832F5288(ctx, base);
loc_832F5560:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-30296
	ctx.r11.s64 = ctx.r11.s64 + -30296;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x832f40c0
	ctx.lr = 0x832F5574;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f5588
	if (!ctx.cr0.lt) goto loc_832F5588;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20448
	ctx.r3.s64 = ctx.r11.s64 + -20448;
	// bl 0x832f8608
	ctx.lr = 0x832F5588;
	sub_832F8608(ctx, base);
loc_832F5588:
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

__attribute__((alias("__imp__sub_832F559C"))) PPC_WEAK_FUNC(sub_832F559C);
PPC_FUNC_IMPL(__imp__sub_832F559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F55A0"))) PPC_WEAK_FUNC(sub_832F55A0);
PPC_FUNC_IMPL(__imp__sub_832F55A0) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x832f55c4
	if (ctx.cr6.lt) goto loc_832F55C4;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x832f55d0
	if (ctx.cr6.lt) goto loc_832F55D0;
loc_832F55C4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20176
	ctx.r3.s64 = ctx.r11.s64 + -20176;
	// bl 0x832f5288
	ctx.lr = 0x832F55D0;
	sub_832F5288(ctx, base);
loc_832F55D0:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-30296
	ctx.r11.s64 = ctx.r11.s64 + -30296;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x832f4158
	ctx.lr = 0x832F55E4;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f55f8
	if (!ctx.cr0.lt) goto loc_832F55F8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// bl 0x832f8608
	ctx.lr = 0x832F55F8;
	sub_832F8608(ctx, base);
loc_832F55F8:
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

__attribute__((alias("__imp__sub_832F560C"))) PPC_WEAK_FUNC(sub_832F560C);
PPC_FUNC_IMPL(__imp__sub_832F560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5610"))) PPC_WEAK_FUNC(sub_832F5610);
PPC_FUNC_IMPL(__imp__sub_832F5610) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r30,r11,-30908
	ctx.r30.s64 = ctx.r11.s64 + -30908;
	// lwz r11,-30908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f5690
	if (ctx.cr6.eq) goto loc_832F5690;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-29940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29940);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-29940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29940, ctx.r11.u32);
	// lwz r11,-29940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f5680
	if (!ctx.cr6.eq) goto loc_832F5680;
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lwz r11,-29936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29936);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x832f5678
	if (ctx.cr6.eq) goto loc_832F5678;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r4,-29936(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29936);
	// addi r3,r11,-20096
	ctx.r3.s64 = ctx.r11.s64 + -20096;
	// bl 0x832f51d0
	ctx.lr = 0x832F5678;
	sub_832F51D0(ctx, base);
loc_832F5678:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-29936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29936, ctx.r11.u32);
loc_832F5680:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F5690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F5690:
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

__attribute__((alias("__imp__sub_832F56A8"))) PPC_WEAK_FUNC(sub_832F56A8);
PPC_FUNC_IMPL(__imp__sub_832F56A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832f5610
	sub_832F5610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F56B0"))) PPC_WEAK_FUNC(sub_832F56B0);
PPC_FUNC_IMPL(__imp__sub_832F56B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F56B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832f5158
	ctx.lr = 0x832F56D0;
	sub_832F5158(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-30264
	ctx.r11.s64 = ctx.r11.s64 + -30264;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// bl 0x832f5610
	ctx.lr = 0x832F56F0;
	sub_832F5610(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F56F8"))) PPC_WEAK_FUNC(sub_832F56F8);
PPC_FUNC_IMPL(__imp__sub_832F56F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832F5700;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x832f5530
	ctx.lr = 0x832F5710;
	sub_832F5530(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r25,r30,6
	ctx.r25.s64 = ctx.r30.s64 * 6;
	// addi r26,r10,-30888
	ctx.r26.s64 = ctx.r10.s64 + -30888;
	// addi r28,r11,-17408
	ctx.r28.s64 = ctx.r11.s64 + -17408;
loc_832F5728:
	// add r11,r25,r27
	ctx.r11.u64 = ctx.r25.u64 + ctx.r27.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f5764
	if (ctx.cr6.eq) goto loc_832F5764;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x832F5758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// or r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stwx r11,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
loc_832F5764:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x832f5728
	if (ctx.cr6.lt) goto loc_832F5728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f55a0
	ctx.lr = 0x832F5778;
	sub_832F55A0(ctx, base);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-17120
	ctx.r10.s64 = ctx.r10.s64 + -17120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F579C"))) PPC_WEAK_FUNC(sub_832F579C);
PPC_FUNC_IMPL(__imp__sub_832F579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F57A0"))) PPC_WEAK_FUNC(sub_832F57A0);
PPC_FUNC_IMPL(__imp__sub_832F57A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f56f8
	sub_832F56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F57A8"))) PPC_WEAK_FUNC(sub_832F57A8);
PPC_FUNC_IMPL(__imp__sub_832F57A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832f56f8
	sub_832F56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F57B0"))) PPC_WEAK_FUNC(sub_832F57B0);
PPC_FUNC_IMPL(__imp__sub_832F57B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x832f56f8
	sub_832F56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F57B8"))) PPC_WEAK_FUNC(sub_832F57B8);
PPC_FUNC_IMPL(__imp__sub_832F57B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x832f56f8
	sub_832F56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F57C0"))) PPC_WEAK_FUNC(sub_832F57C0);
PPC_FUNC_IMPL(__imp__sub_832F57C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x832f56f8
	sub_832F56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F57C8"))) PPC_WEAK_FUNC(sub_832F57C8);
PPC_FUNC_IMPL(__imp__sub_832F57C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x832f56f8
	sub_832F56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F57D0"))) PPC_WEAK_FUNC(sub_832F57D0);
PPC_FUNC_IMPL(__imp__sub_832F57D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x832f56f8
	sub_832F56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F57D8"))) PPC_WEAK_FUNC(sub_832F57D8);
PPC_FUNC_IMPL(__imp__sub_832F57D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x832f56f8
	sub_832F56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F57E0"))) PPC_WEAK_FUNC(sub_832F57E0);
PPC_FUNC_IMPL(__imp__sub_832F57E0) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-30920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30920);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f5818
	if (ctx.cr6.eq) goto loc_832F5818;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F5810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832f5840
	goto loc_832F5840;
loc_832F5818:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832f5158
	ctx.lr = 0x832F5820;
	sub_832F5158(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x832f5610
	ctx.lr = 0x832F5840;
	sub_832F5610(ctx, base);
loc_832F5840:
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

__attribute__((alias("__imp__sub_832F5858"))) PPC_WEAK_FUNC(sub_832F5858);
PPC_FUNC_IMPL(__imp__sub_832F5858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F5860;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832f5158
	ctx.lr = 0x832F587C;
	sub_832F5158(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x832f590c
	if (ctx.cr6.lt) goto loc_832F590C;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bge cr6,0x832f590c
	if (!ctx.cr6.lt) goto loc_832F590C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f5530
	ctx.lr = 0x832F5894;
	sub_832F5530(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r9,r30,6
	ctx.r9.s64 = ctx.r30.s64 * 6;
	// addi r10,r11,-30888
	ctx.r10.s64 = ctx.r11.s64 + -30888;
loc_832F58A4:
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832f58cc
	if (ctx.cr6.eq) goto loc_832F58CC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x832f58a4
	if (ctx.cr6.lt) goto loc_832F58A4;
	// b 0x832f58f0
	goto loc_832F58F0;
loc_832F58CC:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// beq cr6,0x832f58e4
	if (ctx.cr6.eq) goto loc_832F58E4;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// b 0x832f58f0
	goto loc_832F58F0;
loc_832F58E4:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r10,r10,-31984
	ctx.r10.s64 = ctx.r10.s64 + -31984;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_832F58F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f55a0
	ctx.lr = 0x832F58F8;
	sub_832F55A0(ctx, base);
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x832f591c
	if (!ctx.cr6.eq) goto loc_832F591C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19984
	ctx.r3.s64 = ctx.r11.s64 + -19984;
	// b 0x832f5914
	goto loc_832F5914;
loc_832F590C:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
loc_832F5914:
	// bl 0x832f5288
	ctx.lr = 0x832F5918;
	sub_832F5288(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
loc_832F591C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832f5610
	ctx.lr = 0x832F5924;
	sub_832F5610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F5930"))) PPC_WEAK_FUNC(sub_832F5930);
PPC_FUNC_IMPL(__imp__sub_832F5930) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832f5158
	ctx.lr = 0x832F5954;
	sub_832F5158(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x832f59c0
	if (ctx.cr6.lt) goto loc_832F59C0;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bge cr6,0x832f59c0
	if (!ctx.cr6.lt) goto loc_832F59C0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x832f59b4
	if (ctx.cr6.lt) goto loc_832F59B4;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bge cr6,0x832f59b4
	if (!ctx.cr6.lt) goto loc_832F59B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5530
	ctx.lr = 0x832F597C;
	sub_832F5530(ctx, base);
	// mulli r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 * 6;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r10,-30888
	ctx.r11.s64 = ctx.r10.s64 + -30888;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r10,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// bl 0x832f55a0
	ctx.lr = 0x832F59B0;
	sub_832F55A0(ctx, base);
	// b 0x832f59cc
	goto loc_832F59CC;
loc_832F59B4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19904
	ctx.r3.s64 = ctx.r11.s64 + -19904;
	// b 0x832f59c8
	goto loc_832F59C8;
loc_832F59C0:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19936
	ctx.r3.s64 = ctx.r11.s64 + -19936;
loc_832F59C8:
	// bl 0x832f5288
	ctx.lr = 0x832F59CC;
	sub_832F5288(ctx, base);
loc_832F59CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832f5610
	ctx.lr = 0x832F59D4;
	sub_832F5610(ctx, base);
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

__attribute__((alias("__imp__sub_832F59EC"))) PPC_WEAK_FUNC(sub_832F59EC);
PPC_FUNC_IMPL(__imp__sub_832F59EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F59F0"))) PPC_WEAK_FUNC(sub_832F59F0);
PPC_FUNC_IMPL(__imp__sub_832F59F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F59F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x832f5158
	ctx.lr = 0x832F5A18;
	sub_832F5158(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x832f5aac
	if (ctx.cr6.lt) goto loc_832F5AAC;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bge cr6,0x832f5aac
	if (!ctx.cr6.lt) goto loc_832F5AAC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x832f5aa0
	if (ctx.cr6.lt) goto loc_832F5AA0;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bge cr6,0x832f5aa0
	if (!ctx.cr6.lt) goto loc_832F5AA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f5530
	ctx.lr = 0x832F5A40;
	sub_832F5530(ctx, base);
	// mulli r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 * 6;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// addi r11,r9,-30888
	ctx.r11.s64 = ctx.r9.s64 + -30888;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f5a70
	if (ctx.cr6.eq) goto loc_832F5A70;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19788
	ctx.r3.s64 = ctx.r11.s64 + -19788;
	// bl 0x832f5288
	ctx.lr = 0x832F5A70;
	sub_832F5288(ctx, base);
loc_832F5A70:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// beq cr6,0x832f5a88
	if (ctx.cr6.eq) goto loc_832F5A88;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// b 0x832f5a94
	goto loc_832F5A94;
loc_832F5A88:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-31984
	ctx.r11.s64 = ctx.r11.s64 + -31984;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832F5A94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f55a0
	ctx.lr = 0x832F5A9C;
	sub_832F55A0(ctx, base);
	// b 0x832f5ab8
	goto loc_832F5AB8;
loc_832F5AA0:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19828
	ctx.r3.s64 = ctx.r11.s64 + -19828;
	// b 0x832f5ab4
	goto loc_832F5AB4;
loc_832F5AAC:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19864
	ctx.r3.s64 = ctx.r11.s64 + -19864;
loc_832F5AB4:
	// bl 0x832f5288
	ctx.lr = 0x832F5AB8;
	sub_832F5288(ctx, base);
loc_832F5AB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832f5610
	ctx.lr = 0x832F5AC0;
	sub_832F5610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F5AC8"))) PPC_WEAK_FUNC(sub_832F5AC8);
PPC_FUNC_IMPL(__imp__sub_832F5AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// stw r3,-29328(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29328, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F5AD4"))) PPC_WEAK_FUNC(sub_832F5AD4);
PPC_FUNC_IMPL(__imp__sub_832F5AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5AD8"))) PPC_WEAK_FUNC(sub_832F5AD8);
PPC_FUNC_IMPL(__imp__sub_832F5AD8) {
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
	// bl 0x832f57a0
	ctx.lr = 0x832F5AE8;
	sub_832F57A0(ctx, base);
	// bl 0x832f57a8
	ctx.lr = 0x832F5AEC;
	sub_832F57A8(ctx, base);
	// bl 0x832f57b0
	ctx.lr = 0x832F5AF0;
	sub_832F57B0(ctx, base);
	// bl 0x832f57b8
	ctx.lr = 0x832F5AF4;
	sub_832F57B8(ctx, base);
	// bl 0x832f57c8
	ctx.lr = 0x832F5AF8;
	sub_832F57C8(ctx, base);
	// bl 0x832f57c0
	ctx.lr = 0x832F5AFC;
	sub_832F57C0(ctx, base);
	// bl 0x832f57d0
	ctx.lr = 0x832F5B00;
	sub_832F57D0(ctx, base);
	// bl 0x832f57d8
	ctx.lr = 0x832F5B04;
	sub_832F57D8(ctx, base);
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

__attribute__((alias("__imp__sub_832F5B18"))) PPC_WEAK_FUNC(sub_832F5B18);
PPC_FUNC_IMPL(__imp__sub_832F5B18) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r11,-29328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29328);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x832f5b44
	if (!ctx.cr6.eq) goto loc_832F5B44;
	// bl 0x832ecc80
	ctx.lr = 0x832F5B38;
	sub_832ECC80(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832f5b68
	if (ctx.cr6.eq) goto loc_832F5B68;
	// li r11,1
	ctx.r11.s64 = 1;
loc_832F5B44:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832f5b70
	if (ctx.cr6.eq) goto loc_832F5B70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x832f5b68
	if (ctx.cr6.eq) goto loc_832F5B68;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832f5b74
	if (!ctx.cr6.eq) goto loc_832F5B74;
	// bl 0x832f57d0
	ctx.lr = 0x832F5B60;
	sub_832F57D0(ctx, base);
	// bl 0x832f57d8
	ctx.lr = 0x832F5B64;
	sub_832F57D8(ctx, base);
	// b 0x832f5b74
	goto loc_832F5B74;
loc_832F5B68:
	// bl 0x832f57c8
	ctx.lr = 0x832F5B6C;
	sub_832F57C8(ctx, base);
	// b 0x832f5b74
	goto loc_832F5B74;
loc_832F5B70:
	// bl 0x832f5ad8
	ctx.lr = 0x832F5B74;
	sub_832F5AD8(ctx, base);
loc_832F5B74:
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

__attribute__((alias("__imp__sub_832F5B88"))) PPC_WEAK_FUNC(sub_832F5B88);
PPC_FUNC_IMPL(__imp__sub_832F5B88) {
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
	// bl 0x82c10e98
	ctx.lr = 0x832F5BA4;
	sub_82C10E98(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832ff1a0
	ctx.lr = 0x832F5BAC;
	sub_832FF1A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832ff1b8
	ctx.lr = 0x832F5BB8;
	sub_832FF1B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832ff1d8
	ctx.lr = 0x832F5BC4;
	sub_832FF1D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83300170
	ctx.lr = 0x832F5BCC;
	sub_83300170(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832f5bfc
	if (!ctx.cr6.eq) goto loc_832F5BFC;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f5bfc
	if (ctx.cr6.eq) goto loc_832F5BFC;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F5BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F5BFC:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f5c0c
	if (ctx.cr6.eq) goto loc_832F5C0C;
	// bl 0x83301610
	ctx.lr = 0x832F5C0C;
	sub_83301610(ctx, base);
loc_832F5C0C:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F5C1C;
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

__attribute__((alias("__imp__sub_832F5C34"))) PPC_WEAK_FUNC(sub_832F5C34);
PPC_FUNC_IMPL(__imp__sub_832F5C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5C38"))) PPC_WEAK_FUNC(sub_832F5C38);
PPC_FUNC_IMPL(__imp__sub_832F5C38) {
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
	// bne cr6,0x832f5c64
	if (!ctx.cr6.eq) goto loc_832F5C64;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19660
	ctx.r3.s64 = ctx.r11.s64 + -19660;
	// bl 0x832ffa40
	ctx.lr = 0x832F5C60;
	sub_832FFA40(ctx, base);
	// b 0x832f5cb0
	goto loc_832F5CB0;
loc_832F5C64:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f5c74
	if (ctx.cr6.eq) goto loc_832F5C74;
	// bl 0x832f5028
	ctx.lr = 0x832F5C74;
	sub_832F5028(ctx, base);
loc_832F5C74:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x832f5ca8
	if (!ctx.cr6.eq) goto loc_832F5CA8;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x832f0440
	ctx.lr = 0x832F5C88;
	sub_832F0440(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f5ca8
	if (ctx.cr6.eq) goto loc_832F5CA8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F5CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F5CA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5b88
	ctx.lr = 0x832F5CB0;
	sub_832F5B88(ctx, base);
loc_832F5CB0:
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

__attribute__((alias("__imp__sub_832F5CC4"))) PPC_WEAK_FUNC(sub_832F5CC4);
PPC_FUNC_IMPL(__imp__sub_832F5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5CC8"))) PPC_WEAK_FUNC(sub_832F5CC8);
PPC_FUNC_IMPL(__imp__sub_832F5CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F5CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x832f5d4c
	if (ctx.cr6.eq) goto loc_832F5D4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x832f5d4c
	if (ctx.cr6.eq) goto loc_832F5D4C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x832f5d38
	if (!ctx.cr6.eq) goto loc_832F5D38;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x833007c8
	ctx.lr = 0x832F5D08;
	sub_833007C8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x833007a8
	ctx.lr = 0x832F5D14;
	sub_833007A8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x833007b8
	ctx.lr = 0x832F5D20;
	sub_833007B8(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divw r11,r11,r3
	ctx.r11.s32 = ctx.r11.s32 / ctx.r3.s32;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x832f5d5c
	goto loc_832F5D5C;
loc_832F5D38:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x832f5d5c
	goto loc_832F5D5C;
loc_832F5D4C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832ff1f8
	ctx.lr = 0x832F5D5C;
	sub_832FF1F8(ctx, base);
loc_832F5D5C:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F5D74"))) PPC_WEAK_FUNC(sub_832F5D74);
PPC_FUNC_IMPL(__imp__sub_832F5D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F5D78"))) PPC_WEAK_FUNC(sub_832F5D78);
PPC_FUNC_IMPL(__imp__sub_832F5D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832F5D80;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f5fec
	if (ctx.cr6.eq) goto loc_832F5FEC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832f5fec
	if (ctx.cr6.eq) goto loc_832F5FEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832f5fec
	if (ctx.cr6.eq) goto loc_832F5FEC;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-29884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f5dc0
	if (!ctx.cr6.eq) goto loc_832F5DC0;
	// bl 0x832f5cc8
	ctx.lr = 0x832F5DBC;
	sub_832F5CC8(ctx, base);
	// b 0x832f5ff8
	goto loc_832F5FF8;
loc_832F5DC0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r27,-31815
	ctx.r27.s64 = -2085027840;
	// lis r29,-31815
	ctx.r29.s64 = -2085027840;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-17440(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + -17440, temp.u32);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x832f5e94
	if (ctx.cr6.eq) goto loc_832F5E94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x832f5e94
	if (ctx.cr6.eq) goto loc_832F5E94;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x832f5e88
	if (!ctx.cr6.eq) goto loc_832F5E88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833007c8
	ctx.lr = 0x832F5DFC;
	sub_833007C8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833007a8
	ctx.lr = 0x832F5E08;
	sub_833007A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833007b8
	ctx.lr = 0x832F5E14;
	sub_833007B8(ctx, base);
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,16
	ctx.r9.s64 = 16;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwa r11,-17436(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + -17436));
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// divw r11,r9,r3
	ctx.r11.s32 = ctx.r9.s32 / ctx.r3.s32;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x832f5e8c
	goto loc_832F5E8C;
loc_832F5E88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F5E8C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x832f5fd0
	goto loc_832F5FD0;
loc_832F5E94:
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f5ec0
	if (!ctx.cr0.eq) goto loc_832F5EC0;
	// lwz r11,-31140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31140);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x832f5ec4
	goto loc_832F5EC4;
loc_832F5EC0:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
loc_832F5EC4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5cc8
	ctx.lr = 0x832F5ED8;
	sub_832F5CC8(ctx, base);
	// lwa r11,-17436(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + -17436));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwa r8,80(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwa r11,88(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// lfs f13,6580(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6580);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,6640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6640);
	ctx.f0.f64 = double(temp.f32);
	// lwa r10,0(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 0));
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fdivs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,-17440(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + -17440, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x832f5f68
	if (ctx.cr6.gt) goto loc_832F5F68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12300);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832f5fd0
	if (!ctx.cr6.lt) goto loc_832F5FD0;
loc_832F5F68:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x832ff1f8
	ctx.lr = 0x832F5F78;
	sub_832FF1F8(ctx, base);
	// lwa r11,-17436(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + -17436));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwa r10,88(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,156
	ctx.r12.s64 = 156;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// lwz r11,-31140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31140);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_832F5FD0:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,-17436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17436);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x832f5ff8
	goto loc_832F5FF8;
loc_832F5FEC:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19580
	ctx.r3.s64 = ctx.r11.s64 + -19580;
	// bl 0x832ffa40
	ctx.lr = 0x832F5FF8;
	sub_832FFA40(ctx, base);
loc_832F5FF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F6000"))) PPC_WEAK_FUNC(sub_832F6000);
PPC_FUNC_IMPL(__imp__sub_832F6000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F6008;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f602c
	if (!ctx.cr6.eq) goto loc_832F602C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19364
	ctx.r3.s64 = ctx.r11.s64 + -19364;
	// b 0x832f611c
	goto loc_832F611C;
loc_832F602C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832f6048
	if (ctx.cr6.eq) goto loc_832F6048;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x832f6048
	if (ctx.cr6.eq) goto loc_832F6048;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19408
	ctx.r3.s64 = ctx.r11.s64 + -19408;
	// b 0x832f611c
	goto loc_832F611C;
loc_832F6048:
	// cmpwi cr6,r28,-128
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -128, ctx.xer);
	// beq cr6,0x832f606c
	if (ctx.cr6.eq) goto loc_832F606C;
	// cmpwi cr6,r28,-15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -15, ctx.xer);
	// bge cr6,0x832f6060
	if (!ctx.cr6.lt) goto loc_832F6060;
	// li r28,-15
	ctx.r28.s64 = -15;
	// b 0x832f606c
	goto loc_832F606C;
loc_832F6060:
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// ble cr6,0x832f606c
	if (!ctx.cr6.gt) goto loc_832F606C;
	// li r28,15
	ctx.r28.s64 = 15;
loc_832F606C:
	// lbz r11,169(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 169);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f6090
	if (!ctx.cr6.eq) goto loc_832F6090;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83300868
	ctx.lr = 0x832F6084;
	sub_83300868(ctx, base);
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
	// cmpwi cr6,r31,-128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -128, ctx.xer);
	// bne cr6,0x832f6094
	if (!ctx.cr6.eq) goto loc_832F6094;
loc_832F6090:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832F6094:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-31148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f60e4
	if (!ctx.cr6.eq) goto loc_832F60E4;
	// cmpwi cr6,r28,-128
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -128, ctx.xer);
	// bne cr6,0x832f60dc
	if (!ctx.cr6.eq) goto loc_832F60DC;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x833007b0
	ctx.lr = 0x832F60B4;
	sub_833007B0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x832f60d0
	if (!ctx.cr6.eq) goto loc_832F60D0;
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// b 0x832f60d4
	goto loc_832F60D4;
loc_832F60D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F60D4:
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x832f60e8
	goto loc_832F60E8;
loc_832F60DC:
	// add r5,r31,r28
	ctx.r5.u64 = ctx.r31.u64 + ctx.r28.u64;
	// b 0x832f60e8
	goto loc_832F60E8;
loc_832F60E4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_832F60E8:
	// addi r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 + 33;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u16);
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832f6114
	if (!ctx.cr6.lt) goto loc_832F6114;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x832ff4a8
	ctx.lr = 0x832F6110;
	sub_832FF4A8(ctx, base);
	// b 0x832f6120
	goto loc_832F6120;
loc_832F6114:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19452
	ctx.r3.s64 = ctx.r11.s64 + -19452;
loc_832F611C:
	// bl 0x832ffa40
	ctx.lr = 0x832F6120;
	sub_832FFA40(ctx, base);
loc_832F6120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F6128"))) PPC_WEAK_FUNC(sub_832F6128);
PPC_FUNC_IMPL(__imp__sub_832F6128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F6130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82c10e98
	ctx.lr = 0x832F6138;
	sub_82C10E98(ctx, base);
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// lwz r11,-29880(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f6150
	if (ctx.cr6.eq) goto loc_832F6150;
	// bl 0x82c10e98
	ctx.lr = 0x832F614C;
	sub_82C10E98(ctx, base);
	// b 0x832f6230
	goto loc_832F6230;
loc_832F6150:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-29880(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29880, ctx.r11.u32);
	// bl 0x82c10e98
	ctx.lr = 0x832F615C;
	sub_82C10E98(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r29,r10,-29908
	ctx.r29.s64 = ctx.r10.s64 + -29908;
	// lwz r10,-29916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29916);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f6184
	if (ctx.cr6.eq) goto loc_832F6184;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F6184:
	// bl 0x83301120
	ctx.lr = 0x832F6188;
	sub_83301120(ctx, base);
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r30,r11,-27072
	ctx.r30.s64 = ctx.r11.s64 + -27072;
	// stw r10,-29880(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29880, ctx.r10.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F619C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f61b0
	if (!ctx.cr6.eq) goto loc_832F61B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83305af8
	ctx.lr = 0x832F61B0;
	sub_83305AF8(ctx, base);
loc_832F61B0:
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// addi r11,r30,6272
	ctx.r11.s64 = ctx.r30.s64 + 6272;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f619c
	if (ctx.cr6.lt) goto loc_832F619C;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,-29880(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29880, ctx.r10.u32);
	// lwz r10,-29900(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29900);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f61e8
	if (ctx.cr6.eq) goto loc_832F61E8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F61E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F61E8:
	// bl 0x832ff2e0
	ctx.lr = 0x832F61EC;
	sub_832FF2E0(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,-29892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29892);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f620c
	if (ctx.cr6.eq) goto loc_832F620C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F620C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F620C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,-29880(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29880, ctx.r10.u32);
	// beq cr6,0x832f6230
	if (ctx.cr6.eq) goto loc_832F6230;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F6230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F6238"))) PPC_WEAK_FUNC(sub_832F6238);
PPC_FUNC_IMPL(__imp__sub_832F6238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F6240;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f6260
	if (!ctx.cr6.eq) goto loc_832F6260;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19012
	ctx.r3.s64 = ctx.r11.s64 + -19012;
	// bl 0x832ffa40
	ctx.lr = 0x832F625C;
	sub_832FFA40(ctx, base);
	// b 0x832f63d8
	goto loc_832F63D8;
loc_832F6260:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,-29868(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29868);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f6280
	if (ctx.cr6.eq) goto loc_832F6280;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F6280:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f6294
	if (!ctx.cr6.eq) goto loc_832F6294;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5c38
	ctx.lr = 0x832F6294;
	sub_832F5C38(ctx, base);
loc_832F6294:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f62ac
	if (ctx.cr6.eq) goto loc_832F62AC;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x832ff7c8
	ctx.lr = 0x832F62AC;
	sub_832FF7C8(ctx, base);
loc_832F62AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f62c0
	if (ctx.cr6.eq) goto loc_832F62C0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bl 0x83300090
	ctx.lr = 0x832F62C0;
	sub_83300090(ctx, base);
loc_832F62C0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832f62e8
	if (ctx.cr6.eq) goto loc_832F62E8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f45f8
	ctx.lr = 0x832F62E0;
	sub_832F45F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f50f8
	ctx.lr = 0x832F62E8;
	sub_832F50F8(ctx, base);
loc_832F62E8:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f62fc
	if (ctx.cr6.eq) goto loc_832F62FC;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// bl 0x832f04c8
	ctx.lr = 0x832F62FC;
	sub_832F04C8(ctx, base);
loc_832F62FC:
	// bl 0x82c10e98
	ctx.lr = 0x832F6300;
	sub_82C10E98(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f6320
	if (ctx.cr6.eq) goto loc_832F6320;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F6320:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x832f63ac
	if (!ctx.cr0.gt) goto loc_832F63AC;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
loc_832F6334:
	// lwz r3,-96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f6354
	if (ctx.cr6.eq) goto loc_832F6354;
	// stw r29,-96(r30)
	PPC_STORE_U32(ctx.r30.u32 + -96, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F6354:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f6374
	if (ctx.cr6.eq) goto loc_832F6374;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F6374:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f6394
	if (ctx.cr6.eq) goto loc_832F6394;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F6394:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f6334
	if (ctx.cr6.lt) goto loc_832F6334;
loc_832F63AC:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f63c0
	if (ctx.cr6.eq) goto loc_832F63C0;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// bl 0x83304c30
	ctx.lr = 0x832F63C0;
	sub_83304C30(ctx, base);
loc_832F63C0:
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F63D0;
	sub_833A2B30(ctx, base);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F63D8;
	sub_82C10E98(ctx, base);
loc_832F63D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F63E0"))) PPC_WEAK_FUNC(sub_832F63E0);
PPC_FUNC_IMPL(__imp__sub_832F63E0) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F63F8;
	sub_832F8758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5c38
	ctx.lr = 0x832F6400;
	sub_832F5C38(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F6404;
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

__attribute__((alias("__imp__sub_832F6418"))) PPC_WEAK_FUNC(sub_832F6418);
PPC_FUNC_IMPL(__imp__sub_832F6418) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6430;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f644c
	if (!ctx.cr6.eq) goto loc_832F644C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19620
	ctx.r3.s64 = ctx.r11.s64 + -19620;
	// bl 0x832ffa40
	ctx.lr = 0x832F6444;
	sub_832FFA40(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f6454
	goto loc_832F6454;
loc_832F644C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
loc_832F6454:
	// bl 0x832f8798
	ctx.lr = 0x832F6458;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F6470"))) PPC_WEAK_FUNC(sub_832F6470);
PPC_FUNC_IMPL(__imp__sub_832F6470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F6478;
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
	// bl 0x832f8758
	ctx.lr = 0x832F648C;
	sub_832F8758(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5d78
	ctx.lr = 0x832F649C;
	sub_832F5D78(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F64A0;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F64A8"))) PPC_WEAK_FUNC(sub_832F64A8);
PPC_FUNC_IMPL(__imp__sub_832F64A8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F64C0;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f64dc
	if (!ctx.cr6.eq) goto loc_832F64DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19540
	ctx.r3.s64 = ctx.r11.s64 + -19540;
	// bl 0x832ffa40
	ctx.lr = 0x832F64D4;
	sub_832FFA40(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f6500
	goto loc_832F6500;
loc_832F64DC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832f64fc
	if (ctx.cr6.lt) goto loc_832F64FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833007a8
	ctx.lr = 0x832F64F4;
	sub_833007A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832f6500
	goto loc_832F6500;
loc_832F64FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832F6500:
	// bl 0x832f8798
	ctx.lr = 0x832F6504;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F651C"))) PPC_WEAK_FUNC(sub_832F651C);
PPC_FUNC_IMPL(__imp__sub_832F651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6520"))) PPC_WEAK_FUNC(sub_832F6520);
PPC_FUNC_IMPL(__imp__sub_832F6520) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6538;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f6554
	if (!ctx.cr6.eq) goto loc_832F6554;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// bl 0x832ffa40
	ctx.lr = 0x832F654C;
	sub_832FFA40(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f6578
	goto loc_832F6578;
loc_832F6554:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832f6574
	if (ctx.cr6.lt) goto loc_832F6574;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833007b0
	ctx.lr = 0x832F656C;
	sub_833007B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832f6578
	goto loc_832F6578;
loc_832F6574:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832F6578:
	// bl 0x832f8798
	ctx.lr = 0x832F657C;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F6594"))) PPC_WEAK_FUNC(sub_832F6594);
PPC_FUNC_IMPL(__imp__sub_832F6594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6598"))) PPC_WEAK_FUNC(sub_832F6598);
PPC_FUNC_IMPL(__imp__sub_832F6598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F65A0;
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
	// bl 0x832f8758
	ctx.lr = 0x832F65B4;
	sub_832F8758(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6000
	ctx.lr = 0x832F65C4;
	sub_832F6000(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F65C8;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F65D0"))) PPC_WEAK_FUNC(sub_832F65D0);
PPC_FUNC_IMPL(__imp__sub_832F65D0) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F65F0;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f6608
	if (!ctx.cr6.eq) goto loc_832F6608;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19312
	ctx.r3.s64 = ctx.r11.s64 + -19312;
	// bl 0x832ffa40
	ctx.lr = 0x832F6604;
	sub_832FFA40(ctx, base);
	// b 0x832f6614
	goto loc_832F6614;
loc_832F6608:
	// addi r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 + 33;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r31,r11,r31
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32));
loc_832F6614:
	// bl 0x832f8798
	ctx.lr = 0x832F6618;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F6634"))) PPC_WEAK_FUNC(sub_832F6634);
PPC_FUNC_IMPL(__imp__sub_832F6634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6638"))) PPC_WEAK_FUNC(sub_832F6638);
PPC_FUNC_IMPL(__imp__sub_832F6638) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6658;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f6670
	if (!ctx.cr6.eq) goto loc_832F6670;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19268
	ctx.r3.s64 = ctx.r11.s64 + -19268;
	// bl 0x832ffa40
	ctx.lr = 0x832F666C;
	sub_832FFA40(ctx, base);
	// b 0x832f66a4
	goto loc_832F66A4;
loc_832F6670:
	// lbz r11,169(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// sth r30,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r30.u16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f6690
	if (!ctx.cr6.eq) goto loc_832F6690;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83300808
	ctx.lr = 0x832F6688;
	sub_83300808(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// b 0x832f6694
	goto loc_832F6694;
loc_832F6690:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F6694:
	// lha r10,64(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 64));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832ff440
	ctx.lr = 0x832F66A4;
	sub_832FF440(ctx, base);
loc_832F66A4:
	// bl 0x832f8798
	ctx.lr = 0x832F66A8;
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

__attribute__((alias("__imp__sub_832F66C0"))) PPC_WEAK_FUNC(sub_832F66C0);
PPC_FUNC_IMPL(__imp__sub_832F66C0) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F66D8;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f66f0
	if (!ctx.cr6.eq) goto loc_832F66F0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19224
	ctx.r3.s64 = ctx.r11.s64 + -19224;
	// bl 0x832ffa40
	ctx.lr = 0x832F66EC;
	sub_832FFA40(ctx, base);
	// b 0x832f66f4
	goto loc_832F66F4;
loc_832F66F0:
	// lha r31,64(r31)
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 64));
loc_832F66F4:
	// bl 0x832f8798
	ctx.lr = 0x832F66F8;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F6710"))) PPC_WEAK_FUNC(sub_832F6710);
PPC_FUNC_IMPL(__imp__sub_832F6710) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6728;
	sub_832F8758(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// stw r31,-29876(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29876, ctx.r31.u32);
	// stw r31,-29872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29872, ctx.r31.u32);
	// bl 0x832f8798
	ctx.lr = 0x832F673C;
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

__attribute__((alias("__imp__sub_832F6750"))) PPC_WEAK_FUNC(sub_832F6750);
PPC_FUNC_IMPL(__imp__sub_832F6750) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6770;
	sub_832F8758(ctx, base);
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// bl 0x832f8798
	ctx.lr = 0x832F6778;
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

__attribute__((alias("__imp__sub_832F6790"))) PPC_WEAK_FUNC(sub_832F6790);
PPC_FUNC_IMPL(__imp__sub_832F6790) {
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
	ctx.lr = 0x832F67A0;
	sub_832F8758(ctx, base);
	// bl 0x832f6128
	ctx.lr = 0x832F67A4;
	sub_832F6128(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F67A8;
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

__attribute__((alias("__imp__sub_832F67B8"))) PPC_WEAK_FUNC(sub_832F67B8);
PPC_FUNC_IMPL(__imp__sub_832F67B8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F67D0;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f67ec
	if (!ctx.cr6.eq) goto loc_832F67EC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19180
	ctx.r3.s64 = ctx.r11.s64 + -19180;
	// bl 0x832ffa40
	ctx.lr = 0x832F67E4;
	sub_832FFA40(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f67f0
	goto loc_832F67F0;
loc_832F67EC:
	// lha r31,96(r31)
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 96));
loc_832F67F0:
	// bl 0x832f8798
	ctx.lr = 0x832F67F4;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F680C"))) PPC_WEAK_FUNC(sub_832F680C);
PPC_FUNC_IMPL(__imp__sub_832F680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6810"))) PPC_WEAK_FUNC(sub_832F6810);
PPC_FUNC_IMPL(__imp__sub_832F6810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F6818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x832f8758
	ctx.lr = 0x832F6828;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f6840
	if (!ctx.cr6.eq) goto loc_832F6840;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19136
	ctx.r3.s64 = ctx.r11.s64 + -19136;
	// bl 0x832ffa40
	ctx.lr = 0x832F683C;
	sub_832FFA40(ctx, base);
	// b 0x832f68f0
	goto loc_832F68F0;
loc_832F6840:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f6854
	if (!ctx.cr6.eq) goto loc_832F6854;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832f686c
	goto loc_832F686C;
loc_832F6854:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832F686C:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x832f68ec
	if (ctx.cr6.eq) goto loc_832F68EC;
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f68ec
	if (!ctx.cr6.eq) goto loc_832F68EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x832f68ec
	if (!ctx.cr6.eq) goto loc_832F68EC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83112010
	ctx.lr = 0x832F6894;
	sub_83112010(ctx, base);
	// add r29,r3,r30
	ctx.r29.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833007e0
	ctx.lr = 0x832F68A0;
	sub_833007E0(ctx, base);
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r11,11,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// bl 0x83300800
	ctx.lr = 0x832F68B8;
	sub_83300800(ctx, base);
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// subf. r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x832f68d8
	if (ctx.cr0.gt) goto loc_832F68D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832f68e8
	goto loc_832F68E8;
loc_832F68D8:
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_832F68E8:
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_832F68EC:
	// stb r28,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r28.u8);
loc_832F68F0:
	// bl 0x832f8798
	ctx.lr = 0x832F68F4;
	sub_832F8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F68FC"))) PPC_WEAK_FUNC(sub_832F68FC);
PPC_FUNC_IMPL(__imp__sub_832F68FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6900"))) PPC_WEAK_FUNC(sub_832F6900);
PPC_FUNC_IMPL(__imp__sub_832F6900) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6920;
	sub_832F8758(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832ff608
	ctx.lr = 0x832F692C;
	sub_832FF608(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F6930;
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

__attribute__((alias("__imp__sub_832F6948"))) PPC_WEAK_FUNC(sub_832F6948);
PPC_FUNC_IMPL(__imp__sub_832F6948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F6950;
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
	// bl 0x832f8758
	ctx.lr = 0x832F6964;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f697c
	if (!ctx.cr6.eq) goto loc_832F697C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19092
	ctx.r3.s64 = ctx.r11.s64 + -19092;
	// bl 0x832ffa40
	ctx.lr = 0x832F6978;
	sub_832FFA40(ctx, base);
	// b 0x832f698c
	goto loc_832F698C;
loc_832F697C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832ff370
	ctx.lr = 0x832F698C;
	sub_832FF370(ctx, base);
loc_832F698C:
	// bl 0x832f8798
	ctx.lr = 0x832F6990;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F6998"))) PPC_WEAK_FUNC(sub_832F6998);
PPC_FUNC_IMPL(__imp__sub_832F6998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F69A0;
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
	// bl 0x832f8758
	ctx.lr = 0x832F69B4;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f69cc
	if (!ctx.cr6.eq) goto loc_832F69CC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-19052
	ctx.r3.s64 = ctx.r11.s64 + -19052;
	// bl 0x832ffa40
	ctx.lr = 0x832F69C8;
	sub_832FFA40(ctx, base);
	// b 0x832f69dc
	goto loc_832F69DC;
loc_832F69CC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832ff408
	ctx.lr = 0x832F69DC;
	sub_832FF408(ctx, base);
loc_832F69DC:
	// bl 0x832f8798
	ctx.lr = 0x832F69E0;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F69E8"))) PPC_WEAK_FUNC(sub_832F69E8);
PPC_FUNC_IMPL(__imp__sub_832F69E8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6A00;
	sub_832F8758(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83300120
	ctx.lr = 0x832F6A08;
	sub_83300120(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F6A0C;
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

__attribute__((alias("__imp__sub_832F6A20"))) PPC_WEAK_FUNC(sub_832F6A20);
PPC_FUNC_IMPL(__imp__sub_832F6A20) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6A40;
	sub_832F8758(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r31,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r31.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f6a58
	if (ctx.cr6.eq) goto loc_832F6A58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83300778
	ctx.lr = 0x832F6A58;
	sub_83300778(ctx, base);
loc_832F6A58:
	// bl 0x832f8798
	ctx.lr = 0x832F6A5C;
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

__attribute__((alias("__imp__sub_832F6A74"))) PPC_WEAK_FUNC(sub_832F6A74);
PPC_FUNC_IMPL(__imp__sub_832F6A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6A78"))) PPC_WEAK_FUNC(sub_832F6A78);
PPC_FUNC_IMPL(__imp__sub_832F6A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F6A80;
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
	// bl 0x832f8758
	ctx.lr = 0x832F6A94;
	sub_832F8758(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83300790
	ctx.lr = 0x832F6AA4;
	sub_83300790(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F6AA8;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F6AB0"))) PPC_WEAK_FUNC(sub_832F6AB0);
PPC_FUNC_IMPL(__imp__sub_832F6AB0) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6AD0;
	sub_832F8758(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83300788
	ctx.lr = 0x832F6ADC;
	sub_83300788(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F6AE0;
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

__attribute__((alias("__imp__sub_832F6AF8"))) PPC_WEAK_FUNC(sub_832F6AF8);
PPC_FUNC_IMPL(__imp__sub_832F6AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F6B00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,63
	ctx.r11.s64 = ctx.r4.s64 + 63;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r29,r11,0,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ble cr6,0x832f6dac
	if (!ctx.cr6.gt) goto loc_832F6DAC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832f6dac
	if (ctx.cr6.eq) goto loc_832F6DAC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x832f6dac
	if (ctx.cr6.lt) goto loc_832F6DAC;
	// lis r10,-31814
	ctx.r10.s64 = -2084962304;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r10,-27072
	ctx.r10.s64 = ctx.r10.s64 + -27072;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832F6B44:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x832f6b64
	if (ctx.cr0.eq) goto loc_832F6B64;
	// addi r9,r9,196
	ctx.r9.s64 = ctx.r9.s64 + 196;
	// addi r8,r10,6272
	ctx.r8.s64 = ctx.r10.s64 + 6272;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832f6b44
	if (ctx.cr6.lt) goto loc_832F6B44;
loc_832F6B64:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x832f6b78
	if (!ctx.cr6.eq) goto loc_832F6B78;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18840
	ctx.r3.s64 = ctx.r11.s64 + -18840;
	// b 0x832f6db4
	goto loc_832F6DB4;
loc_832F6B78:
	// mulli r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 * 196;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F6B90;
	sub_833A2B30(ctx, base);
	// mulli r11,r30,16576
	ctx.r11.s64 = ctx.r30.s64 * 16576;
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r10,-292
	ctx.r10.s64 = ctx.r10.s64 + -292;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// srawi r11,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 11;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm. r4,r11,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// bge 0x832f6bc8
	if (!ctx.cr0.lt) goto loc_832F6BC8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18888
	ctx.r3.s64 = ctx.r11.s64 + -18888;
	// b 0x832f6db4
	goto loc_832F6DB4;
loc_832F6BC8:
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// li r10,8288
	ctx.r10.s64 = 8288;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bl 0x832ee4c0
	ctx.lr = 0x832F6BFC;
	sub_832EE4C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x832f6c14
	if (!ctx.cr0.eq) goto loc_832F6C14;
loc_832F6C08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6238
	ctx.lr = 0x832F6C10;
	sub_832F6238(ctx, base);
	// b 0x832f6db8
	goto loc_832F6DB8;
loc_832F6C14:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832f4d90
	ctx.lr = 0x832F6C1C;
	sub_832F4D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq 0x832f6c08
	if (ctx.cr0.eq) goto loc_832F6C08;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x832f6c7c
	if (!ctx.cr6.gt) goto loc_832F6C7C;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
loc_832F6C38:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mullw r10,r9,r29
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832ee4c0
	ctx.lr = 0x832F6C60;
	sub_832EE4C0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832f6c08
	if (ctx.cr0.eq) goto loc_832F6C08;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x832f6c38
	if (ctx.cr6.lt) goto loc_832F6C38;
loc_832F6C7C:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x833008f0
	ctx.lr = 0x832F6C90;
	sub_833008F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x832f6c08
	if (ctx.cr0.eq) goto loc_832F6C08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ff0d0
	ctx.lr = 0x832F6CA8;
	sub_832FF0D0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832f6c08
	if (ctx.cr0.eq) goto loc_832F6C08;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f0058
	ctx.lr = 0x832F6CBC;
	sub_832F0058(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832f6c08
	if (ctx.cr0.eq) goto loc_832F6C08;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832f0098
	ctx.lr = 0x832F6CD0;
	sub_832F0098(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F6CD4;
	sub_82C10E98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// sth r27,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r27.u16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f0,-18068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18068);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-29876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29876);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// ble cr6,0x832f6d4c
	if (!ctx.cr6.gt) goto loc_832F6D4C;
	// addi r11,r31,66
	ctx.r11.s64 = ctx.r31.s64 + 66;
	// li r10,-128
	ctx.r10.s64 = -128;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x832f6d4c
	if (ctx.cr0.eq) goto loc_832F6D4C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_832F6D44:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x832f6d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F6D44;
loc_832F6D4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// sth r27,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r27.u16);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// sth r27,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r27.u16);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// sth r27,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r27.u16);
	// sth r27,106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 106, ctx.r27.u16);
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r27,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r27.u8);
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// stb r27,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r27.u8);
	// beq cr6,0x832f6d98
	if (ctx.cr6.eq) goto loc_832F6D98;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83300778
	ctx.lr = 0x832F6D98;
	sub_83300778(ctx, base);
loc_832F6D98:
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x82c10e98
	ctx.lr = 0x832F6DA4;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832f6dbc
	goto loc_832F6DBC;
loc_832F6DAC:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18928
	ctx.r3.s64 = ctx.r11.s64 + -18928;
loc_832F6DB4:
	// bl 0x832ffa40
	ctx.lr = 0x832F6DB8;
	sub_832FFA40(ctx, base);
loc_832F6DB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F6DBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F6DC4"))) PPC_WEAK_FUNC(sub_832F6DC4);
PPC_FUNC_IMPL(__imp__sub_832F6DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6DC8"))) PPC_WEAK_FUNC(sub_832F6DC8);
PPC_FUNC_IMPL(__imp__sub_832F6DC8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F6DE0;
	sub_832F8758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6238
	ctx.lr = 0x832F6DE8;
	sub_832F6238(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F6DEC;
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

__attribute__((alias("__imp__sub_832F6E00"))) PPC_WEAK_FUNC(sub_832F6E00);
PPC_FUNC_IMPL(__imp__sub_832F6E00) {
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
	ctx.lr = 0x832F6E18;
	sub_832F8758(ctx, base);
	// lis r11,-31814
	ctx.r11.s64 = -2084962304;
	// addi r30,r11,-27072
	ctx.r30.s64 = ctx.r11.s64 + -27072;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F6E24:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832f6e38
	if (!ctx.cr6.eq) goto loc_832F6E38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6238
	ctx.lr = 0x832F6E38;
	sub_832F6238(ctx, base);
loc_832F6E38:
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// addi r11,r30,6272
	ctx.r11.s64 = ctx.r30.s64 + 6272;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f6e24
	if (ctx.cr6.lt) goto loc_832F6E24;
	// bl 0x832f8798
	ctx.lr = 0x832F6E4C;
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

__attribute__((alias("__imp__sub_832F6E64"))) PPC_WEAK_FUNC(sub_832F6E64);
PPC_FUNC_IMPL(__imp__sub_832F6E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6E68"))) PPC_WEAK_FUNC(sub_832F6E68);
PPC_FUNC_IMPL(__imp__sub_832F6E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F6E70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ble 0x832f6ebc
	if (!ctx.cr0.gt) goto loc_832F6EBC;
	// addi r28,r3,20
	ctx.r28.s64 = ctx.r3.s64 + 20;
loc_832F6E94:
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F6EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f6e94
	if (ctx.cr6.lt) goto loc_832F6E94;
loc_832F6EBC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83300100
	ctx.lr = 0x832F6EC8;
	sub_83300100(ctx, base);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83300128
	ctx.lr = 0x832F6ED4;
	sub_83300128(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stb r29,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r29.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// lwz r11,-31140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31140);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x832f6f28
	if (!ctx.cr6.eq) goto loc_832F6F28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6810
	ctx.lr = 0x832F6F28;
	sub_832F6810(ctx, base);
loc_832F6F28:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f6f38
	if (ctx.cr6.eq) goto loc_832F6F38;
	// bl 0x83304c78
	ctx.lr = 0x832F6F38;
	sub_83304C78(ctx, base);
loc_832F6F38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F6F40"))) PPC_WEAK_FUNC(sub_832F6F40);
PPC_FUNC_IMPL(__imp__sub_832F6F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F6F48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,60(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 60));
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lha r10,62(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 62));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r5,r11,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r4,r10,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x832f4d20
	ctx.lr = 0x832F6F78;
	sub_832F4D20(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,-29324(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29324);
	// bl 0x832f4628
	ctx.lr = 0x832F6F88;
	sub_832F4628(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832f45f8
	ctx.lr = 0x832F6F98;
	sub_832F45F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832f4550
	ctx.lr = 0x832F6FA4;
	sub_832F4550(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832f4ec8
	ctx.lr = 0x832F6FAC;
	sub_832F4EC8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832f5028
	ctx.lr = 0x832F6FB4;
	sub_832F5028(ctx, base);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r7,r11,11,52
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832f4de0
	ctx.lr = 0x832F6FD0;
	sub_832F4DE0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832f4e48
	ctx.lr = 0x832F6FD8;
	sub_832F4E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f6e68
	ctx.lr = 0x832F6FE4;
	sub_832F6E68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F6FEC"))) PPC_WEAK_FUNC(sub_832F6FEC);
PPC_FUNC_IMPL(__imp__sub_832F6FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F6FF0"))) PPC_WEAK_FUNC(sub_832F6FF0);
PPC_FUNC_IMPL(__imp__sub_832F6FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F6FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832f8758
	ctx.lr = 0x832F7008;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f7020
	if (!ctx.cr6.eq) goto loc_832F7020;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18972
	ctx.r3.s64 = ctx.r11.s64 + -18972;
	// bl 0x832ffa40
	ctx.lr = 0x832F701C;
	sub_832FFA40(ctx, base);
	// b 0x832f709c
	goto loc_832F709C;
loc_832F7020:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,-29872(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29872, ctx.r30.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833000f0
	ctx.lr = 0x832F7038;
	sub_833000F0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x832f709c
	if (!ctx.cr6.eq) goto loc_832F709C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833007a8
	ctx.lr = 0x832F7048;
	sub_833007A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833007d0
	ctx.lr = 0x832F7054;
	sub_833007D0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// divw r11,r29,r11
	ctx.r11.s32 = ctx.r29.s32 / ctx.r11.s32;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// bgt 0x832f7070
	if (ctx.cr0.gt) goto loc_832F7070;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
loc_832F7070:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833007c0
	ctx.lr = 0x832F707C;
	sub_833007C0(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// bl 0x83300110
	ctx.lr = 0x832F709C;
	sub_83300110(ctx, base);
loc_832F709C:
	// bl 0x832f8798
	ctx.lr = 0x832F70A0;
	sub_832F8798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F70A8"))) PPC_WEAK_FUNC(sub_832F70A8);
PPC_FUNC_IMPL(__imp__sub_832F70A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F70B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832f8758
	ctx.lr = 0x832F70C0;
	sub_832F8758(ctx, base);
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832f70d4
	if (!ctx.cr0.eq) goto loc_832F70D4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832f7174
	goto loc_832F7174;
loc_832F70D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d6da88
	ctx.lr = 0x832F70E0;
	sub_82D6DA88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832f8758
	ctx.lr = 0x832F70E8;
	sub_832F8758(ctx, base);
	// bl 0x832f6128
	ctx.lr = 0x832F70EC;
	sub_832F6128(ctx, base);
	// bl 0x832f8798
	ctx.lr = 0x832F70F0;
	sub_832F8798(ctx, base);
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,-29884(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29884);
	// stw r11,-29884(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29884, ctx.r11.u32);
	// bl 0x832f5d78
	ctx.lr = 0x832F7110;
	sub_832F5D78(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lwa r8,84(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// li r10,156
	ctx.r10.s64 = 156;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// stw r29,-29884(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29884, ctx.r29.u32);
	// lwa r11,-17436(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + -17436));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f0.u32);
	// lwz r11,-31140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31140);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_832F7174:
	// bl 0x832f8798
	ctx.lr = 0x832F7178;
	sub_832F8798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7184"))) PPC_WEAK_FUNC(sub_832F7184);
PPC_FUNC_IMPL(__imp__sub_832F7184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7188"))) PPC_WEAK_FUNC(sub_832F7188);
PPC_FUNC_IMPL(__imp__sub_832F7188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F7190;
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
	// bl 0x832f8758
	ctx.lr = 0x832F71A4;
	sub_832F8758(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6af8
	ctx.lr = 0x832F71B4;
	sub_832F6AF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f8798
	ctx.lr = 0x832F71BC;
	sub_832F8798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F71C8"))) PPC_WEAK_FUNC(sub_832F71C8);
PPC_FUNC_IMPL(__imp__sub_832F71C8) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F71E8;
	sub_832F8758(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832f6af8
	ctx.lr = 0x832F71F8;
	sub_832F6AF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832f8798
	ctx.lr = 0x832F7200;
	sub_832F8798(ctx, base);
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

__attribute__((alias("__imp__sub_832F721C"))) PPC_WEAK_FUNC(sub_832F721C);
PPC_FUNC_IMPL(__imp__sub_832F721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7220"))) PPC_WEAK_FUNC(sub_832F7220);
PPC_FUNC_IMPL(__imp__sub_832F7220) {
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
	// bl 0x832f8758
	ctx.lr = 0x832F7240;
	sub_832F8758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832f7294
	if (ctx.cr6.eq) goto loc_832F7294;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832f7294
	if (ctx.cr6.eq) goto loc_832F7294;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f5c38
	ctx.lr = 0x832F7258;
	sub_832F5C38(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832F725C;
	sub_82C10E98(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6e68
	ctx.lr = 0x832F7270;
	sub_832F6E68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// beq cr6,0x832f728c
	if (ctx.cr6.eq) goto loc_832F728C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83300778
	ctx.lr = 0x832F728C;
	sub_83300778(ctx, base);
loc_832F728C:
	// bl 0x82c10e98
	ctx.lr = 0x832F7290;
	sub_82C10E98(ctx, base);
	// b 0x832f72a0
	goto loc_832F72A0;
loc_832F7294:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18796
	ctx.r3.s64 = ctx.r11.s64 + -18796;
	// bl 0x832ffa40
	ctx.lr = 0x832F72A0;
	sub_832FFA40(ctx, base);
loc_832F72A0:
	// bl 0x832f8798
	ctx.lr = 0x832F72A4;
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

__attribute__((alias("__imp__sub_832F72BC"))) PPC_WEAK_FUNC(sub_832F72BC);
PPC_FUNC_IMPL(__imp__sub_832F72BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F72C0"))) PPC_WEAK_FUNC(sub_832F72C0);
PPC_FUNC_IMPL(__imp__sub_832F72C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-29836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-29836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29836, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F72D4"))) PPC_WEAK_FUNC(sub_832F72D4);
PPC_FUNC_IMPL(__imp__sub_832F72D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F72D8"))) PPC_WEAK_FUNC(sub_832F72D8);
PPC_FUNC_IMPL(__imp__sub_832F72D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-29836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29836);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-29836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29836, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F72EC"))) PPC_WEAK_FUNC(sub_832F72EC);
PPC_FUNC_IMPL(__imp__sub_832F72EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F72F0"))) PPC_WEAK_FUNC(sub_832F72F0);
PPC_FUNC_IMPL(__imp__sub_832F72F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832F72F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-29832
	ctx.r30.s64 = ctx.r11.s64 + -29832;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f7320
	if (!ctx.cr6.eq) goto loc_832F7320;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f7388
	goto loc_832F7388;
loc_832F7320:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832f7374
	if (ctx.cr0.eq) goto loc_832F7374;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832f7368
	if (!ctx.cr6.gt) goto loc_832F7368;
loc_832F733C:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a31f0
	ctx.lr = 0x832F734C;
	sub_833A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f736c
	if (ctx.cr0.eq) goto loc_832F736C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f733c
	if (ctx.cr6.lt) goto loc_832F733C;
loc_832F7368:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832F736C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f737c
	if (!ctx.cr6.eq) goto loc_832F737C;
loc_832F7374:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x832f7388
	goto loc_832F7388;
loc_832F737C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_832F7388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7390"))) PPC_WEAK_FUNC(sub_832F7390);
PPC_FUNC_IMPL(__imp__sub_832F7390) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r31,r11,-29560
	ctx.r31.s64 = ctx.r11.s64 + -29560;
	// addi r10,r10,-18520
	ctx.r10.s64 = ctx.r10.s64 + -18520;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f73d8
	if (!ctx.cr6.eq) goto loc_832F73D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x832f3f50
	ctx.lr = 0x832F73D4;
	sub_832F3F50(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_832F73D8:
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

__attribute__((alias("__imp__sub_832F73EC"))) PPC_WEAK_FUNC(sub_832F73EC);
PPC_FUNC_IMPL(__imp__sub_832F73EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F73F0"))) PPC_WEAK_FUNC(sub_832F73F0);
PPC_FUNC_IMPL(__imp__sub_832F73F0) {
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
	// addi r31,r11,-29524
	ctx.r31.s64 = ctx.r11.s64 + -29524;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x832f7430
	if (!ctx.cr0.eq) goto loc_832F7430;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f7430
	if (ctx.cr6.eq) goto loc_832F7430;
	// bl 0x832f4030
	ctx.lr = 0x832F7428;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832F7430:
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

__attribute__((alias("__imp__sub_832F7444"))) PPC_WEAK_FUNC(sub_832F7444);
PPC_FUNC_IMPL(__imp__sub_832F7444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7448"))) PPC_WEAK_FUNC(sub_832F7448);
PPC_FUNC_IMPL(__imp__sub_832F7448) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// b 0x832f74d4
	goto loc_832F74D4;
loc_832F7470:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x832f7498
	if (ctx.cr6.eq) goto loc_832F7498;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82da0be8
	ctx.lr = 0x832F7488;
	sub_82DA0BE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x832f7498
	if (ctx.cr6.eq) goto loc_832F7498;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_832F7498:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f40c0
	ctx.lr = 0x832F74A0;
	sub_832F40C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f74cc
	if (!ctx.cr6.eq) goto loc_832F74CC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f74c4
	if (ctx.cr6.eq) goto loc_832F74C4;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F74C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F74C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832F74CC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f4158
	ctx.lr = 0x832F74D4;
	sub_832F4158(ctx, base);
loc_832F74D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82da0950
	ctx.lr = 0x832F74E0;
	sub_82DA0950(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x833be4a0
	ctx.lr = 0x832F74E8;
	sub_833BE4A0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f7470
	if (ctx.cr6.eq) goto loc_832F7470;
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

__attribute__((alias("__imp__sub_832F7510"))) PPC_WEAK_FUNC(sub_832F7510);
PPC_FUNC_IMPL(__imp__sub_832F7510) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f753c
	if (!ctx.cr6.eq) goto loc_832F753C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
loc_832F7530:
	// bl 0x832f8608
	ctx.lr = 0x832F7534;
	sub_832F8608(ctx, base);
loc_832F7534:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f7648
	goto loc_832F7648;
loc_832F753C:
	// cmplwi cr6,r4,88
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 88, ctx.xer);
	// bge cr6,0x832f7550
	if (!ctx.cr6.lt) goto loc_832F7550;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18252
	ctx.r3.s64 = ctx.r11.s64 + -18252;
	// b 0x832f7530
	goto loc_832F7530;
loc_832F7550:
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// li r5,84
	ctx.r5.s64 = 84;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F7568;
	sub_833A2B30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d9f968
	ctx.lr = 0x832F757C;
	sub_82D9F968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne 0x832f7594
	if (!ctx.cr0.eq) goto loc_832F7594;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18296
	ctx.r3.s64 = ctx.r11.s64 + -18296;
	// b 0x832f7530
	goto loc_832F7530;
loc_832F7594:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x832f3f50
	ctx.lr = 0x832F75A0;
	sub_832F3F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x832f75c4
	if (!ctx.cr0.eq) goto loc_832F75C4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// bl 0x832f8608
	ctx.lr = 0x832F75B8;
	sub_832F8608(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9f098
	ctx.lr = 0x832F75C0;
	sub_82D9F098(ctx, base);
	// b 0x832f7534
	goto loc_832F7534;
loc_832F75C4:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,29768
	ctx.r5.s64 = ctx.r11.s64 + 29768;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833be0d0
	ctx.lr = 0x832F75E4;
	sub_833BE0D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne 0x832f7618
	if (!ctx.cr0.eq) goto loc_832F7618;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18384
	ctx.r3.s64 = ctx.r11.s64 + -18384;
	// bl 0x832f8608
	ctx.lr = 0x832F75FC;
	sub_832F8608(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9f098
	ctx.lr = 0x832F7604;
	sub_82D9F098(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f4030
	ctx.lr = 0x832F760C;
	sub_832F4030(ctx, base);
	// b 0x832f7534
	goto loc_832F7534;
loc_832F7610:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d9f510
	ctx.lr = 0x832F7618;
	sub_82D9F510(ctx, base);
loc_832F7618:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f7610
	if (ctx.cr6.eq) goto loc_832F7610;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82da0a98
	ctx.lr = 0x832F762C;
	sub_82DA0A98(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_832F7648:
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

__attribute__((alias("__imp__sub_832F765C"))) PPC_WEAK_FUNC(sub_832F765C);
PPC_FUNC_IMPL(__imp__sub_832F765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7660"))) PPC_WEAK_FUNC(sub_832F7660);
PPC_FUNC_IMPL(__imp__sub_832F7660) {
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
	// lwz r3,-29524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F7684;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f76a0
	if (!ctx.cr6.eq) goto loc_832F76A0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
loc_832F7694:
	// bl 0x832f8608
	ctx.lr = 0x832F7698;
	sub_832F8608(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f76d0
	goto loc_832F76D0;
loc_832F76A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f76b8
	if (!ctx.cr6.eq) goto loc_832F76B8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// b 0x832f7694
	goto loc_832F7694;
loc_832F76B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f76cc
	if (!ctx.cr6.eq) goto loc_832F76CC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9fb20
	ctx.lr = 0x832F76CC;
	sub_82D9FB20(ctx, base);
loc_832F76CC:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_832F76D0:
	// lwz r3,-29524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29524);
	// bl 0x832f4158
	ctx.lr = 0x832F76D8;
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

__attribute__((alias("__imp__sub_832F76F4"))) PPC_WEAK_FUNC(sub_832F76F4);
PPC_FUNC_IMPL(__imp__sub_832F76F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F76F8"))) PPC_WEAK_FUNC(sub_832F76F8);
PPC_FUNC_IMPL(__imp__sub_832F76F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F7700;
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
	// lwz r3,-29524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F771C;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f7738
	if (!ctx.cr6.eq) goto loc_832F7738;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
loc_832F772C:
	// bl 0x832f8608
	ctx.lr = 0x832F7730;
	sub_832F8608(ctx, base);
loc_832F7730:
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832f77ac
	goto loc_832F77AC;
loc_832F7738:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7750
	if (!ctx.cr6.eq) goto loc_832F7750;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// b 0x832f772c
	goto loc_832F772C;
loc_832F7750:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7730
	if (!ctx.cr6.eq) goto loc_832F7730;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f40c0
	ctx.lr = 0x832F7764;
	sub_832F40C0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x832f7794
	if (!ctx.cr6.eq) goto loc_832F7794;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_832F7794:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f4158
	ctx.lr = 0x832F77A0;
	sub_832F4158(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9fb20
	ctx.lr = 0x832F77A8;
	sub_82D9FB20(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832F77AC:
	// lwz r3,-29524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29524);
	// bl 0x832f4158
	ctx.lr = 0x832F77B4;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F77C0"))) PPC_WEAK_FUNC(sub_832F77C0);
PPC_FUNC_IMPL(__imp__sub_832F77C0) {
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
	// bne cr6,0x832f77ec
	if (!ctx.cr6.eq) goto loc_832F77EC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
loc_832F77E4:
	// bl 0x832f8608
	ctx.lr = 0x832F77E8;
	sub_832F8608(ctx, base);
	// b 0x832f789c
	goto loc_832F789C;
loc_832F77EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7804
	if (!ctx.cr6.eq) goto loc_832F7804;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// b 0x832f77e4
	goto loc_832F77E4;
loc_832F7804:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x832f789c
	if (!ctx.cr6.eq) goto loc_832F789C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f789c
	if (ctx.cr6.eq) goto loc_832F789C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9fb20
	ctx.lr = 0x832F7824;
	sub_82D9FB20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7840
	if (!ctx.cr6.eq) goto loc_832F7840;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// bl 0x832f8608
	ctx.lr = 0x832F783C;
	sub_832F8608(ctx, base);
	// b 0x832f7860
	goto loc_832F7860;
loc_832F7840:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f7854
	if (!ctx.cr6.eq) goto loc_832F7854;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9fb20
	ctx.lr = 0x832F7854;
	sub_82D9FB20(ctx, base);
loc_832F7854:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f789c
	if (ctx.cr6.eq) goto loc_832F789C;
loc_832F7860:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f40c0
	ctx.lr = 0x832F7868;
	sub_832F40C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f7894
	if (!ctx.cr6.eq) goto loc_832F7894;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f788c
	if (ctx.cr6.eq) goto loc_832F788C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832F788C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832F788C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832F7894:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832f4158
	ctx.lr = 0x832F789C;
	sub_832F4158(ctx, base);
loc_832F789C:
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

__attribute__((alias("__imp__sub_832F78B0"))) PPC_WEAK_FUNC(sub_832F78B0);
PPC_FUNC_IMPL(__imp__sub_832F78B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F78B8;
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
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F78D0;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f78e8
	if (!ctx.cr6.eq) goto loc_832F78E8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
loc_832F78E0:
	// bl 0x832f8608
	ctx.lr = 0x832F78E4;
	sub_832F8608(ctx, base);
	// b 0x832f7928
	goto loc_832F7928;
loc_832F78E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7900
	if (!ctx.cr6.eq) goto loc_832F7900;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// b 0x832f78e0
	goto loc_832F78E0;
loc_832F7900:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x832f7914
	if (ctx.cr6.eq) goto loc_832F7914;
loc_832F790C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x832f792c
	goto loc_832F792C;
loc_832F7914:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f790c
	if (ctx.cr6.eq) goto loc_832F790C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9fb20
	ctx.lr = 0x832F7928;
	sub_82D9FB20(ctx, base);
loc_832F7928:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832F792C:
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f4158
	ctx.lr = 0x832F7934;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7940"))) PPC_WEAK_FUNC(sub_832F7940);
PPC_FUNC_IMPL(__imp__sub_832F7940) {
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
	// lwz r3,-29524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F7964;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f7980
	if (!ctx.cr6.eq) goto loc_832F7980;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
loc_832F7974:
	// bl 0x832f8608
	ctx.lr = 0x832F7978;
	sub_832F8608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832f799c
	goto loc_832F799C;
loc_832F7980:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7998
	if (!ctx.cr6.eq) goto loc_832F7998;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// b 0x832f7974
	goto loc_832F7974;
loc_832F7998:
	// lwz r31,72(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
loc_832F799C:
	// lwz r3,-29524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29524);
	// bl 0x832f4158
	ctx.lr = 0x832F79A4;
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

__attribute__((alias("__imp__sub_832F79C0"))) PPC_WEAK_FUNC(sub_832F79C0);
PPC_FUNC_IMPL(__imp__sub_832F79C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F79C8;
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
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F79E0;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f79f8
	if (!ctx.cr6.eq) goto loc_832F79F8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
loc_832F79F0:
	// bl 0x832f8608
	ctx.lr = 0x832F79F4;
	sub_832F8608(ctx, base);
	// b 0x832f7a34
	goto loc_832F7A34;
loc_832F79F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7a10
	if (!ctx.cr6.eq) goto loc_832F7A10;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// b 0x832f79f0
	goto loc_832F79F0;
loc_832F7A10:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x832f7a34
	if (ctx.cr6.eq) goto loc_832F7A34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82da0a18
	ctx.lr = 0x832F7A28;
	sub_82DA0A18(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82da0a98
	ctx.lr = 0x832F7A30;
	sub_82DA0A98(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
loc_832F7A34:
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f4158
	ctx.lr = 0x832F7A3C;
	sub_832F4158(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7A44"))) PPC_WEAK_FUNC(sub_832F7A44);
PPC_FUNC_IMPL(__imp__sub_832F7A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7A48"))) PPC_WEAK_FUNC(sub_832F7A48);
PPC_FUNC_IMPL(__imp__sub_832F7A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F7A50;
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
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F7A68;
	sub_832F40C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f7a80
	if (!ctx.cr6.eq) goto loc_832F7A80;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
loc_832F7A78:
	// bl 0x832f8608
	ctx.lr = 0x832F7A7C;
	sub_832F8608(ctx, base);
	// b 0x832f7ab8
	goto loc_832F7AB8;
loc_832F7A80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7a98
	if (!ctx.cr6.eq) goto loc_832F7A98;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// b 0x832f7a78
	goto loc_832F7A78;
loc_832F7A98:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832f7ab8
	if (ctx.cr6.eq) goto loc_832F7AB8;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9fb20
	ctx.lr = 0x832F7AB0;
	sub_82D9FB20(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d9f510
	ctx.lr = 0x832F7AB8;
	sub_82D9F510(ctx, base);
loc_832F7AB8:
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f4158
	ctx.lr = 0x832F7AC0;
	sub_832F4158(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7AC8"))) PPC_WEAK_FUNC(sub_832F7AC8);
PPC_FUNC_IMPL(__imp__sub_832F7AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F7AD0;
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
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F7AE8;
	sub_832F40C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f7510
	ctx.lr = 0x832F7AF4;
	sub_832F7510(ctx, base);
	// lwz r11,-29524(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832f4158
	ctx.lr = 0x832F7B04;
	sub_832F4158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7B10"))) PPC_WEAK_FUNC(sub_832F7B10);
PPC_FUNC_IMPL(__imp__sub_832F7B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F7B18;
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
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F7B30;
	sub_832F40C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f77c0
	ctx.lr = 0x832F7B3C;
	sub_832F77C0(ctx, base);
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f4158
	ctx.lr = 0x832F7B44;
	sub_832F4158(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7B4C"))) PPC_WEAK_FUNC(sub_832F7B4C);
PPC_FUNC_IMPL(__imp__sub_832F7B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7B50"))) PPC_WEAK_FUNC(sub_832F7B50);
PPC_FUNC_IMPL(__imp__sub_832F7B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F7B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31823
	ctx.r29.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f40c0
	ctx.lr = 0x832F7B6C;
	sub_832F40C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f7b84
	if (ctx.cr6.eq) goto loc_832F7B84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x832f77c0
	ctx.lr = 0x832F7B84;
	sub_832F77C0(ctx, base);
loc_832F7B84:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x832f7ba0
	goto loc_832F7BA0;
loc_832F7B8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x832f7bc0
	if (!ctx.cr6.eq) goto loc_832F7BC0;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d9f510
	ctx.lr = 0x832F7BA0;
	sub_82D9F510(ctx, base);
loc_832F7BA0:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d9fb20
	ctx.lr = 0x832F7BAC;
	sub_82D9FB20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82da0b58
	ctx.lr = 0x832F7BB8;
	sub_82DA0B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f7b8c
	if (!ctx.cr0.eq) goto loc_832F7B8C;
loc_832F7BC0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82da0950
	ctx.lr = 0x832F7BCC;
	sub_82DA0950(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x833be4a0
	ctx.lr = 0x832F7BD4;
	sub_833BE4A0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f7bec
	if (ctx.cr6.eq) goto loc_832F7BEC;
	// bl 0x82d9f098
	ctx.lr = 0x832F7BE8;
	sub_82D9F098(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_832F7BEC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f7c00
	if (ctx.cr6.eq) goto loc_832F7C00;
	// bl 0x832f4030
	ctx.lr = 0x832F7BFC;
	sub_832F4030(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_832F7C00:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f7c14
	if (ctx.cr6.eq) goto loc_832F7C14;
	// bl 0x82d9f098
	ctx.lr = 0x832F7C10;
	sub_82D9F098(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_832F7C14:
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F7C24;
	sub_833A2B30(ctx, base);
	// lwz r3,-29524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29524);
	// bl 0x832f4158
	ctx.lr = 0x832F7C2C;
	sub_832F4158(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7C34"))) PPC_WEAK_FUNC(sub_832F7C34);
PPC_FUNC_IMPL(__imp__sub_832F7C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7C38"))) PPC_WEAK_FUNC(sub_832F7C38);
PPC_FUNC_IMPL(__imp__sub_832F7C38) {
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
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-29472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29472);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-29472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29472, ctx.r11.u32);
	// lwz r11,-29472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29472);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f7c9c
	if (!ctx.cr6.eq) goto loc_832F7C9C;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r9,-29516
	ctx.r31.s64 = ctx.r9.s64 + -29516;
	// stw r10,-29480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29480, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3f50
	ctx.lr = 0x832F7C84;
	sub_832F3F50(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832f7c9c
	if (!ctx.cr0.eq) goto loc_832F7C9C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18148
	ctx.r3.s64 = ctx.r11.s64 + -18148;
	// bl 0x832f8608
	ctx.lr = 0x832F7C9C;
	sub_832F8608(ctx, base);
loc_832F7C9C:
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

__attribute__((alias("__imp__sub_832F7CB0"))) PPC_WEAK_FUNC(sub_832F7CB0);
PPC_FUNC_IMPL(__imp__sub_832F7CB0) {
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
	// addi r31,r11,-29472
	ctx.r31.s64 = ctx.r11.s64 + -29472;
	// lwz r11,-29472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29472);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f7d04
	if (!ctx.cr6.eq) goto loc_832F7D04;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,-29480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29480, ctx.r10.u32);
	// beq cr6,0x832f7d04
	if (ctx.cr6.eq) goto loc_832F7D04;
	// bl 0x832f4030
	ctx.lr = 0x832F7CFC;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_832F7D04:
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

__attribute__((alias("__imp__sub_832F7D18"))) PPC_WEAK_FUNC(sub_832F7D18);
PPC_FUNC_IMPL(__imp__sub_832F7D18) {
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
	// lwz r3,-29484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29484);
	// bl 0x832f40c0
	ctx.lr = 0x832F7D30;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f7d44
	if (!ctx.cr0.lt) goto loc_832F7D44;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18096
	ctx.r3.s64 = ctx.r11.s64 + -18096;
	// bl 0x832f8608
	ctx.lr = 0x832F7D44;
	sub_832F8608(ctx, base);
loc_832F7D44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F7D54"))) PPC_WEAK_FUNC(sub_832F7D54);
PPC_FUNC_IMPL(__imp__sub_832F7D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7D58"))) PPC_WEAK_FUNC(sub_832F7D58);
PPC_FUNC_IMPL(__imp__sub_832F7D58) {
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
	// lwz r3,-29484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29484);
	// bl 0x832f4158
	ctx.lr = 0x832F7D70;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f7d84
	if (!ctx.cr0.lt) goto loc_832F7D84;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-18000
	ctx.r3.s64 = ctx.r11.s64 + -18000;
	// bl 0x832f8608
	ctx.lr = 0x832F7D84;
	sub_832F8608(ctx, base);
loc_832F7D84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F7D94"))) PPC_WEAK_FUNC(sub_832F7D94);
PPC_FUNC_IMPL(__imp__sub_832F7D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7D98"))) PPC_WEAK_FUNC(sub_832F7D98);
PPC_FUNC_IMPL(__imp__sub_832F7D98) {
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
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x832f7ddc
	if (!ctx.cr6.gt) goto loc_832F7DDC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17796
	ctx.r3.s64 = ctx.r11.s64 + -17796;
	// bl 0x832f8608
	ctx.lr = 0x832F7DD4;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f7e30
	goto loc_832F7E30;
loc_832F7DDC:
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833bf1a8
	ctx.lr = 0x832F7DF8;
	sub_833BF1A8(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832f7e14
	if (!ctx.cr6.eq) goto loc_832F7E14;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17836
	ctx.r3.s64 = ctx.r11.s64 + -17836;
	// bl 0x832f8608
	ctx.lr = 0x832F7E10;
	sub_832F8608(ctx, base);
	// b 0x832f7e2c
	goto loc_832F7E2C;
loc_832F7E14:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_832F7E2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F7E30:
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

__attribute__((alias("__imp__sub_832F7E48"))) PPC_WEAK_FUNC(sub_832F7E48);
PPC_FUNC_IMPL(__imp__sub_832F7E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F7E50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f7e74
	if (!ctx.cr6.eq) goto loc_832F7E74;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17752
	ctx.r3.s64 = ctx.r11.s64 + -17752;
	// bl 0x832f8608
	ctx.lr = 0x832F7E6C;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f7f1c
	goto loc_832F7F1C;
loc_832F7E74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f7e90
	if (ctx.cr6.eq) goto loc_832F7E90;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x832f7e98
	goto loc_832F7E98;
loc_832F7E90:
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// stw r10,-29432(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29432, ctx.r10.u32);
loc_832F7E98:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f7ea4
	if (ctx.cr6.eq) goto loc_832F7EA4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_832F7EA4:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r30,r31,304
	ctx.r30.s64 = ctx.r31.s64 + 304;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832f7ee0
	if (!ctx.cr6.gt) goto loc_832F7EE0;
loc_832F7EB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f7ecc
	if (ctx.cr6.eq) goto loc_832F7ECC;
	// bl 0x82d9f098
	ctx.lr = 0x832F7EC8;
	sub_82D9F098(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_832F7ECC:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f7eb8
	if (ctx.cr6.lt) goto loc_832F7EB8;
loc_832F7EE0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f7ef0
	if (ctx.cr6.eq) goto loc_832F7EF0;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_832F7EF0:
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F7F00;
	sub_833A2B30(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832f7f18
	if (ctx.cr6.eq) goto loc_832F7F18;
	// bl 0x82da4698
	ctx.lr = 0x832F7F0C;
	sub_82DA4698(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da3ac0
	ctx.lr = 0x832F7F18;
	sub_82DA3AC0(ctx, base);
loc_832F7F18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F7F1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F7F24"))) PPC_WEAK_FUNC(sub_832F7F24);
PPC_FUNC_IMPL(__imp__sub_832F7F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F7F28"))) PPC_WEAK_FUNC(sub_832F7F28);
PPC_FUNC_IMPL(__imp__sub_832F7F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F7F40"))) PPC_WEAK_FUNC(sub_832F7F40);
PPC_FUNC_IMPL(__imp__sub_832F7F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F7F48;
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
	// beq cr6,0x832f7f70
	if (ctx.cr6.eq) goto loc_832F7F70;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832f7f70
	if (ctx.cr6.eq) goto loc_832F7F70;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x832f7f7c
	if (!ctx.cr6.eq) goto loc_832F7F7C;
loc_832F7F70:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17712
	ctx.r3.s64 = ctx.r11.s64 + -17712;
	// bl 0x832f8608
	ctx.lr = 0x832F7F7C;
	sub_832F8608(ctx, base);
loc_832F7F7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x833aca30
	ctx.lr = 0x832F7F8C;
	sub_833ACA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f7f9c
	if (ctx.cr0.eq) goto loc_832F7F9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832f8000
	goto loc_832F8000;
loc_832F7F9C:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x832f7fb0
	if (!ctx.cr6.eq) goto loc_832F7FB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832f8000
	goto loc_832F8000;
loc_832F7FB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833be7f0
	ctx.lr = 0x832F7FB8;
	sub_833BE7F0(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x832f7fec
	if (!ctx.cr6.lt) goto loc_832F7FEC;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832F7FD4:
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// bne cr6,0x832f7fe4
	if (!ctx.cr6.eq) goto loc_832F7FE4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832F7FE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x832f7fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832F7FD4;
loc_832F7FEC:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r11,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_832F8000:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F8010"))) PPC_WEAK_FUNC(sub_832F8010);
PPC_FUNC_IMPL(__imp__sub_832F8010) {
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
	// addi r31,r11,-29468
	ctx.r31.s64 = ctx.r11.s64 + -29468;
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
loc_832F802C:
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
	// bne 0x832f802c
	if (!ctx.cr0.eq) goto loc_832F802C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x832f80b4
	if (!ctx.cr6.eq) goto loc_832F80B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x832f3f50
	ctx.lr = 0x832F8060;
	sub_832F3F50(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832f8080
	if (!ctx.cr0.eq) goto loc_832F8080;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17484
	ctx.r3.s64 = ctx.r11.s64 + -17484;
	// bl 0x832f8608
	ctx.lr = 0x832F8078;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f80b8
	goto loc_832F80B8;
loc_832F8080:
	// bl 0x832f40c0
	ctx.lr = 0x832F8084;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f8098
	if (!ctx.cr0.lt) goto loc_832F8098;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// bl 0x832f8608
	ctx.lr = 0x832F8098;
	sub_832F8608(ctx, base);
loc_832F8098:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x832f4158
	ctx.lr = 0x832F80A0;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f80b4
	if (!ctx.cr0.lt) goto loc_832F80B4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// bl 0x832f8608
	ctx.lr = 0x832F80B4;
	sub_832F8608(ctx, base);
loc_832F80B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F80B8:
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

__attribute__((alias("__imp__sub_832F80CC"))) PPC_WEAK_FUNC(sub_832F80CC);
PPC_FUNC_IMPL(__imp__sub_832F80CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F80D0"))) PPC_WEAK_FUNC(sub_832F80D0);
PPC_FUNC_IMPL(__imp__sub_832F80D0) {
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
	// lwz r3,-29428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29428);
	// bl 0x832f40c0
	ctx.lr = 0x832F80F4;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f8108
	if (!ctx.cr0.lt) goto loc_832F8108;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// bl 0x832f8608
	ctx.lr = 0x832F8108;
	sub_832F8608(ctx, base);
loc_832F8108:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f7e48
	ctx.lr = 0x832F8110;
	sub_832F7E48(ctx, base);
	// lwz r11,-29428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29428);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832f4158
	ctx.lr = 0x832F8120;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f8134
	if (!ctx.cr0.lt) goto loc_832F8134;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// bl 0x832f8608
	ctx.lr = 0x832F8134;
	sub_832F8608(ctx, base);
loc_832F8134:
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

__attribute__((alias("__imp__sub_832F8150"))) PPC_WEAK_FUNC(sub_832F8150);
PPC_FUNC_IMPL(__imp__sub_832F8150) {
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
	// addi r31,r11,-29428
	ctx.r31.s64 = ctx.r11.s64 + -29428;
	// addi r8,r31,-8
	ctx.r8.s64 = ctx.r31.s64 + -8;
loc_832F8170:
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
	// bne 0x832f8170
	if (!ctx.cr0.eq) goto loc_832F8170;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832f8204
	if (!ctx.cr6.eq) goto loc_832F8204;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832f40c0
	ctx.lr = 0x832F81A0;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f81b4
	if (!ctx.cr0.lt) goto loc_832F81B4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// bl 0x832f8608
	ctx.lr = 0x832F81B4;
	sub_832F8608(ctx, base);
loc_832F81B4:
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// b 0x832f81c4
	goto loc_832F81C4;
loc_832F81BC:
	// lwz r3,-29432(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29432);
	// bl 0x832f7e48
	ctx.lr = 0x832F81C4;
	sub_832F7E48(ctx, base);
loc_832F81C4:
	// lwz r11,-29432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832f81bc
	if (!ctx.cr6.eq) goto loc_832F81BC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832f4158
	ctx.lr = 0x832F81D8;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f81ec
	if (!ctx.cr0.lt) goto loc_832F81EC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// bl 0x832f8608
	ctx.lr = 0x832F81EC;
	sub_832F8608(ctx, base);
loc_832F81EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f8204
	if (ctx.cr6.eq) goto loc_832F8204;
	// bl 0x832f4030
	ctx.lr = 0x832F81FC;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832F8204:
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

__attribute__((alias("__imp__sub_832F8220"))) PPC_WEAK_FUNC(sub_832F8220);
PPC_FUNC_IMPL(__imp__sub_832F8220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F8228;
	__savegprlr_28(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,-29428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29428);
	// bl 0x832f40c0
	ctx.lr = 0x832F8244;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f8258
	if (!ctx.cr0.lt) goto loc_832F8258;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// bl 0x832f8608
	ctx.lr = 0x832F8258;
	sub_832F8608(ctx, base);
loc_832F8258:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f8274
	if (!ctx.cr6.eq) goto loc_832F8274;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17392
	ctx.r3.s64 = ctx.r11.s64 + -17392;
loc_832F8268:
	// bl 0x832f8608
	ctx.lr = 0x832F826C;
	sub_832F8608(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832f8304
	goto loc_832F8304;
loc_832F8274:
	// li r11,304
	ctx.r11.s64 = 304;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83306010
	ctx.lr = 0x832F8290;
	sub_83306010(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,280
	ctx.r4.s64 = 280;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x83305ba8
	ctx.lr = 0x832F82A0;
	sub_83305BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f82b4
	if (!ctx.cr0.lt) goto loc_832F82B4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17436
	ctx.r3.s64 = ctx.r11.s64 + -17436;
	// b 0x832f8268
	goto loc_832F8268;
loc_832F82B4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83305c78
	ctx.lr = 0x832F82C0;
	sub_83305C78(ctx, base);
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// bl 0x83305cb8
	ctx.lr = 0x832F82D4;
	sub_83305CB8(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83305ec8
	ctx.lr = 0x832F82E8;
	sub_83305EC8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83305c48
	ctx.lr = 0x832F82F0;
	sub_83305C48(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832F8304:
	// lwz r3,-29428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29428);
	// bl 0x832f4158
	ctx.lr = 0x832F830C;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f8320
	if (!ctx.cr0.lt) goto loc_832F8320;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// bl 0x832f8608
	ctx.lr = 0x832F8320;
	sub_832F8608(ctx, base);
loc_832F8320:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F832C"))) PPC_WEAK_FUNC(sub_832F832C);
PPC_FUNC_IMPL(__imp__sub_832F832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F8330"))) PPC_WEAK_FUNC(sub_832F8330);
PPC_FUNC_IMPL(__imp__sub_832F8330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F8338;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-29428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29428);
	// bl 0x832f40c0
	ctx.lr = 0x832F8350;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f8364
	if (!ctx.cr0.lt) goto loc_832F8364;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// bl 0x832f8608
	ctx.lr = 0x832F8364;
	sub_832F8608(ctx, base);
loc_832F8364:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832f83c8
	if (ctx.cr6.eq) goto loc_832F83C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832f83c8
	if (ctx.cr6.eq) goto loc_832F83C8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83306010
	ctx.lr = 0x832F8388;
	sub_83306010(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r31,-29432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29432);
	// b 0x832f83bc
	goto loc_832F83BC;
loc_832F8394:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f7f40
	ctx.lr = 0x832F83A4;
	sub_832F7F40(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x832f83d8
	if (ctx.cr0.lt) goto loc_832F83D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f83d8
	if (!ctx.cr6.eq) goto loc_832F83D8;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_832F83BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f8394
	if (!ctx.cr6.eq) goto loc_832F8394;
	// b 0x832f83d8
	goto loc_832F83D8;
loc_832F83C8:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17352
	ctx.r3.s64 = ctx.r11.s64 + -17352;
	// bl 0x832f8608
	ctx.lr = 0x832F83D4;
	sub_832F8608(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
loc_832F83D8:
	// lwz r3,-29428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29428);
	// bl 0x832f4158
	ctx.lr = 0x832F83E0;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f83f4
	if (!ctx.cr0.lt) goto loc_832F83F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// bl 0x832f8608
	ctx.lr = 0x832F83F4;
	sub_832F8608(ctx, base);
loc_832F83F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F8400"))) PPC_WEAK_FUNC(sub_832F8400);
PPC_FUNC_IMPL(__imp__sub_832F8400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832F8408;
	__savegprlr_24(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x832f843c
	if (!ctx.cr6.eq) goto loc_832F843C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17184
	ctx.r3.s64 = ctx.r11.s64 + -17184;
loc_832F8430:
	// bl 0x832f8608
	ctx.lr = 0x832F8434;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f85fc
	goto loc_832F85FC;
loc_832F843C:
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// li r4,280
	ctx.r4.s64 = 280;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83305ba8
	ctx.lr = 0x832F8454;
	sub_83305BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f8468
	if (!ctx.cr0.lt) goto loc_832F8468;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17228
	ctx.r3.s64 = ctx.r11.s64 + -17228;
	// b 0x832f8430
	goto loc_832F8430;
loc_832F8468:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83305c78
	ctx.lr = 0x832F8474;
	sub_83305C78(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832f84d8
	if (!ctx.cr6.eq) goto loc_832F84D8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832f8220
	ctx.lr = 0x832F8490;
	sub_832F8220(ctx, base);
	// bl 0x82da4698
	ctx.lr = 0x832F8494;
	sub_82DA4698(ctx, base);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82da31c8
	ctx.lr = 0x832F84A4;
	sub_82DA31C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832f84b8
	if (!ctx.cr0.eq) goto loc_832F84B8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17268
	ctx.r3.s64 = ctx.r11.s64 + -17268;
	// b 0x832f8430
	goto loc_832F8430;
loc_832F84B8:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r5,304
	ctx.r5.s64 = 304;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F84D0;
	sub_833A2B30(ctx, base);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x832f8508
	goto loc_832F8508;
loc_832F84D8:
	// cmplwi cr6,r29,308
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 308, ctx.xer);
	// bge cr6,0x832f84ec
	if (!ctx.cr6.lt) goto loc_832F84EC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17312
	ctx.r3.s64 = ctx.r11.s64 + -17312;
	// b 0x832f8430
	goto loc_832F8430;
loc_832F84EC:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r5,304
	ctx.r5.s64 = 304;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F8504;
	sub_833A2B30(ctx, base);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_832F8508:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83306010
	ctx.lr = 0x832F8528;
	sub_83306010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833be7f0
	ctx.lr = 0x832F8530;
	sub_833BE7F0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x832f8548
	if (!ctx.cr6.eq) goto loc_832F8548;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stb r25,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r25.u8);
loc_832F8548:
	// li r11,304
	ctx.r11.s64 = 304;
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// stw r28,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r28.u32);
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// addi r4,r10,32152
	ctx.r4.s64 = ctx.r10.s64 + 32152;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83305cb8
	ctx.lr = 0x832F8570;
	sub_83305CB8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83305ec8
	ctx.lr = 0x832F8584;
	sub_83305EC8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83305c48
	ctx.lr = 0x832F858C;
	sub_83305C48(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r30,-31823
	ctx.r30.s64 = -2085552128;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r3,-29428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29428);
	// bl 0x832f40c0
	ctx.lr = 0x832F85A0;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f85b4
	if (!ctx.cr0.lt) goto loc_832F85B4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// bl 0x832f8608
	ctx.lr = 0x832F85B4;
	sub_832F8608(ctx, base);
loc_832F85B4:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r10,-29432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29432);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832f85d4
	if (ctx.cr6.eq) goto loc_832F85D4;
	// lwz r10,-29432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29432);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r10,-29432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29432);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_832F85D4:
	// stw r31,-29432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29432, ctx.r31.u32);
	// lwz r3,-29428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29428);
	// bl 0x832f4158
	ctx.lr = 0x832F85E0;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f85f4
	if (!ctx.cr0.lt) goto loc_832F85F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// bl 0x832f8608
	ctx.lr = 0x832F85F4;
	sub_832F8608(ctx, base);
loc_832F85F4:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F85FC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F8604"))) PPC_WEAK_FUNC(sub_832F8604);
PPC_FUNC_IMPL(__imp__sub_832F8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F8608"))) PPC_WEAK_FUNC(sub_832F8608);
PPC_FUNC_IMPL(__imp__sub_832F8608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-29416
	ctx.r11.s64 = ctx.r11.s64 + -29416;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,-29316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832F8634"))) PPC_WEAK_FUNC(sub_832F8634);
PPC_FUNC_IMPL(__imp__sub_832F8634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F8638"))) PPC_WEAK_FUNC(sub_832F8638);
PPC_FUNC_IMPL(__imp__sub_832F8638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,-29424
	ctx.r11.s64 = ctx.r11.s64 + -29424;
	// addi r10,r10,-17072
	ctx.r10.s64 = ctx.r10.s64 + -17072;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// bne cr6,0x832f866c
	if (!ctx.cr6.eq) goto loc_832F866C;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r10,r10,3736
	ctx.r10.s64 = ctx.r10.s64 + 3736;
	// stw r10,-29316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29316, ctx.r10.u32);
	// blr 
	return;
loc_832F866C:
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// stw r3,-29316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29316, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F8678"))) PPC_WEAK_FUNC(sub_832F8678);
PPC_FUNC_IMPL(__imp__sub_832F8678) {
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
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-29368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29368);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-29368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29368, ctx.r11.u32);
	// lwz r11,-29368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832f86dc
	if (!ctx.cr6.eq) goto loc_832F86DC;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r9,-29412
	ctx.r31.s64 = ctx.r9.s64 + -29412;
	// stw r11,-29376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29376, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3f50
	ctx.lr = 0x832F86C4;
	sub_832F3F50(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832f86dc
	if (!ctx.cr0.eq) goto loc_832F86DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16916
	ctx.r3.s64 = ctx.r11.s64 + -16916;
	// bl 0x832f8608
	ctx.lr = 0x832F86DC;
	sub_832F8608(ctx, base);
loc_832F86DC:
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

__attribute__((alias("__imp__sub_832F86F0"))) PPC_WEAK_FUNC(sub_832F86F0);
PPC_FUNC_IMPL(__imp__sub_832F86F0) {
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
	// addi r31,r11,-29368
	ctx.r31.s64 = ctx.r11.s64 + -29368;
	// lwz r11,-29368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29368);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f8744
	if (!ctx.cr6.eq) goto loc_832F8744;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f8738
	if (ctx.cr6.eq) goto loc_832F8738;
	// bl 0x832f4030
	ctx.lr = 0x832F8730;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_832F8738:
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-29376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29376, ctx.r11.u32);
loc_832F8744:
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

__attribute__((alias("__imp__sub_832F8758"))) PPC_WEAK_FUNC(sub_832F8758);
PPC_FUNC_IMPL(__imp__sub_832F8758) {
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
	// lwz r3,-29380(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29380);
	// bl 0x832f40c0
	ctx.lr = 0x832F8770;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f8784
	if (!ctx.cr0.lt) goto loc_832F8784;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// bl 0x832f8608
	ctx.lr = 0x832F8784;
	sub_832F8608(ctx, base);
loc_832F8784:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F8794"))) PPC_WEAK_FUNC(sub_832F8794);
PPC_FUNC_IMPL(__imp__sub_832F8794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F8798"))) PPC_WEAK_FUNC(sub_832F8798);
PPC_FUNC_IMPL(__imp__sub_832F8798) {
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
	// lwz r3,-29380(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29380);
	// bl 0x832f4158
	ctx.lr = 0x832F87B0;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f87c4
	if (!ctx.cr0.lt) goto loc_832F87C4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16768
	ctx.r3.s64 = ctx.r11.s64 + -16768;
	// bl 0x832f8608
	ctx.lr = 0x832F87C4;
	sub_832F8608(ctx, base);
loc_832F87C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F87D4"))) PPC_WEAK_FUNC(sub_832F87D4);
PPC_FUNC_IMPL(__imp__sub_832F87D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F87D8"))) PPC_WEAK_FUNC(sub_832F87D8);
PPC_FUNC_IMPL(__imp__sub_832F87D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16520
	ctx.r3.s64 = ctx.r11.s64 + -16520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F87E4"))) PPC_WEAK_FUNC(sub_832F87E4);
PPC_FUNC_IMPL(__imp__sub_832F87E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F87E8"))) PPC_WEAK_FUNC(sub_832F87E8);
PPC_FUNC_IMPL(__imp__sub_832F87E8) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r11,8308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8308);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bne cr6,0x832f8830
	if (!ctx.cr6.eq) goto loc_832F8830;
	// bl 0x833bf1a8
	ctx.lr = 0x832F882C;
	sub_833BF1A8(ctx, base);
	// b 0x832f8834
	goto loc_832F8834;
loc_832F8830:
	// bl 0x82d9f2e0
	ctx.lr = 0x832F8834;
	sub_82D9F2E0(ctx, base);
loc_832F8834:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832f885c
	if (!ctx.cr6.eq) goto loc_832F885C;
loc_832F8844:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82d9fb18
	ctx.lr = 0x832F8850;
	sub_82D9FB18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// b 0x832f88bc
	goto loc_832F88BC;
loc_832F885C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83306368
	ctx.lr = 0x832F8864;
	sub_83306368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f8878
	if (!ctx.cr0.eq) goto loc_832F8878;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d9f098
	ctx.lr = 0x832F8874;
	sub_82D9F098(ctx, base);
	// b 0x832f8844
	goto loc_832F8844;
loc_832F8878:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// sradi r10,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 10;
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r10,r10,11
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 11;
	// sradi r9,r11,11
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r11.s64 >> 11;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rldicr r9,r9,11,52
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 11) & 0xFFFFFFFFFFFFF800;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x832f88b8
	if (!ctx.cr6.gt) goto loc_832F88B8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832F88B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F88BC:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832F88D4"))) PPC_WEAK_FUNC(sub_832F88D4);
PPC_FUNC_IMPL(__imp__sub_832F88D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F88D8"))) PPC_WEAK_FUNC(sub_832F88D8);
PPC_FUNC_IMPL(__imp__sub_832F88D8) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82d9f2e0
	ctx.lr = 0x832F890C;
	sub_82D9F2E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x832f8930
	if (!ctx.cr6.eq) goto loc_832F8930;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82d9fb18
	ctx.lr = 0x832F8924;
	sub_82D9FB18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// b 0x832f894c
	goto loc_832F894C;
loc_832F8930:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833be310
	ctx.lr = 0x832F8940;
	sub_833BE310(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832F894C:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832F8964"))) PPC_WEAK_FUNC(sub_832F8964);
PPC_FUNC_IMPL(__imp__sub_832F8964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F8968"))) PPC_WEAK_FUNC(sub_832F8968);
PPC_FUNC_IMPL(__imp__sub_832F8968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832F8970;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r23,2
	ctx.r23.s64 = 131072;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r11,r29,17
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 17;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addze r25,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r25.s64 = temp.s64;
	// srawi r11,r29,17
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 17;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// subf. r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832f89ac
	if (ctx.cr0.eq) goto loc_832F89AC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_832F89AC:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x832f8a94
	if (!ctx.cr6.gt) goto loc_832F8A94;
loc_832F89B8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f8aa0
	if (!ctx.cr6.eq) goto loc_832F8AA0;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x832f89d4
	if (ctx.cr6.lt) goto loc_832F89D4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_832F89D4:
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// rlwinm r30,r11,0,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9f0f8
	ctx.lr = 0x832F89F8;
	sub_82D9F0F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f8a1c
	if (!ctx.cr0.eq) goto loc_832F8A1C;
	// bl 0x82d9fb18
	ctx.lr = 0x832F8A04;
	sub_82D9FB18(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x832f8a1c
	if (ctx.cr6.eq) goto loc_832F8A1C;
	// cmplwi cr6,r3,995
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 995, ctx.xer);
	// ble cr6,0x832f8aac
	if (!ctx.cr6.gt) goto loc_832F8AAC;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bgt cr6,0x832f8aac
	if (ctx.cr6.gt) goto loc_832F8AAC;
loc_832F8A1C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d9f830
	ctx.lr = 0x832F8A30;
	sub_82D9F830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f8a44
	if (!ctx.cr0.eq) goto loc_832F8A44;
	// bl 0x82d9fb18
	ctx.lr = 0x832F8A3C;
	sub_82D9FB18(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x832f8aa8
	if (!ctx.cr6.eq) goto loc_832F8AA8;
loc_832F8A44:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832f8a60
	if (!ctx.cr6.gt) goto loc_832F8A60;
	// subf r5,r11,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F8A60;
	sub_833A2B30(ctx, base);
loc_832F8A60:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// blt cr6,0x832f89b8
	if (ctx.cr6.lt) goto loc_832F89B8;
loc_832F8A94:
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
loc_832F8A98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_832F8AA0:
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// b 0x832f8a94
	goto loc_832F8A94;
loc_832F8AA8:
	// bl 0x82d9fb18
	ctx.lr = 0x832F8AAC;
	sub_82D9FB18(ctx, base);
loc_832F8AAC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x832f8a98
	goto loc_832F8A98;
}

__attribute__((alias("__imp__sub_832F8ABC"))) PPC_WEAK_FUNC(sub_832F8ABC);
PPC_FUNC_IMPL(__imp__sub_832F8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F8AC0"))) PPC_WEAK_FUNC(sub_832F8AC0);
PPC_FUNC_IMPL(__imp__sub_832F8AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832F8AC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r23,2
	ctx.r23.s64 = 131072;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r11,r29,17
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 17;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addze r25,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r25.s64 = temp.s64;
	// srawi r11,r29,17
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 17;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// subf. r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832f8b04
	if (ctx.cr0.eq) goto loc_832F8B04;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_832F8B04:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x832f8bc0
	if (!ctx.cr6.gt) goto loc_832F8BC0;
loc_832F8B10:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f8bcc
	if (!ctx.cr6.eq) goto loc_832F8BCC;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x832f8b2c
	if (ctx.cr6.lt) goto loc_832F8B2C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_832F8B2C:
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// rlwinm r30,r11,0,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9f518
	ctx.lr = 0x832F8B50;
	sub_82D9F518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f8b6c
	if (!ctx.cr0.eq) goto loc_832F8B6C;
	// bl 0x82d9fb18
	ctx.lr = 0x832F8B5C;
	sub_82D9FB18(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// blt cr6,0x832f8bd8
	if (ctx.cr6.lt) goto loc_832F8BD8;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bgt cr6,0x832f8bd8
	if (ctx.cr6.gt) goto loc_832F8BD8;
loc_832F8B6C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d9f830
	ctx.lr = 0x832F8B80;
	sub_82D9F830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f8bd4
	if (ctx.cr0.eq) goto loc_832F8BD4;
	// bl 0x833bf050
	ctx.lr = 0x832F8B8C;
	sub_833BF050(ctx, base);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// blt cr6,0x832f8b10
	if (ctx.cr6.lt) goto loc_832F8B10;
loc_832F8BC0:
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
loc_832F8BC4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_832F8BCC:
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// b 0x832f8bc0
	goto loc_832F8BC0;
loc_832F8BD4:
	// bl 0x82d9fb18
	ctx.lr = 0x832F8BD8;
	sub_82D9FB18(ctx, base);
loc_832F8BD8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x832f8bc4
	goto loc_832F8BC4;
}

__attribute__((alias("__imp__sub_832F8BE8"))) PPC_WEAK_FUNC(sub_832F8BE8);
PPC_FUNC_IMPL(__imp__sub_832F8BE8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x833063e0
	ctx.lr = 0x832F8C10;
	sub_833063E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f8c28
	if (!ctx.cr0.eq) goto loc_832F8C28;
loc_832F8C18:
	// bl 0x82d9fb18
	ctx.lr = 0x832F8C1C;
	sub_82D9FB18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// b 0x832f8c7c
	goto loc_832F8C7C;
loc_832F8C28:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x833be268
	ctx.lr = 0x832F8C30;
	sub_833BE268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f8c18
	if (ctx.cr0.eq) goto loc_832F8C18;
	// bl 0x833bf050
	ctx.lr = 0x832F8C3C;
	sub_833BF050(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// sradi r10,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 10;
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r10,r10,11
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 11;
	// sradi r9,r11,11
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r11.s64 >> 11;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rldicr r9,r9,11,52
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 11) & 0xFFFFFFFFFFFFF800;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x832f8c78
	if (!ctx.cr6.gt) goto loc_832F8C78;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832F8C78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F8C7C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832F8C94"))) PPC_WEAK_FUNC(sub_832F8C94);
PPC_FUNC_IMPL(__imp__sub_832F8C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F8C98"))) PPC_WEAK_FUNC(sub_832F8C98);
PPC_FUNC_IMPL(__imp__sub_832F8C98) {
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
	// bl 0x833bf168
	ctx.lr = 0x832F8CB4;
	sub_833BF168(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x832f8cd0
	if (ctx.cr6.eq) goto loc_832F8CD0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833bf350
	ctx.lr = 0x832F8CD0;
	sub_833BF350(ctx, base);
loc_832F8CD0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d9f098
	ctx.lr = 0x832F8CD8;
	sub_82D9F098(ctx, base);
	// bl 0x833bf050
	ctx.lr = 0x832F8CDC;
	sub_833BF050(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832F8CF8"))) PPC_WEAK_FUNC(sub_832F8CF8);
PPC_FUNC_IMPL(__imp__sub_832F8CF8) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82d9ecf8
	ctx.lr = 0x832F8D18;
	sub_82D9ECF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f8d30
	if (!ctx.cr0.eq) goto loc_832F8D30;
	// bl 0x82d9fb18
	ctx.lr = 0x832F8D24;
	sub_82D9FB18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x832f8d38
	goto loc_832F8D38;
loc_832F8D30:
	// bl 0x833bf050
	ctx.lr = 0x832F8D34;
	sub_833BF050(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832F8D38:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832F8D50"))) PPC_WEAK_FUNC(sub_832F8D50);
PPC_FUNC_IMPL(__imp__sub_832F8D50) {
	PPC_FUNC_PROLOGUE();
	// li r3,2048
	ctx.r3.s64 = 2048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F8D58"))) PPC_WEAK_FUNC(sub_832F8D58);
PPC_FUNC_IMPL(__imp__sub_832F8D58) {
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
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r30,r11,8316
	ctx.r30.s64 = ctx.r11.s64 + 8316;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,-29312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29312, ctx.r3.u32);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f8d94
	if (ctx.cr6.eq) goto loc_832F8D94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832f79c0
	ctx.lr = 0x832F8D94;
	sub_832F79C0(ctx, base);
loc_832F8D94:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f8da8
	if (ctx.cr6.eq) goto loc_832F8DA8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832f79c0
	ctx.lr = 0x832F8DA8;
	sub_832F79C0(ctx, base);
loc_832F8DA8:
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

__attribute__((alias("__imp__sub_832F8DC0"))) PPC_WEAK_FUNC(sub_832F8DC0);
PPC_FUNC_IMPL(__imp__sub_832F8DC0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,8316
	ctx.r31.s64 = ctx.r11.s64 + 8316;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f8df8
	if (ctx.cr6.eq) goto loc_832F8DF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832f7a48
	ctx.lr = 0x832F8DF8;
	sub_832F7A48(ctx, base);
loc_832F8DF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f8e0c
	if (ctx.cr6.eq) goto loc_832F8E0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832f7a48
	ctx.lr = 0x832F8E0C;
	sub_832F7A48(ctx, base);
loc_832F8E0C:
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

__attribute__((alias("__imp__sub_832F8E24"))) PPC_WEAK_FUNC(sub_832F8E24);
PPC_FUNC_IMPL(__imp__sub_832F8E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F8E28"))) PPC_WEAK_FUNC(sub_832F8E28);
PPC_FUNC_IMPL(__imp__sub_832F8E28) {
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
	// bl 0x83305f80
	ctx.lr = 0x832F8E40;
	sub_83305F80(ctx, base);
	// bl 0x832f8010
	ctx.lr = 0x832F8E44;
	sub_832F8010(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-28824
	ctx.r3.s64 = ctx.r11.s64 + -28824;
	// ori r5,r5,37120
	ctx.r5.u64 = ctx.r5.u64 | 37120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832F8E5C;
	sub_833A2B30(ctx, base);
	// bl 0x832f7390
	ctx.lr = 0x832F8E60;
	sub_832F7390(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r30,r11,-29360
	ctx.r30.s64 = ctx.r11.s64 + -29360;
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// bl 0x832f7ac8
	ctx.lr = 0x832F8E74;
	sub_832F7AC8(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,8328
	ctx.r31.s64 = ctx.r11.s64 + 8328;
	// stw r3,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r3.u32);
	// bne 0x832f8e98
	if (!ctx.cr0.eq) goto loc_832F8E98;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16188
	ctx.r3.s64 = ctx.r11.s64 + -16188;
loc_832F8E90:
	// bl 0x832f8608
	ctx.lr = 0x832F8E94;
	sub_832F8608(ctx, base);
	// b 0x832f8ef0
	goto loc_832F8EF0;
loc_832F8E98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x832f7ac8
	ctx.lr = 0x832F8EA4;
	sub_832F7AC8(ctx, base);
	// stw r3,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832f8ebc
	if (!ctx.cr0.eq) goto loc_832F8EBC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16228
	ctx.r3.s64 = ctx.r11.s64 + -16228;
	// b 0x832f8e90
	goto loc_832F8E90;
loc_832F8EBC:
	// lis r30,-31844
	ctx.r30.s64 = -2086928384;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,-29312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29312);
	// bl 0x832f79c0
	ctx.lr = 0x832F8ECC;
	sub_832F79C0(ctx, base);
	// lwz r4,-29312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29312);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x832f79c0
	ctx.lr = 0x832F8ED8;
	sub_832F79C0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// bl 0x832f7a48
	ctx.lr = 0x832F8EE4;
	sub_832F7A48(ctx, base);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832f7a48
	ctx.lr = 0x832F8EF0;
	sub_832F7A48(ctx, base);
loc_832F8EF0:
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

__attribute__((alias("__imp__sub_832F8F08"))) PPC_WEAK_FUNC(sub_832F8F08);
PPC_FUNC_IMPL(__imp__sub_832F8F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f8f30
	if (!ctx.cr6.eq) goto loc_832F8F30;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15664
	ctx.r3.s64 = ctx.r11.s64 + -15664;
	// bl 0x832f8608
	ctx.lr = 0x832F8F28;
	sub_832F8608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f8f74
	goto loc_832F8F74;
loc_832F8F30:
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x83306010
	ctx.lr = 0x832F8F38;
	sub_83306010(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x833be818
	ctx.lr = 0x832F8F44;
	sub_833BE818(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832f8f54
	if (!ctx.cr6.eq) goto loc_832F8F54;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x832f8f6c
	goto loc_832F8F6C;
loc_832F8F54:
	// bl 0x82d9f098
	ctx.lr = 0x832F8F58;
	sub_82D9F098(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_832F8F6C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832F8F74:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F8F84"))) PPC_WEAK_FUNC(sub_832F8F84);
PPC_FUNC_IMPL(__imp__sub_832F8F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F8F88"))) PPC_WEAK_FUNC(sub_832F8F88);
PPC_FUNC_IMPL(__imp__sub_832F8F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f8fb0
	if (!ctx.cr6.eq) goto loc_832F8FB0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15624
	ctx.r3.s64 = ctx.r11.s64 + -15624;
	// bl 0x832f8608
	ctx.lr = 0x832F8FA8;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f8ff4
	goto loc_832F8FF4;
loc_832F8FB0:
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x83306010
	ctx.lr = 0x832F8FB8;
	sub_83306010(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x833be818
	ctx.lr = 0x832F8FC4;
	sub_833BE818(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832f8fd4
	if (!ctx.cr6.eq) goto loc_832F8FD4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x832f8fec
	goto loc_832F8FEC;
loc_832F8FD4:
	// bl 0x82d9f098
	ctx.lr = 0x832F8FD8;
	sub_82D9F098(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_832F8FEC:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832F8FF4:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F9004"))) PPC_WEAK_FUNC(sub_832F9004);
PPC_FUNC_IMPL(__imp__sub_832F9004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9008"))) PPC_WEAK_FUNC(sub_832F9008);
PPC_FUNC_IMPL(__imp__sub_832F9008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832f9030
	if (!ctx.cr6.eq) goto loc_832F9030;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15584
	ctx.r3.s64 = ctx.r11.s64 + -15584;
	// bl 0x832f8608
	ctx.lr = 0x832F9028;
	sub_832F8608(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832f9074
	goto loc_832F9074;
loc_832F9030:
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x83306010
	ctx.lr = 0x832F9038;
	sub_83306010(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x833be818
	ctx.lr = 0x832F9044;
	sub_833BE818(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832f9054
	if (!ctx.cr6.eq) goto loc_832F9054;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x832f906c
	goto loc_832F906C;
loc_832F9054:
	// bl 0x82d9f098
	ctx.lr = 0x832F9058;
	sub_82D9F098(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_832F906C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832F9074:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F9084"))) PPC_WEAK_FUNC(sub_832F9084);
PPC_FUNC_IMPL(__imp__sub_832F9084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9088"))) PPC_WEAK_FUNC(sub_832F9088);
PPC_FUNC_IMPL(__imp__sub_832F9088) {
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
	ctx.lr = 0x832F90AC;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f90c0
	if (!ctx.cr0.lt) goto loc_832F90C0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832F90C0;
	sub_832F8608(ctx, base);
loc_832F90C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832f90dc
	if (!ctx.cr6.eq) goto loc_832F90DC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15504
	ctx.r3.s64 = ctx.r11.s64 + -15504;
loc_832F90D0:
	// bl 0x832f8608
	ctx.lr = 0x832F90D4;
	sub_832F8608(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832f9100
	goto loc_832F9100;
loc_832F90DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f90f4
	if (!ctx.cr6.eq) goto loc_832F90F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15544
	ctx.r3.s64 = ctx.r11.s64 + -15544;
	// b 0x832f90d0
	goto loc_832F90D0;
loc_832F90F4:
	// ld r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832F9100:
	// lwz r3,8304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8304);
	// extsw r31,r11
	ctx.r31.s64 = ctx.r11.s32;
	// bl 0x832f4158
	ctx.lr = 0x832F910C;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f9120
	if (!ctx.cr0.lt) goto loc_832F9120;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832F9120;
	sub_832F8608(ctx, base);
loc_832F9120:
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

__attribute__((alias("__imp__sub_832F913C"))) PPC_WEAK_FUNC(sub_832F913C);
PPC_FUNC_IMPL(__imp__sub_832F913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9140"))) PPC_WEAK_FUNC(sub_832F9140);
PPC_FUNC_IMPL(__imp__sub_832F9140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832F9148;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-28824
	ctx.r29.s64 = ctx.r11.s64 + -28824;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832F9164:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x832f918c
	if (ctx.cr6.eq) goto loc_832F918C;
	// addis r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,464
	ctx.r11.s64 = ctx.r11.s64 + 464;
	// addi r9,r9,-28416
	ctx.r9.s64 = ctx.r9.s64 + -28416;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832f9164
	if (ctx.cr6.lt) goto loc_832F9164;
loc_832F918C:
	// cmpwi cr6,r10,80
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 80, ctx.xer);
	// bne cr6,0x832f91a8
	if (!ctx.cr6.eq) goto loc_832F91A8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15304
	ctx.r3.s64 = ctx.r11.s64 + -15304;
loc_832F919C:
	// bl 0x832f8608
	ctx.lr = 0x832F91A0;
	sub_832F8608(ctx, base);
loc_832F91A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f9348
	goto loc_832F9348;
loc_832F91A8:
	// li r5,464
	ctx.r5.s64 = 464;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F91B8;
	sub_833A2B30(ctx, base);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83306010
	ctx.lr = 0x832F91C8;
	sub_83306010(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83306190
	ctx.lr = 0x832F91D0;
	sub_83306190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// bne 0x832f91e8
	if (!ctx.cr0.eq) goto loc_832F91E8;
	// addi r11,r11,8316
	ctx.r11.s64 = ctx.r11.s64 + 8316;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x832f91ec
	goto loc_832F91EC;
loc_832F91E8:
	// lwz r11,8316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8316);
loc_832F91EC:
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d9f968
	ctx.lr = 0x832F9204;
	sub_82D9F968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// bne 0x832f921c
	if (!ctx.cr0.eq) goto loc_832F921C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15200
	ctx.r3.s64 = ctx.r11.s64 + -15200;
	// b 0x832f919c
	goto loc_832F919C;
loc_832F921C:
	// stw r27,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r27.u32);
	// addi r26,r31,320
	ctx.r26.s64 = ctx.r31.s64 + 320;
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// stw r28,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r28.u32);
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// std r28,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r28.u64);
	// stw r28,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r28.u32);
loc_832F923C:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f9274
	if (ctx.cr6.eq) goto loc_832F9274;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f9274
	if (ctx.cr6.eq) goto loc_832F9274;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f9274
	if (!ctx.cr6.eq) goto loc_832F9274;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x833ac970
	ctx.lr = 0x832F926C;
	sub_833AC970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832f928c
	if (ctx.cr0.eq) goto loc_832F928C;
loc_832F9274:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,464
	ctx.r30.s64 = ctx.r30.s64 + 464;
	// addi r11,r11,-28404
	ctx.r11.s64 = ctx.r11.s64 + -28404;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832f923c
	if (ctx.cr6.lt) goto loc_832F923C;
	// b 0x832f92a4
	goto loc_832F92A4;
loc_832F928C:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// ld r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 268);
	// std r11,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r11.u64);
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_832F92A4:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832f9324
	if (!ctx.cr6.eq) goto loc_832F9324;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832f8330
	ctx.lr = 0x832F92BC;
	sub_832F8330(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f9324
	if (ctx.cr6.eq) goto loc_832F9324;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832f87e8
	ctx.lr = 0x832F92D0;
	sub_832F87E8(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f930c
	if (ctx.cr6.eq) goto loc_832F930C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r29,-448
	ctx.r3.s64 = ctx.r29.s64 + -448;
	// addi r5,r11,-15260
	ctx.r5.s64 = ctx.r11.s64 + -15260;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x832ff9a8
	ctx.lr = 0x832F92F8;
	sub_832FF9A8(ctx, base);
	// addi r3,r29,-448
	ctx.r3.s64 = ctx.r29.s64 + -448;
	// bl 0x832f8608
	ctx.lr = 0x832F9300;
	sub_832F8608(ctx, base);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// bl 0x82d9f098
	ctx.lr = 0x832F9308;
	sub_82D9F098(ctx, base);
	// b 0x832f91a0
	goto loc_832F91A0;
loc_832F930C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// ld r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// std r10,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r10.u64);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
loc_832F9324:
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x832f9344
	if (!ctx.cr6.eq) goto loc_832F9344;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832F9344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832F9348:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F9350"))) PPC_WEAK_FUNC(sub_832F9350);
PPC_FUNC_IMPL(__imp__sub_832F9350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832F9358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-28824
	ctx.r10.s64 = ctx.r11.s64 + -28824;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832F9374:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x832f939c
	if (ctx.cr6.eq) goto loc_832F939C;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,464
	ctx.r11.s64 = ctx.r11.s64 + 464;
	// addi r8,r8,-28416
	ctx.r8.s64 = ctx.r8.s64 + -28416;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832f9374
	if (ctx.cr6.lt) goto loc_832F9374;
loc_832F939C:
	// cmpwi cr6,r9,80
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 80, ctx.xer);
	// bne cr6,0x832f93b8
	if (!ctx.cr6.eq) goto loc_832F93B8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15304
	ctx.r3.s64 = ctx.r11.s64 + -15304;
loc_832F93AC:
	// bl 0x832f8608
	ctx.lr = 0x832F93B0;
	sub_832F8608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832f9454
	goto loc_832F9454;
loc_832F93B8:
	// li r5,464
	ctx.r5.s64 = 464;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F93C8;
	sub_833A2B30(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83306010
	ctx.lr = 0x832F93D8;
	sub_83306010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83306190
	ctx.lr = 0x832F93E0;
	sub_83306190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832f93f4
	if (!ctx.cr0.eq) goto loc_832F93F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15164
	ctx.r3.s64 = ctx.r11.s64 + -15164;
	// b 0x832f93ac
	goto loc_832F93AC;
loc_832F93F4:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8316);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// bl 0x82d9f968
	ctx.lr = 0x832F9414;
	sub_82D9F968(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832f942c
	if (!ctx.cr0.eq) goto loc_832F942C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15200
	ctx.r3.s64 = ctx.r11.s64 + -15200;
	// b 0x832f93ac
	goto loc_832F93AC;
loc_832F942C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// stw r28,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_832F9454:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F945C"))) PPC_WEAK_FUNC(sub_832F945C);
PPC_FUNC_IMPL(__imp__sub_832F945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9460"))) PPC_WEAK_FUNC(sub_832F9460);
PPC_FUNC_IMPL(__imp__sub_832F9460) {
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
	// bne cr6,0x832f9490
	if (!ctx.cr6.eq) goto loc_832F9490;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15084
	ctx.r3.s64 = ctx.r11.s64 + -15084;
loc_832F9488:
	// bl 0x832f8608
	ctx.lr = 0x832F948C;
	sub_832F8608(ctx, base);
	// b 0x832f955c
	goto loc_832F955C;
loc_832F9490:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f94a8
	if (!ctx.cr6.eq) goto loc_832F94A8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-15124
	ctx.r3.s64 = ctx.r11.s64 + -15124;
	// b 0x832f9488
	goto loc_832F9488;
loc_832F94A8:
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832f94d0
	if (!ctx.cr6.gt) goto loc_832F94D0;
	// lwz r3,456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// bl 0x832f7b10
	ctx.lr = 0x832F94C8;
	sub_832F7B10(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
loc_832F94D0:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832f94e0
	if (ctx.cr6.eq) goto loc_832F94E0;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
loc_832F94E0:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f94f4
	if (ctx.cr6.eq) goto loc_832F94F4;
	// bl 0x82d9f098
	ctx.lr = 0x832F94F0;
	sub_82D9F098(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
loc_832F94F4:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r9,r11,-28824
	ctx.r9.s64 = ctx.r11.s64 + -28824;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832F9500:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832f9524
	if (ctx.cr6.eq) goto loc_832F9524;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832f9524
	if (ctx.cr6.eq) goto loc_832F9524;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r8,276(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x832f954c
	if (ctx.cr6.eq) goto loc_832F954C;
loc_832F9524:
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// addi r11,r11,464
	ctx.r11.s64 = ctx.r11.s64 + 464;
	// addi r10,r10,-28416
	ctx.r10.s64 = ctx.r10.s64 + -28416;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832f9500
	if (ctx.cr6.lt) goto loc_832F9500;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f954c
	if (ctx.cr6.eq) goto loc_832F954C;
	// bl 0x82d9f098
	ctx.lr = 0x832F9548;
	sub_82D9F098(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_832F954C:
	// li r5,464
	ctx.r5.s64 = 464;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832F955C;
	sub_833A2B30(ctx, base);
loc_832F955C:
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

__attribute__((alias("__imp__sub_832F9574"))) PPC_WEAK_FUNC(sub_832F9574);
PPC_FUNC_IMPL(__imp__sub_832F9574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9578"))) PPC_WEAK_FUNC(sub_832F9578);
PPC_FUNC_IMPL(__imp__sub_832F9578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832F9580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f96b4
	if (ctx.cr6.eq) goto loc_832F96B4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832f96b4
	if (ctx.cr6.eq) goto loc_832F96B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f95b0
	if (!ctx.cr6.eq) goto loc_832F95B0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14748
	ctx.r3.s64 = ctx.r11.s64 + -14748;
	// b 0x832f96bc
	goto loc_832F96BC;
loc_832F95B0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x832f95c4
	if (!ctx.cr6.lt) goto loc_832F95C4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14784
	ctx.r3.s64 = ctx.r11.s64 + -14784;
	// b 0x832f96bc
	goto loc_832F96BC;
loc_832F95C4:
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832f96c0
	if (ctx.cr6.eq) goto loc_832F96C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832f95e8
	if (ctx.cr6.eq) goto loc_832F95E8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14844
	ctx.r3.s64 = ctx.r11.s64 + -14844;
	// b 0x832f96bc
	goto loc_832F96BC;
loc_832F95E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832f96c0
	if (!ctx.cr6.eq) goto loc_832F96C0;
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832f9610
	if (ctx.cr6.lt) goto loc_832F9610;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_832F9610:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bne cr6,0x832f9630
	if (!ctx.cr6.eq) goto loc_832F9630;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// std r30,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r30.u64);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x832f96c0
	goto loc_832F96C0;
loc_832F9630:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stw r5,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r5.u32);
	// rlwinm r10,r29,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 11) & 0xFFFFF800;
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// rldicr r11,r11,11,52
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// std r11,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r11.u64);
	// addi r5,r31,352
	ctx.r5.s64 = ctx.r31.s64 + 352;
	// lwz r8,380(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// addi r4,r9,-30360
	ctx.r4.s64 = ctx.r9.s64 + -30360;
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r8,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r8.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// lwz r3,456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// bl 0x832f76f8
	ctx.lr = 0x832F967C;
	sub_832F76F8(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832f96c0
	if (ctx.cr0.lt) goto loc_832F96C0;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r29,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// std r30,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r30.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x832f96c4
	goto loc_832F96C4;
loc_832F96B4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14884
	ctx.r3.s64 = ctx.r11.s64 + -14884;
loc_832F96BC:
	// bl 0x832f8608
	ctx.lr = 0x832F96C0;
	sub_832F8608(ctx, base);
loc_832F96C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F96C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F96CC"))) PPC_WEAK_FUNC(sub_832F96CC);
PPC_FUNC_IMPL(__imp__sub_832F96CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F96D0"))) PPC_WEAK_FUNC(sub_832F96D0);
PPC_FUNC_IMPL(__imp__sub_832F96D0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832f97e4
	if (ctx.cr6.eq) goto loc_832F97E4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832f97e4
	if (ctx.cr6.eq) goto loc_832F97E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832f9708
	if (!ctx.cr6.eq) goto loc_832F9708;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14572
	ctx.r3.s64 = ctx.r11.s64 + -14572;
	// b 0x832f97ec
	goto loc_832F97EC;
loc_832F9708:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x832f971c
	if (!ctx.cr6.lt) goto loc_832F971C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14608
	ctx.r3.s64 = ctx.r11.s64 + -14608;
	// b 0x832f97ec
	goto loc_832F97EC;
loc_832F971C:
	// lwz r8,276(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832f97f0
	if (ctx.cr6.eq) goto loc_832F97F0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x832f9740
	if (ctx.cr6.eq) goto loc_832F9740;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14668
	ctx.r3.s64 = ctx.r11.s64 + -14668;
	// b 0x832f97ec
	goto loc_832F97EC;
loc_832F9740:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832f97f0
	if (!ctx.cr6.eq) goto loc_832F97F0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// std r10,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r10.u64);
	// bne cr6,0x832f9768
	if (!ctx.cr6.eq) goto loc_832F9768;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x832f97f0
	goto loc_832F97F0;
loc_832F9768:
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// rlwinm r6,r4,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// stw r8,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r8.u32);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// lwz r7,288(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r6,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r6.u32);
	// rldicr r8,r3,11,52
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 11) & 0xFFFFFFFFFFFFF800;
	// stw r5,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r5.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// stw r4,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r4.u32);
	// std r8,376(r11)
	PPC_STORE_U64(ctx.r11.u32 + 376, ctx.r8.u64);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r7,380(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,376(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// stw r5,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r5.u32);
	// stw r7,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r7.u32);
	// stw r10,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r10.u32);
	// stw r10,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r10.u32);
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// ble cr6,0x832f97dc
	if (!ctx.cr6.gt) goto loc_832F97DC;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// stw r9,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r9.u32);
	// rldicr r10,r10,11,52
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0xFFFFFFFFFFFFF800;
	// std r10,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r10.u64);
loc_832F97DC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832f97f4
	goto loc_832F97F4;
loc_832F97E4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14708
	ctx.r3.s64 = ctx.r11.s64 + -14708;
loc_832F97EC:
	// bl 0x832f8608
	ctx.lr = 0x832F97F0;
	sub_832F8608(ctx, base);
loc_832F97F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832F97F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832F9804"))) PPC_WEAK_FUNC(sub_832F9804);
PPC_FUNC_IMPL(__imp__sub_832F9804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9808"))) PPC_WEAK_FUNC(sub_832F9808);
PPC_FUNC_IMPL(__imp__sub_832F9808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-14076
	ctx.r3.s64 = ctx.r11.s64 + -14076;
	// b 0x832f8608
	sub_832F8608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832F9814"))) PPC_WEAK_FUNC(sub_832F9814);
PPC_FUNC_IMPL(__imp__sub_832F9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9818"))) PPC_WEAK_FUNC(sub_832F9818);
PPC_FUNC_IMPL(__imp__sub_832F9818) {
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
	ctx.lr = 0x832F983C;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f9850
	if (!ctx.cr0.lt) goto loc_832F9850;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832F9850;
	sub_832F8608(ctx, base);
loc_832F9850:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833061f0
	ctx.lr = 0x832F9858;
	sub_833061F0(ctx, base);
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// bl 0x832f4158
	ctx.lr = 0x832F9860;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f9874
	if (!ctx.cr0.lt) goto loc_832F9874;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832F9874;
	sub_832F8608(ctx, base);
loc_832F9874:
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

__attribute__((alias("__imp__sub_832F988C"))) PPC_WEAK_FUNC(sub_832F988C);
PPC_FUNC_IMPL(__imp__sub_832F988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832F9890"))) PPC_WEAK_FUNC(sub_832F9890);
PPC_FUNC_IMPL(__imp__sub_832F9890) {
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
	ctx.lr = 0x832F98B4;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f98c8
	if (!ctx.cr0.lt) goto loc_832F98C8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832F98C8;
	sub_832F8608(ctx, base);
loc_832F98C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8304);
	// stw r11,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r11.u32);
	// bl 0x832f4158
	ctx.lr = 0x832F98D8;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f98ec
	if (!ctx.cr0.lt) goto loc_832F98EC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x832f8608
	ctx.lr = 0x832F98EC;
	sub_832F8608(ctx, base);
loc_832F98EC:
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

__attribute__((alias("__imp__sub_832F9908"))) PPC_WEAK_FUNC(sub_832F9908);
PPC_FUNC_IMPL(__imp__sub_832F9908) {
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
	// addi r3,r11,-28948
	ctx.r3.s64 = ctx.r11.s64 + -28948;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r8,r8,-16600
	ctx.r8.s64 = ctx.r8.s64 + -16600;
	// addi r31,r11,8304
	ctx.r31.s64 = ctx.r11.s64 + 8304;
	// addi r7,r31,-4
	ctx.r7.s64 = ctx.r31.s64 + -4;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
loc_832F9938:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832f9938
	if (!ctx.cr0.eq) goto loc_832F9938;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x832f99b8
	if (!ctx.cr6.eq) goto loc_832F99B8;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x832f3f50
	ctx.lr = 0x832F9968;
	sub_832F3F50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832f9980
	if (!ctx.cr0.eq) goto loc_832F9980;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// b 0x832f99b4
	goto loc_832F99B4;
loc_832F9980:
	// bl 0x832f40c0
	ctx.lr = 0x832F9984;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f9998
	if (!ctx.cr0.lt) goto loc_832F9998;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x832f8608
	ctx.lr = 0x832F9998;
	sub_832F8608(ctx, base);
loc_832F9998:
	// bl 0x832f8e28
	ctx.lr = 0x832F999C;
	sub_832F8E28(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832f4158
	ctx.lr = 0x832F99A4;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832f99b8
	if (!ctx.cr0.lt) goto loc_832F99B8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
loc_832F99B4:
	// bl 0x832f8608
	ctx.lr = 0x832F99B8;
	sub_832F8608(ctx, base);
loc_832F99B8:
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

__attribute__((alias("__imp__sub_832F99CC"))) PPC_WEAK_FUNC(sub_832F99CC);
PPC_FUNC_IMPL(__imp__sub_832F99CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

