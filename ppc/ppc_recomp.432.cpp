#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832945C8"))) PPC_WEAK_FUNC(sub_832945C8);
PPC_FUNC_IMPL(__imp__sub_832945C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x832945D0;
	__savegprlr_19(ctx, base);
	// lwz r31,4352(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4352);
	// lwz r5,4360(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// lwz r7,4356(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// rlwinm r11,r31,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// lwz r9,4364(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4364);
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// ble cr6,0x832945f8
	if (!ctx.cr6.gt) goto loc_832945F8;
	// subfic r10,r5,48
	ctx.xer.ca = ctx.r5.u32 <= 48;
	ctx.r10.s64 = 48 - ctx.r5.s64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832945F8:
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r8,r11,23,9,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// li r23,1
	ctx.r23.s64 = 1;
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm. r6,r10,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// beq 0x83294650
	if (ctx.cr0.eq) goto loc_83294650;
	// lwz r30,4400(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4400);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// subfic r6,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r10.s64;
	// slw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r8.u8 & 0x3F));
	// lhax r30,r30,r29
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32));
	// and r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ctx.r11.u64;
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// and. r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8329464c
	if (!ctx.cr0.eq) goto loc_8329464C;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8329464C:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_83294650:
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83294670
	if (ctx.cr6.lt) goto loc_83294670;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83294674
	goto loc_83294674;
loc_83294670:
	// slw r5,r31,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
loc_83294674:
	// lwz r31,40(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// addi r8,r4,20
	ctx.r8.s64 = ctx.r4.s64 + 20;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,4
	ctx.r27.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r26,r30,6
	ctx.r26.u64 = ctx.r30.u64 | 6;
	// li r25,6
	ctx.r25.s64 = 6;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r22,16
	ctx.r22.s64 = 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lis r31,-1
	ctx.r31.s64 = -65536;
	// std r10,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r10.u64);
	// lfd f0,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ori r28,r31,4
	ctx.r28.u64 = ctx.r31.u64 | 4;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// stw r24,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r24.u32);
	// stw r24,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r24.u32);
	// lwz r10,4396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4396);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
loc_832946DC:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832946f4
	if (ctx.cr6.eq) goto loc_832946F4;
	// subfic r31,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r31.s64 = 32 - ctx.r11.s64;
	// srw r31,r7,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r31.u8 & 0x3F));
	// or r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 | ctx.r5.u64;
loc_832946F4:
	// rlwinm r30,r31,9,23,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r30,511
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 511, ctx.xer);
	// bgt cr6,0x83295ac8
	if (ctx.cr6.gt) goto loc_83295AC8;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,24352
	ctx.r12.s64 = ctx.r12.s64 + 24352;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// addi r12,r12,18216
	ctx.r12.s64 = ctx.r12.s64 + 18216;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
loc_83294770:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83294790
	if (ctx.cr6.lt) goto loc_83294790;
loc_8329477C:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x832946dc
	goto loc_832946DC;
loc_83294790:
	// rlwinm r5,r5,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0xFFFFFE00;
	// b 0x832946dc
	goto loc_832946DC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832947B0:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832947B4:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832947C8:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832947CC:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294770
	goto loc_83294770;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
loc_832947FC:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294800:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294814:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8329477c
	if (!ctx.cr6.lt) goto loc_8329477C;
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x832946dc
	goto loc_832946DC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
loc_83294840:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294844:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
loc_83294858:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8329485C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// b 0x83294770
	goto loc_83294770;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329488C:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294890:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832947c8
	goto loc_832947C8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832948C0:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832948C4:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294814
	goto loc_83294814;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832948F4:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832948F8:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329490C:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8329477c
	if (!ctx.cr6.lt) goto loc_8329477C;
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x832946dc
	goto loc_832946DC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294938:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8329493C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329490c
	goto loc_8329490C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329496C:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294970:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294984:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8329477c
	if (!ctx.cr6.lt) goto loc_8329477C;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x832946dc
	goto loc_832946DC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832949B0:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832949B4:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294984
	goto loc_83294984;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832949E4:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832949E8:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83294984
	goto loc_83294984;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294A18:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294A1C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x83294984
	goto loc_83294984;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294A4C:
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329485c
	goto loc_8329485C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294A6C:
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947cc
	goto loc_832947CC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294A8C:
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329485c
	goto loc_8329485C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294AAC:
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947cc
	goto loc_832947CC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294ACC:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294AD0:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83294770
	goto loc_83294770;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294B00:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294B04:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x83294770
	goto loc_83294770;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294B34:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8329477c
	if (!ctx.cr6.lt) goto loc_8329477C;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x832946dc
	goto loc_832946DC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294B64:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// b 0x83294858
	goto loc_83294858;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832947b0
	goto loc_832947B0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832947fc
	goto loc_832947FC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294840
	goto loc_83294840;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329488c
	goto loc_8329488C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832948c0
	goto loc_832948C0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832948f4
	goto loc_832948F4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294938
	goto loc_83294938;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329496c
	goto loc_8329496C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832949b0
	goto loc_832949B0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832949e4
	goto loc_832949E4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294a18
	goto loc_83294A18;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294a4c
	goto loc_83294A4C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294a6c
	goto loc_83294A6C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294a8c
	goto loc_83294A8C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294aac
	goto loc_83294AAC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294acc
	goto loc_83294ACC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294b00
	goto loc_83294B00;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294b34
	goto loc_83294B34;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294D8C:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832948f8
	goto loc_832948F8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294DAC:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329493c
	goto loc_8329493C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294DCC:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294970
	goto loc_83294970;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294DEC:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832949b4
	goto loc_832949B4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294E0C:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329485c
	goto loc_8329485C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294E2C:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947cc
	goto loc_832947CC;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294E4C:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294E50:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83294770
	goto loc_83294770;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294E80:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83294E84:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x83294770
	goto loc_83294770;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294EB4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8329477c
	if (!ctx.cr6.lt) goto loc_8329477C;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x832946dc
	goto loc_832946DC;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294d8c
	goto loc_83294D8C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294dac
	goto loc_83294DAC;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294dcc
	goto loc_83294DCC;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294dec
	goto loc_83294DEC;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294e0c
	goto loc_83294E0C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294e2c
	goto loc_83294E2C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294e4c
	goto loc_83294E4C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294e80
	goto loc_83294E80;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294eb4
	goto loc_83294EB4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294FDC:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294970
	goto loc_83294970;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83294FFC:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832949b4
	goto loc_832949B4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329501C:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329485c
	goto loc_8329485C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329503C:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947cc
	goto loc_832947CC;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329505C:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8329477c
	if (!ctx.cr6.lt) goto loc_8329477C;
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x832946dc
	goto loc_832946DC;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294fdc
	goto loc_83294FDC;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83294ffc
	goto loc_83294FFC;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329501c
	goto loc_8329501C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329503c
	goto loc_8329503C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329505c
	goto loc_8329505C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83294fdc
	goto loc_83294FDC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83294ffc
	goto loc_83294FFC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x8329501c
	goto loc_8329501C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x8329503c
	goto loc_8329503C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x8329505c
	goto loc_8329505C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x83294fdc
	goto loc_83294FDC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x83294ffc
	goto loc_83294FFC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x8329501c
	goto loc_8329501C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x8329503c
	goto loc_8329503C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x8329505c
	goto loc_8329505C;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294b64
	goto loc_83294B64;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947b4
	goto loc_832947B4;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294800
	goto loc_83294800;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294844
	goto loc_83294844;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294890
	goto loc_83294890;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832948c4
	goto loc_832948C4;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294b64
	goto loc_83294B64;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947b4
	goto loc_832947B4;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294800
	goto loc_83294800;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294844
	goto loc_83294844;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294890
	goto loc_83294890;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832948c4
	goto loc_832948C4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83294858
	goto loc_83294858;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x832947c8
	goto loc_832947C8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83294814
	goto loc_83294814;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x83294858
	goto loc_83294858;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x832947c8
	goto loc_832947C8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x83294814
	goto loc_83294814;
	// lbzu r31,11(r10)
	ea = 11 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329485c
	goto loc_8329485C;
	// lbzu r31,11(r10)
	ea = 11 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947cc
	goto loc_832947CC;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
loc_83295334:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,28(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r30,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r30.u32);
	// b 0x83294770
	goto loc_83294770;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// li r30,10
	ctx.r30.s64 = 10;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r21,r31,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r30,r21,r31
	PPC_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r30.u32);
	// b 0x83294770
	goto loc_83294770;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294ad0
	goto loc_83294AD0;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294b04
	goto loc_83294B04;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294e50
	goto loc_83294E50;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294e84
	goto loc_83294E84;
	// lbzu r31,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329485c
	goto loc_8329485C;
	// lbzu r31,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947cc
	goto loc_832947CC;
	// lbzu r31,13(r10)
	ea = 13 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329485c
	goto loc_8329485C;
	// lbzu r31,13(r10)
	ea = 13 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947cc
	goto loc_832947CC;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,12
	ctx.r30.u64 = ctx.r30.u64 | 12;
	// b 0x83295334
	goto loc_83295334;
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x83295334
	goto loc_83295334;
	// lbzu r31,14(r10)
	ea = 14 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329485c
	goto loc_8329485C;
	// lbzu r31,14(r10)
	ea = 14 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832947cc
	goto loc_832947CC;
	// lbzu r31,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832948f8
	goto loc_832948F8;
	// lbzu r31,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329493c
	goto loc_8329493C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x8329490c
	goto loc_8329490C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x8329490c
	goto loc_8329490C;
	// lbzu r31,7(r10)
	ea = 7 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832948f8
	goto loc_832948F8;
	// lbzu r31,7(r10)
	ea = 7 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329493c
	goto loc_8329493C;
	// lbzu r31,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832948f8
	goto loc_832948F8;
	// lbzu r31,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329493c
	goto loc_8329493C;
	// lbzu r31,9(r10)
	ea = 9 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294970
	goto loc_83294970;
	// lbzu r31,9(r10)
	ea = 9 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832949b4
	goto loc_832949B4;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,8
	ctx.r30.u64 = ctx.r30.u64 | 8;
loc_83295454:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,28(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r30,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r30.u32);
	// b 0x83294984
	goto loc_83294984;
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x83295454
	goto loc_83295454;
	// lbzu r31,10(r10)
	ea = 10 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294970
	goto loc_83294970;
	// lbzu r31,10(r10)
	ea = 10 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832949b4
	goto loc_832949B4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832949e8
	goto loc_832949E8;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83294a1c
	goto loc_83294A1C;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r21,20
	ctx.r21.s64 = 20;
	// rlwinm r31,r30,19,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 19) & 0xFF;
	// rlwinm r20,r30,11,26,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 11) & 0x3F;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r20,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r20.u32);
	// clrlwi. r20,r31,25
	ctx.r20.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r21,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r21.u32);
	// bne 0x832954d0
	if (!ctx.cr0.eq) goto loc_832954D0;
	// rlwinm r30,r30,27,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0xFF;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r21,28
	ctx.r21.s64 = 28;
	// or r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 | ctx.r31.u64;
	// stw r21,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r21.u32);
loc_832954D0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x832954e4
	if (!ctx.cr6.lt) goto loc_832954E4;
	// neg r31,r31
	ctx.r31.s64 = -ctx.r31.s64;
	// stw r23,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r23.u32);
	// b 0x832954e8
	goto loc_832954E8;
loc_832954E4:
	// stw r24,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r24.u32);
loc_832954E8:
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,4(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r21,8(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// neg r21,r21
	ctx.r21.s64 = -ctx.r21.s64;
	// rlwinm r21,r21,15,0,16
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 15) & 0xFFFF8000;
	// or r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 | ctx.r20.u64;
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r21,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8329477c
	if (!ctx.cr6.lt) goto loc_8329477C;
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
	// b 0x832946dc
	goto loc_832946DC;
	// li r30,11
	ctx.r30.s64 = 11;
	// rlwinm r31,r31,11,22,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0x3FF;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// rlwinm r30,r31,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// lwz r21,4372(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4372);
	// lhax r30,r30,r21
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r21.u32));
	// clrlwi r21,r30,24
	ctx.r21.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r30,r30,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stw r21,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r21.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83295594
	if (ctx.cr6.lt) goto loc_83295594;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83295598
	goto loc_83295598;
loc_83295594:
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
loc_83295598:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,4(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r20,8(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// neg r20,r20
	ctx.r20.s64 = -ctx.r20.s64;
	// rlwinm r20,r20,15,0,16
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 15) & 0xFFFF8000;
	// or r21,r20,r21
	ctx.r21.u64 = ctx.r20.u64 | ctx.r21.u64;
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r21,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// b 0x832946dc
	goto loc_832946DC;
	// li r30,13
	ctx.r30.s64 = 13;
	// rlwinm r31,r31,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0xFFF;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// rlwinm r21,r31,0,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4376(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4376);
	// lhax r30,r21,r30
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r21.u32 + ctx.r30.u32));
	// b 0x83295654
	goto loc_83295654;
	// li r30,14
	ctx.r30.s64 = 14;
	// rlwinm r31,r31,14,19,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1FFF;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r21,4380(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4380);
	// b 0x8329564c
	goto loc_8329564C;
	// rlwinm. r31,r31,9,0,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFFFFFE00;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x83295624
	if (!ctx.cr0.lt) goto loc_83295624;
	// li r30,15
	ctx.r30.s64 = 15;
	// rlwinm r31,r31,6,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1F;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r21,4384(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4384);
	// b 0x8329564c
	goto loc_8329564C;
loc_83295624:
	// rlwinm. r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8329563c
	if (!ctx.cr0.lt) goto loc_8329563C;
	// stw r22,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r22.u32);
	// rlwinm r31,r31,6,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1F;
	// lwz r21,4388(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// b 0x8329564c
	goto loc_8329564C;
loc_8329563C:
	// li r30,17
	ctx.r30.s64 = 17;
	// rlwinm r31,r31,7,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x1F;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r21,4392(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4392);
loc_8329564C:
	// rlwinm r30,r31,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lhax r30,r30,r21
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r21.u32));
loc_83295654:
	// clrlwi r21,r30,24
	ctx.r21.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r30,r30,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stw r21,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r21.u32);
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83295690
	if (ctx.cr6.lt) goto loc_83295690;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83295694
	goto loc_83295694;
loc_83295690:
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
loc_83295694:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r21,4(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// lwz r20,28(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r30,r30,15,0,16
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// or r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 | ctx.r21.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r30,r31,r20
	PPC_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r30.u32);
	// b 0x832946dc
	goto loc_832946DC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// b 0x83295740
	goto loc_83295740;
loc_83295708:
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83295ac8
	goto loc_83295AC8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83295728:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
loc_8329572C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83295740:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83295708
	if (ctx.cr6.lt) goto loc_83295708;
	// b 0x83295ab0
	goto loc_83295AB0;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83295830
	goto loc_83295830;
loc_8329576C:
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x83295ac8
	goto loc_83295AC8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329578C:
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
loc_83295790:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83295aa4
	goto loc_83295AA4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832957C0:
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// b 0x83295a90
	goto loc_83295A90;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
loc_832957E4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83295740
	goto loc_83295740;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x83295728
	goto loc_83295728;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83295830:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8329576c
	if (ctx.cr6.lt) goto loc_8329576C;
	// b 0x83295ab0
	goto loc_83295AB0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329578c
	goto loc_8329578C;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x832957c0
	goto loc_832957C0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83295ab0
	if (!ctx.cr6.lt) goto loc_83295AB0;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x83295ac8
	goto loc_83295AC8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832958A4:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// b 0x83295790
	goto loc_83295790;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832958C4:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// b 0x83295a90
	goto loc_83295A90;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83295940
	goto loc_83295940;
loc_832958E8:
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x83295ac8
	goto loc_83295AC8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832958a4
	goto loc_832958A4;
	// lbzu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x832958c4
	goto loc_832958C4;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83295940:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x832958e8
	if (ctx.cr6.lt) goto loc_832958E8;
	// b 0x83295ab0
	goto loc_83295AB0;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x8329598c
	goto loc_8329598C;
loc_8329596C:
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x83295ac8
	goto loc_83295AC8;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_8329598C:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8329596c
	if (ctx.cr6.lt) goto loc_8329596C;
	// b 0x83295ab0
	goto loc_83295AB0;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// b 0x8329598c
	goto loc_8329598C;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u32);
	// b 0x8329598c
	goto loc_8329598C;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// b 0x832957e4
	goto loc_832957E4;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// b 0x8329572c
	goto loc_8329572C;
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// b 0x832957e4
	goto loc_832957E4;
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// b 0x8329572c
	goto loc_8329572C;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r26.u32);
	// b 0x83295740
	goto loc_83295740;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r25.u32);
	// b 0x83295740
	goto loc_83295740;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// b 0x83295790
	goto loc_83295790;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// b 0x83295a90
	goto loc_83295A90;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// b 0x83295aa4
	goto loc_83295AA4;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u32);
	// b 0x83295aa4
	goto loc_83295AA4;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// b 0x83295790
	goto loc_83295790;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// b 0x83295a90
	goto loc_83295A90;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// b 0x83295790
	goto loc_83295790;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
loc_83295A90:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83295AA4:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83295ac4
	if (ctx.cr6.lt) goto loc_83295AC4;
loc_83295AB0:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83295ac8
	goto loc_83295AC8;
loc_83295AC4:
	// rlwinm r5,r5,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0xFFFFFE00;
loc_83295AC8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x83295adc
	if (ctx.cr6.eq) goto loc_83295ADC;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
