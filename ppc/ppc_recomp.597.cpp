#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_836885E4"))) PPC_WEAK_FUNC(sub_836885E4);
PPC_FUNC_IMPL(__imp__sub_836885E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836885E8"))) PPC_WEAK_FUNC(sub_836885E8);
PPC_FUNC_IMPL(__imp__sub_836885E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4768
	ctx.r3.s64 = ctx.r11.s64 + -4768;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836885F4"))) PPC_WEAK_FUNC(sub_836885F4);
PPC_FUNC_IMPL(__imp__sub_836885F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836885F8"))) PPC_WEAK_FUNC(sub_836885F8);
PPC_FUNC_IMPL(__imp__sub_836885F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4728
	ctx.r3.s64 = ctx.r11.s64 + -4728;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688604"))) PPC_WEAK_FUNC(sub_83688604);
PPC_FUNC_IMPL(__imp__sub_83688604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688608"))) PPC_WEAK_FUNC(sub_83688608);
PPC_FUNC_IMPL(__imp__sub_83688608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4696
	ctx.r3.s64 = ctx.r11.s64 + -4696;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688614"))) PPC_WEAK_FUNC(sub_83688614);
PPC_FUNC_IMPL(__imp__sub_83688614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688618"))) PPC_WEAK_FUNC(sub_83688618);
PPC_FUNC_IMPL(__imp__sub_83688618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4708
	ctx.r3.s64 = ctx.r11.s64 + -4708;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688624"))) PPC_WEAK_FUNC(sub_83688624);
PPC_FUNC_IMPL(__imp__sub_83688624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688628"))) PPC_WEAK_FUNC(sub_83688628);
PPC_FUNC_IMPL(__imp__sub_83688628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-3148
	ctx.r10.s64 = ctx.r11.s64 + -3148;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
loc_83688634:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x83688634
	if (!ctx.cr0.eq) goto loc_83688634;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,-4676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688654"))) PPC_WEAK_FUNC(sub_83688654);
PPC_FUNC_IMPL(__imp__sub_83688654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688658"))) PPC_WEAK_FUNC(sub_83688658);
PPC_FUNC_IMPL(__imp__sub_83688658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4660
	ctx.r3.s64 = ctx.r11.s64 + -4660;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688664"))) PPC_WEAK_FUNC(sub_83688664);
PPC_FUNC_IMPL(__imp__sub_83688664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688668"))) PPC_WEAK_FUNC(sub_83688668);
PPC_FUNC_IMPL(__imp__sub_83688668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4636
	ctx.r3.s64 = ctx.r11.s64 + -4636;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688674"))) PPC_WEAK_FUNC(sub_83688674);
PPC_FUNC_IMPL(__imp__sub_83688674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688678"))) PPC_WEAK_FUNC(sub_83688678);
PPC_FUNC_IMPL(__imp__sub_83688678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4612
	ctx.r3.s64 = ctx.r11.s64 + -4612;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688684"))) PPC_WEAK_FUNC(sub_83688684);
PPC_FUNC_IMPL(__imp__sub_83688684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688688"))) PPC_WEAK_FUNC(sub_83688688);
PPC_FUNC_IMPL(__imp__sub_83688688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4588
	ctx.r3.s64 = ctx.r11.s64 + -4588;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688694"))) PPC_WEAK_FUNC(sub_83688694);
PPC_FUNC_IMPL(__imp__sub_83688694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688698"))) PPC_WEAK_FUNC(sub_83688698);
PPC_FUNC_IMPL(__imp__sub_83688698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4600
	ctx.r3.s64 = ctx.r11.s64 + -4600;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836886A4"))) PPC_WEAK_FUNC(sub_836886A4);
PPC_FUNC_IMPL(__imp__sub_836886A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836886A8"))) PPC_WEAK_FUNC(sub_836886A8);
PPC_FUNC_IMPL(__imp__sub_836886A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4548
	ctx.r3.s64 = ctx.r11.s64 + -4548;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836886B4"))) PPC_WEAK_FUNC(sub_836886B4);
PPC_FUNC_IMPL(__imp__sub_836886B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836886B8"))) PPC_WEAK_FUNC(sub_836886B8);
PPC_FUNC_IMPL(__imp__sub_836886B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4516
	ctx.r3.s64 = ctx.r11.s64 + -4516;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836886C4"))) PPC_WEAK_FUNC(sub_836886C4);
PPC_FUNC_IMPL(__imp__sub_836886C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836886C8"))) PPC_WEAK_FUNC(sub_836886C8);
PPC_FUNC_IMPL(__imp__sub_836886C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4528
	ctx.r3.s64 = ctx.r11.s64 + -4528;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836886D4"))) PPC_WEAK_FUNC(sub_836886D4);
PPC_FUNC_IMPL(__imp__sub_836886D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836886D8"))) PPC_WEAK_FUNC(sub_836886D8);
PPC_FUNC_IMPL(__imp__sub_836886D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4468
	ctx.r3.s64 = ctx.r11.s64 + -4468;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836886E4"))) PPC_WEAK_FUNC(sub_836886E4);
PPC_FUNC_IMPL(__imp__sub_836886E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836886E8"))) PPC_WEAK_FUNC(sub_836886E8);
PPC_FUNC_IMPL(__imp__sub_836886E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4492
	ctx.r3.s64 = ctx.r11.s64 + -4492;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836886F4"))) PPC_WEAK_FUNC(sub_836886F4);
PPC_FUNC_IMPL(__imp__sub_836886F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836886F8"))) PPC_WEAK_FUNC(sub_836886F8);
PPC_FUNC_IMPL(__imp__sub_836886F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688704"))) PPC_WEAK_FUNC(sub_83688704);
PPC_FUNC_IMPL(__imp__sub_83688704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688708"))) PPC_WEAK_FUNC(sub_83688708);
PPC_FUNC_IMPL(__imp__sub_83688708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4452
	ctx.r3.s64 = ctx.r11.s64 + -4452;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688714"))) PPC_WEAK_FUNC(sub_83688714);
PPC_FUNC_IMPL(__imp__sub_83688714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688718"))) PPC_WEAK_FUNC(sub_83688718);
PPC_FUNC_IMPL(__imp__sub_83688718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4432
	ctx.r3.s64 = ctx.r11.s64 + -4432;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688724"))) PPC_WEAK_FUNC(sub_83688724);
PPC_FUNC_IMPL(__imp__sub_83688724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688728"))) PPC_WEAK_FUNC(sub_83688728);
PPC_FUNC_IMPL(__imp__sub_83688728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-4420
	ctx.r3.s64 = ctx.r11.s64 + -4420;
	// b 0x830ff6a8
	sub_830FF6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688734"))) PPC_WEAK_FUNC(sub_83688734);
PPC_FUNC_IMPL(__imp__sub_83688734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688738"))) PPC_WEAK_FUNC(sub_83688738);
PPC_FUNC_IMPL(__imp__sub_83688738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r11,-4180
	ctx.r11.s64 = ctx.r11.s64 + -4180;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83688750:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83688750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83688750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368875C"))) PPC_WEAK_FUNC(sub_8368875C);
PPC_FUNC_IMPL(__imp__sub_8368875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688760"))) PPC_WEAK_FUNC(sub_83688760);
PPC_FUNC_IMPL(__imp__sub_83688760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r11,29584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29584);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 * 9;
	// stw r11,-4108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368877C"))) PPC_WEAK_FUNC(sub_8368877C);
PPC_FUNC_IMPL(__imp__sub_8368877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688780"))) PPC_WEAK_FUNC(sub_83688780);
PPC_FUNC_IMPL(__imp__sub_83688780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3272
	ctx.r3.s64 = ctx.r11.s64 + -3272;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368878C"))) PPC_WEAK_FUNC(sub_8368878C);
PPC_FUNC_IMPL(__imp__sub_8368878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688790"))) PPC_WEAK_FUNC(sub_83688790);
PPC_FUNC_IMPL(__imp__sub_83688790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368879C"))) PPC_WEAK_FUNC(sub_8368879C);
PPC_FUNC_IMPL(__imp__sub_8368879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836887A0"))) PPC_WEAK_FUNC(sub_836887A0);
PPC_FUNC_IMPL(__imp__sub_836887A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3240
	ctx.r3.s64 = ctx.r11.s64 + -3240;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836887AC"))) PPC_WEAK_FUNC(sub_836887AC);
PPC_FUNC_IMPL(__imp__sub_836887AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836887B0"))) PPC_WEAK_FUNC(sub_836887B0);
PPC_FUNC_IMPL(__imp__sub_836887B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2624
	ctx.r3.s64 = ctx.r11.s64 + -2624;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836887BC"))) PPC_WEAK_FUNC(sub_836887BC);
PPC_FUNC_IMPL(__imp__sub_836887BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836887C0"))) PPC_WEAK_FUNC(sub_836887C0);
PPC_FUNC_IMPL(__imp__sub_836887C0) {
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
	// addi r31,r11,-3704
	ctx.r31.s64 = ctx.r11.s64 + -3704;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x8368fda4
	ctx.lr = 0x836887E0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x836887F0;
	sub_833A2B30(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3232
	ctx.r3.s64 = ctx.r11.s64 + -3232;
	// bl 0x833a1ff8
	ctx.lr = 0x836887FC;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83688810"))) PPC_WEAK_FUNC(sub_83688810);
PPC_FUNC_IMPL(__imp__sub_83688810) {
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
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r3,r11,-3144
	ctx.r3.s64 = ctx.r11.s64 + -3144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x83688830;
	sub_833A2B30(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2552
	ctx.r3.s64 = ctx.r11.s64 + -2552;
	// bl 0x833a1ff8
	ctx.lr = 0x8368883C;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368884C"))) PPC_WEAK_FUNC(sub_8368884C);
PPC_FUNC_IMPL(__imp__sub_8368884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688850"))) PPC_WEAK_FUNC(sub_83688850);
PPC_FUNC_IMPL(__imp__sub_83688850) {
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
	// addi r3,r11,-3148
	ctx.r3.s64 = ctx.r11.s64 + -3148;
	// bl 0x831d34a0
	ctx.lr = 0x83688868;
	sub_831D34A0(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-3224
	ctx.r3.s64 = ctx.r11.s64 + -3224;
	// bl 0x833a1ff8
	ctx.lr = 0x83688874;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688884"))) PPC_WEAK_FUNC(sub_83688884);
PPC_FUNC_IMPL(__imp__sub_83688884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688888"))) PPC_WEAK_FUNC(sub_83688888);
PPC_FUNC_IMPL(__imp__sub_83688888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2424
	ctx.r3.s64 = ctx.r11.s64 + -2424;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688894"))) PPC_WEAK_FUNC(sub_83688894);
PPC_FUNC_IMPL(__imp__sub_83688894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688898"))) PPC_WEAK_FUNC(sub_83688898);
PPC_FUNC_IMPL(__imp__sub_83688898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2408
	ctx.r3.s64 = ctx.r11.s64 + -2408;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836888A4"))) PPC_WEAK_FUNC(sub_836888A4);
PPC_FUNC_IMPL(__imp__sub_836888A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836888A8"))) PPC_WEAK_FUNC(sub_836888A8);
PPC_FUNC_IMPL(__imp__sub_836888A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2440
	ctx.r3.s64 = ctx.r11.s64 + -2440;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836888B4"))) PPC_WEAK_FUNC(sub_836888B4);
PPC_FUNC_IMPL(__imp__sub_836888B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836888B8"))) PPC_WEAK_FUNC(sub_836888B8);
PPC_FUNC_IMPL(__imp__sub_836888B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2344
	ctx.r3.s64 = ctx.r11.s64 + -2344;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836888C4"))) PPC_WEAK_FUNC(sub_836888C4);
PPC_FUNC_IMPL(__imp__sub_836888C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836888C8"))) PPC_WEAK_FUNC(sub_836888C8);
PPC_FUNC_IMPL(__imp__sub_836888C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2328
	ctx.r3.s64 = ctx.r11.s64 + -2328;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836888D4"))) PPC_WEAK_FUNC(sub_836888D4);
PPC_FUNC_IMPL(__imp__sub_836888D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836888D8"))) PPC_WEAK_FUNC(sub_836888D8);
PPC_FUNC_IMPL(__imp__sub_836888D8) {
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
	// addi r11,r11,2416
	ctx.r11.s64 = ctx.r11.s64 + 2416;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8368fda4
	ctx.lr = 0x836888F4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2312
	ctx.r3.s64 = ctx.r11.s64 + -2312;
	// bl 0x833a1ff8
	ctx.lr = 0x83688900;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688910"))) PPC_WEAK_FUNC(sub_83688910);
PPC_FUNC_IMPL(__imp__sub_83688910) {
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
	// addi r11,r11,2460
	ctx.r11.s64 = ctx.r11.s64 + 2460;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8368fda4
	ctx.lr = 0x8368892C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2296
	ctx.r3.s64 = ctx.r11.s64 + -2296;
	// bl 0x833a1ff8
	ctx.lr = 0x83688938;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688948"))) PPC_WEAK_FUNC(sub_83688948);
PPC_FUNC_IMPL(__imp__sub_83688948) {
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
	// addi r11,r11,2504
	ctx.r11.s64 = ctx.r11.s64 + 2504;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8368fda4
	ctx.lr = 0x83688964;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2280
	ctx.r3.s64 = ctx.r11.s64 + -2280;
	// bl 0x833a1ff8
	ctx.lr = 0x83688970;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688980"))) PPC_WEAK_FUNC(sub_83688980);
PPC_FUNC_IMPL(__imp__sub_83688980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2264
	ctx.r3.s64 = ctx.r11.s64 + -2264;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368898C"))) PPC_WEAK_FUNC(sub_8368898C);
PPC_FUNC_IMPL(__imp__sub_8368898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688990"))) PPC_WEAK_FUNC(sub_83688990);
PPC_FUNC_IMPL(__imp__sub_83688990) {
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
	// addi r3,r11,2900
	ctx.r3.s64 = ctx.r11.s64 + 2900;
	// bl 0x8321e6b8
	ctx.lr = 0x836889A8;
	sub_8321E6B8(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2248
	ctx.r3.s64 = ctx.r11.s64 + -2248;
	// bl 0x833a1ff8
	ctx.lr = 0x836889B4;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836889C4"))) PPC_WEAK_FUNC(sub_836889C4);
PPC_FUNC_IMPL(__imp__sub_836889C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836889C8"))) PPC_WEAK_FUNC(sub_836889C8);
PPC_FUNC_IMPL(__imp__sub_836889C8) {
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
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r31,r11,2936
	ctx.r31.s64 = ctx.r11.s64 + 2936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x836889F0;
	sub_833A2B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x833a2b30
	ctx.lr = 0x83688A08;
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

__attribute__((alias("__imp__sub_83688A1C"))) PPC_WEAK_FUNC(sub_83688A1C);
PPC_FUNC_IMPL(__imp__sub_83688A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688A20"))) PPC_WEAK_FUNC(sub_83688A20);
PPC_FUNC_IMPL(__imp__sub_83688A20) {
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
	// addi r3,r11,2840
	ctx.r3.s64 = ctx.r11.s64 + 2840;
	// bl 0x8368fda4
	ctx.lr = 0x83688A38;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2232
	ctx.r3.s64 = ctx.r11.s64 + -2232;
	// bl 0x833a1ff8
	ctx.lr = 0x83688A44;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688A54"))) PPC_WEAK_FUNC(sub_83688A54);
PPC_FUNC_IMPL(__imp__sub_83688A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688A58"))) PPC_WEAK_FUNC(sub_83688A58);
PPC_FUNC_IMPL(__imp__sub_83688A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2224
	ctx.r3.s64 = ctx.r11.s64 + -2224;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688A64"))) PPC_WEAK_FUNC(sub_83688A64);
PPC_FUNC_IMPL(__imp__sub_83688A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688A68"))) PPC_WEAK_FUNC(sub_83688A68);
PPC_FUNC_IMPL(__imp__sub_83688A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3920
	ctx.r11.s64 = ctx.r11.s64 + 3920;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83688A80:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83688a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83688A80;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,-16684(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4120);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f12,-15716(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15716);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lfs f11,-22384(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -22384);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688ACC"))) PPC_WEAK_FUNC(sub_83688ACC);
PPC_FUNC_IMPL(__imp__sub_83688ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688AD0"))) PPC_WEAK_FUNC(sub_83688AD0);
PPC_FUNC_IMPL(__imp__sub_83688AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3960
	ctx.r11.s64 = ctx.r11.s64 + 3960;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83688AE8:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83688ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83688AE8;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,-16684(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4120);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f12,-15716(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15716);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lfs f11,-22384(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -22384);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83688B34"))) PPC_WEAK_FUNC(sub_83688B34);
PPC_FUNC_IMPL(__imp__sub_83688B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688B38"))) PPC_WEAK_FUNC(sub_83688B38);
PPC_FUNC_IMPL(__imp__sub_83688B38) {
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
	// lis r10,-31824
	ctx.r10.s64 = -2085617664;
	// lbz r11,620(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83688b78
	if (!ctx.cr6.eq) goto loc_83688B78;
	// lis r11,-31824
	ctx.r11.s64 = -2085617664;
	// addi r31,r11,704
	ctx.r31.s64 = ctx.r11.s64 + 704;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,620(r10)
	PPC_STORE_U8(ctx.r10.u32 + 620, ctx.r11.u8);
	// bl 0x832b1c48
	ctx.lr = 0x83688B70;
	sub_832B1C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5508
	ctx.lr = 0x83688B78;
	sub_832B5508(ctx, base);
loc_83688B78:
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

__attribute__((alias("__imp__sub_83688B8C"))) PPC_WEAK_FUNC(sub_83688B8C);
PPC_FUNC_IMPL(__imp__sub_83688B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688B90"))) PPC_WEAK_FUNC(sub_83688B90);
PPC_FUNC_IMPL(__imp__sub_83688B90) {
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
	// addi r31,r11,704
	ctx.r31.s64 = ctx.r11.s64 + 704;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// bl 0x832bb9e8
	ctx.lr = 0x83688BB0;
	sub_832BB9E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// addi r3,r10,-2192
	ctx.r3.s64 = ctx.r10.s64 + -2192;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x833a1ff8
	ctx.lr = 0x83688BC8;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83688BDC"))) PPC_WEAK_FUNC(sub_83688BDC);
PPC_FUNC_IMPL(__imp__sub_83688BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688BE0"))) PPC_WEAK_FUNC(sub_83688BE0);
PPC_FUNC_IMPL(__imp__sub_83688BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,6240
	ctx.r11.s64 = ctx.r11.s64 + 6240;
	// li r10,185
	ctx.r10.s64 = 185;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r7,195
	ctx.r7.s64 = 195;
	// li r6,186
	ctx.r6.s64 = 186;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// li r9,196
	ctx.r9.s64 = 196;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// li r4,187
	ctx.r4.s64 = 187;
	// li r3,197
	ctx.r3.s64 = 197;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r3,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// std r8,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r8.u64);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688C78"))) PPC_WEAK_FUNC(sub_83688C78);
PPC_FUNC_IMPL(__imp__sub_83688C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,6792
	ctx.r11.s64 = ctx.r11.s64 + 6792;
	// li r10,188
	ctx.r10.s64 = 188;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// li r7,198
	ctx.r7.s64 = 198;
	// li r6,193
	ctx.r6.s64 = 193;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// li r9,202
	ctx.r9.s64 = 202;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// li r4,189
	ctx.r4.s64 = 189;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// li r6,200
	ctx.r6.s64 = 200;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// std r8,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r8.u64);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688D0C"))) PPC_WEAK_FUNC(sub_83688D0C);
PPC_FUNC_IMPL(__imp__sub_83688D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688D10"))) PPC_WEAK_FUNC(sub_83688D10);
PPC_FUNC_IMPL(__imp__sub_83688D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r11,r11,5920
	ctx.r11.s64 = ctx.r11.s64 + 5920;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688D28"))) PPC_WEAK_FUNC(sub_83688D28);
PPC_FUNC_IMPL(__imp__sub_83688D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r11,r11,6976
	ctx.r11.s64 = ctx.r11.s64 + 6976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688D40"))) PPC_WEAK_FUNC(sub_83688D40);
PPC_FUNC_IMPL(__imp__sub_83688D40) {
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
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,6608
	ctx.r11.s64 = ctx.r11.s64 + 6608;
	// li r10,189
	ctx.r10.s64 = 189;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r7,200
	ctx.r7.s64 = 200;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// std r8,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r8.u64);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bl 0x833a2b30
	ctx.lr = 0x83688DA8;
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

__attribute__((alias("__imp__sub_83688DBC"))) PPC_WEAK_FUNC(sub_83688DBC);
PPC_FUNC_IMPL(__imp__sub_83688DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688DC0"))) PPC_WEAK_FUNC(sub_83688DC0);
PPC_FUNC_IMPL(__imp__sub_83688DC0) {
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
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,7136
	ctx.r11.s64 = ctx.r11.s64 + 7136;
	// li r10,189
	ctx.r10.s64 = 189;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// li r7,200
	ctx.r7.s64 = 200;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// std r8,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r8.u64);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bl 0x833a2b30
	ctx.lr = 0x83688E28;
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

__attribute__((alias("__imp__sub_83688E3C"))) PPC_WEAK_FUNC(sub_83688E3C);
PPC_FUNC_IMPL(__imp__sub_83688E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83688E40"))) PPC_WEAK_FUNC(sub_83688E40);
PPC_FUNC_IMPL(__imp__sub_83688E40) {
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
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,6424
	ctx.r11.s64 = ctx.r11.s64 + 6424;
	// li r10,194
	ctx.r10.s64 = 194;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,199
	ctx.r7.s64 = 199;
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// li r4,200
	ctx.r4.s64 = 200;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// li r9,201
	ctx.r9.s64 = 201;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// li r8,189
	ctx.r8.s64 = 189;
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r31,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r31,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r31.u64);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bl 0x833a2b30
	ctx.lr = 0x83688EEC;
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

__attribute__((alias("__imp__sub_83688F00"))) PPC_WEAK_FUNC(sub_83688F00);
PPC_FUNC_IMPL(__imp__sub_83688F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r11,r11,6080
	ctx.r11.s64 = ctx.r11.s64 + 6080;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83688F18"))) PPC_WEAK_FUNC(sub_83688F18);
PPC_FUNC_IMPL(__imp__sub_83688F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r11,r11,7320
	ctx.r11.s64 = ctx.r11.s64 + 7320;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,31432
	ctx.r8.s64 = ctx.r8.s64 + 31432;
	// lis r6,-31845
	ctx.r6.s64 = -2086993920;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// li r8,57
	ctx.r8.s64 = 57;
	// addi r6,r6,6792
	ctx.r6.s64 = ctx.r6.s64 + 6792;
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// addi r10,r10,30976
	ctx.r10.s64 = ctx.r10.s64 + 30976;
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r6,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// li r8,1346
	ctx.r8.s64 = 1346;
	// addi r7,r10,-1032
	ctx.r7.s64 = ctx.r10.s64 + -1032;
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r7,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r7.u32);
	// stw r6,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r5,r5,29740
	ctx.r5.s64 = ctx.r5.s64 + 29740;
	// stb r9,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r9.u8);
	// li r7,56
	ctx.r7.s64 = 56;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// addi r4,r10,-1352
	ctx.r4.s64 = ctx.r10.s64 + -1352;
	// stw r5,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// li r6,8192
	ctx.r6.s64 = 8192;
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r4,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r4.u32);
	// stw r6,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r6.u32);
	// lis r6,-31845
	ctx.r6.s64 = -2086993920;
	// addi r8,r8,28792
	ctx.r8.s64 = ctx.r8.s64 + 28792;
	// stw r9,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r8,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// addi r6,r6,6608
	ctx.r6.s64 = ctx.r6.s64 + 6608;
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// stw r8,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r8.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// li r8,530
	ctx.r8.s64 = 530;
	// stw r6,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r6.u32);
	// addi r7,r10,-776
	ctx.r7.s64 = ctx.r10.s64 + -776;
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// stw r8,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r8.u32);
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r7,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r7.u32);
	// addi r8,r11,116
	ctx.r8.s64 = ctx.r11.s64 + 116;
	// stb r9,144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 144, ctx.r9.u8);
	// addi r8,r11,176
	ctx.r8.s64 = ctx.r11.s64 + 176;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// addi r8,r11,236
	ctx.r8.s64 = ctx.r11.s64 + 236;
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// li r7,58
	ctx.r7.s64 = 58;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r5,30180
	ctx.r5.s64 = ctx.r5.s64 + 30180;
	// stw r7,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r7.u32);
	// addi r4,r10,-912
	ctx.r4.s64 = ctx.r10.s64 + -912;
	// stw r6,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r6.u32);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r5,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r5.u32);
	// stw r4,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r4.u32);
	// lis r6,-31845
	ctx.r6.s64 = -2086993920;
	// addi r8,r8,31424
	ctx.r8.s64 = ctx.r8.s64 + 31424;
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r8,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r8.u32);
	// li r8,61
	ctx.r8.s64 = 61;
	// addi r7,r10,-200
	ctx.r7.s64 = ctx.r10.s64 + -200;
	// stw r8,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r8.u32);
	// addi r6,r6,7136
	ctx.r6.s64 = ctx.r6.s64 + 7136;
	// li r8,2820
	ctx.r8.s64 = 2820;
	// stw r6,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r6.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r7.u32);
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// stw r6,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r6.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r4,r10,-656
	ctx.r4.s64 = ctx.r10.s64 + -656;
	// stw r7,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r7.u32);
	// addi r5,r5,30436
	ctx.r5.s64 = ctx.r5.s64 + 30436;
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// li r6,530
	ctx.r6.s64 = 530;
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r5,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r5.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r6,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r6.u32);
	// addi r7,r10,320
	ctx.r7.s64 = ctx.r10.s64 + 320;
	// stb r9,204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 204, ctx.r9.u8);
	// addi r8,r8,31412
	ctx.r8.s64 = ctx.r8.s64 + 31412;
	// stw r4,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r4.u32);
	// stw r9,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r9.u32);
	// lis r6,-31845
	ctx.r6.s64 = -2086993920;
	// stw r9,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r9.u32);
	// stw r8,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r8.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r7,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r7.u32);
	// li r7,52
	ctx.r7.s64 = 52;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r10,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r10.u32);
	// stw r8,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r7,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r7.u32);
	// li r8,3844
	ctx.r8.s64 = 3844;
	// addi r6,r6,6424
	ctx.r6.s64 = ctx.r6.s64 + 6424;
	// stw r10,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r10.u32);
	// addi r5,r5,31092
	ctx.r5.s64 = ctx.r5.s64 + 31092;
	// stw r8,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r8.u32);
	// li r7,530
	ctx.r7.s64 = 530;
	// stb r9,264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 264, ctx.r9.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r9.u32);
	// stw r9,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r9.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r6,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r6.u32);
	// addi r10,r11,296
	ctx.r10.s64 = ctx.r11.s64 + 296;
	// stw r5,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r5.u32);
	// stw r9,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r9.u32);
	// stw r7,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r7.u32);
	// stw r9,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689120"))) PPC_WEAK_FUNC(sub_83689120);
PPC_FUNC_IMPL(__imp__sub_83689120) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31824
	ctx.r9.s64 = -2085617664;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,1992
	ctx.r8.s64 = ctx.r9.s64 + 1992;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1992(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1992, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368913C"))) PPC_WEAK_FUNC(sub_8368913C);
PPC_FUNC_IMPL(__imp__sub_8368913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689140"))) PPC_WEAK_FUNC(sub_83689140);
PPC_FUNC_IMPL(__imp__sub_83689140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,8060
	ctx.r11.s64 = ctx.r11.s64 + 8060;
	// lis r9,-31895
	ctx.r9.s64 = -2090270720;
	// addi r3,r9,-2176
	ctx.r3.s64 = ctx.r9.s64 + -2176;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83689160"))) PPC_WEAK_FUNC(sub_83689160);
PPC_FUNC_IMPL(__imp__sub_83689160) {
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
	// addi r3,r11,31684
	ctx.r3.s64 = ctx.r11.s64 + 31684;
	// bl 0x8329b6b8
	ctx.lr = 0x83689178;
	sub_8329B6B8(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2152
	ctx.r3.s64 = ctx.r11.s64 + -2152;
	// bl 0x833a1ff8
	ctx.lr = 0x83689184;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689194"))) PPC_WEAK_FUNC(sub_83689194);
PPC_FUNC_IMPL(__imp__sub_83689194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689198"))) PPC_WEAK_FUNC(sub_83689198);
PPC_FUNC_IMPL(__imp__sub_83689198) {
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
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r7,r10,32480
	ctx.r7.s64 = ctx.r10.s64 + 32480;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,28624
	ctx.r4.s64 = ctx.r9.s64 + 28624;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32484
	ctx.r3.s64 = ctx.r8.s64 + -32484;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x836891F8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689208"))) PPC_WEAK_FUNC(sub_83689208);
PPC_FUNC_IMPL(__imp__sub_83689208) {
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
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,32576
	ctx.r7.s64 = ctx.r10.s64 + 32576;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,29504
	ctx.r4.s64 = ctx.r9.s64 + 29504;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32436
	ctx.r3.s64 = ctx.r8.s64 + -32436;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689268;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689278"))) PPC_WEAK_FUNC(sub_83689278);
PPC_FUNC_IMPL(__imp__sub_83689278) {
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
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,32600
	ctx.r6.s64 = ctx.r10.s64 + 32600;
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,19184
	ctx.r5.s64 = ctx.r9.s64 + 19184;
	// addi r4,r8,29528
	ctx.r4.s64 = ctx.r8.s64 + 29528;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-32388
	ctx.r3.s64 = ctx.r7.s64 + -32388;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82ef5ae8
	ctx.lr = 0x836892E4;
	sub_82EF5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_836892F8"))) PPC_WEAK_FUNC(sub_836892F8);
PPC_FUNC_IMPL(__imp__sub_836892F8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832e2de0
	ctx.lr = 0x83689310;
	sub_832E2DE0(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r7,r10,-32340
	ctx.r7.s64 = ctx.r10.s64 + -32340;
	// addi r11,r11,29528
	ctx.r11.s64 = ctx.r11.s64 + 29528;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// stw r11,-32340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32340, ctx.r11.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r8,-8760
	ctx.r11.s64 = ctx.r8.s64 + -8760;
	// addi r10,r10,-30772
	ctx.r10.s64 = ctx.r10.s64 + -30772;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,72
	ctx.r10.s64 = 72;
	// addi r9,r9,-8776
	ctx.r9.s64 = ctx.r9.s64 + -8776;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689368"))) PPC_WEAK_FUNC(sub_83689368);
PPC_FUNC_IMPL(__imp__sub_83689368) {
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
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// addi r6,r10,32744
	ctx.r6.s64 = ctx.r10.s64 + 32744;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-31740
	ctx.r5.s64 = ctx.r9.s64 + -31740;
	// addi r4,r8,29552
	ctx.r4.s64 = ctx.r8.s64 + 29552;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-32316
	ctx.r3.s64 = ctx.r7.s64 + -32316;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82ef5ae8
	ctx.lr = 0x836893D0;
	sub_82EF5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_836893E4"))) PPC_WEAK_FUNC(sub_836893E4);
PPC_FUNC_IMPL(__imp__sub_836893E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836893E8"))) PPC_WEAK_FUNC(sub_836893E8);
PPC_FUNC_IMPL(__imp__sub_836893E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832e3608
	ctx.lr = 0x83689400;
	sub_832E3608(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r7,r10,-32268
	ctx.r7.s64 = ctx.r10.s64 + -32268;
	// addi r11,r11,29552
	ctx.r11.s64 = ctx.r11.s64 + 29552;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// stw r11,-32268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32268, ctx.r11.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r8,-8656
	ctx.r11.s64 = ctx.r8.s64 + -8656;
	// addi r10,r10,-30748
	ctx.r10.s64 = ctx.r10.s64 + -30748;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r9,-8672
	ctx.r9.s64 = ctx.r9.s64 + -8672;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689458"))) PPC_WEAK_FUNC(sub_83689458);
PPC_FUNC_IMPL(__imp__sub_83689458) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// addi r6,r10,-32672
	ctx.r6.s64 = ctx.r10.s64 + -32672;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-31692
	ctx.r5.s64 = ctx.r9.s64 + -31692;
	// addi r4,r8,29480
	ctx.r4.s64 = ctx.r8.s64 + 29480;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-32244
	ctx.r3.s64 = ctx.r7.s64 + -32244;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82ef5ae8
	ctx.lr = 0x836894C0;
	sub_82EF5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_836894D4"))) PPC_WEAK_FUNC(sub_836894D4);
PPC_FUNC_IMPL(__imp__sub_836894D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836894D8"))) PPC_WEAK_FUNC(sub_836894D8);
PPC_FUNC_IMPL(__imp__sub_836894D8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832e4280
	ctx.lr = 0x836894F0;
	sub_832E4280(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r7,r10,-32196
	ctx.r7.s64 = ctx.r10.s64 + -32196;
	// addi r11,r11,29480
	ctx.r11.s64 = ctx.r11.s64 + 29480;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// stw r11,-32196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32196, ctx.r11.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r8,-8552
	ctx.r11.s64 = ctx.r8.s64 + -8552;
	// addi r10,r10,-30728
	ctx.r10.s64 = ctx.r10.s64 + -30728;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r9,r9,-8568
	ctx.r9.s64 = ctx.r9.s64 + -8568;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689548"))) PPC_WEAK_FUNC(sub_83689548);
PPC_FUNC_IMPL(__imp__sub_83689548) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// addi r6,r10,-32624
	ctx.r6.s64 = ctx.r10.s64 + -32624;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-31548
	ctx.r5.s64 = ctx.r9.s64 + -31548;
	// addi r4,r8,29460
	ctx.r4.s64 = ctx.r8.s64 + 29460;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-32172
	ctx.r3.s64 = ctx.r7.s64 + -32172;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82ef5ae8
	ctx.lr = 0x836895B0;
	sub_82EF5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_836895C4"))) PPC_WEAK_FUNC(sub_836895C4);
PPC_FUNC_IMPL(__imp__sub_836895C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836895C8"))) PPC_WEAK_FUNC(sub_836895C8);
PPC_FUNC_IMPL(__imp__sub_836895C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832e4920
	ctx.lr = 0x836895E0;
	sub_832E4920(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r7,r10,-32124
	ctx.r7.s64 = ctx.r10.s64 + -32124;
	// addi r11,r11,29460
	ctx.r11.s64 = ctx.r11.s64 + 29460;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// stw r11,-32124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32124, ctx.r11.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r8,-8448
	ctx.r11.s64 = ctx.r8.s64 + -8448;
	// addi r10,r10,-30704
	ctx.r10.s64 = ctx.r10.s64 + -30704;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r9,-8464
	ctx.r9.s64 = ctx.r9.s64 + -8464;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689638"))) PPC_WEAK_FUNC(sub_83689638);
PPC_FUNC_IMPL(__imp__sub_83689638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// lwz r11,-31432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31432);
	// addi r7,r8,-31176
	ctx.r7.s64 = ctx.r8.s64 + -31176;
	// lwz r10,-31428(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31428);
	// lwz r9,-31424(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31424);
	// stw r11,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, ctx.r11.u32);
	// stw r10,104(r7)
	PPC_STORE_U32(ctx.r7.u32 + 104, ctx.r10.u32);
	// stw r9,128(r7)
	PPC_STORE_U32(ctx.r7.u32 + 128, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689668"))) PPC_WEAK_FUNC(sub_83689668);
PPC_FUNC_IMPL(__imp__sub_83689668) {
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
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,-31176
	ctx.r6.s64 = ctx.r10.s64 + -31176;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-31500
	ctx.r5.s64 = ctx.r9.s64 + -31500;
	// addi r4,r8,30020
	ctx.r4.s64 = ctx.r8.s64 + 30020;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-32100
	ctx.r3.s64 = ctx.r7.s64 + -32100;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82ef5ae8
	ctx.lr = 0x836896D4;
	sub_82EF5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_836896E8"))) PPC_WEAK_FUNC(sub_836896E8);
PPC_FUNC_IMPL(__imp__sub_836896E8) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-30876
	ctx.r10.s64 = ctx.r11.s64 + -30876;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x8368970C;
	sub_82EEECE8(ctx, base);
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r7,r9,-32052
	ctx.r7.s64 = ctx.r9.s64 + -32052;
	// addi r11,r11,30020
	ctx.r11.s64 = ctx.r11.s64 + 30020;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// stw r11,-32052(r9)
	PPC_STORE_U32(ctx.r9.u32 + -32052, ctx.r11.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r8,-8360
	ctx.r11.s64 = ctx.r8.s64 + -8360;
	// addi r10,r10,-30684
	ctx.r10.s64 = ctx.r10.s64 + -30684;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r9,-7856
	ctx.r9.s64 = ctx.r9.s64 + -7856;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689764"))) PPC_WEAK_FUNC(sub_83689764);
PPC_FUNC_IMPL(__imp__sub_83689764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689768"))) PPC_WEAK_FUNC(sub_83689768);
PPC_FUNC_IMPL(__imp__sub_83689768) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-32528
	ctx.r6.s64 = ctx.r10.s64 + -32528;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-31356
	ctx.r5.s64 = ctx.r9.s64 + -31356;
	// addi r4,r8,29848
	ctx.r4.s64 = ctx.r8.s64 + 29848;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-32028
	ctx.r3.s64 = ctx.r7.s64 + -32028;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,424
	ctx.r6.s64 = 424;
	// bl 0x82ef5ae8
	ctx.lr = 0x836897D4;
	sub_82EF5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_836897E8"))) PPC_WEAK_FUNC(sub_836897E8);
PPC_FUNC_IMPL(__imp__sub_836897E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832e51e8
	ctx.lr = 0x83689800;
	sub_832E51E8(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r7,r10,-31980
	ctx.r7.s64 = ctx.r10.s64 + -31980;
	// addi r11,r11,29848
	ctx.r11.s64 = ctx.r11.s64 + 29848;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// stw r11,-31980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31980, ctx.r11.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r8,-8304
	ctx.r11.s64 = ctx.r8.s64 + -8304;
	// addi r10,r10,-30660
	ctx.r10.s64 = ctx.r10.s64 + -30660;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,424
	ctx.r10.s64 = 424;
	// addi r9,r9,-8320
	ctx.r9.s64 = ctx.r9.s64 + -8320;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689858"))) PPC_WEAK_FUNC(sub_83689858);
PPC_FUNC_IMPL(__imp__sub_83689858) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-32336
	ctx.r7.s64 = ctx.r10.s64 + -32336;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,29572
	ctx.r4.s64 = ctx.r9.s64 + 29572;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31956
	ctx.r3.s64 = ctx.r8.s64 + -31956;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x836898B8;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836898C8"))) PPC_WEAK_FUNC(sub_836898C8);
PPC_FUNC_IMPL(__imp__sub_836898C8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-32264
	ctx.r7.s64 = ctx.r10.s64 + -32264;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r9,29612
	ctx.r4.s64 = ctx.r9.s64 + 29612;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-31908
	ctx.r3.s64 = ctx.r8.s64 + -31908;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689924;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689934"))) PPC_WEAK_FUNC(sub_83689934);
PPC_FUNC_IMPL(__imp__sub_83689934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689938"))) PPC_WEAK_FUNC(sub_83689938);
PPC_FUNC_IMPL(__imp__sub_83689938) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-32216
	ctx.r7.s64 = ctx.r10.s64 + -32216;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r4,r9,29648
	ctx.r4.s64 = ctx.r9.s64 + 29648;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-31860
	ctx.r3.s64 = ctx.r8.s64 + -31860;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689994;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836899A4"))) PPC_WEAK_FUNC(sub_836899A4);
PPC_FUNC_IMPL(__imp__sub_836899A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836899A8"))) PPC_WEAK_FUNC(sub_836899A8);
PPC_FUNC_IMPL(__imp__sub_836899A8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// addi r6,r10,-32048
	ctx.r6.s64 = ctx.r10.s64 + -32048;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-31356
	ctx.r5.s64 = ctx.r9.s64 + -31356;
	// addi r4,r8,29684
	ctx.r4.s64 = ctx.r8.s64 + 29684;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-31812
	ctx.r3.s64 = ctx.r7.s64 + -31812;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,11
	ctx.r31.s64 = 11;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,324
	ctx.r6.s64 = 324;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689A10;
	sub_82EF5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83689A24"))) PPC_WEAK_FUNC(sub_83689A24);
PPC_FUNC_IMPL(__imp__sub_83689A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689A28"))) PPC_WEAK_FUNC(sub_83689A28);
PPC_FUNC_IMPL(__imp__sub_83689A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832e6018
	ctx.lr = 0x83689A40;
	sub_832E6018(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r7,r10,-31764
	ctx.r7.s64 = ctx.r10.s64 + -31764;
	// addi r11,r11,29684
	ctx.r11.s64 = ctx.r11.s64 + 29684;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// stw r11,-31764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31764, ctx.r11.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r8,-8136
	ctx.r11.s64 = ctx.r8.s64 + -8136;
	// addi r10,r10,-30508
	ctx.r10.s64 = ctx.r10.s64 + -30508;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r10,324
	ctx.r10.s64 = 324;
	// addi r9,r9,-8152
	ctx.r9.s64 = ctx.r9.s64 + -8152;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689A98"))) PPC_WEAK_FUNC(sub_83689A98);
PPC_FUNC_IMPL(__imp__sub_83689A98) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31823
	ctx.r6.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-31768
	ctx.r9.s64 = ctx.r10.s64 + -31768;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,29836
	ctx.r4.s64 = ctx.r7.s64 + 29836;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-31740
	ctx.r3.s64 = ctx.r6.s64 + -31740;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689AF4;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689B04"))) PPC_WEAK_FUNC(sub_83689B04);
PPC_FUNC_IMPL(__imp__sub_83689B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689B08"))) PPC_WEAK_FUNC(sub_83689B08);
PPC_FUNC_IMPL(__imp__sub_83689B08) {
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
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19184
	ctx.r5.s64 = ctx.r10.s64 + 19184;
	// addi r4,r9,29708
	ctx.r4.s64 = ctx.r9.s64 + 29708;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-31692
	ctx.r3.s64 = ctx.r8.s64 + -31692;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689B60;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689B70"))) PPC_WEAK_FUNC(sub_83689B70);
PPC_FUNC_IMPL(__imp__sub_83689B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r8,r9,-31008
	ctx.r8.s64 = ctx.r9.s64 + -31008;
	// lwz r11,-31440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31440);
	// lwz r10,-31444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31444);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689B94"))) PPC_WEAK_FUNC(sub_83689B94);
PPC_FUNC_IMPL(__imp__sub_83689B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689B98"))) PPC_WEAK_FUNC(sub_83689B98);
PPC_FUNC_IMPL(__imp__sub_83689B98) {
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
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-31008
	ctx.r6.s64 = ctx.r10.s64 + -31008;
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,29788
	ctx.r4.s64 = ctx.r8.s64 + 29788;
	// addi r3,r7,-31644
	ctx.r3.s64 = ctx.r7.s64 + -31644;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,10
	ctx.r31.s64 = 10;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-31684
	ctx.r9.s64 = ctx.r9.s64 + -31684;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689C04;
	sub_82EF5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83689C18"))) PPC_WEAK_FUNC(sub_83689C18);
PPC_FUNC_IMPL(__imp__sub_83689C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r8,r9,-30768
	ctx.r8.s64 = ctx.r9.s64 + -30768;
	// lwz r11,-31440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31440);
	// lwz r10,-31444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31444);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// stw r10,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689C3C"))) PPC_WEAK_FUNC(sub_83689C3C);
PPC_FUNC_IMPL(__imp__sub_83689C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689C40"))) PPC_WEAK_FUNC(sub_83689C40);
PPC_FUNC_IMPL(__imp__sub_83689C40) {
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
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-30768
	ctx.r7.s64 = ctx.r10.s64 + -30768;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,29804
	ctx.r4.s64 = ctx.r9.s64 + 29804;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-31596
	ctx.r3.s64 = ctx.r8.s64 + -31596;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689CA4;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689CB4"))) PPC_WEAK_FUNC(sub_83689CB4);
PPC_FUNC_IMPL(__imp__sub_83689CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689CB8"))) PPC_WEAK_FUNC(sub_83689CB8);
PPC_FUNC_IMPL(__imp__sub_83689CB8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31823
	ctx.r6.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-31628
	ctx.r9.s64 = ctx.r10.s64 + -31628;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,29824
	ctx.r4.s64 = ctx.r7.s64 + 29824;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-31548
	ctx.r3.s64 = ctx.r6.s64 + -31548;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689D14;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689D24"))) PPC_WEAK_FUNC(sub_83689D24);
PPC_FUNC_IMPL(__imp__sub_83689D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689D28"))) PPC_WEAK_FUNC(sub_83689D28);
PPC_FUNC_IMPL(__imp__sub_83689D28) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31823
	ctx.r6.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-31440
	ctx.r9.s64 = ctx.r10.s64 + -31440;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,29876
	ctx.r4.s64 = ctx.r7.s64 + 29876;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-31500
	ctx.r3.s64 = ctx.r6.s64 + -31500;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689D84;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689D94"))) PPC_WEAK_FUNC(sub_83689D94);
PPC_FUNC_IMPL(__imp__sub_83689D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689D98"))) PPC_WEAK_FUNC(sub_83689D98);
PPC_FUNC_IMPL(__imp__sub_83689D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// lwz r11,-31420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31420);
	// addi r7,r8,-30576
	ctx.r7.s64 = ctx.r8.s64 + -30576;
	// lwz r10,-31416(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31416);
	// lwz r9,-31412(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31412);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r10,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, ctx.r10.u32);
	// stw r9,104(r7)
	PPC_STORE_U32(ctx.r7.u32 + 104, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689DC8"))) PPC_WEAK_FUNC(sub_83689DC8);
PPC_FUNC_IMPL(__imp__sub_83689DC8) {
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
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-30576
	ctx.r7.s64 = ctx.r10.s64 + -30576;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,29916
	ctx.r4.s64 = ctx.r9.s64 + 29916;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31452
	ctx.r3.s64 = ctx.r8.s64 + -31452;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689E28;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689E38"))) PPC_WEAK_FUNC(sub_83689E38);
PPC_FUNC_IMPL(__imp__sub_83689E38) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r9,r11,-31112
	ctx.r9.s64 = ctx.r11.s64 + -31112;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// addi r7,r9,80
	ctx.r7.s64 = ctx.r9.s64 + 80;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r10,29940
	ctx.r4.s64 = ctx.r10.s64 + 29940;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31404
	ctx.r3.s64 = ctx.r8.s64 + -31404;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689E98;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689EA8"))) PPC_WEAK_FUNC(sub_83689EA8);
PPC_FUNC_IMPL(__imp__sub_83689EA8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31823
	ctx.r6.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-30920
	ctx.r9.s64 = ctx.r10.s64 + -30920;
	// addi r5,r8,19184
	ctx.r5.s64 = ctx.r8.s64 + 19184;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,29956
	ctx.r4.s64 = ctx.r7.s64 + 29956;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-31356
	ctx.r3.s64 = ctx.r6.s64 + -31356;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82ef5ae8
	ctx.lr = 0x83689F04;
	sub_82EF5AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83689F14"))) PPC_WEAK_FUNC(sub_83689F14);
PPC_FUNC_IMPL(__imp__sub_83689F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689F18"))) PPC_WEAK_FUNC(sub_83689F18);
PPC_FUNC_IMPL(__imp__sub_83689F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-2112
	ctx.r3.s64 = ctx.r11.s64 + -2112;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83689F24"))) PPC_WEAK_FUNC(sub_83689F24);
PPC_FUNC_IMPL(__imp__sub_83689F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83689F28"))) PPC_WEAK_FUNC(sub_83689F28);
PPC_FUNC_IMPL(__imp__sub_83689F28) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,-26016
	ctx.r31.s64 = ctx.r11.s64 + -26016;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x833a2b30
	ctx.lr = 0x83689F50;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x833a1390
	ctx.lr = 0x83689F64;
	sub_833A1390(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x833a2b30
	ctx.lr = 0x83689F74;
	sub_833A2B30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83689FB8"))) PPC_WEAK_FUNC(sub_83689FB8);
PPC_FUNC_IMPL(__imp__sub_83689FB8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,-24944
	ctx.r31.s64 = ctx.r11.s64 + -24944;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = ctx.r31.s64 + 26;
	// bl 0x833a2b30
	ctx.lr = 0x83689FE0;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x833a1390
	ctx.lr = 0x83689FF4;
	sub_833A1390(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x833a2b30
	ctx.lr = 0x8368A004;
	sub_833A2B30(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8368A048"))) PPC_WEAK_FUNC(sub_8368A048);
PPC_FUNC_IMPL(__imp__sub_8368A048) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-23872
	ctx.r31.s64 = ctx.r11.s64 + -23872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x833a2b30
	ctx.lr = 0x8368A070;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x833a1390
	ctx.lr = 0x8368A084;
	sub_833A1390(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x833a2b30
	ctx.lr = 0x8368A094;
	sub_833A2B30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8368A0D8"))) PPC_WEAK_FUNC(sub_8368A0D8);
PPC_FUNC_IMPL(__imp__sub_8368A0D8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-22800
	ctx.r31.s64 = ctx.r11.s64 + -22800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x833a2b30
	ctx.lr = 0x8368A100;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x833a1390
	ctx.lr = 0x8368A114;
	sub_833A1390(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x833a2b30
	ctx.lr = 0x8368A124;
	sub_833A2B30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8368A168"))) PPC_WEAK_FUNC(sub_8368A168);
PPC_FUNC_IMPL(__imp__sub_8368A168) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,-21728
	ctx.r31.s64 = ctx.r11.s64 + -21728;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x833a2b30
	ctx.lr = 0x8368A190;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x833a1390
	ctx.lr = 0x8368A1A4;
	sub_833A1390(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x833a2b30
	ctx.lr = 0x8368A1B4;
	sub_833A2B30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8368A1F8"))) PPC_WEAK_FUNC(sub_8368A1F8);
PPC_FUNC_IMPL(__imp__sub_8368A1F8) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x833a2b30
	ctx.lr = 0x8368A220;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x833a1390
	ctx.lr = 0x8368A234;
	sub_833A1390(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x833a2b30
	ctx.lr = 0x8368A244;
	sub_833A2B30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8368A288"))) PPC_WEAK_FUNC(sub_8368A288);
PPC_FUNC_IMPL(__imp__sub_8368A288) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-19584
	ctx.r31.s64 = ctx.r11.s64 + -19584;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x833a2b30
	ctx.lr = 0x8368A2B0;
	sub_833A2B30(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x833a1390
	ctx.lr = 0x8368A2C4;
	sub_833A1390(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x833a2b30
	ctx.lr = 0x8368A2D4;
	sub_833A2B30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8368A318"))) PPC_WEAK_FUNC(sub_8368A318);
PPC_FUNC_IMPL(__imp__sub_8368A318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x8368A320;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x833a18d8
	ctx.lr = 0x8368A328;
	__savefpr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// addi r31,r11,-17824
	ctx.r31.s64 = ctx.r11.s64 + -17824;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lfs f0,-13632(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -13632);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfs f31,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f29,-9180(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -9180);
	ctx.f29.f64 = double(temp.f32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f11,-6216(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -6216);
	ctx.f11.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,12452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lfs f12,-9168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-9144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9144);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f25,-4128(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4128);
	ctx.f25.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f24,-4212(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4212);
	ctx.f24.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f10,6636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6636);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stfs f30,32(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// stfs f30,48(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f30,52(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// lfs f28,8960(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8960);
	ctx.f28.f64 = double(temp.f32);
	// lfs f9,18680(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 18680);
	ctx.f9.f64 = double(temp.f32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lfs f23,18676(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 18676);
	ctx.f23.f64 = double(temp.f32);
	// addi r11,r31,332
	ctx.r11.s64 = ctx.r31.s64 + 332;
	// stfs f30,84(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f30,88(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r30,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r30.u8);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stb r7,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r7.u8);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stb r30,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r30.u8);
	// stfs f30,108(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r5,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r5.u8);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r30,179(r31)
	PPC_STORE_U8(ctx.r31.u32 + 179, ctx.r30.u8);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stfs f30,124(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lis r27,-32210
	ctx.r27.s64 = -2110914560;
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lis r26,-32248
	ctx.r26.s64 = -2113404928;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f31,140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f11,168(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f10,172(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stfs f9,264(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// stfs f31,156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lis r23,-32253
	ctx.r23.s64 = -2113732608;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f12,164(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f30,192(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f30,196(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stfs f30,200(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r31,424
	ctx.r11.s64 = ctx.r31.s64 + 424;
	// stfs f30,204(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stfs f30,208(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f30,212(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f30,216(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stfs f30,220(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f31,228(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f31,232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f25,236(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f30,240(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f24,244(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f29,248(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f28,252(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f23,260(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f30,272(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f30,276(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f31,280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f30,320(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f30,324(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f30,328(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// lfs f13,15004(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 15004);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,884(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 884);
	ctx.f11.f64 = double(temp.f32);
	// stb r30,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r30.u8);
	// lfs f10,-4124(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -4124);
	ctx.f10.f64 = double(temp.f32);
	// stb r30,338(r31)
	PPC_STORE_U8(ctx.r31.u32 + 338, ctx.r30.u8);
	// stfs f29,388(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stfs f28,392(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stfs f30,396(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// std r30,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r30.u64);
	// stfs f11,404(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stfs f31,412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stfs f10,416(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stb r29,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r29.u8);
	// stfs f31,420(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stb r28,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r28.u8);
	// std r30,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r30.u64);
	// stb r10,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r10.u8);
	// lfs f9,2788(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2788);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// lfs f8,-15560(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -15560);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// stb r8,440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 440, ctx.r8.u8);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// lfs f0,1348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1348);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f13,4808(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stfs f9,452(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f10,1344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1344);
	ctx.f10.f64 = double(temp.f32);
	// lis r3,-32208
	ctx.r3.s64 = -2110783488;
	// lfs f11,1352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1352);
	ctx.f11.f64 = double(temp.f32);
	// lis r29,-32208
	ctx.r29.s64 = -2110783488;
	// lfs f9,-11276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11276);
	ctx.f9.f64 = double(temp.f32);
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// lfs f22,16380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16380);
	ctx.f22.f64 = double(temp.f32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lfs f26,10064(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10064);
	ctx.f26.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f27,6604(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6604);
	ctx.f27.f64 = double(temp.f32);
	// lfs f21,1340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1340);
	ctx.f21.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f20,1336(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1336);
	ctx.f20.f64 = double(temp.f32);
	// stb r10,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r10.u8);
	// lfs f0,-10812(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -10812);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r9.u8);
	// lfs f13,4152(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4152);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 468, ctx.r30.u8);
	// stfs f29,448(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stfs f8,460(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f30,472(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stb r30,577(r31)
	PPC_STORE_U8(ctx.r31.u32 + 577, ctx.r30.u8);
	// stfs f31,476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stw r7,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r7.u32);
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stb r6,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r6.u8);
	// stfs f30,484(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stb r30,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r30.u8);
	// stfs f12,504(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stfs f11,516(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stb r30,704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 704, ctx.r30.u8);
	// stfs f31,520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stb r30,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r30.u8);
	// stfs f31,524(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stb r30,740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 740, ctx.r30.u8);
	// stfs f10,528(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// stfs f31,544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f30,552(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f31,564(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// stfs f31,568(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stfs f30,572(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f27,592(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f30,596(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f22,600(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f9,604(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stfs f26,640(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stfs f21,644(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stfs f20,648(r31)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stfs f31,652(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// stfs f0,656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// stfs f13,660(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// stfs f31,668(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// stfs f31,672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stfs f31,676(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f31,680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stfs f31,684(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stfs f31,688(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stfs f31,692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// stfs f31,696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stfs f31,700(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// stfs f31,724(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// stfs f30,728(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// stfs f31,732(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
	// stfs f30,736(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// stfs f30,744(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stw r30,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
	// stb r11,752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 752, ctx.r11.u8);
	// stfs f31,756(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 756, temp.u32);
	// addi r11,r31,748
	ctx.r11.s64 = ctx.r31.s64 + 748;
	// stfs f31,768(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 768, temp.u32);
	// addi r11,r31,780
	ctx.r11.s64 = ctx.r31.s64 + 780;
	// stfs f31,772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// stfs f31,776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// bl 0x833a2b30
	ctx.lr = 0x8368A740;
	sub_833A2B30(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stfs f26,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfs f21,916(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stfs f20,920(r31)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stfs f31,924(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// lfs f11,-4508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4508);
	ctx.f11.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f12,-29420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29420);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lfs f0,-18508(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18508);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r10.u32);
	// lfs f10,-8064(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8064);
	ctx.f10.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f30,936(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f11,928(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stb r30,896(r31)
	PPC_STORE_U8(ctx.r31.u32 + 896, ctx.r30.u8);
	// stfs f12,932(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 944, temp.u32);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// stfs f10,948(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f0,952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// stb r11,976(r31)
	PPC_STORE_U8(ctx.r31.u32 + 976, ctx.r11.u8);
	// addi r11,r31,956
	ctx.r11.s64 = ctx.r31.s64 + 956;
	// lfs f9,-10772(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -10772);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,1020
	ctx.r11.s64 = ctx.r31.s64 + 1020;
	// lfs f8,4804(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4804);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,3284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3284);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,1036
	ctx.r11.s64 = ctx.r31.s64 + 1036;
	// lfs f6,1332(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1332);
	ctx.f6.f64 = double(temp.f32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f13,20356(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20356);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stfs f9,960(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// stb r30,977(r31)
	PPC_STORE_U8(ctx.r31.u32 + 977, ctx.r30.u8);
	// stfs f8,964(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// stb r30,1000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1000, ctx.r30.u8);
	// stfs f31,980(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stfs f7,984(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stfs f6,988(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f13,992(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f29,996(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
	// stfs f31,1008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// stfs f31,1012(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// stfs f31,1016(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// stfs f30,1024(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// stfs f30,1028(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f30,1032(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// stw r30,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f10,12384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12384);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// lis r27,-32230
	ctx.r27.s64 = -2112225280;
	// stb r10,1088(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1088, ctx.r10.u8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f9,-17040(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17040);
	ctx.f9.f64 = double(temp.f32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f11,1104(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// stfs f10,1112(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stfs f9,1116(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1116, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,16404(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16404);
	ctx.f12.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f11,-4120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4120);
	ctx.f11.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,1040(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stb r7,1091(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1091, ctx.r7.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f8,11212(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11212);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,19300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19300);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f10,2780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2780);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stfs f27,1044(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,1048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stb r30,1072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1072, ctx.r30.u8);
	// stfs f31,1052(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stfs f31,1056(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f27,1060(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stfs f31,1064(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// li r25,2
	ctx.r25.s64 = 2;
	// stfs f31,1068(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1068, temp.u32);
	// stb r9,1089(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1089, ctx.r9.u8);
	// stfs f31,1096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// stb r30,1090(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1090, ctx.r30.u8);
	// stfs f30,1108(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
	// stb r30,1092(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1092, ctx.r30.u8);
	// stfs f8,1124(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stb r30,1093(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1093, ctx.r30.u8);
	// stfs f30,1128(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// stb r30,1094(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1094, ctx.r30.u8);
	// stfs f12,1136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1136, temp.u32);
	// stb r30,1095(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1095, ctx.r30.u8);
	// stfs f12,1140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1140, temp.u32);
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stfs f11,1144(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stb r30,1101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1101, ctx.r30.u8);
	// stfs f25,1148(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stb r30,1102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1102, ctx.r30.u8);
	// stfs f30,1156(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1156, temp.u32);
	// stb r27,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r27.u8);
	// stfs f31,1164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1164, temp.u32);
	// stb r30,1160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1160, ctx.r30.u8);
	// stfs f10,1188(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// stb r30,1174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1174, ctx.r30.u8);
	// stfs f9,1232(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1232, temp.u32);
	// stb r30,1175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1175, ctx.r30.u8);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// stb r9,1172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1172, ctx.r9.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,1173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1173, ctx.r8.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r5,1176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1176, ctx.r5.u8);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stb r4,1177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1177, ctx.r4.u8);
	// stb r3,1178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1178, ctx.r3.u8);
	// stfs f31,1168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1168, temp.u32);
	// stfs f31,1184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// stb r26,1121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1121, ctx.r26.u8);
	// stfs f31,1192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// stw r25,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r25.u32);
	// stfs f31,1196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1196, temp.u32);
	// stb r30,1200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1200, ctx.r30.u8);
	// stfs f28,1204(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1204, temp.u32);
	// stb r30,1220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1220, ctx.r30.u8);
	// stfs f13,1208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1208, temp.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f31,1212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1212, temp.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stfs f30,1216(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1216, temp.u32);
	// lis r28,-32249
	ctx.r28.s64 = -2113470464;
	// stfs f31,1224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stfs f31,1228(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1228, temp.u32);
	// lis r24,-32251
	ctx.r24.s64 = -2113601536;
	// stfs f30,1236(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// std r30,1240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1240, ctx.r30.u64);
	// lfs f8,1328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1328);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// lis r23,-32252
	ctx.r23.s64 = -2113667072;
	// li r11,50
	ctx.r11.s64 = 50;
	// stfs f8,1264(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// lfs f7,1324(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1324);
	ctx.f7.f64 = double(temp.f32);
	// li r10,20
	ctx.r10.s64 = 20;
	// lfs f9,6580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6580);
	ctx.f9.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f8,7252(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7252);
	ctx.f8.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f11,1480(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1480);
	ctx.f11.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r11.u32);
	// stfs f7,1268(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f7,31012(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 31012);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,1400
	ctx.r11.s64 = ctx.r31.s64 + 1400;
	// lfs f6,21812(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 21812);
	ctx.f6.f64 = double(temp.f32);
	// stb r30,1396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1396, ctx.r30.u8);
	// lfs f5,21472(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 21472);
	ctx.f5.f64 = double(temp.f32);
	// stw r10,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r10.u32);
	// lfs f10,-836(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -836);
	ctx.f10.f64 = double(temp.f32);
	// stb r9,1392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1392, ctx.r9.u8);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stb r8,1393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1393, ctx.r8.u8);
	// stfs f31,1276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stb r7,1394(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1394, ctx.r7.u8);
	// stfs f31,1280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// stb r6,1395(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1395, ctx.r6.u8);
	// stfs f31,1284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1284, temp.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// stfs f31,1288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1288, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f29,1292(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1292, temp.u32);
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// stfs f23,1296(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// addi r11,r31,1408
	ctx.r11.s64 = ctx.r31.s64 + 1408;
	// stfs f9,1300(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
	// stfs f8,1304(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// stfs f12,1308(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1308, temp.u32);
	// stfs f11,1312(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// stfs f11,1316(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stfs f7,1320(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// stfs f30,1324(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1324, temp.u32);
	// stfs f13,1328(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1328, temp.u32);
	// stfs f6,1344(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1344, temp.u32);
	// stfs f0,1348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1348, temp.u32);
	// stfs f28,1352(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// stfs f24,1356(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1356, temp.u32);
	// stfs f26,1360(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// stfs f5,1364(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1364, temp.u32);
	// stfs f31,1368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// stfs f10,1372(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// stfs f10,1380(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1380, temp.u32);
	// stfs f22,1388(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1388, temp.u32);
	// std r30,1400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1400, ctx.r30.u64);
	// std r30,1408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1408, ctx.r30.u64);
	// std r30,1416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1416, ctx.r30.u64);
	// bl 0x833a2b30
	ctx.lr = 0x8368AAC0;
	sub_833A2B30(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1632
	ctx.r3.s64 = ctx.r31.s64 + 1632;
	// bl 0x833a2b30
	ctx.lr = 0x8368AAD0;
	sub_833A2B30(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x833a1924
	ctx.lr = 0x8368AADC;
	__restfpr_20(ctx, base);
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AAE0"))) PPC_WEAK_FUNC(sub_8368AAE0);
PPC_FUNC_IMPL(__imp__sub_8368AAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// addi r3,r10,-8388
	ctx.r3.s64 = ctx.r10.s64 + -8388;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AAF4"))) PPC_WEAK_FUNC(sub_8368AAF4);
PPC_FUNC_IMPL(__imp__sub_8368AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AAF8"))) PPC_WEAK_FUNC(sub_8368AAF8);
PPC_FUNC_IMPL(__imp__sub_8368AAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,18600
	ctx.r4.s64 = ctx.r11.s64 + 18600;
	// addi r3,r10,-8384
	ctx.r3.s64 = ctx.r10.s64 + -8384;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AB0C"))) PPC_WEAK_FUNC(sub_8368AB0C);
PPC_FUNC_IMPL(__imp__sub_8368AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AB10"))) PPC_WEAK_FUNC(sub_8368AB10);
PPC_FUNC_IMPL(__imp__sub_8368AB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,18588
	ctx.r4.s64 = ctx.r11.s64 + 18588;
	// addi r3,r10,-8380
	ctx.r3.s64 = ctx.r10.s64 + -8380;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AB24"))) PPC_WEAK_FUNC(sub_8368AB24);
PPC_FUNC_IMPL(__imp__sub_8368AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AB28"))) PPC_WEAK_FUNC(sub_8368AB28);
PPC_FUNC_IMPL(__imp__sub_8368AB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,18576
	ctx.r4.s64 = ctx.r11.s64 + 18576;
	// addi r3,r10,-8376
	ctx.r3.s64 = ctx.r10.s64 + -8376;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AB3C"))) PPC_WEAK_FUNC(sub_8368AB3C);
PPC_FUNC_IMPL(__imp__sub_8368AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AB40"))) PPC_WEAK_FUNC(sub_8368AB40);
PPC_FUNC_IMPL(__imp__sub_8368AB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,21512
	ctx.r4.s64 = ctx.r11.s64 + 21512;
	// addi r3,r10,-8184
	ctx.r3.s64 = ctx.r10.s64 + -8184;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AB54"))) PPC_WEAK_FUNC(sub_8368AB54);
PPC_FUNC_IMPL(__imp__sub_8368AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AB58"))) PPC_WEAK_FUNC(sub_8368AB58);
PPC_FUNC_IMPL(__imp__sub_8368AB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,21500
	ctx.r4.s64 = ctx.r11.s64 + 21500;
	// addi r3,r10,-8180
	ctx.r3.s64 = ctx.r10.s64 + -8180;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AB6C"))) PPC_WEAK_FUNC(sub_8368AB6C);
PPC_FUNC_IMPL(__imp__sub_8368AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AB70"))) PPC_WEAK_FUNC(sub_8368AB70);
PPC_FUNC_IMPL(__imp__sub_8368AB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,21480
	ctx.r4.s64 = ctx.r11.s64 + 21480;
	// addi r3,r10,-8176
	ctx.r3.s64 = ctx.r10.s64 + -8176;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AB84"))) PPC_WEAK_FUNC(sub_8368AB84);
PPC_FUNC_IMPL(__imp__sub_8368AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AB88"))) PPC_WEAK_FUNC(sub_8368AB88);
PPC_FUNC_IMPL(__imp__sub_8368AB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,21460
	ctx.r4.s64 = ctx.r11.s64 + 21460;
	// addi r3,r10,-8172
	ctx.r3.s64 = ctx.r10.s64 + -8172;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AB9C"))) PPC_WEAK_FUNC(sub_8368AB9C);
PPC_FUNC_IMPL(__imp__sub_8368AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ABA0"))) PPC_WEAK_FUNC(sub_8368ABA0);
PPC_FUNC_IMPL(__imp__sub_8368ABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,19780
	ctx.r4.s64 = ctx.r11.s64 + 19780;
	// addi r3,r10,-8168
	ctx.r3.s64 = ctx.r10.s64 + -8168;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ABB4"))) PPC_WEAK_FUNC(sub_8368ABB4);
PPC_FUNC_IMPL(__imp__sub_8368ABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ABB8"))) PPC_WEAK_FUNC(sub_8368ABB8);
PPC_FUNC_IMPL(__imp__sub_8368ABB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,21112
	ctx.r4.s64 = ctx.r11.s64 + 21112;
	// addi r3,r10,-8164
	ctx.r3.s64 = ctx.r10.s64 + -8164;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ABCC"))) PPC_WEAK_FUNC(sub_8368ABCC);
PPC_FUNC_IMPL(__imp__sub_8368ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ABD0"))) PPC_WEAK_FUNC(sub_8368ABD0);
PPC_FUNC_IMPL(__imp__sub_8368ABD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,19564
	ctx.r4.s64 = ctx.r11.s64 + 19564;
	// addi r3,r10,-8160
	ctx.r3.s64 = ctx.r10.s64 + -8160;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ABE4"))) PPC_WEAK_FUNC(sub_8368ABE4);
PPC_FUNC_IMPL(__imp__sub_8368ABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ABE8"))) PPC_WEAK_FUNC(sub_8368ABE8);
PPC_FUNC_IMPL(__imp__sub_8368ABE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,20080
	ctx.r4.s64 = ctx.r11.s64 + 20080;
	// addi r3,r10,-8156
	ctx.r3.s64 = ctx.r10.s64 + -8156;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ABFC"))) PPC_WEAK_FUNC(sub_8368ABFC);
PPC_FUNC_IMPL(__imp__sub_8368ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AC00"))) PPC_WEAK_FUNC(sub_8368AC00);
PPC_FUNC_IMPL(__imp__sub_8368AC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,20188
	ctx.r4.s64 = ctx.r11.s64 + 20188;
	// addi r3,r10,-8152
	ctx.r3.s64 = ctx.r10.s64 + -8152;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AC14"))) PPC_WEAK_FUNC(sub_8368AC14);
PPC_FUNC_IMPL(__imp__sub_8368AC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AC18"))) PPC_WEAK_FUNC(sub_8368AC18);
PPC_FUNC_IMPL(__imp__sub_8368AC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30356
	ctx.r4.s64 = ctx.r11.s64 + -30356;
	// addi r3,r10,-8112
	ctx.r3.s64 = ctx.r10.s64 + -8112;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AC2C"))) PPC_WEAK_FUNC(sub_8368AC2C);
PPC_FUNC_IMPL(__imp__sub_8368AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AC30"))) PPC_WEAK_FUNC(sub_8368AC30);
PPC_FUNC_IMPL(__imp__sub_8368AC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30348
	ctx.r4.s64 = ctx.r11.s64 + -30348;
	// addi r3,r10,-8108
	ctx.r3.s64 = ctx.r10.s64 + -8108;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AC44"))) PPC_WEAK_FUNC(sub_8368AC44);
PPC_FUNC_IMPL(__imp__sub_8368AC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AC48"))) PPC_WEAK_FUNC(sub_8368AC48);
PPC_FUNC_IMPL(__imp__sub_8368AC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30336
	ctx.r4.s64 = ctx.r11.s64 + -30336;
	// addi r3,r10,-8104
	ctx.r3.s64 = ctx.r10.s64 + -8104;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AC5C"))) PPC_WEAK_FUNC(sub_8368AC5C);
PPC_FUNC_IMPL(__imp__sub_8368AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AC60"))) PPC_WEAK_FUNC(sub_8368AC60);
PPC_FUNC_IMPL(__imp__sub_8368AC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30320
	ctx.r4.s64 = ctx.r11.s64 + -30320;
	// addi r3,r10,-8100
	ctx.r3.s64 = ctx.r10.s64 + -8100;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AC74"))) PPC_WEAK_FUNC(sub_8368AC74);
PPC_FUNC_IMPL(__imp__sub_8368AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AC78"))) PPC_WEAK_FUNC(sub_8368AC78);
PPC_FUNC_IMPL(__imp__sub_8368AC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30304
	ctx.r4.s64 = ctx.r11.s64 + -30304;
	// addi r3,r10,-8096
	ctx.r3.s64 = ctx.r10.s64 + -8096;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AC8C"))) PPC_WEAK_FUNC(sub_8368AC8C);
PPC_FUNC_IMPL(__imp__sub_8368AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AC90"))) PPC_WEAK_FUNC(sub_8368AC90);
PPC_FUNC_IMPL(__imp__sub_8368AC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30284
	ctx.r4.s64 = ctx.r11.s64 + -30284;
	// addi r3,r10,-8092
	ctx.r3.s64 = ctx.r10.s64 + -8092;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ACA4"))) PPC_WEAK_FUNC(sub_8368ACA4);
PPC_FUNC_IMPL(__imp__sub_8368ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ACA8"))) PPC_WEAK_FUNC(sub_8368ACA8);
PPC_FUNC_IMPL(__imp__sub_8368ACA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30268
	ctx.r4.s64 = ctx.r11.s64 + -30268;
	// addi r3,r10,-8088
	ctx.r3.s64 = ctx.r10.s64 + -8088;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ACBC"))) PPC_WEAK_FUNC(sub_8368ACBC);
PPC_FUNC_IMPL(__imp__sub_8368ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ACC0"))) PPC_WEAK_FUNC(sub_8368ACC0);
PPC_FUNC_IMPL(__imp__sub_8368ACC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,4492
	ctx.r4.s64 = ctx.r11.s64 + 4492;
	// addi r3,r10,-8084
	ctx.r3.s64 = ctx.r10.s64 + -8084;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ACD4"))) PPC_WEAK_FUNC(sub_8368ACD4);
PPC_FUNC_IMPL(__imp__sub_8368ACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ACD8"))) PPC_WEAK_FUNC(sub_8368ACD8);
PPC_FUNC_IMPL(__imp__sub_8368ACD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30256
	ctx.r4.s64 = ctx.r11.s64 + -30256;
	// addi r3,r10,-8080
	ctx.r3.s64 = ctx.r10.s64 + -8080;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ACEC"))) PPC_WEAK_FUNC(sub_8368ACEC);
PPC_FUNC_IMPL(__imp__sub_8368ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ACF0"))) PPC_WEAK_FUNC(sub_8368ACF0);
PPC_FUNC_IMPL(__imp__sub_8368ACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,18252
	ctx.r4.s64 = ctx.r11.s64 + 18252;
	// addi r3,r10,-8076
	ctx.r3.s64 = ctx.r10.s64 + -8076;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AD04"))) PPC_WEAK_FUNC(sub_8368AD04);
PPC_FUNC_IMPL(__imp__sub_8368AD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AD08"))) PPC_WEAK_FUNC(sub_8368AD08);
PPC_FUNC_IMPL(__imp__sub_8368AD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30248
	ctx.r4.s64 = ctx.r11.s64 + -30248;
	// addi r3,r10,-8072
	ctx.r3.s64 = ctx.r10.s64 + -8072;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AD1C"))) PPC_WEAK_FUNC(sub_8368AD1C);
PPC_FUNC_IMPL(__imp__sub_8368AD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AD20"))) PPC_WEAK_FUNC(sub_8368AD20);
PPC_FUNC_IMPL(__imp__sub_8368AD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30668
	ctx.r4.s64 = ctx.r11.s64 + -30668;
	// addi r3,r10,-8068
	ctx.r3.s64 = ctx.r10.s64 + -8068;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AD34"))) PPC_WEAK_FUNC(sub_8368AD34);
PPC_FUNC_IMPL(__imp__sub_8368AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AD38"))) PPC_WEAK_FUNC(sub_8368AD38);
PPC_FUNC_IMPL(__imp__sub_8368AD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30244
	ctx.r4.s64 = ctx.r11.s64 + -30244;
	// addi r3,r10,-8064
	ctx.r3.s64 = ctx.r10.s64 + -8064;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AD4C"))) PPC_WEAK_FUNC(sub_8368AD4C);
PPC_FUNC_IMPL(__imp__sub_8368AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AD50"))) PPC_WEAK_FUNC(sub_8368AD50);
PPC_FUNC_IMPL(__imp__sub_8368AD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30236
	ctx.r4.s64 = ctx.r11.s64 + -30236;
	// addi r3,r10,-8060
	ctx.r3.s64 = ctx.r10.s64 + -8060;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AD64"))) PPC_WEAK_FUNC(sub_8368AD64);
PPC_FUNC_IMPL(__imp__sub_8368AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AD68"))) PPC_WEAK_FUNC(sub_8368AD68);
PPC_FUNC_IMPL(__imp__sub_8368AD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,20216
	ctx.r4.s64 = ctx.r11.s64 + 20216;
	// addi r3,r10,-8056
	ctx.r3.s64 = ctx.r10.s64 + -8056;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AD7C"))) PPC_WEAK_FUNC(sub_8368AD7C);
PPC_FUNC_IMPL(__imp__sub_8368AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AD80"))) PPC_WEAK_FUNC(sub_8368AD80);
PPC_FUNC_IMPL(__imp__sub_8368AD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30228
	ctx.r4.s64 = ctx.r11.s64 + -30228;
	// addi r3,r10,-8052
	ctx.r3.s64 = ctx.r10.s64 + -8052;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AD94"))) PPC_WEAK_FUNC(sub_8368AD94);
PPC_FUNC_IMPL(__imp__sub_8368AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AD98"))) PPC_WEAK_FUNC(sub_8368AD98);
PPC_FUNC_IMPL(__imp__sub_8368AD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30220
	ctx.r4.s64 = ctx.r11.s64 + -30220;
	// addi r3,r10,-8048
	ctx.r3.s64 = ctx.r10.s64 + -8048;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ADAC"))) PPC_WEAK_FUNC(sub_8368ADAC);
PPC_FUNC_IMPL(__imp__sub_8368ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ADB0"))) PPC_WEAK_FUNC(sub_8368ADB0);
PPC_FUNC_IMPL(__imp__sub_8368ADB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30212
	ctx.r4.s64 = ctx.r11.s64 + -30212;
	// addi r3,r10,-8044
	ctx.r3.s64 = ctx.r10.s64 + -8044;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ADC4"))) PPC_WEAK_FUNC(sub_8368ADC4);
PPC_FUNC_IMPL(__imp__sub_8368ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ADC8"))) PPC_WEAK_FUNC(sub_8368ADC8);
PPC_FUNC_IMPL(__imp__sub_8368ADC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30196
	ctx.r4.s64 = ctx.r11.s64 + -30196;
	// addi r3,r10,-8040
	ctx.r3.s64 = ctx.r10.s64 + -8040;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ADDC"))) PPC_WEAK_FUNC(sub_8368ADDC);
PPC_FUNC_IMPL(__imp__sub_8368ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ADE0"))) PPC_WEAK_FUNC(sub_8368ADE0);
PPC_FUNC_IMPL(__imp__sub_8368ADE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30176
	ctx.r4.s64 = ctx.r11.s64 + -30176;
	// addi r3,r10,-8036
	ctx.r3.s64 = ctx.r10.s64 + -8036;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368ADF4"))) PPC_WEAK_FUNC(sub_8368ADF4);
PPC_FUNC_IMPL(__imp__sub_8368ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368ADF8"))) PPC_WEAK_FUNC(sub_8368ADF8);
PPC_FUNC_IMPL(__imp__sub_8368ADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30164
	ctx.r4.s64 = ctx.r11.s64 + -30164;
	// addi r3,r10,-8032
	ctx.r3.s64 = ctx.r10.s64 + -8032;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AE0C"))) PPC_WEAK_FUNC(sub_8368AE0C);
PPC_FUNC_IMPL(__imp__sub_8368AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AE10"))) PPC_WEAK_FUNC(sub_8368AE10);
PPC_FUNC_IMPL(__imp__sub_8368AE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30152
	ctx.r4.s64 = ctx.r11.s64 + -30152;
	// addi r3,r10,-8028
	ctx.r3.s64 = ctx.r10.s64 + -8028;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AE24"))) PPC_WEAK_FUNC(sub_8368AE24);
PPC_FUNC_IMPL(__imp__sub_8368AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AE28"))) PPC_WEAK_FUNC(sub_8368AE28);
PPC_FUNC_IMPL(__imp__sub_8368AE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30140
	ctx.r4.s64 = ctx.r11.s64 + -30140;
	// addi r3,r10,-8024
	ctx.r3.s64 = ctx.r10.s64 + -8024;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AE3C"))) PPC_WEAK_FUNC(sub_8368AE3C);
PPC_FUNC_IMPL(__imp__sub_8368AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AE40"))) PPC_WEAK_FUNC(sub_8368AE40);
PPC_FUNC_IMPL(__imp__sub_8368AE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30116
	ctx.r4.s64 = ctx.r11.s64 + -30116;
	// addi r3,r10,-8020
	ctx.r3.s64 = ctx.r10.s64 + -8020;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AE54"))) PPC_WEAK_FUNC(sub_8368AE54);
PPC_FUNC_IMPL(__imp__sub_8368AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AE58"))) PPC_WEAK_FUNC(sub_8368AE58);
PPC_FUNC_IMPL(__imp__sub_8368AE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30096
	ctx.r4.s64 = ctx.r11.s64 + -30096;
	// addi r3,r10,-8016
	ctx.r3.s64 = ctx.r10.s64 + -8016;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AE6C"))) PPC_WEAK_FUNC(sub_8368AE6C);
PPC_FUNC_IMPL(__imp__sub_8368AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AE70"))) PPC_WEAK_FUNC(sub_8368AE70);
PPC_FUNC_IMPL(__imp__sub_8368AE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30076
	ctx.r4.s64 = ctx.r11.s64 + -30076;
	// addi r3,r10,-8012
	ctx.r3.s64 = ctx.r10.s64 + -8012;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AE84"))) PPC_WEAK_FUNC(sub_8368AE84);
PPC_FUNC_IMPL(__imp__sub_8368AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AE88"))) PPC_WEAK_FUNC(sub_8368AE88);
PPC_FUNC_IMPL(__imp__sub_8368AE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30064
	ctx.r4.s64 = ctx.r11.s64 + -30064;
	// addi r3,r10,-8008
	ctx.r3.s64 = ctx.r10.s64 + -8008;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AE9C"))) PPC_WEAK_FUNC(sub_8368AE9C);
PPC_FUNC_IMPL(__imp__sub_8368AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AEA0"))) PPC_WEAK_FUNC(sub_8368AEA0);
PPC_FUNC_IMPL(__imp__sub_8368AEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,15956
	ctx.r4.s64 = ctx.r11.s64 + 15956;
	// addi r3,r10,-8004
	ctx.r3.s64 = ctx.r10.s64 + -8004;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AEB4"))) PPC_WEAK_FUNC(sub_8368AEB4);
PPC_FUNC_IMPL(__imp__sub_8368AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AEB8"))) PPC_WEAK_FUNC(sub_8368AEB8);
PPC_FUNC_IMPL(__imp__sub_8368AEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30060
	ctx.r4.s64 = ctx.r11.s64 + -30060;
	// addi r3,r10,-8000
	ctx.r3.s64 = ctx.r10.s64 + -8000;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AECC"))) PPC_WEAK_FUNC(sub_8368AECC);
PPC_FUNC_IMPL(__imp__sub_8368AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AED0"))) PPC_WEAK_FUNC(sub_8368AED0);
PPC_FUNC_IMPL(__imp__sub_8368AED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30056
	ctx.r4.s64 = ctx.r11.s64 + -30056;
	// addi r3,r10,-7996
	ctx.r3.s64 = ctx.r10.s64 + -7996;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AEE4"))) PPC_WEAK_FUNC(sub_8368AEE4);
PPC_FUNC_IMPL(__imp__sub_8368AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AEE8"))) PPC_WEAK_FUNC(sub_8368AEE8);
PPC_FUNC_IMPL(__imp__sub_8368AEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30052
	ctx.r4.s64 = ctx.r11.s64 + -30052;
	// addi r3,r10,-7992
	ctx.r3.s64 = ctx.r10.s64 + -7992;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AEFC"))) PPC_WEAK_FUNC(sub_8368AEFC);
PPC_FUNC_IMPL(__imp__sub_8368AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AF00"))) PPC_WEAK_FUNC(sub_8368AF00);
PPC_FUNC_IMPL(__imp__sub_8368AF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30048
	ctx.r4.s64 = ctx.r11.s64 + -30048;
	// addi r3,r10,-7988
	ctx.r3.s64 = ctx.r10.s64 + -7988;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AF14"))) PPC_WEAK_FUNC(sub_8368AF14);
PPC_FUNC_IMPL(__imp__sub_8368AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AF18"))) PPC_WEAK_FUNC(sub_8368AF18);
PPC_FUNC_IMPL(__imp__sub_8368AF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30044
	ctx.r4.s64 = ctx.r11.s64 + -30044;
	// addi r3,r10,-7984
	ctx.r3.s64 = ctx.r10.s64 + -7984;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AF2C"))) PPC_WEAK_FUNC(sub_8368AF2C);
PPC_FUNC_IMPL(__imp__sub_8368AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AF30"))) PPC_WEAK_FUNC(sub_8368AF30);
PPC_FUNC_IMPL(__imp__sub_8368AF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30028
	ctx.r4.s64 = ctx.r11.s64 + -30028;
	// addi r3,r10,-7980
	ctx.r3.s64 = ctx.r10.s64 + -7980;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AF44"))) PPC_WEAK_FUNC(sub_8368AF44);
PPC_FUNC_IMPL(__imp__sub_8368AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8368AF48"))) PPC_WEAK_FUNC(sub_8368AF48);
PPC_FUNC_IMPL(__imp__sub_8368AF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,-30016
	ctx.r4.s64 = ctx.r11.s64 + -30016;
	// addi r3,r10,-7976
	ctx.r3.s64 = ctx.r10.s64 + -7976;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368AF5C"))) PPC_WEAK_FUNC(sub_8368AF5C);
PPC_FUNC_IMPL(__imp__sub_8368AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

