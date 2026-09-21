#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832B7978"))) PPC_WEAK_FUNC(sub_832B7978);
PPC_FUNC_IMPL(__imp__sub_832B7978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B797C"))) PPC_WEAK_FUNC(sub_832B797C);
PPC_FUNC_IMPL(__imp__sub_832B797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7980"))) PPC_WEAK_FUNC(sub_832B7980);
PPC_FUNC_IMPL(__imp__sub_832B7980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832B7988;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,9672(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b7e08
	if (ctx.cr6.eq) goto loc_832B7E08;
	// lwz r11,9668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// li r28,224
	ctx.r28.s64 = 224;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bgt cr6,0x832b79b4
	if (ctx.cr6.gt) goto loc_832B79B4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_832B79B4:
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x832b7e08
	if (!ctx.cr6.lt) goto loc_832B7E08;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,8660(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8660);
	// stw r11,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r11.u32);
	// lbz r11,11(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b7bbc
	if (ctx.cr6.eq) goto loc_832B7BBC;
	// lwz r8,8664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8664);
	// li r9,8
	ctx.r9.s64 = 8;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// clrlwi r6,r11,22
	ctx.r6.u64 = ctx.r11.u32 & 0x3FF;
	// clrlwi r5,r10,22
	ctx.r5.u64 = ctx.r10.u32 & 0x3FF;
loc_832B79F4:
	// lwz r7,9040(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x832b7bbc
	if (ctx.cr6.eq) goto loc_832B7BBC;
	// addic. r10,r9,-8
	ctx.xer.ca = ctx.r9.u32 > 7;
	ctx.r10.s64 = ctx.r9.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x832b7a0c
	if (!ctx.cr0.lt) goto loc_832B7A0C;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_832B7A0C:
	// lhzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addic. r11,r9,-6
	ctx.xer.ca = ctx.r9.u32 > 5;
	ctx.r11.s64 = ctx.r9.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// bge 0x832b7a20
	if (!ctx.cr0.lt) goto loc_832B7A20;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
loc_832B7A20:
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// beq cr6,0x832b7a38
	if (ctx.cr6.eq) goto loc_832B7A38;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r10.u32);
loc_832B7A38:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832b7a4c
	if (ctx.cr6.eq) goto loc_832B7A4C;
	// lwz r11,9040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r11.u32);
loc_832B7A4C:
	// lwz r7,9040(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x832b7bbc
	if (ctx.cr6.eq) goto loc_832B7BBC;
	// addic. r10,r9,-4
	ctx.xer.ca = ctx.r9.u32 > 3;
	ctx.r10.s64 = ctx.r9.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x832b7a64
	if (!ctx.cr0.lt) goto loc_832B7A64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832B7A64:
	// lhzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addic. r11,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r11.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// bge 0x832b7a78
	if (!ctx.cr0.lt) goto loc_832B7A78;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
loc_832B7A78:
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// beq cr6,0x832b7a90
	if (ctx.cr6.eq) goto loc_832B7A90;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r10.u32);
loc_832B7A90:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832b7aa4
	if (ctx.cr6.eq) goto loc_832B7AA4;
	// lwz r11,9040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r11.u32);
loc_832B7AA4:
	// lwz r7,9040(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x832b7bbc
	if (ctx.cr6.eq) goto loc_832B7BBC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x832b7ac0
	if (!ctx.cr6.lt) goto loc_832B7AC0;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
loc_832B7AC0:
	// lhzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addic. r11,r9,2
	ctx.xer.ca = ctx.r9.u32 > 4294967293;
	ctx.r11.s64 = ctx.r9.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// bge 0x832b7ad4
	if (!ctx.cr0.lt) goto loc_832B7AD4;
	// addi r11,r9,6
	ctx.r11.s64 = ctx.r9.s64 + 6;
loc_832B7AD4:
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// beq cr6,0x832b7aec
	if (ctx.cr6.eq) goto loc_832B7AEC;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r10.u32);
loc_832B7AEC:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832b7b00
	if (ctx.cr6.eq) goto loc_832B7B00;
	// lwz r11,9040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r11.u32);
loc_832B7B00:
	// lwz r7,9040(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x832b7bbc
	if (ctx.cr6.eq) goto loc_832B7BBC;
	// addic. r10,r9,4
	ctx.xer.ca = ctx.r9.u32 > 4294967291;
	ctx.r10.s64 = ctx.r9.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x832b7b18
	if (!ctx.cr0.lt) goto loc_832B7B18;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_832B7B18:
	// lhzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addic. r11,r9,6
	ctx.xer.ca = ctx.r9.u32 > 4294967289;
	ctx.r11.s64 = ctx.r9.s64 + 6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// bge 0x832b7b2c
	if (!ctx.cr0.lt) goto loc_832B7B2C;
	// addi r11,r9,10
	ctx.r11.s64 = ctx.r9.s64 + 10;
loc_832B7B2C:
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// beq cr6,0x832b7b44
	if (ctx.cr6.eq) goto loc_832B7B44;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r10.u32);
loc_832B7B44:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832b7b58
	if (ctx.cr6.eq) goto loc_832B7B58;
	// lwz r11,9040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r11.u32);
loc_832B7B58:
	// lwz r7,9040(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x832b7bbc
	if (ctx.cr6.eq) goto loc_832B7BBC;
	// addic. r10,r9,8
	ctx.xer.ca = ctx.r9.u32 > 4294967287;
	ctx.r10.s64 = ctx.r9.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x832b7b70
	if (!ctx.cr0.lt) goto loc_832B7B70;
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
loc_832B7B70:
	// lhzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addic. r11,r9,10
	ctx.xer.ca = ctx.r9.u32 > 4294967285;
	ctx.r11.s64 = ctx.r9.s64 + 10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// bge 0x832b7b84
	if (!ctx.cr0.lt) goto loc_832B7B84;
	// addi r11,r9,14
	ctx.r11.s64 = ctx.r9.s64 + 14;
loc_832B7B84:
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// beq cr6,0x832b7b9c
	if (ctx.cr6.eq) goto loc_832B7B9C;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r10.u32);
loc_832B7B9C:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832b7bb0
	if (ctx.cr6.eq) goto loc_832B7BB0;
	// lwz r11,9040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9040);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,9040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9040, ctx.r11.u32);
loc_832B7BB0:
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmpwi cr6,r9,88
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 88, ctx.xer);
	// blt cr6,0x832b79f4
	if (ctx.cr6.lt) goto loc_832B79F4;
loc_832B7BBC:
	// lbz r10,365(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 365);
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// andi. r10,r11,129
	ctx.r10.u64 = ctx.r11.u64 & 129;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,-129
	ctx.r10.s64 = ctx.r10.s64 + -129;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// addi r29,r10,256
	ctx.r29.s64 = ctx.r10.s64 + 256;
	// bne cr6,0x832b7cf0
	if (!ctx.cr6.eq) goto loc_832B7CF0;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b7c98
	if (ctx.cr6.eq) goto loc_832B7C98;
loc_832B7BFC:
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x832b7c34
	if (ctx.cr6.lt) goto loc_832B7C34;
	// lwz r10,8660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8660);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,8672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8672);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// clrlwi r4,r10,26
	ctx.r4.u64 = ctx.r10.u32 & 0x3F;
	// lwz r10,8668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8668);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832b5d38
	ctx.lr = 0x832B7C34;
	sub_832B5D38(ctx, base);
loc_832B7C34:
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x832b7c70
	if (ctx.cr6.lt) goto loc_832B7C70;
	// lwz r10,8660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8660);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,8672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8672);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// clrlwi r4,r10,26
	ctx.r4.u64 = ctx.r10.u32 & 0x3F;
	// lwz r10,8668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8668);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832b5d38
	ctx.lr = 0x832B7C70;
	sub_832B5D38(ctx, base);