loc_83295ADC:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r20,36
	ctx.r20.s64 = 36;
	// stw r5,4352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4352, ctx.r5.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r7,4356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4356, ctx.r7.u32);
	// li r23,-16
	ctx.r23.s64 = -16;
	// stw r11,4360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4360, ctx.r11.u32);
	// addi r21,r10,24336
	ctx.r21.s64 = ctx.r10.s64 + 24336;
	// stw r9,4364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4364, ctx.r9.u32);
	// li r19,-32
	ctx.r19.s64 = -32;
	// li r24,32
	ctx.r24.s64 = 32;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// li r25,48
	ctx.r25.s64 = 48;
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// li r26,64
	ctx.r26.s64 = 64;
	// li r27,80
	ctx.r27.s64 = 80;
	// lvlx v7,r21,r19
	temp.u32 = ctx.r21.u32 + ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r28,96
	ctx.r28.s64 = 96;
	// li r29,112
	ctx.r29.s64 = 112;
	// li r30,128
	ctx.r30.s64 = 128;
	// li r31,144
	ctx.r31.s64 = 144;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r6,176
	ctx.r6.s64 = 176;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r9,208
	ctx.r9.s64 = 208;
	// li r10,224
	ctx.r10.s64 = 224;
	// li r11,240
	ctx.r11.s64 = 240;
	// lwz r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lvlx v6,r21,r23
	temp.u32 = ctx.r21.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r4,r20
	temp.u32 = ctx.r4.u32 + ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvlx128 v62,r22,r4
	temp.u32 = ctx.r22.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v46,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvlx128 v61,r24,r4
	temp.u32 = ctx.r24.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r25,r4
	temp.u32 = ctx.r25.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r26,r4
	temp.u32 = ctx.r26.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r27,r4
	temp.u32 = ctx.r27.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r28,r4
	temp.u32 = ctx.r28.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r29,r4
	temp.u32 = ctx.r29.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r30,r4
	temp.u32 = ctx.r30.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v50,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v45,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v12,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v43,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vor128 v47,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vperm128 v11,v62,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvlx128 v44,r22,r3
	temp.u32 = ctx.r22.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v63,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v10,v61,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vupkhsb128 v62,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16))));
	// vupklsb128 v61,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// vperm128 v9,v60,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v8,v59,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vperm128 v5,v58,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v60,v59,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v61,v61,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vperm128 v4,v57,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v56,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v2,v55,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v59,v57,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v1,v54,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v31,v53,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v30,v52,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v29,v51,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v28,v50,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v27,v49,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v58,v55,v54,v6
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvlx128 v55,r24,r3
	temp.u32 = ctx.r24.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v7,v48,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmulfp128 v62,v62,v45
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vupkhsb128 v57,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// vperm128 v56,v53,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmulfp128 v61,v61,v44
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vupklsb128 v63,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s16)));
	// vmulfp128 v62,v62,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vperm128 v53,v51,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v57,v57,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vperm128 v49,v49,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vupkhsb128 v52,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// lvlx128 v54,r25,r3
	temp.u32 = ctx.r25.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v63,v63,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vupklsb128 v60,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vupkhsb128 v45,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v59.s16), simde_mm_load_si128((simde__m128i*)ctx.v59.s16))));
	// lvlx128 v50,r27,r3
	temp.u32 = ctx.r27.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupklsb128 v59,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s16)));
	// lvlx128 v51,r26,r3
	temp.u32 = ctx.r26.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v52,v52,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vupkhsb128 v43,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16))));
	// vcsxwfp128 v60,v60,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// lvlx128 v42,r29,r3
	temp.u32 = ctx.r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v45,v45,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// lvlx128 v44,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v59,v59,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// lvlx128 v41,r30,r3
	temp.u32 = ctx.r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v43,v43,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vor128 v40,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmulfp128 v61,v61,v46
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v46.f32)));
	// lvlx v7,0,r21
	temp.u32 = ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v6,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// lvlx128 v48,r5,r3
	temp.u32 = ctx.r5.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v57,v57,v55
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v55.f32)));
	// lvlx128 v55,r31,r3
	temp.u32 = ctx.r31.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v39,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v63,v63,v54
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvlx128 v38,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v37,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v52,v52,v51
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v51.f32)));
	// lvlx128 v36,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v60,v60,v50
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmulfp128 v51,v45,v44
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vcfpsxws128 v26,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// vsubsws v6,v6,v0
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v61,v59,v42
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v62,v57,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v59,v43,v41
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v57,v52,v46
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v60,v60,v46
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmaxsw v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmulfp128 v52,v51,v46
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v26,v26,v0
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v6,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcfpsxws128 v25,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v25.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v62,v61,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vor v26,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfpsxws128 v24,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vsubsws v12,v6,v12
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v61,v59,v46
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vupkhsb128 v59,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// vcfpsxws128 v23,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v23.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// vmaxsw v26,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// vcfpsxws128 v22,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v22.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcsxwfp128 v63,v12,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vcfpsxws128 v21,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v21.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v52.f32)));
	// vxor v26,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubsws v25,v25,v0
	temp.s64 = int64_t(ctx.v25.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v11,v26,v11
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v6,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v60,v11,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vperm128 v63,v47,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcfpsxws128 v11,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vmaxsw v12,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vupkhsb128 v62,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16))));
	// vsubsws v6,v23,v0
	temp.s64 = int64_t(ctx.v23.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vupklsb128 v63,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// vsubsws v12,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v24,v0
	temp.s64 = int64_t(ctx.v24.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvlx128 v60,r4,r22
	ea = ctx.r4.u32 + ctx.r22.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// vupklsb128 v60,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s16)));
	// vcsxwfp128 v63,v63,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vupklsb128 v58,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// vcsxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vupkhsb128 v57,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v49.s16), simde_mm_load_si128((simde__m128i*)ctx.v49.s16))));
	// vcsxwfp128 v60,v60,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vsubsws v26,v22,v0
	temp.s64 = int64_t(ctx.v22.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v59,v59,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfpsxws128 v24,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// vsubsws v25,v21,v0
	temp.s64 = int64_t(ctx.v21.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v58,v58,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vor v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v57,v57,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vor v26,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v61,v12,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vsubsws v12,v11,v0
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmaxsw v11,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vor v25,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v6,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// vor v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v63,v63,v55
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vxor v11,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmulfp128 v62,v62,v48
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vmaxsw v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmulfp128 v60,v60,v39
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmaxsw v26,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	// vmulfp128 v59,v59,v38
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmaxsw v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vsubsws v25,v24,v0
	temp.s64 = int64_t(ctx.v24.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v58,v58,v37
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vxor v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmulfp128 v57,v57,v54
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vsubsws v11,v11,v8
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v12,v12,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// stvlx128 v61,r4,r24
	ea = ctx.r4.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vor v8,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubsws v10,v10,v9
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v6,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vcsxwfp128 v56,v11,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vsubsws v12,v12,v3
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v3.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v3.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v3.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v3.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmaxsw v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmulfp128 v62,v62,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vxor v26,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmulfp128 v60,v60,v46
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v9,v6,v5
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v5.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v5.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v5.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v5.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v59,v59,v46
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcsxwfp128 v61,v10,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmulfp128 v58,v58,v46
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v10,v26,v4
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v4.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v4.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v4.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v4.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v57,v57,v46
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcsxwfp128 v53,v12,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vxor v12,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcsxwfp128 v55,v9,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vcsxwfp128 v54,v10,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vsubsws v12,v12,v2
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v2.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v2.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v2.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v2.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcfpsxws128 v11,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v10,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vupklsb128 v62,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s16)));
	// vcfpsxws128 v9,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcfpsxws128 v8,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// vcsxwfp128 v63,v12,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// stvlx128 v61,r4,r25
	ea = ctx.r4.u32 + ctx.r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vcfpsxws128 v12,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// stvlx128 v56,r4,r26
	ea = ctx.r4.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// vcfpsxws128 v6,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// stvlx128 v55,r4,r27
	ea = ctx.r4.u32 + ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v54,r4,r28
	ea = ctx.r4.u32 + ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v53,r4,r29
	ea = ctx.r4.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// vsubsws v11,v11,v0
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v10,v0
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v9,v9,v0
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v8,v8,v0
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvlx128 v63,r4,r30
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v63,v62,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsubsws v12,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v6,v6,v0
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v9,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v63,v63,v36
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vor v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmaxsw v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmaxsw v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmaxsw v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmaxsw v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vxor v11,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vxor v10,v10,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vxor v12,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vxor v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vxor v8,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vsubsws v11,v11,v1
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v1.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v1.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v1.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v1.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v12,v12,v28
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v28.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v28.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v28.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v28.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v10,v31
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v31.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v31.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v31.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v31.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v9,v9,v30
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v30.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v30.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v30.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v30.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v8,v8,v29
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v29.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v29.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v29.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v29.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v62,v11,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vcsxwfp128 v58,v12,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v61,v10,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vor128 v7,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vcsxwfp128 v60,v9,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vcsxwfp128 v59,v8,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmaxsw v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vcfpsxws128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vxor v6,v6,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)));
	// stvlx128 v62,r4,r31
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vsubsws v11,v6,v27
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v27.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v27.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v27.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v27.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvlx128 v61,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v60,r4,r6
	ea = ctx.r4.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v59,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v58,r4,r9
	ea = ctx.r4.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// vcsxwfp128 v57,v11,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vsubsws v12,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvlx128 v57,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// vxor v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubsws v0,v0,v7
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v63,v0,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvlx128 v63,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83295F5C"))) PPC_WEAK_FUNC(sub_83295F5C);
PPC_FUNC_IMPL(__imp__sub_83295F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295F60"))) PPC_WEAK_FUNC(sub_83295F60);
PPC_FUNC_IMPL(__imp__sub_83295F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0184
	ctx.lr = 0x83295F68;
	__savegprlr_19(ctx, base);
	// lwz r5,4352(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4352);
	// lwz r8,4360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// lwz r7,4356(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r9,4364(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4364);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83295f90
	if (ctx.cr6.eq) goto loc_83295F90;
	// subfic r11,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r8.s64;
	// srw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
loc_83295F90:
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r6,r11,10,22,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// lbzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm. r6,r10,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// beq 0x83295fc8
	if (ctx.cr0.eq) goto loc_83295FC8;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// subfic r31,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r31.s64 = 31 - ctx.r6.s64;
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// sraw r6,r11,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r6.s64 = ctx.r11.s32 >> temp.u32;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_83295FC8:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83295fe8
	if (ctx.cr6.lt) goto loc_83295FE8;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83295fec
	goto loc_83295FEC;
loc_83295FE8:
	// slw r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
loc_83295FEC:
	// lwz r31,40(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// addi r8,r4,20
	ctx.r8.s64 = ctx.r4.s64 + 20;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,4
	ctx.r27.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r26,r30,6
	ctx.r26.u64 = ctx.r30.u64 | 6;
	// li r25,6
	ctx.r25.s64 = 6;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r23,16
	ctx.r23.s64 = 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lis r31,-1
	ctx.r31.s64 = -65536;
	// std r10,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r10.u64);
	// lfd f0,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ori r28,r31,4
	ctx.r28.u64 = ctx.r31.u64 | 4;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// stw r24,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r24.u32);
	// stw r24,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r24.u32);
	// lwz r10,4396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4396);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
loc_83296054:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329606c
	if (ctx.cr6.eq) goto loc_8329606C;
	// subfic r31,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r31.s64 = 32 - ctx.r11.s64;
	// srw r31,r7,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r31.u8 & 0x3F));
	// or r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 | ctx.r5.u64;
loc_8329606C:
	// rlwinm r30,r31,9,23,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r30,511
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 511, ctx.xer);
	// bgt cr6,0x83297444
	if (ctx.cr6.gt) goto loc_83297444;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,25376
	ctx.r12.s64 = ctx.r12.s64 + 25376;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// addi r12,r12,24736
	ctx.r12.s64 = ctx.r12.s64 + 24736;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
loc_832960E8:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83296108
	if (ctx.cr6.lt) goto loc_83296108;
loc_832960F4:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83296054
	goto loc_83296054;
loc_83296108:
	// rlwinm r5,r5,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0xFFFFFE00;
	// b 0x83296054
	goto loc_83296054;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296128:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8329612C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296140:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83296144:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832960e8
	goto loc_832960E8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
loc_83296174:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83296178:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329618C:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x832960f4
	if (!ctx.cr6.lt) goto loc_832960F4;
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x83296054
	goto loc_83296054;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
loc_832961B8:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832961BC:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
loc_832961D0:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832961D4:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// b 0x832960e8
	goto loc_832960E8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296204:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83296208:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296140
	goto loc_83296140;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296238:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8329623C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329618c
	goto loc_8329618C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329626C:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83296270:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296284:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x832960f4
	if (!ctx.cr6.lt) goto loc_832960F4;
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x83296054
	goto loc_83296054;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832962B0:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832962B4:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296284
	goto loc_83296284;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832962E4:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832962E8:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832962FC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x832960f4
	if (!ctx.cr6.lt) goto loc_832960F4;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83296054
	goto loc_83296054;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296328:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8329632C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832962fc
	goto loc_832962FC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329635C:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83296360:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x832962fc
	goto loc_832962FC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296390:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83296394:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x832962fc
	goto loc_832962FC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832963C4:
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961d4
	goto loc_832961D4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832963E4:
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296144
	goto loc_83296144;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296404:
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961d4
	goto loc_832961D4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296424:
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296144
	goto loc_83296144;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296444:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83296448:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x832960e8
	goto loc_832960E8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296478:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8329647C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x832960e8
	goto loc_832960E8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832964AC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x832960f4
	if (!ctx.cr6.lt) goto loc_832960F4;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x83296054
	goto loc_83296054;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832964DC:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// b 0x832961d0
	goto loc_832961D0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296128
	goto loc_83296128;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296174
	goto loc_83296174;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832961b8
	goto loc_832961B8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296204
	goto loc_83296204;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296238
	goto loc_83296238;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329626c
	goto loc_8329626C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832962b0
	goto loc_832962B0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832962e4
	goto loc_832962E4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296328
	goto loc_83296328;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329635c
	goto loc_8329635C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296390
	goto loc_83296390;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832963c4
	goto loc_832963C4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832963e4
	goto loc_832963E4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296404
	goto loc_83296404;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296424
	goto loc_83296424;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296444
	goto loc_83296444;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296478
	goto loc_83296478;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832964ac
	goto loc_832964AC;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296704:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296270
	goto loc_83296270;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296724:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832962b4
	goto loc_832962B4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296744:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832962e8
	goto loc_832962E8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296764:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329632c
	goto loc_8329632C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296784:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961d4
	goto loc_832961D4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832967A4:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296144
	goto loc_83296144;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832967C4:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832967C8:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x832960e8
	goto loc_832960E8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832967F8:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_832967FC:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x832960e8
	goto loc_832960E8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329682C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x832960f4
	if (!ctx.cr6.lt) goto loc_832960F4;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x83296054
	goto loc_83296054;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296704
	goto loc_83296704;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296724
	goto loc_83296724;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296744
	goto loc_83296744;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296764
	goto loc_83296764;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296784
	goto loc_83296784;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832967a4
	goto loc_832967A4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832967c4
	goto loc_832967C4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832967f8
	goto loc_832967F8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329682c
	goto loc_8329682C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296954:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832962e8
	goto loc_832962E8;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296974:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329632c
	goto loc_8329632C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83296994:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961d4
	goto loc_832961D4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832969B4:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296144
	goto loc_83296144;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832969D4:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x832960f4
	if (!ctx.cr6.lt) goto loc_832960F4;
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x83296054
	goto loc_83296054;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296954
	goto loc_83296954;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296974
	goto loc_83296974;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83296994
	goto loc_83296994;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832969b4
	goto loc_832969B4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832969d4
	goto loc_832969D4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83296954
	goto loc_83296954;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83296974
	goto loc_83296974;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83296994
	goto loc_83296994;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x832969b4
	goto loc_832969B4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x832969d4
	goto loc_832969D4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x83296954
	goto loc_83296954;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x83296974
	goto loc_83296974;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x83296994
	goto loc_83296994;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x832969b4
	goto loc_832969B4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x832969d4
	goto loc_832969D4;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832964dc
	goto loc_832964DC;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329612c
	goto loc_8329612C;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296178
	goto loc_83296178;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961bc
	goto loc_832961BC;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296208
	goto loc_83296208;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329623c
	goto loc_8329623C;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832964dc
	goto loc_832964DC;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329612c
	goto loc_8329612C;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296178
	goto loc_83296178;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961bc
	goto loc_832961BC;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296208
	goto loc_83296208;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329623c
	goto loc_8329623C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x832961d0
	goto loc_832961D0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83296140
	goto loc_83296140;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x8329618c
	goto loc_8329618C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x832961d0
	goto loc_832961D0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x83296140
	goto loc_83296140;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x8329618c
	goto loc_8329618C;
	// lbzu r31,11(r10)
	ea = 11 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961d4
	goto loc_832961D4;
	// lbzu r31,11(r10)
	ea = 11 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296144
	goto loc_83296144;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
loc_83296CAC:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,28(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r30,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r30.u32);
	// b 0x832960e8
	goto loc_832960E8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// li r30,10
	ctx.r30.s64 = 10;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r22,r31,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r30,r22,r31
	PPC_STORE_U32(ctx.r22.u32 + ctx.r31.u32, ctx.r30.u32);
	// b 0x832960e8
	goto loc_832960E8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296448
	goto loc_83296448;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329647c
	goto loc_8329647C;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832967c8
	goto loc_832967C8;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832967fc
	goto loc_832967FC;
	// lbzu r31,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961d4
	goto loc_832961D4;
	// lbzu r31,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296144
	goto loc_83296144;
	// lbzu r31,13(r10)
	ea = 13 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961d4
	goto loc_832961D4;
	// lbzu r31,13(r10)
	ea = 13 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296144
	goto loc_83296144;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,12
	ctx.r30.u64 = ctx.r30.u64 | 12;
	// b 0x83296cac
	goto loc_83296CAC;
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x83296cac
	goto loc_83296CAC;
	// lbzu r31,14(r10)
	ea = 14 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832961d4
	goto loc_832961D4;
	// lbzu r31,14(r10)
	ea = 14 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296144
	goto loc_83296144;
	// lbzu r31,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296270
	goto loc_83296270;
	// lbzu r31,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832962b4
	goto loc_832962B4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83296284
	goto loc_83296284;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x83296284
	goto loc_83296284;
	// lbzu r31,7(r10)
	ea = 7 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296270
	goto loc_83296270;
	// lbzu r31,7(r10)
	ea = 7 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832962b4
	goto loc_832962B4;
	// lbzu r31,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296270
	goto loc_83296270;
	// lbzu r31,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832962b4
	goto loc_832962B4;
	// lbzu r31,9(r10)
	ea = 9 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832962e8
	goto loc_832962E8;
	// lbzu r31,9(r10)
	ea = 9 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329632c
	goto loc_8329632C;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,8
	ctx.r30.u64 = ctx.r30.u64 | 8;
loc_83296DCC:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,28(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r30,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r30.u32);
	// b 0x832962fc
	goto loc_832962FC;
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x83296dcc
	goto loc_83296DCC;
	// lbzu r31,10(r10)
	ea = 10 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x832962e8
	goto loc_832962E8;
	// lbzu r31,10(r10)
	ea = 10 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329632c
	goto loc_8329632C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296360
	goto loc_83296360;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83296394
	goto loc_83296394;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r22,20
	ctx.r22.s64 = 20;
	// rlwinm r31,r30,19,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 19) & 0xFF;
	// rlwinm r21,r30,11,26,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 11) & 0x3F;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r21,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r21.u32);
	// clrlwi. r21,r31,25
	ctx.r21.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r22,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r22.u32);
	// bne 0x83296e48
	if (!ctx.cr0.eq) goto loc_83296E48;
	// rlwinm r30,r30,27,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0xFF;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r22,28
	ctx.r22.s64 = 28;
	// or r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 | ctx.r31.u64;
	// stw r22,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r22.u32);
loc_83296E48:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x83296e60
	if (!ctx.cr6.lt) goto loc_83296E60;
	// li r30,1
	ctx.r30.s64 = 1;
	// neg r31,r31
	ctx.r31.s64 = -ctx.r31.s64;
	// stw r30,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r30.u32);
	// b 0x83296e64
	goto loc_83296E64;
loc_83296E60:
	// stw r24,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r24.u32);
loc_83296E64:
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,4(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r22,8(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// neg r22,r22
	ctx.r22.s64 = -ctx.r22.s64;
	// rlwinm r22,r22,15,0,16
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 15) & 0xFFFF8000;
	// or r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 | ctx.r21.u64;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r22,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r22.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x832960f4
	if (!ctx.cr6.lt) goto loc_832960F4;
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
	// b 0x83296054
	goto loc_83296054;
	// li r30,11
	ctx.r30.s64 = 11;
	// rlwinm r31,r31,11,22,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0x3FF;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// rlwinm r30,r31,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// lwz r22,4372(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4372);
	// lhax r30,r30,r22
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r22.u32));
	// clrlwi r22,r30,24
	ctx.r22.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r30,r30,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stw r22,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r22.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83296f10
	if (ctx.cr6.lt) goto loc_83296F10;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83296f14
	goto loc_83296F14;
loc_83296F10:
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
loc_83296F14:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,4(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r21,8(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// neg r21,r21
	ctx.r21.s64 = -ctx.r21.s64;
	// rlwinm r21,r21,15,0,16
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 15) & 0xFFFF8000;
	// or r22,r21,r22
	ctx.r22.u64 = ctx.r21.u64 | ctx.r22.u64;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r22,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r22.u32);
	// b 0x83296054
	goto loc_83296054;
	// li r30,13
	ctx.r30.s64 = 13;
	// rlwinm r31,r31,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0xFFF;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// rlwinm r22,r31,0,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4376(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4376);
	// lhax r30,r22,r30
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r22.u32 + ctx.r30.u32));
	// b 0x83296fd0
	goto loc_83296FD0;
	// li r30,14
	ctx.r30.s64 = 14;
	// rlwinm r31,r31,14,19,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1FFF;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r22,4380(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4380);
	// b 0x83296fc8
	goto loc_83296FC8;
	// rlwinm. r31,r31,9,0,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFFFFFE00;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x83296fa0
	if (!ctx.cr0.lt) goto loc_83296FA0;
	// li r30,15
	ctx.r30.s64 = 15;
	// rlwinm r31,r31,6,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1F;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r22,4384(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4384);
	// b 0x83296fc8
	goto loc_83296FC8;
loc_83296FA0:
	// rlwinm. r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x83296fb8
	if (!ctx.cr0.lt) goto loc_83296FB8;
	// stw r23,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r23.u32);
	// rlwinm r31,r31,6,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1F;
	// lwz r22,4388(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// b 0x83296fc8
	goto loc_83296FC8;
loc_83296FB8:
	// li r30,17
	ctx.r30.s64 = 17;
	// rlwinm r31,r31,7,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x1F;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r22,4392(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4392);
loc_83296FC8:
	// rlwinm r30,r31,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lhax r30,r30,r22
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r22.u32));
loc_83296FD0:
	// clrlwi r22,r30,24
	ctx.r22.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r30,r30,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stw r22,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r22.u32);
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8329700c
	if (ctx.cr6.lt) goto loc_8329700C;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83297010
	goto loc_83297010;
loc_8329700C:
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
loc_83297010:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r22,4(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// lwz r21,28(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r30,r30,15,0,16
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFFFF8000;
	// or r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 | ctx.r22.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r30,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r30.u32);
	// b 0x83296054
	goto loc_83296054;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// b 0x832970bc
	goto loc_832970BC;
loc_83297084:
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83297444
	goto loc_83297444;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832970A4:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
loc_832970A8:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_832970BC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83297084
	if (ctx.cr6.lt) goto loc_83297084;
	// b 0x8329742c
	goto loc_8329742C;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x832971ac
	goto loc_832971AC;
loc_832970E8:
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x83297444
	goto loc_83297444;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297108:
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
loc_8329710C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83297420
	goto loc_83297420;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329713C:
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// b 0x8329740c
	goto loc_8329740C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
loc_83297160:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x832970bc
	goto loc_832970BC;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x832970a4
	goto loc_832970A4;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_832971AC:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x832970e8
	if (ctx.cr6.lt) goto loc_832970E8;
	// b 0x8329742c
	goto loc_8329742C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297108
	goto loc_83297108;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x8329713c
	goto loc_8329713C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8329742c
	if (!ctx.cr6.lt) goto loc_8329742C;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x83297444
	goto loc_83297444;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297220:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// b 0x8329710c
	goto loc_8329710C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297240:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// b 0x8329740c
	goto loc_8329740C;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x832972bc
	goto loc_832972BC;
loc_83297264:
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x83297444
	goto loc_83297444;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297220
	goto loc_83297220;
	// lbzu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x83297240
	goto loc_83297240;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_832972BC:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83297264
	if (ctx.cr6.lt) goto loc_83297264;
	// b 0x8329742c
	goto loc_8329742C;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83297308
	goto loc_83297308;
loc_832972E8:
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x83297444
	goto loc_83297444;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83297308:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x832972e8
	if (ctx.cr6.lt) goto loc_832972E8;
	// b 0x8329742c
	goto loc_8329742C;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// b 0x83297308
	goto loc_83297308;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u32);
	// b 0x83297308
	goto loc_83297308;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// b 0x83297160
	goto loc_83297160;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// b 0x832970a8
	goto loc_832970A8;
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// b 0x83297160
	goto loc_83297160;
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// b 0x832970a8
	goto loc_832970A8;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r26.u32);
	// b 0x832970bc
	goto loc_832970BC;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r25.u32);
	// b 0x832970bc
	goto loc_832970BC;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// b 0x8329710c
	goto loc_8329710C;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// b 0x8329740c
	goto loc_8329740C;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// b 0x83297420
	goto loc_83297420;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r27,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u32);
	// b 0x83297420
	goto loc_83297420;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// b 0x8329710c
	goto loc_8329710C;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// b 0x8329740c
	goto loc_8329740C;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// b 0x8329710c
	goto loc_8329710C;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
loc_8329740C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83297420:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83297440
	if (ctx.cr6.lt) goto loc_83297440;
loc_8329742C:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83297444
	goto loc_83297444;
loc_83297440:
	// rlwinm r5,r5,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0xFFFFFE00;
loc_83297444:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x83297458
	if (ctx.cr6.eq) goto loc_83297458;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
