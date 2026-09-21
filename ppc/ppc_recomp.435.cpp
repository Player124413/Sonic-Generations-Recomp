#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832AECF0"))) PPC_WEAK_FUNC(sub_832AECF0);
PPC_FUNC_IMPL(__imp__sub_832AECF0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r11,-40(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,-24(r1)
	PPC_STORE_U16(ctx.r1.u32 + -24, ctx.r11.u16);
	// lwz r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832aedd8
	if (ctx.cr6.eq) goto loc_832AEDD8;
	// lwz r11,-56(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832aedc4
	if (ctx.cr6.lt) goto loc_832AEDC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// b 0x832aedcc
	goto loc_832AEDCC;
loc_832AEDC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
loc_832AEDCC:
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// b 0x832aee14
	goto loc_832AEE14;
loc_832AEDD8:
	// lwz r11,-56(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x832aee04
	if (!ctx.cr6.gt) goto loc_832AEE04;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x832aee0c
	goto loc_832AEE0C;
loc_832AEE04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_832AEE0C:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
loc_832AEE14:
	// lhz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -24);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,-64(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AEEAC"))) PPC_WEAK_FUNC(sub_832AEEAC);
PPC_FUNC_IMPL(__imp__sub_832AEEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEEB0"))) PPC_WEAK_FUNC(sub_832AEEB0);
PPC_FUNC_IMPL(__imp__sub_832AEEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832aef58
	if (ctx.cr6.eq) goto loc_832AEF58;
	// lwz r11,-40(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r10,-20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x832aef70
	goto loc_832AEF70;
loc_832AEF58:
	// lwz r11,-40(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r10,-20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_832AEF70:
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,-36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x832aefc4
	if (ctx.cr6.lt) goto loc_832AEFC4;
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x832aefc4
	if (ctx.cr6.gt) goto loc_832AEFC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// b 0x832aefcc
	goto loc_832AEFCC;
loc_832AEFC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
loc_832AEFCC:
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,-36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwz r9,-20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF080"))) PPC_WEAK_FUNC(sub_832AF080);
PPC_FUNC_IMPL(__imp__sub_832AF080) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF1BC"))) PPC_WEAK_FUNC(sub_832AF1BC);
PPC_FUNC_IMPL(__imp__sub_832AF1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF1C0"))) PPC_WEAK_FUNC(sub_832AF1C0);
PPC_FUNC_IMPL(__imp__sub_832AF1C0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF2FC"))) PPC_WEAK_FUNC(sub_832AF2FC);
PPC_FUNC_IMPL(__imp__sub_832AF2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF300"))) PPC_WEAK_FUNC(sub_832AF300);
PPC_FUNC_IMPL(__imp__sub_832AF300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lwz r11,-40(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r10,-20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,-20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,-36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x832af414
	if (ctx.cr6.lt) goto loc_832AF414;
	// ld r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x832af414
	if (ctx.cr6.gt) goto loc_832AF414;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// b 0x832af41c
	goto loc_832AF41C;
loc_832AF414:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
loc_832AF41C:
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwz r9,-20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF4D0"))) PPC_WEAK_FUNC(sub_832AF4D0);
PPC_FUNC_IMPL(__imp__sub_832AF4D0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF4DC"))) PPC_WEAK_FUNC(sub_832AF4DC);
PPC_FUNC_IMPL(__imp__sub_832AF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF4E0"))) PPC_WEAK_FUNC(sub_832AF4E0);
PPC_FUNC_IMPL(__imp__sub_832AF4E0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF4EC"))) PPC_WEAK_FUNC(sub_832AF4EC);
PPC_FUNC_IMPL(__imp__sub_832AF4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF4F0"))) PPC_WEAK_FUNC(sub_832AF4F0);
PPC_FUNC_IMPL(__imp__sub_832AF4F0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF4FC"))) PPC_WEAK_FUNC(sub_832AF4FC);
PPC_FUNC_IMPL(__imp__sub_832AF4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF500"))) PPC_WEAK_FUNC(sub_832AF500);
PPC_FUNC_IMPL(__imp__sub_832AF500) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// rlwinm r10,r10,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x832af5e0
	if (!ctx.cr6.lt) goto loc_832AF5E0;
	// lwz r11,-52(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
loc_832AF5E0:
	// lwz r11,-52(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x832af610
	if (!ctx.cr6.lt) goto loc_832AF610;
	// lwz r11,-52(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// b 0x832af624
	goto loc_832AF624;
loc_832AF610:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
loc_832AF624:
	// lwz r11,-52(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832af660
	if (ctx.cr6.eq) goto loc_832AF660;
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
loc_832AF660:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF6A4"))) PPC_WEAK_FUNC(sub_832AF6A4);
PPC_FUNC_IMPL(__imp__sub_832AF6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF6A8"))) PPC_WEAK_FUNC(sub_832AF6A8);
PPC_FUNC_IMPL(__imp__sub_832AF6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dfc0
	ctx.lr = 0x832AF764;
	sub_8329DFC0(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dfc0
	ctx.lr = 0x832AF774;
	sub_8329DFC0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r10,r10,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x832af7fc
	if (!ctx.cr6.lt) goto loc_832AF7FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_832AF7FC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x832af82c
	if (!ctx.cr6.lt) goto loc_832AF82C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x832af840
	goto loc_832AF840;
loc_832AF82C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_832AF840:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832af87c
	if (ctx.cr6.eq) goto loc_832AF87C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
loc_832AF87C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329ddd0
	ctx.lr = 0x832AF898;
	sub_8329DDD0(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF8BC"))) PPC_WEAK_FUNC(sub_832AF8BC);
PPC_FUNC_IMPL(__imp__sub_832AF8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF8C0"))) PPC_WEAK_FUNC(sub_832AF8C0);
PPC_FUNC_IMPL(__imp__sub_832AF8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329dfc0
	ctx.lr = 0x832AF930;
	sub_8329DFC0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329dfc0
	ctx.lr = 0x832AF98C;
	sub_8329DFC0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// blt cr6,0x832af9d4
	if (ctx.cr6.lt) goto loc_832AF9D4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// bgt cr6,0x832af9d4
	if (ctx.cr6.gt) goto loc_832AF9D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// b 0x832af9dc
	goto loc_832AF9DC;
loc_832AF9D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_832AF9DC:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x832afa10
	if (!ctx.cr6.gt) goto loc_832AFA10;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x832afa18
	goto loc_832AFA18;
loc_832AFA10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_832AFA18:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFA98"))) PPC_WEAK_FUNC(sub_832AFA98);
PPC_FUNC_IMPL(__imp__sub_832AFA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329def8
	ctx.lr = 0x832AFAE0;
	sub_8329DEF8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329def8
	ctx.lr = 0x832AFB14;
	sub_8329DEF8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// blt cr6,0x832afb5c
	if (ctx.cr6.lt) goto loc_832AFB5C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// bgt cr6,0x832afb5c
	if (ctx.cr6.gt) goto loc_832AFB5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x832afb64
	goto loc_832AFB64;
loc_832AFB5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_832AFB64:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x832afb98
	if (!ctx.cr6.gt) goto loc_832AFB98;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// b 0x832afba0
	goto loc_832AFBA0;
loc_832AFB98:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_832AFBA0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFC80"))) PPC_WEAK_FUNC(sub_832AFC80);
PPC_FUNC_IMPL(__imp__sub_832AFC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329df70
	ctx.lr = 0x832AFCC8;
	sub_8329DF70(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329df70
	ctx.lr = 0x832AFCFC;
	sub_8329DF70(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x832afd60
	if (ctx.cr6.lt) goto loc_832AFD60;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x832afd60
	if (ctx.cr6.gt) goto loc_832AFD60;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x832afd68
	goto loc_832AFD68;
loc_832AFD60:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_832AFD68:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFE40"))) PPC_WEAK_FUNC(sub_832AFE40);
PPC_FUNC_IMPL(__imp__sub_832AFE40) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x832afe98
	goto loc_832AFE98;
loc_832AFE8C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_832AFE98:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x832afecc
	if (!ctx.cr6.lt) goto loc_832AFECC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832afec8
	if (!ctx.cr6.eq) goto loc_832AFEC8;
	// b 0x832afecc
	goto loc_832AFECC;
loc_832AFEC8:
	// b 0x832afe8c
	goto loc_832AFE8C;
loc_832AFECC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x832aff40
	if (ctx.cr6.lt) goto loc_832AFF40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x832afefc
	goto loc_832AFEFC;
loc_832AFEF0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_832AFEFC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x832aff34
	if (!ctx.cr6.lt) goto loc_832AFF34;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832aff30
	if (!ctx.cr6.eq) goto loc_832AFF30;
	// b 0x832aff40
	goto loc_832AFF40;
	// b 0x832aff40
	goto loc_832AFF40;
loc_832AFF30:
	// b 0x832afef0
	goto loc_832AFEF0;
loc_832AFF34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x832b001c
	goto loc_832B001C;
loc_832AFF40:
	// b 0x832aff5c
	goto loc_832AFF5C;
	// b 0x832aff5c
	goto loc_832AFF5C;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,29128
	ctx.r3.s64 = ctx.r11.s64 + 29128;
	// bl 0x82c10e98
	ctx.lr = 0x832AFF5C;
	sub_82C10E98(ctx, base);
loc_832AFF5C:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832affb4
	if (!ctx.cr6.eq) goto loc_832AFFB4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832AFFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832AFFB4:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832afff0
	if (!ctx.cr6.eq) goto loc_832AFFF0;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832AFFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832AFFF0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832b001c
	if (!ctx.cr6.eq) goto loc_832B001C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B001C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832B001C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B002C"))) PPC_WEAK_FUNC(sub_832B002C);
PPC_FUNC_IMPL(__imp__sub_832B002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0030"))) PPC_WEAK_FUNC(sub_832B0030);
PPC_FUNC_IMPL(__imp__sub_832B0030) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832afe40
	ctx.lr = 0x832B0050;
	sub_832AFE40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0060"))) PPC_WEAK_FUNC(sub_832B0060);
PPC_FUNC_IMPL(__imp__sub_832B0060) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B006C"))) PPC_WEAK_FUNC(sub_832B006C);
PPC_FUNC_IMPL(__imp__sub_832B006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0070"))) PPC_WEAK_FUNC(sub_832B0070);
PPC_FUNC_IMPL(__imp__sub_832B0070) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8329e358
	ctx.lr = 0x832B0090;
	sub_8329E358(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832b0100
	if (ctx.cr6.lt) goto loc_832B0100;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 49152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832b00e4
	if (ctx.cr6.lt) goto loc_832B00E4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8329a110
	ctx.lr = 0x832B00C4;
	sub_8329A110(ctx, base);
	// cmpwi cr6,r3,20217
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20217, ctx.xer);
	// bne cr6,0x832b00e0
	if (!ctx.cr6.eq) goto loc_832B00E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8329a0e0
	ctx.lr = 0x832B00DC;
	sub_8329A0E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_832B00E0:
	// b 0x832b0100
	goto loc_832B0100;
loc_832B00E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832B0100:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0154"))) PPC_WEAK_FUNC(sub_832B0154);
PPC_FUNC_IMPL(__imp__sub_832B0154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0158"))) PPC_WEAK_FUNC(sub_832B0158);
PPC_FUNC_IMPL(__imp__sub_832B0158) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8329de80
	ctx.lr = 0x832B01C4;
	sub_8329DE80(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B01FC"))) PPC_WEAK_FUNC(sub_832B01FC);
PPC_FUNC_IMPL(__imp__sub_832B01FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0200"))) PPC_WEAK_FUNC(sub_832B0200);
PPC_FUNC_IMPL(__imp__sub_832B0200) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329dc50
	ctx.lr = 0x832B021C;
	sub_8329DC50(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329de80
	ctx.lr = 0x832B027C;
	sub_8329DE80(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B02C0"))) PPC_WEAK_FUNC(sub_832B02C0);
PPC_FUNC_IMPL(__imp__sub_832B02C0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8329e358
	ctx.lr = 0x832B02E0;
	sub_8329E358(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8329de80
	ctx.lr = 0x832B033C;
	sub_8329DE80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0390"))) PPC_WEAK_FUNC(sub_832B0390);
PPC_FUNC_IMPL(__imp__sub_832B0390) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329de80
	ctx.lr = 0x832B0400;
	sub_8329DE80(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329a0a8
	ctx.lr = 0x832B0408;
	sub_8329A0A8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0458"))) PPC_WEAK_FUNC(sub_832B0458);
PPC_FUNC_IMPL(__imp__sub_832B0458) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832b16c0
	ctx.lr = 0x832B0474;
	sub_832B16C0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B04D8"))) PPC_WEAK_FUNC(sub_832B04D8);
PPC_FUNC_IMPL(__imp__sub_832B04D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8329e358
	ctx.lr = 0x832B0500;
	sub_8329E358(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8329de80
	ctx.lr = 0x832B053C;
	sub_8329DE80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B054C"))) PPC_WEAK_FUNC(sub_832B054C);
PPC_FUNC_IMPL(__imp__sub_832B054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0550"))) PPC_WEAK_FUNC(sub_832B0550);
PPC_FUNC_IMPL(__imp__sub_832B0550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x832b16c0
	ctx.lr = 0x832B05A8;
	sub_832B16C0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B05D0"))) PPC_WEAK_FUNC(sub_832B05D0);
PPC_FUNC_IMPL(__imp__sub_832B05D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329de80
	ctx.lr = 0x832B064C;
	sub_8329DE80(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dc50
	ctx.lr = 0x832B0674;
	sub_8329DC50(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B06B0"))) PPC_WEAK_FUNC(sub_832B06B0);
PPC_FUNC_IMPL(__imp__sub_832B06B0) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329d308
	ctx.lr = 0x832B06C8;
	sub_8329D308(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x832b1720
	ctx.lr = 0x832B06D4;
	sub_832B1720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329dc10
	ctx.lr = 0x832B06E0;
	sub_8329DC10(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x832b16c0
	ctx.lr = 0x832B06E8;
	sub_832B16C0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329dd10
	ctx.lr = 0x832B0738;
	sub_8329DD10(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329db98
	ctx.lr = 0x832B0754;
	sub_8329DB98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0764"))) PPC_WEAK_FUNC(sub_832B0764);
PPC_FUNC_IMPL(__imp__sub_832B0764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0768"))) PPC_WEAK_FUNC(sub_832B0768);
PPC_FUNC_IMPL(__imp__sub_832B0768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b07a4
	if (!ctx.cr6.eq) goto loc_832B07A4;
	// b 0x832b0838
	goto loc_832B0838;
loc_832B07A4:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329d308
	ctx.lr = 0x832B07AC;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x832b1720
	ctx.lr = 0x832B07BC;
	sub_832B1720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329dc10
	ctx.lr = 0x832B07C8;
	sub_8329DC10(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x832b16c0
	ctx.lr = 0x832B07D0;
	sub_832B16C0(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329dd10
	ctx.lr = 0x832B081C;
	sub_8329DD10(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329db98
	ctx.lr = 0x832B0838;
	sub_8329DB98(ctx, base);
loc_832B0838:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0848"))) PPC_WEAK_FUNC(sub_832B0848);
PPC_FUNC_IMPL(__imp__sub_832B0848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b08b4
	if (!ctx.cr6.eq) goto loc_832B08B4;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
loc_832B08B4:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B08BC;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329de80
	ctx.lr = 0x832B091C;
	sub_8329DE80(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B0924;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329de28
	ctx.lr = 0x832B0964;
	sub_8329DE28(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B096C;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r4,r11,8192
	ctx.r4.u64 = ctx.r11.u64 | 8192;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dc10
	ctx.lr = 0x832B097C;
	sub_8329DC10(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329df70
	ctx.lr = 0x832B0994;
	sub_8329DF70(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B09E4"))) PPC_WEAK_FUNC(sub_832B09E4);
PPC_FUNC_IMPL(__imp__sub_832B09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B09E8"))) PPC_WEAK_FUNC(sub_832B09E8);
PPC_FUNC_IMPL(__imp__sub_832B09E8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0A20;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0A30"))) PPC_WEAK_FUNC(sub_832B0A30);
PPC_FUNC_IMPL(__imp__sub_832B0A30) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0A60;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0A70"))) PPC_WEAK_FUNC(sub_832B0A70);
PPC_FUNC_IMPL(__imp__sub_832B0A70) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0AA4;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0AB4"))) PPC_WEAK_FUNC(sub_832B0AB4);
PPC_FUNC_IMPL(__imp__sub_832B0AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0AB8"))) PPC_WEAK_FUNC(sub_832B0AB8);
PPC_FUNC_IMPL(__imp__sub_832B0AB8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0AE4;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0AF4"))) PPC_WEAK_FUNC(sub_832B0AF4);
PPC_FUNC_IMPL(__imp__sub_832B0AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0AF8"))) PPC_WEAK_FUNC(sub_832B0AF8);
PPC_FUNC_IMPL(__imp__sub_832B0AF8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0B2C;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B3C"))) PPC_WEAK_FUNC(sub_832B0B3C);
PPC_FUNC_IMPL(__imp__sub_832B0B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B40"))) PPC_WEAK_FUNC(sub_832B0B40);
PPC_FUNC_IMPL(__imp__sub_832B0B40) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0B6C;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B7C"))) PPC_WEAK_FUNC(sub_832B0B7C);
PPC_FUNC_IMPL(__imp__sub_832B0B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B80"))) PPC_WEAK_FUNC(sub_832B0B80);
PPC_FUNC_IMPL(__imp__sub_832B0B80) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0BB4;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0BC4"))) PPC_WEAK_FUNC(sub_832B0BC4);
PPC_FUNC_IMPL(__imp__sub_832B0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0BC8"))) PPC_WEAK_FUNC(sub_832B0BC8);
PPC_FUNC_IMPL(__imp__sub_832B0BC8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0C04;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C14"))) PPC_WEAK_FUNC(sub_832B0C14);
PPC_FUNC_IMPL(__imp__sub_832B0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C18"))) PPC_WEAK_FUNC(sub_832B0C18);
PPC_FUNC_IMPL(__imp__sub_832B0C18) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b0c6c
	if (!ctx.cr6.eq) goto loc_832B0C6C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b0c6c
	if (!ctx.cr6.eq) goto loc_832B0C6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x832b0c74
	goto loc_832B0C74;
loc_832B0C6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832B0C74:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0C84;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C94"))) PPC_WEAK_FUNC(sub_832B0C94);
PPC_FUNC_IMPL(__imp__sub_832B0C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C98"))) PPC_WEAK_FUNC(sub_832B0C98);
PPC_FUNC_IMPL(__imp__sub_832B0C98) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b0cec
	if (!ctx.cr6.eq) goto loc_832B0CEC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b0cec
	if (!ctx.cr6.eq) goto loc_832B0CEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x832b0cf4
	goto loc_832B0CF4;
loc_832B0CEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832B0CF4:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0D04;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D14"))) PPC_WEAK_FUNC(sub_832B0D14);
PPC_FUNC_IMPL(__imp__sub_832B0D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D18"))) PPC_WEAK_FUNC(sub_832B0D18);
PPC_FUNC_IMPL(__imp__sub_832B0D18) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0D64;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D74"))) PPC_WEAK_FUNC(sub_832B0D74);
PPC_FUNC_IMPL(__imp__sub_832B0D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D78"))) PPC_WEAK_FUNC(sub_832B0D78);
PPC_FUNC_IMPL(__imp__sub_832B0D78) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0DBC;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0DCC"))) PPC_WEAK_FUNC(sub_832B0DCC);
PPC_FUNC_IMPL(__imp__sub_832B0DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0DD0"))) PPC_WEAK_FUNC(sub_832B0DD0);
PPC_FUNC_IMPL(__imp__sub_832B0DD0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b0e34
	if (!ctx.cr6.eq) goto loc_832B0E34;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b0e34
	if (!ctx.cr6.eq) goto loc_832B0E34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x832b0e3c
	goto loc_832B0E3C;
loc_832B0E34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_832B0E3C:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0E4C;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E5C"))) PPC_WEAK_FUNC(sub_832B0E5C);
PPC_FUNC_IMPL(__imp__sub_832B0E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E60"))) PPC_WEAK_FUNC(sub_832B0E60);
PPC_FUNC_IMPL(__imp__sub_832B0E60) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b0ec4
	if (!ctx.cr6.eq) goto loc_832B0EC4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b0ec4
	if (!ctx.cr6.eq) goto loc_832B0EC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x832b0ecc
	goto loc_832B0ECC;
loc_832B0EC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_832B0ECC:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0EDC;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0EEC"))) PPC_WEAK_FUNC(sub_832B0EEC);
PPC_FUNC_IMPL(__imp__sub_832B0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0EF0"))) PPC_WEAK_FUNC(sub_832B0EF0);
PPC_FUNC_IMPL(__imp__sub_832B0EF0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832ab1e0
	ctx.lr = 0x832B0F14;
	sub_832AB1E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0F24"))) PPC_WEAK_FUNC(sub_832B0F24);
PPC_FUNC_IMPL(__imp__sub_832B0F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0F28"))) PPC_WEAK_FUNC(sub_832B0F28);
PPC_FUNC_IMPL(__imp__sub_832B0F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B0F50;
	sub_8329D308(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329a080
	ctx.lr = 0x832B0F5C;
	sub_8329A080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// or r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 | ctx.r11.u64;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dc10
	ctx.lr = 0x832B0F70;
	sub_8329DC10(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0F98"))) PPC_WEAK_FUNC(sub_832B0F98);
PPC_FUNC_IMPL(__imp__sub_832B0F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b102c
	if (ctx.cr6.eq) goto loc_832B102C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B0FDC;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B0FEC;
	sub_8329D308(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329a080
	ctx.lr = 0x832B0FF8;
	sub_8329A080(ctx, base);
	// or r4,r31,r3
	ctx.r4.u64 = ctx.r31.u64 | ctx.r3.u64;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dc10
	ctx.lr = 0x832B1004;
	sub_8329DC10(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dd10
	ctx.lr = 0x832B1010;
	sub_8329DD10(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329db98
	ctx.lr = 0x832B1018;
	sub_8329DB98(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_832B102C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1040"))) PPC_WEAK_FUNC(sub_832B1040);
PPC_FUNC_IMPL(__imp__sub_832B1040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B1068;
	sub_8329D308(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329a080
	ctx.lr = 0x832B1074;
	sub_8329A080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xor r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dc10
	ctx.lr = 0x832B1088;
	sub_8329DC10(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B10B0"))) PPC_WEAK_FUNC(sub_832B10B0);
PPC_FUNC_IMPL(__imp__sub_832B10B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b1144
	if (ctx.cr6.eq) goto loc_832B1144;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B10F4;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B1104;
	sub_8329D308(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329a080
	ctx.lr = 0x832B1110;
	sub_8329A080(ctx, base);
	// xor r4,r31,r3
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dc10
	ctx.lr = 0x832B111C;
	sub_8329DC10(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dd10
	ctx.lr = 0x832B1128;
	sub_8329DD10(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329db98
	ctx.lr = 0x832B1130;
	sub_8329DB98(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_832B1144:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1158"))) PPC_WEAK_FUNC(sub_832B1158);
PPC_FUNC_IMPL(__imp__sub_832B1158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329d308
	ctx.lr = 0x832B1180;
	sub_8329D308(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329a080
	ctx.lr = 0x832B118C;
	sub_8329A080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 65280;
	// and r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 & ctx.r11.u64;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8329dc10
	ctx.lr = 0x832B11A4;
	sub_8329DC10(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B11CC"))) PPC_WEAK_FUNC(sub_832B11CC);
PPC_FUNC_IMPL(__imp__sub_832B11CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B11D0"))) PPC_WEAK_FUNC(sub_832B11D0);
PPC_FUNC_IMPL(__imp__sub_832B11D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b1268
	if (ctx.cr6.eq) goto loc_832B1268;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8329d308
	ctx.lr = 0x832B1214;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8329d308
	ctx.lr = 0x832B1224;
	sub_8329D308(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8329a080
	ctx.lr = 0x832B1230;
	sub_8329A080(ctx, base);
	// and r4,r31,r3
	ctx.r4.u64 = ctx.r31.u64 & ctx.r3.u64;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8329dc10
	ctx.lr = 0x832B123C;
	sub_8329DC10(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8329dd10
	ctx.lr = 0x832B1248;
	sub_8329DD10(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8329db98
	ctx.lr = 0x832B1250;
	sub_8329DB98(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x832b1270
	goto loc_832B1270;
loc_832B1268:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8329a080
	ctx.lr = 0x832B1270;
	sub_8329A080(ctx, base);
loc_832B1270:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1284"))) PPC_WEAK_FUNC(sub_832B1284);
PPC_FUNC_IMPL(__imp__sub_832B1284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1288"))) PPC_WEAK_FUNC(sub_832B1288);
PPC_FUNC_IMPL(__imp__sub_832B1288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b1314
	if (ctx.cr6.eq) goto loc_832B1314;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329d308
	ctx.lr = 0x832B12C8;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329e918
	ctx.lr = 0x832B12DC;
	sub_8329E918(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329dc10
	ctx.lr = 0x832B12EC;
	sub_8329DC10(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329dd10
	ctx.lr = 0x832B12F8;
	sub_8329DD10(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329db98
	ctx.lr = 0x832B1314;
	sub_8329DB98(ctx, base);
loc_832B1314:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1324"))) PPC_WEAK_FUNC(sub_832B1324);
PPC_FUNC_IMPL(__imp__sub_832B1324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1328"))) PPC_WEAK_FUNC(sub_832B1328);
PPC_FUNC_IMPL(__imp__sub_832B1328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8329e918
	ctx.lr = 0x832B1350;
	sub_8329E918(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8329d308
	ctx.lr = 0x832B135C;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r11,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8329dc10
	ctx.lr = 0x832B137C;
	sub_8329DC10(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B13A0"))) PPC_WEAK_FUNC(sub_832B13A0);
PPC_FUNC_IMPL(__imp__sub_832B13A0) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329a080
	ctx.lr = 0x832B13BC;
	sub_8329A080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329dc10
	ctx.lr = 0x832B13C8;
	sub_8329DC10(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B13E4"))) PPC_WEAK_FUNC(sub_832B13E4);
PPC_FUNC_IMPL(__imp__sub_832B13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B13E8"))) PPC_WEAK_FUNC(sub_832B13E8);
PPC_FUNC_IMPL(__imp__sub_832B13E8) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x832b1720
	ctx.lr = 0x832B1404;
	sub_832B1720(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329d308
	ctx.lr = 0x832B1414;
	sub_8329D308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r11,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8329dc10
	ctx.lr = 0x832B1434;
	sub_8329DC10(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x832b16c0
	ctx.lr = 0x832B143C;
	sub_832B16C0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B14A0"))) PPC_WEAK_FUNC(sub_832B14A0);
PPC_FUNC_IMPL(__imp__sub_832B14A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8329a080
	ctx.lr = 0x832B14C4;
	sub_8329A080(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x832b16c0
	ctx.lr = 0x832B14D8;
	sub_832B16C0(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1550"))) PPC_WEAK_FUNC(sub_832B1550);
PPC_FUNC_IMPL(__imp__sub_832B1550) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832afe40
	ctx.lr = 0x832B1570;
	sub_832AFE40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1580"))) PPC_WEAK_FUNC(sub_832B1580);
PPC_FUNC_IMPL(__imp__sub_832B1580) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8329e358
	ctx.lr = 0x832B15A0;
	sub_8329E358(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832b1610
	if (ctx.cr6.lt) goto loc_832B1610;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 49152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832b15f4
	if (ctx.cr6.lt) goto loc_832B15F4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8329a110
	ctx.lr = 0x832B15D4;
	sub_8329A110(ctx, base);
	// cmpwi cr6,r3,20217
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20217, ctx.xer);
	// bne cr6,0x832b15f0
	if (!ctx.cr6.eq) goto loc_832B15F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8329a0e0
	ctx.lr = 0x832B15EC;
	sub_8329A0E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_832B15F0:
	// b 0x832b1610
	goto loc_832B1610;
loc_832B15F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832B1610:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8329de80
	ctx.lr = 0x832B1668;
	sub_8329DE80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B16BC"))) PPC_WEAK_FUNC(sub_832B16BC);
PPC_FUNC_IMPL(__imp__sub_832B16BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B16C0"))) PPC_WEAK_FUNC(sub_832B16C0);
PPC_FUNC_IMPL(__imp__sub_832B16C0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8329df70
	ctx.lr = 0x832B16E0;
	sub_8329DF70(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B171C"))) PPC_WEAK_FUNC(sub_832B171C);
PPC_FUNC_IMPL(__imp__sub_832B171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1720"))) PPC_WEAK_FUNC(sub_832B1720);
PPC_FUNC_IMPL(__imp__sub_832B1720) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8329def8
	ctx.lr = 0x832B1740;
	sub_8329DEF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B177C"))) PPC_WEAK_FUNC(sub_832B177C);
PPC_FUNC_IMPL(__imp__sub_832B177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1780"))) PPC_WEAK_FUNC(sub_832B1780);
PPC_FUNC_IMPL(__imp__sub_832B1780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1784"))) PPC_WEAK_FUNC(sub_832B1784);
PPC_FUNC_IMPL(__imp__sub_832B1784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1788"))) PPC_WEAK_FUNC(sub_832B1788);
PPC_FUNC_IMPL(__imp__sub_832B1788) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832b181c
	if (ctx.cr6.eq) goto loc_832B181C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-31824
	ctx.r5.s64 = -2085617664;
	// lis r6,-31824
	ctx.r6.s64 = -2085617664;
	// li r4,0
	ctx.r4.s64 = 0;
loc_832B17B4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// xor r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r31.u64;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r30,r7,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r7,700(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 700);
	// lwzx r30,r30,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwz r7,704(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 704);
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// rlwinm r7,r7,30,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0xFFFF;
	// or r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 | ctx.r31.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bne cr6,0x832b17b4
	if (!ctx.cr6.eq) goto loc_832B17B4;
loc_832B181C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1828"))) PPC_WEAK_FUNC(sub_832B1828);
PPC_FUNC_IMPL(__imp__sub_832B1828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832B1830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r30,r6,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x832b185c
	if (!ctx.cr6.gt) goto loc_832B185C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832B185C:
	// bl 0x82e01690
	ctx.lr = 0x832B1860;
	sub_82E01690(ctx, base);
	// lis r6,-31824
	ctx.r6.s64 = -2085617664;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lwz r11,700(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 700);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_832B187C:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832b188c
	if (!ctx.cr6.lt) goto loc_832B188C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832B188C:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x832b1898
	if (!ctx.cr6.gt) goto loc_832B1898;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832B1898:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832b18a8
	if (!ctx.cr6.lt) goto loc_832B18A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832B18A8:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x832b18b4
	if (!ctx.cr6.gt) goto loc_832B18B4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832B18B4:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832b18c4
	if (!ctx.cr6.lt) goto loc_832B18C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832B18C4:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x832b18d0
	if (!ctx.cr6.gt) goto loc_832B18D0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832B18D0:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832b18e0
	if (!ctx.cr6.lt) goto loc_832B18E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832B18E0:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x832b18ec
	if (!ctx.cr6.gt) goto loc_832B18EC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832B18EC:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x832b187c
	if (!ctx.cr6.eq) goto loc_832B187C;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r9,r9,65532
	ctx.r9.u64 = ctx.r9.u64 | 65532;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x832b191c
	if (!ctx.cr6.gt) goto loc_832B191C;
loc_832B1918:
	// b 0x832b1918
	goto loc_832B1918;
loc_832B191C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x832b1980
	if (!ctx.cr6.gt) goto loc_832B1980;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r7,r29,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832B1934:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lhzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,700(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 700);
	// lwzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// stwx r8,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x832b1934
	if (!ctx.cr6.eq) goto loc_832B1934;
loc_832B1980:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1988"))) PPC_WEAK_FUNC(sub_832B1988);
PPC_FUNC_IMPL(__imp__sub_832B1988) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x832b5bb0
	ctx.lr = 0x832B19A4;
	sub_832B5BB0(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// lwz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_832B19C8"))) PPC_WEAK_FUNC(sub_832B19C8);
PPC_FUNC_IMPL(__imp__sub_832B19C8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x832b5bb0
	ctx.lr = 0x832B19E4;
	sub_832B5BB0(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// lwz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_832B1A08"))) PPC_WEAK_FUNC(sub_832B1A08);
PPC_FUNC_IMPL(__imp__sub_832B1A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832B1A10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r28,r6,16
	ctx.r28.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r27,r5,16
	ctx.r27.u64 = ctx.r5.u32 & 0xFFFF;
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
	// lis r26,1
	ctx.r26.s64 = 65536;
loc_832B1A2C:
	// and r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 & ctx.r31.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x832b1a4c
	if (!ctx.cr6.eq) goto loc_832B1A4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1A40;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1A4C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x832b1a2c
	if (ctx.cr6.lt) goto loc_832B1A2C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1A60"))) PPC_WEAK_FUNC(sub_832B1A60);
PPC_FUNC_IMPL(__imp__sub_832B1A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832B1A68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r28,r7,16
	ctx.r28.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r27,r6,16
	ctx.r27.u64 = ctx.r6.u32 & 0xFFFF;
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
	// lis r26,1
	ctx.r26.s64 = 65536;
loc_832B1A84:
	// and r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 & ctx.r31.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x832b1aa4
	if (!ctx.cr6.eq) goto loc_832B1AA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1A98;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1AA4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x832b1a84
	if (ctx.cr6.lt) goto loc_832B1A84;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1AB8"))) PPC_WEAK_FUNC(sub_832B1AB8);
PPC_FUNC_IMPL(__imp__sub_832B1AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832B1AC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r26,r6,16
	ctx.r26.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r25,r5,16
	ctx.r25.u64 = ctx.r5.u32 & 0xFFFF;
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
	// lis r24,1
	ctx.r24.s64 = 65536;
loc_832B1AE4:
	// and r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 & ctx.r31.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x832b1b18
	if (!ctx.cr6.eq) goto loc_832B1B18;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x832b1b18
	if (ctx.cr6.eq) goto loc_832B1B18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1B0C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1B18:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x832b1ae4
	if (ctx.cr6.lt) goto loc_832B1AE4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1B2C"))) PPC_WEAK_FUNC(sub_832B1B2C);
PPC_FUNC_IMPL(__imp__sub_832B1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1B30"))) PPC_WEAK_FUNC(sub_832B1B30);
PPC_FUNC_IMPL(__imp__sub_832B1B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x832B1B38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r26,r7,16
	ctx.r26.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r25,r6,16
	ctx.r25.u64 = ctx.r6.u32 & 0xFFFF;
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
	// lis r24,1
	ctx.r24.s64 = 65536;
loc_832B1B5C:
	// and r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 & ctx.r31.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x832b1b90
	if (!ctx.cr6.eq) goto loc_832B1B90;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x832b1b90
	if (ctx.cr6.eq) goto loc_832B1B90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1B84;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1B90:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x832b1b5c
	if (ctx.cr6.lt) goto loc_832B1B5C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1BA4"))) PPC_WEAK_FUNC(sub_832B1BA4);
PPC_FUNC_IMPL(__imp__sub_832B1BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1BA8"))) PPC_WEAK_FUNC(sub_832B1BA8);
PPC_FUNC_IMPL(__imp__sub_832B1BA8) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// b 0x832b1ab8
	sub_832B1AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1BB8"))) PPC_WEAK_FUNC(sub_832B1BB8);
PPC_FUNC_IMPL(__imp__sub_832B1BB8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,192
	ctx.r9.s64 = 192;
	// li r8,192
	ctx.r8.s64 = 192;
	// b 0x832b1b30
	sub_832B1B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1BC8"))) PPC_WEAK_FUNC(sub_832B1BC8);
PPC_FUNC_IMPL(__imp__sub_832B1BC8) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-64
	ctx.r6.s64 = -64;
	// li r5,20096
	ctx.r5.s64 = 20096;
	// addi r4,r11,5504
	ctx.r4.s64 = ctx.r11.s64 + 5504;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832b1a08
	ctx.lr = 0x832B1BF4;
	sub_832B1A08(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1C00;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,15076
	ctx.r9.u64 = ctx.r10.u64 | 15076;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r10,112
	ctx.r4.s64 = ctx.r10.s64 + 112;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// li r6,-64
	ctx.r6.s64 = -64;
	// li r5,20160
	ctx.r5.s64 = 20160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b1a08
	ctx.lr = 0x832B1C34;
	sub_832B1A08(ctx, base);
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

__attribute__((alias("__imp__sub_832B1C48"))) PPC_WEAK_FUNC(sub_832B1C48);
PPC_FUNC_IMPL(__imp__sub_832B1C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832B1C50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// bl 0x82e01690
	ctx.lr = 0x832B1C60;
	sub_82E01690(ctx, base);
	// lis r31,-31824
	ctx.r31.s64 = -2085617664;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r3,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r3.u32);
	// addi r3,r11,-9136
	ctx.r3.s64 = ctx.r11.s64 + -9136;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1C74;
	sub_832B5BB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,4
	ctx.r9.s64 = 262144;
loc_832B1C7C:
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832b1c7c
	if (ctx.cr6.lt) goto loc_832B1C7C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// ori r26,r10,61944
	ctx.r26.u64 = ctx.r10.u64 | 61944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-20216
	ctx.r5.s64 = -20216;
	// addi r4,r11,-1856
	ctx.r4.s64 = ctx.r11.s64 + -1856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1CBC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-20152
	ctx.r5.s64 = -20152;
	// addi r4,r11,-1384
	ctx.r4.s64 = ctx.r11.s64 + -1384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1CE0;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-20088
	ctx.r5.s64 = -20088;
	// addi r4,r11,-896
	ctx.r4.s64 = ctx.r11.s64 + -896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1D04;
	sub_832B1AB8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// ori r25,r10,65472
	ctx.r25.u64 = ctx.r10.u64 | 65472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// addi r4,r11,27016
	ctx.r4.s64 = ctx.r11.s64 + 27016;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1D30;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,17472
	ctx.r5.s64 = 17472;
	// addi r4,r11,27264
	ctx.r4.s64 = ctx.r11.s64 + 27264;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1D54;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,17536
	ctx.r5.s64 = 17536;
	// addi r4,r11,27512
	ctx.r4.s64 = ctx.r11.s64 + 27512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1D78;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,1
	ctx.r27.s64 = 65536;
loc_832B1D80:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,17408
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17408, ctx.xer);
	// bne cr6,0x832b1da4
	if (!ctx.cr6.eq) goto loc_832B1DA4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,27752
	ctx.r3.s64 = ctx.r11.s64 + 27752;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1D98;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1DA4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b1d80
	if (ctx.cr6.lt) goto loc_832B1D80;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B1DB4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,17472
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17472, ctx.xer);
	// bne cr6,0x832b1dd8
	if (!ctx.cr6.eq) goto loc_832B1DD8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,27992
	ctx.r3.s64 = ctx.r11.s64 + 27992;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1DCC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1DD8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b1db4
	if (ctx.cr6.lt) goto loc_832B1DB4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B1DE8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,17536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17536, ctx.xer);
	// bne cr6,0x832b1e0c
	if (!ctx.cr6.eq) goto loc_832B1E0C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,28232
	ctx.r3.s64 = ctx.r11.s64 + 28232;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1E00;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1E0C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b1de8
	if (ctx.cr6.lt) goto loc_832B1DE8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,17920
	ctx.r5.s64 = 17920;
	// addi r4,r11,28472
	ctx.r4.s64 = ctx.r11.s64 + 28472;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1E3C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,17984
	ctx.r5.s64 = 17984;
	// addi r4,r11,28592
	ctx.r4.s64 = ctx.r11.s64 + 28592;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1E60;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,18048
	ctx.r5.s64 = 18048;
	// addi r4,r11,28712
	ctx.r4.s64 = ctx.r11.s64 + 28712;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1E84;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B1E88:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,17920
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17920, ctx.xer);
	// bne cr6,0x832b1eac
	if (!ctx.cr6.eq) goto loc_832B1EAC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,28832
	ctx.r3.s64 = ctx.r11.s64 + 28832;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1EA0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1EAC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b1e88
	if (ctx.cr6.lt) goto loc_832B1E88;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B1EBC:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,17984
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17984, ctx.xer);
	// bne cr6,0x832b1ee0
	if (!ctx.cr6.eq) goto loc_832B1EE0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,28968
	ctx.r3.s64 = ctx.r11.s64 + 28968;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1ED4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1EE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b1ebc
	if (ctx.cr6.lt) goto loc_832B1EBC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B1EF0:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18048, ctx.xer);
	// bne cr6,0x832b1f14
	if (!ctx.cr6.eq) goto loc_832B1F14;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,29104
	ctx.r3.s64 = ctx.r11.s64 + 29104;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1F08;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1F14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b1ef0
	if (ctx.cr6.lt) goto loc_832B1EF0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// ori r29,r10,61888
	ctx.r29.u64 = ctx.r10.u64 | 61888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-32512
	ctx.r5.s64 = -32512;
	// addi r4,r11,5440
	ctx.r4.s64 = ctx.r11.s64 + 5440;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1F4C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-32448
	ctx.r5.s64 = -32448;
	// addi r4,r11,5960
	ctx.r4.s64 = ctx.r11.s64 + 5960;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1F70;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-32384
	ctx.r5.s64 = -32384;
	// addi r4,r11,6480
	ctx.r4.s64 = ctx.r11.s64 + 6480;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B1F94;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B1F98:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x832b1fbc
	if (!ctx.cr6.eq) goto loc_832B1FBC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,5696
	ctx.r3.s64 = ctx.r11.s64 + 5696;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1FB0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1FBC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b1f98
	if (ctx.cr6.lt) goto loc_832B1F98;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B1FCC:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,32832
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32832, ctx.xer);
	// bne cr6,0x832b1ff0
	if (!ctx.cr6.eq) goto loc_832B1FF0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,6216
	ctx.r3.s64 = ctx.r11.s64 + 6216;
	// bl 0x832b5bb0
	ctx.lr = 0x832B1FE4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B1FF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b1fcc
	if (ctx.cr6.lt) goto loc_832B1FCC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2000:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,32896
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32896, ctx.xer);
	// bne cr6,0x832b2024
	if (!ctx.cr6.eq) goto loc_832B2024;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,6728
	ctx.r3.s64 = ctx.r11.s64 + 6728;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2018;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2024:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2000
	if (ctx.cr6.lt) goto loc_832B2000;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-28416
	ctx.r5.s64 = -28416;
	// addi r4,r11,8544
	ctx.r4.s64 = ctx.r11.s64 + 8544;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2054;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-28352
	ctx.r5.s64 = -28352;
	// addi r4,r11,9352
	ctx.r4.s64 = ctx.r11.s64 + 9352;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2078;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-28288
	ctx.r5.s64 = -28288;
	// addi r4,r11,10160
	ctx.r4.s64 = ctx.r11.s64 + 10160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B209C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B20A0:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,36864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36864, ctx.xer);
	// bne cr6,0x832b20c4
	if (!ctx.cr6.eq) goto loc_832B20C4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,8944
	ctx.r3.s64 = ctx.r11.s64 + 8944;
	// bl 0x832b5bb0
	ctx.lr = 0x832B20B8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B20C4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b20a0
	if (ctx.cr6.lt) goto loc_832B20A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B20D4:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,36928
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36928, ctx.xer);
	// bne cr6,0x832b20f8
	if (!ctx.cr6.eq) goto loc_832B20F8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,9752
	ctx.r3.s64 = ctx.r11.s64 + 9752;
	// bl 0x832b5bb0
	ctx.lr = 0x832B20EC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B20F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b20d4
	if (ctx.cr6.lt) goto loc_832B20D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2108:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,36992
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36992, ctx.xer);
	// bne cr6,0x832b212c
	if (!ctx.cr6.eq) goto loc_832B212C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,10512
	ctx.r3.s64 = ctx.r11.s64 + 10512;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2120;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B212C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2108
	if (ctx.cr6.lt) goto loc_832B2108;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-16128
	ctx.r5.s64 = -16128;
	// addi r4,r11,6992
	ctx.r4.s64 = ctx.r11.s64 + 6992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B215C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-16064
	ctx.r5.s64 = -16064;
	// addi r4,r11,7512
	ctx.r4.s64 = ctx.r11.s64 + 7512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2180;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-16000
	ctx.r5.s64 = -16000;
	// addi r4,r11,8032
	ctx.r4.s64 = ctx.r11.s64 + 8032;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B21A4;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B21A8:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bne cr6,0x832b21cc
	if (!ctx.cr6.eq) goto loc_832B21CC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,7248
	ctx.r3.s64 = ctx.r11.s64 + 7248;
	// bl 0x832b5bb0
	ctx.lr = 0x832B21C0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B21CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b21a8
	if (ctx.cr6.lt) goto loc_832B21A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B21DC:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49216
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49216, ctx.xer);
	// bne cr6,0x832b2200
	if (!ctx.cr6.eq) goto loc_832B2200;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,7768
	ctx.r3.s64 = ctx.r11.s64 + 7768;
	// bl 0x832b5bb0
	ctx.lr = 0x832B21F4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2200:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b21dc
	if (ctx.cr6.lt) goto loc_832B21DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2210:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49280
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49280, ctx.xer);
	// bne cr6,0x832b2234
	if (!ctx.cr6.eq) goto loc_832B2234;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,8280
	ctx.r3.s64 = ctx.r11.s64 + 8280;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2228;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2234:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2210
	if (ctx.cr6.lt) goto loc_832B2210;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-12032
	ctx.r5.s64 = -12032;
	// addi r4,r11,10888
	ctx.r4.s64 = ctx.r11.s64 + 10888;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2264;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-11968
	ctx.r5.s64 = -11968;
	// addi r4,r11,11648
	ctx.r4.s64 = ctx.r11.s64 + 11648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2288;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-11904
	ctx.r5.s64 = -11904;
	// addi r4,r11,12408
	ctx.r4.s64 = ctx.r11.s64 + 12408;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B22AC;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B22B0:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,53248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53248, ctx.xer);
	// bne cr6,0x832b22d4
	if (!ctx.cr6.eq) goto loc_832B22D4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,11264
	ctx.r3.s64 = ctx.r11.s64 + 11264;
	// bl 0x832b5bb0
	ctx.lr = 0x832B22C8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B22D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b22b0
	if (ctx.cr6.lt) goto loc_832B22B0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B22E4:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,53312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53312, ctx.xer);
	// bne cr6,0x832b2308
	if (!ctx.cr6.eq) goto loc_832B2308;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,12024
	ctx.r3.s64 = ctx.r11.s64 + 12024;
	// bl 0x832b5bb0
	ctx.lr = 0x832B22FC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2308:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b22e4
	if (ctx.cr6.lt) goto loc_832B22E4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2318:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,53376
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53376, ctx.xer);
	// bne cr6,0x832b233c
	if (!ctx.cr6.eq) goto loc_832B233C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,12768
	ctx.r3.s64 = ctx.r11.s64 + 12768;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2330;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B233C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2318
	if (ctx.cr6.lt) goto loc_832B2318;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B234C:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,53440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53440, ctx.xer);
	// bne cr6,0x832b2370
	if (!ctx.cr6.eq) goto loc_832B2370;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2364;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2370:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b234c
	if (ctx.cr6.lt) goto loc_832B234C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2380:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,53696
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53696, ctx.xer);
	// bne cr6,0x832b23a4
	if (!ctx.cr6.eq) goto loc_832B23A4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2398;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B23A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2380
	if (ctx.cr6.lt) goto loc_832B2380;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B23B4:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,37056
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37056, ctx.xer);
	// bne cr6,0x832b23d8
	if (!ctx.cr6.eq) goto loc_832B23D8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21096
	ctx.r3.s64 = ctx.r11.s64 + 21096;
	// bl 0x832b5bb0
	ctx.lr = 0x832B23CC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B23D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b23b4
	if (ctx.cr6.lt) goto loc_832B23B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B23E8:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,37312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37312, ctx.xer);
	// bne cr6,0x832b240c
	if (!ctx.cr6.eq) goto loc_832B240C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21248
	ctx.r3.s64 = ctx.r11.s64 + 21248;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2400;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B240C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b23e8
	if (ctx.cr6.lt) goto loc_832B23E8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-20480
	ctx.r5.s64 = -20480;
	// addi r4,r11,15904
	ctx.r4.s64 = ctx.r11.s64 + 15904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B243C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-20416
	ctx.r5.s64 = -20416;
	// addi r4,r11,16248
	ctx.r4.s64 = ctx.r11.s64 + 16248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2460;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-20352
	ctx.r5.s64 = -20352;
	// addi r4,r11,16592
	ctx.r4.s64 = ctx.r11.s64 + 16592;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2484;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-20224
	ctx.r5.s64 = -20224;
	// addi r4,r11,29248
	ctx.r4.s64 = ctx.r11.s64 + 29248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B24A8;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-20160
	ctx.r5.s64 = -20160;
	// addi r4,r11,29504
	ctx.r4.s64 = ctx.r11.s64 + 29504;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B24CC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,-20096
	ctx.r5.s64 = -20096;
	// addi r4,r11,29760
	ctx.r4.s64 = ctx.r11.s64 + 29760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B24F0;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B24F4:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,45312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45312, ctx.xer);
	// bne cr6,0x832b2518
	if (!ctx.cr6.eq) goto loc_832B2518;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,30008
	ctx.r3.s64 = ctx.r11.s64 + 30008;
	// bl 0x832b5bb0
	ctx.lr = 0x832B250C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2518:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b24f4
	if (ctx.cr6.lt) goto loc_832B24F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2528:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,45376
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45376, ctx.xer);
	// bne cr6,0x832b254c
	if (!ctx.cr6.eq) goto loc_832B254C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,30264
	ctx.r3.s64 = ctx.r11.s64 + 30264;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2540;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B254C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2528
	if (ctx.cr6.lt) goto loc_832B2528;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B255C:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,45440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45440, ctx.xer);
	// bne cr6,0x832b2580
	if (!ctx.cr6.eq) goto loc_832B2580;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2574;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2580:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b255c
	if (ctx.cr6.lt) goto loc_832B255C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2590:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,20096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20096, ctx.xer);
	// bne cr6,0x832b25b4
	if (!ctx.cr6.eq) goto loc_832B25B4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// bl 0x832b5bb0
	ctx.lr = 0x832B25A8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B25B4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2590
	if (ctx.cr6.lt) goto loc_832B2590;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x832b5bb0
	ctx.lr = 0x832B25CC;
	sub_832B5BB0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,15076
	ctx.r10.u64 = ctx.r11.u64 | 15076;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
loc_832B25E0:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,20160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20160, ctx.xer);
	// bne cr6,0x832b2604
	if (!ctx.cr6.eq) goto loc_832B2604;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-3376
	ctx.r3.s64 = ctx.r11.s64 + -3376;
	// bl 0x832b5bb0
	ctx.lr = 0x832B25F8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2604:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b25e0
	if (ctx.cr6.lt) goto loc_832B25E0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,16896
	ctx.r5.s64 = 16896;
	// addi r4,r11,17512
	ctx.r4.s64 = ctx.r11.s64 + 17512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2634;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,16960
	ctx.r5.s64 = 16960;
	// addi r4,r11,17576
	ctx.r4.s64 = ctx.r11.s64 + 17576;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2658;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,17024
	ctx.r5.s64 = 17024;
	// addi r4,r11,17632
	ctx.r4.s64 = ctx.r11.s64 + 17632;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B267C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2680:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,16896
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16896, ctx.xer);
	// bne cr6,0x832b26a4
	if (!ctx.cr6.eq) goto loc_832B26A4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,17688
	ctx.r3.s64 = ctx.r11.s64 + 17688;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2698;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B26A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2680
	if (ctx.cr6.lt) goto loc_832B2680;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B26B4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,16960
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16960, ctx.xer);
	// bne cr6,0x832b26d8
	if (!ctx.cr6.eq) goto loc_832B26D8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,17800
	ctx.r3.s64 = ctx.r11.s64 + 17800;
	// bl 0x832b5bb0
	ctx.lr = 0x832B26CC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B26D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b26b4
	if (ctx.cr6.lt) goto loc_832B26B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B26E8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,17024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17024, ctx.xer);
	// bne cr6,0x832b270c
	if (!ctx.cr6.eq) goto loc_832B270C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2700;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B270C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b26e8
	if (ctx.cr6.lt) goto loc_832B26E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B271C:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,45248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45248, ctx.xer);
	// bne cr6,0x832b2740
	if (!ctx.cr6.eq) goto loc_832B2740;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,16896
	ctx.r3.s64 = ctx.r11.s64 + 16896;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2734;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2740:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b271c
	if (ctx.cr6.lt) goto loc_832B271C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2750:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,45504
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45504, ctx.xer);
	// bne cr6,0x832b2774
	if (!ctx.cr6.eq) goto loc_832B2774;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,17208
	ctx.r3.s64 = ctx.r11.s64 + 17208;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2768;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2774:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2750
	if (ctx.cr6.lt) goto loc_832B2750;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2784:
	// andi. r11,r30,61696
	ctx.r11.u64 = ctx.r30.u64 & 61696;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,28672
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28672, ctx.xer);
	// bne cr6,0x832b27a8
	if (!ctx.cr6.eq) goto loc_832B27A8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-5688
	ctx.r3.s64 = ctx.r11.s64 + -5688;
	// bl 0x832b5bb0
	ctx.lr = 0x832B279C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B27A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2784
	if (ctx.cr6.lt) goto loc_832B2784;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,20480
	ctx.r5.s64 = 20480;
	// addi r4,r11,19136
	ctx.r4.s64 = ctx.r11.s64 + 19136;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B27D8;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,20544
	ctx.r5.s64 = 20544;
	// addi r4,r11,19864
	ctx.r4.s64 = ctx.r11.s64 + 19864;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B27FC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,20608
	ctx.r5.s64 = 20608;
	// addi r4,r11,21392
	ctx.r4.s64 = ctx.r11.s64 + 21392;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2820;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2824:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20480
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20480, ctx.xer);
	// bne cr6,0x832b2848
	if (!ctx.cr6.eq) goto loc_832B2848;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19504
	ctx.r3.s64 = ctx.r11.s64 + 19504;
	// bl 0x832b5bb0
	ctx.lr = 0x832B283C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2848:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2824
	if (ctx.cr6.lt) goto loc_832B2824;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2858:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20544
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20544, ctx.xer);
	// bne cr6,0x832b287c
	if (!ctx.cr6.eq) goto loc_832B287C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,20232
	ctx.r3.s64 = ctx.r11.s64 + 20232;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2870;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B287C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2858
	if (ctx.cr6.lt) goto loc_832B2858;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B288C:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20608
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20608, ctx.xer);
	// bne cr6,0x832b28b0
	if (!ctx.cr6.eq) goto loc_832B28B0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21744
	ctx.r3.s64 = ctx.r11.s64 + 21744;
	// bl 0x832b5bb0
	ctx.lr = 0x832B28A4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B28B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b288c
	if (ctx.cr6.lt) goto loc_832B288C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B28C0:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20552
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20552, ctx.xer);
	// bne cr6,0x832b28e4
	if (!ctx.cr6.eq) goto loc_832B28E4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,20592
	ctx.r3.s64 = ctx.r11.s64 + 20592;
	// bl 0x832b5bb0
	ctx.lr = 0x832B28D8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B28E4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b28c0
	if (ctx.cr6.lt) goto loc_832B28C0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B28F4:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20616
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20616, ctx.xer);
	// bne cr6,0x832b2918
	if (!ctx.cr6.eq) goto loc_832B2918;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// bl 0x832b5bb0
	ctx.lr = 0x832B290C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2918:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b28f4
	if (ctx.cr6.lt) goto loc_832B28F4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,20736
	ctx.r5.s64 = 20736;
	// addi r4,r11,22080
	ctx.r4.s64 = ctx.r11.s64 + 22080;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2948;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,20800
	ctx.r5.s64 = 20800;
	// addi r4,r11,22856
	ctx.r4.s64 = ctx.r11.s64 + 22856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B296C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,20864
	ctx.r5.s64 = 20864;
	// addi r4,r11,23840
	ctx.r4.s64 = ctx.r11.s64 + 23840;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2990;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2994:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20736
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20736, ctx.xer);
	// bne cr6,0x832b29b8
	if (!ctx.cr6.eq) goto loc_832B29B8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,22472
	ctx.r3.s64 = ctx.r11.s64 + 22472;
	// bl 0x832b5bb0
	ctx.lr = 0x832B29AC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B29B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2994
	if (ctx.cr6.lt) goto loc_832B2994;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B29C8:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20800, ctx.xer);
	// bne cr6,0x832b29ec
	if (!ctx.cr6.eq) goto loc_832B29EC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,23248
	ctx.r3.s64 = ctx.r11.s64 + 23248;
	// bl 0x832b5bb0
	ctx.lr = 0x832B29E0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B29EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b29c8
	if (ctx.cr6.lt) goto loc_832B29C8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B29FC:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20864
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20864, ctx.xer);
	// bne cr6,0x832b2a20
	if (!ctx.cr6.eq) goto loc_832B2A20;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,24192
	ctx.r3.s64 = ctx.r11.s64 + 24192;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2A14;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2A20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b29fc
	if (ctx.cr6.lt) goto loc_832B29FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2A30:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20808
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20808, ctx.xer);
	// bne cr6,0x832b2a54
	if (!ctx.cr6.eq) goto loc_832B2A54;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,23632
	ctx.r3.s64 = ctx.r11.s64 + 23632;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2A48;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2A54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2a30
	if (ctx.cr6.lt) goto loc_832B2A30;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2A64:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,20872
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20872, ctx.xer);
	// bne cr6,0x832b2a88
	if (!ctx.cr6.eq) goto loc_832B2A88;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,23736
	ctx.r3.s64 = ctx.r11.s64 + 23736;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2A7C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2A88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2a64
	if (ctx.cr6.lt) goto loc_832B2A64;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,18944
	ctx.r5.s64 = 18944;
	// addi r4,r11,14768
	ctx.r4.s64 = ctx.r11.s64 + 14768;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2AB8;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,19008
	ctx.r5.s64 = 19008;
	// addi r4,r11,14840
	ctx.r4.s64 = ctx.r11.s64 + 14840;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2ADC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,19072
	ctx.r5.s64 = 19072;
	// addi r4,r11,14912
	ctx.r4.s64 = ctx.r11.s64 + 14912;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2B00;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3984
	ctx.r4.s64 = ctx.r11.s64 + 3984;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2B24;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,4216
	ctx.r4.s64 = ctx.r11.s64 + 4216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2B48;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,4448
	ctx.r4.s64 = ctx.r11.s64 + 4448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2B6C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2B70:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832b2b94
	if (!ctx.cr6.eq) goto loc_832B2B94;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,4672
	ctx.r3.s64 = ctx.r11.s64 + 4672;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2B88;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2B94:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2b70
	if (ctx.cr6.lt) goto loc_832B2B70;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2BA4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x832b2bc8
	if (!ctx.cr6.eq) goto loc_832B2BC8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2BBC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2BC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2ba4
	if (ctx.cr6.lt) goto loc_832B2BA4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2BD8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x832b2bfc
	if (!ctx.cr6.eq) goto loc_832B2BFC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,5184
	ctx.r3.s64 = ctx.r11.s64 + 5184;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2BF0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2BFC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2bd8
	if (ctx.cr6.lt) goto loc_832B2BD8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r11,2528
	ctx.r4.s64 = ctx.r11.s64 + 2528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2C2C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,576
	ctx.r5.s64 = 576;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2C50;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r4,r11,2992
	ctx.r4.s64 = ctx.r11.s64 + 2992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2C74;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2C78:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x832b2c9c
	if (!ctx.cr6.eq) goto loc_832B2C9C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3216
	ctx.r3.s64 = ctx.r11.s64 + 3216;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2C90;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2C9C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2c78
	if (ctx.cr6.lt) goto loc_832B2C78;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2CAC:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 576, ctx.xer);
	// bne cr6,0x832b2cd0
	if (!ctx.cr6.eq) goto loc_832B2CD0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3472
	ctx.r3.s64 = ctx.r11.s64 + 3472;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2CC4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2CD0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2cac
	if (ctx.cr6.lt) goto loc_832B2CAC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2CE0:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,640
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 640, ctx.xer);
	// bne cr6,0x832b2d04
	if (!ctx.cr6.eq) goto loc_832B2D04;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3728
	ctx.r3.s64 = ctx.r11.s64 + 3728;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2CF8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2D04:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2ce0
	if (ctx.cr6.lt) goto loc_832B2CE0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r11,-1848
	ctx.r4.s64 = ctx.r11.s64 + -1848;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2D34;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1088
	ctx.r5.s64 = 1088;
	// addi r4,r11,-1472
	ctx.r4.s64 = ctx.r11.s64 + -1472;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2D58;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// addi r4,r11,-1096
	ctx.r4.s64 = ctx.r11.s64 + -1096;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2D7C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2D80:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bne cr6,0x832b2da4
	if (!ctx.cr6.eq) goto loc_832B2DA4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-760
	ctx.r3.s64 = ctx.r11.s64 + -760;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2D98;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2DA4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2d80
	if (ctx.cr6.lt) goto loc_832B2D80;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2DB4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,1088
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1088, ctx.xer);
	// bne cr6,0x832b2dd8
	if (!ctx.cr6.eq) goto loc_832B2DD8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-368
	ctx.r3.s64 = ctx.r11.s64 + -368;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2DCC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2DD8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2db4
	if (ctx.cr6.lt) goto loc_832B2DB4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2DE8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,1152
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1152, ctx.xer);
	// bne cr6,0x832b2e0c
	if (!ctx.cr6.eq) goto loc_832B2E0C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2E00;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2E0C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2de8
	if (ctx.cr6.lt) goto loc_832B2DE8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// addi r4,r11,384
	ctx.r4.s64 = ctx.r11.s64 + 384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2E3C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1600
	ctx.r5.s64 = 1600;
	// addi r4,r11,736
	ctx.r4.s64 = ctx.r11.s64 + 736;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2E60;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1664
	ctx.r5.s64 = 1664;
	// addi r4,r11,1088
	ctx.r4.s64 = ctx.r11.s64 + 1088;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2E84;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2E88:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,1536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1536, ctx.xer);
	// bne cr6,0x832b2eac
	if (!ctx.cr6.eq) goto loc_832B2EAC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,1424
	ctx.r3.s64 = ctx.r11.s64 + 1424;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2EA0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2EAC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2e88
	if (ctx.cr6.lt) goto loc_832B2E88;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2EBC:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,1600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1600, ctx.xer);
	// bne cr6,0x832b2ee0
	if (!ctx.cr6.eq) goto loc_832B2EE0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2ED4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2EE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2ebc
	if (ctx.cr6.lt) goto loc_832B2EBC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2EF0:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,1664
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1664, ctx.xer);
	// bne cr6,0x832b2f14
	if (!ctx.cr6.eq) goto loc_832B2F14;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,2160
	ctx.r3.s64 = ctx.r11.s64 + 2160;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2F08;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2F14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2ef0
	if (ctx.cr6.lt) goto loc_832B2EF0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2560
	ctx.r5.s64 = 2560;
	// addi r4,r11,25560
	ctx.r4.s64 = ctx.r11.s64 + 25560;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2F44;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// addi r4,r11,25792
	ctx.r4.s64 = ctx.r11.s64 + 25792;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2F68;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2688
	ctx.r5.s64 = 2688;
	// addi r4,r11,26024
	ctx.r4.s64 = ctx.r11.s64 + 26024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B2F8C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2F90:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,2560
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2560, ctx.xer);
	// bne cr6,0x832b2fb4
	if (!ctx.cr6.eq) goto loc_832B2FB4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,26248
	ctx.r3.s64 = ctx.r11.s64 + 26248;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2FA8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2FB4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2f90
	if (ctx.cr6.lt) goto loc_832B2F90;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2FC4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,2624
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2624, ctx.xer);
	// bne cr6,0x832b2fe8
	if (!ctx.cr6.eq) goto loc_832B2FE8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// bl 0x832b5bb0
	ctx.lr = 0x832B2FDC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B2FE8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2fc4
	if (ctx.cr6.lt) goto loc_832B2FC4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B2FF8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,2688
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2688, ctx.xer);
	// bne cr6,0x832b301c
	if (!ctx.cr6.eq) goto loc_832B301C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,26760
	ctx.r3.s64 = ctx.r11.s64 + 26760;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3010;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B301C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b2ff8
	if (ctx.cr6.lt) goto loc_832B2FF8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,3072
	ctx.r5.s64 = 3072;
	// addi r4,r11,14984
	ctx.r4.s64 = ctx.r11.s64 + 14984;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B304C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,3136
	ctx.r5.s64 = 3136;
	// addi r4,r11,15304
	ctx.r4.s64 = ctx.r11.s64 + 15304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B3070;
	sub_832B1AB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,3200
	ctx.r5.s64 = 3200;
	// addi r4,r11,15624
	ctx.r4.s64 = ctx.r11.s64 + 15624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B3094;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3880
	ctx.r3.s64 = ctx.r11.s64 + 3880;
	// bl 0x832b5bb0
	ctx.lr = 0x832B30A0;
	sub_832B5BB0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,3992
	ctx.r3.s64 = ctx.r10.s64 + 3992;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stw r11,240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 240, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B30B8;
	sub_832B5BB0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,4440
	ctx.r3.s64 = ctx.r10.s64 + 4440;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stw r11,496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 496, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B30D0;
	sub_832B5BB0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,4560
	ctx.r3.s64 = ctx.r10.s64 + 4560;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stw r11,2288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2288, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B30E8;
	sub_832B5BB0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,4160
	ctx.r3.s64 = ctx.r10.s64 + 4160;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stw r11,2544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2544, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3100;
	sub_832B5BB0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,4272
	ctx.r3.s64 = ctx.r10.s64 + 4272;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stw r11,10480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10480, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3118;
	sub_832B5BB0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r10,-32344
	ctx.r4.s64 = ctx.r10.s64 + -32344;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,10736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10736, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B3148;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B314C:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x832b3170
	if (!ctx.cr6.eq) goto loc_832B3170;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-32176
	ctx.r3.s64 = ctx.r11.s64 + -32176;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3164;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3170:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b314c
	if (ctx.cr6.lt) goto loc_832B314C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r11,-31384
	ctx.r4.s64 = ctx.r11.s64 + -31384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B31A0;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B31A4:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// bne cr6,0x832b31c8
	if (!ctx.cr6.eq) goto loc_832B31C8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-31592
	ctx.r3.s64 = ctx.r11.s64 + -31592;
	// bl 0x832b5bb0
	ctx.lr = 0x832B31BC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B31C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b31a4
	if (ctx.cr6.lt) goto loc_832B31A4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,384
	ctx.r5.s64 = 384;
	// addi r4,r11,-32728
	ctx.r4.s64 = ctx.r11.s64 + -32728;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B31F8;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B31FC:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 384, ctx.xer);
	// bne cr6,0x832b3220
	if (!ctx.cr6.eq) goto loc_832B3220;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-31808
	ctx.r3.s64 = ctx.r11.s64 + -31808;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3214;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3220:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b31fc
	if (ctx.cr6.lt) goto loc_832B31FC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,448
	ctx.r5.s64 = 448;
	// addi r4,r11,-32536
	ctx.r4.s64 = ctx.r11.s64 + -32536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B3250;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3254:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 448, ctx.xer);
	// bne cr6,0x832b3278
	if (!ctx.cr6.eq) goto loc_832B3278;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-32016
	ctx.r3.s64 = ctx.r11.s64 + -32016;
	// bl 0x832b5bb0
	ctx.lr = 0x832B326C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3278:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3254
	if (ctx.cr6.lt) goto loc_832B3254;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r11,24856
	ctx.r4.s64 = ctx.r11.s64 + 24856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B32A8;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B32AC:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bne cr6,0x832b32d0
	if (!ctx.cr6.eq) goto loc_832B32D0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,24992
	ctx.r3.s64 = ctx.r11.s64 + 24992;
	// bl 0x832b5bb0
	ctx.lr = 0x832B32C4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B32D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b32ac
	if (ctx.cr6.lt) goto loc_832B32AC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2112
	ctx.r5.s64 = 2112;
	// addi r4,r11,32440
	ctx.r4.s64 = ctx.r11.s64 + 32440;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B3300;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3304:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,2112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2112, ctx.xer);
	// bne cr6,0x832b3328
	if (!ctx.cr6.eq) goto loc_832B3328;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,32600
	ctx.r3.s64 = ctx.r11.s64 + 32600;
	// bl 0x832b5bb0
	ctx.lr = 0x832B331C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3328:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3304
	if (ctx.cr6.lt) goto loc_832B3304;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2176
	ctx.r5.s64 = 2176;
	// addi r4,r11,24688
	ctx.r4.s64 = ctx.r11.s64 + 24688;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B3358;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B335C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,2176
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2176, ctx.xer);
	// bne cr6,0x832b3380
	if (!ctx.cr6.eq) goto loc_832B3380;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,25352
	ctx.r3.s64 = ctx.r11.s64 + 25352;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3374;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3380:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b335c
	if (ctx.cr6.lt) goto loc_832B335C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2240
	ctx.r5.s64 = 2240;
	// addi r4,r11,24528
	ctx.r4.s64 = ctx.r11.s64 + 24528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B33B0;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B33B4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,2240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2240, ctx.xer);
	// bne cr6,0x832b33d8
	if (!ctx.cr6.eq) goto loc_832B33D8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// bl 0x832b5bb0
	ctx.lr = 0x832B33CC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B33D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b33b4
	if (ctx.cr6.lt) goto loc_832B33B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B33E8:
	// andi. r11,r30,61752
	ctx.r11.u64 = ctx.r30.u64 & 61752;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,264
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 264, ctx.xer);
	// bne cr6,0x832b340c
	if (!ctx.cr6.eq) goto loc_832B340C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9920
	ctx.r3.s64 = ctx.r11.s64 + -9920;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3400;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B340C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b33e8
	if (ctx.cr6.lt) goto loc_832B33E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B341C:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,3584
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3584, ctx.xer);
	// bne cr6,0x832b3440
	if (!ctx.cr6.eq) goto loc_832B3440;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3434;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3440:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b341c
	if (ctx.cr6.lt) goto loc_832B341C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// ori r29,r10,61440
	ctx.r29.u64 = ctx.r10.u64 | 61440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,448
	ctx.r8.s64 = 448;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r11,-5584
	ctx.r4.s64 = ctx.r11.s64 + -5584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B3478;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B347C:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x832b34a0
	if (!ctx.cr6.eq) goto loc_832B34A0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-5456
	ctx.r3.s64 = ctx.r11.s64 + -5456;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3494;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B34A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b347c
	if (ctx.cr6.lt) goto loc_832B347C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,384
	ctx.r8.s64 = 384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,12288
	ctx.r5.s64 = 12288;
	// addi r4,r11,-5344
	ctx.r4.s64 = ctx.r11.s64 + -5344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B34D0;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B34D4:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,12288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12288, ctx.xer);
	// bne cr6,0x832b34f8
	if (!ctx.cr6.eq) goto loc_832B34F8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-5216
	ctx.r3.s64 = ctx.r11.s64 + -5216;
	// bl 0x832b5bb0
	ctx.lr = 0x832B34EC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B34F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b34d4
	if (ctx.cr6.lt) goto loc_832B34D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3508:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,12352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12352, ctx.xer);
	// bne cr6,0x832b352c
	if (!ctx.cr6.eq) goto loc_832B352C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4872
	ctx.r3.s64 = ctx.r11.s64 + -4872;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3520;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B352C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3508
	if (ctx.cr6.lt) goto loc_832B3508;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,384
	ctx.r8.s64 = 384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r11,-5104
	ctx.r4.s64 = ctx.r11.s64 + -5104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B355C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3560:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// bne cr6,0x832b3584
	if (!ctx.cr6.eq) goto loc_832B3584;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4976
	ctx.r3.s64 = ctx.r11.s64 + -4976;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3578;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3584:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3560
	if (ctx.cr6.lt) goto loc_832B3560;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3594:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,8256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8256, ctx.xer);
	// bne cr6,0x832b35b8
	if (!ctx.cr6.eq) goto loc_832B35B8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4768
	ctx.r3.s64 = ctx.r11.s64 + -4768;
	// bl 0x832b5bb0
	ctx.lr = 0x832B35AC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B35B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3594
	if (ctx.cr6.lt) goto loc_832B3594;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B35C8:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,18112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18112, ctx.xer);
	// bne cr6,0x832b35ec
	if (!ctx.cr6.eq) goto loc_832B35EC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// bl 0x832b5bb0
	ctx.lr = 0x832B35E0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B35EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b35c8
	if (ctx.cr6.lt) goto loc_832B35C8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,16576
	ctx.r5.s64 = 16576;
	// addi r4,r11,-9344
	ctx.r4.s64 = ctx.r11.s64 + -9344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B361C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3620:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,16576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16576, ctx.xer);
	// bne cr6,0x832b3644
	if (!ctx.cr6.eq) goto loc_832B3644;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9264
	ctx.r3.s64 = ctx.r11.s64 + -9264;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3638;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3644:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3620
	if (ctx.cr6.lt) goto loc_832B3620;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3654:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,16832
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16832, ctx.xer);
	// bne cr6,0x832b3678
	if (!ctx.cr6.eq) goto loc_832B3678;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4672
	ctx.r3.s64 = ctx.r11.s64 + -4672;
	// bl 0x832b5bb0
	ctx.lr = 0x832B366C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3678:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3654
	if (ctx.cr6.lt) goto loc_832B3654;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3688:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,24576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24576, ctx.xer);
	// bne cr6,0x832b36ac
	if (!ctx.cr6.eq) goto loc_832B36AC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4584
	ctx.r3.s64 = ctx.r11.s64 + -4584;
	// bl 0x832b5bb0
	ctx.lr = 0x832B36A0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B36AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3688
	if (ctx.cr6.lt) goto loc_832B3688;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B36BC:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,24832
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24832, ctx.xer);
	// bne cr6,0x832b36e0
	if (!ctx.cr6.eq) goto loc_832B36E0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,344
	ctx.r3.s64 = ctx.r11.s64 + 344;
	// bl 0x832b5bb0
	ctx.lr = 0x832B36D4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B36E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b36bc
	if (ctx.cr6.lt) goto loc_832B36BC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B36F0:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,25088
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25088, ctx.xer);
	// bne cr6,0x832b3714
	if (!ctx.cr6.eq) goto loc_832B3714;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4104
	ctx.r3.s64 = ctx.r11.s64 + -4104;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3708;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3714:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b36f0
	if (ctx.cr6.lt) goto loc_832B36F0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3724:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,25344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25344, ctx.xer);
	// bne cr6,0x832b3748
	if (!ctx.cr6.eq) goto loc_832B3748;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-3976
	ctx.r3.s64 = ctx.r11.s64 + -3976;
	// bl 0x832b5bb0
	ctx.lr = 0x832B373C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3748:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3724
	if (ctx.cr6.lt) goto loc_832B3724;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3758:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,25600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25600, ctx.xer);
	// bne cr6,0x832b377c
	if (!ctx.cr6.eq) goto loc_832B377C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4184
	ctx.r3.s64 = ctx.r11.s64 + -4184;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3770;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B377C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3758
	if (ctx.cr6.lt) goto loc_832B3758;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B378C:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,25856
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25856, ctx.xer);
	// bne cr6,0x832b37b0
	if (!ctx.cr6.eq) goto loc_832B37B0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4256
	ctx.r3.s64 = ctx.r11.s64 + -4256;
	// bl 0x832b5bb0
	ctx.lr = 0x832B37A4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B37B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b378c
	if (ctx.cr6.lt) goto loc_832B378C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B37C0:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,26112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26112, ctx.xer);
	// bne cr6,0x832b37e4
	if (!ctx.cr6.eq) goto loc_832B37E4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4528
	ctx.r3.s64 = ctx.r11.s64 + -4528;
	// bl 0x832b5bb0
	ctx.lr = 0x832B37D8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B37E4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b37c0
	if (ctx.cr6.lt) goto loc_832B37C0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B37F4:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,26368
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26368, ctx.xer);
	// bne cr6,0x832b3818
	if (!ctx.cr6.eq) goto loc_832B3818;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4456
	ctx.r3.s64 = ctx.r11.s64 + -4456;
	// bl 0x832b5bb0
	ctx.lr = 0x832B380C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3818:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b37f4
	if (ctx.cr6.lt) goto loc_832B37F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3828:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,26624
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26624, ctx.xer);
	// bne cr6,0x832b384c
	if (!ctx.cr6.eq) goto loc_832B384C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3840;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B384C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3828
	if (ctx.cr6.lt) goto loc_832B3828;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B385C:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,26880
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26880, ctx.xer);
	// bne cr6,0x832b3880
	if (!ctx.cr6.eq) goto loc_832B3880;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3874;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3880:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b385c
	if (ctx.cr6.lt) goto loc_832B385C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3890:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,27136
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27136, ctx.xer);
	// bne cr6,0x832b38b4
	if (!ctx.cr6.eq) goto loc_832B38B4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4392
	ctx.r3.s64 = ctx.r11.s64 + -4392;
	// bl 0x832b5bb0
	ctx.lr = 0x832B38A8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B38B4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3890
	if (ctx.cr6.lt) goto loc_832B3890;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B38C4:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,27392
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27392, ctx.xer);
	// bne cr6,0x832b38e8
	if (!ctx.cr6.eq) goto loc_832B38E8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-4320
	ctx.r3.s64 = ctx.r11.s64 + -4320;
	// bl 0x832b5bb0
	ctx.lr = 0x832B38DC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B38E8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b38c4
	if (ctx.cr6.lt) goto loc_832B38C4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B38F8:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,27648
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27648, ctx.xer);
	// bne cr6,0x832b391c
	if (!ctx.cr6.eq) goto loc_832B391C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-3848
	ctx.r3.s64 = ctx.r11.s64 + -3848;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3910;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B391C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b38f8
	if (ctx.cr6.lt) goto loc_832B38F8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B392C:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,27904
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27904, ctx.xer);
	// bne cr6,0x832b3950
	if (!ctx.cr6.eq) goto loc_832B3950;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-3752
	ctx.r3.s64 = ctx.r11.s64 + -3752;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3944;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3950:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b392c
	if (ctx.cr6.lt) goto loc_832B392C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3960:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,28160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28160, ctx.xer);
	// bne cr6,0x832b3984
	if (!ctx.cr6.eq) goto loc_832B3984;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-3664
	ctx.r3.s64 = ctx.r11.s64 + -3664;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3978;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3984:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3960
	if (ctx.cr6.lt) goto loc_832B3960;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3994:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r11,28416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28416, ctx.xer);
	// bne cr6,0x832b39b8
	if (!ctx.cr6.eq) goto loc_832B39B8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-3520
	ctx.r3.s64 = ctx.r11.s64 + -3520;
	// bl 0x832b5bb0
	ctx.lr = 0x832B39AC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B39B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3994
	if (ctx.cr6.lt) goto loc_832B3994;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19088
	ctx.r3.s64 = ctx.r11.s64 + 19088;
	// bl 0x832b5bb0
	ctx.lr = 0x832B39D0;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,512
	ctx.r3.s64 = ctx.r10.s64 + 512;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B39F0;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,33792
	ctx.r9.u64 = ctx.r10.u64 | 33792;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18408
	ctx.r3.s64 = ctx.r10.s64 + 18408;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3A10;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,34816
	ctx.r9.u64 = ctx.r10.u64 | 34816;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18528
	ctx.r3.s64 = ctx.r10.s64 + 18528;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3A30;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,35840
	ctx.r9.u64 = ctx.r10.u64 | 35840;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18336
	ctx.r3.s64 = ctx.r10.s64 + 18336;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3A50;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,36864
	ctx.r9.u64 = ctx.r10.u64 | 36864;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18272
	ctx.r3.s64 = ctx.r10.s64 + 18272;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3A70;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,37888
	ctx.r9.u64 = ctx.r10.u64 | 37888;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18016
	ctx.r3.s64 = ctx.r10.s64 + 18016;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3A90;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,38912
	ctx.r9.u64 = ctx.r10.u64 | 38912;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18088
	ctx.r3.s64 = ctx.r10.s64 + 18088;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3AB0;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,39936
	ctx.r9.u64 = ctx.r10.u64 | 39936;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,30904
	ctx.r3.s64 = ctx.r10.s64 + 30904;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3AD0;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,40960
	ctx.r9.u64 = ctx.r10.u64 | 40960;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,30968
	ctx.r3.s64 = ctx.r10.s64 + 30968;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3AF0;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,41984
	ctx.r9.u64 = ctx.r10.u64 | 41984;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18152
	ctx.r3.s64 = ctx.r10.s64 + 18152;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3B10;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,43008
	ctx.r9.u64 = ctx.r10.u64 | 43008;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18216
	ctx.r3.s64 = ctx.r10.s64 + 18216;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3B30;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,44032
	ctx.r9.u64 = ctx.r10.u64 | 44032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18648
	ctx.r3.s64 = ctx.r10.s64 + 18648;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3B50;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,45056
	ctx.r9.u64 = ctx.r10.u64 | 45056;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18736
	ctx.r3.s64 = ctx.r10.s64 + 18736;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3B70;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,46080
	ctx.r9.u64 = ctx.r10.u64 | 46080;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18816
	ctx.r3.s64 = ctx.r10.s64 + 18816;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3B90;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,47104
	ctx.r9.u64 = ctx.r10.u64 | 47104;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18952
	ctx.r3.s64 = ctx.r10.s64 + 18952;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B3BB0;
	sub_832B5BB0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,48128
	ctx.r10.u64 = ctx.r11.u64 | 48128;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
loc_832B3BC4:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,20672
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20672, ctx.xer);
	// bne cr6,0x832b3be8
	if (!ctx.cr6.eq) goto loc_832B3BE8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-21344
	ctx.r3.s64 = ctx.r11.s64 + -21344;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3BDC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3BE8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3bc4
	if (ctx.cr6.lt) goto loc_832B3BC4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3BF8:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,20928
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20928, ctx.xer);
	// bne cr6,0x832b3c1c
	if (!ctx.cr6.eq) goto loc_832B3C1C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-21400
	ctx.r3.s64 = ctx.r11.s64 + -21400;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3C10;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3C1C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3bf8
	if (ctx.cr6.lt) goto loc_832B3BF8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3C2C:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,21184
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21184, ctx.xer);
	// bne cr6,0x832b3c50
	if (!ctx.cr6.eq) goto loc_832B3C50;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20728
	ctx.r3.s64 = ctx.r11.s64 + -20728;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3C44;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3C50:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3c2c
	if (ctx.cr6.lt) goto loc_832B3C2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3C60:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,21440
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21440, ctx.xer);
	// bne cr6,0x832b3c84
	if (!ctx.cr6.eq) goto loc_832B3C84;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20600
	ctx.r3.s64 = ctx.r11.s64 + -20600;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3C78;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3C84:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3c60
	if (ctx.cr6.lt) goto loc_832B3C60;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3C94:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,21696
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21696, ctx.xer);
	// bne cr6,0x832b3cb8
	if (!ctx.cr6.eq) goto loc_832B3CB8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20808
	ctx.r3.s64 = ctx.r11.s64 + -20808;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3CAC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3CB8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3c94
	if (ctx.cr6.lt) goto loc_832B3C94;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3CC8:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,21952
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21952, ctx.xer);
	// bne cr6,0x832b3cec
	if (!ctx.cr6.eq) goto loc_832B3CEC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20880
	ctx.r3.s64 = ctx.r11.s64 + -20880;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3CE0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3CEC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3cc8
	if (ctx.cr6.lt) goto loc_832B3CC8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3CFC:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,22208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22208, ctx.xer);
	// bne cr6,0x832b3d20
	if (!ctx.cr6.eq) goto loc_832B3D20;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-21288
	ctx.r3.s64 = ctx.r11.s64 + -21288;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3D14;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3D20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3cfc
	if (ctx.cr6.lt) goto loc_832B3CFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3D30:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,22464
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22464, ctx.xer);
	// bne cr6,0x832b3d54
	if (!ctx.cr6.eq) goto loc_832B3D54;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-21216
	ctx.r3.s64 = ctx.r11.s64 + -21216;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3D48;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3D54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3d30
	if (ctx.cr6.lt) goto loc_832B3D30;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3D64:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,22720
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22720, ctx.xer);
	// bne cr6,0x832b3d88
	if (!ctx.cr6.eq) goto loc_832B3D88;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-21152
	ctx.r3.s64 = ctx.r11.s64 + -21152;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3D7C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3D88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3d64
	if (ctx.cr6.lt) goto loc_832B3D64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3D98:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,22976
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22976, ctx.xer);
	// bne cr6,0x832b3dbc
	if (!ctx.cr6.eq) goto loc_832B3DBC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-21080
	ctx.r3.s64 = ctx.r11.s64 + -21080;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3DB0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3DBC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3d98
	if (ctx.cr6.lt) goto loc_832B3D98;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3DCC:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,23232
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23232, ctx.xer);
	// bne cr6,0x832b3df0
	if (!ctx.cr6.eq) goto loc_832B3DF0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-21016
	ctx.r3.s64 = ctx.r11.s64 + -21016;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3DE4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3DF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3dcc
	if (ctx.cr6.lt) goto loc_832B3DCC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3E00:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,23488
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23488, ctx.xer);
	// bne cr6,0x832b3e24
	if (!ctx.cr6.eq) goto loc_832B3E24;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20944
	ctx.r3.s64 = ctx.r11.s64 + -20944;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3E18;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3E24:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3e00
	if (ctx.cr6.lt) goto loc_832B3E00;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3E34:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,23744
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23744, ctx.xer);
	// bne cr6,0x832b3e58
	if (!ctx.cr6.eq) goto loc_832B3E58;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20472
	ctx.r3.s64 = ctx.r11.s64 + -20472;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3E4C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3E58:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3e34
	if (ctx.cr6.lt) goto loc_832B3E34;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3E68:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,24000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24000, ctx.xer);
	// bne cr6,0x832b3e8c
	if (!ctx.cr6.eq) goto loc_832B3E8C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20376
	ctx.r3.s64 = ctx.r11.s64 + -20376;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3E80;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3E8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3e68
	if (ctx.cr6.lt) goto loc_832B3E68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3E9C:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,24256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24256, ctx.xer);
	// bne cr6,0x832b3ec0
	if (!ctx.cr6.eq) goto loc_832B3EC0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20288
	ctx.r3.s64 = ctx.r11.s64 + -20288;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3EB4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3EC0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3e9c
	if (ctx.cr6.lt) goto loc_832B3E9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3ED0:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,24512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24512, ctx.xer);
	// bne cr6,0x832b3ef4
	if (!ctx.cr6.eq) goto loc_832B3EF4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-20144
	ctx.r3.s64 = ctx.r11.s64 + -20144;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3EE8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3EF4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3ed0
	if (ctx.cr6.lt) goto loc_832B3ED0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3F04:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,20680
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20680, ctx.xer);
	// bne cr6,0x832b3f28
	if (!ctx.cr6.eq) goto loc_832B3F28;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3824
	ctx.r3.s64 = ctx.r11.s64 + 3824;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3F1C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3F28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3f04
	if (ctx.cr6.lt) goto loc_832B3F04;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3F38:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,20936
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20936, ctx.xer);
	// bne cr6,0x832b3f5c
	if (!ctx.cr6.eq) goto loc_832B3F5C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-3264
	ctx.r3.s64 = ctx.r11.s64 + -3264;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3F50;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3F5C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3f38
	if (ctx.cr6.lt) goto loc_832B3F38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3F6C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,21192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21192, ctx.xer);
	// bne cr6,0x832b3f90
	if (!ctx.cr6.eq) goto loc_832B3F90;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3096
	ctx.r3.s64 = ctx.r11.s64 + 3096;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3F84;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3F90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3f6c
	if (ctx.cr6.lt) goto loc_832B3F6C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3FA0:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,21448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21448, ctx.xer);
	// bne cr6,0x832b3fc4
	if (!ctx.cr6.eq) goto loc_832B3FC4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3FB8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3FC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3fa0
	if (ctx.cr6.lt) goto loc_832B3FA0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B3FD4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,21704
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21704, ctx.xer);
	// bne cr6,0x832b3ff8
	if (!ctx.cr6.eq) goto loc_832B3FF8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3016
	ctx.r3.s64 = ctx.r11.s64 + 3016;
	// bl 0x832b5bb0
	ctx.lr = 0x832B3FEC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B3FF8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b3fd4
	if (ctx.cr6.lt) goto loc_832B3FD4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4008:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,21960
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21960, ctx.xer);
	// bne cr6,0x832b402c
	if (!ctx.cr6.eq) goto loc_832B402C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2944
	ctx.r3.s64 = ctx.r11.s64 + 2944;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4020;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B402C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4008
	if (ctx.cr6.lt) goto loc_832B4008;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B403C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,22216
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22216, ctx.xer);
	// bne cr6,0x832b4060
	if (!ctx.cr6.eq) goto loc_832B4060;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2536
	ctx.r3.s64 = ctx.r11.s64 + 2536;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4054;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4060:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b403c
	if (ctx.cr6.lt) goto loc_832B403C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4070:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,22472
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22472, ctx.xer);
	// bne cr6,0x832b4094
	if (!ctx.cr6.eq) goto loc_832B4094;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2608
	ctx.r3.s64 = ctx.r11.s64 + 2608;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4088;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4094:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4070
	if (ctx.cr6.lt) goto loc_832B4070;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B40A4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,22728
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22728, ctx.xer);
	// bne cr6,0x832b40c8
	if (!ctx.cr6.eq) goto loc_832B40C8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// bl 0x832b5bb0
	ctx.lr = 0x832B40BC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B40C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b40a4
	if (ctx.cr6.lt) goto loc_832B40A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B40D8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,22984
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22984, ctx.xer);
	// bne cr6,0x832b40fc
	if (!ctx.cr6.eq) goto loc_832B40FC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2744
	ctx.r3.s64 = ctx.r11.s64 + 2744;
	// bl 0x832b5bb0
	ctx.lr = 0x832B40F0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B40FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b40d8
	if (ctx.cr6.lt) goto loc_832B40D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B410C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,23240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23240, ctx.xer);
	// bne cr6,0x832b4130
	if (!ctx.cr6.eq) goto loc_832B4130;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4124;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4130:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b410c
	if (ctx.cr6.lt) goto loc_832B410C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4140:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,23496
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23496, ctx.xer);
	// bne cr6,0x832b4164
	if (!ctx.cr6.eq) goto loc_832B4164;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2880
	ctx.r3.s64 = ctx.r11.s64 + 2880;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4158;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4164:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4140
	if (ctx.cr6.lt) goto loc_832B4140;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4174:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,23752
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23752, ctx.xer);
	// bne cr6,0x832b4198
	if (!ctx.cr6.eq) goto loc_832B4198;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3352
	ctx.r3.s64 = ctx.r11.s64 + 3352;
	// bl 0x832b5bb0
	ctx.lr = 0x832B418C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4198:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4174
	if (ctx.cr6.lt) goto loc_832B4174;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B41A8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,24008
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24008, ctx.xer);
	// bne cr6,0x832b41cc
	if (!ctx.cr6.eq) goto loc_832B41CC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3448
	ctx.r3.s64 = ctx.r11.s64 + 3448;
	// bl 0x832b5bb0
	ctx.lr = 0x832B41C0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B41CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b41a8
	if (ctx.cr6.lt) goto loc_832B41A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B41DC:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,24264
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24264, ctx.xer);
	// bne cr6,0x832b4200
	if (!ctx.cr6.eq) goto loc_832B4200;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3536
	ctx.r3.s64 = ctx.r11.s64 + 3536;
	// bl 0x832b5bb0
	ctx.lr = 0x832B41F4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4200:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b41dc
	if (ctx.cr6.lt) goto loc_832B41DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4210:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,24520
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24520, ctx.xer);
	// bne cr6,0x832b4234
	if (!ctx.cr6.eq) goto loc_832B4234;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,3680
	ctx.r3.s64 = ctx.r11.s64 + 3680;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4228;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4234:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4210
	if (ctx.cr6.lt) goto loc_832B4210;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8160
	ctx.r5.s64 = -8160;
	// addi r4,r11,-19784
	ctx.r4.s64 = ctx.r11.s64 + -19784;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4264;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8096
	ctx.r5.s64 = -8096;
	// addi r4,r11,-19328
	ctx.r4.s64 = ctx.r11.s64 + -19328;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4288;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8032
	ctx.r5.s64 = -8032;
	// addi r4,r11,-18872
	ctx.r4.s64 = ctx.r11.s64 + -18872;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B42AC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8192
	ctx.r5.s64 = -8192;
	// addi r4,r11,-18464
	ctx.r4.s64 = ctx.r11.s64 + -18464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B42D0;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8128
	ctx.r5.s64 = -8128;
	// addi r4,r11,-18032
	ctx.r4.s64 = ctx.r11.s64 + -18032;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B42F4;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8064
	ctx.r5.s64 = -8064;
	// addi r4,r11,-17600
	ctx.r4.s64 = ctx.r11.s64 + -17600;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4318;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B431C:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmplwi cr6,r11,57536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57536, ctx.xer);
	// bne cr6,0x832b4340
	if (!ctx.cr6.eq) goto loc_832B4340;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,13608
	ctx.r3.s64 = ctx.r11.s64 + 13608;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4334;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4340:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b431c
	if (ctx.cr6.lt) goto loc_832B431C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7904
	ctx.r5.s64 = -7904;
	// addi r4,r11,-14832
	ctx.r4.s64 = ctx.r11.s64 + -14832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4370;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7840
	ctx.r5.s64 = -7840;
	// addi r4,r11,-14416
	ctx.r4.s64 = ctx.r11.s64 + -14416;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4394;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7776
	ctx.r5.s64 = -7776;
	// addi r4,r11,-14000
	ctx.r4.s64 = ctx.r11.s64 + -14000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B43B8;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7936
	ctx.r5.s64 = -7936;
	// addi r4,r11,-13608
	ctx.r4.s64 = ctx.r11.s64 + -13608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B43DC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7872
	ctx.r5.s64 = -7872;
	// addi r4,r11,-13216
	ctx.r4.s64 = ctx.r11.s64 + -13216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4400;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7808
	ctx.r5.s64 = -7808;
	// addi r4,r11,-12824
	ctx.r4.s64 = ctx.r11.s64 + -12824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4424;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4428:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmplwi cr6,r11,57792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57792, ctx.xer);
	// bne cr6,0x832b444c
	if (!ctx.cr6.eq) goto loc_832B444C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4440;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B444C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4428
	if (ctx.cr6.lt) goto loc_832B4428;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8152
	ctx.r5.s64 = -8152;
	// addi r4,r11,-17208
	ctx.r4.s64 = ctx.r11.s64 + -17208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B447C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8088
	ctx.r5.s64 = -8088;
	// addi r4,r11,-16792
	ctx.r4.s64 = ctx.r11.s64 + -16792;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B44A0;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8024
	ctx.r5.s64 = -8024;
	// addi r4,r11,-16376
	ctx.r4.s64 = ctx.r11.s64 + -16376;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B44C4;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8184
	ctx.r5.s64 = -8184;
	// addi r4,r11,-15984
	ctx.r4.s64 = ctx.r11.s64 + -15984;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B44E8;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8120
	ctx.r5.s64 = -8120;
	// addi r4,r11,-15592
	ctx.r4.s64 = ctx.r11.s64 + -15592;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B450C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8056
	ctx.r5.s64 = -8056;
	// addi r4,r11,-15200
	ctx.r4.s64 = ctx.r11.s64 + -15200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4530;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4534:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmplwi cr6,r11,58048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58048, ctx.xer);
	// bne cr6,0x832b4558
	if (!ctx.cr6.eq) goto loc_832B4558;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,13928
	ctx.r3.s64 = ctx.r11.s64 + 13928;
	// bl 0x832b5bb0
	ctx.lr = 0x832B454C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4558:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4534
	if (ctx.cr6.lt) goto loc_832B4534;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7896
	ctx.r5.s64 = -7896;
	// addi r4,r11,-12456
	ctx.r4.s64 = ctx.r11.s64 + -12456;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4588;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7832
	ctx.r5.s64 = -7832;
	// addi r4,r11,-12040
	ctx.r4.s64 = ctx.r11.s64 + -12040;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B45AC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7768
	ctx.r5.s64 = -7768;
	// addi r4,r11,-11624
	ctx.r4.s64 = ctx.r11.s64 + -11624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B45D0;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7928
	ctx.r5.s64 = -7928;
	// addi r4,r11,-11232
	ctx.r4.s64 = ctx.r11.s64 + -11232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B45F4;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7864
	ctx.r5.s64 = -7864;
	// addi r4,r11,-10840
	ctx.r4.s64 = ctx.r11.s64 + -10840;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4618;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7800
	ctx.r5.s64 = -7800;
	// addi r4,r11,-10448
	ctx.r4.s64 = ctx.r11.s64 + -10448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B463C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4640:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmplwi cr6,r11,58304
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58304, ctx.xer);
	// bne cr6,0x832b4664
	if (!ctx.cr6.eq) goto loc_832B4664;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4658;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4664:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4640
	if (ctx.cr6.lt) goto loc_832B4640;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8144
	ctx.r5.s64 = -8144;
	// addi r4,r11,-27264
	ctx.r4.s64 = ctx.r11.s64 + -27264;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4694;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8080
	ctx.r5.s64 = -8080;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B46B8;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8016
	ctx.r5.s64 = -8016;
	// addi r4,r11,-26448
	ctx.r4.s64 = ctx.r11.s64 + -26448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B46DC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8176
	ctx.r5.s64 = -8176;
	// addi r4,r11,-26072
	ctx.r4.s64 = ctx.r11.s64 + -26072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4700;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8112
	ctx.r5.s64 = -8112;
	// addi r4,r11,-25680
	ctx.r4.s64 = ctx.r11.s64 + -25680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4724;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8048
	ctx.r5.s64 = -8048;
	// addi r4,r11,-25288
	ctx.r4.s64 = ctx.r11.s64 + -25288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4748;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B474C:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmplwi cr6,r11,58560
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58560, ctx.xer);
	// bne cr6,0x832b4770
	if (!ctx.cr6.eq) goto loc_832B4770;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-22104
	ctx.r3.s64 = ctx.r11.s64 + -22104;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4764;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4770:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b474c
	if (ctx.cr6.lt) goto loc_832B474C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7888
	ctx.r5.s64 = -7888;
	// addi r4,r11,-24928
	ctx.r4.s64 = ctx.r11.s64 + -24928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B47A0;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7824
	ctx.r5.s64 = -7824;
	// addi r4,r11,-24520
	ctx.r4.s64 = ctx.r11.s64 + -24520;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B47C4;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7760
	ctx.r5.s64 = -7760;
	// addi r4,r11,-24112
	ctx.r4.s64 = ctx.r11.s64 + -24112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B47E8;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7920
	ctx.r5.s64 = -7920;
	// addi r4,r11,-23736
	ctx.r4.s64 = ctx.r11.s64 + -23736;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B480C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7856
	ctx.r5.s64 = -7856;
	// addi r4,r11,-23344
	ctx.r4.s64 = ctx.r11.s64 + -23344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4830;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7792
	ctx.r5.s64 = -7792;
	// addi r4,r11,-22952
	ctx.r4.s64 = ctx.r11.s64 + -22952;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4854;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4858:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmplwi cr6,r11,58816
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58816, ctx.xer);
	// bne cr6,0x832b487c
	if (!ctx.cr6.eq) goto loc_832B487C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-21816
	ctx.r3.s64 = ctx.r11.s64 + -21816;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4870;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B487C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4858
	if (ctx.cr6.lt) goto loc_832B4858;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8136
	ctx.r5.s64 = -8136;
	// addi r4,r11,-31192
	ctx.r4.s64 = ctx.r11.s64 + -31192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B48AC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8072
	ctx.r5.s64 = -8072;
	// addi r4,r11,-30832
	ctx.r4.s64 = ctx.r11.s64 + -30832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B48D0;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8008
	ctx.r5.s64 = -8008;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B48F4;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8168
	ctx.r5.s64 = -8168;
	// addi r4,r11,-30144
	ctx.r4.s64 = ctx.r11.s64 + -30144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4918;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8104
	ctx.r5.s64 = -8104;
	// addi r4,r11,-29808
	ctx.r4.s64 = ctx.r11.s64 + -29808;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B493C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-8040
	ctx.r5.s64 = -8040;
	// addi r4,r11,-29472
	ctx.r4.s64 = ctx.r11.s64 + -29472;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4960;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4964:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmplwi cr6,r11,59072
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59072, ctx.xer);
	// bne cr6,0x832b4988
	if (!ctx.cr6.eq) goto loc_832B4988;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-22592
	ctx.r3.s64 = ctx.r11.s64 + -22592;
	// bl 0x832b5bb0
	ctx.lr = 0x832B497C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4988:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4964
	if (ctx.cr6.lt) goto loc_832B4964;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7880
	ctx.r5.s64 = -7880;
	// addi r4,r11,-29168
	ctx.r4.s64 = ctx.r11.s64 + -29168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B49B8;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7816
	ctx.r5.s64 = -7816;
	// addi r4,r11,-28832
	ctx.r4.s64 = ctx.r11.s64 + -28832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B49DC;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7752
	ctx.r5.s64 = -7752;
	// addi r4,r11,-28496
	ctx.r4.s64 = ctx.r11.s64 + -28496;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4A00;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7912
	ctx.r5.s64 = -7912;
	// addi r4,r11,-28192
	ctx.r4.s64 = ctx.r11.s64 + -28192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4A24;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7848
	ctx.r5.s64 = -7848;
	// addi r4,r11,-27872
	ctx.r4.s64 = ctx.r11.s64 + -27872;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4A48;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-7784
	ctx.r5.s64 = -7784;
	// addi r4,r11,-27552
	ctx.r4.s64 = ctx.r11.s64 + -27552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4A6C;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4A70:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmplwi cr6,r11,59328
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59328, ctx.xer);
	// bne cr6,0x832b4a94
	if (!ctx.cr6.eq) goto loc_832B4A94;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-22328
	ctx.r3.s64 = ctx.r11.s64 + -22328;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4A88;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4A94:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4a70
	if (ctx.cr6.lt) goto loc_832B4A70;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,18496
	ctx.r5.s64 = 18496;
	// addi r4,r11,1240
	ctx.r4.s64 = ctx.r11.s64 + 1240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B4AC4;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8976
	ctx.r3.s64 = ctx.r11.s64 + -8976;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4AD0;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,14784
	ctx.r9.u64 = ctx.r10.u64 | 14784;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-8936
	ctx.r3.s64 = ctx.r10.s64 + -8936;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B4AF0;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,14788
	ctx.r9.u64 = ctx.r10.u64 | 14788;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5024
	ctx.r3.s64 = ctx.r10.s64 + 5024;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B4B10;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,14792
	ctx.r9.u64 = ctx.r10.u64 | 14792;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1896
	ctx.r3.s64 = ctx.r10.s64 + 1896;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B4B30;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,14796
	ctx.r9.u64 = ctx.r10.u64 | 14796;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5280
	ctx.r3.s64 = ctx.r10.s64 + 5280;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B4B50;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,14800
	ctx.r9.u64 = ctx.r10.u64 | 14800;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1112
	ctx.r3.s64 = ctx.r10.s64 + 1112;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B4B70;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,14804
	ctx.r9.u64 = ctx.r10.u64 | 14804;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-8896
	ctx.r3.s64 = ctx.r10.s64 + -8896;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B4B90;
	sub_832B5BB0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,14808
	ctx.r9.u64 = ctx.r10.u64 | 14808;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5096
	ctx.r3.s64 = ctx.r10.s64 + 5096;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x832B4BB0;
	sub_832B5BB0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,14812
	ctx.r10.u64 = ctx.r11.u64 | 14812;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
loc_832B4BC4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18496
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18496, ctx.xer);
	// bne cr6,0x832b4be8
	if (!ctx.cr6.eq) goto loc_832B4BE8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,13144
	ctx.r3.s64 = ctx.r11.s64 + 13144;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4BDC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4BE8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4bc4
	if (ctx.cr6.lt) goto loc_832B4BC4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4BF8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18560
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18560, ctx.xer);
	// bne cr6,0x832b4c1c
	if (!ctx.cr6.eq) goto loc_832B4C1C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,13320
	ctx.r3.s64 = ctx.r11.s64 + 13320;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4C10;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4C1C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4bf8
	if (ctx.cr6.lt) goto loc_832B4BF8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4C2C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18624
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18624, ctx.xer);
	// bne cr6,0x832b4c50
	if (!ctx.cr6.eq) goto loc_832B4C50;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,13472
	ctx.r3.s64 = ctx.r11.s64 + 13472;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4C44;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4C50:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4c2c
	if (ctx.cr6.lt) goto loc_832B4C2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4C60:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49344
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49344, ctx.xer);
	// bne cr6,0x832b4c84
	if (!ctx.cr6.eq) goto loc_832B4C84;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,31024
	ctx.r3.s64 = ctx.r11.s64 + 31024;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4C78;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4C84:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4c60
	if (ctx.cr6.lt) goto loc_832B4C60;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4C94:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49600
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49600, ctx.xer);
	// bne cr6,0x832b4cb8
	if (!ctx.cr6.eq) goto loc_832B4CB8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,31208
	ctx.r3.s64 = ctx.r11.s64 + 31208;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4CAC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4CB8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4c94
	if (ctx.cr6.lt) goto loc_832B4C94;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4CC8:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,32960
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32960, ctx.xer);
	// bne cr6,0x832b4cec
	if (!ctx.cr6.eq) goto loc_832B4CEC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,31400
	ctx.r3.s64 = ctx.r11.s64 + 31400;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4CE0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4CEC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4cc8
	if (ctx.cr6.lt) goto loc_832B4CC8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4CFC:
	// andi. r11,r30,61888
	ctx.r11.u64 = ctx.r30.u64 & 61888;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,33216
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33216, ctx.xer);
	// bne cr6,0x832b4d20
	if (!ctx.cr6.eq) goto loc_832B4D20;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,31672
	ctx.r3.s64 = ctx.r11.s64 + 31672;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4D14;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4D20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4cfc
	if (ctx.cr6.lt) goto loc_832B4CFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4D30:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18576, ctx.xer);
	// bne cr6,0x832b4d54
	if (!ctx.cr6.eq) goto loc_832B4D54;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4D48;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4D54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4d30
	if (ctx.cr6.lt) goto loc_832B4D30;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4D64:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18640
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18640, ctx.xer);
	// bne cr6,0x832b4d88
	if (!ctx.cr6.eq) goto loc_832B4D88;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4D7C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4D88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4d64
	if (ctx.cr6.lt) goto loc_832B4D64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4D98:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18600, ctx.xer);
	// bne cr6,0x832b4dbc
	if (!ctx.cr6.eq) goto loc_832B4DBC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4DB0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4DBC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4d98
	if (ctx.cr6.lt) goto loc_832B4D98;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4DCC:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18664
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18664, ctx.xer);
	// bne cr6,0x832b4df0
	if (!ctx.cr6.eq) goto loc_832B4DF0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4DE4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4DF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4dcc
	if (ctx.cr6.lt) goto loc_832B4DCC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4E00:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18608
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18608, ctx.xer);
	// bne cr6,0x832b4e24
	if (!ctx.cr6.eq) goto loc_832B4E24;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4E18;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4E24:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4e00
	if (ctx.cr6.lt) goto loc_832B4E00;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4E34:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18672
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18672, ctx.xer);
	// bne cr6,0x832b4e58
	if (!ctx.cr6.eq) goto loc_832B4E58;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4E4C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4E58:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4e34
	if (ctx.cr6.lt) goto loc_832B4E34;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4E68:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18616
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18616, ctx.xer);
	// bne cr6,0x832b4e8c
	if (!ctx.cr6.eq) goto loc_832B4E8C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4E80;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4E8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4e68
	if (ctx.cr6.lt) goto loc_832B4E68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4E9C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18680
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18680, ctx.xer);
	// bne cr6,0x832b4ec0
	if (!ctx.cr6.eq) goto loc_832B4EC0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4EB4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4EC0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4e9c
	if (ctx.cr6.lt) goto loc_832B4E9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4ED0:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18592
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18592, ctx.xer);
	// bne cr6,0x832b4ef4
	if (!ctx.cr6.eq) goto loc_832B4EF4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4EE8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4EF4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4ed0
	if (ctx.cr6.lt) goto loc_832B4ED0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4F04:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,18656
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18656, ctx.xer);
	// bne cr6,0x832b4f28
	if (!ctx.cr6.eq) goto loc_832B4F28;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-2344
	ctx.r3.s64 = ctx.r11.s64 + -2344;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4F1C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4F28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4f04
	if (ctx.cr6.lt) goto loc_832B4F04;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4F38:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19600, ctx.xer);
	// bne cr6,0x832b4f5c
	if (!ctx.cr6.eq) goto loc_832B4F5C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4F50;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4F5C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4f38
	if (ctx.cr6.lt) goto loc_832B4F38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4F6C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19664
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19664, ctx.xer);
	// bne cr6,0x832b4f90
	if (!ctx.cr6.eq) goto loc_832B4F90;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4F84;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4F90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4f6c
	if (ctx.cr6.lt) goto loc_832B4F6C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4FA0:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19624
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19624, ctx.xer);
	// bne cr6,0x832b4fc4
	if (!ctx.cr6.eq) goto loc_832B4FC4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4FB8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4FC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4fa0
	if (ctx.cr6.lt) goto loc_832B4FA0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B4FD4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19688
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19688, ctx.xer);
	// bne cr6,0x832b4ff8
	if (!ctx.cr6.eq) goto loc_832B4FF8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// bl 0x832b5bb0
	ctx.lr = 0x832B4FEC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B4FF8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b4fd4
	if (ctx.cr6.lt) goto loc_832B4FD4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5008:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19632
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19632, ctx.xer);
	// bne cr6,0x832b502c
	if (!ctx.cr6.eq) goto loc_832B502C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5020;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B502C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5008
	if (ctx.cr6.lt) goto loc_832B5008;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B503C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19696
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19696, ctx.xer);
	// bne cr6,0x832b5060
	if (!ctx.cr6.eq) goto loc_832B5060;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5054;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5060:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b503c
	if (ctx.cr6.lt) goto loc_832B503C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5070:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19640
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19640, ctx.xer);
	// bne cr6,0x832b5094
	if (!ctx.cr6.eq) goto loc_832B5094;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5088;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5094:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5070
	if (ctx.cr6.lt) goto loc_832B5070;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B50A4:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19704
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19704, ctx.xer);
	// bne cr6,0x832b50c8
	if (!ctx.cr6.eq) goto loc_832B50C8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// bl 0x832b5bb0
	ctx.lr = 0x832B50BC;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B50C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b50a4
	if (ctx.cr6.lt) goto loc_832B50A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B50D8:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19608
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19608, ctx.xer);
	// bne cr6,0x832b50fc
	if (!ctx.cr6.eq) goto loc_832B50FC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-7808
	ctx.r3.s64 = ctx.r11.s64 + -7808;
	// bl 0x832b5bb0
	ctx.lr = 0x832B50F0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B50FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b50d8
	if (ctx.cr6.lt) goto loc_832B50D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B510C:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,19672
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19672, ctx.xer);
	// bne cr6,0x832b5130
	if (!ctx.cr6.eq) goto loc_832B5130;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-2104
	ctx.r3.s64 = ctx.r11.s64 + -2104;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5124;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5130:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b510c
	if (ctx.cr6.lt) goto loc_832B510C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5140:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,20048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20048, ctx.xer);
	// bne cr6,0x832b5164
	if (!ctx.cr6.eq) goto loc_832B5164;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,1488
	ctx.r3.s64 = ctx.r11.s64 + 1488;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5158;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5164:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5140
	if (ctx.cr6.lt) goto loc_832B5140;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5174:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,20056
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20056, ctx.xer);
	// bne cr6,0x832b5198
	if (!ctx.cr6.eq) goto loc_832B5198;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,1360
	ctx.r3.s64 = ctx.r11.s64 + 1360;
	// bl 0x832b5bb0
	ctx.lr = 0x832B518C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5198:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5174
	if (ctx.cr6.lt) goto loc_832B5174;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B51A8:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49472
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49472, ctx.xer);
	// bne cr6,0x832b51cc
	if (!ctx.cr6.eq) goto loc_832B51CC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// bl 0x832b5bb0
	ctx.lr = 0x832B51C0;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B51CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b51a8
	if (ctx.cr6.lt) goto loc_832B51A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B51DC:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49480, ctx.xer);
	// bne cr6,0x832b5200
	if (!ctx.cr6.eq) goto loc_832B5200;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,32096
	ctx.r3.s64 = ctx.r11.s64 + 32096;
	// bl 0x832b5bb0
	ctx.lr = 0x832B51F4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5200:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b51dc
	if (ctx.cr6.lt) goto loc_832B51DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5210:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49544
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49544, ctx.xer);
	// bne cr6,0x832b5234
	if (!ctx.cr6.eq) goto loc_832B5234;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,32272
	ctx.r3.s64 = ctx.r11.s64 + 32272;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5228;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5234:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5210
	if (ctx.cr6.lt) goto loc_832B5210;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5244:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,20064
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20064, ctx.xer);
	// bne cr6,0x832b5268
	if (!ctx.cr6.eq) goto loc_832B5268;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10080
	ctx.r3.s64 = ctx.r11.s64 + -10080;
	// bl 0x832b5bb0
	ctx.lr = 0x832B525C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5268:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5244
	if (ctx.cr6.lt) goto loc_832B5244;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5278:
	// rlwinm r11,r30,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// cmpwi cr6,r11,20072
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20072, ctx.xer);
	// bne cr6,0x832b529c
	if (!ctx.cr6.eq) goto loc_832B529C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10000
	ctx.r3.s64 = ctx.r11.s64 + -10000;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5290;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B529C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5278
	if (ctx.cr6.lt) goto loc_832B5278;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B52AC:
	// rlwinm r11,r30,0,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFC0;
	// cmpwi cr6,r11,17600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17600, ctx.xer);
	// bne cr6,0x832b52d0
	if (!ctx.cr6.eq) goto loc_832B52D0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// bl 0x832b5bb0
	ctx.lr = 0x832B52C4;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B52D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b52ac
	if (ctx.cr6.lt) goto loc_832B52AC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B52E0:
	// andi. r11,r30,61936
	ctx.r11.u64 = ctx.r30.u64 & 61936;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,49408
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49408, ctx.xer);
	// bne cr6,0x832b5304
	if (!ctx.cr6.eq) goto loc_832B5304;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-7544
	ctx.r3.s64 = ctx.r11.s64 + -7544;
	// bl 0x832b5bb0
	ctx.lr = 0x832B52F8;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5304:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b52e0
	if (ctx.cr6.lt) goto loc_832B52E0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5314:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,53512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53512, ctx.xer);
	// bne cr6,0x832b5338
	if (!ctx.cr6.eq) goto loc_832B5338;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-6320
	ctx.r3.s64 = ctx.r11.s64 + -6320;
	// bl 0x832b5bb0
	ctx.lr = 0x832B532C;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B5338:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5314
	if (ctx.cr6.lt) goto loc_832B5314;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B5348:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,37128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37128, ctx.xer);
	// bne cr6,0x832b536c
	if (!ctx.cr6.eq) goto loc_832B536C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5888
	ctx.r3.s64 = ctx.r11.s64 + -5888;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5360;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B536C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b5348
	if (ctx.cr6.lt) goto loc_832B5348;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-28416
	ctx.r5.s64 = -28416;
	// addi r4,r11,-5328
	ctx.r4.s64 = ctx.r11.s64 + -5328;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B539C;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-28352
	ctx.r5.s64 = -28352;
	// addi r4,r11,-4880
	ctx.r4.s64 = ctx.r11.s64 + -4880;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B53C0;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,192
	ctx.r7.s64 = 192;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-28288
	ctx.r5.s64 = -28288;
	// addi r4,r11,-4432
	ctx.r4.s64 = ctx.r11.s64 + -4432;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B53E4;
	sub_832B1AB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B53E8:
	// andi. r11,r30,61944
	ctx.r11.u64 = ctx.r30.u64 & 61944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,53504
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53504, ctx.xer);
	// bne cr6,0x832b540c
	if (!ctx.cr6.eq) goto loc_832B540C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5400;
	sub_832B5BB0(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_832B540C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832b53e8
	if (ctx.cr6.lt) goto loc_832B53E8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-11968
	ctx.r5.s64 = -11968;
	// addi r4,r11,-3648
	ctx.r4.s64 = ctx.r11.s64 + -3648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1a08
	ctx.lr = 0x832B5434;
	sub_832B1A08(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-11904
	ctx.r5.s64 = -11904;
	// addi r4,r11,-3328
	ctx.r4.s64 = ctx.r11.s64 + -3328;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1a08
	ctx.lr = 0x832B5450;
	sub_832B1A08(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-16
	ctx.r6.s64 = -16;
	// li r5,20032
	ctx.r5.s64 = 20032;
	// addi r4,r11,2120
	ctx.r4.s64 = ctx.r11.s64 + 2120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1a08
	ctx.lr = 0x832B546C;
	sub_832B1A08(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,19196
	ctx.r7.s64 = 19196;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,19136
	ctx.r5.s64 = 19136;
	// addi r4,r11,-6560
	ctx.r4.s64 = ctx.r11.s64 + -6560;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ab8
	ctx.lr = 0x832B5490;
	sub_832B1AB8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r5,19136
	ctx.r5.s64 = 19136;
	// addi r4,r11,-6448
	ctx.r4.s64 = ctx.r11.s64 + -6448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1a08
	ctx.lr = 0x832B54AC;
	sub_832B1A08(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r5,18504
	ctx.r5.s64 = 18504;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1a08
	ctx.lr = 0x832B54C8;
	sub_832B1A08(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-3600
	ctx.r6.s64 = -3600;
	// li r5,-32512
	ctx.r5.s64 = -32512;
	// addi r4,r11,-2816
	ctx.r4.s64 = ctx.r11.s64 + -2816;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1a08
	ctx.lr = 0x832B54E4;
	sub_832B1A08(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,-32504
	ctx.r5.s64 = -32504;
	// addi r4,r11,-2392
	ctx.r4.s64 = ctx.r11.s64 + -2392;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1a08
	ctx.lr = 0x832B5500;
	sub_832B1A08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5508"))) PPC_WEAK_FUNC(sub_832B5508);
PPC_FUNC_IMPL(__imp__sub_832B5508) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-20712
	ctx.r3.s64 = ctx.r11.s64 + -20712;
	// bl 0x832b5bb8
	ctx.lr = 0x832B5528;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-20696
	ctx.r3.s64 = ctx.r11.s64 + -20696;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B553C;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-20680
	ctx.r3.s64 = ctx.r11.s64 + -20680;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5550;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-20664
	ctx.r3.s64 = ctx.r11.s64 + -20664;
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5564;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-20632
	ctx.r3.s64 = ctx.r11.s64 + -20632;
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5578;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-20600
	ctx.r3.s64 = ctx.r11.s64 + -20600;
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B558C;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-20544
	ctx.r3.s64 = ctx.r11.s64 + -20544;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B55A0;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-20472
	ctx.r3.s64 = ctx.r11.s64 + -20472;
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B55B4;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19360
	ctx.r3.s64 = ctx.r11.s64 + -19360;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B55C8;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19344
	ctx.r3.s64 = ctx.r11.s64 + -19344;
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B55DC;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19328
	ctx.r3.s64 = ctx.r11.s64 + -19328;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B55F0;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19312
	ctx.r3.s64 = ctx.r11.s64 + -19312;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5604;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19256
	ctx.r3.s64 = ctx.r11.s64 + -19256;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5618;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19208
	ctx.r3.s64 = ctx.r11.s64 + -19208;
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B562C;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19152
	ctx.r3.s64 = ctx.r11.s64 + -19152;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5640;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19080
	ctx.r3.s64 = ctx.r11.s64 + -19080;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5654;
	sub_832B5BB8(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// bl 0x832b5bb8
	ctx.lr = 0x832B5664;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19984
	ctx.r3.s64 = ctx.r11.s64 + -19984;
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5678;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19968
	ctx.r3.s64 = ctx.r11.s64 + -19968;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B568C;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B56A0;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19920
	ctx.r3.s64 = ctx.r11.s64 + -19920;
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B56B4;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19888
	ctx.r3.s64 = ctx.r11.s64 + -19888;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B56C8;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19832
	ctx.r3.s64 = ctx.r11.s64 + -19832;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B56DC;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-19760
	ctx.r3.s64 = ctx.r11.s64 + -19760;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B56F0;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18640
	ctx.r3.s64 = ctx.r11.s64 + -18640;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5704;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18640
	ctx.r3.s64 = ctx.r11.s64 + -18640;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5718;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18632
	ctx.r3.s64 = ctx.r11.s64 + -18632;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B572C;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5740;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5754;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5768;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B577C;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18104
	ctx.r3.s64 = ctx.r11.s64 + -18104;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5790;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18640
	ctx.r3.s64 = ctx.r11.s64 + -18640;
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B57A4;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18640
	ctx.r3.s64 = ctx.r11.s64 + -18640;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B57B8;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18632
	ctx.r3.s64 = ctx.r11.s64 + -18632;
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B57CC;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B57E0;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18424
	ctx.r3.s64 = ctx.r11.s64 + -18424;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B57F4;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5808;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B581C;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18104
	ctx.r3.s64 = ctx.r11.s64 + -18104;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5830;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18640
	ctx.r3.s64 = ctx.r11.s64 + -18640;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5844;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18640
	ctx.r3.s64 = ctx.r11.s64 + -18640;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5858;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18632
	ctx.r3.s64 = ctx.r11.s64 + -18632;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B586C;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18528
	ctx.r3.s64 = ctx.r11.s64 + -18528;
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5880;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18392
	ctx.r3.s64 = ctx.r11.s64 + -18392;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B5894;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B58A8;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B58BC;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18104
	ctx.r3.s64 = ctx.r11.s64 + -18104;
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// bl 0x832b5bb8
	ctx.lr = 0x832B58D0;
	sub_832B5BB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// bl 0x832b5bc0
	ctx.lr = 0x832B58E4;
	sub_832B5BC0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18248
	ctx.r3.s64 = ctx.r11.s64 + -18248;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// bl 0x832b5bc0
	ctx.lr = 0x832B58F8;
	sub_832B5BC0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18192
	ctx.r3.s64 = ctx.r11.s64 + -18192;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// bl 0x832b5bc0
	ctx.lr = 0x832B590C;
	sub_832B5BC0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x832b5bc0
	ctx.lr = 0x832B5920;
	sub_832B5BC0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_832B5938"))) PPC_WEAK_FUNC(sub_832B5938);
PPC_FUNC_IMPL(__imp__sub_832B5938) {
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
	// rlwinm r30,r4,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832b599c
	if (ctx.cr6.eq) goto loc_832B599C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b5978
	if (ctx.cr6.eq) goto loc_832B5978;
	// bl 0x82e01698
	ctx.lr = 0x832B5970;
	sub_82E01698(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832B5978:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832b5990
	if (!ctx.cr6.gt) goto loc_832B5990;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832B5990:
	// bl 0x82e01690
	ctx.lr = 0x832B5994;
	sub_82E01690(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_832B599C:
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

__attribute__((alias("__imp__sub_832B59B4"))) PPC_WEAK_FUNC(sub_832B59B4);
PPC_FUNC_IMPL(__imp__sub_832B59B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B59B8"))) PPC_WEAK_FUNC(sub_832B59B8);
PPC_FUNC_IMPL(__imp__sub_832B59B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832B59C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r29,r5,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x832b5938
	ctx.lr = 0x832B59D8;
	sub_832B5938(ctx, base);
	// lis r27,-31824
	ctx.r27.s64 = -2085617664;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lwz r11,700(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 700);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832B59F0:
	// lwz r11,-8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832b5a00
	if (!ctx.cr6.lt) goto loc_832B5A00;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_832B5A00:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832b5a0c
	if (!ctx.cr6.gt) goto loc_832B5A0C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832B5A0C:
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832b5a1c
	if (!ctx.cr6.lt) goto loc_832B5A1C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_832B5A1C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832b5a28
	if (!ctx.cr6.gt) goto loc_832B5A28;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832B5A28:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832b5a38
	if (!ctx.cr6.lt) goto loc_832B5A38;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_832B5A38:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832b5a44
	if (!ctx.cr6.gt) goto loc_832B5A44;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832B5A44:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832b5a54
	if (!ctx.cr6.lt) goto loc_832B5A54;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_832B5A54:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832b5a60
	if (!ctx.cr6.gt) goto loc_832B5A60;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832B5A60:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x832b59f0
	if (!ctx.cr6.eq) goto loc_832B59F0;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r10,r10,65532
	ctx.r10.u64 = ctx.r10.u64 | 65532;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832b5a90
	if (!ctx.cr6.gt) goto loc_832B5A90;
loc_832B5A8C:
	// b 0x832b5a8c
	goto loc_832B5A8C;
loc_832B5A90:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-3048
	ctx.r3.s64 = ctx.r11.s64 + -3048;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5A9C;
	sub_832B5BB0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r3,r11,-2744
	ctx.r3.s64 = ctx.r11.s64 + -2744;
	// rlwinm r31,r10,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x832b5bb0
	ctx.lr = 0x832B5AB4;
	sub_832B5BB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// ble cr6,0x832b5b5c
	if (!ctx.cr6.gt) goto loc_832B5B5C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_832B5AD4:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// cmplwi cr6,r9,20936
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 20936, ctx.xer);
	// lwz r9,700(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 700);
	// lwzx r9,r4,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// bne cr6,0x832b5b38
	if (!ctx.cr6.eq) goto loc_832B5B38;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x832b5b14
	if (!ctx.cr6.eq) goto loc_832B5B14;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x832b5b38
	goto loc_832B5B38;
loc_832B5B14:
	// cmpwi cr6,r8,-4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -4, ctx.xer);
	// bne cr6,0x832b5b38
	if (!ctx.cr6.eq) goto loc_832B5B38;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmpwi cr6,r8,19968
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 19968, ctx.xer);
	// beq cr6,0x832b5b38
	if (ctx.cr6.eq) goto loc_832B5B38;
	// cmpwi cr6,r8,24832
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24832, ctx.xer);
	// beq cr6,0x832b5b38
	if (ctx.cr6.eq) goto loc_832B5B38;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_832B5B38:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stwx r10,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne cr6,0x832b5ad4
	if (!ctx.cr6.eq) goto loc_832B5AD4;
loc_832B5B5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5B64"))) PPC_WEAK_FUNC(sub_832B5B64);
PPC_FUNC_IMPL(__imp__sub_832B5B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5B68"))) PPC_WEAK_FUNC(sub_832B5B68);
PPC_FUNC_IMPL(__imp__sub_832B5B68) {
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
	// lwz r3,700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b5b94
	if (ctx.cr6.eq) goto loc_832B5B94;
	// bl 0x82e01698
	ctx.lr = 0x832B5B8C;
	sub_82E01698(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
loc_832B5B94:
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

__attribute__((alias("__imp__sub_832B5BA8"))) PPC_WEAK_FUNC(sub_832B5BA8);
PPC_FUNC_IMPL(__imp__sub_832B5BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5BAC"))) PPC_WEAK_FUNC(sub_832B5BAC);
PPC_FUNC_IMPL(__imp__sub_832B5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5BB0"))) PPC_WEAK_FUNC(sub_832B5BB0);
PPC_FUNC_IMPL(__imp__sub_832B5BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5BB4"))) PPC_WEAK_FUNC(sub_832B5BB4);
PPC_FUNC_IMPL(__imp__sub_832B5BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5BB8"))) PPC_WEAK_FUNC(sub_832B5BB8);
PPC_FUNC_IMPL(__imp__sub_832B5BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5BBC"))) PPC_WEAK_FUNC(sub_832B5BBC);
PPC_FUNC_IMPL(__imp__sub_832B5BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5BC0"))) PPC_WEAK_FUNC(sub_832B5BC0);
PPC_FUNC_IMPL(__imp__sub_832B5BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5BC4"))) PPC_WEAK_FUNC(sub_832B5BC4);
PPC_FUNC_IMPL(__imp__sub_832B5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5BC8"))) PPC_WEAK_FUNC(sub_832B5BC8);
PPC_FUNC_IMPL(__imp__sub_832B5BC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x832b5bfc
	if (ctx.cr6.gt) goto loc_832B5BFC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832b5bfc
	if (ctx.cr6.eq) goto loc_832B5BFC;
	// bdz 0x832b5bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B5BF4;
	// bdz 0x832b5bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B5BF4;
	// bdz 0x832b5bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B5BF4;
	// bdz 0x832b5bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B5BFC;
	// bdz 0x832b5bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B5BF4;
	// bdz 0x832b5bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B5BFC;
loc_832B5BF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_832B5BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5C04"))) PPC_WEAK_FUNC(sub_832B5C04);
PPC_FUNC_IMPL(__imp__sub_832B5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5C08"))) PPC_WEAK_FUNC(sub_832B5C08);
PPC_FUNC_IMPL(__imp__sub_832B5C08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5C28"))) PPC_WEAK_FUNC(sub_832B5C28);
PPC_FUNC_IMPL(__imp__sub_832B5C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5C3C"))) PPC_WEAK_FUNC(sub_832B5C3C);
PPC_FUNC_IMPL(__imp__sub_832B5C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5C40"))) PPC_WEAK_FUNC(sub_832B5C40);
PPC_FUNC_IMPL(__imp__sub_832B5C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5C54"))) PPC_WEAK_FUNC(sub_832B5C54);
PPC_FUNC_IMPL(__imp__sub_832B5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5C58"))) PPC_WEAK_FUNC(sub_832B5C58);
PPC_FUNC_IMPL(__imp__sub_832B5C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b5c6c
	if (ctx.cr6.eq) goto loc_832B5C6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_832B5C6C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5C84"))) PPC_WEAK_FUNC(sub_832B5C84);
PPC_FUNC_IMPL(__imp__sub_832B5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5C88"))) PPC_WEAK_FUNC(sub_832B5C88);
PPC_FUNC_IMPL(__imp__sub_832B5C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x832b5ca4
	if (ctx.cr6.eq) goto loc_832B5CA4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x832b5ca4
	if (ctx.cr6.lt) goto loc_832B5CA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832B5CA4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5CBC"))) PPC_WEAK_FUNC(sub_832B5CBC);
PPC_FUNC_IMPL(__imp__sub_832B5CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5CC0"))) PPC_WEAK_FUNC(sub_832B5CC0);
PPC_FUNC_IMPL(__imp__sub_832B5CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31845
	ctx.r10.s64 = -2086993920;
	// addi r10,r10,7320
	ctx.r10.s64 = ctx.r10.s64 + 7320;
	// lwz r11,28800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28800);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5CDC"))) PPC_WEAK_FUNC(sub_832B5CDC);
PPC_FUNC_IMPL(__imp__sub_832B5CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5CE0"))) PPC_WEAK_FUNC(sub_832B5CE0);
PPC_FUNC_IMPL(__imp__sub_832B5CE0) {
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
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x832b5d24
	if (!ctx.cr6.eq) goto loc_832B5D24;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,1856
	ctx.r31.s64 = ctx.r11.s64 + 1856;
	// addi r4,r10,-26280
	ctx.r4.s64 = ctx.r10.s64 + -26280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bb960
	ctx.lr = 0x832B5D20;
	sub_832BB960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832B5D24:
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

__attribute__((alias("__imp__sub_832B5D38"))) PPC_WEAK_FUNC(sub_832B5D38);
PPC_FUNC_IMPL(__imp__sub_832B5D38) {
	PPC_FUNC_PROLOGUE();
	// b 0x833bf1b0
	sub_833BF1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5D3C"))) PPC_WEAK_FUNC(sub_832B5D3C);
PPC_FUNC_IMPL(__imp__sub_832B5D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5D40"))) PPC_WEAK_FUNC(sub_832B5D40);
PPC_FUNC_IMPL(__imp__sub_832B5D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x833bdbf0
	sub_833BDBF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5D44"))) PPC_WEAK_FUNC(sub_832B5D44);
PPC_FUNC_IMPL(__imp__sub_832B5D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5D48"))) PPC_WEAK_FUNC(sub_832B5D48);
PPC_FUNC_IMPL(__imp__sub_832B5D48) {
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
	// bl 0x833a70d0
	ctx.lr = 0x832B5D64;
	sub_833A70D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832b5d7c
	if (ctx.cr0.eq) goto loc_832B5D7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bf1b0
	ctx.lr = 0x832B5D7C;
	sub_833BF1B0(ctx, base);
loc_832B5D7C:
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

__attribute__((alias("__imp__sub_832B5D98"))) PPC_WEAK_FUNC(sub_832B5D98);
PPC_FUNC_IMPL(__imp__sub_832B5D98) {
	PPC_FUNC_PROLOGUE();
	// b 0x833ac970
	sub_833AC970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5D9C"))) PPC_WEAK_FUNC(sub_832B5D9C);
PPC_FUNC_IMPL(__imp__sub_832B5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5DA0"))) PPC_WEAK_FUNC(sub_832B5DA0);
PPC_FUNC_IMPL(__imp__sub_832B5DA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x833a7548
	sub_833A7548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5DA4"))) PPC_WEAK_FUNC(sub_832B5DA4);
PPC_FUNC_IMPL(__imp__sub_832B5DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5DA8"))) PPC_WEAK_FUNC(sub_832B5DA8);
PPC_FUNC_IMPL(__imp__sub_832B5DA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x833a4238
	sub_833A4238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5DAC"))) PPC_WEAK_FUNC(sub_832B5DAC);
PPC_FUNC_IMPL(__imp__sub_832B5DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5DB0"))) PPC_WEAK_FUNC(sub_832B5DB0);
PPC_FUNC_IMPL(__imp__sub_832B5DB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832b5de4
	if (ctx.cr6.eq) goto loc_832B5DE4;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x832b5de4
	if (!ctx.cr6.gt) goto loc_832B5DE4;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_832B5DC4:
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832b5de4
	if (ctx.cr0.eq) goto loc_832B5DE4;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x832b5dc4
	if (ctx.cr6.gt) goto loc_832B5DC4;
loc_832B5DE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5DF0"))) PPC_WEAK_FUNC(sub_832B5DF0);
PPC_FUNC_IMPL(__imp__sub_832B5DF0) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_832B5DF4:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x832b5df4
	if (!ctx.cr0.eq) goto loc_832B5DF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5E0C"))) PPC_WEAK_FUNC(sub_832B5E0C);
PPC_FUNC_IMPL(__imp__sub_832B5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5E10"))) PPC_WEAK_FUNC(sub_832B5E10);
PPC_FUNC_IMPL(__imp__sub_832B5E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5E18"))) PPC_WEAK_FUNC(sub_832B5E18);
PPC_FUNC_IMPL(__imp__sub_832B5E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b5e30
	if (ctx.cr6.eq) goto loc_832B5E30;
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// blr 
	return;
loc_832B5E30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5E38"))) PPC_WEAK_FUNC(sub_832B5E38);
PPC_FUNC_IMPL(__imp__sub_832B5E38) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832B5E40;
	__savegprlr_28(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r3,-31824
	ctx.r3.s64 = -2085617664;
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// lwz r11,1916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1916);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// stw r11,1916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1916, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x832b5ecc
	if (ctx.cr6.lt) goto loc_832B5ECC;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// lis r9,-31824
	ctx.r9.s64 = -2085617664;
	// addi r31,r11,1904
	ctx.r31.s64 = ctx.r11.s64 + 1904;
	// addi r30,r10,1892
	ctx.r30.s64 = ctx.r10.s64 + 1892;
	// addi r29,r9,1880
	ctx.r29.s64 = ctx.r9.s64 + 1880;
	// lwz r11,1904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1904);
	// lwz r10,1892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1892);
	// lis r28,-31824
	ctx.r28.s64 = -2085617664;
	// lwz r9,1880(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1880);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r5,1916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1916, ctx.r5.u32);
	// subf r6,r6,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stb r4,1866(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1866, ctx.r4.u8);
loc_832B5ECC:
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5ED0"))) PPC_WEAK_FUNC(sub_832B5ED0);
PPC_FUNC_IMPL(__imp__sub_832B5ED0) {
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
	// bl 0x832b5e38
	ctx.lr = 0x832B5EE8;
	sub_832B5E38(ctx, base);
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832B5F08"))) PPC_WEAK_FUNC(sub_832B5F08);
PPC_FUNC_IMPL(__imp__sub_832B5F08) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b5f28
	if (ctx.cr6.eq) goto loc_832B5F28;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832B5F28:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,14104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14104, ctx.r10.u32);
	// stw r10,14108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5F44"))) PPC_WEAK_FUNC(sub_832B5F44);
PPC_FUNC_IMPL(__imp__sub_832B5F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5F48"))) PPC_WEAK_FUNC(sub_832B5F48);
PPC_FUNC_IMPL(__imp__sub_832B5F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// twi 31,r0,22
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f1,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5F58"))) PPC_WEAK_FUNC(sub_832B5F58);
PPC_FUNC_IMPL(__imp__sub_832B5F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,-17224
	ctx.r3.s64 = ctx.r11.s64 + -17224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5F64"))) PPC_WEAK_FUNC(sub_832B5F64);
PPC_FUNC_IMPL(__imp__sub_832B5F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5F68"))) PPC_WEAK_FUNC(sub_832B5F68);
PPC_FUNC_IMPL(__imp__sub_832B5F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x832b5fac
	if (ctx.cr6.gt) goto loc_832B5FAC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832b5fac
	if (ctx.cr6.eq) goto loc_832B5FAC;
	// bdz 0x832b5f88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B5F88;
	// bdz 0x832b5f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B5F94;
	// b 0x832b5fa0
	goto loc_832B5FA0;
loc_832B5F88:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-16284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16284);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_832B5F94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_832B5FA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6964(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_832B5FAC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5FB8"))) PPC_WEAK_FUNC(sub_832B5FB8);
PPC_FUNC_IMPL(__imp__sub_832B5FB8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,2800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x833a02c0
	ctx.lr = 0x832B5FF0;
	sub_833A02C0(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x833a03a0
	ctx.lr = 0x832B5FFC;
	sub_833A03A0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmsubs f9,f12,f13,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f11.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f8,f0,f13,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6040"))) PPC_WEAK_FUNC(sub_832B6040);
PPC_FUNC_IMPL(__imp__sub_832B6040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x832b608c
	if (ctx.cr6.gt) goto loc_832B608C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x832b608c
	if (ctx.cr6.eq) goto loc_832B608C;
	// bdz 0x832b6068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6068;
	// bdz 0x832b6074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6074;
	// b 0x832b6080
	goto loc_832B6080;
loc_832B6068:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-16284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16284);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6094
	goto loc_832B6094;
loc_832B6074:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6094
	goto loc_832B6094;
loc_832B6080:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6964(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6094
	goto loc_832B6094;
loc_832B608C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
loc_832B6094:
	// b 0x832b5fb8
	sub_832B5FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6098"))) PPC_WEAK_FUNC(sub_832B6098);
PPC_FUNC_IMPL(__imp__sub_832B6098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B609C"))) PPC_WEAK_FUNC(sub_832B609C);
PPC_FUNC_IMPL(__imp__sub_832B609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B60A0"))) PPC_WEAK_FUNC(sub_832B60A0);
PPC_FUNC_IMPL(__imp__sub_832B60A0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x833a18f0
	ctx.lr = 0x832B60B8;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
	// lfs f0,2800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f3,f0
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
loc_832B60D8:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f0,f31
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsubs f27,f13,f30
	ctx.f27.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// bl 0x833a02c0
	ctx.lr = 0x832B60F0;
	sub_833A02C0(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x833a03a0
	ctx.lr = 0x832B60FC;
	sub_833A03A0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fmuls f11,f26,f27
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f27.f64));
	// fmuls f10,f26,f28
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// fmsubs f9,f12,f28,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 - ctx.f11.f64));
	// fmadds f8,f12,f27,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 + ctx.f10.f64));
	// fadds f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// stfsu f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	ea = 8 + ctx.r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// bne 0x832b60d8
	if (!ctx.cr0.eq) goto loc_832B60D8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x833a193c
	ctx.lr = 0x832B6134;
	__restfpr_26(ctx, base);
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

__attribute__((alias("__imp__sub_832B6148"))) PPC_WEAK_FUNC(sub_832B6148);
PPC_FUNC_IMPL(__imp__sub_832B6148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f2,31448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31448);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24500);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b60a0
	sub_832B60A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6160"))) PPC_WEAK_FUNC(sub_832B6160);
PPC_FUNC_IMPL(__imp__sub_832B6160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x832b61ac
	if (ctx.cr6.gt) goto loc_832B61AC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x832b61ac
	if (ctx.cr6.eq) goto loc_832B61AC;
	// bdz 0x832b6188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6188;
	// bdz 0x832b6194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6194;
	// b 0x832b61a0
	goto loc_832B61A0;
loc_832B6188:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f3,-16284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16284);
	ctx.f3.f64 = double(temp.f32);
	// b 0x832b61b4
	goto loc_832B61B4;
loc_832B6194:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,4352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	ctx.f3.f64 = double(temp.f32);
	// b 0x832b61b4
	goto loc_832B61B4;
loc_832B61A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,6964(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	ctx.f3.f64 = double(temp.f32);
	// b 0x832b61b4
	goto loc_832B61B4;
loc_832B61AC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f3,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f3.f64 = double(temp.f32);
loc_832B61B4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f2,31448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31448);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24500);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b60a0
	sub_832B60A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B61C8"))) PPC_WEAK_FUNC(sub_832B61C8);
PPC_FUNC_IMPL(__imp__sub_832B61C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B61CC"))) PPC_WEAK_FUNC(sub_832B61CC);
PPC_FUNC_IMPL(__imp__sub_832B61CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B61D0"))) PPC_WEAK_FUNC(sub_832B61D0);
PPC_FUNC_IMPL(__imp__sub_832B61D0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x832b628c
	if (ctx.cr6.eq) goto loc_832B628C;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x832b6248
	if (ctx.cr6.gt) goto loc_832B6248;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x832b6248
	if (ctx.cr6.eq) goto loc_832B6248;
	// bdz 0x832b6224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6224;
	// bdz 0x832b6230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6230;
	// b 0x832b623c
	goto loc_832B623C;
loc_832B6224:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-16284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16284);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6250
	goto loc_832B6250;
loc_832B6230:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6250
	goto loc_832B6250;
loc_832B623C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6964(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6250
	goto loc_832B6250;
loc_832B6248:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
loc_832B6250:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5fb8
	ctx.lr = 0x832B6274;
	sub_832B5FB8(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_832B628C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B62AC"))) PPC_WEAK_FUNC(sub_832B62AC);
PPC_FUNC_IMPL(__imp__sub_832B62AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B62B0"))) PPC_WEAK_FUNC(sub_832B62B0);
PPC_FUNC_IMPL(__imp__sub_832B62B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lfs f2,31448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31448);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24500);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b61d0
	sub_832B61D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B62C8"))) PPC_WEAK_FUNC(sub_832B62C8);
PPC_FUNC_IMPL(__imp__sub_832B62C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B62CC"))) PPC_WEAK_FUNC(sub_832B62CC);
PPC_FUNC_IMPL(__imp__sub_832B62CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B62D0"))) PPC_WEAK_FUNC(sub_832B62D0);
PPC_FUNC_IMPL(__imp__sub_832B62D0) {
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
	// lfs f0,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f12,f7
	ctx.f12.f64 = double(ctx.f7.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f3,f11,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f4,f10,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// bl 0x832be238
	ctx.lr = 0x832B635C;
	sub_832BE238(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stb r6,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r6.u8);
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832B6374:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832b6374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B6374;
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

__attribute__((alias("__imp__sub_832B6394"))) PPC_WEAK_FUNC(sub_832B6394);
PPC_FUNC_IMPL(__imp__sub_832B6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6398"))) PPC_WEAK_FUNC(sub_832B6398);
PPC_FUNC_IMPL(__imp__sub_832B6398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// b 0x832be500
	sub_832BE500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B63A0"))) PPC_WEAK_FUNC(sub_832B63A0);
PPC_FUNC_IMPL(__imp__sub_832B63A0) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r7,272(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lfs f2,31448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31448);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24500);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832b61d0
	ctx.lr = 0x832B63DC;
	sub_832B61D0(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// lfs f2,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832be500
	ctx.lr = 0x832B63EC;
	sub_832BE500(ctx, base);
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

__attribute__((alias("__imp__sub_832B6400"))) PPC_WEAK_FUNC(sub_832B6400);
PPC_FUNC_IMPL(__imp__sub_832B6400) {
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
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b6480
	if (ctx.cr6.eq) goto loc_832B6480;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x832b646c
	if (ctx.cr6.gt) goto loc_832B646C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b646c
	if (ctx.cr6.eq) goto loc_832B646C;
	// bdz 0x832b6448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6448;
	// bdz 0x832b6454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6454;
	// b 0x832b6460
	goto loc_832B6460;
loc_832B6448:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-16284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16284);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6474
	goto loc_832B6474;
loc_832B6454:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6474
	goto loc_832B6474;
loc_832B6460:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6964(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b6474
	goto loc_832B6474;
loc_832B646C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
loc_832B6474:
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x832b5fb8
	ctx.lr = 0x832B6480;
	sub_832B5FB8(ctx, base);
loc_832B6480:
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// lfs f2,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832be410
	ctx.lr = 0x832B6490;
	sub_832BE410(ctx, base);
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

__attribute__((alias("__imp__sub_832B64A4"))) PPC_WEAK_FUNC(sub_832B64A4);
PPC_FUNC_IMPL(__imp__sub_832B64A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B64A8"))) PPC_WEAK_FUNC(sub_832B64A8);
PPC_FUNC_IMPL(__imp__sub_832B64A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B64C0"))) PPC_WEAK_FUNC(sub_832B64C0);
PPC_FUNC_IMPL(__imp__sub_832B64C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 268);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r4,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B64D8"))) PPC_WEAK_FUNC(sub_832B64D8);
PPC_FUNC_IMPL(__imp__sub_832B64D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// stb r9,270(r3)
	PPC_STORE_U8(ctx.r3.u32 + 270, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6504"))) PPC_WEAK_FUNC(sub_832B6504);
PPC_FUNC_IMPL(__imp__sub_832B6504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6508"))) PPC_WEAK_FUNC(sub_832B6508);
PPC_FUNC_IMPL(__imp__sub_832B6508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b6524
	if (ctx.cr6.eq) goto loc_832B6524;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_832B6524:
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B658C"))) PPC_WEAK_FUNC(sub_832B658C);
PPC_FUNC_IMPL(__imp__sub_832B658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6590"))) PPC_WEAK_FUNC(sub_832B6590);
PPC_FUNC_IMPL(__imp__sub_832B6590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832B6598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832bea88
	ctx.lr = 0x832B65B0;
	sub_832BEA88(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r7,r11,31452
	ctx.r7.s64 = ctx.r11.s64 + 31452;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// addi r9,r31,156
	ctx.r9.s64 = ctx.r31.s64 + 156;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lfs f0,24284(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r9,r31,172
	ctx.r9.s64 = ctx.r31.s64 + 172;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// addi r9,r30,184
	ctx.r9.s64 = ctx.r30.s64 + 184;
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// lwz r7,136(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// lwz r6,140(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f13,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lwz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// lwz r8,164(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// lwz r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// lwz r6,172(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// lwz r5,176(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r5,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r5.u32);
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r4,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r4.u32);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
loc_832B6698:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832b6698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B6698;
	// lbz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 220);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r10,r30,220
	ctx.r10.s64 = ctx.r30.s64 + 220;
	// addi r9,r31,220
	ctx.r9.s64 = ctx.r31.s64 + 220;
	// stb r7,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r7.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lbz r6,256(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 256);
	// stb r6,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r6.u8);
loc_832B66C4:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x832b66c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B66C4;
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lbz r10,268(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 268);
	// stb r10,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r10.u8);
	// lwz r9,272(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// lbz r8,276(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 276);
	// stb r8,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r8.u8);
	// lwz r7,280(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r7,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
	// lwz r6,284(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r6,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r6.u32);
	// lbz r5,288(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 288);
	// stb r5,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r5.u8);
	// lbz r4,289(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 289);
	// stb r4,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r4.u8);
	// lwz r10,292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// lwz r9,296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// lbz r8,300(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 300);
	// stb r8,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r8.u8);
	// lwz r7,304(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// stw r7,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r7.u32);
	// lbz r6,308(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 308);
	// stb r6,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r6.u8);
	// lwz r5,312(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stw r5,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r5.u32);
	// lbz r4,316(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 316);
	// stb r4,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r4.u8);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// lbz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 324);
	// stb r9,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r9.u8);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lwz r8,332(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// stw r8,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r8.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6774"))) PPC_WEAK_FUNC(sub_832B6774);
PPC_FUNC_IMPL(__imp__sub_832B6774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6778"))) PPC_WEAK_FUNC(sub_832B6778);
PPC_FUNC_IMPL(__imp__sub_832B6778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b67c4
	if (ctx.cr6.eq) goto loc_832B67C4;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x832b67a0
	if (ctx.cr6.gt) goto loc_832B67A0;
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x832b67a4
	if (!ctx.cr6.gt) goto loc_832B67A4;
loc_832B67A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B67A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b6828
	if (ctx.cr6.eq) goto loc_832B6828;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x832b6814
	if (ctx.cr6.gt) goto loc_832B6814;
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// b 0x832b6808
	goto loc_832B6808;
loc_832B67C4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x832b67e8
	if (ctx.cr6.lt) goto loc_832B67E8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lfs f0,31484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x832b67ec
	if (!ctx.cr6.gt) goto loc_832B67EC;
loc_832B67E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B67EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b6828
	if (ctx.cr6.eq) goto loc_832B6828;
	// fcmpu cr6,f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blt cr6,0x832b6814
	if (ctx.cr6.lt) goto loc_832B6814;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-8820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8820);
	ctx.f0.f64 = double(temp.f32);
loc_832B6808:
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x832b6818
	if (!ctx.cr6.gt) goto loc_832B6818;
loc_832B6814:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B6818:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x832b682c
	if (!ctx.cr6.eq) goto loc_832B682C;
loc_832B6828:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B682C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6834"))) PPC_WEAK_FUNC(sub_832B6834);
PPC_FUNC_IMPL(__imp__sub_832B6834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6838"))) PPC_WEAK_FUNC(sub_832B6838);
PPC_FUNC_IMPL(__imp__sub_832B6838) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_832B6850:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x832b6778
	ctx.lr = 0x832B6860;
	sub_832B6778(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b6890
	if (!ctx.cr6.eq) goto loc_832B6890;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x832b6850
	if (ctx.cr6.lt) goto loc_832B6850;
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
loc_832B6890:
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

__attribute__((alias("__imp__sub_832B68A4"))) PPC_WEAK_FUNC(sub_832B68A4);
PPC_FUNC_IMPL(__imp__sub_832B68A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B68A8"))) PPC_WEAK_FUNC(sub_832B68A8);
PPC_FUNC_IMPL(__imp__sub_832B68A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b68f0
	if (ctx.cr6.eq) goto loc_832B68F0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lfs f12,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// b 0x832b690c
	goto loc_832B690C;
loc_832B68F0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31484);
	ctx.f13.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f12,-8820(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8820);
	ctx.f12.f64 = double(temp.f32);
loc_832B690C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// blt cr6,0x832b6960
	if (ctx.cr6.lt) goto loc_832B6960;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bgt cr6,0x832b6960
	if (ctx.cr6.gt) goto loc_832B6960;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// blt cr6,0x832b6960
	if (ctx.cr6.lt) goto loc_832B6960;
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832b6964
	if (!ctx.cr6.gt) goto loc_832B6964;
loc_832B6960:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B6964:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b6978
	if (ctx.cr6.eq) goto loc_832B6978;
loc_832B6970:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_832B6978:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f10
	ctx.f6.f64 = double(ctx.f10.s64);
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// blt cr6,0x832b69cc
	if (ctx.cr6.lt) goto loc_832B69CC;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x832b69cc
	if (ctx.cr6.gt) goto loc_832B69CC;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x832b69cc
	if (ctx.cr6.lt) goto loc_832B69CC;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832b69d0
	if (!ctx.cr6.gt) goto loc_832B69D0;
loc_832B69CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B69D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b6970
	if (!ctx.cr6.eq) goto loc_832B6970;
	// fcmpu cr6,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// blt cr6,0x832b6a00
	if (ctx.cr6.lt) goto loc_832B6A00;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bgt cr6,0x832b6a00
	if (ctx.cr6.gt) goto loc_832B6A00;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x832b6a00
	if (ctx.cr6.lt) goto loc_832B6A00;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832b6a04
	if (!ctx.cr6.gt) goto loc_832B6A04;
loc_832B6A00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B6A04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b6970
	if (!ctx.cr6.eq) goto loc_832B6970;
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// blt cr6,0x832b6a34
	if (ctx.cr6.lt) goto loc_832B6A34;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x832b6a34
	if (ctx.cr6.gt) goto loc_832B6A34;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// blt cr6,0x832b6a34
	if (ctx.cr6.lt) goto loc_832B6A34;
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832b6a38
	if (!ctx.cr6.gt) goto loc_832B6A38;
loc_832B6A34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B6A38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_832B6A48"))) PPC_WEAK_FUNC(sub_832B6A48);
PPC_FUNC_IMPL(__imp__sub_832B6A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// stw r3,1924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1924, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6A54"))) PPC_WEAK_FUNC(sub_832B6A54);
PPC_FUNC_IMPL(__imp__sub_832B6A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6A58"))) PPC_WEAK_FUNC(sub_832B6A58);
PPC_FUNC_IMPL(__imp__sub_832B6A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r10,r10,1992
	ctx.r10.s64 = ctx.r10.s64 + 1992;
	// lwz r11,1924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6A98"))) PPC_WEAK_FUNC(sub_832B6A98);
PPC_FUNC_IMPL(__imp__sub_832B6A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r10,r10,1992
	ctx.r10.s64 = ctx.r10.s64 + 1992;
	// lwz r11,1924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832b6ad4
	if (ctx.cr6.eq) goto loc_832B6AD4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// blr 
	return;
loc_832B6AD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6ADC"))) PPC_WEAK_FUNC(sub_832B6ADC);
PPC_FUNC_IMPL(__imp__sub_832B6ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6AE0"))) PPC_WEAK_FUNC(sub_832B6AE0);
PPC_FUNC_IMPL(__imp__sub_832B6AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x832B6AE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
	// li r28,128
	ctx.r28.s64 = 128;
	// lis r26,-31824
	ctx.r26.s64 = -2085617664;
	// addi r30,r11,1992
	ctx.r30.s64 = ctx.r11.s64 + 1992;
	// addi r27,r10,3189
	ctx.r27.s64 = ctx.r10.s64 + 3189;
loc_832B6B0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832b6b70
	if (!ctx.cr6.eq) goto loc_832B6B70;
	// lwz r11,1924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1924);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832b6b54
	if (ctx.cr6.eq) goto loc_832B6B54;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x832b6b58
	goto loc_832B6B58;
loc_832B6B54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B6B58:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832b6b0c
	if (!ctx.cr6.eq) goto loc_832B6B0C;
loc_832B6B64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832B6B68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_832B6B70:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B6B78:
	// sraw r10,r28,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r10.s64 = ctx.r28.s32 >> temp.u32;
	// and r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 & ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x832b6b9c
	if (ctx.cr6.eq) goto loc_832B6B9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// andc r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ~ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x832b6b78
	if (ctx.cr6.lt) goto loc_832B6B78;
loc_832B6B9C:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x832b6b64
	if (ctx.cr6.gt) goto loc_832B6B64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x832b6b68
	if (ctx.cr6.eq) goto loc_832B6B68;
	// bdz 0x832b6b68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6B68;
	// bdz 0x832b6c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6C84;
	// bdz 0x832b6c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6C84;
	// bdz 0x832b6c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6C84;
	// bdz 0x832b6c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6C84;
	// bdz 0x832b6c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B6C84;
	// bdnz 0x832b6ce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B6CE4;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r6,r8,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// lbz r10,1(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r5,r8,7,18,24
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0x3F80) | (ctx.r5.u64 & 0xFFFFFFFFFFFFC07F);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// clrlwi r4,r5,18
	ctx.r4.u64 = ctx.r5.u32 & 0x3FFF;
	// beq cr6,0x832b6b64
	if (ctx.cr6.eq) goto loc_832B6B64;
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b6b64
	if (ctx.cr6.eq) goto loc_832B6B64;
	// lwz r11,1924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1924);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x832b6c38
	if (!ctx.cr6.lt) goto loc_832B6C38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_832B6C38:
	// cmpwi cr6,r4,16368
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16368, ctx.xer);
	// blt cr6,0x832b6c74
	if (ctx.cr6.lt) goto loc_832B6C74;
	// lwz r11,632(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b6c6c
	if (ctx.cr6.eq) goto loc_832B6C6C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832B6C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x832b5f58
	ctx.lr = 0x832B6C64;
	sub_832B5F58(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x832b6b0c
	goto loc_832B6B0C;
loc_832B6C6C:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x832b6b0c
	goto loc_832B6B0C;
loc_832B6C74:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x832b5f58
	ctx.lr = 0x832B6C7C;
	sub_832B5F58(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x832b6b0c
	goto loc_832B6B0C;
loc_832B6C84:
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x832b6b68
	if (!ctx.cr6.gt) goto loc_832B6B68;
loc_832B6C90:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b6cd0
	if (ctx.cr6.eq) goto loc_832B6CD0;
	// rlwinm r10,r11,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x832b6b68
	if (!ctx.cr6.eq) goto loc_832B6B68;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwimi r11,r3,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blt cr6,0x832b6c90
	if (ctx.cr6.lt) goto loc_832B6C90;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_832B6CD0:
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_832B6CE4:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// ori r3,r11,65280
	ctx.r3.u64 = ctx.r11.u64 | 65280;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6CFC"))) PPC_WEAK_FUNC(sub_832B6CFC);
PPC_FUNC_IMPL(__imp__sub_832B6CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6D00"))) PPC_WEAK_FUNC(sub_832B6D00);
PPC_FUNC_IMPL(__imp__sub_832B6D00) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6D14"))) PPC_WEAK_FUNC(sub_832B6D14);
PPC_FUNC_IMPL(__imp__sub_832B6D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6D18"))) PPC_WEAK_FUNC(sub_832B6D18);
PPC_FUNC_IMPL(__imp__sub_832B6D18) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B6D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b6d58
	if (ctx.cr6.eq) goto loc_832B6D58;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x833a2b30
	ctx.lr = 0x832B6D58;
	sub_833A2B30(ctx, base);
loc_832B6D58:
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

__attribute__((alias("__imp__sub_832B6D6C"))) PPC_WEAK_FUNC(sub_832B6D6C);
PPC_FUNC_IMPL(__imp__sub_832B6D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6D70"))) PPC_WEAK_FUNC(sub_832B6D70);
PPC_FUNC_IMPL(__imp__sub_832B6D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832B6D8C:
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832b6dc0
	if (!ctx.cr6.eq) goto loc_832B6DC0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r10.u8);
loc_832B6DC0:
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832b6df8
	if (!ctx.cr6.eq) goto loc_832B6DF8;
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r10.u8);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r10.u8);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r10.u8);
loc_832B6DF8:
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x832b6e34
	if (!ctx.cr6.eq) goto loc_832B6E34;
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,9(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9, ctx.r10.u8);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,10(r7)
	PPC_STORE_U8(ctx.r7.u32 + 10, ctx.r10.u8);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,11(r6)
	PPC_STORE_U8(ctx.r6.u32 + 11, ctx.r10.u8);
loc_832B6E34:
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832b6e68
	if (!ctx.cr6.eq) goto loc_832B6E68;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r10.u8);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,14(r8)
	PPC_STORE_U8(ctx.r8.u32 + 14, ctx.r10.u8);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,15(r7)
	PPC_STORE_U8(ctx.r7.u32 + 15, ctx.r10.u8);
loc_832B6E68:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x832b6d8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B6D8C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6E74"))) PPC_WEAK_FUNC(sub_832B6E74);
PPC_FUNC_IMPL(__imp__sub_832B6E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6E78"))) PPC_WEAK_FUNC(sub_832B6E78);
PPC_FUNC_IMPL(__imp__sub_832B6E78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6E80"))) PPC_WEAK_FUNC(sub_832B6E80);
PPC_FUNC_IMPL(__imp__sub_832B6E80) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6E90"))) PPC_WEAK_FUNC(sub_832B6E90);
PPC_FUNC_IMPL(__imp__sub_832B6E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6E94"))) PPC_WEAK_FUNC(sub_832B6E94);
PPC_FUNC_IMPL(__imp__sub_832B6E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6E98"))) PPC_WEAK_FUNC(sub_832B6E98);
PPC_FUNC_IMPL(__imp__sub_832B6E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
loc_832B6E98:
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lfs f0,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lfs f13,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f11,-64(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// beq cr6,0x832b6f20
	if (ctx.cr6.eq) goto loc_832B6F20;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfs f9,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lfs f7,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// std r9,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r9.u64);
	// lfd f13,-56(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f11,-48(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fsubs f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fdivs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// fmadds f1,f2,f5,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f1,0(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// b 0x832b6f50
	goto loc_832B6F50;
loc_832B6F20:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// std r11,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r11.u64);
	// lfd f13,-40(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x832b6f50
	if (ctx.cr6.eq) goto loc_832B6F50;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_832B6F50:
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lfs f0,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lfs f13,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f11,-32(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// beq cr6,0x832b6fd8
	if (ctx.cr6.eq) goto loc_832B6FD8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f12,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// std r9,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r9.u64);
	// lfd f10,-24(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fsubs f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsubs f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fdivs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// fmadds f1,f2,f11,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f1,0(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x832b700c
	goto loc_832B700C;
loc_832B6FD8:
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x832b700c
	if (ctx.cr6.eq) goto loc_832B700C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_832B700C:
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832b6e98
	if (!ctx.cr6.eq) goto loc_832B6E98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B701C"))) PPC_WEAK_FUNC(sub_832B701C);
PPC_FUNC_IMPL(__imp__sub_832B701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7020"))) PPC_WEAK_FUNC(sub_832B7020);
PPC_FUNC_IMPL(__imp__sub_832B7020) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x832b6e98
	sub_832B6E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7030"))) PPC_WEAK_FUNC(sub_832B7030);
PPC_FUNC_IMPL(__imp__sub_832B7030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7034"))) PPC_WEAK_FUNC(sub_832B7034);
PPC_FUNC_IMPL(__imp__sub_832B7034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7038"))) PPC_WEAK_FUNC(sub_832B7038);
PPC_FUNC_IMPL(__imp__sub_832B7038) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,4
	ctx.r7.s64 = 4;
loc_832B704C:
	// lwz r3,260(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b7060
	if (ctx.cr6.eq) goto loc_832B7060;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x832b6e98
	ctx.lr = 0x832B7060;
	sub_832B6E98(ctx, base);
loc_832B7060:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne 0x832b704c
	if (!ctx.cr0.eq) goto loc_832B704C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B707C"))) PPC_WEAK_FUNC(sub_832B707C);
PPC_FUNC_IMPL(__imp__sub_832B707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7080"))) PPC_WEAK_FUNC(sub_832B7080);
PPC_FUNC_IMPL(__imp__sub_832B7080) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B70B0"))) PPC_WEAK_FUNC(sub_832B70B0);
PPC_FUNC_IMPL(__imp__sub_832B70B0) {
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
	// lwz r8,168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r11,r3,220
	ctx.r11.s64 = ctx.r3.s64 + 220;
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r31,156(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 156);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
loc_832B70F8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832b70f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B70F8;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r7,184
	ctx.r11.s64 = ctx.r7.s64 + 184;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832B7114:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832b7114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B7114;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
loc_832B7128:
	// lwz r3,260(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b713c
	if (ctx.cr6.eq) goto loc_832B713C;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x832b6e98
	ctx.lr = 0x832B713C;
	sub_832B6E98(ctx, base);
loc_832B713C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne 0x832b7128
	if (!ctx.cr0.eq) goto loc_832B7128;
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

__attribute__((alias("__imp__sub_832B715C"))) PPC_WEAK_FUNC(sub_832B715C);
PPC_FUNC_IMPL(__imp__sub_832B715C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7160"))) PPC_WEAK_FUNC(sub_832B7160);
PPC_FUNC_IMPL(__imp__sub_832B7160) {
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
	// lwz r8,168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r6,164(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r11,r3,184
	ctx.r11.s64 = ctx.r3.s64 + 184;
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// lwz r31,156(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 156);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
loc_832B71A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832b71a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B71A4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
loc_832B71B8:
	// lwz r3,260(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b71cc
	if (ctx.cr6.eq) goto loc_832B71CC;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x832b6e98
	ctx.lr = 0x832B71CC;
	sub_832B6E98(ctx, base);
loc_832B71CC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne 0x832b71b8
	if (!ctx.cr0.eq) goto loc_832B71B8;
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

__attribute__((alias("__imp__sub_832B71EC"))) PPC_WEAK_FUNC(sub_832B71EC);
PPC_FUNC_IMPL(__imp__sub_832B71EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B71F0"))) PPC_WEAK_FUNC(sub_832B71F0);
PPC_FUNC_IMPL(__imp__sub_832B71F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lwz r8,156(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b72a8
	if (ctx.cr6.eq) goto loc_832B72A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x832b728c
	if (ctx.cr6.gt) goto loc_832B728C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832b728c
	if (ctx.cr6.eq) goto loc_832B728C;
	// bdz 0x832b7268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B7268;
	// bdz 0x832b7274
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_832B7274;
	// b 0x832b7280
	goto loc_832B7280;
loc_832B7268:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-16284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16284);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b7294
	goto loc_832B7294;
loc_832B7274:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b7294
	goto loc_832B7294;
loc_832B7280:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6964(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832b7294
	goto loc_832B7294;
loc_832B728C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
loc_832B7294:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b5fb8
	ctx.lr = 0x832B72A0;
	sub_832B5FB8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
loc_832B72A8:
	// lfs f12,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lfs f11,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f9,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f7,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x832b72f0
	if (ctx.cr6.eq) goto loc_832B72F0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x832b6e98
	ctx.lr = 0x832B72F0;
	sub_832B6E98(ctx, base);
loc_832B72F0:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b7308
	if (ctx.cr6.eq) goto loc_832B7308;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x832b6e98
	ctx.lr = 0x832B7308;
	sub_832B6E98(ctx, base);
loc_832B7308:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f8,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f8.u32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// beq cr6,0x832b7344
	if (ctx.cr6.eq) goto loc_832B7344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832B7344:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// beq cr6,0x832b7388
	if (ctx.cr6.eq) goto loc_832B7388;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832B7388:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832B73A4"))) PPC_WEAK_FUNC(sub_832B73A4);
PPC_FUNC_IMPL(__imp__sub_832B73A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B73A8"))) PPC_WEAK_FUNC(sub_832B73A8);
PPC_FUNC_IMPL(__imp__sub_832B73A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x832B73B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x832bea88
	ctx.lr = 0x832B73DC;
	sub_832BEA88(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r10,31452
	ctx.r9.s64 = ctx.r10.s64 + 31452;
	// fctiwz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// li r7,124
	ctx.r7.s64 = 124;
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,164
	ctx.r5.s64 = 164;
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// li r4,160
	ctx.r4.s64 = 160;
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// li r3,168
	ctx.r3.s64 = 168;
	// stfiwx f7,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f7.u32);
	// stfiwx f6,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f6.u32);
	// fctiwz f5,f13
	ctx.f5.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// li r12,156
	ctx.r12.s64 = 156;
	// stfiwx f10,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f10.u32);
	// fctiwz f4,f11
	ctx.f4.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f5,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.f5.u32);
	// fctiwz f3,f12
	ctx.f3.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f4,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.f4.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfiwx f3,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.f3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r10,r31,172
	ctx.r10.s64 = ctx.r31.s64 + 172;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r26,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lbz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 268);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r9,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// stb r30,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r30.u8);
	// stb r30,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r30.u8);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stb r11,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r11.u8);
	// stb r11,270(r31)
	PPC_STORE_U8(ctx.r31.u32 + 270, ctx.r11.u8);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// stw r4,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r4.u32);
	// stw r25,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r25.u32);
	// beq cr6,0x832b7514
	if (ctx.cr6.eq) goto loc_832B7514;
	// stb r11,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r11.u8);
loc_832B7514:
	// rlwinm r10,r27,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x1;
	// rlwinm r9,r27,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 14) & 0x1;
	// rlwinm r8,r27,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	// stb r10,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r10.u8);
	// stb r9,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r9.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832b753c
	if (ctx.cr6.eq) goto loc_832B753C;
	// stb r11,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r11.u8);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// b 0x832b7540
	goto loc_832B7540;
loc_832B753C:
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
loc_832B7540:
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bgt cr6,0x832b768c
	if (ctx.cr6.gt) goto loc_832B768C;
	// lis r12,-31957
	ctx.r12.s64 = -2094333952;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30048
	ctx.r12.s64 = ctx.r12.s64 + 30048;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r25,30248(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30248);
	// lwz r25,30100(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30100);
	// lwz r25,30348(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30348);
	// lwz r25,30348(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30348);
	// lwz r25,30224(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30224);
	// lwz r25,30200(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30200);
	// lwz r25,30224(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30224);
	// lwz r25,30200(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30200);
	// lwz r25,30140(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30140);
	// lwz r25,30160(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30160);
	// lwz r25,30120(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30120);
	// lwz r25,30348(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30348);
	// lwz r25,30180(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30180);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21841
	ctx.r4.s64 = 21841;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x832b6508
	ctx.lr = 0x832B75A4;
	sub_832B6508(ctx, base);
	// b 0x832b7694
	goto loc_832B7694;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17476
	ctx.r4.s64 = 17476;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x832b6508
	ctx.lr = 0x832B75B8;
	sub_832B6508(ctx, base);
	// b 0x832b76cc
	goto loc_832B76CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21840
	ctx.r4.s64 = 21840;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x832b6508
	ctx.lr = 0x832B75CC;
	sub_832B6508(ctx, base);
	// b 0x832b76cc
	goto loc_832B76CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21841
	ctx.r4.s64 = 21841;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x832b6508
	ctx.lr = 0x832B75E0;
	sub_832B6508(ctx, base);
	// b 0x832b76cc
	goto loc_832B76CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22096
	ctx.r4.s64 = 22096;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x832b6508
	ctx.lr = 0x832B75F4;
	sub_832B6508(ctx, base);
	// b 0x832b76cc
	goto loc_832B76CC;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,34944
	ctx.r4.u64 = ctx.r4.u64 | 34944;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x832b6508
	ctx.lr = 0x832B760C;
	sub_832B6508(ctx, base);
	// b 0x832b76cc
	goto loc_832B76CC;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,34952
	ctx.r4.u64 = ctx.r4.u64 | 34952;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x832b6508
	ctx.lr = 0x832B7624;
	sub_832B6508(ctx, base);
	// b 0x832b76cc
	goto loc_832B76CC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f0,12452(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x832b76cc
	goto loc_832B76CC;
loc_832B768C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x832b76cc
	if (!ctx.cr6.eq) goto loc_832B76CC;
loc_832B7694:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82e01690
	ctx.lr = 0x832B769C;
	sub_82E01690(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b76c4
	if (ctx.cr6.eq) goto loc_832B76C4;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832B76B4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832b76b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832B76B4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x832b76c8
	goto loc_832B76C8;
loc_832B76C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832B76C8:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_832B76CC:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b76ec
	if (ctx.cr6.eq) goto loc_832B76EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832bf3f0
	ctx.lr = 0x832B76E0;
	sub_832BF3F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832bf3f8
	ctx.lr = 0x832B76EC;
	sub_832BF3F8(ctx, base);
loc_832B76EC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7714"))) PPC_WEAK_FUNC(sub_832B7714);
PPC_FUNC_IMPL(__imp__sub_832B7714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7718"))) PPC_WEAK_FUNC(sub_832B7718);
PPC_FUNC_IMPL(__imp__sub_832B7718) {
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
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r9,r11,31452
	ctx.r9.s64 = ctx.r11.s64 + 31452;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,644(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 644);
	// bl 0x832d6720
	ctx.lr = 0x832B774C;
	sub_832D6720(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b7764
	if (ctx.cr6.eq) goto loc_832B7764;
	// bl 0x82e01698
	ctx.lr = 0x832B7760;
	sub_82E01698(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_832B7764:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b7778
	if (ctx.cr6.eq) goto loc_832B7778;
	// bl 0x82e01698
	ctx.lr = 0x832B7774;
	sub_82E01698(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_832B7778:
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

__attribute__((alias("__imp__sub_832B7790"))) PPC_WEAK_FUNC(sub_832B7790);
PPC_FUNC_IMPL(__imp__sub_832B7790) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,269(r11)
	PPC_STORE_U8(ctx.r11.u32 + 269, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B77A4"))) PPC_WEAK_FUNC(sub_832B77A4);
PPC_FUNC_IMPL(__imp__sub_832B77A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B77A8"))) PPC_WEAK_FUNC(sub_832B77A8);
PPC_FUNC_IMPL(__imp__sub_832B77A8) {
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
	// bl 0x832b7718
	ctx.lr = 0x832B77C8;
	sub_832B7718(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832b77e0
	if (ctx.cr6.eq) goto loc_832B77E0;
	// bl 0x82e01698
	ctx.lr = 0x832B77DC;
	sub_82E01698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832B77E0:
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

__attribute__((alias("__imp__sub_832B77F8"))) PPC_WEAK_FUNC(sub_832B77F8);
PPC_FUNC_IMPL(__imp__sub_832B77F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,44100
	ctx.r10.u64 = ctx.r10.u64 | 44100;
	// lwz r11,660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// divw r3,r10,r11
	ctx.r3.s32 = ctx.r10.s32 / ctx.r11.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7814"))) PPC_WEAK_FUNC(sub_832B7814);
PPC_FUNC_IMPL(__imp__sub_832B7814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7818"))) PPC_WEAK_FUNC(sub_832B7818);
PPC_FUNC_IMPL(__imp__sub_832B7818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,44100
	ctx.r10.u64 = ctx.r10.u64 | 44100;
	// lwz r11,660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7838"))) PPC_WEAK_FUNC(sub_832B7838);
PPC_FUNC_IMPL(__imp__sub_832B7838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,2020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// lwz r3,9376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7848"))) PPC_WEAK_FUNC(sub_832B7848);
PPC_FUNC_IMPL(__imp__sub_832B7848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832B7850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8329b8e8
	ctx.lr = 0x832B785C;
	sub_8329B8E8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r31,8652
	ctx.r3.s64 = ctx.r31.s64 + 8652;
	// addi r11,r11,31496
	ctx.r11.s64 = ctx.r11.s64 + 31496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x832d0710
	ctx.lr = 0x832B7870;
	sub_832D0710(ctx, base);
	// addi r3,r31,9124
	ctx.r3.s64 = ctx.r31.s64 + 9124;
	// bl 0x832c0c88
	ctx.lr = 0x832B7878;
	sub_832C0C88(ctx, base);
	// addi r3,r31,9684
	ctx.r3.s64 = ctx.r31.s64 + 9684;
	// bl 0x832d06b8
	ctx.lr = 0x832B7880;
	sub_832D06B8(ctx, base);
	// li r10,100
	ctx.r10.s64 = 100;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r30,r31,9752
	ctx.r30.s64 = ctx.r31.s64 + 9752;
	// stw r10,9676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9676, ctx.r10.u32);
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r29,31
	ctx.r29.s64 = 31;
	// stb r11,14100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14100, ctx.r11.u8);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,9680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9680, ctx.r11.u32);
	// stw r31,2020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2020, ctx.r31.u32);
	// stw r9,9664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9664, ctx.r9.u32);
	// stw r8,9652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9652, ctx.r8.u32);
	// stw r11,8640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8640, ctx.r11.u32);
	// stw r11,9116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9116, ctx.r11.u32);
loc_832B78CC:
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x832b5d38
	ctx.lr = 0x832B78E4;
	sub_832B5D38(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832b78cc
	if (!ctx.cr6.eq) goto loc_832B78CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7900"))) PPC_WEAK_FUNC(sub_832B7900);
PPC_FUNC_IMPL(__imp__sub_832B7900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,27880
	ctx.r11.s64 = ctx.r11.s64 + 27880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7910"))) PPC_WEAK_FUNC(sub_832B7910);
PPC_FUNC_IMPL(__imp__sub_832B7910) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,9652(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9652);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7918"))) PPC_WEAK_FUNC(sub_832B7918);
PPC_FUNC_IMPL(__imp__sub_832B7918) {
	PPC_FUNC_PROLOGUE();
	// stw r4,9652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9652, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7920"))) PPC_WEAK_FUNC(sub_832B7920);
PPC_FUNC_IMPL(__imp__sub_832B7920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7924"))) PPC_WEAK_FUNC(sub_832B7924);
PPC_FUNC_IMPL(__imp__sub_832B7924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7928"))) PPC_WEAK_FUNC(sub_832B7928);
PPC_FUNC_IMPL(__imp__sub_832B7928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B792C"))) PPC_WEAK_FUNC(sub_832B792C);
PPC_FUNC_IMPL(__imp__sub_832B792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7930"))) PPC_WEAK_FUNC(sub_832B7930);
PPC_FUNC_IMPL(__imp__sub_832B7930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7934"))) PPC_WEAK_FUNC(sub_832B7934);
PPC_FUNC_IMPL(__imp__sub_832B7934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7938"))) PPC_WEAK_FUNC(sub_832B7938);
PPC_FUNC_IMPL(__imp__sub_832B7938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B793C"))) PPC_WEAK_FUNC(sub_832B793C);
PPC_FUNC_IMPL(__imp__sub_832B793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7940"))) PPC_WEAK_FUNC(sub_832B7940);
PPC_FUNC_IMPL(__imp__sub_832B7940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7944"))) PPC_WEAK_FUNC(sub_832B7944);
PPC_FUNC_IMPL(__imp__sub_832B7944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7948"))) PPC_WEAK_FUNC(sub_832B7948);
PPC_FUNC_IMPL(__imp__sub_832B7948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B794C"))) PPC_WEAK_FUNC(sub_832B794C);
PPC_FUNC_IMPL(__imp__sub_832B794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7950"))) PPC_WEAK_FUNC(sub_832B7950);
PPC_FUNC_IMPL(__imp__sub_832B7950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7954"))) PPC_WEAK_FUNC(sub_832B7954);
PPC_FUNC_IMPL(__imp__sub_832B7954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7958"))) PPC_WEAK_FUNC(sub_832B7958);
PPC_FUNC_IMPL(__imp__sub_832B7958) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,27
	ctx.r11.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r10,r5,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,300(r11)
	PPC_STORE_U8(ctx.r11.u32 + 300, ctx.r10.u8);
	// stb r5,301(r11)
	PPC_STORE_U8(ctx.r11.u32 + 301, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7970"))) PPC_WEAK_FUNC(sub_832B7970);
PPC_FUNC_IMPL(__imp__sub_832B7970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7974"))) PPC_WEAK_FUNC(sub_832B7974);
PPC_FUNC_IMPL(__imp__sub_832B7974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