loc_832B7C70:
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832b7bfc
	if (ctx.cr6.lt) goto loc_832B7BFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9673(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9673, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832B7C98:
	// addi r30,r31,8652
	ctx.r30.s64 = ctx.r31.s64 + 8652;
loc_832B7C9C:
	// lwz r9,8660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8660);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lbz r9,7(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r4,r9,26
	ctx.r4.u64 = ctx.r9.u32 & 0x3F;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832b5d38
	ctx.lr = 0x832B7CC8;
	sub_832B5D38(ctx, base);
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832b7c9c
	if (ctx.cr6.lt) goto loc_832B7C9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9673(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9673, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832B7CF0:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832b7d80
	if (ctx.cr6.eq) goto loc_832B7D80;
loc_832B7CFC:
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x832b7d28
	if (ctx.cr6.lt) goto loc_832B7D28;
	// addi r3,r31,8652
	ctx.r3.s64 = ctx.r31.s64 + 8652;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x832d3000
	ctx.lr = 0x832B7D28;
	sub_832D3000(ctx, base);
loc_832B7D28:
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x832b7d58
	if (ctx.cr6.lt) goto loc_832B7D58;
	// addi r3,r31,8652
	ctx.r3.s64 = ctx.r31.s64 + 8652;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x832d3000
	ctx.lr = 0x832B7D58;
	sub_832D3000(ctx, base);
loc_832B7D58:
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832b7cfc
	if (ctx.cr6.lt) goto loc_832B7CFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9673(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9673, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832B7D80:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,9664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9664);
	// bne cr6,0x832b7dd0
	if (!ctx.cr6.eq) goto loc_832B7DD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b7e00
	if (ctx.cr6.eq) goto loc_832B7E00;
	// addi r30,r31,8652
	ctx.r30.s64 = ctx.r31.s64 + 8652;
loc_832B7D9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8644(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// bl 0x832d1fe0
	ctx.lr = 0x832B7DA8;
	sub_832D1FE0(ctx, base);
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832b7d9c
	if (ctx.cr6.lt) goto loc_832B7D9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9673(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9673, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832B7DD0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b7e00
	if (ctx.cr6.eq) goto loc_832B7E00;
	// addi r30,r31,8652
	ctx.r30.s64 = ctx.r31.s64 + 8652;
loc_832B7DDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8644(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// bl 0x832d1c88
	ctx.lr = 0x832B7DE8;
	sub_832D1C88(ctx, base);
	// lwz r11,8644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8644);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832b7ddc
	if (ctx.cr6.lt) goto loc_832B7DDC;
loc_832B7E00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9673(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9673, ctx.r11.u8);
loc_832B7E08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7E10"))) PPC_WEAK_FUNC(sub_832B7E10);
PPC_FUNC_IMPL(__imp__sub_832B7E10) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,332
	ctx.r4.s64 = ctx.r3.s64 + 332;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r3,364
	ctx.r3.s64 = ctx.r3.s64 + 364;
	// b 0x832b5d40
	sub_832B5D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7E20"))) PPC_WEAK_FUNC(sub_832B7E20);
PPC_FUNC_IMPL(__imp__sub_832B7E20) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r11,28800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28800);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832b7e74
	if (!ctx.cr6.eq) goto loc_832B7E74;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,2020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// lwz r11,8660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8660);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b7e74
	if (!ctx.cr6.eq) goto loc_832B7E74;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,62976
	ctx.r3.u64 = ctx.r3.u64 | 62976;
	// bl 0x8329a200
	ctx.lr = 0x832B7E64;
	sub_8329A200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x832b7e78
	if (ctx.cr6.eq) goto loc_832B7E78;
loc_832B7E74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B7E78:
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// stb r11,2044(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2044, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7E90"))) PPC_WEAK_FUNC(sub_832B7E90);
PPC_FUNC_IMPL(__imp__sub_832B7E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8592);
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// stbx r5,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7EA0"))) PPC_WEAK_FUNC(sub_832B7EA0);
PPC_FUNC_IMPL(__imp__sub_832B7EA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,19,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1FFE;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r8,396(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 396);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r5,396(r10)
	PPC_STORE_U8(ctx.r10.u32 + 396, ctx.r5.u8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,396(r11)
	PPC_STORE_U8(ctx.r11.u32 + 396, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7ECC"))) PPC_WEAK_FUNC(sub_832B7ECC);
PPC_FUNC_IMPL(__imp__sub_832B7ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7ED0"))) PPC_WEAK_FUNC(sub_832B7ED0);
PPC_FUNC_IMPL(__imp__sub_832B7ED0) {
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
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b7f04
	if (ctx.cr6.eq) goto loc_832B7F04;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b7fd0
	if (ctx.cr6.eq) goto loc_832B7FD0;
loc_832B7F04:
	// lbz r11,14100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,98
	ctx.r11.u64 = ctx.r11.u64 & 98;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r11,487
	ctx.r3.s64 = ctx.r11.s64 + 487;
	// bl 0x832d65d8
	ctx.lr = 0x832B7F1C;
	sub_832D65D8(ctx, base);
	// lbz r11,9644(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b7fac
	if (ctx.cr6.eq) goto loc_832B7FAC;
	// lbz r11,9645(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9645);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b7fac
	if (!ctx.cr6.eq) goto loc_832B7FAC;
	// lis r30,-31824
	ctx.r30.s64 = -2085617664;
	// lwz r11,2008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832b7fd0
	if (!ctx.cr6.gt) goto loc_832B7FD0;
	// bl 0x832d6608
	ctx.lr = 0x832B7F48;
	sub_832D6608(ctx, base);
	// lbz r11,14100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,46
	ctx.r11.u64 = ctx.r11.u64 & 46;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r11,227
	ctx.r10.s64 = ctx.r11.s64 + 227;
	// lwz r11,2008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2008);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,2008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2008, ctx.r11.u32);
	// lbz r11,9370(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9370);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b7fd0
	if (!ctx.cr6.eq) goto loc_832B7FD0;
	// lbz r11,14100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b7f8c
	if (ctx.cr6.eq) goto loc_832B7F8C;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r11,7692
	ctx.r4.s64 = ctx.r11.s64 + 7692;
	// b 0x832b7f94
	goto loc_832B7F94;
loc_832B7F8C:
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r11,7644
	ctx.r4.s64 = ctx.r11.s64 + 7644;
loc_832B7F94:
	// addi r31,r31,9124
	ctx.r31.s64 = ctx.r31.s64 + 9124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0d18
	ctx.lr = 0x832B7FA0;
	sub_832C0D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0f08
	ctx.lr = 0x832B7FA8;
	sub_832C0F08(ctx, base);
	// b 0x832b7fd0
	goto loc_832B7FD0;
loc_832B7FAC:
	// lbz r11,14100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,46
	ctx.r11.u64 = ctx.r11.u64 & 46;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r11,227
	ctx.r9.s64 = ctx.r11.s64 + 227;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r10,2008(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2008);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,2008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2008, ctx.r10.u32);
loc_832B7FD0:
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

__attribute__((alias("__imp__sub_832B7FE8"))) PPC_WEAK_FUNC(sub_832B7FE8);
PPC_FUNC_IMPL(__imp__sub_832B7FE8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,4316
	ctx.r11.s64 = ctx.r4.s64 + 4316;
	// addi r10,r4,4310
	ctx.r10.s64 = ctx.r4.s64 + 4310;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r8,r4,81
	ctx.r8.s64 = ctx.r4.s64 + 5308416;
	// addi r8,r8,-32767
	ctx.r8.s64 = ctx.r8.s64 + -32767;
	// lhzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r9,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// rlwinm r10,r9,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r8,r9,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// clrlwi r6,r9,28
	ctx.r6.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r5,r9,30
	ctx.r5.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r31,r7,28
	ctx.r31.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r9,r7,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x30;
	// beq cr6,0x832b8108
	if (ctx.cr6.eq) goto loc_832B8108;
	// addi r9,r4,2152
	ctx.r9.s64 = ctx.r4.s64 + 2152;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x832b8080
	if (ctx.cr6.gt) goto loc_832B8080;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-32656
	ctx.r12.s64 = ctx.r12.s64 + -32656;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_832B8080;
	case 1:
		goto loc_832B8080;
	case 2:
		goto loc_832B8080;
	case 3:
		goto loc_832B80C4;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-32640(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32640);
	// lwz r25,-32640(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32640);
	// lwz r25,-32640(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32640);
	// lwz r25,-32572(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32572);
loc_832B8080:
	// rlwinm r9,r11,0,19,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r7,396(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 396);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x832b81ac
	if (ctx.cr6.eq) goto loc_832B81AC;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r11,396(r10)
	PPC_STORE_U8(ctx.r10.u32 + 396, ctx.r11.u8);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stb r11,396(r9)
	PPC_STORE_U8(ctx.r9.u32 + 396, ctx.r11.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832B80C4:
	// rlwinm r9,r11,0,19,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r7,396(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 396);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x832b81ac
	if (ctx.cr6.eq) goto loc_832B81AC;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r11,396(r10)
	PPC_STORE_U8(ctx.r10.u32 + 396, ctx.r11.u8);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stb r11,396(r9)
	PPC_STORE_U8(ctx.r9.u32 + 396, ctx.r11.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832B8108:
	// addi r8,r4,2152
	ctx.r8.s64 = ctx.r4.s64 + 2152;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x832b8174
	if (ctx.cr6.gt) goto loc_832B8174;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-32456
	ctx.r12.s64 = ctx.r12.s64 + -32456;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		goto loc_832B8174;
	case 1:
		goto loc_832B8174;
	case 2:
		goto loc_832B8148;
	case 3:
		goto loc_832B8158;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-32396(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32396);
	// lwz r25,-32396(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32396);
	// lwz r25,-32440(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32440);
	// lwz r25,-32424(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32424);
loc_832B8148:
	// rlwinm r8,r11,0,19,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x832b8184
	goto loc_832B8184;
loc_832B8158:
	// rlwinm r8,r11,0,19,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// b 0x832b818c
	goto loc_832B818C;
loc_832B8174:
	// rlwinm r8,r11,0,19,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
loc_832B8184:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_832B818C:
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r7,396(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 396);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832b81ac
	if (ctx.cr6.eq) goto loc_832B81AC;
	// ori r9,r8,1
	ctx.r9.u64 = ctx.r8.u64 | 1;
	// stb r11,396(r10)
	PPC_STORE_U8(ctx.r10.u32 + 396, ctx.r11.u8);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stb r11,396(r9)
	PPC_STORE_U8(ctx.r9.u32 + 396, ctx.r11.u8);
loc_832B81AC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B81B4"))) PPC_WEAK_FUNC(sub_832B81B4);
PPC_FUNC_IMPL(__imp__sub_832B81B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B81B8"))) PPC_WEAK_FUNC(sub_832B81B8);
PPC_FUNC_IMPL(__imp__sub_832B81B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b81fc
	if (ctx.cr6.eq) goto loc_832B81FC;
	// addi r11,r4,4310
	ctx.r11.s64 = ctx.r4.s64 + 4310;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b820c
	if (ctx.cr6.eq) goto loc_832B820C;
	// rlwinm r11,r5,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b820c
	if (!ctx.cr6.eq) goto loc_832B820C;
	// addi r11,r4,2152
	ctx.r11.s64 = ctx.r4.s64 + 2152;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x832b8208
	goto loc_832B8208;
loc_832B81FC:
	// addi r11,r4,2152
	ctx.r11.s64 = ctx.r4.s64 + 2152;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_832B8208:
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_832B820C:
	// addi r11,r4,4310
	ctx.r11.s64 = ctx.r4.s64 + 4310;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u16);
	// b 0x832b7fe8
	sub_832B7FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B821C"))) PPC_WEAK_FUNC(sub_832B821C);
PPC_FUNC_IMPL(__imp__sub_832B821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8220"))) PPC_WEAK_FUNC(sub_832B8220);
PPC_FUNC_IMPL(__imp__sub_832B8220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832B8228;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r10,161
	ctx.r10.s64 = 10551296;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r30,r6,16
	ctx.r30.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x832b8374
	if (ctx.cr6.gt) goto loc_832B8374;
	// beq cr6,0x832b8314
	if (ctx.cr6.eq) goto loc_832B8314;
	// addis r11,r11,-161
	ctx.r11.s64 = ctx.r11.s64 + -10551296;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x832b8410
	if (ctx.cr6.gt) goto loc_832B8410;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-32140
	ctx.r12.s64 = ctx.r12.s64 + -32140;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_832B843C;
	case 1:
		goto loc_832B8410;
	case 2:
		goto loc_832B82A8;
	case 3:
		goto loc_832B8410;
	case 4:
		goto loc_832B82C0;
	case 5:
		goto loc_832B8410;
	case 6:
		goto loc_832B8410;
	case 7:
		goto loc_832B8410;
	case 8:
		goto loc_832B82D8;
	case 9:
		goto loc_832B8410;
	case 10:
		goto loc_832B82EC;
	case 11:
		goto loc_832B8410;
	case 12:
		goto loc_832B8300;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-31684(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31684);
	// lwz r25,-31728(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31728);
	// lwz r25,-32088(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32088);
	// lwz r25,-31728(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31728);
	// lwz r25,-32064(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32064);
	// lwz r25,-31728(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31728);
	// lwz r25,-31728(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31728);
	// lwz r25,-31728(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31728);
	// lwz r25,-32040(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32040);
	// lwz r25,-31728(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31728);
	// lwz r25,-32020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32020);
	// lwz r25,-31728(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31728);
	// lwz r25,-32000(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32000);
loc_832B82A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b81b8
	ctx.lr = 0x832B82B8;
	sub_832B81B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_832B82C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b81b8
	ctx.lr = 0x832B82D0;
	sub_832B81B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_832B82D8:
	// lhz r11,8626(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8626);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832b8410
	if (ctx.cr6.eq) goto loc_832B8410;
	// sth r30,8626(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8626, ctx.r30.u16);
	// b 0x832b8410
	goto loc_832B8410;
loc_832B82EC:
	// lhz r11,8628(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8628);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832b8410
	if (ctx.cr6.eq) goto loc_832B8410;
	// sth r30,8628(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8628, ctx.r30.u16);
	// b 0x832b8410
	goto loc_832B8410;
loc_832B8300:
	// lhz r11,8630(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8630);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832b8410
	if (ctx.cr6.eq) goto loc_832B8410;
	// sth r30,8630(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8630, ctx.r30.u16);
	// b 0x832b8410
	goto loc_832B8410;
loc_832B8314:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x832b8320
	if (!ctx.cr6.eq) goto loc_832B8320;
	// rlwinm r30,r30,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
loc_832B8320:
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832b8344
	if (ctx.cr6.eq) goto loc_832B8344;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9644, ctx.r11.u8);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// b 0x832b8418
	goto loc_832B8418;
loc_832B8344:
	// lbz r11,9644(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b8364
	if (!ctx.cr6.eq) goto loc_832B8364;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,9644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9644, ctx.r11.u8);
	// bl 0x832b7ed0
	ctx.lr = 0x832B8364;
	sub_832B7ED0(ctx, base);
loc_832B8364:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// b 0x832b8418
	goto loc_832B8418;
loc_832B8374:
	// addis r11,r11,-161
	ctx.r11.s64 = ctx.r11.s64 + -10551296;
	// addic. r11,r11,-4608
	ctx.xer.ca = ctx.r11.u32 > 4607;
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832b83d0
	if (ctx.cr0.eq) goto loc_832B83D0;
	// cmplwi cr6,r11,7920
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7920, ctx.xer);
	// bne cr6,0x832b8410
	if (!ctx.cr6.eq) goto loc_832B8410;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// ori r5,r5,16383
	ctx.r5.u64 = ctx.r5.u64 | 16383;
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// beq cr6,0x832b83bc
	if (ctx.cr6.eq) goto loc_832B83BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,296(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x832bbe20
	ctx.lr = 0x832B83B8;
	sub_832BBE20(ctx, base);
	// b 0x832b8410
	goto loc_832B8410;
loc_832B83BC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// addis r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 2097152;
	// bl 0x832bbe20
	ctx.lr = 0x832B83CC;
	sub_832BBE20(ctx, base);
	// b 0x832b8410
	goto loc_832B8410;
loc_832B83D0:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x832b83dc
	if (!ctx.cr6.eq) goto loc_832B83DC;
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
loc_832B83DC:
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b83fc
	if (!ctx.cr6.eq) goto loc_832B83FC;
	// addi r3,r31,9124
	ctx.r3.s64 = ctx.r31.s64 + 9124;
	// bl 0x832c0d20
	ctx.lr = 0x832B83F0;
	sub_832C0D20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,9645(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9645, ctx.r11.u8);
	// b 0x832b8410
	goto loc_832B8410;
loc_832B83FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,9645(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9645, ctx.r11.u8);
	// bl 0x832b7ed0
	ctx.lr = 0x832B8410;
	sub_832B7ED0(ctx, base);
loc_832B8410:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_832B8418:
	// rlwinm r10,r29,0,19,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1FFE;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r7,396(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 396);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x832b843c
	if (ctx.cr6.eq) goto loc_832B843C;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r11,396(r9)
	PPC_STORE_U8(ctx.r9.u32 + 396, ctx.r11.u8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,396(r10)
	PPC_STORE_U8(ctx.r10.u32 + 396, ctx.r11.u8);
loc_832B843C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8444"))) PPC_WEAK_FUNC(sub_832B8444);
PPC_FUNC_IMPL(__imp__sub_832B8444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8448"))) PPC_WEAK_FUNC(sub_832B8448);
PPC_FUNC_IMPL(__imp__sub_832B8448) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,355(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 355);
	// lbz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 352);
	// lbz r8,354(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 354);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r10,351(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 351);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbz r9,347(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,353(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 353);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
loc_832B8484:
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r5,8596(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r6,r5,r9
	PPC_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r6.u8);
	// lhz r9,8596(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r9.u16);
	// bgt cr6,0x832b8484
	if (ctx.cr6.gt) goto loc_832B8484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B84BC"))) PPC_WEAK_FUNC(sub_832B84BC);
PPC_FUNC_IMPL(__imp__sub_832B84BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B84C0"))) PPC_WEAK_FUNC(sub_832B84C0);
PPC_FUNC_IMPL(__imp__sub_832B84C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,347(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// lhz r8,8596(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r9,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r9.u16);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lhz r8,8596(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,301(r3)
	PPC_STORE_U8(ctx.r3.u32 + 301, ctx.r11.u8);
	// rlwinm r11,r10,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r8,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, ctx.r8.u8);
	// stb r10,303(r3)
	PPC_STORE_U8(ctx.r3.u32 + 303, ctx.r10.u8);
	// stb r11,302(r3)
	PPC_STORE_U8(ctx.r3.u32 + 302, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8544"))) PPC_WEAK_FUNC(sub_832B8544);
PPC_FUNC_IMPL(__imp__sub_832B8544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8548"))) PPC_WEAK_FUNC(sub_832B8548);
PPC_FUNC_IMPL(__imp__sub_832B8548) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,347(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// lhz r9,8596(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r9,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r9.u16);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lhz r8,8596(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,301(r3)
	PPC_STORE_U8(ctx.r3.u32 + 301, ctx.r11.u8);
	// rlwinm r11,r10,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r8,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, ctx.r8.u8);
	// stb r10,303(r3)
	PPC_STORE_U8(ctx.r3.u32 + 303, ctx.r10.u8);
	// stb r11,302(r3)
	PPC_STORE_U8(ctx.r3.u32 + 302, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B85C8"))) PPC_WEAK_FUNC(sub_832B85C8);
PPC_FUNC_IMPL(__imp__sub_832B85C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e017d8
	sub_82E017D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B85CC"))) PPC_WEAK_FUNC(sub_832B85CC);
PPC_FUNC_IMPL(__imp__sub_832B85CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B85D0"))) PPC_WEAK_FUNC(sub_832B85D0);
PPC_FUNC_IMPL(__imp__sub_832B85D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832B85D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83299990
	ctx.lr = 0x832B85E4;
	sub_83299990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299990
	ctx.lr = 0x832B85F0;
	sub_83299990(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832b8628
	if (ctx.cr6.eq) goto loc_832B8628;
	// bl 0x82e01690
	ctx.lr = 0x832B8600;
	sub_82E01690(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83299990
	ctx.lr = 0x832B8614;
	sub_83299990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6720
	ctx.lr = 0x832B861C;
	sub_832D6720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_832B8628:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8634"))) PPC_WEAK_FUNC(sub_832B8634);
PPC_FUNC_IMPL(__imp__sub_832B8634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8638"))) PPC_WEAK_FUNC(sub_832B8638);
PPC_FUNC_IMPL(__imp__sub_832B8638) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,9648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9648);
	// ori r5,r10,32768
	ctx.r5.u64 = ctx.r10.u64 | 32768;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,9124
	ctx.r3.s64 = ctx.r3.s64 + 9124;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x832c0b38
	sub_832C0B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8668"))) PPC_WEAK_FUNC(sub_832B8668);
PPC_FUNC_IMPL(__imp__sub_832B8668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B866C"))) PPC_WEAK_FUNC(sub_832B866C);
PPC_FUNC_IMPL(__imp__sub_832B866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8670"))) PPC_WEAK_FUNC(sub_832B8670);
PPC_FUNC_IMPL(__imp__sub_832B8670) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8678"))) PPC_WEAK_FUNC(sub_832B8678);
PPC_FUNC_IMPL(__imp__sub_832B8678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B867C"))) PPC_WEAK_FUNC(sub_832B867C);
PPC_FUNC_IMPL(__imp__sub_832B867C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8680"))) PPC_WEAK_FUNC(sub_832B8680);
PPC_FUNC_IMPL(__imp__sub_832B8680) {
	PPC_FUNC_PROLOGUE();
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8688"))) PPC_WEAK_FUNC(sub_832B8688);
PPC_FUNC_IMPL(__imp__sub_832B8688) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8690"))) PPC_WEAK_FUNC(sub_832B8690);
PPC_FUNC_IMPL(__imp__sub_832B8690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832B8698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r29,r4,r31
	ctx.r29.u64 = ctx.r4.u64 + ctx.r31.u64;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lbz r10,332(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 332);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832b86f4
	if (ctx.cr6.eq) goto loc_832B86F4;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stb r9,8648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8648, ctx.r9.u8);
	// bne cr6,0x832b86f0
	if (!ctx.cr6.eq) goto loc_832B86F0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b86f0
	if (ctx.cr6.eq) goto loc_832B86F0;
	// bl 0x832b7980
	ctx.lr = 0x832B86DC;
	sub_832B7980(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,332
	ctx.r4.s64 = ctx.r31.s64 + 332;
	// stb r30,333(r31)
	PPC_STORE_U8(ctx.r31.u32 + 333, ctx.r30.u8);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x832b5d40
	ctx.lr = 0x832B86F0;
	sub_832B5D40(ctx, base);
loc_832B86F0:
	// stb r30,332(r29)
	PPC_STORE_U8(ctx.r29.u32 + 332, ctx.r30.u8);
loc_832B86F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B86FC"))) PPC_WEAK_FUNC(sub_832B86FC);
PPC_FUNC_IMPL(__imp__sub_832B86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8700"))) PPC_WEAK_FUNC(sub_832B8700);
PPC_FUNC_IMPL(__imp__sub_832B8700) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r3,r11,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B870C"))) PPC_WEAK_FUNC(sub_832B870C);
PPC_FUNC_IMPL(__imp__sub_832B870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8710"))) PPC_WEAK_FUNC(sub_832B8710);
PPC_FUNC_IMPL(__imp__sub_832B8710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832B8718;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lis r27,-31824
	ctx.r27.s64 = -2085617664;
	// lis r30,-31824
	ctx.r30.s64 = -2085617664;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_832B8738:
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B8748;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b8760
	if (ctx.cr6.eq) goto loc_832B8760;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B8760:
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B8770;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b8788
	if (ctx.cr6.eq) goto loc_832B8788;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B8788:
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B8798;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b87b0
	if (ctx.cr6.eq) goto loc_832B87B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B87B0:
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B87C0;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b87d8
	if (ctx.cr6.eq) goto loc_832B87D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B87D8:
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B87E8;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b8800
	if (ctx.cr6.eq) goto loc_832B8800;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B8800:
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B8810;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b8828
	if (ctx.cr6.eq) goto loc_832B8828;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B8828:
	// lwz r11,2028(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2028);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b885c
	if (ctx.cr6.eq) goto loc_832B885C;
	// lis r5,256
	ctx.r5.s64 = 16777216;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d6da88
	ctx.lr = 0x832B8844;
	sub_82D6DA88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b885c
	if (ctx.cr6.eq) goto loc_832B885C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B885C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329b908
	ctx.lr = 0x832B8868;
	sub_8329B908(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x832b8898
	if (!ctx.cr6.eq) goto loc_832B8898;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B8880;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b8898
	if (ctx.cr6.eq) goto loc_832B8898;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B8898:
	// li r5,4352
	ctx.r5.s64 = 4352;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B88A8;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b88c0
	if (ctx.cr6.eq) goto loc_832B88C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B88C0:
	// li r5,8704
	ctx.r5.s64 = 8704;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B88D0;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b88e8
	if (ctx.cr6.eq) goto loc_832B88E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B88E8:
	// li r5,2176
	ctx.r5.s64 = 2176;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B88F8;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b8910
	if (ctx.cr6.eq) goto loc_832B8910;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B8910:
	// li r5,1088
	ctx.r5.s64 = 1088;
	// lwz r3,656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329b5c0
	ctx.lr = 0x832B8920;
	sub_8329B5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b8938
	if (ctx.cr6.eq) goto loc_832B8938;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832B8938:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x832b8738
	if (ctx.cr6.lt) goto loc_832B8738;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xori r11,r11,16191
	ctx.r11.u64 = ctx.r11.u64 ^ 16191;
	// xori r10,r10,16191
	ctx.r10.u64 = ctx.r10.u64 ^ 16191;
	// sth r11,8632(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8632, ctx.r11.u16);
	// sth r10,8634(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8634, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8968"))) PPC_WEAK_FUNC(sub_832B8968);
PPC_FUNC_IMPL(__imp__sub_832B8968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832B8970;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x832b8dc8
	if (!ctx.cr6.eq) goto loc_832B8DC8;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r26,-31824
	ctx.r26.s64 = -2085617664;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44100
	ctx.r9.u64 = ctx.r10.u64 | 44100;
	// lwz r11,660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r10,2020(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2020);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,9744(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9744);
	// divw r11,r9,r11
	ctx.r11.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r8.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832b8dc8
	if (ctx.cr6.lt) goto loc_832B8DC8;
	// lwz r9,9736(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9736);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// subf r8,r9,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x832b89c8
	if (ctx.cr6.lt) goto loc_832B89C8;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_832B89C8:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r10,9732(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9732);
	// rlwinm r5,r28,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,2056
	ctx.r31.s64 = ctx.r11.s64 + 2056;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832b5d38
	ctx.lr = 0x832B89EC;
	sub_832B5D38(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,2036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b8a10
	if (ctx.cr6.eq) goto loc_832B8A10;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b5d38
	ctx.lr = 0x832B8A0C;
	sub_832B5D38(ctx, base);
	// b 0x832b8a1c
	goto loc_832B8A1C;
loc_832B8A10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d5d10
	ctx.lr = 0x832B8A1C;
	sub_832D5D10(ctx, base);
loc_832B8A1C:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2032);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b8a40
	if (!ctx.cr6.eq) goto loc_832B8A40;
	// lwz r11,2020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2020);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,9684
	ctx.r3.s64 = ctx.r11.s64 + 9684;
	// bl 0x832d0230
	ctx.lr = 0x832B8A40;
	sub_832D0230(ctx, base);
loc_832B8A40:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,2012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x832b8da0
	if (ctx.cr6.gt) goto loc_832B8DA0;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-30104
	ctx.r12.s64 = ctx.r12.s64 + -30104;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_832B8A78;
	case 1:
		goto loc_832B8B10;
	case 2:
		goto loc_832B8BE8;
	case 3:
		goto loc_832B8CE0;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-30088(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30088);
	// lwz r25,-29936(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29936);
	// lwz r25,-29720(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29720);
	// lwz r25,-29472(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29472);
loc_832B8A78:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832b8da0
	if (!ctx.cr6.gt) goto loc_832B8DA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_832B8A98:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// bge cr6,0x832b8ac8
	if (!ctx.cr6.lt) goto loc_832B8AC8;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x832b8ad4
	goto loc_832B8AD4;
loc_832B8AC8:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x832b8ad4
	if (!ctx.cr6.gt) goto loc_832B8AD4;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_832B8AD4:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x832b8ae4
	if (!ctx.cr6.lt) goto loc_832B8AE4;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// b 0x832b8af0
	goto loc_832B8AF0;
loc_832B8AE4:
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x832b8af0
	if (!ctx.cr6.gt) goto loc_832B8AF0;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_832B8AF0:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// sth r10,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x832b8a98
	if (!ctx.cr6.eq) goto loc_832B8A98;
	// b 0x832b8da0
	goto loc_832B8DA0;
loc_832B8B10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// srawi r4,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x832b8da0
	if (!ctx.cr6.gt) goto loc_832B8DA0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_832B8B50:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// bge cr6,0x832b8b80
	if (!ctx.cr6.lt) goto loc_832B8B80;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x832b8b8c
	goto loc_832B8B8C;
loc_832B8B80:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x832b8b8c
	if (!ctx.cr6.gt) goto loc_832B8B8C;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_832B8B8C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x832b8b9c
	if (!ctx.cr6.lt) goto loc_832B8B9C;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// b 0x832b8ba8
	goto loc_832B8BA8;
loc_832B8B9C:
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x832b8ba8
	if (!ctx.cr6.gt) goto loc_832B8BA8;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_832B8BA8:
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne cr6,0x832b8b50
	if (!ctx.cr6.eq) goto loc_832B8B50;
	// b 0x832b8da0
	goto loc_832B8DA0;
loc_832B8BE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// srawi r4,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ble cr6,0x832b8da0
	if (!ctx.cr6.gt) goto loc_832B8DA0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_832B8C30:
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// bge cr6,0x832b8c60
	if (!ctx.cr6.lt) goto loc_832B8C60;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x832b8c6c
	goto loc_832B8C6C;
loc_832B8C60:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x832b8c6c
	if (!ctx.cr6.gt) goto loc_832B8C6C;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_832B8C6C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x832b8c7c
	if (!ctx.cr6.lt) goto loc_832B8C7C;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// b 0x832b8c88
	goto loc_832B8C88;
loc_832B8C7C:
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x832b8c88
	if (!ctx.cr6.gt) goto loc_832B8C88;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_832B8C88:
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// sth r31,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r31.u16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x832b8c30
	if (!ctx.cr6.eq) goto loc_832B8C30;
	// b 0x832b8da0
	goto loc_832B8DA0;
loc_832B8CE0:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832b8da0
	if (!ctx.cr6.gt) goto loc_832B8DA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r5,-31824
	ctx.r5.s64 = -2085617664;
	// lis r6,-31824
	ctx.r6.s64 = -2085617664;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r8,2052(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2052);
	// lwz r9,2048(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2048);
loc_832B8D08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x832b8d28
	if (!ctx.cr6.lt) goto loc_832B8D28;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x832b8d34
	goto loc_832B8D34;
loc_832B8D28:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x832b8d34
	if (!ctx.cr6.gt) goto loc_832B8D34;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_832B8D34:
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r10,-256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -256, ctx.xer);
	// bge cr6,0x832b8d48
	if (!ctx.cr6.lt) goto loc_832B8D48;
	// li r10,-256
	ctx.r10.s64 = -256;
	// b 0x832b8d54
	goto loc_832B8D54;
loc_832B8D48:
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x832b8d54
	if (!ctx.cr6.gt) goto loc_832B8D54;
	// li r10,256
	ctx.r10.s64 = 256;
loc_832B8D54:
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmpwi cr6,r11,-256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -256, ctx.xer);
	// bge cr6,0x832b8d68
	if (!ctx.cr6.lt) goto loc_832B8D68;
	// li r11,-256
	ctx.r11.s64 = -256;
	// b 0x832b8d74
	goto loc_832B8D74;
loc_832B8D68:
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x832b8d74
	if (!ctx.cr6.gt) goto loc_832B8D74;
	// li r11,256
	ctx.r11.s64 = 256;
loc_832B8D74:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// sth r8,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r8.u16);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne cr6,0x832b8d08
	if (!ctx.cr6.eq) goto loc_832B8D08;
	// stw r9,2048(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2048, ctx.r9.u32);
	// stw r8,2052(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2052, ctx.r8.u32);
loc_832B8DA0:
	// lwz r11,2020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2020);
	// lwz r9,9736(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9736);
	// lwz r10,9744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9744);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// divw r8,r9,r27
	ctx.r8.s32 = ctx.r9.s32 / ctx.r27.s32;
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// stw r10,9744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9744, ctx.r10.u32);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r10,9736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9736, ctx.r10.u32);
loc_832B8DC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8DD0"))) PPC_WEAK_FUNC(sub_832B8DD0);
PPC_FUNC_IMPL(__imp__sub_832B8DD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9736, ctx.r11.u32);
	// stw r11,9740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9740, ctx.r11.u32);
	// stw r11,9744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8DE4"))) PPC_WEAK_FUNC(sub_832B8DE4);
PPC_FUNC_IMPL(__imp__sub_832B8DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8DE8"))) PPC_WEAK_FUNC(sub_832B8DE8);
PPC_FUNC_IMPL(__imp__sub_832B8DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,2020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// stw r10,9736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9736, ctx.r10.u32);
	// stw r10,9740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9740, ctx.r10.u32);
	// stw r10,9744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9744, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8E04"))) PPC_WEAK_FUNC(sub_832B8E04);
PPC_FUNC_IMPL(__imp__sub_832B8E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8E08"))) PPC_WEAK_FUNC(sub_832B8E08);
PPC_FUNC_IMPL(__imp__sub_832B8E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832B8E10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31824
	ctx.r24.s64 = -2085617664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,2020(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2020);
	// lwz r27,9732(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9732);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x832b8f9c
	if (ctx.cr6.eq) goto loc_832B8F9C;
	// lwz r9,9744(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9744);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x832b8e48
	if (!ctx.cr6.lt) goto loc_832B8E48;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
loc_832B8E48:
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// lwz r7,9740(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9740);
	// lis r8,0
	ctx.r8.s64 = 0;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// ori r8,r8,44100
	ctx.r8.u64 = ctx.r8.u64 | 44100;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,9744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9744, ctx.r9.u32);
	// divw r10,r8,r10
	ctx.r10.s32 = ctx.r8.s32 / ctx.r10.s32;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832b5cc0
	ctx.lr = 0x832B8E78;
	sub_832B5CC0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x832b8e9c
	if (ctx.cr6.eq) goto loc_832B8E9C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,12452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x832b8efc
	if (!ctx.cr6.eq) goto loc_832B8EFC;
loc_832B8E9C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x832b8f8c
	if (ctx.cr6.eq) goto loc_832B8F8C;
	// rlwinm r8,r25,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r26,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
loc_832B8EAC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// blt cr6,0x832b8ef0
	if (ctx.cr6.lt) goto loc_832B8EF0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_832B8EF0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x832b8eac
	if (!ctx.cr6.eq) goto loc_832B8EAC;
	// b 0x832b8f8c
	goto loc_832B8F8C;
loc_832B8EFC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f13,-29600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29600);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// beq cr6,0x832b8f8c
	if (ctx.cr6.eq) goto loc_832B8F8C;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r25,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r26,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
loc_832B8F28:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// blt cr6,0x832b8f84
	if (ctx.cr6.lt) goto loc_832B8F84;
	// li r31,0
	ctx.r31.s64 = 0;
loc_832B8F84:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x832b8f28
	if (!ctx.cr6.eq) goto loc_832B8F28;
loc_832B8F8C:
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r11,2020(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2020);
	// stw r10,9740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9740, ctx.r10.u32);
loc_832B8F9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8FA4"))) PPC_WEAK_FUNC(sub_832B8FA4);
PPC_FUNC_IMPL(__imp__sub_832B8FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8FA8"))) PPC_WEAK_FUNC(sub_832B8FA8);
PPC_FUNC_IMPL(__imp__sub_832B8FA8) {
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
	// addi r3,r30,9124
	ctx.r3.s64 = ctx.r30.s64 + 9124;
	// bl 0x832d6c28
	ctx.lr = 0x832B8FCC;
	sub_832D6C28(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// bl 0x8329d4b0
	ctx.lr = 0x832B8FDC;
	sub_8329D4B0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x8329b728
	ctx.lr = 0x832B8FEC;
	sub_8329B728(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8329b728
	ctx.lr = 0x832B8FFC;
	sub_8329B728(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B900C;
	sub_8329B728(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B901C;
	sub_8329B728(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,296(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// bl 0x8329b728
	ctx.lr = 0x832B902C;
	sub_8329B728(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,300
	ctx.r4.s64 = ctx.r30.s64 + 300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B903C;
	sub_8329B728(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,332
	ctx.r4.s64 = ctx.r30.s64 + 332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B904C;
	sub_8329B728(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r30,396
	ctx.r4.s64 = ctx.r30.s64 + 396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B905C;
	sub_8329B728(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8588(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8588);
	// bl 0x8329b728
	ctx.lr = 0x832B906C;
	sub_8329B728(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,8596
	ctx.r4.s64 = ctx.r30.s64 + 8596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B907C;
	sub_8329B728(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,8600
	ctx.r4.s64 = ctx.r30.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B908C;
	sub_8329B728(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,8604
	ctx.r4.s64 = ctx.r30.s64 + 8604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B909C;
	sub_8329B728(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,8620
	ctx.r4.s64 = ctx.r30.s64 + 8620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B90AC;
	sub_8329B728(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,8626
	ctx.r4.s64 = ctx.r30.s64 + 8626;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B90BC;
	sub_8329B728(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,8632
	ctx.r4.s64 = ctx.r30.s64 + 8632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B90CC;
	sub_8329B728(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,9644
	ctx.r4.s64 = ctx.r30.s64 + 9644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B90DC;
	sub_8329B728(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,9645
	ctx.r4.s64 = ctx.r30.s64 + 9645;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B90EC;
	sub_8329B728(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,9648
	ctx.r4.s64 = ctx.r30.s64 + 9648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B90FC;
	sub_8329B728(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,9652
	ctx.r4.s64 = ctx.r30.s64 + 9652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B910C;
	sub_8329B728(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,9656
	ctx.r4.s64 = ctx.r30.s64 + 9656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B911C;
	sub_8329B728(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r30,9684
	ctx.r4.s64 = ctx.r30.s64 + 9684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B912C;
	sub_8329B728(ctx, base);
	// lis r4,-9232
	ctx.r4.s64 = -605028352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,24171
	ctx.r4.u64 = ctx.r4.u64 | 24171;
	// bl 0x8329b858
	ctx.lr = 0x832B913C;
	sub_8329B858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6788
	ctx.lr = 0x832B9144;
	sub_832D6788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d60e8
	ctx.lr = 0x832B914C;
	sub_832D60E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b9160
	if (!ctx.cr6.eq) goto loc_832B9160;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b91c4
	goto loc_832B91C4;
loc_832B9160:
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r30,8608
	ctx.r4.s64 = ctx.r30.s64 + 8608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B9170;
	sub_8329B728(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8592);
	// bl 0x8329b728
	ctx.lr = 0x832B9180;
	sub_8329B728(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,53261
	ctx.r4.u64 = ctx.r4.u64 | 53261;
	// bl 0x8329b858
	ctx.lr = 0x832B9190;
	sub_8329B858(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,9116
	ctx.r4.s64 = ctx.r30.s64 + 9116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B91A0;
	sub_8329B728(ctx, base);
	// li r5,4352
	ctx.r5.s64 = 4352;
	// addi r4,r30,9748
	ctx.r4.s64 = ctx.r30.s64 + 9748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b728
	ctx.lr = 0x832B91B0;
	sub_8329B728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8329b728
	ctx.lr = 0x832B91C0;
	sub_8329B728(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832B91C4:
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

__attribute__((alias("__imp__sub_832B91DC"))) PPC_WEAK_FUNC(sub_832B91DC);
PPC_FUNC_IMPL(__imp__sub_832B91DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B91E0"))) PPC_WEAK_FUNC(sub_832B91E0);
PPC_FUNC_IMPL(__imp__sub_832B91E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832B91E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,9124
	ctx.r28.s64 = ctx.r31.s64 + 9124;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d6e70
	ctx.lr = 0x832B9200;
	sub_832D6E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b9218
	if (!ctx.cr6.eq) goto loc_832B9218;
loc_832B920C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832B9218:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// bl 0x8329d3a0
	ctx.lr = 0x832B9228;
	sub_8329D3A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b920c
	if (ctx.cr6.eq) goto loc_832B920C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9244;
	sub_8329B7A0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8329b7a0
	ctx.lr = 0x832B9254;
	sub_8329B7A0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9264;
	sub_8329B7A0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9274;
	sub_8329B7A0(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8329b7a0
	ctx.lr = 0x832B9284;
	sub_8329B7A0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,300
	ctx.r4.s64 = ctx.r31.s64 + 300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9294;
	sub_8329B7A0(ctx, base);
	// addi r29,r31,332
	ctx.r29.s64 = ctx.r31.s64 + 332;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B92A8;
	sub_8329B7A0(ctx, base);
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832B92B4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832b92b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B92B4;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B92D8;
	sub_8329B7A0(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// bl 0x8329b7a0
	ctx.lr = 0x832B92E8;
	sub_8329B7A0(ctx, base);
	// lwz r4,8588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r3,r4,8192
	ctx.r3.s64 = ctx.r4.s64 + 8192;
	// bl 0x832b5d40
	ctx.lr = 0x832B92F8;
	sub_832B5D40(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,8596
	ctx.r4.s64 = ctx.r31.s64 + 8596;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9308;
	sub_8329B7A0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8600
	ctx.r4.s64 = ctx.r31.s64 + 8600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9318;
	sub_8329B7A0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8604
	ctx.r4.s64 = ctx.r31.s64 + 8604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9328;
	sub_8329B7A0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r31,8620
	ctx.r4.s64 = ctx.r31.s64 + 8620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9338;
	sub_8329B7A0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r31,8626
	ctx.r4.s64 = ctx.r31.s64 + 8626;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9348;
	sub_8329B7A0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r31,8632
	ctx.r4.s64 = ctx.r31.s64 + 8632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9358;
	sub_8329B7A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,9644
	ctx.r4.s64 = ctx.r31.s64 + 9644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9368;
	sub_8329B7A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,9645
	ctx.r4.s64 = ctx.r31.s64 + 9645;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9378;
	sub_8329B7A0(ctx, base);
	// addi r4,r31,9648
	ctx.r4.s64 = ctx.r31.s64 + 9648;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9388;
	sub_8329B7A0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,9652
	ctx.r4.s64 = ctx.r31.s64 + 9652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9398;
	sub_8329B7A0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,9656
	ctx.r4.s64 = ctx.r31.s64 + 9656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B93A8;
	sub_8329B7A0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r31,9684
	ctx.r4.s64 = ctx.r31.s64 + 9684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B93B8;
	sub_8329B7A0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,9648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9648);
	// ori r5,r10,32768
	ctx.r5.u64 = ctx.r10.u64 | 32768;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x832b93e8
	if (ctx.cr6.gt) goto loc_832B93E8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832c0b38
	ctx.lr = 0x832B93E8;
	sub_832C0B38(ctx, base);
loc_832B93E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b8b8
	ctx.lr = 0x832B93F0;
	sub_8329B8B8(ctx, base);
	// lis r11,-9232
	ctx.r11.s64 = -605028352;
	// ori r11,r11,24170
	ctx.r11.u64 = ctx.r11.u64 | 24170;
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832b9410
	if (ctx.cr0.eq) goto loc_832B9410;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832b920c
	if (!ctx.cr6.eq) goto loc_832B920C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6728
	ctx.lr = 0x832B9410;
	sub_832D6728(ctx, base);
loc_832B9410:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6350
	ctx.lr = 0x832B9418;
	sub_832D6350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b920c
	if (ctx.cr6.eq) goto loc_832B920C;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,8608
	ctx.r4.s64 = ctx.r31.s64 + 8608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9434;
	sub_8329B7A0(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8592);
	// bl 0x8329b7a0
	ctx.lr = 0x832B9444;
	sub_8329B7A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b8b8
	ctx.lr = 0x832B944C;
	sub_8329B8B8(ctx, base);
	// cmplwi cr6,r3,53261
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53261, ctx.xer);
	// bne cr6,0x832b9484
	if (!ctx.cr6.eq) goto loc_832B9484;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,9116
	ctx.r4.s64 = ctx.r31.s64 + 9116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9464;
	sub_8329B7A0(ctx, base);
	// li r5,4352
	ctx.r5.s64 = 4352;
	// addi r4,r31,9748
	ctx.r4.s64 = ctx.r31.s64 + 9748;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x832B9474;
	sub_8329B7A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8329b7a0
	ctx.lr = 0x832B9484;
	sub_8329B7A0(ctx, base);
loc_832B9484:
	// bl 0x832b7e20
	ctx.lr = 0x832B9488;
	sub_832B7E20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B9494"))) PPC_WEAK_FUNC(sub_832B9494);
PPC_FUNC_IMPL(__imp__sub_832B9494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9498"))) PPC_WEAK_FUNC(sub_832B9498);
PPC_FUNC_IMPL(__imp__sub_832B9498) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,8604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8604);
	// lbz r6,347(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r7,r6,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832b9658
	if (ctx.cr6.eq) goto loc_832B9658;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x832b957c
	if (ctx.cr6.eq) goto loc_832B957C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x832b96f8
	if (!ctx.cr6.eq) goto loc_832B96F8;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lhz r11,8596(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// blt cr6,0x832b950c
	if (ctx.cr6.lt) goto loc_832B950C;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// divw r5,r10,r6
	ctx.r5.s32 = ctx.r10.s32 / ctx.r6.s32;
loc_832B950C:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// beq cr6,0x832b9550
	if (ctx.cr6.eq) goto loc_832B9550;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x832b96f8
	if (ctx.cr6.eq) goto loc_832B96F8;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_832B9530:
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x832b9530
	if (!ctx.cr6.eq) goto loc_832B9530;
	// b 0x832b96f8
	goto loc_832B96F8;
loc_832B9550:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x832b96f8
	if (ctx.cr6.eq) goto loc_832B96F8;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_832B955C:
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x832b955c
	if (!ctx.cr6.eq) goto loc_832B955C;
	// b 0x832b96f8
	goto loc_832B96F8;
loc_832B957C:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lhz r11,8596(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// blt cr6,0x832b95a4
	if (ctx.cr6.lt) goto loc_832B95A4;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// divw r5,r10,r6
	ctx.r5.s32 = ctx.r10.s32 / ctx.r6.s32;
loc_832B95A4:
	// rlwinm r10,r11,31,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3F;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x832b9604
	if (ctx.cr6.eq) goto loc_832B9604;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x832b9640
	if (ctx.cr6.eq) goto loc_832B9640;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_832B95D0:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832b95f0
	if (ctx.cr6.eq) goto loc_832B95F0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_832B95F0:
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne cr6,0x832b95d0
	if (!ctx.cr6.eq) goto loc_832B95D0;
	// b 0x832b9640
	goto loc_832B9640;
loc_832B9604:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x832b9640
	if (ctx.cr6.eq) goto loc_832B9640;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_832B9610:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832b9630
	if (ctx.cr6.eq) goto loc_832B9630;
	// li r8,1
	ctx.r8.s64 = 1;
loc_832B9630:
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne cr6,0x832b9610
	if (!ctx.cr6.eq) goto loc_832B9610;
loc_832B9640:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b96f8
	if (ctx.cr6.eq) goto loc_832B96F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,9120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9120, ctx.r11.u8);
	// b 0x832b96f8
	goto loc_832B96F8;
loc_832B9658:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lhz r11,8596(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832b9684
	if (ctx.cr6.lt) goto loc_832B9684;
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r5,r10,r6
	ctx.r5.s32 = ctx.r10.s32 / ctx.r6.s32;
loc_832B9684:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r8,9064(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9064, ctx.r8.u8);
	// beq cr6,0x832b96d0
	if (ctx.cr6.eq) goto loc_832B96D0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x832b96f8
	if (ctx.cr6.eq) goto loc_832B96F8;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_832B96B0:
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x832b96b0
	if (!ctx.cr6.eq) goto loc_832B96B0;
	// b 0x832b96f8
	goto loc_832B96F8;
loc_832B96D0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x832b96f8
	if (ctx.cr6.eq) goto loc_832B96F8;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_832B96DC:
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x832b96dc
	if (!ctx.cr6.eq) goto loc_832B96DC;
loc_832B96F8:
	// lhz r10,8596(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// mullw r11,r31,r6
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B9714"))) PPC_WEAK_FUNC(sub_832B9714);
PPC_FUNC_IMPL(__imp__sub_832B9714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9718"))) PPC_WEAK_FUNC(sub_832B9718);
PPC_FUNC_IMPL(__imp__sub_832B9718) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 352);
	// li r31,1
	ctx.r31.s64 = 1;
	// lbz r10,351(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 351);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r9,8604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8604);
	// lbz r8,347(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x832b97c8
	if (!ctx.cr6.eq) goto loc_832B97C8;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lhz r10,8596(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stb r31,9064(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9064, ctx.r31.u8);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x832b9788
	if (ctx.cr6.lt) goto loc_832B9788;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r11,r11,r8
	ctx.r11.s32 = ctx.r11.s32 / ctx.r8.s32;
loc_832B9788:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b97a8
	if (ctx.cr6.eq) goto loc_832B97A8;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
loc_832B9794:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b9794
	if (!ctx.cr6.eq) goto loc_832B9794;
loc_832B97A8:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x832b97c8
	if (!ctx.cr6.eq) goto loc_832B97C8;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x832b97c8
	if (!ctx.cr6.lt) goto loc_832B97C8;
	// rlwinm r11,r4,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
loc_832B97C8:
	// lbz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 352);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b97e0
	if (ctx.cr6.eq) goto loc_832B97E0;
	// stb r31,8648(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8648, ctx.r31.u8);
	// stb r9,352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 352, ctx.r9.u8);
loc_832B97E0:
	// lbz r11,351(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 351);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b97f4
	if (ctx.cr6.eq) goto loc_832B97F4;
	// stb r31,8648(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8648, ctx.r31.u8);
	// stb r9,351(r3)
	PPC_STORE_U8(ctx.r3.u32 + 351, ctx.r9.u8);
loc_832B97F4:
	// lhz r10,8596(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// mullw r11,r8,r30
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8600, ctx.r9.u32);
	// sth r11,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B9814"))) PPC_WEAK_FUNC(sub_832B9814);
PPC_FUNC_IMPL(__imp__sub_832B9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9818"))) PPC_WEAK_FUNC(sub_832B9818);
PPC_FUNC_IMPL(__imp__sub_832B9818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832B9820;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8600);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x832b9844
	if (!ctx.cr6.eq) goto loc_832B9844;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x832b9718
	ctx.lr = 0x832B983C;
	sub_832B9718(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832B9844:
	// lhz r11,8596(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8596);
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,8604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8604);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x832b98d4
	if (ctx.cr6.eq) goto loc_832B98D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x832b9898
	if (ctx.cr6.eq) goto loc_832B9898;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x832b98fc
	if (!ctx.cr6.eq) goto loc_832B98FC;
	// rlwinm r11,r11,0,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7E;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 168);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x832b98fc
	if (ctx.cr6.eq) goto loc_832B98FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b7980
	ctx.lr = 0x832B9890;
	sub_832B7980(ctx, base);
	// sth r30,168(r29)
	PPC_STORE_U16(ctx.r29.u32 + 168, ctx.r30.u16);
	// b 0x832b98fc
	goto loc_832B98FC;
loc_832B9898:
	// rlwinm r11,r11,31,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3F;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// andi. r10,r10,3822
	ctx.r10.u64 = ctx.r10.u64 & 3822;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832b98cc
	if (ctx.cr6.eq) goto loc_832B98CC;
	// lbz r10,9120(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832b98cc
	if (!ctx.cr6.eq) goto loc_832B98CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,9120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9120, ctx.r10.u8);
loc_832B98CC:
	// sthx r30,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u16);
	// b 0x832b98fc
	goto loc_832B98FC;
loc_832B98D4:
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r29,r11,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lhzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r28.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x832b98fc
	if (ctx.cr6.eq) goto loc_832B98FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b7980
	ctx.lr = 0x832B98F0;
	sub_832B7980(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r30,r29,r28
	PPC_STORE_U16(ctx.r29.u32 + ctx.r28.u32, ctx.r30.u16);
	// stb r10,9064(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9064, ctx.r10.u8);
loc_832B98FC:
	// lbz r11,347(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 347);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lhz r10,8596(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8596);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x832b9918
	if (!ctx.cr6.lt) goto loc_832B9918;
	// sth r11,8596(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8596, ctx.r11.u16);
loc_832B9918:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B9920"))) PPC_WEAK_FUNC(sub_832B9920);
PPC_FUNC_IMPL(__imp__sub_832B9920) {
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
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// bl 0x8329c190
	ctx.lr = 0x832B9944;
	sub_8329C190(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,224
	ctx.r10.s64 = 224;
	// stb r11,14100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14100, ctx.r11.u8);
	// stw r10,9652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9652, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832B9968"))) PPC_WEAK_FUNC(sub_832B9968);
PPC_FUNC_IMPL(__imp__sub_832B9968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832B9970;
	__savegprlr_24(ctx, base);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,9116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x832b9b94
	if (ctx.cr6.lt) goto loc_832B9B94;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r25,-31824
	ctx.r25.s64 = -2085617664;
loc_832B9994:
	// lwz r9,2020(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r27,r9
	ctx.r11.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lwz r29,9748(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9748);
	// lwz r28,9752(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// bne cr6,0x832b99cc
	if (!ctx.cr6.eq) goto loc_832B99CC;
	// lwz r10,8660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8660);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// addi r28,r10,224
	ctx.r28.s64 = ctx.r10.s64 + 224;
loc_832B99CC:
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r11,9756
	ctx.r4.s64 = ctx.r11.s64 + 9756;
	// addi r3,r9,8652
	ctx.r3.s64 = ctx.r9.s64 + 8652;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x832b9aac
	if (!ctx.cr6.eq) goto loc_832B9AAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x832d0ad8
	ctx.lr = 0x832B99E8;
	sub_832D0AD8(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x832b9b80
	if (!ctx.cr6.lt) goto loc_832B9B80;
loc_832B99F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B9A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r11,640
	ctx.r9.s64 = ctx.r11.s64 + 640;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832b9a9c
	if (ctx.cr6.eq) goto loc_832B9A9C;
loc_832B9A30:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r4,r4,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lhzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhzx r6,r6,r5
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rldicr r8,r8,16,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFFFFFF;
	// lhzx r5,r4,r24
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r24.u32);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lhzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832b9a30
	if (!ctx.cr6.eq) goto loc_832B9A30;
loc_832B9A9C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832b99f0
	if (ctx.cr6.lt) goto loc_832B99F0;
	// b 0x832b9b80
	goto loc_832B9B80;
loc_832B9AAC:
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// bl 0x832d0830
	ctx.lr = 0x832B9AB4;
	sub_832D0830(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x832b9b80
	if (!ctx.cr6.lt) goto loc_832B9B80;
loc_832B9ABC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B9AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832B9AFC:
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne cr6,0x832b9afc
	if (!ctx.cr6.eq) goto loc_832B9AFC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x832b9abc
	if (ctx.cr6.lt) goto loc_832B9ABC;
loc_832B9B80:
	// lwz r10,9116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9116);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,136
	ctx.r27.s64 = ctx.r27.s64 + 136;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x832b9994
	if (!ctx.cr6.gt) goto loc_832B9994;
loc_832B9B94:
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B9B9C"))) PPC_WEAK_FUNC(sub_832B9B9C);
PPC_FUNC_IMPL(__imp__sub_832B9B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9BA0"))) PPC_WEAK_FUNC(sub_832B9BA0);
PPC_FUNC_IMPL(__imp__sub_832B9BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832B9BA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r30,8652
	ctx.r29.s64 = ctx.r30.s64 + 8652;
	// lbz r11,8652(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b9be8
	if (!ctx.cr6.eq) goto loc_832B9BE8;
	// addi r6,r30,168
	ctx.r6.s64 = ctx.r30.s64 + 168;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r30,364
	ctx.r5.s64 = ctx.r30.s64 + 364;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x832d0720
	ctx.lr = 0x832B9BE4;
	sub_832D0720(ctx, base);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
loc_832B9BE8:
	// lwz r11,8660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8660);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// andi. r11,r11,129
	ctx.r11.u64 = ctx.r11.u64 & 129;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-129
	ctx.r11.s64 = ctx.r11.s64 + -129;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,8660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8660);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lbz r10,2044(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2044);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832b9c5c
	if (ctx.cr6.eq) goto loc_832B9C5C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_832B9C5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b9968
	ctx.lr = 0x832B9C68;
	sub_832B9968(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x832B9C78;
	sub_82C10E98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r28.u8);
	// bl 0x832b64c0
	ctx.lr = 0x832B9C88;
	sub_832B64C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B9C90"))) PPC_WEAK_FUNC(sub_832B9C90);
PPC_FUNC_IMPL(__imp__sub_832B9C90) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,9672(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,9673(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9673);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832b7980
	sub_832B7980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B9CAC"))) PPC_WEAK_FUNC(sub_832B9CAC);
PPC_FUNC_IMPL(__imp__sub_832B9CAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B9CB0"))) PPC_WEAK_FUNC(sub_832B9CB0);
PPC_FUNC_IMPL(__imp__sub_832B9CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x832B9CB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,8652(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b9ce0
	if (ctx.cr6.eq) goto loc_832B9CE0;
	// lwz r11,9664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x832b9ce4
	if (!ctx.cr6.eq) goto loc_832B9CE4;
loc_832B9CE0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_832B9CE4:
	// lbz r10,14100(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// stb r11,9672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9672, ctx.r11.u8);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r10,46
	ctx.r11.u64 = ctx.r10.u64 & 46;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r11,r11,227
	ctx.r11.s64 = ctx.r11.s64 + 227;
	// mulli r11,r11,262
	ctx.r11.s64 = ctx.r11.s64 * 262;
	// stw r11,2008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2008, ctx.r11.u32);
	// lbz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 344);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b9d24
	if (ctx.cr6.eq) goto loc_832B9D24;
	// lhz r11,9656(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9656);
	// xori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 ^ 16;
	// b 0x832b9d2c
	goto loc_832B9D2C;
loc_832B9D24:
	// lhz r11,9656(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9656);
	// andi. r11,r11,65519
	ctx.r11.u64 = ctx.r11.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_832B9D2C:
	// sth r11,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r25,-31824
	ctx.r25.s64 = -2085617664;
	// li r27,224
	ctx.r27.s64 = 224;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r31,9756
	ctx.r3.s64 = ctx.r31.s64 + 9756;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r23,r31,4
	ctx.r23.s64 = ctx.r31.s64 + 4;
	// andi. r11,r11,65527
	ctx.r11.u64 = ctx.r11.u64 & 65527;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// sth r11,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r11.u16);
	// stb r11,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r11.u8);
	// stb r10,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r10.u8);
	// lbz r11,342(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 342);
	// stw r11,9660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9660, ctx.r11.u32);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r29,r11,704
	ctx.r29.s64 = ctx.r11.s64 + 704;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r11,122(r29)
	PPC_STORE_U8(ctx.r29.u32 + 122, ctx.r11.u8);
	// stw r28,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r28.u32);
	// stw r11,2016(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2016, ctx.r11.u32);
	// stw r28,9116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9116, ctx.r28.u32);
	// stw r28,9748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9748, ctx.r28.u32);
	// stw r27,9752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9752, ctx.r27.u32);
	// bl 0x832b5d40
	ctx.lr = 0x832B9D94;
	sub_832B5D40(ctx, base);
	// addi r26,r31,332
	ctx.r26.s64 = ctx.r31.s64 + 332;
	// stb r28,9120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9120, ctx.r28.u8);
	// addi r24,r31,364
	ctx.r24.s64 = ctx.r31.s64 + 364;
	// stw r28,9004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9004, ctx.r28.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b5d40
	ctx.lr = 0x832B9DB4;
	sub_832B5D40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,9668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9668, ctx.r28.u32);
	// stb r11,8648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8648, ctx.r11.u8);
loc_832B9DC0:
	// lwz r11,9668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// lbz r10,8648(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8648);
	// stb r28,309(r31)
	PPC_STORE_U8(ctx.r31.u32 + 309, ctx.r28.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r11.u8);
	// beq cr6,0x832b9df4
	if (ctx.cr6.eq) goto loc_832B9DF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b7980
	ctx.lr = 0x832B9DE0;
	sub_832B7980(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b5d40
	ctx.lr = 0x832B9DF0;
	sub_832B5D40(ctx, base);
	// stb r28,8648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8648, ctx.r28.u8);
loc_832B9DF4:
	// lhz r11,9656(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9656);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// sth r11,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r11.u16);
	// stb r11,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r11.u8);
	// stb r10,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r10.u8);
	// lwz r11,9660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9660);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,9660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9660, ctx.r11.u32);
	// bge 0x832b9e40
	if (!ctx.cr0.lt) goto loc_832B9E40;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b9e40
	if (ctx.cr6.eq) goto loc_832B9E40;
	// lbz r11,342(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 342);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,9660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9660, ctx.r11.u32);
	// bl 0x8329dbd0
	ctx.lr = 0x832B9E40;
	sub_8329DBD0(ctx, base);
loc_832B9E40:
	// lbz r11,122(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b9e6c
	if (!ctx.cr6.eq) goto loc_832B9E6C;
	// lbz r11,14100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,98
	ctx.r11.u64 = ctx.r11.u64 & 98;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,487
	ctx.r11.s64 = ctx.r11.s64 + 487;
	// addi r4,r11,-414
	ctx.r4.s64 = ctx.r11.s64 + -414;
	// bl 0x832badc8
	ctx.lr = 0x832B9E6C;
	sub_832BADC8(ctx, base);
loc_832B9E6C:
	// lbz r11,9672(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b9e8c
	if (ctx.cr6.eq) goto loc_832B9E8C;
	// lbz r11,9673(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9673);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b9e8c
	if (ctx.cr6.eq) goto loc_832B9E8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b7980
	ctx.lr = 0x832B9E8C;
	sub_832B7980(ctx, base);
loc_832B9E8C:
	// lhz r11,9656(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9656);
	// andi. r11,r11,65531
	ctx.r11.u64 = ctx.r11.u64 & 65531;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// sth r11,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r11.u16);
	// stb r11,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r11.u8);
	// stb r10,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r10.u8);
	// lbz r11,122(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b9ebc
	if (!ctx.cr6.eq) goto loc_832B9EBC;
	// li r4,414
	ctx.r4.s64 = 414;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832badc8
	ctx.lr = 0x832B9EBC;
	sub_832BADC8(ctx, base);
loc_832B9EBC:
	// lbz r11,9120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b9f54
	if (ctx.cr6.eq) goto loc_832B9F54;
	// lwz r11,9116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9116);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x832b9f44
	if (!ctx.cr6.lt) goto loc_832B9F44;
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// lwz r10,9668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,9752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9752, ctx.r10.u32);
	// lwz r10,9668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832b9efc
	if (ctx.cr6.eq) goto loc_832B9EFC;
	// lwz r11,9116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9116, ctx.r11.u32);
loc_832B9EFC:
	// lwz r11,9116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9116);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bge cr6,0x832b9f50
	if (!ctx.cr6.lt) goto loc_832B9F50;
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,9748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9748, ctx.r10.u32);
	// lwz r11,9116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9116);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,9752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9752, ctx.r27.u32);
	// lwz r11,9116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9116);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,9756
	ctx.r3.s64 = ctx.r11.s64 + 9756;
	// bl 0x832b5d40
	ctx.lr = 0x832B9F40;
	sub_832B5D40(ctx, base);
	// b 0x832b9f50
	goto loc_832B9F50;
loc_832B9F44:
	// lwz r11,2016(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2016);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2016(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2016, ctx.r11.u32);
loc_832B9F50:
	// stb r28,9120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9120, ctx.r28.u8);
loc_832B9F54:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b7ed0
	ctx.lr = 0x832B9F60;
	sub_832B7ED0(ctx, base);
	// lwz r11,9668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9668, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// blt cr6,0x832b9dc0
	if (ctx.cr6.lt) goto loc_832B9DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b7980
	ctx.lr = 0x832B9F80;
	sub_832B7980(ctx, base);
	// lbz r11,122(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b9fc8
	if (!ctx.cr6.eq) goto loc_832B9FC8;
loc_832B9F90:
	// lwz r11,9676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9676);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832b9fc8
	if (!ctx.cr6.lt) goto loc_832B9FC8;
	// lbz r11,14100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,98
	ctx.r11.u64 = ctx.r11.u64 & 98;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r11,487
	ctx.r4.s64 = ctx.r11.s64 + 487;
	// bl 0x832badc8
	ctx.lr = 0x832B9FB8;
	sub_832BADC8(ctx, base);
	// lbz r11,122(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b9f90
	if (ctx.cr6.eq) goto loc_832B9F90;
loc_832B9FC8:
	// lbz r11,333(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 333);
	// stw r30,9680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9680, ctx.r30.u32);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b9fe8
	if (ctx.cr6.eq) goto loc_832B9FE8;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329dbd0
	ctx.lr = 0x832B9FE8;
	sub_8329DBD0(ctx, base);
loc_832B9FE8:
	// lhz r11,9656(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9656);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// sth r11,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r11.u16);
	// stb r11,301(r23)
	PPC_STORE_U8(ctx.r23.u32 + 301, ctx.r11.u8);
	// stb r10,300(r23)
	PPC_STORE_U8(ctx.r23.u32 + 300, ctx.r10.u8);
	// lbz r11,9644(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ba04c
	if (ctx.cr6.eq) goto loc_832BA04C;
	// lbz r11,9645(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9645);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ba04c
	if (!ctx.cr6.eq) goto loc_832BA04C;
	// lbz r11,14100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ba030
	if (ctx.cr6.eq) goto loc_832BA030;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r11,7668
	ctx.r4.s64 = ctx.r11.s64 + 7668;
	// b 0x832ba038
	goto loc_832BA038;
loc_832BA030:
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r11,7620
	ctx.r4.s64 = ctx.r11.s64 + 7620;
loc_832BA038:
	// addi r30,r31,9124
	ctx.r30.s64 = ctx.r31.s64 + 9124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0d18
	ctx.lr = 0x832BA044;
	sub_832C0D18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0f08
	ctx.lr = 0x832BA04C;
	sub_832C0F08(ctx, base);
loc_832BA04C:
	// lwz r11,9668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// cmpwi cr6,r11,263
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 263, ctx.xer);
	// bge cr6,0x832ba0ec
	if (!ctx.cr6.lt) goto loc_832BA0EC;
loc_832BA058:
	// lbz r11,122(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ba0c8
	if (!ctx.cr6.eq) goto loc_832BA0C8;
	// lwz r10,9668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r11,9656(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9656);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r10,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r10.u8);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// sth r11,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r11.u16);
	// stb r11,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r11.u8);
	// stb r10,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r10.u8);
	// lbz r11,14100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,98
	ctx.r11.u64 = ctx.r11.u64 & 98;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,487
	ctx.r11.s64 = ctx.r11.s64 + 487;
	// addi r4,r11,-414
	ctx.r4.s64 = ctx.r11.s64 + -414;
	// bl 0x832badc8
	ctx.lr = 0x832BA0A4;
	sub_832BADC8(ctx, base);
	// lhz r11,9656(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 9656);
	// li r4,414
	ctx.r4.s64 = 414;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// andi. r11,r11,65531
	ctx.r11.u64 = ctx.r11.u64 & 65531;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// sth r11,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r11.u16);
	// stb r11,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r11.u8);
	// stb r10,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r10.u8);
	// bl 0x832badc8
	ctx.lr = 0x832BA0C8;
	sub_832BADC8(ctx, base);
loc_832BA0C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b7ed0
	ctx.lr = 0x832BA0D4;
	sub_832B7ED0(ctx, base);
	// lwz r11,9668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9668, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,263
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 263, ctx.xer);
	// blt cr6,0x832ba058
	if (ctx.cr6.lt) goto loc_832BA058;
loc_832BA0EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b8968
	ctx.lr = 0x832BA0F4;
	sub_832B8968(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r11,28800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28800);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x832ba13c
	if (!ctx.cr6.eq) goto loc_832BA13C;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,2020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// lwz r11,8660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8660);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ba13c
	if (!ctx.cr6.eq) goto loc_832BA13C;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,62976
	ctx.r3.u64 = ctx.r3.u64 | 62976;
	// bl 0x8329a200
	ctx.lr = 0x832BA12C;
	sub_8329A200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x832ba140
	if (ctx.cr6.eq) goto loc_832BA140;
loc_832BA13C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_832BA140:
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// stb r11,2044(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2044, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA150"))) PPC_WEAK_FUNC(sub_832BA150);
PPC_FUNC_IMPL(__imp__sub_832BA150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832BA158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,9124
	ctx.r3.s64 = ctx.r31.s64 + 9124;
	// stw r29,9648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9648, ctx.r29.u32);
	// stb r29,9644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9644, ctx.r29.u8);
	// stb r11,9645(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9645, ctx.r11.u8);
	// bl 0x832c0d20
	ctx.lr = 0x832BA17C;
	sub_832C0D20(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// bl 0x8329d628
	ctx.lr = 0x832BA188;
	sub_8329D628(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,118
	ctx.r4.s64 = 118;
	// lwz r3,8588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// bl 0x832b5d38
	ctx.lr = 0x832BA198;
	sub_832B5D38(ctx, base);
	// addi r30,r31,396
	ctx.r30.s64 = ctx.r31.s64 + 396;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b5d38
	ctx.lr = 0x832BA1AC;
	sub_832B5D38(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x832b5d38
	ctx.lr = 0x832BA1BC;
	sub_832B5D38(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x832b5d38
	ctx.lr = 0x832BA1CC;
	sub_832B5D38(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x832b5d38
	ctx.lr = 0x832BA1DC;
	sub_832B5D38(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x832b5d38
	ctx.lr = 0x832BA1EC;
	sub_832B5D38(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b5d38
	ctx.lr = 0x832BA1FC;
	sub_832B5D38(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x832b5d38
	ctx.lr = 0x832BA20C;
	sub_832B5D38(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8592);
	// bl 0x832b5d38
	ctx.lr = 0x832BA21C;
	sub_832B5D38(ctx, base);
	// lbz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 408);
	// cmplwi cr6,r11,191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 191, ctx.xer);
	// beq cr6,0x832ba234
	if (ctx.cr6.eq) goto loc_832BA234;
	// li r11,191
	ctx.r11.s64 = 191;
	// stb r11,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r11.u8);
	// stb r11,409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 409, ctx.r11.u8);
loc_832BA234:
	// lbz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 404);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x832ba24c
	if (ctx.cr6.eq) goto loc_832BA24C;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r11.u8);
	// stb r11,405(r31)
	PPC_STORE_U8(ctx.r31.u32 + 405, ctx.r11.u8);
loc_832BA24C:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,2024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ba2e0
	if (ctx.cr6.eq) goto loc_832BA2E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x832ba2e0
	if (ctx.cr6.gt) goto loc_832BA2E0;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-23936
	ctx.r12.s64 = ctx.r12.s64 + -23936;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_832BA290;
	case 1:
		goto loc_832BA2A4;
	case 2:
		goto loc_832BA2B8;
	case 3:
		goto loc_832BA2CC;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-23920(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23920);
	// lwz r25,-23900(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23900);
	// lwz r25,-23880(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23880);
	// lwz r25,-23860(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
loc_832BA290:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// beq cr6,0x832ba304
	if (ctx.cr6.eq) goto loc_832BA304;
	// li r11,160
	ctx.r11.s64 = 160;
	// b 0x832ba2fc
	goto loc_832BA2FC;
loc_832BA2A4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// beq cr6,0x832ba304
	if (ctx.cr6.eq) goto loc_832BA304;
	// li r11,224
	ctx.r11.s64 = 224;
	// b 0x832ba2fc
	goto loc_832BA2FC;
loc_832BA2B8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x832ba304
	if (ctx.cr6.eq) goto loc_832BA304;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x832ba2fc
	goto loc_832BA2FC;
loc_832BA2CC:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x832ba304
	if (ctx.cr6.eq) goto loc_832BA304;
	// li r11,96
	ctx.r11.s64 = 96;
	// b 0x832ba2fc
	goto loc_832BA2FC;
loc_832BA2E0:
	// lwz r11,9652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9652);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832ba304
	if (ctx.cr6.eq) goto loc_832BA304;
loc_832BA2FC:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r11,397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 397, ctx.r11.u8);
loc_832BA304:
	// lwz r11,9652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9652);
	// li r10,512
	ctx.r10.s64 = 512;
	// sth r29,8596(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8596, ctx.r29.u16);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// stw r29,8600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8600, ctx.r29.u32);
	// stw r29,8604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8604, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r10.u16);
	// beq cr6,0x832ba330
	if (ctx.cr6.eq) goto loc_832BA330;
	// li r11,513
	ctx.r11.s64 = 513;
	// sth r11,9656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 9656, ctx.r11.u16);
loc_832BA330:
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,117
	ctx.r3.s64 = 7667712;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,44100
	ctx.r4.u64 = ctx.r4.u64 | 44100;
	// ori r3,r3,2741
	ctx.r3.u64 = ctx.r3.u64 | 2741;
	// bl 0x832d3630
	ctx.lr = 0x832BA348;
	sub_832D3630(ctx, base);
	// addi r3,r31,9684
	ctx.r3.s64 = ctx.r31.s64 + 9684;
	// bl 0x832d0148
	ctx.lr = 0x832BA350;
	sub_832D0148(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BA364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r11,8632(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8632, ctx.r11.u16);
	// sth r11,8634(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8634, ctx.r11.u16);
	// sth r11,8636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8636, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA380"))) PPC_WEAK_FUNC(sub_832BA380);
PPC_FUNC_IMPL(__imp__sub_832BA380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8592);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lwz r11,8592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8592);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// lwz r11,8592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8592);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// lwz r11,8592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8592);
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BA3A4"))) PPC_WEAK_FUNC(sub_832BA3A4);
PPC_FUNC_IMPL(__imp__sub_832BA3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA3A8"))) PPC_WEAK_FUNC(sub_832BA3A8);
PPC_FUNC_IMPL(__imp__sub_832BA3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// b 0x832b8220
	sub_832B8220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA3C4"))) PPC_WEAK_FUNC(sub_832BA3C4);
PPC_FUNC_IMPL(__imp__sub_832BA3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA3C8"))) PPC_WEAK_FUNC(sub_832BA3C8);
PPC_FUNC_IMPL(__imp__sub_832BA3C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8608, ctx.r11.u32);
	// stw r11,8612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8612, ctx.r11.u32);
	// bl 0x832b7fe8
	ctx.lr = 0x832BA3E8;
	sub_832B7FE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832b7fe8
	ctx.lr = 0x832BA3F0;
	sub_832B7FE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BA400"))) PPC_WEAK_FUNC(sub_832BA400);
PPC_FUNC_IMPL(__imp__sub_832BA400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832BA408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,355(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 355);
	// lbz r10,354(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 354);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,353(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 353);
	// lbz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 352);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,351(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 351);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r30,20
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 20;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x832ba458
	if (!ctx.cr6.gt) goto loc_832BA458;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x832ba4a4
	if (!ctx.cr6.eq) goto loc_832BA4A4;
loc_832BA458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b7980
	ctx.lr = 0x832BA460;
	sub_832B7980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x832ba494
	if (!ctx.cr6.lt) goto loc_832BA494;
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832b9498
	ctx.lr = 0x832BA48C;
	sub_832B9498(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_832BA494:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832b9498
	ctx.lr = 0x832BA4A4;
	sub_832B9498(ctx, base);
loc_832BA4A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA4AC"))) PPC_WEAK_FUNC(sub_832BA4AC);
PPC_FUNC_IMPL(__imp__sub_832BA4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA4B0"))) PPC_WEAK_FUNC(sub_832BA4B0);
PPC_FUNC_IMPL(__imp__sub_832BA4B0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x832ba4c8
	if (!ctx.cr6.eq) goto loc_832BA4C8;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BA4C8:
	// rlwinm r11,r5,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// addis r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -12582912;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x832ba5d8
	if (ctx.cr6.gt) goto loc_832BA5D8;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-23312
	ctx.r12.s64 = ctx.r12.s64 + -23312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_832BA554;
	case 1:
		goto loc_832BA5D8;
	case 2:
		goto loc_832BA554;
	case 3:
		goto loc_832BA5D8;
	case 4:
		goto loc_832BA558;
	case 5:
		goto loc_832BA5D8;
	case 6:
		goto loc_832BA558;
	case 7:
		goto loc_832BA5D8;
	case 8:
		goto loc_832BA5D8;
	case 9:
		goto loc_832BA5D8;
	case 10:
		goto loc_832BA5D8;
	case 11:
		goto loc_832BA5D8;
	case 12:
		goto loc_832BA5D8;
	case 13:
		goto loc_832BA5D8;
	case 14:
		goto loc_832BA5D8;
	case 15:
		goto loc_832BA5D8;
	case 16:
		goto loc_832BA690;
	case 17:
		goto loc_832BA5D8;
	case 18:
		goto loc_832BA690;
	case 19:
		goto loc_832BA5D8;
	case 20:
		goto loc_832BA690;
	case 21:
		goto loc_832BA5D8;
	case 22:
		goto loc_832BA5D8;
	case 23:
		goto loc_832BA5D8;
	case 24:
		goto loc_832BA690;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-23212(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23212);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23212(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23212);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23208(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23208);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23208(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23208);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-22896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-22896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-22896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-22896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
loc_832BA554:
	// b 0x832b9818
	sub_832B9818(ctx, base);
	return;
loc_832BA558:
	// lwz r11,8600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ba660
	if (ctx.cr6.eq) goto loc_832BA660;
	// lhz r10,8596(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// rlwinm r9,r4,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// rlwimi r11,r4,30,26,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x3C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8604, ctx.r11.u32);
	// rlwinm r11,r10,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// sth r9,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r9.u16);
	// stw r8,8600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8600, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ba5dc
	if (ctx.cr6.eq) goto loc_832BA5DC;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x832ba5b0
	if (ctx.cr6.eq) goto loc_832BA5B0;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x832ba5d8
	if (!ctx.cr6.eq) goto loc_832BA5D8;
	// b 0x832b8448
	sub_832B8448(ctx, base);
	return;
loc_832BA5B0:
	// lbz r11,355(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 355);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832ba5c4
	if (!ctx.cr6.eq) goto loc_832BA5C4;
	// b 0x832ba400
	sub_832BA400(ctx, base);
	return;
loc_832BA5C4:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x832ba5d8
	if (!ctx.cr6.eq) goto loc_832BA5D8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,8600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8600, ctx.r11.u32);
loc_832BA5D8:
	// blr 
	return;
loc_832BA5DC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832ba5d8
	if (!ctx.cr6.eq) goto loc_832BA5D8;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r9,8596(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// lbz r10,347(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lbzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r10,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, ctx.r10.u8);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r8,301(r3)
	PPC_STORE_U8(ctx.r3.u32 + 301, ctx.r8.u8);
	// stb r11,303(r3)
	PPC_STORE_U8(ctx.r3.u32 + 303, ctx.r11.u8);
	// stb r10,302(r3)
	PPC_STORE_U8(ctx.r3.u32 + 302, ctx.r10.u8);
	// blr 
	return;
loc_832BA660:
	// rlwinm r11,r4,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x832ba678
	if (!ctx.cr6.eq) goto loc_832BA678;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r4,r4,24,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x1F;
	// b 0x832b8690
	sub_832B8690(ctx, base);
	return;
loc_832BA678:
	// li r11,4
	ctx.r11.s64 = 4;
	// clrlwi r10,r4,18
	ctx.r10.u64 = ctx.r4.u32 & 0x3FFF;
	// rlwimi r11,r4,18,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 18) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// sth r10,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r10.u16);
	// stw r11,8600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8600, ctx.r11.u32);
	// blr 
	return;
loc_832BA690:
	// addi r3,r3,9684
	ctx.r3.s64 = ctx.r3.s64 + 9684;
	// b 0x832d01a0
	sub_832D01A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA4F0"))) PPC_WEAK_FUNC(sub_832BA4F0);
PPC_FUNC_IMPL(__imp__sub_832BA4F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r25,-23212(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23212);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23212(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23212);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23208(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23208);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23208(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23208);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-22896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-22896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-22896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-23080(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23080);
	// lwz r25,-22896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// b 0x832b9818
	sub_832B9818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA558"))) PPC_WEAK_FUNC(sub_832BA558);
PPC_FUNC_IMPL(__imp__sub_832BA558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ba660
	if (ctx.cr6.eq) goto loc_832BA660;
	// lhz r10,8596(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// rlwinm r9,r4,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// rlwimi r11,r4,30,26,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x3C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8604, ctx.r11.u32);
	// rlwinm r11,r10,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// sth r9,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r9.u16);
	// stw r8,8600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8600, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ba5dc
	if (ctx.cr6.eq) goto loc_832BA5DC;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x832ba5b0
	if (ctx.cr6.eq) goto loc_832BA5B0;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x832ba5d8
	if (!ctx.cr6.eq) goto loc_832BA5D8;
	// b 0x832b8448
	sub_832B8448(ctx, base);
	return;
loc_832BA5B0:
	// lbz r11,355(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 355);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832ba5c4
	if (!ctx.cr6.eq) goto loc_832BA5C4;
	// b 0x832ba400
	sub_832BA400(ctx, base);
	return;
loc_832BA5C4:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x832ba5d8
	if (!ctx.cr6.eq) goto loc_832BA5D8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,8600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8600, ctx.r11.u32);
loc_832BA5D8:
	// blr 
	return;
loc_832BA5DC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x832ba5d8
	if (!ctx.cr6.eq) goto loc_832BA5D8;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r9,8596(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8596);
	// lbz r10,347(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lbzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r10,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, ctx.r10.u8);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r8,301(r3)
	PPC_STORE_U8(ctx.r3.u32 + 301, ctx.r8.u8);
	// stb r11,303(r3)
	PPC_STORE_U8(ctx.r3.u32 + 303, ctx.r11.u8);
	// stb r10,302(r3)
	PPC_STORE_U8(ctx.r3.u32 + 302, ctx.r10.u8);
	// blr 
	return;
loc_832BA660:
	// rlwinm r11,r4,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x832ba678
	if (!ctx.cr6.eq) goto loc_832BA678;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r4,r4,24,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x1F;
	// b 0x832b8690
	sub_832B8690(ctx, base);
	return;
loc_832BA678:
	// li r11,4
	ctx.r11.s64 = 4;
	// clrlwi r10,r4,18
	ctx.r10.u64 = ctx.r4.u32 & 0x3FFF;
	// rlwimi r11,r4,18,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 18) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// sth r10,8596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8596, ctx.r10.u16);
	// stw r11,8600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BA690"))) PPC_WEAK_FUNC(sub_832BA690);
PPC_FUNC_IMPL(__imp__sub_832BA690) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,9684
	ctx.r3.s64 = ctx.r3.s64 + 9684;
	// b 0x832d01a0
	sub_832D01A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA698"))) PPC_WEAK_FUNC(sub_832BA698);
PPC_FUNC_IMPL(__imp__sub_832BA698) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bge cr6,0x832ba6bc
	if (!ctx.cr6.lt) goto loc_832BA6BC;
	// lwz r10,8588(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8588);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// stbx r4,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// blr 
	return;
loc_832BA6BC:
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x832ba71c
	if (!ctx.cr6.eq) {
		sub_832BA71C(ctx, base);
		return;
	}
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-22804
	ctx.r12.s64 = ctx.r12.s64 + -22804;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_832BA6FC;
	case 1:
		goto loc_832BA704;
	case 2:
		goto loc_832BA70C;
	case 3:
		goto loc_832BA714;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-22788(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22788);
	// lwz r25,-22780(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22780);
	// lwz r25,-22772(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22772);
	// lwz r25,-22764(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22764);
loc_832BA6FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d3810
	sub_832D3810(ctx, base);
	return;
loc_832BA704:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d3810
	sub_832D3810(ctx, base);
	return;
loc_832BA70C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x832d3810
	sub_832D3810(ctx, base);
	return;
loc_832BA714:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x832d3810
	sub_832D3810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA6EC"))) PPC_WEAK_FUNC(sub_832BA6EC);
PPC_FUNC_IMPL(__imp__sub_832BA6EC) {
	PPC_FUNC_PROLOGUE();
	// lwz r25,-22788(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22788);
	// lwz r25,-22780(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22780);
	// lwz r25,-22772(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22772);
	// lwz r25,-22764(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22764);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d3810
	sub_832D3810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA704"))) PPC_WEAK_FUNC(sub_832BA704);
PPC_FUNC_IMPL(__imp__sub_832BA704) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d3810
	sub_832D3810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA70C"))) PPC_WEAK_FUNC(sub_832BA70C);
PPC_FUNC_IMPL(__imp__sub_832BA70C) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x832d3810
	sub_832D3810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA714"))) PPC_WEAK_FUNC(sub_832BA714);
PPC_FUNC_IMPL(__imp__sub_832BA714) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x832d3810
	sub_832D3810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA71C"))) PPC_WEAK_FUNC(sub_832BA71C);
PPC_FUNC_IMPL(__imp__sub_832BA71C) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r10,24576
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24576, ctx.xer);
	// bne cr6,0x832ba76c
	if (!ctx.cr6.eq) goto loc_832BA76C;
	// lwz r11,9648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9648);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// ori r5,r8,32768
	ctx.r5.u64 = ctx.r8.u64 | 32768;
	// rlwimi r11,r10,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// rlwinm r11,r11,0,8,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF8000;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r11,9648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9648, ctx.r11.u32);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,9124
	ctx.r3.s64 = ctx.r3.s64 + 9124;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x832c0b38
	sub_832C0B38(ctx, base);
	return;
loc_832BA76C:
	// cmpwi cr6,r11,32529
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32529, ctx.xer);
	// beq cr6,0x832ba788
	if (ctx.cr6.eq) goto loc_832BA788;
	// cmplwi cr6,r11,32785
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32785, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r3,9684
	ctx.r3.s64 = ctx.r3.s64 + 9684;
	// b 0x832d01a0
	sub_832D01A0(ctx, base);
	return;
loc_832BA788:
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r3,9684
	ctx.r3.s64 = ctx.r3.s64 + 9684;
	// b 0x832d01a0
	sub_832D01A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA794"))) PPC_WEAK_FUNC(sub_832BA794);
PPC_FUNC_IMPL(__imp__sub_832BA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA798"))) PPC_WEAK_FUNC(sub_832BA798);
PPC_FUNC_IMPL(__imp__sub_832BA798) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,2020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2020);
	// lwz r9,8592(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8592);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r9,8592(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8592);
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// lwz r9,8592(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8592);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// lwz r10,8592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8592);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BA7C8"))) PPC_WEAK_FUNC(sub_832BA7C8);
PPC_FUNC_IMPL(__imp__sub_832BA7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832BA7D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31824
	ctx.r31.s64 = -2085617664;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r29,-31845
	ctx.r29.s64 = -2086993920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5900, ctx.r11.u32);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832ba81c
	if (!ctx.cr6.eq) goto loc_832BA81C;
loc_832BA804:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b9cb0
	ctx.lr = 0x832BA80C;
	sub_832B9CB0(ctx, base);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832ba804
	if (ctx.cr6.eq) goto loc_832BA804;
loc_832BA81C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,5900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5900, ctx.r11.u32);
	// bl 0x832b9cb0
	ctx.lr = 0x832BA82C;
	sub_832B9CB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA834"))) PPC_WEAK_FUNC(sub_832BA834);
PPC_FUNC_IMPL(__imp__sub_832BA834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA838"))) PPC_WEAK_FUNC(sub_832BA838);
PPC_FUNC_IMPL(__imp__sub_832BA838) {
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
	// bl 0x8329b9c0
	ctx.lr = 0x832BA850;
	sub_8329B9C0(ctx, base);
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,5900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5900);
	// stw r11,9664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9664, ctx.r11.u32);
	// bl 0x832b9cb0
	ctx.lr = 0x832BA864;
	sub_832B9CB0(ctx, base);
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

__attribute__((alias("__imp__sub_832BA878"))) PPC_WEAK_FUNC(sub_832BA878);
PPC_FUNC_IMPL(__imp__sub_832BA878) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x832ba890
	if (!ctx.cr6.eq) goto loc_832BA890;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// b 0x832ba698
	sub_832BA698(ctx, base);
	return;
loc_832BA890:
	// rlwinm r10,r6,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// b 0x832ba698
	sub_832BA698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA89C"))) PPC_WEAK_FUNC(sub_832BA89C);
PPC_FUNC_IMPL(__imp__sub_832BA89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA8A0"))) PPC_WEAK_FUNC(sub_832BA8A0);
PPC_FUNC_IMPL(__imp__sub_832BA8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// b 0x832ba4b0
	sub_832BA4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA8BC"))) PPC_WEAK_FUNC(sub_832BA8BC);
PPC_FUNC_IMPL(__imp__sub_832BA8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA8C0"))) PPC_WEAK_FUNC(sub_832BA8C0);
PPC_FUNC_IMPL(__imp__sub_832BA8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// b 0x832ba698
	sub_832BA698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA8D4"))) PPC_WEAK_FUNC(sub_832BA8D4);
PPC_FUNC_IMPL(__imp__sub_832BA8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA8D8"))) PPC_WEAK_FUNC(sub_832BA8D8);
PPC_FUNC_IMPL(__imp__sub_832BA8D8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,17
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFF;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r3,2020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// bne cr6,0x832ba8f8
	if (!ctx.cr6.eq) goto loc_832BA8F8;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// b 0x832ba698
	sub_832BA698(ctx, base);
	return;
loc_832BA8F8:
	// rlwinm r10,r5,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// b 0x832ba698
	sub_832BA698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA904"))) PPC_WEAK_FUNC(sub_832BA904);
PPC_FUNC_IMPL(__imp__sub_832BA904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA908"))) PPC_WEAK_FUNC(sub_832BA908);
PPC_FUNC_IMPL(__imp__sub_832BA908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832BA910;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r30,r11,19456
	ctx.r30.u64 = ctx.r11.u64 | 19456;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x832b5d48
	ctx.lr = 0x832BA930;
	sub_832B5D48(ctx, base);
	// li r10,336
	ctx.r10.s64 = 336;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r5,r11,31620
	ctx.r5.s64 = ctx.r11.s64 + 31620;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x8325a308
	ctx.lr = 0x832BA958;
	sub_8325A308(ctx, base);
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,25864
	ctx.r29.s64 = ctx.r11.s64 + 25864;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6da88
	ctx.lr = 0x832BA96C;
	sub_82D6DA88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x832bace4
	if (ctx.cr6.lt) goto loc_832BACE4;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r30,r11,704
	ctx.r30.s64 = ctx.r11.s64 + 704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329a480
	ctx.lr = 0x832BA984;
	sub_8329A480(ctx, base);
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x832bbd08
	ctx.lr = 0x832BA998;
	sub_832BBD08(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,31608
	ctx.r4.s64 = ctx.r11.s64 + 31608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832bb960
	ctx.lr = 0x832BA9AC;
	sub_832BB960(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// bl 0x832d70d0
	ctx.lr = 0x832BA9C8;
	sub_832D70D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// bl 0x832bbe20
	ctx.lr = 0x832BA9E8;
	sub_832BBE20(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r27,64
	ctx.r27.s64 = 4194304;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x832baa28
	if (!ctx.cr6.lt) goto loc_832BAA28;
loc_832BA9FC:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x832bbe20
	ctx.lr = 0x832BAA18;
	sub_832BBE20(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832ba9fc
	if (ctx.cr6.lt) goto loc_832BA9FC;
loc_832BAA28:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832b59b8
	ctx.lr = 0x832BAA3C;
	sub_832B59B8(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82e017d8
	ctx.lr = 0x832BAA44;
	sub_82E017D8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// bl 0x832bbe20
	ctx.lr = 0x832BAA64;
	sub_832BBE20(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r29,224
	ctx.r29.s64 = 14680064;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// lis r25,1
	ctx.r25.s64 = 65536;
	// lis r26,255
	ctx.r26.s64 = 16711680;
loc_832BAA78:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r5,r29,r27
	ctx.r5.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x832bbe20
	ctx.lr = 0x832BAA90;
	sub_832BBE20(ctx, base);
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x832baa78
	if (ctx.cr6.lt) goto loc_832BAA78;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r5,160
	ctx.r5.s64 = 10485760;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-22312
	ctx.r7.s64 = ctx.r10.s64 + -22312;
	// addi r6,r11,-22312
	ctx.r6.s64 = ctx.r11.s64 + -22312;
	// ori r5,r5,32767
	ctx.r5.u64 = ctx.r5.u64 | 32767;
	// lis r4,160
	ctx.r4.s64 = 10485760;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x832bbac8
	ctx.lr = 0x832BAAC4;
	sub_832BBAC8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r5,160
	ctx.r5.s64 = 10485760;
	// lis r4,160
	ctx.r4.s64 = 10485760;
	// addi r7,r10,-22312
	ctx.r7.s64 = ctx.r10.s64 + -22312;
	// stw r8,8588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8588, ctx.r8.u32);
	// addi r6,r11,-22312
	ctx.r6.s64 = ctx.r11.s64 + -22312;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x832bbac8
	ctx.lr = 0x832BAAF4;
	sub_832BBAC8(ctx, base);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r5,161
	ctx.r5.s64 = 10551296;
	// addi r8,r31,396
	ctx.r8.s64 = ctx.r31.s64 + 396;
	// addi r7,r10,-23640
	ctx.r7.s64 = ctx.r10.s64 + -23640;
	// addi r6,r11,-23640
	ctx.r6.s64 = ctx.r11.s64 + -23640;
	// ori r5,r5,8191
	ctx.r5.u64 = ctx.r5.u64 | 8191;
	// lis r4,161
	ctx.r4.s64 = 10551296;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x832bbac8
	ctx.lr = 0x832BAB1C;
	sub_832BBAC8(ctx, base);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r5,192
	ctx.r5.s64 = 12582912;
	// addi r8,r31,300
	ctx.r8.s64 = ctx.r31.s64 + 300;
	// addi r7,r10,-22368
	ctx.r7.s64 = ctx.r10.s64 + -22368;
	// addi r6,r11,-22368
	ctx.r6.s64 = ctx.r11.s64 + -22368;
	// ori r5,r5,31
	ctx.r5.u64 = ctx.r5.u64 | 31;
	// lis r4,192
	ctx.r4.s64 = 12582912;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x832bbac8
	ctx.lr = 0x832BAB44;
	sub_832BBAC8(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82e01690
	ctx.lr = 0x832BAB4C;
	sub_82E01690(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// bl 0x832b5d38
	ctx.lr = 0x832BAB5C;
	sub_832B5D38(ctx, base);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832bab98
	if (ctx.cr6.lt) goto loc_832BAB98;
	// lis r9,33
	ctx.r9.s64 = 2162688;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x832bab80
	if (!ctx.cr6.gt) goto loc_832BAB80;
	// lis r10,33
	ctx.r10.s64 = 2162688;
loc_832BAB80:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r3,r9,16384
	ctx.r3.s64 = ctx.r9.s64 + 16384;
	// bl 0x832b5d40
	ctx.lr = 0x832BAB98;
	sub_832B5D40(ctx, base);
loc_832BAB98:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832babc4
	if (!ctx.cr6.lt) goto loc_832BABC4;
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// lwz r7,296(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,16383
	ctx.r5.u64 = ctx.r5.u64 | 16383;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x832bbe20
	ctx.lr = 0x832BABC4;
	sub_832BBE20(ctx, base);
loc_832BABC4:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82e017d8
	ctx.lr = 0x832BABCC;
	sub_82E017D8(ctx, base);
	// lwz r11,8588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// lbz r10,14100(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14100);
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,8592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8592, ctx.r11.u32);
	// beq cr6,0x832babf4
	if (ctx.cr6.eq) goto loc_832BABF4;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r11,7668
	ctx.r4.s64 = ctx.r11.s64 + 7668;
	// b 0x832babfc
	goto loc_832BABFC;
loc_832BABF4:
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r4,r11,7620
	ctx.r4.s64 = ctx.r11.s64 + 7620;
loc_832BABFC:
	// addi r30,r31,9124
	ctx.r30.s64 = ctx.r31.s64 + 9124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0d18
	ctx.lr = 0x832BAC08;
	sub_832C0D18(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,8588(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0b38
	ctx.lr = 0x832BAC1C;
	sub_832C0B38(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// lwz r6,8588(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0b38
	ctx.lr = 0x832BAC30;
	sub_832C0B38(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r6,8588(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0b38
	ctx.lr = 0x832BAC44;
	sub_832C0B38(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,24576
	ctx.r4.s64 = 24576;
	// lwz r6,8588(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0b38
	ctx.lr = 0x832BAC58;
	sub_832C0B38(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r6,8592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8592);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0b38
	ctx.lr = 0x832BAC6C;
	sub_832C0B38(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x832c0b38
	ctx.lr = 0x832BAC84;
	sub_832C0B38(ctx, base);
	// lwz r10,8592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8592);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,14112
	ctx.r3.s64 = 14112;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r10,8592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8592);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lwz r10,8592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8592);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// lwz r10,8592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8592);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// bl 0x82e01690
	ctx.lr = 0x832BACB0;
	sub_82E01690(ctx, base);
	// li r5,14112
	ctx.r5.s64 = 14112;
	// stw r3,9732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9732, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832b5d38
	ctx.lr = 0x832BACC0;
	sub_832B5D38(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,117
	ctx.r3.s64 = 7667712;
	// stw r24,9744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9744, ctx.r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,9736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9736, ctx.r24.u32);
	// ori r4,r4,44100
	ctx.r4.u64 = ctx.r4.u64 | 44100;
	// stw r24,9740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9740, ctx.r24.u32);
	// ori r3,r3,2741
	ctx.r3.u64 = ctx.r3.u64 | 2741;
	// bl 0x832d3630
	ctx.lr = 0x832BACE4;
	sub_832D3630(ctx, base);
loc_832BACE4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BACEC"))) PPC_WEAK_FUNC(sub_832BACEC);
PPC_FUNC_IMPL(__imp__sub_832BACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BACF0"))) PPC_WEAK_FUNC(sub_832BACF0);
PPC_FUNC_IMPL(__imp__sub_832BACF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27880
	ctx.r11.s64 = ctx.r11.s64 + 27880;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x832bad24
	if (ctx.cr6.eq) goto loc_832BAD24;
	// bl 0x82e01698
	ctx.lr = 0x832BAD20;
	sub_82E01698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832BAD24:
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

__attribute__((alias("__imp__sub_832BAD38"))) PPC_WEAK_FUNC(sub_832BAD38);
PPC_FUNC_IMPL(__imp__sub_832BAD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x8329ddd0
	sub_8329DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAD3C"))) PPC_WEAK_FUNC(sub_832BAD3C);
PPC_FUNC_IMPL(__imp__sub_832BAD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAD40"))) PPC_WEAK_FUNC(sub_832BAD40);
PPC_FUNC_IMPL(__imp__sub_832BAD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8329de28
	sub_8329DE28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAD44"))) PPC_WEAK_FUNC(sub_832BAD44);
PPC_FUNC_IMPL(__imp__sub_832BAD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAD48"))) PPC_WEAK_FUNC(sub_832BAD48);
PPC_FUNC_IMPL(__imp__sub_832BAD48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8329de80
	sub_8329DE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAD4C"))) PPC_WEAK_FUNC(sub_832BAD4C);
PPC_FUNC_IMPL(__imp__sub_832BAD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAD50"))) PPC_WEAK_FUNC(sub_832BAD50);
PPC_FUNC_IMPL(__imp__sub_832BAD50) {
	PPC_FUNC_PROLOGUE();
	// b 0x8329dfc0
	sub_8329DFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAD54"))) PPC_WEAK_FUNC(sub_832BAD54);
PPC_FUNC_IMPL(__imp__sub_832BAD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAD58"))) PPC_WEAK_FUNC(sub_832BAD58);
PPC_FUNC_IMPL(__imp__sub_832BAD58) {
	PPC_FUNC_PROLOGUE();
	// b 0x8329def8
	sub_8329DEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAD5C"))) PPC_WEAK_FUNC(sub_832BAD5C);
PPC_FUNC_IMPL(__imp__sub_832BAD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAD60"))) PPC_WEAK_FUNC(sub_832BAD60);
PPC_FUNC_IMPL(__imp__sub_832BAD60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8329df70
	sub_8329DF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAD64"))) PPC_WEAK_FUNC(sub_832BAD64);
PPC_FUNC_IMPL(__imp__sub_832BAD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAD68"))) PPC_WEAK_FUNC(sub_832BAD68);
PPC_FUNC_IMPL(__imp__sub_832BAD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832BAD70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r9,r4,1,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r29,r11,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x832badbc
	if (ctx.cr6.eq) goto loc_832BADBC;
loc_832BADA0:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832BADB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832bada0
	if (!ctx.cr6.eq) goto loc_832BADA0;
loc_832BADBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BADC4"))) PPC_WEAK_FUNC(sub_832BADC4);
PPC_FUNC_IMPL(__imp__sub_832BADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BADC8"))) PPC_WEAK_FUNC(sub_832BADC8);
PPC_FUNC_IMPL(__imp__sub_832BADC8) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add. r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// blt 0x832baea4
	if (ctx.cr0.lt) goto loc_832BAEA4;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_832BADF4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r10,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BAE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r10,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BAE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r10,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BAE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r10,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BAE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bge 0x832badf4
	if (!ctx.cr0.lt) goto loc_832BADF4;
loc_832BAEA4:
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

__attribute__((alias("__imp__sub_832BAEBC"))) PPC_WEAK_FUNC(sub_832BAEBC);
PPC_FUNC_IMPL(__imp__sub_832BAEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAEC0"))) PPC_WEAK_FUNC(sub_832BAEC0);
PPC_FUNC_IMPL(__imp__sub_832BAEC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BAECC"))) PPC_WEAK_FUNC(sub_832BAECC);
PPC_FUNC_IMPL(__imp__sub_832BAECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAED0"))) PPC_WEAK_FUNC(sub_832BAED0);
PPC_FUNC_IMPL(__imp__sub_832BAED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BAEE8"))) PPC_WEAK_FUNC(sub_832BAEE8);
PPC_FUNC_IMPL(__imp__sub_832BAEE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832baf08
	if (!ctx.cr6.gt) goto loc_832BAF08;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r10,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r10.u8);
	// blr 
	return;
loc_832BAF08:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BAF14"))) PPC_WEAK_FUNC(sub_832BAF14);
PPC_FUNC_IMPL(__imp__sub_832BAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAF18"))) PPC_WEAK_FUNC(sub_832BAF18);
PPC_FUNC_IMPL(__imp__sub_832BAF18) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BAF28"))) PPC_WEAK_FUNC(sub_832BAF28);
PPC_FUNC_IMPL(__imp__sub_832BAF28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BAF38"))) PPC_WEAK_FUNC(sub_832BAF38);
PPC_FUNC_IMPL(__imp__sub_832BAF38) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8329df70
	sub_8329DF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAF48"))) PPC_WEAK_FUNC(sub_832BAF48);
PPC_FUNC_IMPL(__imp__sub_832BAF48) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x8329df70
	sub_8329DF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAF64"))) PPC_WEAK_FUNC(sub_832BAF64);
PPC_FUNC_IMPL(__imp__sub_832BAF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAF68"))) PPC_WEAK_FUNC(sub_832BAF68);
PPC_FUNC_IMPL(__imp__sub_832BAF68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x8329df70
	sub_8329DF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAF84"))) PPC_WEAK_FUNC(sub_832BAF84);
PPC_FUNC_IMPL(__imp__sub_832BAF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAF88"))) PPC_WEAK_FUNC(sub_832BAF88);
PPC_FUNC_IMPL(__imp__sub_832BAF88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r4,13
	ctx.r9.s64 = ctx.r4.s64 + 13;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8329df70
	sub_8329DF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BAFBC"))) PPC_WEAK_FUNC(sub_832BAFBC);
PPC_FUNC_IMPL(__imp__sub_832BAFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BAFC0"))) PPC_WEAK_FUNC(sub_832BAFC0);
PPC_FUNC_IMPL(__imp__sub_832BAFC0) {
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
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8329e018
	ctx.lr = 0x832BAFE4;
	sub_8329E018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329df70
	ctx.lr = 0x832BAFF0;
	sub_8329DF70(ctx, base);
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

__attribute__((alias("__imp__sub_832BB004"))) PPC_WEAK_FUNC(sub_832BB004);
PPC_FUNC_IMPL(__imp__sub_832BB004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB008"))) PPC_WEAK_FUNC(sub_832BB008);
PPC_FUNC_IMPL(__imp__sub_832BB008) {
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
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x832bb1c4
	if (ctx.cr6.gt) goto loc_832BB1C4;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-20420
	ctx.r12.s64 = ctx.r12.s64 + -20420;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_832BB050;
	case 1:
		goto loc_832BB08C;
	case 2:
		goto loc_832BB0D8;
	case 3:
		goto loc_832BB130;
	case 4:
		goto loc_832BB180;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-20400(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20400);
	// lwz r25,-20340(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20340);
	// lwz r25,-20264(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20264);
	// lwz r25,-20176(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20176);
	// lwz r25,-20096(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
loc_832BB050:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8329df70
	ctx.lr = 0x832BB078;
	sub_8329DF70(ctx, base);
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
loc_832BB08C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x8329df70
	ctx.lr = 0x832BB0C4;
	sub_8329DF70(ctx, base);
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
loc_832BB0D8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// or r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 | ctx.r11.u64;
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
loc_832BB130:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e0e0
	ctx.lr = 0x832BB138;
	sub_8329E0E0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// or r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 | ctx.r11.u64;
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
loc_832BB180:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
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
loc_832BB1C4:
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

__attribute__((alias("__imp__sub_832BB1DC"))) PPC_WEAK_FUNC(sub_832BB1DC);
PPC_FUNC_IMPL(__imp__sub_832BB1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB1E0"))) PPC_WEAK_FUNC(sub_832BB1E0);
PPC_FUNC_IMPL(__imp__sub_832BB1E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r3,22(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB1F0"))) PPC_WEAK_FUNC(sub_832BB1F0);
PPC_FUNC_IMPL(__imp__sub_832BB1F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r3,54(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB200"))) PPC_WEAK_FUNC(sub_832BB200);
PPC_FUNC_IMPL(__imp__sub_832BB200) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8329def8
	sub_8329DEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB210"))) PPC_WEAK_FUNC(sub_832BB210);
PPC_FUNC_IMPL(__imp__sub_832BB210) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x8329def8
	sub_8329DEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB22C"))) PPC_WEAK_FUNC(sub_832BB22C);
PPC_FUNC_IMPL(__imp__sub_832BB22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB230"))) PPC_WEAK_FUNC(sub_832BB230);
PPC_FUNC_IMPL(__imp__sub_832BB230) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x8329def8
	sub_8329DEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB24C"))) PPC_WEAK_FUNC(sub_832BB24C);
PPC_FUNC_IMPL(__imp__sub_832BB24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB250"))) PPC_WEAK_FUNC(sub_832BB250);
PPC_FUNC_IMPL(__imp__sub_832BB250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r4,13
	ctx.r9.s64 = ctx.r4.s64 + 13;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8329def8
	sub_8329DEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB284"))) PPC_WEAK_FUNC(sub_832BB284);
PPC_FUNC_IMPL(__imp__sub_832BB284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB288"))) PPC_WEAK_FUNC(sub_832BB288);
PPC_FUNC_IMPL(__imp__sub_832BB288) {
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
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8329e018
	ctx.lr = 0x832BB2AC;
	sub_8329E018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329def8
	ctx.lr = 0x832BB2B8;
	sub_8329DEF8(ctx, base);
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

__attribute__((alias("__imp__sub_832BB2CC"))) PPC_WEAK_FUNC(sub_832BB2CC);
PPC_FUNC_IMPL(__imp__sub_832BB2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB2D0"))) PPC_WEAK_FUNC(sub_832BB2D0);
PPC_FUNC_IMPL(__imp__sub_832BB2D0) {
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
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x832bb448
	if (ctx.cr6.gt) goto loc_832BB448;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-19708
	ctx.r12.s64 = ctx.r12.s64 + -19708;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_832BB318;
	case 1:
		goto loc_832BB354;
	case 2:
		goto loc_832BB3A0;
	case 3:
		goto loc_832BB3E0;
	case 4:
		goto loc_832BB418;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-19688(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19688);
	// lwz r25,-19628(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19628);
	// lwz r25,-19552(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19552);
	// lwz r25,-19488(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19488);
	// lwz r25,-19432(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19432);
loc_832BB318:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8329def8
	ctx.lr = 0x832BB340;
	sub_8329DEF8(ctx, base);
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
loc_832BB354:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x8329def8
	ctx.lr = 0x832BB38C;
	sub_8329DEF8(ctx, base);
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
loc_832BB3A0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r10,r10,1,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFC;
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
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
loc_832BB3E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e0e0
	ctx.lr = 0x832BB3E8;
	sub_8329E0E0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r11,r11,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lhzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
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
loc_832BB418:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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
loc_832BB448:
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

__attribute__((alias("__imp__sub_832BB460"))) PPC_WEAK_FUNC(sub_832BB460);
PPC_FUNC_IMPL(__imp__sub_832BB460) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,23(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB470"))) PPC_WEAK_FUNC(sub_832BB470);
PPC_FUNC_IMPL(__imp__sub_832BB470) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,55(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 55);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB480"))) PPC_WEAK_FUNC(sub_832BB480);
PPC_FUNC_IMPL(__imp__sub_832BB480) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8329dfc0
	sub_8329DFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB490"))) PPC_WEAK_FUNC(sub_832BB490);
PPC_FUNC_IMPL(__imp__sub_832BB490) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bne cr6,0x832bb4b4
	if (!ctx.cr6.eq) goto loc_832BB4B4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// b 0x832bb4c0
	goto loc_832BB4C0;
loc_832BB4B4:
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_832BB4C0:
	// b 0x8329dfc0
	sub_8329DFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB4C4"))) PPC_WEAK_FUNC(sub_832BB4C4);
PPC_FUNC_IMPL(__imp__sub_832BB4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB4C8"))) PPC_WEAK_FUNC(sub_832BB4C8);
PPC_FUNC_IMPL(__imp__sub_832BB4C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// bne cr6,0x832bb4f0
	if (!ctx.cr6.eq) goto loc_832BB4F0;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
loc_832BB4F0:
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8329dfc0
	sub_8329DFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB4F8"))) PPC_WEAK_FUNC(sub_832BB4F8);
PPC_FUNC_IMPL(__imp__sub_832BB4F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r4,13
	ctx.r9.s64 = ctx.r4.s64 + 13;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8329dfc0
	sub_8329DFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB52C"))) PPC_WEAK_FUNC(sub_832BB52C);
PPC_FUNC_IMPL(__imp__sub_832BB52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB530"))) PPC_WEAK_FUNC(sub_832BB530);
PPC_FUNC_IMPL(__imp__sub_832BB530) {
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
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8329e018
	ctx.lr = 0x832BB554;
	sub_8329E018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329dfc0
	ctx.lr = 0x832BB560;
	sub_8329DFC0(ctx, base);
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

__attribute__((alias("__imp__sub_832BB574"))) PPC_WEAK_FUNC(sub_832BB574);
PPC_FUNC_IMPL(__imp__sub_832BB574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB578"))) PPC_WEAK_FUNC(sub_832BB578);
PPC_FUNC_IMPL(__imp__sub_832BB578) {
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
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x832bb718
	if (ctx.cr6.gt) goto loc_832BB718;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-19028
	ctx.r12.s64 = ctx.r12.s64 + -19028;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_832BB5C0;
	case 1:
		goto loc_832BB5FC;
	case 2:
		goto loc_832BB648;
	case 3:
		goto loc_832BB69C;
	case 4:
		goto loc_832BB6E8;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-19008(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19008);
	// lwz r25,-18948(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18948);
	// lwz r25,-18872(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18872);
	// lwz r25,-18788(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18788);
	// lwz r25,-18712(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18712);
loc_832BB5C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8329dfc0
	ctx.lr = 0x832BB5E8;
	sub_8329DFC0(ctx, base);
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
loc_832BB5FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x8329dfc0
	ctx.lr = 0x832BB634;
	sub_8329DFC0(ctx, base);
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
loc_832BB648:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r9,r10,1,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFC;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x832bb71c
	if (!ctx.cr6.eq) goto loc_832BB71C;
	// rlwinm r3,r11,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
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
loc_832BB69C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e0e0
	ctx.lr = 0x832BB6A4;
	sub_8329E0E0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rlwinm r10,r11,1,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x832bb71c
	if (!ctx.cr6.eq) goto loc_832BB71C;
	// rlwinm r3,r11,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
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
loc_832BB6E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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
loc_832BB718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832BB71C:
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

__attribute__((alias("__imp__sub_832BB730"))) PPC_WEAK_FUNC(sub_832BB730);
PPC_FUNC_IMPL(__imp__sub_832BB730) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB738"))) PPC_WEAK_FUNC(sub_832BB738);
PPC_FUNC_IMPL(__imp__sub_832BB738) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB748"))) PPC_WEAK_FUNC(sub_832BB748);
PPC_FUNC_IMPL(__imp__sub_832BB748) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,13
	ctx.r10.s64 = ctx.r4.s64 + 13;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x832bb770
	if (!ctx.cr6.eq) goto loc_832BB770;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// blr 
	return;
loc_832BB770:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB780"))) PPC_WEAK_FUNC(sub_832BB780);
PPC_FUNC_IMPL(__imp__sub_832BB780) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,13
	ctx.r10.s64 = ctx.r4.s64 + 13;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB7A0"))) PPC_WEAK_FUNC(sub_832BB7A0);
PPC_FUNC_IMPL(__imp__sub_832BB7A0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,13
	ctx.r10.s64 = ctx.r4.s64 + 13;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB7C0"))) PPC_WEAK_FUNC(sub_832BB7C0);
PPC_FUNC_IMPL(__imp__sub_832BB7C0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x832bb7e4
	if (!ctx.cr6.eq) goto loc_832BB7E4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_832BB7E4:
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB808"))) PPC_WEAK_FUNC(sub_832BB808);
PPC_FUNC_IMPL(__imp__sub_832BB808) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB824"))) PPC_WEAK_FUNC(sub_832BB824);
PPC_FUNC_IMPL(__imp__sub_832BB824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB828"))) PPC_WEAK_FUNC(sub_832BB828);
PPC_FUNC_IMPL(__imp__sub_832BB828) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB844"))) PPC_WEAK_FUNC(sub_832BB844);
PPC_FUNC_IMPL(__imp__sub_832BB844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB848"))) PPC_WEAK_FUNC(sub_832BB848);
PPC_FUNC_IMPL(__imp__sub_832BB848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r4,13
	ctx.r9.s64 = ctx.r4.s64 + 13;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB87C"))) PPC_WEAK_FUNC(sub_832BB87C);
PPC_FUNC_IMPL(__imp__sub_832BB87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB880"))) PPC_WEAK_FUNC(sub_832BB880);
PPC_FUNC_IMPL(__imp__sub_832BB880) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8329e018
	sub_8329E018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB890"))) PPC_WEAK_FUNC(sub_832BB890);
PPC_FUNC_IMPL(__imp__sub_832BB890) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB8B8"))) PPC_WEAK_FUNC(sub_832BB8B8);
PPC_FUNC_IMPL(__imp__sub_832BB8B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB8EC"))) PPC_WEAK_FUNC(sub_832BB8EC);
PPC_FUNC_IMPL(__imp__sub_832BB8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB8F0"))) PPC_WEAK_FUNC(sub_832BB8F0);
PPC_FUNC_IMPL(__imp__sub_832BB8F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB92C"))) PPC_WEAK_FUNC(sub_832BB92C);
PPC_FUNC_IMPL(__imp__sub_832BB92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB930"))) PPC_WEAK_FUNC(sub_832BB930);
PPC_FUNC_IMPL(__imp__sub_832BB930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r4,r11,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8329e018
	sub_8329E018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB948"))) PPC_WEAK_FUNC(sub_832BB948);
PPC_FUNC_IMPL(__imp__sub_832BB948) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832BB960"))) PPC_WEAK_FUNC(sub_832BB960);
PPC_FUNC_IMPL(__imp__sub_832BB960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833ab670
	ctx.lr = 0x832BB99C;
	sub_833AB670(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB9AC"))) PPC_WEAK_FUNC(sub_832BB9AC);
PPC_FUNC_IMPL(__imp__sub_832BB9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB9B0"))) PPC_WEAK_FUNC(sub_832BB9B0);
PPC_FUNC_IMPL(__imp__sub_832BB9B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x833a5580
	sub_833A5580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB9B4"))) PPC_WEAK_FUNC(sub_832BB9B4);
PPC_FUNC_IMPL(__imp__sub_832BB9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB9B8"))) PPC_WEAK_FUNC(sub_832BB9B8);
PPC_FUNC_IMPL(__imp__sub_832BB9B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x833ab670
	sub_833AB670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB9BC"))) PPC_WEAK_FUNC(sub_832BB9BC);
PPC_FUNC_IMPL(__imp__sub_832BB9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB9C0"))) PPC_WEAK_FUNC(sub_832BB9C0);
PPC_FUNC_IMPL(__imp__sub_832BB9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB9C4"))) PPC_WEAK_FUNC(sub_832BB9C4);
PPC_FUNC_IMPL(__imp__sub_832BB9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB9C8"))) PPC_WEAK_FUNC(sub_832BB9C8);
PPC_FUNC_IMPL(__imp__sub_832BB9C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB9CC"))) PPC_WEAK_FUNC(sub_832BB9CC);
PPC_FUNC_IMPL(__imp__sub_832BB9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB9D0"))) PPC_WEAK_FUNC(sub_832BB9D0);
PPC_FUNC_IMPL(__imp__sub_832BB9D0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x832bb9e0
	if (!ctx.cr6.eq) goto loc_832BB9E0;
	// sth r5,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// blr 
	return;
loc_832BB9E0:
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB9E8"))) PPC_WEAK_FUNC(sub_832BB9E8);
PPC_FUNC_IMPL(__imp__sub_832BB9E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBA00"))) PPC_WEAK_FUNC(sub_832BBA00);
PPC_FUNC_IMPL(__imp__sub_832BBA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832BBA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bba60
	if (ctx.cr6.eq) goto loc_832BBA60;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832bba60
	if (!ctx.cr6.gt) goto loc_832BBA60;
	// li r29,0
	ctx.r29.s64 = 0;
loc_832BBA30:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bba4c
	if (ctx.cr6.eq) goto loc_832BBA4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82e01698
	ctx.lr = 0x832BBA4C;
	sub_82E01698(ctx, base);
loc_832BBA4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832bba30
	if (ctx.cr6.lt) goto loc_832BBA30;
loc_832BBA60:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82e01698
	ctx.lr = 0x832BBA68;
	sub_82E01698(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e01698
	ctx.lr = 0x832BBA70;
	sub_82E01698(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e01698
	ctx.lr = 0x832BBA78;
	sub_82E01698(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e01698
	ctx.lr = 0x832BBA80;
	sub_82E01698(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BBA88"))) PPC_WEAK_FUNC(sub_832BBA88);
PPC_FUNC_IMPL(__imp__sub_832BBA88) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
loc_832BBAAC:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x832bbaac
	if (!ctx.cr6.eq) goto loc_832BBAAC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBAC8"))) PPC_WEAK_FUNC(sub_832BBAC8);
PPC_FUNC_IMPL(__imp__sub_832BBAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832BBAD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x832bbb18
	if (ctx.cr6.gt) goto loc_832BBB18;
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832BBB00:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x832bbb00
	if (!ctx.cr6.eq) goto loc_832BBB00;
loc_832BBB18:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// rlwinm r31,r11,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bne cr6,0x832bbb60
	if (!ctx.cr6.eq) goto loc_832BBB60;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,18068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18068);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r10,18068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18068, ctx.r10.u32);
	// bl 0x82e01690
	ctx.lr = 0x832BBB4C;
	sub_82E01690(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x832b5d38
	ctx.lr = 0x832BBB5C;
	sub_832B5D38(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_832BBB60:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x832bbba0
	if (ctx.cr6.gt) goto loc_832BBBA0;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
loc_832BBB78:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r5,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stbx r26,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x832bbb78
	if (!ctx.cr6.gt) goto loc_832BBB78;
loc_832BBBA0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stbx r7,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BBBB4"))) PPC_WEAK_FUNC(sub_832BBBB4);
PPC_FUNC_IMPL(__imp__sub_832BBBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBBB8"))) PPC_WEAK_FUNC(sub_832BBBB8);
PPC_FUNC_IMPL(__imp__sub_832BBBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832BBBC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// srawi r10,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 16;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r26,r10,24
	ctx.r26.u64 = ctx.r10.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x832bbc0c
	if (ctx.cr6.gt) goto loc_832BBC0C;
	// subf r11,r26,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r26.s64;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832BBBF4:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x832bbbf4
	if (!ctx.cr6.eq) goto loc_832BBBF4;
loc_832BBC0C:
	// subf r11,r28,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r28.s64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832bbc50
	if (!ctx.cr6.eq) goto loc_832BBC50;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,18068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18068);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r10,18068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18068, ctx.r10.u32);
	// bl 0x82e01690
	ctx.lr = 0x832BBC3C;
	sub_82E01690(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x832b5d38
	ctx.lr = 0x832BBC4C;
	sub_832B5D38(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_832BBC50:
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x832bbc94
	if (ctx.cr6.gt) goto loc_832BBC94;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,1
	ctx.r8.s64 = 65536;
loc_832BBC6C:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r5,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stbx r25,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r25.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x832bbc6c
	if (!ctx.cr6.gt) goto loc_832BBC6C;
loc_832BBC94:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stbx r7,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BBCA8"))) PPC_WEAK_FUNC(sub_832BBCA8);
PPC_FUNC_IMPL(__imp__sub_832BBCA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBCAC"))) PPC_WEAK_FUNC(sub_832BBCAC);
PPC_FUNC_IMPL(__imp__sub_832BBCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBCB0"))) PPC_WEAK_FUNC(sub_832BBCB0);
PPC_FUNC_IMPL(__imp__sub_832BBCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832BBCC8:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r8,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stbx r9,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x832bbcc8
	if (ctx.cr6.lt) goto loc_832BBCC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBD08"))) PPC_WEAK_FUNC(sub_832BBD08);
PPC_FUNC_IMPL(__imp__sub_832BBD08) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x832bba00
	ctx.lr = 0x832BBD38;
	sub_832BBA00(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e01690
	ctx.lr = 0x832BBD48;
	sub_82E01690(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e01690
	ctx.lr = 0x832BBD58;
	sub_82E01690(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832bbd78
	if (!ctx.cr6.gt) goto loc_832BBD78;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832BBD78:
	// bl 0x82e01690
	ctx.lr = 0x832BBD7C;
	sub_82E01690(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82e01690
	ctx.lr = 0x832BBD8C;
	sub_82E01690(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// lis r10,1
	ctx.r10.s64 = 65536;
loc_832BBD9C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bbd9c
	if (ctx.cr6.lt) goto loc_832BBD9C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832bbdfc
	if (!ctx.cr6.gt) goto loc_832BBDFC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832BBDC4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,-17984
	ctx.r9.s64 = ctx.r9.s64 + -17984;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stbx r30,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832bbdc4
	if (ctx.cr6.lt) goto loc_832BBDC4;
loc_832BBDFC:
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

__attribute__((alias("__imp__sub_832BBE14"))) PPC_WEAK_FUNC(sub_832BBE14);
PPC_FUNC_IMPL(__imp__sub_832BBE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBE18"))) PPC_WEAK_FUNC(sub_832BBE18);
PPC_FUNC_IMPL(__imp__sub_832BBE18) {
	PPC_FUNC_PROLOGUE();
	// b 0x832bba00
	sub_832BBA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BBE1C"))) PPC_WEAK_FUNC(sub_832BBE1C);
PPC_FUNC_IMPL(__imp__sub_832BBE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBE20"))) PPC_WEAK_FUNC(sub_832BBE20);
PPC_FUNC_IMPL(__imp__sub_832BBE20) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x832bbe68
	if (ctx.cr6.lt) goto loc_832BBE68;
	// beq cr6,0x832bbe54
	if (ctx.cr6.eq) goto loc_832BBE54;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x832bbe40
	if (ctx.cr6.lt) goto loc_832BBE40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832BBE40:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r7,r10,-17984
	ctx.r7.s64 = ctx.r10.s64 + -17984;
	// addi r6,r11,-17984
	ctx.r6.s64 = ctx.r11.s64 + -17984;
	// b 0x832bbac8
	sub_832BBAC8(ctx, base);
	return;
loc_832BBE54:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r7,r10,-17976
	ctx.r7.s64 = ctx.r10.s64 + -17976;
	// addi r6,r11,-17976
	ctx.r6.s64 = ctx.r11.s64 + -17976;
	// b 0x832bbac8
	sub_832BBAC8(ctx, base);
	return;
loc_832BBE68:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r7,r10,-17968
	ctx.r7.s64 = ctx.r10.s64 + -17968;
	// addi r6,r11,-17968
	ctx.r6.s64 = ctx.r11.s64 + -17968;
	// b 0x832bbac8
	sub_832BBAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BBE7C"))) PPC_WEAK_FUNC(sub_832BBE7C);
PPC_FUNC_IMPL(__imp__sub_832BBE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBE80"))) PPC_WEAK_FUNC(sub_832BBE80);
PPC_FUNC_IMPL(__imp__sub_832BBE80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbe94
	if (ctx.cr6.eq) goto loc_832BBE94;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_832BBE94:
	// rlwinm r11,r3,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbea8
	if (ctx.cr6.eq) goto loc_832BBEA8;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
loc_832BBEA8:
	// rlwinm r11,r3,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbebc
	if (ctx.cr6.eq) goto loc_832BBEBC;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r11.u8);
loc_832BBEBC:
	// rlwinm r11,r3,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbed0
	if (ctx.cr6.eq) goto loc_832BBED0;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
loc_832BBED0:
	// rlwinm r11,r3,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbee4
	if (ctx.cr6.eq) goto loc_832BBEE4;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
loc_832BBEE4:
	// rlwinm r11,r3,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbef8
	if (ctx.cr6.eq) goto loc_832BBEF8;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
loc_832BBEF8:
	// rlwinm r11,r3,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbf0c
	if (ctx.cr6.eq) goto loc_832BBF0C;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r11.u8);
loc_832BBF0C:
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBF24"))) PPC_WEAK_FUNC(sub_832BBF24);
PPC_FUNC_IMPL(__imp__sub_832BBF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBF28"))) PPC_WEAK_FUNC(sub_832BBF28);
PPC_FUNC_IMPL(__imp__sub_832BBF28) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbf3c
	if (ctx.cr6.eq) goto loc_832BBF3C;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_832BBF3C:
	// rlwinm r11,r3,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbf50
	if (ctx.cr6.eq) goto loc_832BBF50;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
loc_832BBF50:
	// rlwinm r11,r3,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbf64
	if (ctx.cr6.eq) goto loc_832BBF64;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r11.u8);
loc_832BBF64:
	// rlwinm r11,r3,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbf78
	if (ctx.cr6.eq) goto loc_832BBF78;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
loc_832BBF78:
	// rlwinm r11,r3,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbf8c
	if (ctx.cr6.eq) goto loc_832BBF8C;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
loc_832BBF8C:
	// rlwinm r11,r3,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbfa0
	if (ctx.cr6.eq) goto loc_832BBFA0;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
loc_832BBFA0:
	// rlwinm r11,r3,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bbfb4
	if (ctx.cr6.eq) goto loc_832BBFB4;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r11.u8);
loc_832BBFB4:
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stb r11,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBFCC"))) PPC_WEAK_FUNC(sub_832BBFCC);
PPC_FUNC_IMPL(__imp__sub_832BBFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBFD0"))) PPC_WEAK_FUNC(sub_832BBFD0);
PPC_FUNC_IMPL(__imp__sub_832BBFD0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc008
	if (ctx.cr6.eq) goto loc_832BC008;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bbfec
	if (!ctx.cr6.lt) goto loc_832BBFEC;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc004
	goto loc_832BC004;
loc_832BBFEC:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bbff8
	if (ctx.cr6.eq) goto loc_832BBFF8;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BBFF8:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC004:
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_832BC008:
	// rlwinm r11,r3,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc040
	if (ctx.cr6.eq) goto loc_832BC040;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc024
	if (!ctx.cr6.lt) goto loc_832BC024;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc03c
	goto loc_832BC03C;
loc_832BC024:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc030
	if (ctx.cr6.eq) goto loc_832BC030;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC030:
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC03C:
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
loc_832BC040:
	// rlwinm r11,r3,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc078
	if (ctx.cr6.eq) goto loc_832BC078;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc05c
	if (!ctx.cr6.lt) goto loc_832BC05C;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc074
	goto loc_832BC074;
loc_832BC05C:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc068
	if (ctx.cr6.eq) goto loc_832BC068;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC068:
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC074:
	// stb r11,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r11.u8);
loc_832BC078:
	// rlwinm r11,r3,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc0b0
	if (ctx.cr6.eq) goto loc_832BC0B0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc094
	if (!ctx.cr6.lt) goto loc_832BC094;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc0ac
	goto loc_832BC0AC;
loc_832BC094:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc0a0
	if (ctx.cr6.eq) goto loc_832BC0A0;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC0A0:
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC0AC:
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
loc_832BC0B0:
	// rlwinm r11,r3,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc0e8
	if (ctx.cr6.eq) goto loc_832BC0E8;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc0cc
	if (!ctx.cr6.lt) goto loc_832BC0CC;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc0e4
	goto loc_832BC0E4;
loc_832BC0CC:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc0d8
	if (ctx.cr6.eq) goto loc_832BC0D8;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC0D8:
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC0E4:
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
loc_832BC0E8:
	// rlwinm r11,r3,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc120
	if (ctx.cr6.eq) goto loc_832BC120;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc104
	if (!ctx.cr6.lt) goto loc_832BC104;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc11c
	goto loc_832BC11C;
loc_832BC104:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc110
	if (ctx.cr6.eq) goto loc_832BC110;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC110:
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC11C:
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
loc_832BC120:
	// rlwinm r11,r3,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc158
	if (ctx.cr6.eq) goto loc_832BC158;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc13c
	if (!ctx.cr6.lt) goto loc_832BC13C;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc154
	goto loc_832BC154;
loc_832BC13C:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc148
	if (ctx.cr6.eq) goto loc_832BC148;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC148:
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC154:
	// stb r11,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r11.u8);
loc_832BC158:
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc178
	if (!ctx.cr6.lt) goto loc_832BC178;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// stb r11,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
	// blr 
	return;
loc_832BC178:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc184
	if (ctx.cr6.eq) goto loc_832BC184;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC184:
	// lbz r10,7(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BC198"))) PPC_WEAK_FUNC(sub_832BC198);
PPC_FUNC_IMPL(__imp__sub_832BC198) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc1d0
	if (ctx.cr6.eq) goto loc_832BC1D0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc1b4
	if (!ctx.cr6.lt) goto loc_832BC1B4;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc1cc
	goto loc_832BC1CC;
loc_832BC1B4:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc1c0
	if (ctx.cr6.eq) goto loc_832BC1C0;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC1C0:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC1CC:
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_832BC1D0:
	// rlwinm r11,r3,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc208
	if (ctx.cr6.eq) goto loc_832BC208;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc1ec
	if (!ctx.cr6.lt) goto loc_832BC1EC;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc204
	goto loc_832BC204;
loc_832BC1EC:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc1f8
	if (ctx.cr6.eq) goto loc_832BC1F8;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC1F8:
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC204:
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
loc_832BC208:
	// rlwinm r11,r3,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc240
	if (ctx.cr6.eq) goto loc_832BC240;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc224
	if (!ctx.cr6.lt) goto loc_832BC224;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc23c
	goto loc_832BC23C;
loc_832BC224:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc230
	if (ctx.cr6.eq) goto loc_832BC230;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC230:
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC23C:
	// stb r11,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r11.u8);
loc_832BC240:
	// rlwinm r11,r3,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc278
	if (ctx.cr6.eq) goto loc_832BC278;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc25c
	if (!ctx.cr6.lt) goto loc_832BC25C;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc274
	goto loc_832BC274;
loc_832BC25C:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc268
	if (ctx.cr6.eq) goto loc_832BC268;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC268:
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC274:
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
loc_832BC278:
	// rlwinm r11,r3,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc2b0
	if (ctx.cr6.eq) goto loc_832BC2B0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc294
	if (!ctx.cr6.lt) goto loc_832BC294;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc2ac
	goto loc_832BC2AC;
loc_832BC294:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc2a0
	if (ctx.cr6.eq) goto loc_832BC2A0;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC2A0:
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC2AC:
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
loc_832BC2B0:
	// rlwinm r11,r3,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc2e8
	if (ctx.cr6.eq) goto loc_832BC2E8;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc2cc
	if (!ctx.cr6.lt) goto loc_832BC2CC;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc2e4
	goto loc_832BC2E4;
loc_832BC2CC:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc2d8
	if (ctx.cr6.eq) goto loc_832BC2D8;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC2D8:
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC2E4:
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
loc_832BC2E8:
	// rlwinm r11,r3,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bc320
	if (ctx.cr6.eq) goto loc_832BC320;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc304
	if (!ctx.cr6.lt) goto loc_832BC304;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x832bc31c
	goto loc_832BC31C;
loc_832BC304:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc310
	if (ctx.cr6.eq) goto loc_832BC310;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC310:
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC31C:
	// stb r11,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r11.u8);
loc_832BC320:
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x832bc340
	if (!ctx.cr6.lt) goto loc_832BC340;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// stb r11,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
	// blr 
	return;
loc_832BC340:
	// li r11,128
	ctx.r11.s64 = 128;
	// beq cr6,0x832bc34c
	if (ctx.cr6.eq) goto loc_832BC34C;
	// li r11,64
	ctx.r11.s64 = 64;
loc_832BC34C:
	// lbz r10,7(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BC360"))) PPC_WEAK_FUNC(sub_832BC360);
PPC_FUNC_IMPL(__imp__sub_832BC360) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// clrlwi r10,r5,29
	ctx.r10.u64 = ctx.r5.u32 & 0x7;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r3,0,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// beq cr6,0x832bc3a4
	if (ctx.cr6.eq) goto loc_832BC3A4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC3A4:
	// rlwinm r8,r3,0,4,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF000000;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc3b8
	if (ctx.cr6.eq) goto loc_832BC3B8;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC3B8:
	// rlwinm r8,r3,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF00000;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc3cc
	if (ctx.cr6.eq) goto loc_832BC3CC;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC3CC:
	// rlwinm r8,r3,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0000;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc3e0
	if (ctx.cr6.eq) goto loc_832BC3E0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC3E0:
	// rlwinm r8,r3,0,16,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF000;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc3f4
	if (ctx.cr6.eq) goto loc_832BC3F4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC3F4:
	// rlwinm r8,r3,0,20,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF00;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc408
	if (ctx.cr6.eq) goto loc_832BC408;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC408:
	// rlwinm r8,r3,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc41c
	if (ctx.cr6.eq) goto loc_832BC41C;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC41C:
	// clrlwi r8,r3,28
	ctx.r8.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc430
	if (ctx.cr6.eq) goto loc_832BC430;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC430:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BC454"))) PPC_WEAK_FUNC(sub_832BC454);
PPC_FUNC_IMPL(__imp__sub_832BC454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BC458"))) PPC_WEAK_FUNC(sub_832BC458);
PPC_FUNC_IMPL(__imp__sub_832BC458) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// clrlwi r10,r5,29
	ctx.r10.u64 = ctx.r5.u32 & 0x7;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r8,r3,28
	ctx.r8.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// beq cr6,0x832bc49c
	if (ctx.cr6.eq) goto loc_832BC49C;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC49C:
	// rlwinm r8,r3,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc4b0
	if (ctx.cr6.eq) goto loc_832BC4B0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC4B0:
	// rlwinm r8,r3,0,20,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF00;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc4c4
	if (ctx.cr6.eq) goto loc_832BC4C4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC4C4:
	// rlwinm r8,r3,0,16,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF000;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc4d8
	if (ctx.cr6.eq) goto loc_832BC4D8;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC4D8:
	// rlwinm r8,r3,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0000;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc4ec
	if (ctx.cr6.eq) goto loc_832BC4EC;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC4EC:
	// rlwinm r8,r3,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF00000;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc500
	if (ctx.cr6.eq) goto loc_832BC500;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC500:
	// rlwinm r8,r3,0,4,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF000000;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc514
	if (ctx.cr6.eq) goto loc_832BC514;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_832BC514:
	// rlwinm r8,r3,0,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc528
	if (ctx.cr6.eq) goto loc_832BC528;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832BC528:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BC54C"))) PPC_WEAK_FUNC(sub_832BC54C);
PPC_FUNC_IMPL(__imp__sub_832BC54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BC550"))) PPC_WEAK_FUNC(sub_832BC550);
PPC_FUNC_IMPL(__imp__sub_832BC550) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// srawi r31,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// rlwinm r10,r3,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r30,r11,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r30,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// beq cr6,0x832bc5b0
	if (ctx.cr6.eq) goto loc_832BC5B0;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc5b0
	if (!ctx.cr6.eq) goto loc_832BC5B0;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stbx r10,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u8);
loc_832BC5B0:
	// rlwinm r8,r3,8,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc5dc
	if (ctx.cr6.eq) goto loc_832BC5DC;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bc5dc
	if (!ctx.cr6.eq) goto loc_832BC5DC;
	// or r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
loc_832BC5DC:
	// rlwinm r9,r3,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc608
	if (ctx.cr6.eq) goto loc_832BC608;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc608
	if (!ctx.cr6.eq) goto loc_832BC608;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r9.u8);
loc_832BC608:
	// rlwinm r9,r3,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc634
	if (ctx.cr6.eq) goto loc_832BC634;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc634
	if (!ctx.cr6.eq) goto loc_832BC634;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
loc_832BC634:
	// rlwinm r9,r3,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc660
	if (ctx.cr6.eq) goto loc_832BC660;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc660
	if (!ctx.cr6.eq) goto loc_832BC660;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r9.u8);
loc_832BC660:
	// rlwinm r9,r3,24,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc68c
	if (ctx.cr6.eq) goto loc_832BC68C;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc68c
	if (!ctx.cr6.eq) goto loc_832BC68C;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r9.u8);
loc_832BC68C:
	// rlwinm r9,r3,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc6b8
	if (ctx.cr6.eq) goto loc_832BC6B8;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc6b8
	if (!ctx.cr6.eq) goto loc_832BC6B8;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r9.u8);
loc_832BC6B8:
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc6e4
	if (ctx.cr6.eq) goto loc_832BC6E4;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc6e4
	if (!ctx.cr6.eq) goto loc_832BC6E4;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r9.u8);
loc_832BC6E4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BC710"))) PPC_WEAK_FUNC(sub_832BC710);
PPC_FUNC_IMPL(__imp__sub_832BC710) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// srawi r31,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r30,r11,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r30,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// beq cr6,0x832bc770
	if (ctx.cr6.eq) goto loc_832BC770;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc770
	if (!ctx.cr6.eq) goto loc_832BC770;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stbx r10,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u8);
loc_832BC770:
	// rlwinm r8,r3,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc79c
	if (ctx.cr6.eq) goto loc_832BC79C;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bc79c
	if (!ctx.cr6.eq) goto loc_832BC79C;
	// or r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
loc_832BC79C:
	// rlwinm r9,r3,24,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc7c8
	if (ctx.cr6.eq) goto loc_832BC7C8;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc7c8
	if (!ctx.cr6.eq) goto loc_832BC7C8;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r9.u8);
loc_832BC7C8:
	// rlwinm r9,r3,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc7f4
	if (ctx.cr6.eq) goto loc_832BC7F4;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc7f4
	if (!ctx.cr6.eq) goto loc_832BC7F4;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
loc_832BC7F4:
	// rlwinm r9,r3,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc820
	if (ctx.cr6.eq) goto loc_832BC820;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc820
	if (!ctx.cr6.eq) goto loc_832BC820;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r9.u8);
loc_832BC820:
	// rlwinm r9,r3,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc84c
	if (ctx.cr6.eq) goto loc_832BC84C;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc84c
	if (!ctx.cr6.eq) goto loc_832BC84C;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r9.u8);
loc_832BC84C:
	// rlwinm r9,r3,8,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc878
	if (ctx.cr6.eq) goto loc_832BC878;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc878
	if (!ctx.cr6.eq) goto loc_832BC878;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r9.u8);
loc_832BC878:
	// rlwinm r9,r3,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bc8a4
	if (ctx.cr6.eq) goto loc_832BC8A4;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc8a4
	if (!ctx.cr6.eq) goto loc_832BC8A4;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r9.u8);
loc_832BC8A4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BC8D0"))) PPC_WEAK_FUNC(sub_832BC8D0);
PPC_FUNC_IMPL(__imp__sub_832BC8D0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// rlwinm r10,r3,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r11,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r31,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// beq cr6,0x832bc950
	if (ctx.cr6.eq) goto loc_832BC950;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bc950
	if (!ctx.cr6.eq) goto loc_832BC950;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bc934
	if (!ctx.cr6.lt) goto loc_832BC934;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bc94c
	goto loc_832BC94C;
loc_832BC934:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bc940
	if (ctx.cr6.eq) goto loc_832BC940;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BC940:
	// lbzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_832BC94C:
	// stbx r10,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u8);
loc_832BC950:
	// rlwinm r10,r3,8,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bc9a0
	if (ctx.cr6.eq) goto loc_832BC9A0;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bc9a0
	if (!ctx.cr6.eq) goto loc_832BC9A0;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bc984
	if (!ctx.cr6.lt) goto loc_832BC984;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bc99c
	goto loc_832BC99C;
loc_832BC984:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bc990
	if (ctx.cr6.eq) goto loc_832BC990;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BC990:
	// lbz r31,1(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BC99C:
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
loc_832BC9A0:
	// rlwinm r10,r3,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bc9f0
	if (ctx.cr6.eq) goto loc_832BC9F0;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bc9f0
	if (!ctx.cr6.eq) goto loc_832BC9F0;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bc9d4
	if (!ctx.cr6.lt) goto loc_832BC9D4;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bc9ec
	goto loc_832BC9EC;
loc_832BC9D4:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bc9e0
	if (ctx.cr6.eq) goto loc_832BC9E0;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BC9E0:
	// lbz r31,2(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BC9EC:
	// stb r10,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r10.u8);
loc_832BC9F0:
	// rlwinm r10,r3,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bca40
	if (ctx.cr6.eq) goto loc_832BCA40;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bca40
	if (!ctx.cr6.eq) goto loc_832BCA40;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bca24
	if (!ctx.cr6.lt) goto loc_832BCA24;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bca3c
	goto loc_832BCA3C;
loc_832BCA24:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bca30
	if (ctx.cr6.eq) goto loc_832BCA30;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCA30:
	// lbz r31,3(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCA3C:
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
loc_832BCA40:
	// rlwinm r10,r3,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bca90
	if (ctx.cr6.eq) goto loc_832BCA90;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bca90
	if (!ctx.cr6.eq) goto loc_832BCA90;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bca74
	if (!ctx.cr6.lt) goto loc_832BCA74;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bca8c
	goto loc_832BCA8C;
loc_832BCA74:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bca80
	if (ctx.cr6.eq) goto loc_832BCA80;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCA80:
	// lbz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCA8C:
	// stb r10,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r10.u8);
loc_832BCA90:
	// rlwinm r10,r3,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bcae0
	if (ctx.cr6.eq) goto loc_832BCAE0;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bcae0
	if (!ctx.cr6.eq) goto loc_832BCAE0;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bcac4
	if (!ctx.cr6.lt) goto loc_832BCAC4;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bcadc
	goto loc_832BCADC;
loc_832BCAC4:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcad0
	if (ctx.cr6.eq) goto loc_832BCAD0;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCAD0:
	// lbz r31,5(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCADC:
	// stb r10,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r10.u8);
loc_832BCAE0:
	// rlwinm r10,r3,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bcb30
	if (ctx.cr6.eq) goto loc_832BCB30;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bcb30
	if (!ctx.cr6.eq) goto loc_832BCB30;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bcb14
	if (!ctx.cr6.lt) goto loc_832BCB14;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bcb2c
	goto loc_832BCB2C;
loc_832BCB14:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcb20
	if (ctx.cr6.eq) goto loc_832BCB20;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCB20:
	// lbz r31,6(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCB2C:
	// stb r10,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r10.u8);
loc_832BCB30:
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bcb80
	if (ctx.cr6.eq) goto loc_832BCB80;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bcb80
	if (!ctx.cr6.eq) goto loc_832BCB80;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bcb64
	if (!ctx.cr6.lt) goto loc_832BCB64;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bcb7c
	goto loc_832BCB7C;
loc_832BCB64:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcb70
	if (ctx.cr6.eq) goto loc_832BCB70;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCB70:
	// lbz r9,7(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_832BCB7C:
	// stb r10,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r10.u8);
loc_832BCB80:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BCBA8"))) PPC_WEAK_FUNC(sub_832BCBA8);
PPC_FUNC_IMPL(__imp__sub_832BCBA8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r11,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r31,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// beq cr6,0x832bcc28
	if (ctx.cr6.eq) goto loc_832BCC28;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bcc28
	if (!ctx.cr6.eq) goto loc_832BCC28;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bcc0c
	if (!ctx.cr6.lt) goto loc_832BCC0C;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bcc24
	goto loc_832BCC24;
loc_832BCC0C:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcc18
	if (ctx.cr6.eq) goto loc_832BCC18;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCC18:
	// lbzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_832BCC24:
	// stbx r10,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u8);
loc_832BCC28:
	// rlwinm r10,r3,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bcc78
	if (ctx.cr6.eq) goto loc_832BCC78;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bcc78
	if (!ctx.cr6.eq) goto loc_832BCC78;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bcc5c
	if (!ctx.cr6.lt) goto loc_832BCC5C;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bcc74
	goto loc_832BCC74;
loc_832BCC5C:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcc68
	if (ctx.cr6.eq) goto loc_832BCC68;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCC68:
	// lbz r31,1(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCC74:
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
loc_832BCC78:
	// rlwinm r10,r3,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bccc8
	if (ctx.cr6.eq) goto loc_832BCCC8;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bccc8
	if (!ctx.cr6.eq) goto loc_832BCCC8;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bccac
	if (!ctx.cr6.lt) goto loc_832BCCAC;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bccc4
	goto loc_832BCCC4;
loc_832BCCAC:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bccb8
	if (ctx.cr6.eq) goto loc_832BCCB8;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCCB8:
	// lbz r31,2(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCCC4:
	// stb r10,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r10.u8);
loc_832BCCC8:
	// rlwinm r10,r3,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bcd18
	if (ctx.cr6.eq) goto loc_832BCD18;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bcd18
	if (!ctx.cr6.eq) goto loc_832BCD18;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bccfc
	if (!ctx.cr6.lt) goto loc_832BCCFC;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bcd14
	goto loc_832BCD14;
loc_832BCCFC:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcd08
	if (ctx.cr6.eq) goto loc_832BCD08;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCD08:
	// lbz r31,3(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCD14:
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
loc_832BCD18:
	// rlwinm r10,r3,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bcd68
	if (ctx.cr6.eq) goto loc_832BCD68;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bcd68
	if (!ctx.cr6.eq) goto loc_832BCD68;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bcd4c
	if (!ctx.cr6.lt) goto loc_832BCD4C;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bcd64
	goto loc_832BCD64;
loc_832BCD4C:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcd58
	if (ctx.cr6.eq) goto loc_832BCD58;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCD58:
	// lbz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCD64:
	// stb r10,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r10.u8);
loc_832BCD68:
	// rlwinm r10,r3,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bcdb8
	if (ctx.cr6.eq) goto loc_832BCDB8;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bcdb8
	if (!ctx.cr6.eq) goto loc_832BCDB8;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bcd9c
	if (!ctx.cr6.lt) goto loc_832BCD9C;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bcdb4
	goto loc_832BCDB4;
loc_832BCD9C:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcda8
	if (ctx.cr6.eq) goto loc_832BCDA8;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCDA8:
	// lbz r31,5(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCDB4:
	// stb r10,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r10.u8);
loc_832BCDB8:
	// rlwinm r10,r3,8,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bce08
	if (ctx.cr6.eq) goto loc_832BCE08;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bce08
	if (!ctx.cr6.eq) goto loc_832BCE08;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bcdec
	if (!ctx.cr6.lt) goto loc_832BCDEC;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bce04
	goto loc_832BCE04;
loc_832BCDEC:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bcdf8
	if (ctx.cr6.eq) goto loc_832BCDF8;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCDF8:
	// lbz r31,6(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// clrlwi r31,r31,26
	ctx.r31.u64 = ctx.r31.u32 & 0x3F;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
loc_832BCE04:
	// stb r10,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r10.u8);
loc_832BCE08:
	// rlwinm r10,r3,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bce58
	if (ctx.cr6.eq) goto loc_832BCE58;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bce58
	if (!ctx.cr6.eq) goto loc_832BCE58;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x832bce3c
	if (!ctx.cr6.lt) goto loc_832BCE3C;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// b 0x832bce54
	goto loc_832BCE54;
loc_832BCE3C:
	// li r10,128
	ctx.r10.s64 = 128;
	// beq cr6,0x832bce48
	if (ctx.cr6.eq) goto loc_832BCE48;
	// li r10,64
	ctx.r10.s64 = 64;
loc_832BCE48:
	// lbz r9,7(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_832BCE54:
	// stb r10,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r10.u8);
loc_832BCE58:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BCE80"))) PPC_WEAK_FUNC(sub_832BCE80);
PPC_FUNC_IMPL(__imp__sub_832BCE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832BCE88;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r11,r11,9,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFE00;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832b5d38
	ctx.lr = 0x832BCEB8;
	sub_832B5D38(ctx, base);
	// lis r10,-31845
	ctx.r10.s64 = -2086993920;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r25,7716(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7716);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// addi r6,r10,224
	ctx.r6.s64 = ctx.r10.s64 + 224;
loc_832BCEF8:
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x832bcfc0
	if (ctx.cr6.gt) goto loc_832BCFC0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x832bcfcc
	if (!ctx.cr6.gt) goto loc_832BCFCC;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832bcf38
	if (ctx.cr6.lt) goto loc_832BCF38;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_832BCF38:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// clrlwi r8,r10,23
	ctx.r8.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x832bd018
	if (ctx.cr6.eq) goto loc_832BD018;
	// rlwinm r10,r9,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r9,-129
	ctx.r9.s64 = ctx.r9.s64 + -129;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832bcfb0
	if (!ctx.cr6.lt) goto loc_832BCFB0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bcfac
	if (ctx.cr6.eq) goto loc_832BCFAC;
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832bcfa4
	if (ctx.cr6.eq) goto loc_832BCFA4;
	// li r28,7
	ctx.r28.s64 = 7;
	// b 0x832bcfb0
	goto loc_832BCFB0;
loc_832BCFA4:
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
	// b 0x832bcfb0
	goto loc_832BCFB0;
loc_832BCFAC:
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
loc_832BCFB0:
	// add r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 + ctx.r27.u64;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x832bd018
	if (!ctx.cr6.lt) goto loc_832BD018;
	// b 0x832bcfcc
	goto loc_832BCFCC;
loc_832BCFC0:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832bcfcc
	if (ctx.cr6.lt) goto loc_832BCFCC;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_832BCFCC:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and r24,r9,r10
	ctx.r24.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832bd018
	if (!ctx.cr6.eq) goto loc_832BD018;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// beq cr6,0x832bd018
	if (ctx.cr6.eq) goto loc_832BD018;
	// cmpwi cr6,r5,80
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 80, ctx.xer);
	// blt cr6,0x832bcef8
	if (ctx.cr6.lt) goto loc_832BCEF8;
loc_832BD018:
	// stw r5,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r5.u32);
	// stw r6,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r6.u32);
	// stw r28,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD02C"))) PPC_WEAK_FUNC(sub_832BD02C);
PPC_FUNC_IMPL(__imp__sub_832BD02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD030"))) PPC_WEAK_FUNC(sub_832BD030);
PPC_FUNC_IMPL(__imp__sub_832BD030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x832BD038;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832bd224
	if (ctx.cr6.eq) goto loc_832BD224;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r18,4(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r19,380(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r21,384(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r10,r9,9,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFE00;
	// rlwinm r15,r8,0,28,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// add r23,r10,r18
	ctx.r23.u64 = ctx.r10.u64 + ctx.r18.u64;
	// beq cr6,0x832bd224
	if (ctx.cr6.eq) goto loc_832BD224;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// addi r20,r23,4
	ctx.r20.s64 = ctx.r23.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r14,r11,1
	ctx.r14.s64 = ctx.r11.s64 + 1;
	// add r16,r10,r3
	ctx.r16.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_832BD090:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lbzx r5,r20,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r10,r5,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bd214
	if (ctx.cr6.eq) goto loc_832BD214;
	// add r7,r11,r23
	ctx.r7.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhzx r8,r11,r23
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhzx r11,r20,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// clrlwi r6,r8,23
	ctx.r6.u64 = ctx.r8.u32 & 0x1FF;
	// rlwinm r8,r11,5,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFE0;
	// subf r11,r6,r17
	ctx.r11.s64 = ctx.r17.s64 - ctx.r6.s64;
	// lhz r7,6(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// add r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 + ctx.r18.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// clrlwi r8,r7,23
	ctx.r8.u64 = ctx.r7.u32 & 0x1FF;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// addi r11,r8,-128
	ctx.r11.s64 = ctx.r8.s64 + -128;
	// rlwinm r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// rlwinm r22,r10,31,26,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x30;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r10,r9,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x832bd108
	if (ctx.cr6.eq) goto loc_832BD108;
	// subf r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
loc_832BD108:
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// add r25,r8,r6
	ctx.r25.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x832bd19c
	if (ctx.cr6.eq) goto loc_832BD19C;
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r24,r8,-16600
	ctx.r24.s64 = ctx.r8.s64 + -16600;
	// beq cr6,0x832bd13c
	if (ctx.cr6.eq) goto loc_832BD13C;
	// cmpwi cr6,r22,48
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 48, ctx.xer);
	// bne cr6,0x832bd13c
	if (!ctx.cr6.eq) goto loc_832BD13C;
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// addi r24,r8,-15976
	ctx.r24.s64 = ctx.r8.s64 + -15976;
loc_832BD13C:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r27,r19,8
	ctx.r27.s64 = ctx.r19.s64 + 8;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r26,r21,7
	ctx.xer.ca = ctx.r21.u32 <= 7;
	ctx.r26.s64 = 7 - ctx.r21.s64;
	// add r31,r30,r21
	ctx.r31.u64 = ctx.r30.u64 + ctx.r21.u64;
loc_832BD15C:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832bd184
	if (!ctx.cr6.lt) goto loc_832BD184;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bd184
	if (ctx.cr6.eq) goto loc_832BD184;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832BD184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832BD184:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// add r25,r28,r25
	ctx.r25.u64 = ctx.r28.u64 + ctx.r25.u64;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x832bd15c
	if (!ctx.cr6.eq) goto loc_832BD15C;
	// b 0x832bd214
	goto loc_832BD214;
loc_832BD19C:
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r24,r8,-16768
	ctx.r24.s64 = ctx.r8.s64 + -16768;
	// beq cr6,0x832bd1bc
	if (ctx.cr6.eq) goto loc_832BD1BC;
	// cmpwi cr6,r22,48
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 48, ctx.xer);
	// bne cr6,0x832bd1bc
	if (!ctx.cr6.eq) goto loc_832BD1BC;
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// addi r24,r8,-16432
	ctx.r24.s64 = ctx.r8.s64 + -16432;
loc_832BD1BC:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r27,r19,8
	ctx.r27.s64 = ctx.r19.s64 + 8;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
	// subfic r26,r21,7
	ctx.xer.ca = ctx.r21.u32 <= 7;
	ctx.r26.s64 = 7 - ctx.r21.s64;
loc_832BD1D8:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832bd200
	if (!ctx.cr6.lt) goto loc_832BD200;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bd200
	if (ctx.cr6.eq) goto loc_832BD200;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832BD200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832BD200:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r25,r28,r25
	ctx.r25.u64 = ctx.r28.u64 + ctx.r25.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x832bd1d8
	if (!ctx.cr6.eq) goto loc_832BD1D8;
loc_832BD214:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// addi r16,r16,-4
	ctx.r16.s64 = ctx.r16.s64 + -4;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x832bd090
	if (!ctx.cr6.eq) goto loc_832BD090;
loc_832BD224:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD22C"))) PPC_WEAK_FUNC(sub_832BD22C);
PPC_FUNC_IMPL(__imp__sub_832BD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD230"))) PPC_WEAK_FUNC(sub_832BD230);
PPC_FUNC_IMPL(__imp__sub_832BD230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x832BD238;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r11,r11,9,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFE00;
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x832bd284
	if (ctx.cr6.eq) goto loc_832BD284;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832bd284
	if (!ctx.cr6.lt) goto loc_832BD284;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x832bd284
	if (!ctx.cr6.eq) goto loc_832BD284;
	// lbz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bd29c
	if (ctx.cr6.eq) goto loc_832BD29C;
loc_832BD284:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bce80
	ctx.lr = 0x832BD290;
	sub_832BCE80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r21,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r21.u32);
	// stb r11,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r11.u8);
loc_832BD29C:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832bd484
	if (ctx.cr6.eq) goto loc_832BD484;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r19,380(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832bd484
	if (ctx.cr6.eq) goto loc_832BD484;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r22,384(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lwz r18,4(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r14,r10,0,28,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// beq cr6,0x832bd484
	if (ctx.cr6.eq) goto loc_832BD484;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// addi r20,r21,4
	ctx.r20.s64 = ctx.r21.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r15,r11,1
	ctx.r15.s64 = ctx.r11.s64 + 1;
	// add r16,r10,r31
	ctx.r16.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_832BD2F0:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lbzx r5,r20,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r10,r5,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832bd474
	if (!ctx.cr6.eq) goto loc_832BD474;
	// add r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lhzx r8,r11,r21
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r21.u32);
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lhzx r11,r20,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// clrlwi r6,r8,23
	ctx.r6.u64 = ctx.r8.u32 & 0x1FF;
	// rlwinm r8,r11,5,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFE0;
	// subf r11,r6,r17
	ctx.r11.s64 = ctx.r17.s64 - ctx.r6.s64;
	// lhz r7,6(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// add r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 + ctx.r18.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// clrlwi r8,r7,23
	ctx.r8.u64 = ctx.r7.u32 & 0x1FF;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// addi r11,r8,-128
	ctx.r11.s64 = ctx.r8.s64 + -128;
	// rlwinm r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// rlwinm r23,r10,31,26,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x30;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r10,r9,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x832bd368
	if (ctx.cr6.eq) goto loc_832BD368;
	// subf r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
loc_832BD368:
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// add r25,r8,r6
	ctx.r25.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x832bd3fc
	if (ctx.cr6.eq) goto loc_832BD3FC;
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r24,r8,-16600
	ctx.r24.s64 = ctx.r8.s64 + -16600;
	// beq cr6,0x832bd39c
	if (ctx.cr6.eq) goto loc_832BD39C;
	// cmpwi cr6,r23,48
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 48, ctx.xer);
	// bne cr6,0x832bd39c
	if (!ctx.cr6.eq) goto loc_832BD39C;
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// addi r24,r8,-15976
	ctx.r24.s64 = ctx.r8.s64 + -15976;
loc_832BD39C:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r27,r19,8
	ctx.r27.s64 = ctx.r19.s64 + 8;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r26,r22,7
	ctx.xer.ca = ctx.r22.u32 <= 7;
	ctx.r26.s64 = 7 - ctx.r22.s64;
	// add r31,r30,r22
	ctx.r31.u64 = ctx.r30.u64 + ctx.r22.u64;
loc_832BD3BC:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832bd3e4
	if (!ctx.cr6.lt) goto loc_832BD3E4;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bd3e4
	if (ctx.cr6.eq) goto loc_832BD3E4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832BD3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832BD3E4:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// add r25,r28,r25
	ctx.r25.u64 = ctx.r28.u64 + ctx.r25.u64;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x832bd3bc
	if (!ctx.cr6.eq) goto loc_832BD3BC;
	// b 0x832bd474
	goto loc_832BD474;
loc_832BD3FC:
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r24,r8,-16768
	ctx.r24.s64 = ctx.r8.s64 + -16768;
	// beq cr6,0x832bd41c
	if (ctx.cr6.eq) goto loc_832BD41C;
	// cmpwi cr6,r23,48
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 48, ctx.xer);
	// bne cr6,0x832bd41c
	if (!ctx.cr6.eq) goto loc_832BD41C;
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// addi r24,r8,-16432
	ctx.r24.s64 = ctx.r8.s64 + -16432;
loc_832BD41C:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r27,r19,8
	ctx.r27.s64 = ctx.r19.s64 + 8;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subfic r26,r22,7
	ctx.xer.ca = ctx.r22.u32 <= 7;
	ctx.r26.s64 = 7 - ctx.r22.s64;
loc_832BD438:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832bd460
	if (!ctx.cr6.lt) goto loc_832BD460;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bd460
	if (ctx.cr6.eq) goto loc_832BD460;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832BD460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832BD460:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r25,r28,r25
	ctx.r25.u64 = ctx.r28.u64 + ctx.r25.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x832bd438
	if (!ctx.cr6.eq) goto loc_832BD438;
loc_832BD474:
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// addi r16,r16,-4
	ctx.r16.s64 = ctx.r16.s64 + -4;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x832bd2f0
	if (!ctx.cr6.eq) goto loc_832BD2F0;
loc_832BD484:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD48C"))) PPC_WEAK_FUNC(sub_832BD48C);
PPC_FUNC_IMPL(__imp__sub_832BD48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD490"))) PPC_WEAK_FUNC(sub_832BD490);
PPC_FUNC_IMPL(__imp__sub_832BD490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x832BD498;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r29,344(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x832bd6c0
	if (ctx.cr6.eq) goto loc_832BD6C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r21,r31,420
	ctx.r21.s64 = ctx.r31.s64 + 420;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r11,r11,9,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFE00;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832b5d38
	ctx.lr = 0x832BD4DC;
	sub_832B5D38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r19,r22,6
	ctx.r19.s64 = ctx.r22.s64 + 6;
	// lwz r20,384(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r17,r22,2
	ctx.r17.s64 = ctx.r22.s64 + 2;
	// lwz r18,4(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r23,r22,4
	ctx.r23.s64 = ctx.r22.s64 + 4;
	// addi r14,r30,8
	ctx.r14.s64 = ctx.r30.s64 + 8;
	// addi r15,r31,24
	ctx.r15.s64 = ctx.r31.s64 + 24;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x832bd510
	goto loc_832BD510;
loc_832BD50C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832BD510:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbzx r5,r23,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm r10,r5,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832bd52c
	if (!ctx.cr6.eq) goto loc_832BD52C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_832BD52C:
	// lhzx r8,r11,r22
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lhzx r7,r19,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// lhzx r6,r23,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r11.u32);
	// clrlwi r8,r8,23
	ctx.r8.u64 = ctx.r8.u32 & 0x1FF;
	// lbzx r10,r17,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r11.u32);
	// lbzx r9,r23,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// clrlwi r11,r7,23
	ctx.r11.u64 = ctx.r7.u32 & 0x1FF;
	// rlwinm r7,r6,5,16,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFE0;
	// subf r8,r8,r16
	ctx.r8.s64 = ctx.r16.s64 - ctx.r8.s64;
	// add r6,r7,r18
	ctx.r6.u64 = ctx.r7.u64 + ctx.r18.u64;
	// addi r7,r8,128
	ctx.r7.s64 = ctx.r8.s64 + 128;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// addi r31,r11,-128
	ctx.r31.s64 = ctx.r11.s64 + -128;
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r9,31,26,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x30;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bd588
	if (ctx.cr6.eq) goto loc_832BD588;
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
loc_832BD588:
	// rlwinm r8,r5,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r25,r9,r6
	ctx.r25.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// beq cr6,0x832bd630
	if (ctx.cr6.eq) goto loc_832BD630;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r26,r9,-14576
	ctx.r26.s64 = ctx.r9.s64 + -14576;
	// beq cr6,0x832bd5bc
	if (ctx.cr6.eq) goto loc_832BD5BC;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r26,r9,-15272
	ctx.r26.s64 = ctx.r9.s64 + -15272;
	// b 0x832bd5d4
	goto loc_832BD5D4;
loc_832BD5BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832bd5d4
	if (ctx.cr6.eq) goto loc_832BD5D4;
	// cmpwi cr6,r24,48
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 48, ctx.xer);
	// bne cr6,0x832bd5d4
	if (!ctx.cr6.eq) goto loc_832BD5D4;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r26,r9,-13400
	ctx.r26.s64 = ctx.r9.s64 + -13400;
loc_832BD5D4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r31,-8
	ctx.r28.s64 = ctx.r31.s64 + -8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// addi r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 7;
loc_832BD5EC:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x832bd618
	if (!ctx.cr6.lt) goto loc_832BD618;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bd618
	if (ctx.cr6.eq) goto loc_832BD618;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x832BD618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832BD618:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// add r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 + ctx.r25.u64;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x832bd5ec
	if (!ctx.cr6.eq) goto loc_832BD5EC;
	// b 0x832bd6b0
	goto loc_832BD6B0;
loc_832BD630:
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r27,r9,-15024
	ctx.r27.s64 = ctx.r9.s64 + -15024;
	// beq cr6,0x832bd64c
	if (ctx.cr6.eq) goto loc_832BD64C;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r27,r9,-15520
	ctx.r27.s64 = ctx.r9.s64 + -15520;
	// b 0x832bd664
	goto loc_832BD664;
loc_832BD64C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832bd664
	if (ctx.cr6.eq) goto loc_832BD664;
	// cmpwi cr6,r24,48
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 48, ctx.xer);
	// bne cr6,0x832bd664
	if (!ctx.cr6.eq) goto loc_832BD664;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r27,r9,-14128
	ctx.r27.s64 = ctx.r9.s64 + -14128;
loc_832BD664:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_832BD670:
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x832bd6a0
	if (!ctx.cr6.lt) goto loc_832BD6A0;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bd6a0
	if (ctx.cr6.eq) goto loc_832BD6A0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x832BD6A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832BD6A0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r25,r28,r25
	ctx.r25.u64 = ctx.r28.u64 + ctx.r25.u64;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x832bd670
	if (!ctx.cr6.eq) goto loc_832BD670;
loc_832BD6B0:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832bd50c
	if (!ctx.cr6.eq) goto loc_832BD50C;
loc_832BD6C0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD6C8"))) PPC_WEAK_FUNC(sub_832BD6C8);
PPC_FUNC_IMPL(__imp__sub_832BD6C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31636
	ctx.r10.s64 = ctx.r11.s64 + 31636;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x832d7438
	ctx.lr = 0x832BD6EC;
	sub_832D7438(ctx, base);
	// bl 0x832d7130
	ctx.lr = 0x832BD6F0;
	sub_832D7130(ctx, base);
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

__attribute__((alias("__imp__sub_832BD708"))) PPC_WEAK_FUNC(sub_832BD708);
PPC_FUNC_IMPL(__imp__sub_832BD708) {
	PPC_FUNC_PROLOGUE();
	// b 0x832d7130
	sub_832D7130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD70C"))) PPC_WEAK_FUNC(sub_832BD70C);
PPC_FUNC_IMPL(__imp__sub_832BD70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD710"))) PPC_WEAK_FUNC(sub_832BD710);
PPC_FUNC_IMPL(__imp__sub_832BD710) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r9,r11,31636
	ctx.r9.s64 = ctx.r11.s64 + 31636;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-32600(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bd74c
	if (ctx.cr6.eq) goto loc_832BD74C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832BD74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832BD74C:
	// bl 0x832d7508
	ctx.lr = 0x832BD750;
	sub_832D7508(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BD760"))) PPC_WEAK_FUNC(sub_832BD760);
PPC_FUNC_IMPL(__imp__sub_832BD760) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BD768"))) PPC_WEAK_FUNC(sub_832BD768);
PPC_FUNC_IMPL(__imp__sub_832BD768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BD76C"))) PPC_WEAK_FUNC(sub_832BD76C);
PPC_FUNC_IMPL(__imp__sub_832BD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD770"))) PPC_WEAK_FUNC(sub_832BD770);
PPC_FUNC_IMPL(__imp__sub_832BD770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832bd7d4
	if (ctx.cr6.eq) goto loc_832BD7D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832bd7b0
	if (ctx.cr6.eq) goto loc_832BD7B0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832BD79C:
	// sthx r10,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x832bd79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832BD79C;
	// blr 
	return;
loc_832BD7B0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_832BD7C8:
	// sthux r10,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x832bd7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832BD7C8;
	// blr 
	return;
loc_832BD7D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_832BD7F4:
	// sthux r10,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x832bd7f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832BD7F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BD800"))) PPC_WEAK_FUNC(sub_832BD800);
PPC_FUNC_IMPL(__imp__sub_832BD800) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r9,r11,31636
	ctx.r9.s64 = ctx.r11.s64 + 31636;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-32600(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bd84c
	if (ctx.cr6.eq) goto loc_832BD84C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832BD84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832BD84C:
	// bl 0x832d7508
	ctx.lr = 0x832BD850;
	sub_832D7508(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bd868
	if (ctx.cr6.eq) goto loc_832BD868;
	// bl 0x82e01698
	ctx.lr = 0x832BD864;
	sub_82E01698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832BD868:
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

__attribute__((alias("__imp__sub_832BD880"))) PPC_WEAK_FUNC(sub_832BD880);
PPC_FUNC_IMPL(__imp__sub_832BD880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-32600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32600);
	// b 0x832d7a18
	sub_832D7A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD88C"))) PPC_WEAK_FUNC(sub_832BD88C);
PPC_FUNC_IMPL(__imp__sub_832BD88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD890"))) PPC_WEAK_FUNC(sub_832BD890);
PPC_FUNC_IMPL(__imp__sub_832BD890) {
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
	// lis r31,-31824
	ctx.r31.s64 = -2085617664;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,31680
	ctx.r4.s64 = ctx.r11.s64 + 31680;
	// lwz r3,644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832BD8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// lwz r3,-32600(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32600);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832BD8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,64(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x832BD8EC;
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

__attribute__((alias("__imp__sub_832BD900"))) PPC_WEAK_FUNC(sub_832BD900);
PPC_FUNC_IMPL(__imp__sub_832BD900) {
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
	// lis r31,-31824
	ctx.r31.s64 = -2085617664;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,31704
	ctx.r4.s64 = ctx.r11.s64 + 31704;
	// lwz r3,644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832BD930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// lwz r3,-32600(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32600);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832BD948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,64(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x832BD95C;
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

__attribute__((alias("__imp__sub_832BD970"))) PPC_WEAK_FUNC(sub_832BD970);
PPC_FUNC_IMPL(__imp__sub_832BD970) {
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
	// lis r30,-31824
	ctx.r30.s64 = -2085617664;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// lwz r3,644(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832BD9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32600(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32600);
	// bl 0x832d83b0
	ctx.lr = 0x832BD9B8;
	sub_832D83B0(ctx, base);
	// lwz r3,644(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832BD9CC;
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

__attribute__((alias("__imp__sub_832BD9E4"))) PPC_WEAK_FUNC(sub_832BD9E4);
PPC_FUNC_IMPL(__imp__sub_832BD9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD9E8"))) PPC_WEAK_FUNC(sub_832BD9E8);
PPC_FUNC_IMPL(__imp__sub_832BD9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832BD9F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31824
	ctx.r28.s64 = -2085617664;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,31768
	ctx.r4.s64 = ctx.r11.s64 + 31768;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,644(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832BDA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32600(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32600);
	// bl 0x832d83a0
	ctx.lr = 0x832BDA38;
	sub_832D83A0(ctx, base);
	// lwz r3,644(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832BDA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDA54"))) PPC_WEAK_FUNC(sub_832BDA54);
PPC_FUNC_IMPL(__imp__sub_832BDA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDA58"))) PPC_WEAK_FUNC(sub_832BDA58);
PPC_FUNC_IMPL(__imp__sub_832BDA58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x832d7380
	sub_832D7380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDA6C"))) PPC_WEAK_FUNC(sub_832BDA6C);
PPC_FUNC_IMPL(__imp__sub_832BDA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDA70"))) PPC_WEAK_FUNC(sub_832BDA70);
PPC_FUNC_IMPL(__imp__sub_832BDA70) {
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
	// bl 0x832bd6c8
	ctx.lr = 0x832BDA88;
	sub_832BD6C8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r9,r11,31804
	ctx.r9.s64 = ctx.r11.s64 + 31804;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,-32600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832bdabc
	if (!ctx.cr6.eq) goto loc_832BDABC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37048
	ctx.r3.u64 = ctx.r3.u64 | 37048;
	// bl 0x82e01690
	ctx.lr = 0x832BDAB0;
	sub_82E01690(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832bdabc
	if (ctx.cr6.eq) goto loc_832BDABC;
	// bl 0x832d88f8
	ctx.lr = 0x832BDABC;
	sub_832D88F8(ctx, base);
loc_832BDABC:
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r9,-31824
	ctx.r9.s64 = -2085617664;
	// addi r11,r31,-64
	ctx.r11.s64 = ctx.r31.s64 + -64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,18072(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18072, ctx.r31.u32);
loc_832BDAD4:
	// stwu r10,68(r11)
	ea = 68 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832bdad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832BDAD4;
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

__attribute__((alias("__imp__sub_832BDAF4"))) PPC_WEAK_FUNC(sub_832BDAF4);
PPC_FUNC_IMPL(__imp__sub_832BDAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDAF8"))) PPC_WEAK_FUNC(sub_832BDAF8);
PPC_FUNC_IMPL(__imp__sub_832BDAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-32600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32600);
	// b 0x832d7580
	sub_832D7580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDB04"))) PPC_WEAK_FUNC(sub_832BDB04);
PPC_FUNC_IMPL(__imp__sub_832BDB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDB08"))) PPC_WEAK_FUNC(sub_832BDB08);
PPC_FUNC_IMPL(__imp__sub_832BDB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-32600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32600);
	// b 0x832d7ff8
	sub_832D7FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDB14"))) PPC_WEAK_FUNC(sub_832BDB14);
PPC_FUNC_IMPL(__imp__sub_832BDB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDB18"))) PPC_WEAK_FUNC(sub_832BDB18);
PPC_FUNC_IMPL(__imp__sub_832BDB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832BDB20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,31848
	ctx.r4.s64 = ctx.r11.s64 + 31848;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,644(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832BDB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32600(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32600);
	// bl 0x832d8980
	ctx.lr = 0x832BDB60;
	sub_832D8980(ctx, base);
	// lwz r3,644(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832BDB74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDB7C"))) PPC_WEAK_FUNC(sub_832BDB7C);
PPC_FUNC_IMPL(__imp__sub_832BDB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDB80"))) PPC_WEAK_FUNC(sub_832BDB80);
PPC_FUNC_IMPL(__imp__sub_832BDB80) {
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
	// lis r30,-31824
	ctx.r30.s64 = -2085617664;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,31888
	ctx.r4.s64 = ctx.r11.s64 + 31888;
	// lwz r3,644(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832BDBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32600(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32600);
	// bl 0x832d8e40
	ctx.lr = 0x832BDBC8;
	sub_832D8E40(ctx, base);
	// lwz r3,644(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832BDBDC;
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

__attribute__((alias("__imp__sub_832BDBF4"))) PPC_WEAK_FUNC(sub_832BDBF4);
PPC_FUNC_IMPL(__imp__sub_832BDBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDBF8"))) PPC_WEAK_FUNC(sub_832BDBF8);
PPC_FUNC_IMPL(__imp__sub_832BDBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-32600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32600);
	// b 0x832d83e8
	sub_832D83E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDC04"))) PPC_WEAK_FUNC(sub_832BDC04);
PPC_FUNC_IMPL(__imp__sub_832BDC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDC08"))) PPC_WEAK_FUNC(sub_832BDC08);
PPC_FUNC_IMPL(__imp__sub_832BDC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-32600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32600);
	// b 0x832d8530
	sub_832D8530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDC14"))) PPC_WEAK_FUNC(sub_832BDC14);
PPC_FUNC_IMPL(__imp__sub_832BDC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDC18"))) PPC_WEAK_FUNC(sub_832BDC18);
PPC_FUNC_IMPL(__imp__sub_832BDC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832BDC20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832bdc8c
	if (ctx.cr6.lt) goto loc_832BDC8C;
	// beq cr6,0x832bdc58
	if (ctx.cr6.eq) goto loc_832BDC58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x832bdcb8
	if (!ctx.cr6.lt) goto loc_832BDCB8;
	// b 0x832bdc98
	goto loc_832BDC98;
loc_832BDC58:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832bda58
	ctx.lr = 0x832BDC6C;
	sub_832BDA58(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,18080
	ctx.r4.s64 = ctx.r11.s64 + 18080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x832b8e08
	ctx.lr = 0x832BDC84;
	sub_832B8E08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832BDC8C:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r5,r11,18080
	ctx.r5.s64 = ctx.r11.s64 + 18080;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_832BDC98:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832bda58
	ctx.lr = 0x832BDCA4;
	sub_832BDA58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x832b8e08
	ctx.lr = 0x832BDCB8;
	sub_832B8E08(ctx, base);
loc_832BDCB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDCC0"))) PPC_WEAK_FUNC(sub_832BDCC0);
PPC_FUNC_IMPL(__imp__sub_832BDCC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b8de8
	sub_832B8DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDCC4"))) PPC_WEAK_FUNC(sub_832BDCC4);
PPC_FUNC_IMPL(__imp__sub_832BDCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDCC8"))) PPC_WEAK_FUNC(sub_832BDCC8);
PPC_FUNC_IMPL(__imp__sub_832BDCC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BDCF0"))) PPC_WEAK_FUNC(sub_832BDCF0);
PPC_FUNC_IMPL(__imp__sub_832BDCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832BDCF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_832BDD0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x832bdd54
	if (ctx.cr6.eq) goto loc_832BDD54;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x832bdd3c
	if (!ctx.cr6.lt) goto loc_832BDD3C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x832bdd40
	goto loc_832BDD40;
loc_832BDD3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832BDD40:
	// bl 0x832d9900
	ctx.lr = 0x832BDD44;
	sub_832D9900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bdd54
	if (ctx.cr6.eq) goto loc_832BDD54;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_832BDD54:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x832bdd0c
	if (!ctx.cr0.eq) goto loc_832BDD0C;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832bde14
	if (!ctx.cr6.eq) goto loc_832BDE14;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
loc_832BDD74:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x832bdd94
	if (!ctx.cr6.eq) goto loc_832BDD94;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x832bdd74
	if (!ctx.cr0.lt) goto loc_832BDD74;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_832BDD94:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x832bddc8
	if (ctx.cr6.eq) goto loc_832BDDC8;
	// bl 0x832d7840
	ctx.lr = 0x832BDDC8;
	sub_832D7840(ctx, base);
loc_832BDDC8:
	// addic. r30,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r30.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x832bde14
	if (ctx.cr0.lt) goto loc_832BDE14;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_832BDDDC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x832bde08
	if (ctx.cr6.eq) goto loc_832BDE08;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x832d7868
	ctx.lr = 0x832BDDF0;
	sub_832D7868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832bde08
	if (!ctx.cr6.eq) goto loc_832BDE08;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x832d77b8
	ctx.lr = 0x832BDE08;
	sub_832D77B8(ctx, base);
loc_832BDE08:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bge 0x832bdddc
	if (!ctx.cr0.lt) goto loc_832BDDDC;
loc_832BDE14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