loc_83297458:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r20,36
	ctx.r20.s64 = 36;
	// stw r5,4352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4352, ctx.r5.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r7,4356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4356, ctx.r7.u32);
	// li r22,-16
	ctx.r22.s64 = -16;
	// stw r11,4360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4360, ctx.r11.u32);
	// addi r21,r10,24336
	ctx.r21.s64 = ctx.r10.s64 + 24336;
	// stw r9,4364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4364, ctx.r9.u32);
	// li r19,-32
	ctx.r19.s64 = -32;
	// li r24,32
	ctx.r24.s64 = 32;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// li r25,48
	ctx.r25.s64 = 48;
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// li r26,64
	ctx.r26.s64 = 64;
	// li r27,80
	ctx.r27.s64 = 80;
	// lvlx v7,r21,r19
	temp.u32 = ctx.r21.u32 + ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r28,96
	ctx.r28.s64 = 96;
	// li r29,112
	ctx.r29.s64 = 112;
	// li r30,128
	ctx.r30.s64 = 128;
	// li r31,144
	ctx.r31.s64 = 144;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r6,176
	ctx.r6.s64 = 176;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r9,208
	ctx.r9.s64 = 208;
	// li r10,224
	ctx.r10.s64 = 224;
	// li r11,240
	ctx.r11.s64 = 240;
	// lwz r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lvlx v6,r21,r22
	temp.u32 = ctx.r21.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r4,r20
	temp.u32 = ctx.r4.u32 + ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvlx128 v62,r23,r4
	temp.u32 = ctx.r23.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v46,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvlx128 v61,r24,r4
	temp.u32 = ctx.r24.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r25,r4
	temp.u32 = ctx.r25.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r26,r4
	temp.u32 = ctx.r26.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r27,r4
	temp.u32 = ctx.r27.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r28,r4
	temp.u32 = ctx.r28.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r29,r4
	temp.u32 = ctx.r29.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r30,r4
	temp.u32 = ctx.r30.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v50,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v45,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v12,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v43,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vor128 v47,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vperm128 v11,v62,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvlx128 v44,r23,r3
	temp.u32 = ctx.r23.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v63,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v10,v61,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vupkhsb128 v62,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16))));
	// vupklsb128 v61,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// vperm128 v9,v60,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v8,v59,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vperm128 v5,v58,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v60,v59,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v61,v61,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vperm128 v4,v57,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v56,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v2,v55,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v59,v57,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v1,v54,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v31,v53,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v30,v52,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v29,v51,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v28,v50,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v27,v49,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v58,v55,v54,v6
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvlx128 v55,r24,r3
	temp.u32 = ctx.r24.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v7,v48,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmulfp128 v62,v62,v45
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vupkhsb128 v57,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// vperm128 v56,v53,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmulfp128 v61,v61,v44
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vupklsb128 v63,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s16)));
	// vmulfp128 v62,v62,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vperm128 v53,v51,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v57,v57,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vperm128 v49,v49,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vupkhsb128 v52,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// lvlx128 v54,r25,r3
	temp.u32 = ctx.r25.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v63,v63,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vupklsb128 v60,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vupkhsb128 v45,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v59.s16), simde_mm_load_si128((simde__m128i*)ctx.v59.s16))));
	// lvlx128 v50,r27,r3
	temp.u32 = ctx.r27.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupklsb128 v59,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s16)));
	// lvlx128 v51,r26,r3
	temp.u32 = ctx.r26.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v52,v52,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vupkhsb128 v43,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16))));
	// vcsxwfp128 v60,v60,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// lvlx128 v42,r29,r3
	temp.u32 = ctx.r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v45,v45,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// lvlx128 v44,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v59,v59,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// lvlx128 v41,r30,r3
	temp.u32 = ctx.r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v43,v43,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vor128 v40,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmulfp128 v61,v61,v46
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v46.f32)));
	// lvlx v7,0,r21
	temp.u32 = ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v6,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// lvlx128 v48,r5,r3
	temp.u32 = ctx.r5.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v57,v57,v55
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v55.f32)));
	// lvlx128 v55,r31,r3
	temp.u32 = ctx.r31.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v39,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v63,v63,v54
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvlx128 v38,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v37,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v52,v52,v51
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v51.f32)));
	// lvlx128 v36,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v60,v60,v50
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmulfp128 v51,v45,v44
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vcfpsxws128 v26,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// vsubsws v6,v6,v0
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v61,v59,v42
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v62,v57,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v59,v43,v41
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v57,v52,v46
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v60,v60,v46
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmaxsw v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmulfp128 v52,v51,v46
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v26,v26,v0
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v6,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcfpsxws128 v25,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v25.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v62,v61,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vor v26,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfpsxws128 v24,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vsubsws v12,v6,v12
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v61,v59,v46
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vupkhsb128 v59,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// vcfpsxws128 v23,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v23.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// vmaxsw v26,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// vcfpsxws128 v22,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v22.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcsxwfp128 v63,v12,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vcfpsxws128 v21,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v21.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v52.f32)));
	// vxor v26,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubsws v25,v25,v0
	temp.s64 = int64_t(ctx.v25.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v11,v26,v11
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v6,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v60,v11,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vperm128 v63,v47,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcfpsxws128 v11,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vmaxsw v12,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vupkhsb128 v62,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16))));
	// vsubsws v6,v23,v0
	temp.s64 = int64_t(ctx.v23.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vupklsb128 v63,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// vsubsws v12,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v24,v0
	temp.s64 = int64_t(ctx.v24.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvlx128 v60,r4,r23
	ea = ctx.r4.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// vupklsb128 v60,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s16)));
	// vcsxwfp128 v63,v63,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vupklsb128 v58,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// vcsxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vupkhsb128 v57,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v49.s16), simde_mm_load_si128((simde__m128i*)ctx.v49.s16))));
	// vcsxwfp128 v60,v60,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vsubsws v26,v22,v0
	temp.s64 = int64_t(ctx.v22.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v59,v59,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfpsxws128 v24,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// vsubsws v25,v21,v0
	temp.s64 = int64_t(ctx.v21.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v58,v58,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vor v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v57,v57,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vor v26,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v61,v12,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vsubsws v12,v11,v0
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmaxsw v11,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vor v25,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v6,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// vor v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v63,v63,v55
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vxor v11,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmulfp128 v62,v62,v48
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vmaxsw v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmulfp128 v60,v60,v39
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmaxsw v26,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	// vmulfp128 v59,v59,v38
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmaxsw v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vsubsws v25,v24,v0
	temp.s64 = int64_t(ctx.v24.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v58,v58,v37
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vxor v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmulfp128 v57,v57,v54
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vsubsws v11,v11,v8
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v12,v12,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// stvlx128 v61,r4,r24
	ea = ctx.r4.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vor v8,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubsws v10,v10,v9
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v6,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vcsxwfp128 v56,v11,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vsubsws v12,v12,v3
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v3.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v3.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v3.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v3.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmaxsw v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmulfp128 v62,v62,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vxor v26,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmulfp128 v60,v60,v46
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v9,v6,v5
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v5.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v5.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v5.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v5.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v59,v59,v46
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcsxwfp128 v61,v10,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmulfp128 v58,v58,v46
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v10,v26,v4
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v4.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v4.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v4.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v4.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v57,v57,v46
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcsxwfp128 v53,v12,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vxor v12,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcsxwfp128 v55,v9,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vcsxwfp128 v54,v10,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vsubsws v12,v12,v2
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v2.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v2.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v2.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v2.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcfpsxws128 v11,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v10,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vupklsb128 v62,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s16)));
	// vcfpsxws128 v9,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcfpsxws128 v8,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// vcsxwfp128 v63,v12,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// stvlx128 v61,r4,r25
	ea = ctx.r4.u32 + ctx.r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vcfpsxws128 v12,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// stvlx128 v56,r4,r26
	ea = ctx.r4.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// vcfpsxws128 v6,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// stvlx128 v55,r4,r27
	ea = ctx.r4.u32 + ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v54,r4,r28
	ea = ctx.r4.u32 + ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v53,r4,r29
	ea = ctx.r4.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// vsubsws v11,v11,v0
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v10,v0
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v9,v9,v0
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v8,v8,v0
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvlx128 v63,r4,r30
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v63,v62,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsubsws v12,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v6,v6,v0
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v9,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v63,v63,v36
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vor v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmaxsw v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmaxsw v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmaxsw v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmaxsw v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vxor v11,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vxor v10,v10,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vxor v12,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vxor v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vxor v8,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vsubsws v11,v11,v1
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v1.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v1.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v1.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v1.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v12,v12,v28
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v28.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v28.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v28.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v28.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v10,v31
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v31.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v31.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v31.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v31.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v9,v9,v30
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v30.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v30.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v30.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v30.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v8,v8,v29
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v29.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v29.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v29.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v29.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v62,v11,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vcsxwfp128 v58,v12,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v61,v10,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vor128 v7,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vcsxwfp128 v60,v9,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vcsxwfp128 v59,v8,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmaxsw v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vcfpsxws128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vxor v6,v6,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)));
	// stvlx128 v62,r4,r31
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vsubsws v11,v6,v27
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v27.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v27.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v27.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v27.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvlx128 v61,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v60,r4,r6
	ea = ctx.r4.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v59,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v58,r4,r9
	ea = ctx.r4.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// vcsxwfp128 v57,v11,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vsubsws v12,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvlx128 v57,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// vxor v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubsws v0,v0,v7
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v63,v0,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvlx128 v63,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x833a01d4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832978D8"))) PPC_WEAK_FUNC(sub_832978D8);
PPC_FUNC_IMPL(__imp__sub_832978D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x832978E0;
	__savegprlr_14(ctx, base);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// std r27,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r27.u64);
	// std r27,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r27.u64);
	// std r27,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r27.u64);
	// std r27,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r27.u64);
	// std r27,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r27.u64);
	// std r27,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r27.u64);
	// std r27,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r27.u64);
	// std r27,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.r27.u64);
	// std r27,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r27.u64);
	// std r27,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r27.u64);
	// std r27,96(r11)
	PPC_STORE_U64(ctx.r11.u32 + 96, ctx.r27.u64);
	// std r27,104(r11)
	PPC_STORE_U64(ctx.r11.u32 + 104, ctx.r27.u64);
	// std r27,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r27.u64);
	// std r27,120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 120, ctx.r27.u64);
	// std r27,128(r11)
	PPC_STORE_U64(ctx.r11.u32 + 128, ctx.r27.u64);
	// std r27,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r27.u64);
	// std r27,144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 144, ctx.r27.u64);
	// std r27,152(r11)
	PPC_STORE_U64(ctx.r11.u32 + 152, ctx.r27.u64);
	// std r27,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r27.u64);
	// std r27,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r27.u64);
	// std r27,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r27.u64);
	// std r27,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r27.u64);
	// std r27,192(r11)
	PPC_STORE_U64(ctx.r11.u32 + 192, ctx.r27.u64);
	// std r27,200(r11)
	PPC_STORE_U64(ctx.r11.u32 + 200, ctx.r27.u64);
	// std r27,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r27.u64);
	// std r27,216(r11)
	PPC_STORE_U64(ctx.r11.u32 + 216, ctx.r27.u64);
	// std r27,224(r11)
	PPC_STORE_U64(ctx.r11.u32 + 224, ctx.r27.u64);
	// std r27,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r27.u64);
	// std r27,240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 240, ctx.r27.u64);
	// std r27,248(r11)
	PPC_STORE_U64(ctx.r11.u32 + 248, ctx.r27.u64);
	// lwz r6,4352(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4352);
	// lwz r8,4360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r7,4356(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r9,4364(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4364);
	// beq cr6,0x83297994
	if (ctx.cr6.eq) goto loc_83297994;
	// subfic r11,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r8.s64;
	// srw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_83297994:
	// li r22,11
	ctx.r22.s64 = 11;
	// li r23,13
	ctx.r23.s64 = 13;
	// li r19,14
	ctx.r19.s64 = 14;
	// li r20,15
	ctx.r20.s64 = 15;
	// li r21,17
	ctx.r21.s64 = 17;
	// li r17,20
	ctx.r17.s64 = 20;
	// li r16,28
	ctx.r16.s64 = 28;
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x832979d8
	if (!ctx.cr6.lt) goto loc_832979D8;
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r18,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r18.u32);
	// stw r27,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r27.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// b 0x83297b1c
	goto loc_83297B1C;
loc_832979D8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83297abc
	if (ctx.cr6.lt) goto loc_83297ABC;
	// beq cr6,0x83297aac
	if (ctx.cr6.eq) goto loc_83297AAC;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x83297a9c
	if (ctx.cr6.lt) goto loc_83297A9C;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x83297a84
	if (ctx.cr6.lt) goto loc_83297A84;
	// lwz r5,4368(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4368);
	// rlwinm r10,r10,1,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// beq cr6,0x83297a38
	if (ctx.cr6.eq) goto loc_83297A38;
	// rlwinm r5,r10,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subfic r10,r10,33
	ctx.xer.ca = ctx.r10.u32 <= 33;
	ctx.r10.s64 = 33 - ctx.r10.s64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x83297b14
	goto loc_83297B14;
loc_83297A38:
	// rlwinm r10,r11,19,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFF;
	// rlwinm r5,r11,11,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3F;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// clrlwi. r5,r10,25
	ctx.r5.u64 = ctx.r10.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r17,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r17.u32);
	// bne 0x83297a64
	if (!ctx.cr0.eq) goto loc_83297A64;
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// stw r16,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r16.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_83297A64:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x83297a78
	if (!ctx.cr6.lt) goto loc_83297A78;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// stw r18,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r18.u32);
	// b 0x83297a7c
	goto loc_83297A7C;
loc_83297A78:
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
loc_83297A7C:
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x83297b1c
	goto loc_83297B1C;
loc_83297A84:
	// stw r22,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r22.u32);
	// rlwinm r11,r11,10,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// lwz r10,4372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4372);
	// rlwinm r5,r11,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lhax r10,r5,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32));
	// b 0x83297b04
	goto loc_83297B04;
loc_83297A9C:
	// stw r23,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r23.u32);
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// lwz r5,4376(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4376);
	// b 0x83297afc
	goto loc_83297AFC;
loc_83297AAC:
	// stw r19,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r19.u32);
	// rlwinm r11,r11,13,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// lwz r5,4380(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4380);
	// b 0x83297afc
	goto loc_83297AFC;
loc_83297ABC:
	// rlwinm. r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x83297ad4
	if (!ctx.cr0.lt) goto loc_83297AD4;
	// stw r20,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r20.u32);
	// rlwinm r11,r11,6,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1F;
	// lwz r5,4384(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4384);
	// b 0x83297afc
	goto loc_83297AFC;
loc_83297AD4:
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x83297af0
	if (!ctx.cr0.lt) goto loc_83297AF0;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r11,r11,6,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1F;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r5,4388(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// b 0x83297afc
	goto loc_83297AFC;
loc_83297AF0:
	// stw r21,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r21.u32);
	// rlwinm r11,r11,7,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1F;
	// lwz r5,4392(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4392);
loc_83297AFC:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lhax r10,r10,r5
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32));
loc_83297B04:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
loc_83297B14:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_83297B1C:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83297b40
	if (ctx.cr6.lt) goto loc_83297B40;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83297b44
	goto loc_83297B44;
loc_83297B40:
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
loc_83297B44:
	// lwz r6,4396(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4396);
	// addi r8,r4,20
	ctx.r8.s64 = ctx.r4.s64 + 20;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,5
	ctx.r26.s64 = 5;
	// li r24,7
	ctx.r24.s64 = 7;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,28(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | ctx.r30.u64;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// stwx r6,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u32);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// lis r31,-1
	ctx.r31.s64 = -65536;
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
	// li r29,3
	ctx.r29.s64 = 3;
	// ori r28,r31,5
	ctx.r28.u64 = ctx.r31.u64 | 5;
	// ori r25,r30,7
	ctx.r25.u64 = ctx.r30.u64 | 7;
loc_83297BB0:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83297bc8
	if (ctx.cr6.eq) goto loc_83297BC8;
	// subfic r31,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r31.s64 = 32 - ctx.r11.s64;
	// srw r31,r7,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r31.u8 & 0x3F));
	// or r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 | ctx.r5.u64;
loc_83297BC8:
	// rlwinm r30,r31,9,23,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r30,511
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 511, ctx.xer);
	// bgt cr6,0x83298f84
	if (ctx.cr6.gt) goto loc_83298F84;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,26400
	ctx.r12.s64 = ctx.r12.s64 + 26400;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// addi r12,r12,31740
	ctx.r12.s64 = ctx.r12.s64 + 31740;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lbzu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,28(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// lbzu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lwz r3,28(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// lbzu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lwz r3,28(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_83297C48:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83297c68
	if (ctx.cr6.lt) goto loc_83297C68;
loc_83297C54:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83297bb0
	goto loc_83297BB0;
loc_83297C68:
	// rlwinm r5,r5,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0xFFFFFE00;
	// b 0x83297bb0
	goto loc_83297BB0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297C88:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297C8C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297CA0:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297CA4:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297CD4:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297CD8:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297CEC:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83297c54
	if (!ctx.cr6.lt) goto loc_83297C54;
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x83297bb0
	goto loc_83297BB0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297D18:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297D1C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
loc_83297D30:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297D34:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297D64:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297D68:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297ca0
	goto loc_83297CA0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297D98:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297D9C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297cec
	goto loc_83297CEC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297DCC:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297DD0:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297DE4:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83297c54
	if (!ctx.cr6.lt) goto loc_83297C54;
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x83297bb0
	goto loc_83297BB0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297E10:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297E14:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297de4
	goto loc_83297DE4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297E44:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297E48:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297E5C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83297c54
	if (!ctx.cr6.lt) goto loc_83297C54;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83297bb0
	goto loc_83297BB0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297E88:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297E8C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297e5c
	goto loc_83297E5C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297EBC:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297EC0:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83297e5c
	goto loc_83297E5C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297EF0:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297EF4:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83297e5c
	goto loc_83297E5C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297F24:
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d34
	goto loc_83297D34;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297F44:
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ca4
	goto loc_83297CA4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297F64:
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d34
	goto loc_83297D34;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297F84:
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ca4
	goto loc_83297CA4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297FA4:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297FA8:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83297FD8:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83297FDC:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r24,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329800C:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83297c54
	if (!ctx.cr6.lt) goto loc_83297C54;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x83297bb0
	goto loc_83297BB0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8329803C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// b 0x83297d30
	goto loc_83297D30;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297c88
	goto loc_83297C88;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297cd4
	goto loc_83297CD4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297d18
	goto loc_83297D18;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297d64
	goto loc_83297D64;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297d98
	goto loc_83297D98;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297dcc
	goto loc_83297DCC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297e10
	goto loc_83297E10;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297e44
	goto loc_83297E44;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297e88
	goto loc_83297E88;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297ebc
	goto loc_83297EBC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297ef0
	goto loc_83297EF0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297f24
	goto loc_83297F24;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297f44
	goto loc_83297F44;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297f64
	goto loc_83297F64;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297f84
	goto loc_83297F84;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297fa4
	goto loc_83297FA4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83297fd8
	goto loc_83297FD8;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329800c
	goto loc_8329800C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298264:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297dd0
	goto loc_83297DD0;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298284:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e14
	goto loc_83297E14;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832982A4:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e48
	goto loc_83297E48;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832982C4:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e8c
	goto loc_83297E8C;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832982E4:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d34
	goto loc_83297D34;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298304:
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ca4
	goto loc_83297CA4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298324:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_83298328:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298358:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8329835C:
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8329838C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83297c54
	if (!ctx.cr6.lt) goto loc_83297C54;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x83297bb0
	goto loc_83297BB0;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298264
	goto loc_83298264;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298284
	goto loc_83298284;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832982a4
	goto loc_832982A4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832982c4
	goto loc_832982C4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832982e4
	goto loc_832982E4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298304
	goto loc_83298304;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298324
	goto loc_83298324;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298358
	goto loc_83298358;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x8329838c
	goto loc_8329838C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832984B4:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e48
	goto loc_83297E48;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832984D4:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e8c
	goto loc_83297E8C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_832984F4:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d34
	goto loc_83297D34;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298514:
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ca4
	goto loc_83297CA4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298534:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83297c54
	if (!ctx.cr6.lt) goto loc_83297C54;
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x83297bb0
	goto loc_83297BB0;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832984b4
	goto loc_832984B4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832984d4
	goto loc_832984D4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x832984f4
	goto loc_832984F4;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298514
	goto loc_83298514;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298534
	goto loc_83298534;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x832984b4
	goto loc_832984B4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x832984d4
	goto loc_832984D4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x832984f4
	goto loc_832984F4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83298514
	goto loc_83298514;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83298534
	goto loc_83298534;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x832984b4
	goto loc_832984B4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x832984d4
	goto loc_832984D4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x832984f4
	goto loc_832984F4;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83298514
	goto loc_83298514;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83298534
	goto loc_83298534;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329803c
	goto loc_8329803C;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297c8c
	goto loc_83297C8C;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297cd8
	goto loc_83297CD8;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d1c
	goto loc_83297D1C;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d68
	goto loc_83297D68;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d9c
	goto loc_83297D9C;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329803c
	goto loc_8329803C;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297c8c
	goto loc_83297C8C;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297cd8
	goto loc_83297CD8;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d1c
	goto loc_83297D1C;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d68
	goto loc_83297D68;
	// lbzu r31,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d9c
	goto loc_83297D9C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x83297d30
	goto loc_83297D30;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x83297ca0
	goto loc_83297CA0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x83297cec
	goto loc_83297CEC;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r24,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x83297d30
	goto loc_83297D30;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r24,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x83297ca0
	goto loc_83297CA0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r24,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x83297cec
	goto loc_83297CEC;
	// lbzu r31,11(r10)
	ea = 11 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d34
	goto loc_83297D34;
	// lbzu r31,11(r10)
	ea = 11 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ca4
	goto loc_83297CA4;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,11
	ctx.r30.u64 = ctx.r30.u64 | 11;
loc_8329880C:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,28(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r30,r31,r15
	PPC_STORE_U32(ctx.r31.u32 + ctx.r15.u32, ctx.r30.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r22,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r22.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297fa8
	goto loc_83297FA8;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297fdc
	goto loc_83297FDC;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83298328
	goto loc_83298328;
	// lbzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x8329835c
	goto loc_8329835C;
	// lbzu r31,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d34
	goto loc_83297D34;
	// lbzu r31,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ca4
	goto loc_83297CA4;
	// lbzu r31,13(r10)
	ea = 13 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d34
	goto loc_83297D34;
	// lbzu r31,13(r10)
	ea = 13 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ca4
	goto loc_83297CA4;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,13
	ctx.r30.u64 = ctx.r30.u64 | 13;
	// b 0x8329880c
	goto loc_8329880C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r23,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r23.u32);
	// b 0x83297c48
	goto loc_83297C48;
	// lbzu r31,14(r10)
	ea = 14 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297d34
	goto loc_83297D34;
	// lbzu r31,14(r10)
	ea = 14 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ca4
	goto loc_83297CA4;
	// lbzu r31,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297dd0
	goto loc_83297DD0;
	// lbzu r31,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e14
	goto loc_83297E14;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x83297de4
	goto loc_83297DE4;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x83297de4
	goto loc_83297DE4;
	// lbzu r31,7(r10)
	ea = 7 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297dd0
	goto loc_83297DD0;
	// lbzu r31,7(r10)
	ea = 7 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e14
	goto loc_83297E14;
	// lbzu r31,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297dd0
	goto loc_83297DD0;
	// lbzu r31,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e14
	goto loc_83297E14;
	// lbzu r31,9(r10)
	ea = 9 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e48
	goto loc_83297E48;
	// lbzu r31,9(r10)
	ea = 9 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e8c
	goto loc_83297E8C;
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// ori r30,r30,9
	ctx.r30.u64 = ctx.r30.u64 | 9;
loc_8329893C:
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,28(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r30,r31,r15
	PPC_STORE_U32(ctx.r31.u32 + ctx.r15.u32, ctx.r30.u32);
	// b 0x83297e5c
	goto loc_83297E5C;
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x8329893c
	goto loc_8329893C;
	// lbzu r31,10(r10)
	ea = 10 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e48
	goto loc_83297E48;
	// lbzu r31,10(r10)
	ea = 10 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297e8c
	goto loc_83297E8C;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ec0
	goto loc_83297EC0;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// b 0x83297ef4
	goto loc_83297EF4;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r30,19,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 19) & 0xFF;
	// rlwinm r15,r30,11,26,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 11) & 0x3F;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r15,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r15.u32);
	// clrlwi. r15,r31,25
	ctx.r15.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r17,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r17.u32);
	// bne 0x832989b0
	if (!ctx.cr0.eq) goto loc_832989B0;
	// rlwinm r30,r30,27,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0xFF;
	// stw r16,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r16.u32);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// or r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 | ctx.r31.u64;
loc_832989B0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x832989c4
	if (!ctx.cr6.lt) goto loc_832989C4;
	// neg r31,r31
	ctx.r31.s64 = -ctx.r31.s64;
	// stw r18,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r18.u32);
	// b 0x832989c8
	goto loc_832989C8;
loc_832989C4:
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
loc_832989C8:
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,28(r4)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r15,8(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// neg r15,r15
	ctx.r15.s64 = -ctx.r15.s64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r15,16,0,15
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF0000;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 | ctx.r15.u64;
	// stwx r31,r30,r14
	PPC_STORE_U32(ctx.r30.u32 + ctx.r14.u32, ctx.r31.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83297c54
	if (!ctx.cr6.lt) goto loc_83297C54;
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
	// b 0x83297bb0
	goto loc_83297BB0;
	// stw r22,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r22.u32);
	// rlwinm r31,r31,11,22,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0x3FF;
	// rlwinm r30,r31,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// lwz r15,4372(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4372);
	// lhax r30,r30,r15
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r15.u32));
	// clrlwi r15,r30,24
	ctx.r15.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r30,r30,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stw r15,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r15.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83298a74
	if (ctx.cr6.lt) goto loc_83298A74;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83298a78
	goto loc_83298A78;
loc_83298A74:
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
loc_83298A78:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r14,8(r4)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r15,28(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// neg r14,r14
	ctx.r14.s64 = -ctx.r14.s64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r14,r14,16,0,15
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 16) & 0xFFFF0000;
	// or r31,r31,r14
	ctx.r31.u64 = ctx.r31.u64 | ctx.r14.u64;
	// stwx r31,r30,r15
	PPC_STORE_U32(ctx.r30.u32 + ctx.r15.u32, ctx.r31.u32);
	// b 0x83297bb0
	goto loc_83297BB0;
	// stw r23,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r23.u32);
	// rlwinm r31,r31,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0xFFF;
	// lwz r15,4376(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4376);
	// b 0x83298b1c
	goto loc_83298B1C;
	// stw r19,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r19.u32);
	// rlwinm r31,r31,14,19,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1FFF;
	// lwz r15,4380(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4380);
	// b 0x83298b1c
	goto loc_83298B1C;
	// rlwinm. r31,r31,9,0,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFFFFFE00;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x83298af4
	if (!ctx.cr0.lt) goto loc_83298AF4;
	// stw r20,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r20.u32);
	// rlwinm r31,r31,6,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1F;
	// lwz r15,4384(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4384);
	// b 0x83298b1c
	goto loc_83298B1C;
loc_83298AF4:
	// rlwinm. r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x83298b10
	if (!ctx.cr0.lt) goto loc_83298B10;
	// li r30,16
	ctx.r30.s64 = 16;
	// rlwinm r31,r31,6,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1F;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// lwz r15,4388(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// b 0x83298b1c
	goto loc_83298B1C;
loc_83298B10:
	// stw r21,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r21.u32);
	// rlwinm r31,r31,7,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x1F;
	// lwz r15,4392(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4392);
loc_83298B1C:
	// rlwinm r30,r31,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// lhax r30,r30,r15
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r15.u32));
	// clrlwi r15,r30,24
	ctx.r15.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r30,r30,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stw r15,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r15.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83298b60
	if (ctx.cr6.lt) goto loc_83298B60;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83298b64
	goto loc_83298B64;
loc_83298B60:
	// slw r5,r5,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
loc_83298B64:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,8(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r15,r15
	ctx.r15.s64 = -ctx.r15.s64;
	// lwz r14,28(r4)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r15,r15,16,0,15
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF0000;
	// or r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 | ctx.r15.u64;
	// stwx r31,r30,r14
	PPC_STORE_U32(ctx.r30.u32 + ctx.r14.u32, ctx.r31.u32);
	// b 0x83297bb0
	goto loc_83297BB0;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
loc_83298BC0:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
loc_83298BC4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83298c14
	goto loc_83298C14;
loc_83298BDC:
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83298f84
	goto loc_83298F84;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298BFC:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
loc_83298C00:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83298C14:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83298bdc
	if (ctx.cr6.lt) goto loc_83298BDC;
	// b 0x83298f6c
	goto loc_83298F6C;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83298cec
	goto loc_83298CEC;
loc_83298C40:
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x83298f84
	goto loc_83298F84;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298C60:
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
loc_83298C64:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83298f60
	goto loc_83298F60;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298C94:
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// b 0x83298f4c
	goto loc_83298F4C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298bc0
	goto loc_83298BC0;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x83298bfc
	goto loc_83298BFC;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83298CEC:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83298c40
	if (ctx.cr6.lt) goto loc_83298C40;
	// b 0x83298f6c
	goto loc_83298F6C;
	// lbzu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298c60
	goto loc_83298C60;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x83298c94
	goto loc_83298C94;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83298f6c
	if (!ctx.cr6.lt) goto loc_83298F6C;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x83298f84
	goto loc_83298F84;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298D60:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// b 0x83298c64
	goto loc_83298C64;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_83298D80:
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// b 0x83298f4c
	goto loc_83298F4C;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83298dfc
	goto loc_83298DFC;
loc_83298DA4:
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x83298f84
	goto loc_83298F84;
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x83298d60
	goto loc_83298D60;
	// lbzu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x83298d80
	goto loc_83298D80;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83298DFC:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83298da4
	if (ctx.cr6.lt) goto loc_83298DA4;
	// b 0x83298f6c
	goto loc_83298F6C;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,28(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// b 0x83298e48
	goto loc_83298E48;
loc_83298E28:
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x83298f84
	goto loc_83298F84;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83298E48:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83298e28
	if (ctx.cr6.lt) goto loc_83298E28;
	// b 0x83298f6c
	goto loc_83298F6C;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// b 0x83298e48
	goto loc_83298E48;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r26.u32);
	// b 0x83298e48
	goto loc_83298E48;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// b 0x83298bc4
	goto loc_83298BC4;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// b 0x83298c00
	goto loc_83298C00;
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// b 0x83298bc4
	goto loc_83298BC4;
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// b 0x83298c00
	goto loc_83298C00;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r25,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r25.u32);
	// b 0x83298c14
	goto loc_83298C14;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r24,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r24.u32);
	// b 0x83298c14
	goto loc_83298C14;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// b 0x83298c64
	goto loc_83298C64;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// b 0x83298f4c
	goto loc_83298F4C;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r28,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// b 0x83298f60
	goto loc_83298F60;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r26,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r26.u32);
	// b 0x83298f60
	goto loc_83298F60;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// b 0x83298c64
	goto loc_83298C64;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// b 0x83298f4c
	goto loc_83298F4C;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// b 0x83298c64
	goto loc_83298C64;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
loc_83298F4C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
loc_83298F60:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83298f80
	if (ctx.cr6.lt) goto loc_83298F80;
loc_83298F6C:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83298f84
	goto loc_83298F84;
loc_83298F80:
	// rlwinm r5,r5,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0xFFFFFE00;
loc_83298F84:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x83298f98
	if (ctx.cr6.eq) goto loc_83298F98;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
loc_83298F98:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r21,36
	ctx.r21.s64 = 36;
	// stw r5,4352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4352, ctx.r5.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r7,4356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4356, ctx.r7.u32);
	// li r20,-16
	ctx.r20.s64 = -16;
	// stw r11,4360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4360, ctx.r11.u32);
	// addi r23,r10,24320
	ctx.r23.s64 = ctx.r10.s64 + 24320;
	// stw r9,4364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4364, ctx.r9.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// li r24,32
	ctx.r24.s64 = 32;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// li r25,48
	ctx.r25.s64 = 48;
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// li r26,64
	ctx.r26.s64 = 64;
	// lvlx v6,0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r27,80
	ctx.r27.s64 = 80;
	// li r28,96
	ctx.r28.s64 = 96;
	// li r29,112
	ctx.r29.s64 = 112;
	// li r30,128
	ctx.r30.s64 = 128;
	// li r31,144
	ctx.r31.s64 = 144;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r6,176
	ctx.r6.s64 = 176;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r9,208
	ctx.r9.s64 = 208;
	// li r10,224
	ctx.r10.s64 = 224;
	// li r11,240
	ctx.r11.s64 = 240;
	// lwz r22,32(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lvlx128 v63,r4,r21
	temp.u32 = ctx.r4.u32 + ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lvlx v7,r23,r20
	temp.u32 = ctx.r23.u32 + ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvlx128 v62,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v46,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvlx128 v61,r24,r4
	temp.u32 = ctx.r24.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r25,r4
	temp.u32 = ctx.r25.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r26,r4
	temp.u32 = ctx.r26.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r27,r4
	temp.u32 = ctx.r27.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r28,r4
	temp.u32 = ctx.r28.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r29,r4
	temp.u32 = ctx.r29.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r30,r4
	temp.u32 = ctx.r30.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r5,r4
	temp.u32 = ctx.r5.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v50,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v47,r0,r22
	temp.u32 = ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v45,r3,r22
	temp.u32 = ctx.r3.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v12,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v63,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvlx128 v44,r24,r22
	temp.u32 = ctx.r24.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v11,v62,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v43,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v10,v61,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vupkhsb128 v62,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// vupklsb128 v63,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s16)));
	// vupkhsb128 v61,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16))));
	// vperm128 v9,v60,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vperm128 v8,v59,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v63,v63,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vperm128 v5,v58,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v60,v59,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v61,v61,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vperm128 v4,v57,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v56,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v2,v55,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v1,v54,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v31,v53,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v30,v52,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v29,v51,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v28,v50,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v27,v49,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v7,v48,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmulfp128 v62,v62,v47
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vperm128 v59,v57,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmulfp128 v63,v63,v45
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vperm128 v58,v55,v54,v6
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmulfp128 v62,v62,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vupklsb128 v57,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vupkhsb128 v43,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16))));
	// vmulfp128 v61,v61,v44
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vupkhsb128 v55,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// vperm128 v53,v53,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvlx128 v41,r30,r22
	temp.u32 = ctx.r30.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupklsb128 v60,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vcsxwfp128 v57,v57,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vperm128 v52,v51,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvlx128 v56,r25,r22
	temp.u32 = ctx.r25.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v45,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v59.s16), simde_mm_load_si128((simde__m128i*)ctx.v59.s16))));
	// vcsxwfp128 v55,v55,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vperm128 v51,v49,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v49,v43,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vcsxwfp128 v60,v60,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vupklsb128 v59,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s16)));
	// lvlx128 v47,r27,r22
	temp.u32 = ctx.r27.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v45,v45,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// lvlx128 v54,r26,r22
	temp.u32 = ctx.r26.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v44,r28,r22
	temp.u32 = ctx.r28.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v6,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// lvlx128 v42,r29,r22
	temp.u32 = ctx.r29.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v26,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// lvlx128 v50,r31,r22
	temp.u32 = ctx.r31.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v61,v61,v46
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v46.f32)));
	// lvlx128 v48,r5,r22
	temp.u32 = ctx.r5.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v59,v59,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// lvlx128 v43,r6,r22
	temp.u32 = ctx.r6.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v57,v57,v56
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v56.f32)));
	// lvlx128 v40,r7,r22
	temp.u32 = ctx.r7.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v39,r9,r22
	temp.u32 = ctx.r9.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v55,v55,v54
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvlx128 v56,r10,r22
	temp.u32 = ctx.r10.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v63,v49,v41
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v41.f32)));
	// lvlx128 v54,r11,r22
	temp.u32 = ctx.r11.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v60,v60,v47
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmulfp128 v47,v45,v44
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vsubsws v6,v6,v0
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v26,v26,v0
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcfpsxws128 v25,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v25.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v59,v59,v42
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v62,v57,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vor v26,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v61,v55,v46
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmaxsw v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmulfp128 v60,v60,v46
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmaxsw v26,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// vmulfp128 v57,v47,v46
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vxor v6,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vxor v26,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubsws v25,v25,v0
	temp.s64 = int64_t(ctx.v25.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v59,v59,v46
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v12,v6,v12
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcfpsxws128 v24,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vsubsws v11,v26,v11
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v25,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfpsxws128 v23,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v23.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// vcfpsxws128 v19,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v19.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vcsxwfp128 v63,v12,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vcsxwfp128 v62,v11,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmaxsw v25,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	// vcfpsxws128 v22,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v22.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcfpsxws128 v21,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v21.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// vupklsb128 v60,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// vxor v25,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vcfpsxws128 v20,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// vupkhsb128 v59,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v52.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16))));
	// vsubsws v12,v24,v0
	temp.s64 = int64_t(ctx.v24.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v24.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v25,v10
	temp.s64 = int64_t(ctx.v25.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v25.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v11,v23,v0
	temp.s64 = int64_t(ctx.v23.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v23.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vupklsb128 v63,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// stvlx128 v62,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vupkhsb128 v62,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v61,v10,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vsubsws v10,v22,v0
	temp.s64 = int64_t(ctx.v22.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v22.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v6,v21,v0
	temp.s64 = int64_t(ctx.v21.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v21.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v63,v63,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vupklsb128 v58,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s16)));
	// vcsxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vupkhsb128 v57,v51,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v51.s16), simde_mm_load_si128((simde__m128i*)ctx.v51.s16))));
	// vcsxwfp128 v60,v60,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vor v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v59,v59,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vor v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v58,v58,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vsubsws v26,v20,v0
	temp.s64 = int64_t(ctx.v20.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v20.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v20.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v20.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v57,v57,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vsubsws v25,v19,v0
	temp.s64 = int64_t(ctx.v19.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v19.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v19.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v19.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v61,r4,r24
	ea = ctx.r4.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vmaxsw v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vupklsb128 v61,v51,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s16)));
	// vor v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vor v26,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v25,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v63,v63,v50
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vxor v12,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmulfp128 v62,v62,v48
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vmaxsw v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmulfp128 v60,v60,v43
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vxor v11,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmulfp128 v59,v59,v40
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vmaxsw v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmulfp128 v58,v58,v39
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmaxsw v26,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// vmulfp128 v57,v57,v56
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmaxsw v25,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	// vsubsws v12,v12,v9
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vsubsws v11,v11,v8
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v10,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vxor v26,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vcsxwfp128 v56,v12,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vxor v9,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v8,v6,v4
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v4.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v4.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v4.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v4.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v62,v62,v46
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v10,v10,v5
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v5.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v5.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v5.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v5.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v60,v60,v46
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v6,v26,v3
	temp.s64 = int64_t(ctx.v26.s32[0]) - int64_t(ctx.v3.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[1]) - int64_t(ctx.v3.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[2]) - int64_t(ctx.v3.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v26.s32[3]) - int64_t(ctx.v3.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v59,v59,v46
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v9,v9,v2
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v2.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v2.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v2.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v2.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmulfp128 v58,v58,v46
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v57,v57,v46
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcsxwfp128 v55,v11,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vcsxwfp128 v53,v10,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vcsxwfp128 v52,v8,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vcsxwfp128 v51,v6,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vcsxwfp128 v50,v9,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// stvlx128 v56,r4,r25
	ea = ctx.r4.u32 + ctx.r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// vcfpsxws128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v11,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vcfpsxws128 v10,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcfpsxws128 v9,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// vcfpsxws128 v8,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// vcfpsxws128 v6,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// stvlx128 v55,r4,r26
	ea = ctx.r4.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// vcsxwfp128 v63,v61,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// stvlx128 v53,r4,r27
	ea = ctx.r4.u32 + ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v52,r4,r28
	ea = ctx.r4.u32 + ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v51,r4,r29
	ea = ctx.r4.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v50,r4,r30
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// vsubsws v12,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v11,v11,v0
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v10,v0
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v9,v9,v0
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubsws v8,v8,v0
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v6,v6,v0
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vor v8,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmulfp128 v63,v63,v54
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vxor v12,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmaxsw v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmaxsw v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmaxsw v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vsubsws v12,v12,v1
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v1.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v1.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v1.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v1.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v8,v8,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vmaxsw v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vxor v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vcsxwfp128 v62,v12,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vxor v10,v10,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vsubsws v12,v8,v28
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v28.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v28.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v28.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v28.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vxor v9,v9,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vxor v6,v6,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)));
	// vmulfp128 v63,v63,v46
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vsubsws v11,v11,v31
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v31.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v31.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v31.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v31.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v58,v12,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vsubsws v10,v10,v30
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v30.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v30.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v30.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v30.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v9,v9,v29
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v29.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v29.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v29.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v29.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v8,v6,v27
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v27.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v27.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v27.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v27.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v61,v11,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vcsxwfp128 v60,v10,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vcsxwfp128 v59,v9,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vcsxwfp128 v57,v8,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// stvlx128 v62,r4,r31
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vcfpsxws128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvlx128 v61,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v60,r4,r6
	ea = ctx.r4.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v59,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v58,r4,r9
	ea = ctx.r4.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v57,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// vsubsws v12,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaxsw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_max_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vxor v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubsws v0,v0,v7
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v63,v0,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvlx128 v63,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299404"))) PPC_WEAK_FUNC(sub_83299404);
PPC_FUNC_IMPL(__imp__sub_83299404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299408"))) PPC_WEAK_FUNC(sub_83299408);
PPC_FUNC_IMPL(__imp__sub_83299408) {
	PPC_FUNC_PROLOGUE();
	// b 0x832945b0
	sub_832945B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329940C"))) PPC_WEAK_FUNC(sub_8329940C);
PPC_FUNC_IMPL(__imp__sub_8329940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299410"))) PPC_WEAK_FUNC(sub_83299410);
PPC_FUNC_IMPL(__imp__sub_83299410) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299428"))) PPC_WEAK_FUNC(sub_83299428);
PPC_FUNC_IMPL(__imp__sub_83299428) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299440"))) PPC_WEAK_FUNC(sub_83299440);
PPC_FUNC_IMPL(__imp__sub_83299440) {
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
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r3,r3,58728
	ctx.r3.u64 = ctx.r3.u64 | 58728;
	// bl 0x82e01690
	ctx.lr = 0x83299460;
	sub_82E01690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83299474
	if (ctx.cr0.eq) goto loc_83299474;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83299e18
	ctx.lr = 0x83299470;
	sub_83299E18(ctx, base);
	// b 0x83299478
	goto loc_83299478;
loc_83299474:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83299478:
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

__attribute__((alias("__imp__sub_8329948C"))) PPC_WEAK_FUNC(sub_8329948C);
PPC_FUNC_IMPL(__imp__sub_8329948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299490"))) PPC_WEAK_FUNC(sub_83299490);
PPC_FUNC_IMPL(__imp__sub_83299490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,27460
	ctx.r11.s64 = ctx.r11.s64 + 27460;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832994A0"))) PPC_WEAK_FUNC(sub_832994A0);
PPC_FUNC_IMPL(__imp__sub_832994A0) {
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
	// addi r11,r11,27460
	ctx.r11.s64 = ctx.r11.s64 + 27460;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x832994cc
	if (ctx.cr0.eq) goto loc_832994CC;
	// bl 0x82e01698
	ctx.lr = 0x832994CC;
	sub_82E01698(ctx, base);
loc_832994CC:
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

__attribute__((alias("__imp__sub_832994E4"))) PPC_WEAK_FUNC(sub_832994E4);
PPC_FUNC_IMPL(__imp__sub_832994E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832994E8"))) PPC_WEAK_FUNC(sub_832994E8);
PPC_FUNC_IMPL(__imp__sub_832994E8) {
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
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r9,r11,27640
	ctx.r9.s64 = ctx.r11.s64 + 27640;
	// lis r8,-31824
	ctx.r8.s64 = -2085617664;
	// lis r7,-31824
	ctx.r7.s64 = -2085617664;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r6,-31824
	ctx.r6.s64 = -2085617664;
	// addi r5,r10,27512
	ctx.r5.s64 = ctx.r10.s64 + 27512;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 660, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,648(r7)
	PPC_STORE_U32(ctx.r7.u32 + 648, ctx.r10.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// stw r9,656(r6)
	PPC_STORE_U32(ctx.r6.u32 + 656, ctx.r9.u32);
	// lwz r3,772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329955c
	if (ctx.cr6.eq) goto loc_8329955C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329955C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329955C:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329957c
	if (ctx.cr6.eq) goto loc_8329957C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329957C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329957C:
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r3,r3,-7796
	ctx.r3.s64 = ctx.r3.s64 + -7796;
	// bl 0x8329a790
	ctx.lr = 0x83299588;
	sub_8329A790(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329a708
	ctx.lr = 0x83299590;
	sub_8329A708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299490
	ctx.lr = 0x83299598;
	sub_83299490(ctx, base);
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

__attribute__((alias("__imp__sub_832995B0"))) PPC_WEAK_FUNC(sub_832995B0);
PPC_FUNC_IMPL(__imp__sub_832995B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832995B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r29,-32372
	ctx.r29.s64 = ctx.r29.s64 + -32372;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,224
	ctx.r31.s64 = 224;
loc_832995D8:
	// li r5,640
	ctx.r5.s64 = 640;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833bdb68
	ctx.lr = 0x832995E8;
	sub_833BDB68(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r29,r29,640
	ctx.r29.s64 = ctx.r29.s64 + 640;
	// bne 0x832995d8
	if (!ctx.cr0.eq) goto loc_832995D8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299600"))) PPC_WEAK_FUNC(sub_83299600);
PPC_FUNC_IMPL(__imp__sub_83299600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,58708
	ctx.r11.u64 = ctx.r11.u64 | 58708;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299610"))) PPC_WEAK_FUNC(sub_83299610);
PPC_FUNC_IMPL(__imp__sub_83299610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83299634"))) PPC_WEAK_FUNC(sub_83299634);
PPC_FUNC_IMPL(__imp__sub_83299634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299638"))) PPC_WEAK_FUNC(sub_83299638);
PPC_FUNC_IMPL(__imp__sub_83299638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,58712
	ctx.r11.u64 = ctx.r11.u64 | 58712;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299648"))) PPC_WEAK_FUNC(sub_83299648);
PPC_FUNC_IMPL(__imp__sub_83299648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,58716
	ctx.r11.u64 = ctx.r11.u64 | 58716;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299658"))) PPC_WEAK_FUNC(sub_83299658);
PPC_FUNC_IMPL(__imp__sub_83299658) {
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
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83299708
	if (ctx.cr6.eq) goto loc_83299708;
	// lis r31,-31824
	ctx.r31.s64 = -2085617664;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83299708
	if (ctx.cr6.eq) goto loc_83299708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329b6b8
	ctx.lr = 0x83299694;
	sub_8329B6B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329b6d8
	ctx.lr = 0x832996A8;
	sub_8329B6D8(ctx, base);
	// lwz r3,668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832996C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832996e4
	if (ctx.cr6.eq) goto loc_832996E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832996E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832996E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329b708
	ctx.lr = 0x832996EC;
	sub_8329B708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x832996F8;
	sub_82C10E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x83299700;
	sub_82C10E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8329970c
	goto loc_8329970C;
loc_83299708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8329970C:
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

__attribute__((alias("__imp__sub_83299724"))) PPC_WEAK_FUNC(sub_83299724);
PPC_FUNC_IMPL(__imp__sub_83299724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299728"))) PPC_WEAK_FUNC(sub_83299728);
PPC_FUNC_IMPL(__imp__sub_83299728) {
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
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832997c4
	if (ctx.cr6.eq) goto loc_832997C4;
	// lis r31,-31824
	ctx.r31.s64 = -2085617664;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832997c4
	if (ctx.cr6.eq) goto loc_832997C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329b6b8
	ctx.lr = 0x83299764;
	sub_8329B6B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329b6d8
	ctx.lr = 0x83299778;
	sub_8329B6D8(ctx, base);
	// lwz r3,668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832997b4
	if (ctx.cr6.eq) goto loc_832997B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832997B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832997B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x832997BC;
	sub_82C10E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c10e98
	ctx.lr = 0x832997C4;
	sub_82C10E98(ctx, base);
loc_832997C4:
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

__attribute__((alias("__imp__sub_832997DC"))) PPC_WEAK_FUNC(sub_832997DC);
PPC_FUNC_IMPL(__imp__sub_832997DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832997E0"))) PPC_WEAK_FUNC(sub_832997E0);
PPC_FUNC_IMPL(__imp__sub_832997E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83299804"))) PPC_WEAK_FUNC(sub_83299804);
PPC_FUNC_IMPL(__imp__sub_83299804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299808"))) PPC_WEAK_FUNC(sub_83299808);
PPC_FUNC_IMPL(__imp__sub_83299808) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,58724
	ctx.r11.u64 = ctx.r11.u64 | 58724;
	// stbx r10,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299824"))) PPC_WEAK_FUNC(sub_83299824);
PPC_FUNC_IMPL(__imp__sub_83299824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299828"))) PPC_WEAK_FUNC(sub_83299828);
PPC_FUNC_IMPL(__imp__sub_83299828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,58720
	ctx.r11.u64 = ctx.r11.u64 | 58720;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299838"))) PPC_WEAK_FUNC(sub_83299838);
PPC_FUNC_IMPL(__imp__sub_83299838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83299840;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832998f4
	if (ctx.cr6.eq) goto loc_832998F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x832998f4
	if (!ctx.cr6.lt) goto loc_832998F4;
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,780
	ctx.r30.s64 = ctx.r11.s64 + 780;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// beq cr6,0x832998b0
	if (ctx.cr6.eq) goto loc_832998B0;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// bl 0x833bdbf0
	ctx.lr = 0x832998AC;
	sub_833BDBF0(ctx, base);
	// b 0x832998c4
	goto loc_832998C4;
loc_832998B0:
	// li r5,3528
	ctx.r5.s64 = 3528;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833bf1b0
	ctx.lr = 0x832998BC;
	sub_833BF1B0(ctx, base);
	// li r11,3528
	ctx.r11.s64 = 3528;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_832998C4:
	// lwz r3,772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832998E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// b 0x832998fc
	goto loc_832998FC;
loc_832998F4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832998FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299904"))) PPC_WEAK_FUNC(sub_83299904);
PPC_FUNC_IMPL(__imp__sub_83299904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299908"))) PPC_WEAK_FUNC(sub_83299908);
PPC_FUNC_IMPL(__imp__sub_83299908) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83299918
	if (ctx.cr0.eq) goto loc_83299918;
	// li r11,64
	ctx.r11.s64 = 64;
loc_83299918:
	// rlwinm. r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83299924
	if (ctx.cr0.eq) goto loc_83299924;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_83299924:
	// rlwinm. r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83299930
	if (ctx.cr0.eq) goto loc_83299930;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_83299930:
	// rlwinm. r10,r4,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8329993c
	if (ctx.cr0.eq) goto loc_8329993C;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_8329993C:
	// rlwinm. r10,r4,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83299948
	if (ctx.cr0.eq) goto loc_83299948;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_83299948:
	// rlwinm. r10,r4,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83299954
	if (ctx.cr0.eq) goto loc_83299954;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_83299954:
	// rlwinm. r10,r4,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83299960
	if (ctx.cr0.eq) goto loc_83299960;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
loc_83299960:
	// rlwinm. r10,r4,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8329996c
	if (ctx.cr0.eq) goto loc_8329996C;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
loc_8329996C:
	// rlwinm. r10,r4,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83299978
	if (ctx.cr0.eq) goto loc_83299978;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
loc_83299978:
	// rlwinm. r10,r4,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83299984
	if (ctx.cr0.eq) goto loc_83299984;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
loc_83299984:
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// stw r11,652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299990"))) PPC_WEAK_FUNC(sub_83299990);
PPC_FUNC_IMPL(__imp__sub_83299990) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329999C"))) PPC_WEAK_FUNC(sub_8329999C);
PPC_FUNC_IMPL(__imp__sub_8329999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832999A0"))) PPC_WEAK_FUNC(sub_832999A0);
PPC_FUNC_IMPL(__imp__sub_832999A0) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addic. r3,r3,-32724
	ctx.xer.ca = ctx.r3.u32 > 32723;
	ctx.r3.s64 = ctx.r3.s64 + -32724;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832999cc
	if (ctx.cr0.eq) goto loc_832999CC;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-32380
	ctx.r10.s64 = ctx.r10.s64 + -32380;
	// bl 0x8329c288
	ctx.lr = 0x832999C8;
	sub_8329C288(ctx, base);
	// b 0x832999d0
	goto loc_832999D0;
loc_832999CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832999D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832999E0"))) PPC_WEAK_FUNC(sub_832999E0);
PPC_FUNC_IMPL(__imp__sub_832999E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x832999e8
	sub_832999E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832999E8"))) PPC_WEAK_FUNC(sub_832999E8);
PPC_FUNC_IMPL(__imp__sub_832999E8) {
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
	// bl 0x832994e8
	ctx.lr = 0x83299A08;
	sub_832994E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83299a18
	if (ctx.cr0.eq) goto loc_83299A18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x83299A18;
	sub_82E01698(ctx, base);
loc_83299A18:
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

__attribute__((alias("__imp__sub_83299A34"))) PPC_WEAK_FUNC(sub_83299A34);
PPC_FUNC_IMPL(__imp__sub_83299A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299A38"))) PPC_WEAK_FUNC(sub_83299A38);
PPC_FUNC_IMPL(__imp__sub_83299A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83299A40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83299ccc
	if (ctx.cr6.eq) goto loc_83299CCC;
	// addis r30,r3,5
	ctx.r30.s64 = ctx.r3.s64 + 327680;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// addi r30,r30,-6828
	ctx.r30.s64 = ctx.r30.s64 + -6828;
	// ori r27,r11,62976
	ctx.r27.u64 = ctx.r11.u64 | 62976;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83299ac4
	if (ctx.cr0.eq) goto loc_83299AC4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a200
	ctx.lr = 0x83299A78;
	sub_8329A200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x83299aac
	if (ctx.cr6.eq) goto loc_83299AAC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x83299a94
	if (ctx.cr6.eq) goto loc_83299A94;
	// cmplwi cr6,r11,136
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 136, ctx.xer);
	// bne cr6,0x83299ac4
	if (!ctx.cr6.eq) goto loc_83299AC4;
loc_83299A94:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83299ac4
	goto loc_83299AC4;
loc_83299AAC:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83299AC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83299908
	ctx.lr = 0x83299AD0;
	sub_83299908(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x8329bd78
	ctx.lr = 0x83299AE0;
	sub_8329BD78(ctx, base);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x8329bb68
	ctx.lr = 0x83299AE8;
	sub_8329BB68(ctx, base);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83299ba0
	if (ctx.cr6.eq) goto loc_83299BA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x83299ba0
	if (!ctx.cr6.lt) goto loc_83299BA0;
	// addi r29,r31,29294
	ctx.r29.s64 = ctx.r31.s64 + 29294;
	// addi r30,r31,29292
	ctx.r30.s64 = ctx.r31.s64 + 29292;
loc_83299B34:
	// li r5,2940
	ctx.r5.s64 = 2940;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833bf1b0
	ctx.lr = 0x83299B44;
	sub_833BF1B0(ctx, base);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,735
	ctx.r6.s64 = 735;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,735
	ctx.r5.s64 = 735;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299838
	ctx.lr = 0x83299B78;
	sub_83299838(ctx, base);
	// lwz r3,772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x83299b34
	if (ctx.cr6.lt) goto loc_83299B34;
loc_83299BA0:
	// lis r30,-31824
	ctx.r30.s64 = -2085617664;
	// lwz r3,672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83299c90
	if (ctx.cr6.eq) goto loc_83299C90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 + 327680;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r10,r10,-6824
	ctx.r10.s64 = ctx.r10.s64 + -6824;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83299be0
	if (!ctx.cr6.lt) goto loc_83299BE0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83299BE0:
	// lwz r11,672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83299c90
	if (ctx.cr6.eq) goto loc_83299C90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a200
	ctx.lr = 0x83299BF4;
	sub_8329A200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x83299c38
	if (ctx.cr6.eq) goto loc_83299C38;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x83299c30
	if (ctx.cr6.eq) goto loc_83299C30;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x83299c28
	if (ctx.cr6.eq) goto loc_83299C28;
	// cmplwi cr6,r11,136
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 136, ctx.xer);
	// beq cr6,0x83299c30
	if (ctx.cr6.eq) goto loc_83299C30;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,58720
	ctx.r11.u64 = ctx.r11.u64 | 58720;
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// b 0x83299c48
	goto loc_83299C48;
loc_83299C28:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x83299c3c
	goto loc_83299C3C;
loc_83299C30:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x83299c3c
	goto loc_83299C3C;
loc_83299C38:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83299C3C:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,58720
	ctx.r11.u64 = ctx.r11.u64 | 58720;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_83299C48:
	// lwz r11,672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83299c90
	if (ctx.cr6.eq) goto loc_83299C90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a200
	ctx.lr = 0x83299C5C;
	sub_8329A200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x83299c90
	if (!ctx.cr6.eq) goto loc_83299C90;
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// lwz r10,672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// addi r11,r11,-6820
	ctx.r11.s64 = ctx.r11.s64 + -6820;
	// lwz r9,14108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14108);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83299c8c
	if (ctx.cr6.eq) goto loc_83299C8C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83299c90
	if (!ctx.cr6.lt) goto loc_83299C90;
loc_83299C8C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83299C90:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,58724
	ctx.r11.u64 = ctx.r11.u64 | 58724;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83299ccc
	if (ctx.cr0.eq) goto loc_83299CCC;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65048
	ctx.r3.u64 = ctx.r3.u64 | 65048;
	// bl 0x8329a200
	ctx.lr = 0x83299CB0;
	sub_8329A200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x83299ccc
	if (!ctx.cr6.lt) goto loc_83299CCC;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r3,r3,65048
	ctx.r3.u64 = ctx.r3.u64 | 65048;
	// bl 0x8329a278
	ctx.lr = 0x83299CCC;
	sub_8329A278(ctx, base);
loc_83299CCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299CD4"))) PPC_WEAK_FUNC(sub_83299CD4);
PPC_FUNC_IMPL(__imp__sub_83299CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299CD8"))) PPC_WEAK_FUNC(sub_83299CD8);
PPC_FUNC_IMPL(__imp__sub_83299CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83299CE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83299e08
	if (ctx.cr6.eq) goto loc_83299E08;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833bf1b0
	ctx.lr = 0x83299D04;
	sub_833BF1B0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,44100
	ctx.r11.u64 = ctx.r11.u64 | 44100;
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r9,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r9.u16);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r8,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r8.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// ori r11,r10,45328
	ctx.r11.u64 = ctx.r10.u64 | 45328;
	// li r8,4
	ctx.r8.s64 = 4;
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// sth r26,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r26.u16);
	// addi r27,r28,772
	ctx.r27.s64 = ctx.r28.s64 + 772;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f1,8960(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8960);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83299e08
	if (ctx.cr0.lt) goto loc_83299E08;
	// addi r31,r28,788
	ctx.r31.s64 = ctx.r28.s64 + 788;
	// addi r29,r28,1068
	ctx.r29.s64 = ctx.r28.s64 + 1068;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83299D90:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x833bf1b0
	ctx.lr = 0x83299DA0;
	sub_833BF1B0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r26,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r26.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,3528
	ctx.r29.s64 = ctx.r29.s64 + 3528;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bne 0x83299d90
	if (!ctx.cr0.eq) goto loc_83299D90;
	// b 0x83299dc4
	goto loc_83299DC4;
loc_83299DBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83299838
	ctx.lr = 0x83299DC4;
	sub_83299838(ctx, base);
loc_83299DC4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x83299dbc
	if (ctx.cr6.lt) goto loc_83299DBC;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83299E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299E14"))) PPC_WEAK_FUNC(sub_83299E14);
PPC_FUNC_IMPL(__imp__sub_83299E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299E18"))) PPC_WEAK_FUNC(sub_83299E18);
PPC_FUNC_IMPL(__imp__sub_83299E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83299E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x83299490
	ctx.lr = 0x83299E30;
	sub_83299490(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8329a728
	ctx.lr = 0x83299E38;
	sub_8329A728(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,27640
	ctx.r11.s64 = ctx.r11.s64 + 27640;
	// addi r10,r10,27512
	ctx.r10.s64 = ctx.r10.s64 + 27512;
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addis r29,r31,5
	ctx.r29.s64 = ctx.r31.s64 + 327680;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r30,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r30.u32);
	// addi r29,r29,-7796
	ctx.r29.s64 = ctx.r29.s64 + -7796;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329ae28
	ctx.lr = 0x83299E6C;
	sub_8329AE28(ctx, base);
	// addis r28,r31,5
	ctx.r28.s64 = ctx.r31.s64 + 327680;
	// addi r28,r28,-7648
	ctx.r28.s64 = ctx.r28.s64 + -7648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329b5d8
	ctx.lr = 0x83299E7C;
	sub_8329B5D8(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,58708
	ctx.r11.u64 = ctx.r11.u64 | 58708;
	// ori r10,r10,58712
	ctx.r10.u64 = ctx.r10.u64 | 58712;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// ori r9,r9,58716
	ctx.r9.u64 = ctx.r9.u64 | 58716;
	// ori r8,r8,58720
	ctx.r8.u64 = ctx.r8.u64 | 58720;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// ori r7,r7,58724
	ctx.r7.u64 = ctx.r7.u64 | 58724;
	// lis r6,-31824
	ctx.r6.s64 = -2085617664;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addis r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 + 327680;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-7668
	ctx.r10.s64 = ctx.r10.s64 + -7668;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stw r29,648(r6)
	PPC_STORE_U32(ctx.r6.u32 + 648, ctx.r29.u32);
	// stw r28,656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 656, ctx.r28.u32);
	// stw r10,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r10.u32);
	// bl 0x8329d1f8
	ctx.lr = 0x83299EDC;
	sub_8329D1F8(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// stw r3,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r3.u32);
	// stw r3,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83299f50
	if (ctx.cr6.eq) goto loc_83299F50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83299f10
	if (!ctx.cr0.eq) goto loc_83299F10;
	// twi 31,r0,22
loc_83299F10:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83299f3c
	if (ctx.cr6.eq) goto loc_83299F3C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83299f3c
	if (ctx.cr6.eq) goto loc_83299F3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83299F3C:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83299F50:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299cd8
	ctx.lr = 0x83299F5C;
	sub_83299CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299F68"))) PPC_WEAK_FUNC(sub_83299F68);
PPC_FUNC_IMPL(__imp__sub_83299F68) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299F98"))) PPC_WEAK_FUNC(sub_83299F98);
PPC_FUNC_IMPL(__imp__sub_83299F98) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83299FC8"))) PPC_WEAK_FUNC(sub_83299FC8);
PPC_FUNC_IMPL(__imp__sub_83299FC8) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83299FF8"))) PPC_WEAK_FUNC(sub_83299FF8);
PPC_FUNC_IMPL(__imp__sub_83299FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8329A000;
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
	// srawi r11,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 16;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,2
	ctx.r6.s64 = 2;
	// rlwinm r5,r29,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329A040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329A074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A07C"))) PPC_WEAK_FUNC(sub_8329A07C);
PPC_FUNC_IMPL(__imp__sub_8329A07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A080"))) PPC_WEAK_FUNC(sub_8329A080);
PPC_FUNC_IMPL(__imp__sub_8329A080) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A0A4"))) PPC_WEAK_FUNC(sub_8329A0A4);
PPC_FUNC_IMPL(__imp__sub_8329A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A0A8"))) PPC_WEAK_FUNC(sub_8329A0A8);
PPC_FUNC_IMPL(__imp__sub_8329A0A8) {
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

__attribute__((alias("__imp__sub_8329A0DC"))) PPC_WEAK_FUNC(sub_8329A0DC);
PPC_FUNC_IMPL(__imp__sub_8329A0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A0E0"))) PPC_WEAK_FUNC(sub_8329A0E0);
PPC_FUNC_IMPL(__imp__sub_8329A0E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,348(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A110"))) PPC_WEAK_FUNC(sub_8329A110);
PPC_FUNC_IMPL(__imp__sub_8329A110) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,348(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A140"))) PPC_WEAK_FUNC(sub_8329A140);
PPC_FUNC_IMPL(__imp__sub_8329A140) {
	PPC_FUNC_PROLOGUE();
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A15C"))) PPC_WEAK_FUNC(sub_8329A15C);
PPC_FUNC_IMPL(__imp__sub_8329A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A160"))) PPC_WEAK_FUNC(sub_8329A160);
PPC_FUNC_IMPL(__imp__sub_8329A160) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r8,360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329A190"))) PPC_WEAK_FUNC(sub_8329A190);
PPC_FUNC_IMPL(__imp__sub_8329A190) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r8,360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329A1C0"))) PPC_WEAK_FUNC(sub_8329A1C0);
PPC_FUNC_IMPL(__imp__sub_8329A1C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,348
	ctx.r3.s64 = ctx.r3.s64 + 348;
	// b 0x83299ff8
	sub_83299FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A1C8"))) PPC_WEAK_FUNC(sub_8329A1C8);
PPC_FUNC_IMPL(__imp__sub_8329A1C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r9,r11,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A200"))) PPC_WEAK_FUNC(sub_8329A200);
PPC_FUNC_IMPL(__imp__sub_8329A200) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r9,r11,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A224"))) PPC_WEAK_FUNC(sub_8329A224);
PPC_FUNC_IMPL(__imp__sub_8329A224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A228"))) PPC_WEAK_FUNC(sub_8329A228);
PPC_FUNC_IMPL(__imp__sub_8329A228) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r9,r11,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A260"))) PPC_WEAK_FUNC(sub_8329A260);
PPC_FUNC_IMPL(__imp__sub_8329A260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// b 0x83299ff8
	sub_83299FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A278"))) PPC_WEAK_FUNC(sub_8329A278);
PPC_FUNC_IMPL(__imp__sub_8329A278) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329A2B4"))) PPC_WEAK_FUNC(sub_8329A2B4);
PPC_FUNC_IMPL(__imp__sub_8329A2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A2B8"))) PPC_WEAK_FUNC(sub_8329A2B8);
PPC_FUNC_IMPL(__imp__sub_8329A2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329A2F4"))) PPC_WEAK_FUNC(sub_8329A2F4);
PPC_FUNC_IMPL(__imp__sub_8329A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A2F8"))) PPC_WEAK_FUNC(sub_8329A2F8);
PPC_FUNC_IMPL(__imp__sub_8329A2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// lwz r10,5896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5896);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,5896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5896, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A310"))) PPC_WEAK_FUNC(sub_8329A310);
PPC_FUNC_IMPL(__imp__sub_8329A310) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r5,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A338"))) PPC_WEAK_FUNC(sub_8329A338);
PPC_FUNC_IMPL(__imp__sub_8329A338) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,376
	ctx.r11.s64 = ctx.r3.s64 + 376;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8329A344:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x8329a344
	if (!ctx.cr6.eq) goto loc_8329A344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A368"))) PPC_WEAK_FUNC(sub_8329A368);
PPC_FUNC_IMPL(__imp__sub_8329A368) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r5,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,372(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r6,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r9,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r9.u32);
	// stw r9,372(r7)
	PPC_STORE_U32(ctx.r7.u32 + 372, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A3CC"))) PPC_WEAK_FUNC(sub_8329A3CC);
PPC_FUNC_IMPL(__imp__sub_8329A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A3D0"))) PPC_WEAK_FUNC(sub_8329A3D0);
PPC_FUNC_IMPL(__imp__sub_8329A3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A40C"))) PPC_WEAK_FUNC(sub_8329A40C);
PPC_FUNC_IMPL(__imp__sub_8329A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A410"))) PPC_WEAK_FUNC(sub_8329A410);
PPC_FUNC_IMPL(__imp__sub_8329A410) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r4,r11,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x8329def8
	ctx.lr = 0x8329A43C;
	sub_8329DEF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329A468;
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

__attribute__((alias("__imp__sub_8329A47C"))) PPC_WEAK_FUNC(sub_8329A47C);
PPC_FUNC_IMPL(__imp__sub_8329A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A480"))) PPC_WEAK_FUNC(sub_8329A480);
PPC_FUNC_IMPL(__imp__sub_8329A480) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 620);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8329a4b8
	if (!ctx.cr6.eq) goto loc_8329A4B8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,620(r11)
	PPC_STORE_U8(ctx.r11.u32 + 620, ctx.r10.u8);
	// bl 0x832b1c48
	ctx.lr = 0x8329A4B0;
	sub_832B1C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5508
	ctx.lr = 0x8329A4B8;
	sub_832B5508(ctx, base);
loc_8329A4B8:
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

__attribute__((alias("__imp__sub_8329A4CC"))) PPC_WEAK_FUNC(sub_8329A4CC);
PPC_FUNC_IMPL(__imp__sub_8329A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A4D0"))) PPC_WEAK_FUNC(sub_8329A4D0);
PPC_FUNC_IMPL(__imp__sub_8329A4D0) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8329a55c
	if (ctx.cr6.eq) goto loc_8329A55C;
loc_8329A508:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r10,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329A540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8329a508
	if (!ctx.cr6.eq) goto loc_8329A508;
loc_8329A55C:
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

__attribute__((alias("__imp__sub_8329A574"))) PPC_WEAK_FUNC(sub_8329A574);
PPC_FUNC_IMPL(__imp__sub_8329A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A578"))) PPC_WEAK_FUNC(sub_8329A578);
PPC_FUNC_IMPL(__imp__sub_8329A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8329A580;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r9,r31,368
	ctx.r9.s64 = ctx.r31.s64 + 368;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8329A59C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8329a5bc
	if (ctx.cr6.eq) goto loc_8329A5BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8329a59c
	if (ctx.cr6.lt) goto loc_8329A59C;
	// b 0x8329a5c0
	goto loc_8329A5C0;
loc_8329A5BC:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8329A5C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8329a5f4
	if (!ctx.cr6.lt) goto loc_8329A5F4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8329A5D0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8329a5f0
	if (ctx.cr6.eq) goto loc_8329A5F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8329a5d0
	if (ctx.cr6.lt) goto loc_8329A5D0;
	// b 0x8329a5f4
	goto loc_8329A5F4;
loc_8329A5F0:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8329A5F4:
	// cmplwi cr6,r28,48
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 48, ctx.xer);
	// blt cr6,0x8329a608
	if (ctx.cr6.lt) goto loc_8329A608;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_8329A608:
	// addi r11,r28,23
	ctx.r11.s64 = ctx.r28.s64 + 23;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329a664
	if (ctx.cr6.eq) goto loc_8329A664;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,372(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329a664
	if (ctx.cr6.eq) goto loc_8329A664;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r3,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r27,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r27.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stwx r27,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r27.u32);
	// stw r27,372(r4)
	PPC_STORE_U32(ctx.r4.u32 + 372, ctx.r27.u32);
loc_8329A664:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// rlwinm r30,r5,1,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r9,-31824
	ctx.r9.s64 = -2085617664;
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
	// stw r7,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r7.u32);
	// stw r6,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r6.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,628(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 628);
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r8,r8,2,14,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r8.u32);
	// bne cr6,0x8329a6cc
	if (!ctx.cr6.eq) goto loc_8329A6CC;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// addi r3,r8,5456
	ctx.r3.s64 = ctx.r8.s64 + 5456;
	// stw r11,628(r9)
	PPC_STORE_U32(ctx.r9.u32 + 628, ctx.r11.u32);
	// bl 0x832b5bb0
	ctx.lr = 0x8329A6C0;
	sub_832B5BB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 624, ctx.r11.u32);
	// b 0x8329a6d0
	goto loc_8329A6D0;
loc_8329A6CC:
	// lwz r11,624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
loc_8329A6D0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// sth r27,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r27.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A704"))) PPC_WEAK_FUNC(sub_8329A704);
PPC_FUNC_IMPL(__imp__sub_8329A704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A708"))) PPC_WEAK_FUNC(sub_8329A708);
PPC_FUNC_IMPL(__imp__sub_8329A708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r9,r11,27688
	ctx.r9.s64 = ctx.r11.s64 + 27688;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A724"))) PPC_WEAK_FUNC(sub_8329A724);
PPC_FUNC_IMPL(__imp__sub_8329A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A728"))) PPC_WEAK_FUNC(sub_8329A728);
PPC_FUNC_IMPL(__imp__sub_8329A728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r11,r11,27688
	ctx.r11.s64 = ctx.r11.s64 + 27688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 644, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A740"))) PPC_WEAK_FUNC(sub_8329A740);
PPC_FUNC_IMPL(__imp__sub_8329A740) {
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
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r9,r11,27688
	ctx.r9.s64 = ctx.r11.s64 + 27688;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 644, ctx.r11.u32);
	// beq 0x8329a778
	if (ctx.cr0.eq) goto loc_8329A778;
	// bl 0x82e01698
	ctx.lr = 0x8329A778;
	sub_82E01698(ctx, base);
loc_8329A778:
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

__attribute__((alias("__imp__sub_8329A790"))) PPC_WEAK_FUNC(sub_8329A790);
PPC_FUNC_IMPL(__imp__sub_8329A790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A794"))) PPC_WEAK_FUNC(sub_8329A794);
PPC_FUNC_IMPL(__imp__sub_8329A794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A798"))) PPC_WEAK_FUNC(sub_8329A798);
PPC_FUNC_IMPL(__imp__sub_8329A798) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A7A8"))) PPC_WEAK_FUNC(sub_8329A7A8);
PPC_FUNC_IMPL(__imp__sub_8329A7A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A7B8"))) PPC_WEAK_FUNC(sub_8329A7B8);
PPC_FUNC_IMPL(__imp__sub_8329A7B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A7C8"))) PPC_WEAK_FUNC(sub_8329A7C8);
PPC_FUNC_IMPL(__imp__sub_8329A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8329a7d8
	if (!ctx.cr6.eq) goto loc_8329A7D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8329A7D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A7F4"))) PPC_WEAK_FUNC(sub_8329A7F4);
PPC_FUNC_IMPL(__imp__sub_8329A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A7F8"))) PPC_WEAK_FUNC(sub_8329A7F8);
PPC_FUNC_IMPL(__imp__sub_8329A7F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A814"))) PPC_WEAK_FUNC(sub_8329A814);
PPC_FUNC_IMPL(__imp__sub_8329A814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A818"))) PPC_WEAK_FUNC(sub_8329A818);
PPC_FUNC_IMPL(__imp__sub_8329A818) {
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
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// li r31,2
	ctx.r31.s64 = 2;
loc_8329A834:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b5c58
	ctx.lr = 0x8329A83C;
	sub_832B5C58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8329a834
	if (!ctx.cr0.eq) goto loc_8329A834;
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

__attribute__((alias("__imp__sub_8329A860"))) PPC_WEAK_FUNC(sub_8329A860);
PPC_FUNC_IMPL(__imp__sub_8329A860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8329A868;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31824
	ctx.r28.s64 = -2085617664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,660(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 660);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329A88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8329a8dc
	if (!ctx.cr6.gt) goto loc_8329A8DC;
	// li r30,24
	ctx.r30.s64 = 24;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
loc_8329A89C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,660(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 660);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8329a8b8
	if (!ctx.cr6.eq) goto loc_8329A8B8;
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8329a8e8
	if (!ctx.cr6.eq) goto loc_8329A8E8;
loc_8329A8B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329A8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8329a89c
	if (ctx.cr6.lt) goto loc_8329A89C;
loc_8329A8DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_8329A8E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A8F4"))) PPC_WEAK_FUNC(sub_8329A8F4);
PPC_FUNC_IMPL(__imp__sub_8329A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A8F8"))) PPC_WEAK_FUNC(sub_8329A8F8);
PPC_FUNC_IMPL(__imp__sub_8329A8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8329A900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x832b5cc0
	ctx.lr = 0x8329A910;
	sub_832B5CC0(ctx, base);
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// beq cr6,0x8329a930
	if (ctx.cr6.eq) goto loc_8329A930;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,27816
	ctx.r11.s64 = ctx.r11.s64 + 27816;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8329a934
	goto loc_8329A934;
loc_8329A930:
	// addi r30,r11,27816
	ctx.r30.s64 = ctx.r11.s64 + 27816;
loc_8329A934:
	// lis r31,-31824
	ctx.r31.s64 = -2085617664;
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329A94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8329A954:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8329a988
	if (!ctx.cr6.lt) goto loc_8329A988;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8329a988
	if (!ctx.cr6.eq) goto loc_8329A988;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x8329a9a4
	if (!ctx.cr6.eq) goto loc_8329A9A4;
loc_8329A988:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8329a954
	if (ctx.cr6.lt) goto loc_8329A954;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_8329A9A4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A9B0"))) PPC_WEAK_FUNC(sub_8329A9B0);
PPC_FUNC_IMPL(__imp__sub_8329A9B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8329a9c8
	if (!ctx.cr6.lt) goto loc_8329A9C8;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8329A9C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A9D0"))) PPC_WEAK_FUNC(sub_8329A9D0);
PPC_FUNC_IMPL(__imp__sub_8329A9D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,9(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A9D8"))) PPC_WEAK_FUNC(sub_8329A9D8);
PPC_FUNC_IMPL(__imp__sub_8329A9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 & ctx.r4.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AA04"))) PPC_WEAK_FUNC(sub_8329AA04);
PPC_FUNC_IMPL(__imp__sub_8329AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AA08"))) PPC_WEAK_FUNC(sub_8329AA08);
PPC_FUNC_IMPL(__imp__sub_8329AA08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AA20"))) PPC_WEAK_FUNC(sub_8329AA20);
PPC_FUNC_IMPL(__imp__sub_8329AA20) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lwz r3,636(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 636);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,160(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329AA50"))) PPC_WEAK_FUNC(sub_8329AA50);
PPC_FUNC_IMPL(__imp__sub_8329AA50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AA54"))) PPC_WEAK_FUNC(sub_8329AA54);
PPC_FUNC_IMPL(__imp__sub_8329AA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AA58"))) PPC_WEAK_FUNC(sub_8329AA58);
PPC_FUNC_IMPL(__imp__sub_8329AA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AA60"))) PPC_WEAK_FUNC(sub_8329AA60);
PPC_FUNC_IMPL(__imp__sub_8329AA60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AA68"))) PPC_WEAK_FUNC(sub_8329AA68);
PPC_FUNC_IMPL(__imp__sub_8329AA68) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 + 92;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// addi r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 + 108;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AA90"))) PPC_WEAK_FUNC(sub_8329AA90);
PPC_FUNC_IMPL(__imp__sub_8329AA90) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// beq cr6,0x8329aab0
	if (ctx.cr6.eq) goto loc_8329AAB0;
	// addi r11,r4,19
	ctx.r11.s64 = ctx.r4.s64 + 19;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
loc_8329AAB0:
	// addi r11,r5,27
	ctx.r11.s64 = ctx.r5.s64 + 27;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AAC0"))) PPC_WEAK_FUNC(sub_8329AAC0);
PPC_FUNC_IMPL(__imp__sub_8329AAC0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r10,27
	ctx.r11.s64 = ctx.r10.s64 + 27;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AAEC"))) PPC_WEAK_FUNC(sub_8329AAEC);
PPC_FUNC_IMPL(__imp__sub_8329AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AAF0"))) PPC_WEAK_FUNC(sub_8329AAF0);
PPC_FUNC_IMPL(__imp__sub_8329AAF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x8329ab08
	if (!ctx.cr6.lt) goto loc_8329AB08;
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8329AB08:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AB10"))) PPC_WEAK_FUNC(sub_8329AB10);
PPC_FUNC_IMPL(__imp__sub_8329AB10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x8329ab28
	if (!ctx.cr6.lt) goto loc_8329AB28;
	// addi r11,r4,19
	ctx.r11.s64 = ctx.r4.s64 + 19;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8329AB28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AB30"))) PPC_WEAK_FUNC(sub_8329AB30);
PPC_FUNC_IMPL(__imp__sub_8329AB30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8329ab48
	if (!ctx.cr6.lt) goto loc_8329AB48;
	// addi r11,r4,27
	ctx.r11.s64 = ctx.r4.s64 + 27;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8329AB48:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AB50"))) PPC_WEAK_FUNC(sub_8329AB50);
PPC_FUNC_IMPL(__imp__sub_8329AB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8329AB58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// li r31,2
	ctx.r31.s64 = 2;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_8329AB70:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b5c40
	ctx.lr = 0x8329AB7C;
	sub_832B5C40(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8329ab70
	if (!ctx.cr0.eq) goto loc_8329AB70;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r27,40
	ctx.r11.s64 = ctx.r27.s64 + 40;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8329AB98:
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8329ab98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329AB98;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329ABAC"))) PPC_WEAK_FUNC(sub_8329ABAC);
PPC_FUNC_IMPL(__imp__sub_8329ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ABB0"))) PPC_WEAK_FUNC(sub_8329ABB0);
PPC_FUNC_IMPL(__imp__sub_8329ABB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x8329ABB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8329ac40
	if (!ctx.cr6.lt) goto loc_8329AC40;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bge cr6,0x8329ac20
	if (!ctx.cr6.lt) goto loc_8329AC20;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
loc_8329ABE8:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8329ac0c
	if (ctx.cr6.eq) goto loc_8329AC0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8329ac0c
	if (!ctx.cr6.eq) goto loc_8329AC0C;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b5c40
	ctx.lr = 0x8329AC0C;
	sub_832B5C40(ctx, base);
loc_8329AC0C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8329abe8
	if (ctx.cr6.lt) goto loc_8329ABE8;
loc_8329AC20:
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x832b5c40
	ctx.lr = 0x8329AC34;
	sub_832B5C40(ctx, base);
	// addi r11,r27,15
	ctx.r11.s64 = ctx.r27.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r26.u32);
loc_8329AC40:
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bge cr6,0x8329aca8
	if (!ctx.cr6.lt) goto loc_8329ACA8;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bge cr6,0x8329ac9c
	if (!ctx.cr6.lt) goto loc_8329AC9C;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 + 52;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8329AC60:
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8329ac84
	if (ctx.cr6.eq) goto loc_8329AC84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8329ac84
	if (!ctx.cr6.eq) goto loc_8329AC84;
	// addi r10,r26,11
	ctx.r10.s64 = ctx.r26.s64 + 11;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r8,r28
	PPC_STORE_U32(ctx.r8.u32 + ctx.r28.u32, ctx.r27.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_8329AC84:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8329ac60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329AC60;
	// addi r11,r26,11
	ctx.r11.s64 = ctx.r26.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r27.u32);
loc_8329AC9C:
	// addi r11,r26,13
	ctx.r11.s64 = ctx.r26.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r27.u32);
loc_8329ACA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329ACB0"))) PPC_WEAK_FUNC(sub_8329ACB0);
PPC_FUNC_IMPL(__imp__sub_8329ACB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8329ACB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8329acf4
	if (!ctx.cr6.lt) goto loc_8329ACF4;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x832b5c40
	ctx.lr = 0x8329ACE8;
	sub_832B5C40(ctx, base);
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
loc_8329ACF4:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bge cr6,0x8329ad08
	if (!ctx.cr6.lt) goto loc_8329AD08;
	// addi r11,r28,13
	ctx.r11.s64 = ctx.r28.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
loc_8329AD08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329AD10"))) PPC_WEAK_FUNC(sub_8329AD10);
PPC_FUNC_IMPL(__imp__sub_8329AD10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8329ad28
	if (!ctx.cr6.lt) goto loc_8329AD28;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8329AD28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AD30"))) PPC_WEAK_FUNC(sub_8329AD30);
PPC_FUNC_IMPL(__imp__sub_8329AD30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8329ad48
	if (!ctx.cr6.lt) goto loc_8329AD48;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8329AD48:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AD50"))) PPC_WEAK_FUNC(sub_8329AD50);
PPC_FUNC_IMPL(__imp__sub_8329AD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8329AD58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8329abb0
	ctx.lr = 0x8329AD70;
	sub_8329ABB0(ctx, base);
	// addi r11,r29,23
	ctx.r11.s64 = ctx.r29.s64 + 23;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
	// beq cr6,0x8329ad90
	if (ctx.cr6.eq) goto loc_8329AD90;
	// addi r11,r29,19
	ctx.r11.s64 = ctx.r29.s64 + 19;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
loc_8329AD90:
	// addi r11,r31,27
	ctx.r11.s64 = ctx.r31.s64 + 27;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329ADA4"))) PPC_WEAK_FUNC(sub_8329ADA4);
PPC_FUNC_IMPL(__imp__sub_8329ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ADA8"))) PPC_WEAK_FUNC(sub_8329ADA8);
PPC_FUNC_IMPL(__imp__sub_8329ADA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x8329addc
	if (!ctx.cr6.lt) goto loc_8329ADDC;
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8329addc
	if (ctx.cr6.eq) goto loc_8329ADDC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8329addc
	if (!ctx.cr6.lt) goto loc_8329ADDC;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8329ADDC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329ADE4"))) PPC_WEAK_FUNC(sub_8329ADE4);
PPC_FUNC_IMPL(__imp__sub_8329ADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ADE8"))) PPC_WEAK_FUNC(sub_8329ADE8);
PPC_FUNC_IMPL(__imp__sub_8329ADE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8329ae1c
	if (!ctx.cr6.lt) goto loc_8329AE1C;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8329ae1c
	if (ctx.cr6.eq) goto loc_8329AE1C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8329ae1c
	if (!ctx.cr6.lt) goto loc_8329AE1C;
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8329AE1C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329AE24"))) PPC_WEAK_FUNC(sub_8329AE24);
PPC_FUNC_IMPL(__imp__sub_8329AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AE28"))) PPC_WEAK_FUNC(sub_8329AE28);
PPC_FUNC_IMPL(__imp__sub_8329AE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8329AE30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8329AE44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b5c08
	ctx.lr = 0x8329AE4C;
	sub_832B5C08(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bge 0x8329ae44
	if (!ctx.cr0.lt) goto loc_8329AE44;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r10,34
	ctx.r10.s64 = 34;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r31,64
	ctx.r27.s64 = ctx.r31.s64 + 64;
	// stw r31,648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 648, ctx.r31.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// stb r26,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r26.u8);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
loc_8329AE88:
	// stb r29,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r29.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b5c40
	ctx.lr = 0x8329AE98;
	sub_832B5C40(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r30,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r30.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// stwu r30,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8329ae88
	if (ctx.cr6.lt) goto loc_8329AE88;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8329AEBC:
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8329aebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329AEBC;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8329AED8:
	// stw r30,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r30.u32);
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8329aed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329AED8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r26,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r26.u32);
	// stb r26,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r26.u8);
	// stb r26,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329AF18"))) PPC_WEAK_FUNC(sub_8329AF18);
PPC_FUNC_IMPL(__imp__sub_8329AF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8329AF20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x832b5c28
	ctx.lr = 0x8329AF44;
	sub_832B5C28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329abb0
	ctx.lr = 0x8329AF5C;
	sub_8329ABB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329AF64"))) PPC_WEAK_FUNC(sub_8329AF64);
PPC_FUNC_IMPL(__imp__sub_8329AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AF68"))) PPC_WEAK_FUNC(sub_8329AF68);
PPC_FUNC_IMPL(__imp__sub_8329AF68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8329af84
	if (!ctx.cr6.lt) goto loc_8329AF84;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8329af8c
	if (!ctx.cr6.eq) goto loc_8329AF8C;
loc_8329AF84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8329AF8C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x832b5bc8
	sub_832B5BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329AF9C"))) PPC_WEAK_FUNC(sub_8329AF9C);
PPC_FUNC_IMPL(__imp__sub_8329AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AFA0"))) PPC_WEAK_FUNC(sub_8329AFA0);
PPC_FUNC_IMPL(__imp__sub_8329AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x8329AFA8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r16,-31824
	ctx.r16.s64 = -2085617664;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r3,660(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329b530
	if (ctx.cr6.eq) goto loc_8329B530;
	// lbz r11,9(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329affc
	if (ctx.cr6.eq) goto loc_8329AFFC;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8329affc
	if (ctx.cr6.eq) goto loc_8329AFFC;
	// addi r30,r20,12
	ctx.r30.s64 = ctx.r20.s64 + 12;
	// li r31,2
	ctx.r31.s64 = 2;
loc_8329AFE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b5c58
	ctx.lr = 0x8329AFE8;
	sub_832B5C58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8329afe0
	if (!ctx.cr0.eq) goto loc_8329AFE0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
loc_8329AFFC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// li r14,-1
	ctx.r14.s64 = -1;
	// addi r17,r20,12
	ctx.r17.s64 = ctx.r20.s64 + 12;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
	// stw r14,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r14.u32);
	// bne cr6,0x8329b038
	if (!ctx.cr6.eq) goto loc_8329B038;
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8329b038
	if (ctx.cr6.eq) goto loc_8329B038;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8329B038:
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8329b060
	if (!ctx.cr6.eq) goto loc_8329B060;
	// lwz r11,32(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8329b060
	if (ctx.cr6.eq) goto loc_8329B060;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8329B060:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329B070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// li r30,576
	ctx.r30.s64 = 576;
	// addi r22,r1,80
	ctx.r22.s64 = ctx.r1.s64 + 80;
	// addi r21,r20,52
	ctx.r21.s64 = ctx.r20.s64 + 52;
	// lis r18,-31824
	ctx.r18.s64 = -2085617664;
	// lis r19,-31824
	ctx.r19.s64 = -2085617664;
loc_8329B08C:
	// lwz r11,656(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 656);
	// addi r26,r30,-576
	ctx.r26.s64 = ctx.r30.s64 + -576;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lbz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8329b248
	if (ctx.cr6.eq) goto loc_8329B248;
	// lwz r3,636(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 636);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329B0C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8329b10c
	if (ctx.cr6.eq) goto loc_8329B10C;
	// lwz r3,636(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 636);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329B0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8329b0f4
	if (ctx.cr6.eq) goto loc_8329B0F4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8329b10c
	if (!ctx.cr6.eq) goto loc_8329B10C;
loc_8329B0F4:
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bge cr6,0x8329b108
	if (!ctx.cr6.lt) goto loc_8329B108;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8329b10c
	if (!ctx.cr6.eq) goto loc_8329B10C;
loc_8329B108:
	// li r24,1
	ctx.r24.s64 = 1;
loc_8329B10C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8329b184
	if (ctx.cr6.eq) goto loc_8329B184;
	// li r31,24
	ctx.r31.s64 = 24;
	// addi r29,r20,16
	ctx.r29.s64 = ctx.r20.s64 + 16;
loc_8329B11C:
	// lwz r11,660(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 660);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8329b174
	if (ctx.cr6.gt) goto loc_8329B174;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8329b14c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B14C;
	// bdzf 4*cr6+eq,0x8329b174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B174;
	// bdzf 4*cr6+eq,0x8329b14c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B14C;
	// bdzf 4*cr6+eq,0x8329b174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B174;
	// bne cr6,0x8329b14c
	if (!ctx.cr6.eq) goto loc_8329B14C;
loc_8329B14C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8329b174
	if (!ctx.cr6.eq) goto loc_8329B174;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,656(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 656);
	// bl 0x82d6da88
	ctx.lr = 0x8329B164;
	sub_82D6DA88(ctx, base);
	// rlwinm r11,r3,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329b174
	if (ctx.cr6.eq) goto loc_8329B174;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8329B174:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x8329b11c
	if (ctx.cr6.lt) goto loc_8329B11C;
loc_8329B184:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,656(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 656);
	// bl 0x82d6da88
	ctx.lr = 0x8329B190;
	sub_82D6DA88(ctx, base);
	// rlwinm r28,r3,0,13,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7FFF0;
	// rlwinm r28,r28,0,27,13
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFC001F;
	// addic r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// subfe r11,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8329b1b8
	if (!ctx.cr6.eq) goto loc_8329B1B8;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8329b248
	if (ctx.cr6.eq) goto loc_8329B248;
loc_8329B1B8:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329b220
	if (ctx.cr6.eq) goto loc_8329B220;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8329b220
	if (ctx.cr6.eq) goto loc_8329B220;
	// lwz r11,656(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 656);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r31,r10,r20
	ctx.r31.u64 = ctx.r10.u64 + ctx.r20.u64;
	// addi r10,r11,568
	ctx.r10.s64 = ctx.r11.s64 + 568;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r9.u32);
	// lwz r11,656(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 656);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stwx r7,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r11,656(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 656);
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// oris r5,r6,32764
	ctx.r5.u64 = ctx.r6.u64 | 2147221504;
	// stwx r5,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x832b5c28
	ctx.lr = 0x8329B218;
	sub_832B5C28(ctx, base);
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// b 0x8329b248
	goto loc_8329B248;
loc_8329B220:
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bge cr6,0x8329b234
	if (!ctx.cr6.lt) goto loc_8329B234;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8329b248
	if (!ctx.cr6.eq) goto loc_8329B248;
loc_8329B234:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8329a860
	ctx.lr = 0x8329B23C;
	sub_8329A860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8329b264
	if (!ctx.cr6.eq) goto loc_8329B264;
loc_8329B248:
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpwi cr6,r30,704
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 704, ctx.xer);
	// blt cr6,0x8329b08c
	if (ctx.cr6.lt) goto loc_8329B08C;
	// b 0x8329b328
	goto loc_8329B328;
loc_8329B264:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329b2e8
	if (ctx.cr6.eq) goto loc_8329B2E8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x8329b2e8
	if (!ctx.cr6.eq) goto loc_8329B2E8;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8329B27C:
	// lwz r3,636(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 636);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329B294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8329b2d8
	if (ctx.cr6.eq) goto loc_8329B2D8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8329a860
	ctx.lr = 0x8329B2A4;
	sub_8329A860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8329b2d8
	if (ctx.cr6.eq) goto loc_8329B2D8;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x832b5c28
	ctx.lr = 0x8329B2C4;
	sub_832B5C28(ctx, base);
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8329abb0
	ctx.lr = 0x8329B2D8;
	sub_8329ABB0(ctx, base);
loc_8329B2D8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8329b27c
	if (ctx.cr6.lt) goto loc_8329B27C;
	// b 0x8329b310
	goto loc_8329B310;
loc_8329B2E8:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x832b5c28
	ctx.lr = 0x8329B2FC;
	sub_832B5C28(ctx, base);
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8329abb0
	ctx.lr = 0x8329B310;
	sub_8329ABB0(ctx, base);
loc_8329B310:
	// rlwinm r5,r28,0,1,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7FFFFFE0;
	// lwz r3,656(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 656);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rlwinm r5,r5,0,26,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFC003F;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// bl 0x82c10e98
	ctx.lr = 0x8329B328;
	sub_82C10E98(ctx, base);
loc_8329B328:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r29,24
	ctx.r29.s64 = 24;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// addi r26,r20,36
	ctx.r26.s64 = ctx.r20.s64 + 36;
loc_8329B33C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8329b518
	if (ctx.cr6.gt) goto loc_8329B518;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8329b3d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B3D8;
	// bdzf 4*cr6+eq,0x8329b480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B480;
	// bdzf 4*cr6+eq,0x8329b4c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B4C8;
	// bdzf 4*cr6+eq,0x8329b518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B518;
	// bdzf 4*cr6+eq,0x8329b480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B480;
	// bdzf 4*cr6+eq,0x8329b518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329B518;
	// bne cr6,0x8329b480
	if (!ctx.cr6.eq) goto loc_8329B480;
	// and r11,r27,r15
	ctx.r11.u64 = ctx.r27.u64 & ctx.r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329b39c
	if (ctx.cr6.eq) goto loc_8329B39C;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bge cr6,0x8329b518
	if (!ctx.cr6.lt) goto loc_8329B518;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8329b518
	if (ctx.cr6.eq) goto loc_8329B518;
loc_8329B38C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5c28
	ctx.lr = 0x8329B398;
	sub_832B5C28(ctx, base);
	// b 0x8329b518
	goto loc_8329B518;
loc_8329B39C:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bge cr6,0x8329b518
	if (!ctx.cr6.lt) goto loc_8329B518;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8329b518
	if (ctx.cr6.eq) goto loc_8329B518;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5c40
	ctx.lr = 0x8329B3BC;
	sub_832B5C40(ctx, base);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// stwx r14,r26,r29
	PPC_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r14.u32);
	// bge cr6,0x8329b518
	if (!ctx.cr6.lt) goto loc_8329B518;
	// addi r11,r30,13
	ctx.r11.s64 = ctx.r30.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r14,r10,r20
	PPC_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r14.u32);
	// b 0x8329b518
	goto loc_8329B518;
loc_8329B3D8:
	// lwz r11,660(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 660);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8329b518
	if (ctx.cr6.gt) goto loc_8329B518;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329b41c
	if (ctx.cr6.eq) goto loc_8329B41C;
	// bdz 0x8329b518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B518;
	// bdz 0x8329b40c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B40C;
	// bdz 0x8329b41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B41C;
	// bdz 0x8329b510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B510;
	// bdz 0x8329b500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B500;
	// bdz 0x8329b41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B41C;
loc_8329B40C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5c28
	ctx.lr = 0x8329B418;
	sub_832B5C28(ctx, base);
	// b 0x8329b518
	goto loc_8329B518;
loc_8329B41C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8329b518
	if (ctx.cr6.eq) goto loc_8329B518;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r9,116(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 116);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8329b460
	if (!ctx.cr6.lt) goto loc_8329B460;
	// lwz r11,656(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 656);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,568
	ctx.r10.s64 = ctx.r11.s64 + 568;
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r9.u32);
	// b 0x8329b518
	goto loc_8329B518;
loc_8329B460:
	// lwz r11,660(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8329b514
	if (!ctx.cr6.eq) goto loc_8329B514;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x832b5c28
	ctx.lr = 0x8329B47C;
	sub_832B5C28(ctx, base);
	// b 0x8329b518
	goto loc_8329B518;
loc_8329B480:
	// lwz r11,660(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 660);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8329b518
	if (ctx.cr6.gt) goto loc_8329B518;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329b510
	if (ctx.cr6.eq) goto loc_8329B510;
	// bdz 0x8329b518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B518;
	// bdz 0x8329b40c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B40C;
	// bdz 0x8329b4b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B4B8;
	// bdz 0x8329b510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B510;
	// bdz 0x8329b500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B500;
	// bdz 0x8329b510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B510;
	// b 0x8329b40c
	goto loc_8329B40C;
loc_8329B4B8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5c28
	ctx.lr = 0x8329B4C4;
	sub_832B5C28(ctx, base);
	// b 0x8329b518
	goto loc_8329B518;
loc_8329B4C8:
	// lwz r11,660(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 660);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8329b518
	if (ctx.cr6.gt) goto loc_8329B518;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329b510
	if (ctx.cr6.eq) goto loc_8329B510;
	// bdz 0x8329b518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B518;
	// bdz 0x8329b38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B38C;
	// bdz 0x8329b518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B518;
	// bdz 0x8329b510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B510;
	// bdz 0x8329b500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B500;
	// bdz 0x8329b510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8329B510;
	// b 0x8329b38c
	goto loc_8329B38C;
loc_8329B500:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5c28
	ctx.lr = 0x8329B50C;
	sub_832B5C28(ctx, base);
	// b 0x8329b518
	goto loc_8329B518;
loc_8329B510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8329B514:
	// bl 0x832b5c58
	ctx.lr = 0x8329B518;
	sub_832B5C58(ctx, base);
loc_8329B518:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// blt cr6,0x8329b33c
	if (ctx.cr6.lt) goto loc_8329B33C;
loc_8329B530:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B538"))) PPC_WEAK_FUNC(sub_8329B538);
PPC_FUNC_IMPL(__imp__sub_8329B538) {
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
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// addi r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 + 92;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// addi r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 + 108;
	// bl 0x8329ab50
	ctx.lr = 0x8329B578;
	sub_8329AB50(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8329B57C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329abb0
	ctx.lr = 0x8329B58C;
	sub_8329ABB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8329b57c
	if (ctx.cr6.lt) goto loc_8329B57C;
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

__attribute__((alias("__imp__sub_8329B5B0"))) PPC_WEAK_FUNC(sub_8329B5B0);
PPC_FUNC_IMPL(__imp__sub_8329B5B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B5C0"))) PPC_WEAK_FUNC(sub_8329B5C0);
PPC_FUNC_IMPL(__imp__sub_8329B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
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

__attribute__((alias("__imp__sub_8329B5D8"))) PPC_WEAK_FUNC(sub_8329B5D8);
PPC_FUNC_IMPL(__imp__sub_8329B5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8329B5E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_8329B5F4:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-19024
	ctx.r6.s64 = ctx.r11.s64 + -19024;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82480080
	ctx.lr = 0x8329B60C;
	sub_82480080(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bge 0x8329b5f4
	if (!ctx.cr0.lt) goto loc_8329B5F4;
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_8329B624:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-19024
	ctx.r6.s64 = ctx.r11.s64 + -19024;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82480080
	ctx.lr = 0x8329B63C;
	sub_82480080(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bge 0x8329b624
	if (!ctx.cr0.lt) goto loc_8329B624;
	// addi r11,r31,564
	ctx.r11.s64 = ctx.r31.s64 + 564;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_8329B654:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-19024
	ctx.r6.s64 = ctx.r11.s64 + -19024;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82480080
	ctx.lr = 0x8329B66C;
	sub_82480080(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bge 0x8329b654
	if (!ctx.cr0.lt) goto loc_8329B654;
	// addi r11,r31,692
	ctx.r11.s64 = ctx.r31.s64 + 692;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
loc_8329B684:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-19024
	ctx.r6.s64 = ctx.r11.s64 + -19024;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82480080
	ctx.lr = 0x8329B69C;
	sub_82480080(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bge 0x8329b684
	if (!ctx.cr0.lt) goto loc_8329B684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B6B4"))) PPC_WEAK_FUNC(sub_8329B6B4);
PPC_FUNC_IMPL(__imp__sub_8329B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B6B8"))) PPC_WEAK_FUNC(sub_8329B6B8);
PPC_FUNC_IMPL(__imp__sub_8329B6B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B6D8"))) PPC_WEAK_FUNC(sub_8329B6D8);
PPC_FUNC_IMPL(__imp__sub_8329B6D8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r6,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B704"))) PPC_WEAK_FUNC(sub_8329B704);
PPC_FUNC_IMPL(__imp__sub_8329B704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B708"))) PPC_WEAK_FUNC(sub_8329B708);
PPC_FUNC_IMPL(__imp__sub_8329B708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8329b720
	if (ctx.cr6.eq) goto loc_8329B720;
	// twi 31,r0,22
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8329B720:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B728"))) PPC_WEAK_FUNC(sub_8329B728);
PPC_FUNC_IMPL(__imp__sub_8329B728) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8329b75c
	if (ctx.cr6.eq) goto loc_8329B75C;
	// twi 31,r0,22
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8329b788
	goto loc_8329B788;
loc_8329B75C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8329b778
	if (ctx.cr6.eq) goto loc_8329B778;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832b5d40
	ctx.lr = 0x8329B778;
	sub_832B5D40(ctx, base);
loc_8329B778:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8329B788:
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

__attribute__((alias("__imp__sub_8329B7A0"))) PPC_WEAK_FUNC(sub_8329B7A0);
PPC_FUNC_IMPL(__imp__sub_8329B7A0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8329b7d4
	if (ctx.cr6.eq) goto loc_8329B7D4;
	// twi 31,r0,22
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8329b80c
	goto loc_8329B80C;
loc_8329B7D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8329b7f4
	if (ctx.cr6.eq) goto loc_8329B7F4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832b5d40
	ctx.lr = 0x8329B7F4;
	sub_832B5D40(ctx, base);
loc_8329B7F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8329B80C:
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

__attribute__((alias("__imp__sub_8329B824"))) PPC_WEAK_FUNC(sub_8329B824);
PPC_FUNC_IMPL(__imp__sub_8329B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B828"))) PPC_WEAK_FUNC(sub_8329B828);
PPC_FUNC_IMPL(__imp__sub_8329B828) {
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
	// sth r4,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// bl 0x8329b728
	ctx.lr = 0x8329B844;
	sub_8329B728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B854"))) PPC_WEAK_FUNC(sub_8329B854);
PPC_FUNC_IMPL(__imp__sub_8329B854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B858"))) PPC_WEAK_FUNC(sub_8329B858);
PPC_FUNC_IMPL(__imp__sub_8329B858) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8329b728
	ctx.lr = 0x8329B874;
	sub_8329B728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B884"))) PPC_WEAK_FUNC(sub_8329B884);
PPC_FUNC_IMPL(__imp__sub_8329B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B888"))) PPC_WEAK_FUNC(sub_8329B888);
PPC_FUNC_IMPL(__imp__sub_8329B888) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8329b7a0
	ctx.lr = 0x8329B8A0;
	sub_8329B7A0(ctx, base);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B8B4"))) PPC_WEAK_FUNC(sub_8329B8B4);
PPC_FUNC_IMPL(__imp__sub_8329B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B8B8"))) PPC_WEAK_FUNC(sub_8329B8B8);
PPC_FUNC_IMPL(__imp__sub_8329B8B8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8329b7a0
	ctx.lr = 0x8329B8D0;
	sub_8329B7A0(ctx, base);
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

__attribute__((alias("__imp__sub_8329B8E4"))) PPC_WEAK_FUNC(sub_8329B8E4);
PPC_FUNC_IMPL(__imp__sub_8329B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B8E8"))) PPC_WEAK_FUNC(sub_8329B8E8);
PPC_FUNC_IMPL(__imp__sub_8329B8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r9,r11,27880
	ctx.r9.s64 = ctx.r11.s64 + 27880;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 668, ctx.r3.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B908"))) PPC_WEAK_FUNC(sub_8329B908);
PPC_FUNC_IMPL(__imp__sub_8329B908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r10,r4,6
	ctx.r10.s64 = ctx.r4.s64 + 6;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B920"))) PPC_WEAK_FUNC(sub_8329B920);
PPC_FUNC_IMPL(__imp__sub_8329B920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// lbz r10,5904(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5904);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329B94C"))) PPC_WEAK_FUNC(sub_8329B94C);
PPC_FUNC_IMPL(__imp__sub_8329B94C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B950"))) PPC_WEAK_FUNC(sub_8329B950);
PPC_FUNC_IMPL(__imp__sub_8329B950) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329B96C"))) PPC_WEAK_FUNC(sub_8329B96C);
PPC_FUNC_IMPL(__imp__sub_8329B96C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B970"))) PPC_WEAK_FUNC(sub_8329B970);
PPC_FUNC_IMPL(__imp__sub_8329B970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B974"))) PPC_WEAK_FUNC(sub_8329B974);
PPC_FUNC_IMPL(__imp__sub_8329B974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B978"))) PPC_WEAK_FUNC(sub_8329B978);
PPC_FUNC_IMPL(__imp__sub_8329B978) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B984"))) PPC_WEAK_FUNC(sub_8329B984);
PPC_FUNC_IMPL(__imp__sub_8329B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B988"))) PPC_WEAK_FUNC(sub_8329B988);
PPC_FUNC_IMPL(__imp__sub_8329B988) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B990"))) PPC_WEAK_FUNC(sub_8329B990);
PPC_FUNC_IMPL(__imp__sub_8329B990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329b9b0
	if (ctx.cr6.eq) goto loc_8329B9B0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8329B9B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B9BC"))) PPC_WEAK_FUNC(sub_8329B9BC);
PPC_FUNC_IMPL(__imp__sub_8329B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B9C0"))) PPC_WEAK_FUNC(sub_8329B9C0);
PPC_FUNC_IMPL(__imp__sub_8329B9C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// bl 0x8329a9d0
	ctx.lr = 0x8329B9E0;
	sub_8329A9D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8329ba00
	if (!ctx.cr6.eq) goto loc_8329BA00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BA00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329BA00:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lbz r10,664(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 664);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8329ba38
	if (ctx.cr6.eq) goto loc_8329BA38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8329BA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329BA38:
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

__attribute__((alias("__imp__sub_8329BA4C"))) PPC_WEAK_FUNC(sub_8329BA4C);
PPC_FUNC_IMPL(__imp__sub_8329BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BA50"))) PPC_WEAK_FUNC(sub_8329BA50);
PPC_FUNC_IMPL(__imp__sub_8329BA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329BA64"))) PPC_WEAK_FUNC(sub_8329BA64);
PPC_FUNC_IMPL(__imp__sub_8329BA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BA68"))) PPC_WEAK_FUNC(sub_8329BA68);
PPC_FUNC_IMPL(__imp__sub_8329BA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329BA90"))) PPC_WEAK_FUNC(sub_8329BA90);
PPC_FUNC_IMPL(__imp__sub_8329BA90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BA94"))) PPC_WEAK_FUNC(sub_8329BA94);
PPC_FUNC_IMPL(__imp__sub_8329BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BA98"))) PPC_WEAK_FUNC(sub_8329BA98);
PPC_FUNC_IMPL(__imp__sub_8329BA98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329BAC0"))) PPC_WEAK_FUNC(sub_8329BAC0);
PPC_FUNC_IMPL(__imp__sub_8329BAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BAC4"))) PPC_WEAK_FUNC(sub_8329BAC4);
PPC_FUNC_IMPL(__imp__sub_8329BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BAC8"))) PPC_WEAK_FUNC(sub_8329BAC8);
PPC_FUNC_IMPL(__imp__sub_8329BAC8) {
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
	// bl 0x832b5cc0
	ctx.lr = 0x8329BAD8;
	sub_832B5CC0(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BAEC"))) PPC_WEAK_FUNC(sub_8329BAEC);
PPC_FUNC_IMPL(__imp__sub_8329BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BAF0"))) PPC_WEAK_FUNC(sub_8329BAF0);
PPC_FUNC_IMPL(__imp__sub_8329BAF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329BB10"))) PPC_WEAK_FUNC(sub_8329BB10);
PPC_FUNC_IMPL(__imp__sub_8329BB10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BB14"))) PPC_WEAK_FUNC(sub_8329BB14);
PPC_FUNC_IMPL(__imp__sub_8329BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BB18"))) PPC_WEAK_FUNC(sub_8329BB18);
PPC_FUNC_IMPL(__imp__sub_8329BB18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329BB38"))) PPC_WEAK_FUNC(sub_8329BB38);
PPC_FUNC_IMPL(__imp__sub_8329BB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BB3C"))) PPC_WEAK_FUNC(sub_8329BB3C);
PPC_FUNC_IMPL(__imp__sub_8329BB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BB40"))) PPC_WEAK_FUNC(sub_8329BB40);
PPC_FUNC_IMPL(__imp__sub_8329BB40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329BB60"))) PPC_WEAK_FUNC(sub_8329BB60);
PPC_FUNC_IMPL(__imp__sub_8329BB60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BB64"))) PPC_WEAK_FUNC(sub_8329BB64);
PPC_FUNC_IMPL(__imp__sub_8329BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BB68"))) PPC_WEAK_FUNC(sub_8329BB68);
PPC_FUNC_IMPL(__imp__sub_8329BB68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r3,24
	ctx.r4.s64 = ctx.r3.s64 + 24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329BB90"))) PPC_WEAK_FUNC(sub_8329BB90);
PPC_FUNC_IMPL(__imp__sub_8329BB90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BB94"))) PPC_WEAK_FUNC(sub_8329BB94);
PPC_FUNC_IMPL(__imp__sub_8329BB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BB98"))) PPC_WEAK_FUNC(sub_8329BB98);
PPC_FUNC_IMPL(__imp__sub_8329BB98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8329BBAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x8329bbdc
	if (ctx.cr6.gt) goto loc_8329BBDC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8329bbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329BBD8;
	// bdzf 4*cr6+eq,0x8329bbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329BBDC;
	// bdzf 4*cr6+eq,0x8329bbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329BBD8;
	// bdzf 4*cr6+eq,0x8329bbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8329BBDC;
	// bne cr6,0x8329bbd8
	if (!ctx.cr6.eq) goto loc_8329BBD8;
loc_8329BBD8:
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
loc_8329BBDC:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bne 0x8329bbac
	if (!ctx.cr0.eq) goto loc_8329BBAC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BBF0"))) PPC_WEAK_FUNC(sub_8329BBF0);
PPC_FUNC_IMPL(__imp__sub_8329BBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8329BBF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 648);
	// bl 0x8329a9d8
	ctx.lr = 0x8329BC14;
	sub_8329A9D8(ctx, base);
	// lwz r11,648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 648);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8329BC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8329BC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8329BC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329bc84
	if (ctx.cr6.eq) goto loc_8329BC84;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329BC84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329BCA0"))) PPC_WEAK_FUNC(sub_8329BCA0);
PPC_FUNC_IMPL(__imp__sub_8329BCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8329BCA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r28.u32);
	// beq cr6,0x8329bcd8
	if (ctx.cr6.eq) goto loc_8329BCD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_8329BCD8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329bd6c
	if (ctx.cr6.eq) goto loc_8329BD6C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r28.u32);
	// lis r29,-31824
	ctx.r29.s64 = -2085617664;
loc_8329BCF0:
	// lis r5,32764
	ctx.r5.s64 = 2147221504;
	// lwz r3,656(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,48
	ctx.r5.u64 = ctx.r5.u64 | 48;
	// bl 0x82c10e98
	ctx.lr = 0x8329BD04;
	sub_82C10E98(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8329bcf0
	if (ctx.cr6.lt) goto loc_8329BCF0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8329bd30
	if (ctx.cr6.eq) goto loc_8329BD30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329BD30:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-31824
	ctx.r31.s64 = -2085617664;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r28.u8);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8329BD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r11.u8);
loc_8329BD6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329BD74"))) PPC_WEAK_FUNC(sub_8329BD74);
PPC_FUNC_IMPL(__imp__sub_8329BD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BD78"))) PPC_WEAK_FUNC(sub_8329BD78);
PPC_FUNC_IMPL(__imp__sub_8329BD78) {
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
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r9,-31824
	ctx.r9.s64 = -2085617664;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r11,1904(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1904);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1904(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1904, ctx.r11.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r8,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r8.u8);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lwz r4,36(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8329BDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,33(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// beq cr6,0x8329bdfc
	if (ctx.cr6.eq) goto loc_8329BDFC;
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BDFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329BDFC:
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

__attribute__((alias("__imp__sub_8329BE10"))) PPC_WEAK_FUNC(sub_8329BE10);
PPC_FUNC_IMPL(__imp__sub_8329BE10) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329be64
	if (ctx.cr6.eq) goto loc_8329BE64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8329be64
	if (ctx.cr6.eq) goto loc_8329BE64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329BE64:
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

__attribute__((alias("__imp__sub_8329BE78"))) PPC_WEAK_FUNC(sub_8329BE78);
PPC_FUNC_IMPL(__imp__sub_8329BE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8329BE80;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8329b8b8
	ctx.lr = 0x8329BE94;
	sub_8329B8B8(ctx, base);
	// lis r11,-30601
	ctx.r11.s64 = -2005467136;
	// ori r10,r11,26197
	ctx.r10.u64 = ctx.r11.u64 | 26197;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8329beb0
	if (ctx.cr6.eq) goto loc_8329BEB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_8329BEB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329b8b8
	ctx.lr = 0x8329BEB8;
	sub_8329B8B8(ctx, base);
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,1876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1876, ctx.r11.u32);
	// bl 0x8329b8b8
	ctx.lr = 0x8329BECC;
	sub_8329B8B8(ctx, base);
	// stw r3,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r3.u32);
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8329BEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8329bf20
	if (ctx.cr6.eq) goto loc_8329BF20;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8329bf20
	if (ctx.cr6.eq) goto loc_8329BF20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329BF1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_8329BF20:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// bl 0x8329aa58
	ctx.lr = 0x8329BF2C;
	sub_8329AA58(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x832b5cc0
	ctx.lr = 0x8329BF34;
	sub_832B5CC0(ctx, base);
	// lwz r27,36(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8329bfe0
	if (ctx.cr6.eq) goto loc_8329BFE0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lis r26,-31824
	ctx.r26.s64 = -2085617664;
loc_8329BF50:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8329bfc8
	if (!ctx.cr6.eq) goto loc_8329BFC8;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8329bfc8
	if (!ctx.cr6.lt) goto loc_8329BFC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329b8b8
	ctx.lr = 0x8329BF74;
	sub_8329B8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329b8b8
	ctx.lr = 0x8329BF80;
	sub_8329B8B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8329bff8
	if (!ctx.cr6.eq) goto loc_8329BFF8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8329bfa8
	if (ctx.cr6.gt) goto loc_8329BFA8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8329bfac
	if (!ctx.cr6.gt) goto loc_8329BFAC;
loc_8329BFA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8329BFAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329bff8
	if (ctx.cr6.eq) goto loc_8329BFF8;
	// lwz r11,644(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 644);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832d6720
	ctx.lr = 0x8329BFC8;
	sub_832D6720(ctx, base);
loc_8329BFC8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8329bf50
	if (!ctx.cr6.eq) goto loc_8329BF50;
loc_8329BFE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329b8b8
	ctx.lr = 0x8329BFE8;
	sub_8329B8B8(ctx, base);
	// lis r11,17459
	ctx.r11.s64 = 1144193024;
	// ori r10,r11,8721
	ctx.r10.u64 = ctx.r11.u64 | 8721;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8329c008
	if (ctx.cr6.eq) goto loc_8329C008;
loc_8329BFF8:
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
loc_8329C008:
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329c028
	if (ctx.cr6.eq) goto loc_8329C028;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,24
	ctx.r4.s64 = ctx.r24.s64 + 24;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329C028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8329C028:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C034"))) PPC_WEAK_FUNC(sub_8329C034);
PPC_FUNC_IMPL(__imp__sub_8329C034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C038"))) PPC_WEAK_FUNC(sub_8329C038);
PPC_FUNC_IMPL(__imp__sub_8329C038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x8329C040;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329c180
	if (ctx.cr6.eq) goto loc_8329C180;
	// lis r4,-30601
	ctx.r4.s64 = -2005467136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,26197
	ctx.r4.u64 = ctx.r4.u64 | 26197;
	// bl 0x8329b858
	ctx.lr = 0x8329C068;
	sub_8329B858(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1876(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// bl 0x8329b858
	ctx.lr = 0x8329C078;
	sub_8329B858(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8329b858
	ctx.lr = 0x8329C084;
	sub_8329B858(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8329C09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8329c0b4
	if (!ctx.cr6.eq) goto loc_8329C0B4;
loc_8329C0A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
loc_8329C0B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8329c0e4
	if (ctx.cr6.eq) goto loc_8329C0E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329C0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8329c0a8
	if (ctx.cr6.eq) goto loc_8329C0A8;
loc_8329C0E4:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// bl 0x8329aa58
	ctx.lr = 0x8329C0F0;
	sub_8329AA58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x832b5cc0
	ctx.lr = 0x8329C0F8;
	sub_832B5CC0(ctx, base);
	// lwz r28,36(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8329c170
	if (ctx.cr6.eq) goto loc_8329C170;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r30,24
	ctx.r30.s64 = 24;
	// lis r27,-31824
	ctx.r27.s64 = -2085617664;
loc_8329C118:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8329c154
	if (!ctx.cr6.eq) goto loc_8329C154;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x8329c154
	if (!ctx.cr6.lt) goto loc_8329C154;
	// lwz r11,644(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 644);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r25,r30,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8329b858
	ctx.lr = 0x8329C148;
	sub_8329B858(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329b858
	ctx.lr = 0x8329C154;
	sub_8329B858(ctx, base);
loc_8329C154:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8329c118
	if (!ctx.cr6.eq) goto loc_8329C118;
loc_8329C170:
	// lis r4,17459
	ctx.r4.s64 = 1144193024;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,8721
	ctx.r4.u64 = ctx.r4.u64 | 8721;
	// bl 0x8329b858
	ctx.lr = 0x8329C180;
	sub_8329B858(ctx, base);
loc_8329C180:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C18C"))) PPC_WEAK_FUNC(sub_8329C18C);
PPC_FUNC_IMPL(__imp__sub_8329C18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C190"))) PPC_WEAK_FUNC(sub_8329C190);
PPC_FUNC_IMPL(__imp__sub_8329C190) {
	PPC_FUNC_PROLOGUE();
	// li r11,300
	ctx.r11.s64 = 300;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// divw r10,r11,r4
	ctx.r10.s32 = ctx.r11.s32 / ctx.r4.s32;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C1A4"))) PPC_WEAK_FUNC(sub_8329C1A4);
PPC_FUNC_IMPL(__imp__sub_8329C1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C1A8"))) PPC_WEAK_FUNC(sub_8329C1A8);
PPC_FUNC_IMPL(__imp__sub_8329C1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,27984
	ctx.r8.s64 = ctx.r10.s64 + 27984;
	// li r9,60
	ctx.r9.s64 = 60;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C1F8"))) PPC_WEAK_FUNC(sub_8329C1F8);
PPC_FUNC_IMPL(__imp__sub_8329C1F8) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,27880
	ctx.r9.s64 = ctx.r11.s64 + 27880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8329c22c
	if (ctx.cr6.eq) goto loc_8329C22C;
	// bl 0x82e01698
	ctx.lr = 0x8329C228;
	sub_82E01698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8329C22C:
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

__attribute__((alias("__imp__sub_8329C240"))) PPC_WEAK_FUNC(sub_8329C240);
PPC_FUNC_IMPL(__imp__sub_8329C240) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,27984
	ctx.r9.s64 = ctx.r11.s64 + 27984;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8329c274
	if (ctx.cr6.eq) goto loc_8329C274;
	// bl 0x82e01698
	ctx.lr = 0x8329C270;
	sub_82E01698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8329C274:
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

__attribute__((alias("__imp__sub_8329C288"))) PPC_WEAK_FUNC(sub_8329C288);
PPC_FUNC_IMPL(__imp__sub_8329C288) {
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
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x832b73a8
	ctx.lr = 0x8329C2A8;
	sub_832B73A8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// li r10,640
	ctx.r10.s64 = 640;
	// addi r11,r11,28040
	ctx.r11.s64 = ctx.r11.s64 + 28040;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8329C2DC"))) PPC_WEAK_FUNC(sub_8329C2DC);
PPC_FUNC_IMPL(__imp__sub_8329C2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C2E0"))) PPC_WEAK_FUNC(sub_8329C2E0);
PPC_FUNC_IMPL(__imp__sub_8329C2E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C2E8"))) PPC_WEAK_FUNC(sub_8329C2E8);
PPC_FUNC_IMPL(__imp__sub_8329C2E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,340(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C2F0"))) PPC_WEAK_FUNC(sub_8329C2F0);
PPC_FUNC_IMPL(__imp__sub_8329C2F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28040
	ctx.r11.s64 = ctx.r11.s64 + 28040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x832b7718
	ctx.lr = 0x8329C31C;
	sub_832B7718(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8329c32c
	if (ctx.cr0.eq) goto loc_8329C32C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x8329C32C;
	sub_82E01698(ctx, base);
loc_8329C32C:
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

__attribute__((alias("__imp__sub_8329C348"))) PPC_WEAK_FUNC(sub_8329C348);
PPC_FUNC_IMPL(__imp__sub_8329C348) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14104, ctx.r11.u32);
	// stw r11,14108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14108, ctx.r11.u32);
	// b 0x832ba150
	sub_832BA150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C358"))) PPC_WEAK_FUNC(sub_8329C358);
PPC_FUNC_IMPL(__imp__sub_8329C358) {
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
	// bl 0x832b7848
	ctx.lr = 0x8329C370;
	sub_832B7848(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r9,r11,28664
	ctx.r9.s64 = ctx.r11.s64 + 28664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 672, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8329C39C"))) PPC_WEAK_FUNC(sub_8329C39C);
PPC_FUNC_IMPL(__imp__sub_8329C39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C3A0"))) PPC_WEAK_FUNC(sub_8329C3A0);
PPC_FUNC_IMPL(__imp__sub_8329C3A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C3A4"))) PPC_WEAK_FUNC(sub_8329C3A4);
PPC_FUNC_IMPL(__imp__sub_8329C3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C3A8"))) PPC_WEAK_FUNC(sub_8329C3A8);
PPC_FUNC_IMPL(__imp__sub_8329C3A8) {
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
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,63018
	ctx.r3.u64 = ctx.r3.u64 | 63018;
	// bl 0x8329a200
	ctx.lr = 0x8329C3C0;
	sub_8329A200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8329c3d8
	if (ctx.cr6.eq) goto loc_8329C3D8;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// bl 0x832baee8
	ctx.lr = 0x8329C3D8;
	sub_832BAEE8(ctx, base);
loc_8329C3D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C3E8"))) PPC_WEAK_FUNC(sub_8329C3E8);
PPC_FUNC_IMPL(__imp__sub_8329C3E8) {
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
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r30,r11,704
	ctx.r30.s64 = ctx.r11.s64 + 704;
	// lwz r3,672(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// lbz r31,23(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8329C424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,205
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 205, ctx.xer);
	// bgt cr6,0x8329c44c
	if (ctx.cr6.gt) goto loc_8329C44C;
	// beq cr6,0x8329c454
	if (ctx.cr6.eq) goto loc_8329C454;
	// cmpwi cr6,r31,176
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 176, ctx.xer);
	// blt cr6,0x8329c478
	if (ctx.cr6.lt) goto loc_8329C478;
	// cmpwi cr6,r31,177
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 177, ctx.xer);
	// ble cr6,0x8329c454
	if (!ctx.cr6.gt) goto loc_8329C454;
	// cmpwi cr6,r31,183
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 183, ctx.xer);
	// beq cr6,0x8329c454
	if (ctx.cr6.eq) goto loc_8329C454;
	// b 0x8329c478
	goto loc_8329C478;
loc_8329C44C:
	// cmpwi cr6,r31,207
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 207, ctx.xer);
	// bne cr6,0x8329c478
	if (!ctx.cr6.eq) goto loc_8329C478;
loc_8329C454:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r3,r10,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x8329a228
	ctx.lr = 0x8329C46C;
	sub_8329A228(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// bl 0x8329a200
	ctx.lr = 0x8329C474;
	sub_8329A200(ctx, base);
	// stb r3,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r3.u8);
loc_8329C478:
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

__attribute__((alias("__imp__sub_8329C490"))) PPC_WEAK_FUNC(sub_8329C490);
PPC_FUNC_IMPL(__imp__sub_8329C490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329C4AC"))) PPC_WEAK_FUNC(sub_8329C4AC);
PPC_FUNC_IMPL(__imp__sub_8329C4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C4B0"))) PPC_WEAK_FUNC(sub_8329C4B0);
PPC_FUNC_IMPL(__imp__sub_8329C4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8329C4CC"))) PPC_WEAK_FUNC(sub_8329C4CC);
PPC_FUNC_IMPL(__imp__sub_8329C4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C4D0"))) PPC_WEAK_FUNC(sub_8329C4D0);
PPC_FUNC_IMPL(__imp__sub_8329C4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,704
	ctx.r9.s64 = ctx.r10.s64 + 704;
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C4F8"))) PPC_WEAK_FUNC(sub_8329C4F8);
PPC_FUNC_IMPL(__imp__sub_8329C4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r3,r3,62976
	ctx.r3.u64 = ctx.r3.u64 | 62976;
	// b 0x8329a278
	sub_8329A278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C51C"))) PPC_WEAK_FUNC(sub_8329C51C);
PPC_FUNC_IMPL(__imp__sub_8329C51C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C520"))) PPC_WEAK_FUNC(sub_8329C520);
PPC_FUNC_IMPL(__imp__sub_8329C520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// lwz r10,14104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14104);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,14104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14104, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C538"))) PPC_WEAK_FUNC(sub_8329C538);
PPC_FUNC_IMPL(__imp__sub_8329C538) {
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
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65058
	ctx.r3.u64 = ctx.r3.u64 | 65058;
	// bl 0x8329a1c8
	ctx.lr = 0x8329C550;
	sub_8329A1C8(ctx, base);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// mulli r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 * 60;
	// lwz r9,14108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14108);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,14108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14108, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C58C"))) PPC_WEAK_FUNC(sub_8329C58C);
PPC_FUNC_IMPL(__imp__sub_8329C58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C590"))) PPC_WEAK_FUNC(sub_8329C590);
PPC_FUNC_IMPL(__imp__sub_8329C590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832b5f08
	sub_832B5F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C5AC"))) PPC_WEAK_FUNC(sub_8329C5AC);
PPC_FUNC_IMPL(__imp__sub_8329C5AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C5B0"))) PPC_WEAK_FUNC(sub_8329C5B0);
PPC_FUNC_IMPL(__imp__sub_8329C5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65111
	ctx.r3.u64 = ctx.r3.u64 | 65111;
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8329a278
	sub_8329A278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C5C8"))) PPC_WEAK_FUNC(sub_8329C5C8);
PPC_FUNC_IMPL(__imp__sub_8329C5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8329c61c
	if (ctx.cr6.eq) goto loc_8329C61C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8329c608
	if (ctx.cr6.eq) goto loc_8329C608;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// addi r9,r10,704
	ctx.r9.s64 = ctx.r10.s64 + 704;
	// lwz r11,1876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// rlwinm r11,r8,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r11.u32);
	// blr 
	return;
loc_8329C608:
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,704
	ctx.r9.s64 = ctx.r10.s64 + 704;
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r11.u32);
	// blr 
	return;
loc_8329C61C:
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,704
	ctx.r9.s64 = ctx.r10.s64 + 704;
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C630"))) PPC_WEAK_FUNC(sub_8329C630);
PPC_FUNC_IMPL(__imp__sub_8329C630) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// ori r3,r3,62976
	ctx.r3.u64 = ctx.r3.u64 | 62976;
	// bl 0x8329a200
	ctx.lr = 0x8329C65C;
	sub_8329A200(ctx, base);
	// rlwinm r11,r3,0,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1C;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgt cr6,0x8329c714
	if (ctx.cr6.gt) goto loc_8329C714;
	// lis r12,-31958
	ctx.r12.s64 = -2094399488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14720
	ctx.r12.s64 = ctx.r12.s64 + -14720;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r25,-14604(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14604);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14604(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14604);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14604(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14604);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14580(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14580);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14580(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14580);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14552(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14552);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14580(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14580);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14572(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14572);
	// lwz r25,-14580(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14580);
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329c714
	if (ctx.cr6.eq) goto loc_8329C714;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8329C710:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8329C714:
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
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8329c710
	goto loc_8329C710;
}

__attribute__((alias("__imp__sub_8329C730"))) PPC_WEAK_FUNC(sub_8329C730);
PPC_FUNC_IMPL(__imp__sub_8329C730) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b8710
	sub_832B8710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C734"))) PPC_WEAK_FUNC(sub_8329C734);
PPC_FUNC_IMPL(__imp__sub_8329C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C738"))) PPC_WEAK_FUNC(sub_8329C738);
PPC_FUNC_IMPL(__imp__sub_8329C738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C73C"))) PPC_WEAK_FUNC(sub_8329C73C);
PPC_FUNC_IMPL(__imp__sub_8329C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C740"))) PPC_WEAK_FUNC(sub_8329C740);
PPC_FUNC_IMPL(__imp__sub_8329C740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C744"))) PPC_WEAK_FUNC(sub_8329C744);
PPC_FUNC_IMPL(__imp__sub_8329C744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C748"))) PPC_WEAK_FUNC(sub_8329C748);
PPC_FUNC_IMPL(__imp__sub_8329C748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C74C"))) PPC_WEAK_FUNC(sub_8329C74C);
PPC_FUNC_IMPL(__imp__sub_8329C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C750"))) PPC_WEAK_FUNC(sub_8329C750);
PPC_FUNC_IMPL(__imp__sub_8329C750) {
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
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r11,684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8329c794
	if (ctx.cr6.eq) goto loc_8329C794;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65048
	ctx.r3.u64 = ctx.r3.u64 | 65048;
	// bl 0x8329a200
	ctx.lr = 0x8329C778;
	sub_8329A200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8329c794
	if (!ctx.cr6.lt) goto loc_8329C794;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r3,r3,65048
	ctx.r3.u64 = ctx.r3.u64 | 65048;
	// bl 0x8329a278
	ctx.lr = 0x8329C794;
	sub_8329A278(ctx, base);
loc_8329C794:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C7A4"))) PPC_WEAK_FUNC(sub_8329C7A4);
PPC_FUNC_IMPL(__imp__sub_8329C7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C7A8"))) PPC_WEAK_FUNC(sub_8329C7A8);
PPC_FUNC_IMPL(__imp__sub_8329C7A8) {
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
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65040
	ctx.r3.u64 = ctx.r3.u64 | 65040;
	// bl 0x8329a228
	ctx.lr = 0x8329C7C0;
	sub_8329A228(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,28504
	ctx.r10.s64 = ctx.r10.s64 + 28504;
loc_8329C7D4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8329c7f4
	if (ctx.cr6.eq) goto loc_8329C7F4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8329c7d4
	if (!ctx.cr6.eq) goto loc_8329C7D4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8329C7F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C804"))) PPC_WEAK_FUNC(sub_8329C804);
PPC_FUNC_IMPL(__imp__sub_8329C804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C808"))) PPC_WEAK_FUNC(sub_8329C808);
PPC_FUNC_IMPL(__imp__sub_8329C808) {
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
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65062
	ctx.r3.u64 = ctx.r3.u64 | 65062;
	// bl 0x8329a1c8
	ctx.lr = 0x8329C820;
	sub_8329A1C8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C83C"))) PPC_WEAK_FUNC(sub_8329C83C);
PPC_FUNC_IMPL(__imp__sub_8329C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C840"))) PPC_WEAK_FUNC(sub_8329C840);
PPC_FUNC_IMPL(__imp__sub_8329C840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x8329C848;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r3,r3,65062
	ctx.r3.u64 = ctx.r3.u64 | 65062;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8329a1c8
	ctx.lr = 0x8329C860;
	sub_8329A1C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r3,r3,65042
	ctx.r3.u64 = ctx.r3.u64 | 65042;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8329a200
	ctx.lr = 0x8329C87C;
	sub_8329A200(ctx, base);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65040
	ctx.r3.u64 = ctx.r3.u64 | 65040;
	// bl 0x8329a228
	ctx.lr = 0x8329C888;
	sub_8329A228(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65058
	ctx.r3.u64 = ctx.r3.u64 | 65058;
	// bl 0x8329a1c8
	ctx.lr = 0x8329C898;
	sub_8329A1C8(ctx, base);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65056
	ctx.r3.u64 = ctx.r3.u64 | 65056;
	// bl 0x8329a228
	ctx.lr = 0x8329C8A4;
	sub_8329A228(ctx, base);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65111
	ctx.r3.u64 = ctx.r3.u64 | 65111;
	// bl 0x8329a200
	ctx.lr = 0x8329C8B0;
	sub_8329A200(ctx, base);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// ori r3,r3,62976
	ctx.r3.u64 = ctx.r3.u64 | 62976;
	// addi r31,r11,-30108
	ctx.r31.s64 = ctx.r11.s64 + -30108;
	// bl 0x8329a200
	ctx.lr = 0x8329C8C4;
	sub_8329A200(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x8329c8dc
	if (!ctx.cr6.eq) goto loc_8329C8DC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r31,r11,28776
	ctx.r31.s64 = ctx.r11.s64 + 28776;
	// b 0x8329c918
	goto loc_8329C918;
loc_8329C8DC:
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,28504
	ctx.r9.s64 = ctx.r9.s64 + 28504;
loc_8329C8EC:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8329c90c
	if (ctx.cr6.eq) goto loc_8329C90C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8329c8ec
	if (!ctx.cr6.eq) goto loc_8329C8EC;
	// b 0x8329c918
	goto loc_8329C918;
loc_8329C90C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8329C918:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,205
	ctx.r5.s64 = 205;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83299990
	ctx.lr = 0x8329C930;
	sub_83299990(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C938"))) PPC_WEAK_FUNC(sub_8329C938);
PPC_FUNC_IMPL(__imp__sub_8329C938) {
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
	// bl 0x832b8fa8
	ctx.lr = 0x8329C958;
	sub_832B8FA8(ctx, base);
	// lis r4,21913
	ctx.r4.s64 = 1436090368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,21913
	ctx.r4.u64 = ctx.r4.u64 | 21913;
	// bl 0x8329b858
	ctx.lr = 0x8329C968;
	sub_8329B858(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,14104
	ctx.r4.s64 = ctx.r31.s64 + 14104;
	// bl 0x8329b728
	ctx.lr = 0x8329C978;
	sub_8329B728(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,14108
	ctx.r4.s64 = ctx.r31.s64 + 14108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b728
	ctx.lr = 0x8329C988;
	sub_8329B728(ctx, base);
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

__attribute__((alias("__imp__sub_8329C9A4"))) PPC_WEAK_FUNC(sub_8329C9A4);
PPC_FUNC_IMPL(__imp__sub_8329C9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C9A8"))) PPC_WEAK_FUNC(sub_8329C9A8);
PPC_FUNC_IMPL(__imp__sub_8329C9A8) {
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
	// bl 0x832b91e0
	ctx.lr = 0x8329C9C8;
	sub_832B91E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8329c9dc
	if (!ctx.cr6.eq) goto loc_8329C9DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8329ca30
	goto loc_8329CA30;
loc_8329C9DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b8b8
	ctx.lr = 0x8329C9E4;
	sub_8329B8B8(ctx, base);
	// lis r11,21913
	ctx.r11.s64 = 1436090368;
	// ori r10,r11,21913
	ctx.r10.u64 = ctx.r11.u64 | 21913;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8329ca18
	if (!ctx.cr6.eq) goto loc_8329CA18;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,14104
	ctx.r4.s64 = ctx.r31.s64 + 14104;
	// bl 0x8329b7a0
	ctx.lr = 0x8329CA04;
	sub_8329B7A0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,14108
	ctx.r4.s64 = ctx.r31.s64 + 14108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329b7a0
	ctx.lr = 0x8329CA14;
	sub_8329B7A0(ctx, base);
	// b 0x8329ca2c
	goto loc_8329CA2C;
loc_8329CA18:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,14104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14104, ctx.r11.u32);
	// stw r11,14108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14108, ctx.r11.u32);
	// bl 0x83299990
	ctx.lr = 0x8329CA2C;
	sub_83299990(ctx, base);
loc_8329CA2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8329CA30:
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

__attribute__((alias("__imp__sub_8329CA48"))) PPC_WEAK_FUNC(sub_8329CA48);
PPC_FUNC_IMPL(__imp__sub_8329CA48) {
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
	// addi r9,r11,28664
	ctx.r9.s64 = ctx.r11.s64 + 28664;
	// addi r11,r10,704
	ctx.r11.s64 = ctx.r10.s64 + 704;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
	// bl 0x832bba00
	ctx.lr = 0x8329CA7C;
	sub_832BBA00(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329ca94
	if (ctx.cr6.eq) goto loc_8329CA94;
	// bl 0x833a2ad0
	ctx.lr = 0x8329CA90;
	sub_833A2AD0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8329CA94:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329caa8
	if (ctx.cr6.eq) goto loc_8329CAA8;
	// bl 0x82e01698
	ctx.lr = 0x8329CAA4;
	sub_82E01698(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_8329CAA8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329cabc
	if (ctx.cr6.eq) goto loc_8329CABC;
	// bl 0x82e01698
	ctx.lr = 0x8329CAB8;
	sub_82E01698(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8329CABC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329cad0
	if (ctx.cr6.eq) goto loc_8329CAD0;
	// bl 0x833a2ad0
	ctx.lr = 0x8329CACC;
	sub_833A2AD0(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8329CAD0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329cae4
	if (ctx.cr6.eq) goto loc_8329CAE4;
	// bl 0x833a2ad0
	ctx.lr = 0x8329CAE0;
	sub_833A2AD0(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_8329CAE4:
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329caf8
	if (ctx.cr6.eq) goto loc_8329CAF8;
	// bl 0x82e01698
	ctx.lr = 0x8329CAF4;
	sub_82E01698(ctx, base);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
loc_8329CAF8:
	// lwz r3,8588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329cb0c
	if (ctx.cr6.eq) goto loc_8329CB0C;
	// bl 0x82e01698
	ctx.lr = 0x8329CB08;
	sub_82E01698(ctx, base);
	// stw r30,8588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8588, ctx.r30.u32);
loc_8329CB0C:
	// lwz r3,9732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9732);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8329cb20
	if (ctx.cr6.eq) goto loc_8329CB20;
	// bl 0x82e01698
	ctx.lr = 0x8329CB1C;
	sub_82E01698(ctx, base);
	// stw r30,9732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9732, ctx.r30.u32);
loc_8329CB20:
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r30.u32);
	// bl 0x832b7900
	ctx.lr = 0x8329CB30;
	sub_832B7900(ctx, base);
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

__attribute__((alias("__imp__sub_8329CB48"))) PPC_WEAK_FUNC(sub_8329CB48);
PPC_FUNC_IMPL(__imp__sub_8329CB48) {
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
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// lwz r11,648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8329cb74
	if (!ctx.cr6.eq) goto loc_8329CB74;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
loc_8329CB74:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8329cb9c
	if (!ctx.cr6.eq) goto loc_8329CB9C;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// lwz r3,672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// bl 0x8329c7a8
	ctx.lr = 0x8329CB8C;
	sub_8329C7A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8329cb9c
	if (!ctx.cr6.gt) goto loc_8329CB9C;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x832b5f08
	ctx.lr = 0x8329CB9C;
	sub_832B5F08(ctx, base);
loc_8329CB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329CBAC"))) PPC_WEAK_FUNC(sub_8329CBAC);
PPC_FUNC_IMPL(__imp__sub_8329CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

