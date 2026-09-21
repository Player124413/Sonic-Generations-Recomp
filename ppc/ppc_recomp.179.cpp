#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A955C0"))) PPC_WEAK_FUNC(sub_82A955C0);
PPC_FUNC_IMPL(__imp__sub_82A955C0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// bl 0x82e01a68
	ctx.lr = 0x82A95610;
	sub_82E01A68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,12964(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12964);
	// bl 0x82e02340
	ctx.lr = 0x82A9562C;
	sub_82E02340(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e93238
	ctx.lr = 0x82A95638;
	sub_82E93238(ctx, base);
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,448(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 448, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,452(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 452, temp.u32);
	// lfs f0,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 456, temp.u32);
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 460, temp.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x82A95660;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9567C"))) PPC_WEAK_FUNC(sub_82A9567C);
PPC_FUNC_IMPL(__imp__sub_82A9567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95680"))) PPC_WEAK_FUNC(sub_82A95680);
PPC_FUNC_IMPL(__imp__sub_82A95680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// addi r9,r11,8272
	ctx.r9.s64 = ctx.r11.s64 + 8272;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-31843
	ctx.r7.s64 = -2086862848;
	// lfs f0,24284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r7,r7,-23184
	ctx.r7.s64 = ctx.r7.s64 + -23184;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r8,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r8.u8);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,756(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 756, temp.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,772(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 772, temp.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,776(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 776, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A95730"))) PPC_WEAK_FUNC(sub_82A95730);
PPC_FUNC_IMPL(__imp__sub_82A95730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a95770
	if (!ctx.cr0.eq) goto loc_82A95770;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f13,12452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a95768
	if (ctx.cr6.gt) goto loc_82A95768;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a9576c
	if (!ctx.cr6.lt) goto loc_82A9576C;
loc_82A95768:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82A9576C:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82A95770:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,-23184
	ctx.r9.s64 = ctx.r9.s64 + -23184;
	// stfs f0,756(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 756, temp.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,772(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 772, temp.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,776(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 776, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A957EC"))) PPC_WEAK_FUNC(sub_82A957EC);
PPC_FUNC_IMPL(__imp__sub_82A957EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A957F0"))) PPC_WEAK_FUNC(sub_82A957F0);
PPC_FUNC_IMPL(__imp__sub_82A957F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82a95848
	if (ctx.cr6.lt) goto loc_82A95848;
	// beq cr6,0x82a95834
	if (ctx.cr6.eq) goto loc_82A95834;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a95820
	if (ctx.cr6.lt) goto loc_82A95820;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-3888
	ctx.r11.s64 = ctx.r11.s64 + -3888;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
loc_82A95820:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-3888
	ctx.r11.s64 = ctx.r11.s64 + -3888;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
loc_82A95834:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-3888
	ctx.r11.s64 = ctx.r11.s64 + -3888;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
loc_82A95848:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-3888(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3888, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A95858"))) PPC_WEAK_FUNC(sub_82A95858);
PPC_FUNC_IMPL(__imp__sub_82A95858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r10,r11,-3888
	ctx.r10.s64 = ctx.r11.s64 + -3888;
	// lfs f0,-3888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3888);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A95884"))) PPC_WEAK_FUNC(sub_82A95884);
PPC_FUNC_IMPL(__imp__sub_82A95884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95888"))) PPC_WEAK_FUNC(sub_82A95888);
PPC_FUNC_IMPL(__imp__sub_82A95888) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r11,r11,796
	ctx.r11.s64 = ctx.r11.s64 + 796;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,732
	ctx.r10.s64 = ctx.r10.s64 + 732;
	// addi r9,r9,712
	ctx.r9.s64 = ctx.r9.s64 + 712;
	// addi r11,r8,788
	ctx.r11.s64 = ctx.r8.s64 + 788;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// bl 0x82a94c58
	ctx.lr = 0x82A958D0;
	sub_82A94C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a941b8
	ctx.lr = 0x82A958D8;
	sub_82A941B8(ctx, base);
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

__attribute__((alias("__imp__sub_82A958EC"))) PPC_WEAK_FUNC(sub_82A958EC);
PPC_FUNC_IMPL(__imp__sub_82A958EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A958F0"))) PPC_WEAK_FUNC(sub_82A958F0);
PPC_FUNC_IMPL(__imp__sub_82A958F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a95904
	if (!ctx.cr6.eq) goto loc_82A95904;
	// addic. r11,r3,-44
	ctx.xer.ca = ctx.r3.u32 > 43;
	ctx.r11.s64 = ctx.r3.s64 + -44;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82A95904:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9590C"))) PPC_WEAK_FUNC(sub_82A9590C);
PPC_FUNC_IMPL(__imp__sub_82A9590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95910"))) PPC_WEAK_FUNC(sub_82A95910);
PPC_FUNC_IMPL(__imp__sub_82A95910) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82a95d40
	sub_82A95D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A95918"))) PPC_WEAK_FUNC(sub_82A95918);
PPC_FUNC_IMPL(__imp__sub_82A95918) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82a95d40
	sub_82A95D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A95920"))) PPC_WEAK_FUNC(sub_82A95920);
PPC_FUNC_IMPL(__imp__sub_82A95920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A95928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12964);
	// bl 0x82e02298
	ctx.lr = 0x82A95948;
	sub_82E02298(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9595c
	if (ctx.cr0.eq) goto loc_82A9595C;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1832(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1832, ctx.r10.u8);
loc_82A9595C:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,13016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13016);
	// bl 0x82e02298
	ctx.lr = 0x82A9596C;
	sub_82E02298(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a959cc
	if (ctx.cr0.eq) goto loc_82A959CC;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x82870120
	ctx.lr = 0x82A9597C;
	sub_82870120(ctx, base);
	// bl 0x82a1edb8
	ctx.lr = 0x82A95980;
	sub_82A1EDB8(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,7768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7768);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a959ac
	if (ctx.cr6.gt) goto loc_82A959AC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a959b0
	if (!ctx.cr6.lt) goto loc_82A959B0;
loc_82A959AC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82A959B0:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stfs f1,1824(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1824, temp.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stfs f0,1828(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1828, temp.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1836(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1836, temp.u32);
loc_82A959CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A959D4"))) PPC_WEAK_FUNC(sub_82A959D4);
PPC_FUNC_IMPL(__imp__sub_82A959D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A959D8"))) PPC_WEAK_FUNC(sub_82A959D8);
PPC_FUNC_IMPL(__imp__sub_82A959D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A95A04;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a95a30
	if (ctx.cr0.eq) goto loc_82A95A30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,592
	ctx.r9.s64 = ctx.r11.s64 + 592;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a95a34
	goto loc_82A95A34;
loc_82A95A30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A95A34:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a95a80
	if (!ctx.cr6.eq) goto loc_82A95A80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a95a60
	if (ctx.cr6.eq) goto loc_82A95A60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A95A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A95A60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A95A80;
	sub_82C10E98(ctx, base);
loc_82A95A80:
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

__attribute__((alias("__imp__sub_82A95A9C"))) PPC_WEAK_FUNC(sub_82A95A9C);
PPC_FUNC_IMPL(__imp__sub_82A95A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95AA0"))) PPC_WEAK_FUNC(sub_82A95AA0);
PPC_FUNC_IMPL(__imp__sub_82A95AA0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A95ACC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a95af8
	if (ctx.cr0.eq) goto loc_82A95AF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,612
	ctx.r9.s64 = ctx.r11.s64 + 612;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a95afc
	goto loc_82A95AFC;
loc_82A95AF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A95AFC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a95b48
	if (!ctx.cr6.eq) goto loc_82A95B48;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a95b28
	if (ctx.cr6.eq) goto loc_82A95B28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A95B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A95B28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A95B48;
	sub_82C10E98(ctx, base);
loc_82A95B48:
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

__attribute__((alias("__imp__sub_82A95B64"))) PPC_WEAK_FUNC(sub_82A95B64);
PPC_FUNC_IMPL(__imp__sub_82A95B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95B68"))) PPC_WEAK_FUNC(sub_82A95B68);
PPC_FUNC_IMPL(__imp__sub_82A95B68) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r3,2080
	ctx.r30.s64 = ctx.r3.s64 + 2080;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82A95B8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a95730
	ctx.lr = 0x82A95B98;
	sub_82A95730(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x82a95b8c
	if (!ctx.cr0.eq) goto loc_82A95B8C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A95BC0"))) PPC_WEAK_FUNC(sub_82A95BC0);
PPC_FUNC_IMPL(__imp__sub_82A95BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A95BC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,128
	ctx.r28.s64 = ctx.r3.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833919c0
	ctx.lr = 0x82A95BDC;
	sub_833919C0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,2080
	ctx.r29.s64 = ctx.r31.s64 + 2080;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// lwz r11,1856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// stfs f0,500(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stw r10,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r10.u32);
	// stfs f0,1896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// stfs f0,1900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1900, temp.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// stfs f0,1912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1912, temp.u32);
	// stfs f0,1916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1916, temp.u32);
	// stfs f0,1920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1920, temp.u32);
	// stfs f0,1924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1924, temp.u32);
	// stfs f0,1928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1928, temp.u32);
	// stw r30,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r30.u32);
	// stfs f0,1940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1940, temp.u32);
	// stfs f0,1944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1944, temp.u32);
loc_82A95C2C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a95680
	ctx.lr = 0x82A95C3C;
	sub_82A95680(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82a95c2c
	if (ctx.cr6.lt) goto loc_82A95C2C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A95C54"))) PPC_WEAK_FUNC(sub_82A95C54);
PPC_FUNC_IMPL(__imp__sub_82A95C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95C58"))) PPC_WEAK_FUNC(sub_82A95C58);
PPC_FUNC_IMPL(__imp__sub_82A95C58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a95bc0
	sub_82A95BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A95C5C"))) PPC_WEAK_FUNC(sub_82A95C5C);
PPC_FUNC_IMPL(__imp__sub_82A95C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95C60"))) PPC_WEAK_FUNC(sub_82A95C60);
PPC_FUNC_IMPL(__imp__sub_82A95C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A95C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,385(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 385);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a95d34
	if (!ctx.cr0.eq) goto loc_82A95D34;
	// lwz r11,200(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a95d34
	if (!ctx.cr6.gt) goto loc_82A95D34;
	// addi r11,r4,208
	ctx.r11.s64 = ctx.r4.s64 + 208;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r29,12452
	ctx.r8.s64 = ctx.r29.s64 + 12452;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvlx128 v62,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vrlimi128 v63,v62,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// lvlx128 v62,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ee9408
	ctx.lr = 0x82A95CD8;
	sub_82EE9408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ee9408
	ctx.lr = 0x82A95CF8;
	sub_82EE9408(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,12452(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,408(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 408, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// stfs f0,412(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 412, temp.u32);
loc_82A95D34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A95D3C"))) PPC_WEAK_FUNC(sub_82A95D3C);
PPC_FUNC_IMPL(__imp__sub_82A95D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95D40"))) PPC_WEAK_FUNC(sub_82A95D40);
PPC_FUNC_IMPL(__imp__sub_82A95D40) {
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
	// bl 0x82a95888
	ctx.lr = 0x82A95D60;
	sub_82A95888(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a95d70
	if (ctx.cr0.eq) goto loc_82A95D70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82A95D70;
	sub_82E01698(ctx, base);
loc_82A95D70:
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

__attribute__((alias("__imp__sub_82A95D8C"))) PPC_WEAK_FUNC(sub_82A95D8C);
PPC_FUNC_IMPL(__imp__sub_82A95D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95D90"))) PPC_WEAK_FUNC(sub_82A95D90);
PPC_FUNC_IMPL(__imp__sub_82A95D90) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x833a1390
	ctx.lr = 0x82A95DB8;
	sub_833A1390(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a95dd4
	if (!ctx.cr6.eq) goto loc_82A95DD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82870120
	ctx.lr = 0x82A95DCC;
	sub_82870120(ctx, base);
	// bl 0x82a1f5b8
	ctx.lr = 0x82A95DD0;
	sub_82A1F5B8(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
loc_82A95DD4:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a95e54
	if (!ctx.cr6.eq) goto loc_82A95E54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// bl 0x82e02670
	ctx.lr = 0x82A95DF0;
	sub_82E02670(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82870120
	ctx.lr = 0x82A95DF8;
	sub_82870120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a20d58
	ctx.lr = 0x82A95E08;
	sub_82A20D58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A95E10;
	sub_82E01BF0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a95e24
	if (!ctx.cr6.eq) goto loc_82A95E24;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A95E24:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3c3b8
	ctx.lr = 0x82A95E2C;
	sub_82A3C3B8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x825f2ba0
	ctx.lr = 0x82A95E34;
	sub_825F2BA0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a95e4c
	if (ctx.cr6.eq) goto loc_82A95E4C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A95E4C;
	sub_82480108(ctx, base);
loc_82A95E4C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82A95E54;
	sub_82E01548(ctx, base);
loc_82A95E54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A95E58:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e29c70
	ctx.lr = 0x82A95E68;
	sub_82E29C70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e25320
	ctx.lr = 0x82A95E7C;
	sub_82E25320(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a95e8c
	if (ctx.cr6.eq) goto loc_82A95E8C;
	// bl 0x82480108
	ctx.lr = 0x82A95E8C;
	sub_82480108(ctx, base);
loc_82A95E8C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// blt cr6,0x82a95e58
	if (ctx.cr6.lt) goto loc_82A95E58;
	// li r31,14
	ctx.r31.s64 = 14;
loc_82A95E9C:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e29c70
	ctx.lr = 0x82A95EAC;
	sub_82E29C70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e25320
	ctx.lr = 0x82A95EC0;
	sub_82E25320(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a95ed0
	if (ctx.cr6.eq) goto loc_82A95ED0;
	// bl 0x82480108
	ctx.lr = 0x82A95ED0;
	sub_82480108(ctx, base);
loc_82A95ED0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82a95e9c
	if (ctx.cr6.lt) goto loc_82A95E9C;
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,1848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// bl 0x83391228
	ctx.lr = 0x82A95EF4;
	sub_83391228(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82A95F0C"))) PPC_WEAK_FUNC(sub_82A95F0C);
PPC_FUNC_IMPL(__imp__sub_82A95F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95F10"))) PPC_WEAK_FUNC(sub_82A95F10);
PPC_FUNC_IMPL(__imp__sub_82A95F10) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a959d8
	ctx.lr = 0x82A95F38;
	sub_82A959D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A95F48;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A95F64"))) PPC_WEAK_FUNC(sub_82A95F64);
PPC_FUNC_IMPL(__imp__sub_82A95F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95F68"))) PPC_WEAK_FUNC(sub_82A95F68);
PPC_FUNC_IMPL(__imp__sub_82A95F68) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a95aa0
	ctx.lr = 0x82A95F90;
	sub_82A95AA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A95FA0;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A95FBC"))) PPC_WEAK_FUNC(sub_82A95FBC);
PPC_FUNC_IMPL(__imp__sub_82A95FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A95FC0"))) PPC_WEAK_FUNC(sub_82A95FC0);
PPC_FUNC_IMPL(__imp__sub_82A95FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x82A95FC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// lbz r11,-8384(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8384);
	// addi r7,r9,-8348
	ctx.r7.s64 = ctx.r9.s64 + -8348;
	// lis r6,-31885
	ctx.r6.s64 = -2089615360;
	// lis r5,-31885
	ctx.r5.s64 = -2089615360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r5,-8332
	ctx.r3.s64 = ctx.r5.s64 + -8332;
	// stb r11,752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 752, ctx.r11.u8);
	// lis r4,-31843
	ctx.r4.s64 = -2086862848;
	// lwz r11,-8380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8380);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// lfs f0,-8348(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 768, temp.u32);
	// lis r28,-31843
	ctx.r28.s64 = -2086862848;
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stfs f0,772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,-26992
	ctx.r9.s64 = ctx.r10.s64 + -26992;
	// stfs f0,776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// lfs f0,-8376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8376);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-31885
	ctx.r7.s64 = -2089615360;
	// stfs f0,784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// lfs f0,-8372(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8372);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// stfs f0,788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// lfs f0,-8332(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -8332);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-31885
	ctx.r6.s64 = -2089615360;
	// stfs f0,816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// lis r23,-31843
	ctx.r23.s64 = -2086862848;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-31885
	ctx.r5.s64 = -2089615360;
	// stfs f0,820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 820, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r5,-7436
	ctx.r22.s64 = ctx.r5.s64 + -7436;
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// lbz r11,-26810(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + -26810);
	// stb r11,832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 832, ctx.r11.u8);
	// lbz r11,-8948(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -8948);
	// stb r11,704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 704, ctx.r11.u8);
	// lbz r11,-27036(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -27036);
	// stb r11,705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 705, ctx.r11.u8);
	// lfs f0,-26992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 720, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
	// lwz r11,-8940(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8940);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// lbz r11,-7592(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -7592);
	// stb r11,512(r31)
	PPC_STORE_U8(ctx.r31.u32 + 512, ctx.r11.u8);
	// lfs f0,-7588(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -7588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// lfs f0,-7584(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -7584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// lfs f0,-7580(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// lfs f0,-7576(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -7576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// lfs f0,-7572(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -7572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// lbz r11,-26256(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + -26256);
	// stb r11,1024(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1024, ctx.r11.u8);
	// lfs f0,-7436(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -7436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// lfs f0,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// lfs f0,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// stfs f0,1048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// lfs f0,12(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// stfs f0,1052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// lfs f0,-7460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1056(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// lfs f0,-7456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1060(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// lfs f0,-7452(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7452);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1064(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// lwz r11,-7448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// bl 0x829fe290
	ctx.lr = 0x82A96154;
	sub_829FE290(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// bl 0x829fe290
	ctx.lr = 0x82A96160;
	sub_829FE290(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1076(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// bl 0x829fe290
	ctx.lr = 0x82A9616C;
	sub_829FE290(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1080(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// lis r7,-31843
	ctx.r7.s64 = -2086862848;
	// lis r6,-31843
	ctx.r6.s64 = -2086862848;
	// lis r5,-31843
	ctx.r5.s64 = -2086862848;
	// lis r4,-31885
	ctx.r4.s64 = -2089615360;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7444);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// stfs f0,1088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1088, temp.u32);
	// lfs f0,-7440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7440);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// stfs f0,1092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1092, temp.u32);
	// lfs f0,-26396(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26396);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// stfs f0,1168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1168, temp.u32);
	// lfs f0,-7500(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7500);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r4,-7612
	ctx.r8.s64 = ctx.r4.s64 + -7612;
	// stfs f0,1172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1172, temp.u32);
	// lfs f0,-26392(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26392);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,1176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// lfs f0,-26388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// lfs f0,-26476(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// lfs f0,-7560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// lfs f0,-26472(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// lfs f0,-26468(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1196, temp.u32);
	// lfs f0,-7612(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -7612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1116, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// lbz r11,-7596(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -7596);
	// stb r7,1200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1200, ctx.r7.u8);
	// stb r11,1104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1104, ctx.r11.u8);
	// bl 0x82a1f328
	ctx.lr = 0x82A96230;
	sub_82A1F328(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a96324
	if (ctx.cr0.eq) goto loc_82A96324;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,433
	ctx.r10.s64 = 433;
	// addi r11,r11,832
	ctx.r11.s64 = ctx.r11.s64 + 832;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A96258;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9626C;
	sub_82E01688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a96280
	if (ctx.cr0.eq) goto loc_82A96280;
	// bl 0x8256c710
	ctx.lr = 0x82A96278;
	sub_8256C710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a96284
	goto loc_82A96284;
loc_82A96280:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A96284:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82498d10
	ctx.lr = 0x82A9628C;
	sub_82498D10(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82a962c4
	if (ctx.cr6.eq) goto loc_82A962C4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A962A8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a962a8
	if (!ctx.cr0.eq) goto loc_82A962A8;
loc_82A962C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1f2f0
	ctx.lr = 0x82A962D0;
	sub_82A1F2F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8de28
	ctx.lr = 0x82A962E8;
	sub_82E8DE28(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a96300
	if (ctx.cr6.eq) goto loc_82A96300;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A96300;
	sub_82480108(ctx, base);
loc_82A96300:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96314
	if (ctx.cr0.eq) goto loc_82A96314;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r11,1200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1200, ctx.r11.u8);
loc_82A96314:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a96324
	if (ctx.cr6.eq) goto loc_82A96324;
	// bl 0x82480108
	ctx.lr = 0x82A96324;
	sub_82480108(ctx, base);
loc_82A96324:
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// lis r7,-31844
	ctx.r7.s64 = -2086928384;
	// lwz r11,-23196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23196);
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r11,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,1229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1229, ctx.r11.u8);
	// lwz r11,-23192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23192);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,1230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1230, ctx.r11.u8);
	// lwz r11,-23188(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23188);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r11.u8);
	// lbz r11,6437(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6437);
	// stb r11,1217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1217, ctx.r11.u8);
	// lbz r11,-4151(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + -4151);
	// stb r11,1222(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1222, ctx.r11.u8);
	// bl 0x824b9c48
	ctx.lr = 0x82A9637C;
	sub_824B9C48(ctx, base);
	// stfs f1,1224(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1f068
	ctx.lr = 0x82A96388;
	sub_82A1F068(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r30,-31843
	ctx.r30.s64 = -2086862848;
	// stb r3,1219(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1219, ctx.r3.u8);
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// lfs f13,1896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,-23130(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -23130);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stb r11,1220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1220, ctx.r11.u8);
	// lbz r11,-27102(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -27102);
	// stb r11,1221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1221, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a963c0
	if (!ctx.cr6.gt) goto loc_82A963C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A963C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a963f8
	if (ctx.cr0.eq) goto loc_82A963F8;
	// lis r11,-31892
	ctx.r11.s64 = -2090074112;
	// addi r10,r11,-23128
	ctx.r10.s64 = ctx.r11.s64 + -23128;
	// lbz r11,-23128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -23128);
	// stb r11,848(r31)
	PPC_STORE_U8(ctx.r31.u32 + 848, ctx.r11.u8);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
loc_82A963F8:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r10,r11,-3888
	ctx.r10.s64 = ctx.r11.s64 + -3888;
	// lfs f0,-3888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3888);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1476, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x824aef60
	ctx.lr = 0x82A9642C;
	sub_824AEF60(ctx, base);
	// lis r11,-31892
	ctx.r11.s64 = -2090074112;
	// lis r10,-31892
	ctx.r10.s64 = -2090074112;
	// addi r9,r11,-23100
	ctx.r9.s64 = ctx.r11.s64 + -23100;
	// lis r8,-31885
	ctx.r8.s64 = -2089615360;
	// lis r7,-31885
	ctx.r7.s64 = -2089615360;
	// lis r6,-31885
	ctx.r6.s64 = -2089615360;
	// addi r5,r7,-8492
	ctx.r5.s64 = ctx.r7.s64 + -8492;
	// addi r4,r6,-8476
	ctx.r4.s64 = ctx.r6.s64 + -8476;
	// lis r3,-31885
	ctx.r3.s64 = -2089615360;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// addi r28,r3,-8460
	ctx.r28.s64 = ctx.r3.s64 + -8460;
	// addi r27,r29,-8444
	ctx.r27.s64 = ctx.r29.s64 + -8444;
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// lis r25,-31843
	ctx.r25.s64 = -2086862848;
	// lis r24,-31843
	ctx.r24.s64 = -2086862848;
	// lis r23,-31843
	ctx.r23.s64 = -2086862848;
	// addi r22,r23,-23056
	ctx.r22.s64 = ctx.r23.s64 + -23056;
	// lbz r11,-23100(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -23100);
	// stb r11,868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 868, ctx.r11.u8);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// lbz r11,-23248(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -23248);
	// stb r11,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r11.u8);
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,-8500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8500);
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// stw r11,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r11.u32);
	// lwz r11,-8492(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8492);
	// lis r7,-31843
	ctx.r7.s64 = -2086862848;
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// lwz r11,-8476(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8476);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// lwz r11,-8460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8460);
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// lwz r11,-8444(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8444);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// lfs f0,-8496(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1456, temp.u32);
	// lbz r11,-23132(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -23132);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lbz r11,-23131(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + -23131);
	// stb r11,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r11.u8);
	// lbz r11,-23130(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -23130);
	// lis r14,-31843
	ctx.r14.s64 = -2086862848;
	// stb r11,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r11.u8);
	// addi r5,r7,-23024
	ctx.r5.s64 = ctx.r7.s64 + -23024;
	// addi r11,r14,-22992
	ctx.r11.s64 = ctx.r14.s64 + -22992;
	// lis r6,-31843
	ctx.r6.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r3,-31843
	ctx.r3.s64 = -2086862848;
	// lwz r11,-23160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23160);
	// addi r4,r6,-23008
	ctx.r4.s64 = ctx.r6.s64 + -23008;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lwz r11,-23156(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23156);
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// lis r28,-31843
	ctx.r28.s64 = -2086862848;
	// lis r27,-31843
	ctx.r27.s64 = -2086862848;
	// lis r26,-31843
	ctx.r26.s64 = -2086862848;
	// lis r25,-31843
	ctx.r25.s64 = -2086862848;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r24,r26,-23120
	ctx.r24.s64 = ctx.r26.s64 + -23120;
	// ld r11,-23056(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + -23056);
	// addi r21,r25,-23104
	ctx.r21.s64 = ctx.r25.s64 + -23104;
	// std r11,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r11.u64);
	// lis r20,-31843
	ctx.r20.s64 = -2086862848;
	// ld r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// addi r18,r20,-23088
	ctx.r18.s64 = ctx.r20.s64 + -23088;
	// std r11,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r11.u64);
	// lis r19,-31843
	ctx.r19.s64 = -2086862848;
	// lfs f0,-12352(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12352);
	ctx.f0.f64 = double(temp.f32);
	// addi r17,r19,-23072
	ctx.r17.s64 = ctx.r19.s64 + -23072;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// ld r11,-23024(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -23024);
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// lis r16,-31884
	ctx.r16.s64 = -2089549824;
	// lis r15,-31884
	ctx.r15.s64 = -2089549824;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// lis r7,-31843
	ctx.r7.s64 = -2086862848;
	// ld r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lis r5,-31843
	ctx.r5.s64 = -2086862848;
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
	// ld r11,-23008(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + -23008);
	// lis r6,-31843
	ctx.r6.s64 = -2086862848;
	// std r11,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r4,r6,-22976
	ctx.r4.s64 = ctx.r6.s64 + -22976;
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// lwz r11,-23152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23152);
	// addi r3,r5,-22960
	ctx.r3.s64 = ctx.r5.s64 + -22960;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lfs f0,-12372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f0,-12368(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -12368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lbz r11,-23161(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -23161);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// lbz r11,-23148(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -23148);
	// stb r11,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r11.u8);
	// ld r11,-23120(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + -23120);
	// std r11,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r11.u64);
	// ld r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r11,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r11.u64);
	// ld r11,-23104(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + -23104);
	// std r11,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r11.u64);
	// ld r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// std r11,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r11.u64);
	// ld r11,-23088(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + -23088);
	// std r11,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r11.u64);
	// ld r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 8);
	// std r11,264(r31)
	PPC_STORE_U64(ctx.r31.u32 + 264, ctx.r11.u64);
	// ld r11,-23072(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + -23072);
	// std r11,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r11.u64);
	// ld r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// std r11,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r11.u64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lfs f0,-12340(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + -12340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f0,-12364(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -12364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lfs f0,-12360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lfs f0,-12356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12356);
	ctx.f0.f64 = double(temp.f32);
	// lis r30,-31843
	ctx.r30.s64 = -2086862848;
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lbz r11,-12343(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + -12343);
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
	// addi r28,r30,-22944
	ctx.r28.s64 = ctx.r30.s64 + -22944;
	// lbz r11,-12344(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -12344);
	// lis r29,-31843
	ctx.r29.s64 = -2086862848;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r27,-31892
	ctx.r27.s64 = -2090074112;
	// lis r26,-31892
	ctx.r26.s64 = -2090074112;
	// lis r25,-31843
	ctx.r25.s64 = -2086862848;
	// lis r24,-31843
	ctx.r24.s64 = -2086862848;
	// stb r11,306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 306, ctx.r11.u8);
	// lis r23,-31843
	ctx.r23.s64 = -2086862848;
	// lis r22,-31843
	ctx.r22.s64 = -2086862848;
	// lis r21,-31843
	ctx.r21.s64 = -2086862848;
	// lis r20,-31843
	ctx.r20.s64 = -2086862848;
	// lis r19,-31885
	ctx.r19.s64 = -2089615360;
	// lis r18,-31885
	ctx.r18.s64 = -2089615360;
	// lis r17,-31885
	ctx.r17.s64 = -2089615360;
	// lis r16,-31843
	ctx.r16.s64 = -2086862848;
	// lis r15,-31843
	ctx.r15.s64 = -2086862848;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// addi r10,r15,-26832
	ctx.r10.s64 = ctx.r15.s64 + -26832;
	// lbz r11,-23147(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + -23147);
	// lis r7,-31885
	ctx.r7.s64 = -2089615360;
	// stb r11,307(r31)
	PPC_STORE_U8(ctx.r31.u32 + 307, ctx.r11.u8);
	// ld r11,-22992(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + -22992);
	// std r11,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lis r9,-31885
	ctx.r9.s64 = -2089615360;
	// std r11,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r11.u64);
	// ld r11,-22976(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + -22976);
	// lis r6,-31885
	ctx.r6.s64 = -2089615360;
	// std r11,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lis r4,-31885
	ctx.r4.s64 = -2089615360;
	// std r11,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r11.u64);
	// ld r11,-22960(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22960);
	// lis r5,-31885
	ctx.r5.s64 = -2089615360;
	// std r11,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r3,-31885
	ctx.r3.s64 = -2089615360;
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// ld r11,-22944(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + -22944);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// std r11,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r11.u64);
	// ld r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// std r11,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r11.u64);
	// lwz r11,-23168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23168);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lfs f0,-24552(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -24552);
	ctx.f0.f64 = double(temp.f32);
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lfs f0,-24548(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -24548);
	ctx.f0.f64 = double(temp.f32);
	// lis r26,-31843
	ctx.r26.s64 = -2086862848;
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lbz r11,-23163(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -23163);
	// stb r11,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r11.u8);
	// lbz r11,-23162(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + -23162);
	// stb r11,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r11.u8);
	// lbz r11,-23146(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + -23146);
	// stb r11,465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 465, ctx.r11.u8);
	// lbz r11,-23145(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + -23145);
	// stb r11,466(r31)
	PPC_STORE_U8(ctx.r31.u32 + 466, ctx.r11.u8);
	// lwz r11,-23140(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -23140);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// lwz r11,-23136(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23136);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// lbz r11,-9167(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + -9167);
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
	// lwz r11,-9164(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9164);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// lbz r11,-9168(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + -9168);
	// stb r11,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r11.u8);
	// lwz r11,-27100(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27100);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lbz r11,-27096(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27096);
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// lis r24,-31885
	ctx.r24.s64 = -2089615360;
	// lis r23,-31843
	ctx.r23.s64 = -2086862848;
	// lis r22,-31843
	ctx.r22.s64 = -2086862848;
	// lis r21,-31885
	ctx.r21.s64 = -2089615360;
	// stb r11,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r11.u8);
	// lis r20,-31885
	ctx.r20.s64 = -2089615360;
	// lis r19,-31885
	ctx.r19.s64 = -2089615360;
	// lis r18,-31843
	ctx.r18.s64 = -2086862848;
	// lis r14,-31892
	ctx.r14.s64 = -2090074112;
	// lis r16,-31892
	ctx.r16.s64 = -2090074112;
	// lis r17,-31843
	ctx.r17.s64 = -2086862848;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// addi r14,r16,-23292
	ctx.r14.s64 = ctx.r16.s64 + -23292;
	// lfs f0,-9160(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// lfs f0,-27092(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// lfs f0,-9156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -9156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// lfs f0,-9152(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -9152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// lbz r11,-8908(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8908);
	// stb r11,1248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1248, ctx.r11.u8);
	// lbz r11,-8907(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + -8907);
	// stb r11,1249(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1249, ctx.r11.u8);
	// lfs f0,-8904(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -8904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1252, temp.u32);
	// lfs f0,-8900(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lwz r11,-8896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8896);
	// stw r11,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// ld r11,-26832(r15)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r15.u32 + -26832);
	// std r11,1264(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1264, ctx.r11.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,1272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1272, ctx.r11.u64);
	// lwz r11,-8884(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8884);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r11.u32);
	// lfs f0,-8880(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -8880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1284, temp.u32);
	// lbz r11,-26943(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -26943);
	// stb r11,1288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1288, ctx.r11.u8);
	// lbz r11,-8875(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -8875);
	// stb r11,1300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1300, ctx.r11.u8);
	// lbz r11,-8874(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + -8874);
	// stb r11,1301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1301, ctx.r11.u8);
	// lbz r11,-26942(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + -26942);
	// stb r11,1302(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1302, ctx.r11.u8);
	// lbz r11,-26941(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + -26941);
	// stb r11,1303(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1303, ctx.r11.u8);
	// lbz r11,-8906(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + -8906);
	// stb r11,1304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1304, ctx.r11.u8);
	// lbz r11,-8905(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + -8905);
	// stb r11,1305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1305, ctx.r11.u8);
	// lbz r11,-8876(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + -8876);
	// stb r11,1306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1306, ctx.r11.u8);
	// lfs f0,-26940(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -26940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1292, temp.u32);
	// lfs f0,-26936(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + -26936);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// lbz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 4);
	// stb r11,1328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1328, ctx.r11.u8);
	// lfs f0,-23292(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + -23292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lfs f0,8(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// lfs f0,-24556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24556);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31892
	ctx.r10.s64 = -2090074112;
	// stfs f0,1344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1344, temp.u32);
	// lfs f0,-4264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4264);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,-23280
	ctx.r9.s64 = ctx.r10.s64 + -23280;
	// stfs f0,1340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1340, temp.u32);
	// lbz r11,-23280(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -23280);
	// stb r11,1348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1348, ctx.r11.u8);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1356, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1364, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A96920"))) PPC_WEAK_FUNC(sub_82A96920);
PPC_FUNC_IMPL(__imp__sub_82A96920) {
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
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r11,-9148
	ctx.r9.s64 = ctx.r11.s64 + -9148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,-9148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// bctrl 
	ctx.lr = 0x82A96974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1503
	ctx.r10.s64 = 1503;
	// addi r11,r11,832
	ctx.r11.s64 = ctx.r11.s64 + 832;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A96994;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A969A8;
	sub_82E01688(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a969cc
	if (ctx.cr0.eq) goto loc_82A969CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e92df8
	ctx.lr = 0x82A969B8;
	sub_82E92DF8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 + 632;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a969d0
	goto loc_82A969D0;
loc_82A969CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A969D0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a95f10
	ctx.lr = 0x82A969D8;
	sub_82A95F10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a96a10
	if (ctx.cr6.eq) goto loc_82A96A10;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A969F4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a969f4
	if (!ctx.cr0.eq) goto loc_82A969F4;
loc_82A96A10:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e94588
	ctx.lr = 0x82A96A30;
	sub_82E94588(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a96a40
	if (ctx.cr6.eq) goto loc_82A96A40;
	// bl 0x82480108
	ctx.lr = 0x82A96A40;
	sub_82480108(ctx, base);
loc_82A96A40:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a96a50
	if (ctx.cr6.eq) goto loc_82A96A50;
	// bl 0x82480108
	ctx.lr = 0x82A96A50;
	sub_82480108(ctx, base);
loc_82A96A50:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a96a60
	if (ctx.cr6.eq) goto loc_82A96A60;
	// bl 0x82480108
	ctx.lr = 0x82A96A60;
	sub_82480108(ctx, base);
loc_82A96A60:
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

__attribute__((alias("__imp__sub_82A96A78"))) PPC_WEAK_FUNC(sub_82A96A78);
PPC_FUNC_IMPL(__imp__sub_82A96A78) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1531
	ctx.r10.s64 = 1531;
	// addi r11,r11,832
	ctx.r11.s64 = ctx.r11.s64 + 832;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A96AB4;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,120
	ctx.r3.s64 = 120;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A96AC8;
	sub_82E01688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a96ae0
	if (ctx.cr0.eq) goto loc_82A96AE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a954c0
	ctx.lr = 0x82A96AD8;
	sub_82A954C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a96ae4
	goto loc_82A96AE4;
loc_82A96AE0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A96AE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a95f68
	ctx.lr = 0x82A96AEC;
	sub_82A95F68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a96b24
	if (ctx.cr6.eq) goto loc_82A96B24;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A96B08:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a96b08
	if (!ctx.cr0.eq) goto loc_82A96B08;
loc_82A96B24:
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e94660
	ctx.lr = 0x82A96B40;
	sub_82E94660(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a96b50
	if (ctx.cr6.eq) goto loc_82A96B50;
	// bl 0x82480108
	ctx.lr = 0x82A96B50;
	sub_82480108(ctx, base);
loc_82A96B50:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a96b60
	if (ctx.cr6.eq) goto loc_82A96B60;
	// bl 0x82480108
	ctx.lr = 0x82A96B60;
	sub_82480108(ctx, base);
loc_82A96B60:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a96b70
	if (ctx.cr6.eq) goto loc_82A96B70;
	// bl 0x82480108
	ctx.lr = 0x82A96B70;
	sub_82480108(ctx, base);
loc_82A96B70:
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

__attribute__((alias("__imp__sub_82A96B88"))) PPC_WEAK_FUNC(sub_82A96B88);
PPC_FUNC_IMPL(__imp__sub_82A96B88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1952
	ctx.r3.s64 = ctx.r3.s64 + 1952;
	// b 0x82a96a78
	sub_82A96A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A96B90"))) PPC_WEAK_FUNC(sub_82A96B90);
PPC_FUNC_IMPL(__imp__sub_82A96B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A96B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi. r30,r5,24
	ctx.r30.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a96be8
	if (ctx.cr0.eq) goto loc_82A96BE8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3192(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96be8
	if (ctx.cr0.eq) goto loc_82A96BE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94c18
	ctx.lr = 0x82A96BE0;
	sub_82A94C18(ctx, base);
loc_82A96BE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a97210
	goto loc_82A97210;
loc_82A96BE8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3184(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96c24
	if (ctx.cr0.eq) goto loc_82A96C24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a957f0
	ctx.lr = 0x82A96C20;
	sub_82A957F0(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96C24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3180(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96c60
	if (ctx.cr0.eq) goto loc_82A96C60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a95858
	ctx.lr = 0x82A96C5C;
	sub_82A95858(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96C60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-13248(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96c9c
	if (ctx.cr0.eq) goto loc_82A96C9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A96C98;
	sub_82C10E98(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96C9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3200(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96cd8
	if (ctx.cr0.eq) goto loc_82A96CD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a95c58
	ctx.lr = 0x82A96CD4;
	sub_82A95C58(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96CD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-12588(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96d14
	if (ctx.cr0.eq) goto loc_82A96D14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94418
	ctx.lr = 0x82A96D10;
	sub_82A94418(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96D14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-12584(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12584);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96d50
	if (ctx.cr0.eq) goto loc_82A96D50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94428
	ctx.lr = 0x82A96D4C;
	sub_82A94428(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96D50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3204(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96d8c
	if (ctx.cr0.eq) goto loc_82A96D8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94438
	ctx.lr = 0x82A96D88;
	sub_82A94438(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96D8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3284(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96dc8
	if (ctx.cr0.eq) goto loc_82A96DC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94fa0
	ctx.lr = 0x82A96DC4;
	sub_82A94FA0(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96DC8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3216(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96e04
	if (ctx.cr0.eq) goto loc_82A96E04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a944d8
	ctx.lr = 0x82A96E00;
	sub_82A944D8(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96E04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3212(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96e40
	if (ctx.cr0.eq) goto loc_82A96E40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a944e0
	ctx.lr = 0x82A96E3C;
	sub_82A944E0(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96E40:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3208(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96e7c
	if (ctx.cr0.eq) goto loc_82A96E7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94518
	ctx.lr = 0x82A96E78;
	sub_82A94518(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96E7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3176(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96eb8
	if (ctx.cr0.eq) goto loc_82A96EB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a950f0
	ctx.lr = 0x82A96EB4;
	sub_82A950F0(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96EB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3172(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96ef4
	if (ctx.cr0.eq) goto loc_82A96EF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a951f8
	ctx.lr = 0x82A96EF0;
	sub_82A951F8(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96EF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3168(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96f30
	if (ctx.cr0.eq) goto loc_82A96F30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a95290
	ctx.lr = 0x82A96F2C;
	sub_82A95290(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96F30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3292(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96f6c
	if (ctx.cr0.eq) goto loc_82A96F6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94788
	ctx.lr = 0x82A96F68;
	sub_82A94788(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96F6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3288(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96fa8
	if (ctx.cr0.eq) goto loc_82A96FA8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a947e0
	ctx.lr = 0x82A96FA4;
	sub_82A947E0(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96FA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3224(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A96FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a96fe4
	if (ctx.cr0.eq) goto loc_82A96FE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a947f0
	ctx.lr = 0x82A96FE0;
	sub_82A947F0(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A96FE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97020
	if (ctx.cr6.eq) goto loc_82A97020;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3220(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A97008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97020
	if (ctx.cr0.eq) goto loc_82A97020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94848
	ctx.lr = 0x82A9701C;
	sub_82A94848(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A97020:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a9705c
	if (ctx.cr6.eq) goto loc_82A9705C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3260(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3260);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A97044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9705c
	if (ctx.cr0.eq) goto loc_82A9705C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a96b88
	ctx.lr = 0x82A97058;
	sub_82A96B88(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A9705C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97098
	if (ctx.cr6.eq) goto loc_82A97098;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3256(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A97080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97098
	if (ctx.cr0.eq) goto loc_82A97098;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a948a8
	ctx.lr = 0x82A97094;
	sub_82A948A8(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A97098:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a970d4
	if (ctx.cr6.eq) goto loc_82A970D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3248(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A970BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a970d4
	if (ctx.cr0.eq) goto loc_82A970D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94b40
	ctx.lr = 0x82A970D0;
	sub_82A94B40(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A970D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97110
	if (ctx.cr6.eq) goto loc_82A97110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3244(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A970F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97110
	if (ctx.cr0.eq) goto loc_82A97110;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94b58
	ctx.lr = 0x82A9710C;
	sub_82A94B58(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A97110:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a9714c
	if (ctx.cr6.eq) goto loc_82A9714C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3240(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A97134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9714c
	if (ctx.cr0.eq) goto loc_82A9714C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94b70
	ctx.lr = 0x82A97148;
	sub_82A94B70(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A9714C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97188
	if (ctx.cr6.eq) goto loc_82A97188;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3236(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A97170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97188
	if (ctx.cr0.eq) goto loc_82A97188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94ba8
	ctx.lr = 0x82A97184;
	sub_82A94BA8(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A97188:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a971c4
	if (ctx.cr6.eq) goto loc_82A971C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3232(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A971AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a971c4
	if (ctx.cr0.eq) goto loc_82A971C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94bd8
	ctx.lr = 0x82A971C0;
	sub_82A94BD8(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A971C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a97200
	if (ctx.cr6.eq) goto loc_82A97200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-3228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A971E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97200
	if (ctx.cr0.eq) goto loc_82A97200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a94c00
	ctx.lr = 0x82A971FC;
	sub_82A94C00(ctx, base);
	// b 0x82a96be0
	goto loc_82A96BE0;
loc_82A97200:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6da88
	ctx.lr = 0x82A97210;
	sub_82D6DA88(ctx, base);
loc_82A97210:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A97218"))) PPC_WEAK_FUNC(sub_82A97218);
PPC_FUNC_IMPL(__imp__sub_82A97218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A97220;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a1f328
	ctx.lr = 0x82A97238;
	sub_82A1F328(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a97358
	if (ctx.cr0.eq) goto loc_82A97358;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8248d638
	ctx.lr = 0x82A97254;
	sub_8248D638(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a9728c
	if (ctx.cr6.eq) goto loc_82A9728C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A97270:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a97270
	if (!ctx.cr0.eq) goto loc_82A97270;
loc_82A9728C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f2f0
	ctx.lr = 0x82A97298;
	sub_82A1F2F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// bl 0x82e8de28
	ctx.lr = 0x82A972B0;
	sub_82E8DE28(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a972c8
	if (ctx.cr6.eq) goto loc_82A972C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A972C8;
	sub_82480108(ctx, base);
loc_82A972C8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a972d8
	if (ctx.cr6.eq) goto loc_82A972D8;
	// bl 0x82480108
	ctx.lr = 0x82A972D8;
	sub_82480108(ctx, base);
loc_82A972D8:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97358
	if (ctx.cr0.eq) goto loc_82A97358;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// bl 0x82e02670
	ctx.lr = 0x82A972F0;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a20d58
	ctx.lr = 0x82A97300;
	sub_82A20D58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A97308;
	sub_82E01BF0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a9731c
	if (!ctx.cr6.eq) goto loc_82A9731C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9731C:
	// bl 0x82a3c0a8
	ctx.lr = 0x82A97320;
	sub_82A3C0A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee9480
	ctx.lr = 0x82A97330;
	sub_82EE9480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e01548
	ctx.lr = 0x82A97348;
	sub_82E01548(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee8680
	ctx.lr = 0x82A97350;
	sub_82EE8680(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// b 0x82a97360
	goto loc_82A97360;
loc_82A97358:
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
loc_82A97360:
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A97374"))) PPC_WEAK_FUNC(sub_82A97374);
PPC_FUNC_IMPL(__imp__sub_82A97374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A97378"))) PPC_WEAK_FUNC(sub_82A97378);
PPC_FUNC_IMPL(__imp__sub_82A97378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x82A97380;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82a1f328
	ctx.lr = 0x82A9739C;
	sub_82A1F328(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a97558
	if (ctx.cr0.eq) goto loc_82A97558;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1f2f0
	ctx.lr = 0x82A973B0;
	sub_82A1F2F0(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-26808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26808);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a973e0
	if (ctx.cr6.eq) goto loc_82A973E0;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,-8368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ee8728
	ctx.lr = 0x82A973D8;
	sub_82EE8728(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// b 0x82a97560
	goto loc_82A97560;
loc_82A973E0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824b7248
	ctx.lr = 0x82A973F4;
	sub_824B7248(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a9742c
	if (ctx.cr6.eq) goto loc_82A9742C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A97410:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a97410
	if (!ctx.cr0.eq) goto loc_82A97410;
loc_82A9742C:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8de28
	ctx.lr = 0x82A97444;
	sub_82E8DE28(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9745c
	if (ctx.cr6.eq) goto loc_82A9745C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A9745C;
	sub_82480108(ctx, base);
loc_82A9745C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9746c
	if (ctx.cr6.eq) goto loc_82A9746C;
	// bl 0x82480108
	ctx.lr = 0x82A9746C;
	sub_82480108(ctx, base);
loc_82A9746C:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97558
	if (ctx.cr0.eq) goto loc_82A97558;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// bl 0x82e02670
	ctx.lr = 0x82A97484;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a20d58
	ctx.lr = 0x82A97494;
	sub_82A20D58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9749C;
	sub_82E01BF0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a974b0
	if (!ctx.cr6.eq) goto loc_82A974B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A974B0:
	// bl 0x82a3c0a8
	ctx.lr = 0x82A974B4;
	sub_82A3C0A8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a974cc
	if (!ctx.cr6.eq) goto loc_82A974CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A974CC:
	// bl 0x82a3c2e0
	ctx.lr = 0x82A974D0;
	sub_82A3C2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ee9408
	ctx.lr = 0x82A974E4;
	sub_82EE9408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ee9408
	ctx.lr = 0x82A97504;
	sub_82EE9408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e01548
	ctx.lr = 0x82A9751C;
	sub_82E01548(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-9180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ee8708
	ctx.lr = 0x82A9752C;
	sub_82EE8708(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,-8368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ee8728
	ctx.lr = 0x82A97540;
	sub_82EE8728(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// b 0x82a97564
	goto loc_82A97564;
loc_82A97558:
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
loc_82A97560:
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82A97564:
	// stvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A97570"))) PPC_WEAK_FUNC(sub_82A97570);
PPC_FUNC_IMPL(__imp__sub_82A97570) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1856(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1856);
	// lfs f0,1852(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f13,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f29,12452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,24284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a975cc
	if (!ctx.cr6.gt) goto loc_82A975CC;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a975d8
	goto loc_82A975D8;
loc_82A975CC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a975d8
	if (!ctx.cr6.lt) goto loc_82A975D8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82A975D8:
	// stfs f0,500(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// addi r3,r31,1860
	ctx.r3.s64 = ctx.r31.s64 + 1860;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a94fd0
	ctx.lr = 0x82A975E8;
	sub_82A94FD0(ctx, base);
	// addi r3,r31,1908
	ctx.r3.s64 = ctx.r31.s64 + 1908;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a94530
	ctx.lr = 0x82A975F4;
	sub_82A94530(ctx, base);
	// addi r3,r31,1936
	ctx.r3.s64 = ctx.r31.s64 + 1936;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a95320
	ctx.lr = 0x82A97600;
	sub_82A95320(ctx, base);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r3,r31,1952
	ctx.r3.s64 = ctx.r31.s64 + 1952;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a955c0
	ctx.lr = 0x82A97610;
	sub_82A955C0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lfs f0,1840(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8364);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82a97640
	if (!ctx.cr6.gt) goto loc_82A97640;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lfs f12,-8360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8360);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// b 0x82a97638
	goto loc_82A97638;
loc_82A97634:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A97638:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a97634
	if (ctx.cr6.lt) goto loc_82A97634;
loc_82A97640:
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// stfs f0,1840(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f0,18876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18876);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a97668
	goto loc_82A97668;
loc_82A97664:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82A97668:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a97664
	if (!ctx.cr6.lt) goto loc_82A97664;
	// stfs f13,1844(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a97218
	ctx.lr = 0x82A97684;
	sub_82A97218(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a97378
	ctx.lr = 0x82A97698;
	sub_82A97378(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lbz r11,-26812(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -26812);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a976fc
	if (ctx.cr0.eq) goto loc_82A976FC;
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lbz r11,-26811(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -26811);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a976fc
	if (ctx.cr0.eq) goto loc_82A976FC;
	// lbz r30,1105(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1105);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82a976fc
	if (ctx.cr0.eq) goto loc_82A976FC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94ee0
	ctx.lr = 0x82A976D4;
	sub_82A94EE0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82a976f8
	if (ctx.cr6.lt) goto loc_82A976F8;
	// beq cr6,0x82a976f0
	if (ctx.cr6.eq) goto loc_82A976F0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82a976fc
	if (!ctx.cr6.lt) goto loc_82A976FC;
	// lbz r30,792(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 792);
	// b 0x82a976fc
	goto loc_82A976FC;
loc_82A976F0:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a976fc
	goto loc_82A976FC;
loc_82A976F8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A976FC:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// stb r30,792(r31)
	PPC_STORE_U8(ctx.r31.u32 + 792, ctx.r30.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,-8316
	ctx.r9.s64 = ctx.r11.s64 + -8316;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,-8316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8316);
	// lfs f13,2780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2780);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a9777c
	if (!ctx.cr6.gt) goto loc_82A9777C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_82A97768:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_82A9776C:
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x82a9778c
	if (!ctx.cr6.gt) goto loc_82A9778C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a97798
	goto loc_82A97798;
loc_82A9777C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a97768
	if (!ctx.cr6.lt) goto loc_82A97768;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x82a9776c
	goto loc_82A9776C;
loc_82A9778C:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a9779c
	if (ctx.cr6.lt) goto loc_82A9779C;
loc_82A97798:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82A9779C:
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r31,800
	ctx.r10.s64 = ctx.r31.s64 + 800;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,1844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 796, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,808(r31)
	PPC_STORE_U64(ctx.r31.u32 + 808, ctx.r10.u64);
	// std r11,800(r31)
	PPC_STORE_U64(ctx.r31.u32 + 800, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

__attribute__((alias("__imp__sub_82A977F4"))) PPC_WEAK_FUNC(sub_82A977F4);
PPC_FUNC_IMPL(__imp__sub_82A977F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A977F8"))) PPC_WEAK_FUNC(sub_82A977F8);
PPC_FUNC_IMPL(__imp__sub_82A977F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0194
	ctx.lr = 0x82A97800;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9782C;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82870120
	ctx.lr = 0x82A97834;
	sub_82870120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a20d58
	ctx.lr = 0x82A97844;
	sub_82A20D58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9784C;
	sub_82E01BF0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a97864
	if (!ctx.cr6.eq) goto loc_82A97864;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A97864:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a3be90
	ctx.lr = 0x82A9786C;
	sub_82A3BE90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x825f2ba0
	ctx.lr = 0x82A97874;
	sub_825F2BA0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f29,12452(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f29.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x83391400
	ctx.lr = 0x82A978A0;
	sub_83391400(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a978b0
	if (ctx.cr6.eq) goto loc_82A978B0;
	// bl 0x82480108
	ctx.lr = 0x82A978B0;
	sub_82480108(ctx, base);
loc_82A978B0:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,1828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,476(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// lfs f0,1824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,480(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// lbz r11,1832(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1832);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,484(r1)
	PPC_STORE_U8(ctx.r1.u32 + 484, ctx.r11.u8);
	// bl 0x82e01548
	ctx.lr = 0x82A978DC;
	sub_82E01548(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f30,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lfs f31,1828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82a9790c
	if (!ctx.cr6.gt) goto loc_82A9790C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82870120
	ctx.lr = 0x82A978FC;
	sub_82870120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a97570
	ctx.lr = 0x82A9790C;
	sub_82A97570(ctx, base);
loc_82A9790C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82870120
	ctx.lr = 0x82A97914;
	sub_82870120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x82a95fc0
	ctx.lr = 0x82A97920;
	sub_82A95FC0(ctx, base);
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,1836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a95b68
	ctx.lr = 0x82A97930;
	sub_82A95B68(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,1832(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1832, ctx.r30.u8);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// stfs f30,1828(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1828, temp.u32);
	// bl 0x82870120
	ctx.lr = 0x82A97948;
	sub_82870120(ctx, base);
	// bl 0x82a1f328
	ctx.lr = 0x82A9794C;
	sub_82A1F328(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r25,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r25.u32);
	// beq 0x82a97a34
	if (ctx.cr0.eq) goto loc_82A97A34;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r26,r31,44
	ctx.r26.s64 = ctx.r31.s64 + 44;
	// addi r28,r1,488
	ctx.r28.s64 = ctx.r1.s64 + 488;
loc_82A9796C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824b7248
	ctx.lr = 0x82A97978;
	sub_824B7248(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a979b0
	if (ctx.cr6.eq) goto loc_82A979B0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A97994:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a97994
	if (!ctx.cr0.eq) goto loc_82A97994;
loc_82A979B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82870120
	ctx.lr = 0x82A979B8;
	sub_82870120(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a1f2f0
	ctx.lr = 0x82A979C0;
	sub_82A1F2F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// bl 0x82e8de28
	ctx.lr = 0x82A979D8;
	sub_82E8DE28(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a979f0
	if (ctx.cr6.eq) goto loc_82A979F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A979F0;
	sub_82480108(ctx, base);
loc_82A979F0:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a97a00
	if (ctx.cr6.eq) goto loc_82A97A00;
	// bl 0x82480108
	ctx.lr = 0x82A97A00;
	sub_82480108(ctx, base);
loc_82A97A00:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97a30
	if (ctx.cr0.eq) goto loc_82A97A30;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f13,12(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// stfsu f12,16(r28)
	temp.f32 = float(ctx.f12.f64);
	ea = 16 + ctx.r28.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x82a9796c
	if (ctx.cr6.lt) goto loc_82A9796C;
	// b 0x82a97a34
	goto loc_82A97A34;
loc_82A97A30:
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
loc_82A97A34:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x833a1390
	ctx.lr = 0x82A97A44;
	sub_833A1390(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a97a60
	if (!ctx.cr6.eq) goto loc_82A97A60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82870120
	ctx.lr = 0x82A97A58;
	sub_82870120(ctx, base);
	// bl 0x82a1f5b8
	ctx.lr = 0x82A97A5C;
	sub_82A1F5B8(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
loc_82A97A60:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a97a9c
	if (!ctx.cr6.eq) goto loc_82A97A9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82870120
	ctx.lr = 0x82A97A74;
	sub_82870120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a1ff50
	ctx.lr = 0x82A97A80;
	sub_82A1FF50(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// beq cr6,0x82a97a9c
	if (ctx.cr6.eq) goto loc_82A97A9C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A97A9C;
	sub_82480108(ctx, base);
loc_82A97A9C:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// lwz r3,1848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// bl 0x833913f8
	ctx.lr = 0x82A97AB4;
	sub_833913F8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a97af4
	if (ctx.cr6.eq) goto loc_82A97AF4;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1312(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1312, temp.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1316(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1316, temp.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1320(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1320, temp.u32);
loc_82A97AF4:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r4,r1,944
	ctx.r4.s64 = ctx.r1.s64 + 944;
	// lwz r3,1848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// bl 0x83391220
	ctx.lr = 0x82A97B04;
	sub_83391220(ctx, base);
	// lwz r10,488(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a97b2c
	if (ctx.cr6.eq) goto loc_82A97B2C;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// addi r9,r11,448
	ctx.r9.s64 = ctx.r11.s64 + 448;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,448(r11)
	PPC_STORE_U64(ctx.r11.u32 + 448, ctx.r9.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,456(r11)
	PPC_STORE_U64(ctx.r11.u32 + 456, ctx.r10.u64);
loc_82A97B2C:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r11,1908
	ctx.r3.s64 = ctx.r11.s64 + 1908;
	// bl 0x82a95c60
	ctx.lr = 0x82A97B38;
	sub_82A95C60(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r3,1848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// bl 0x83391210
	ctx.lr = 0x82A97B44;
	sub_83391210(ctx, base);
	// addi r29,r1,1264
	ctx.r29.s64 = ctx.r1.s64 + 1264;
loc_82A97B48:
	// addi r4,r29,-320
	ctx.r4.s64 = ctx.r29.s64 + -320;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82ee9318
	ctx.lr = 0x82A97B54;
	sub_82EE9318(ctx, base);
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82ee9348
	ctx.lr = 0x82A97B64;
	sub_82EE9348(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ee9318
	ctx.lr = 0x82A97B70;
	sub_82EE9318(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82ee8778
	ctx.lr = 0x82A97B7C;
	sub_82EE8778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82ee9318
	ctx.lr = 0x82A97B88;
	sub_82EE9318(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82c10e98
	ctx.lr = 0x82A97B90;
	sub_82C10E98(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82ea1050
	ctx.lr = 0x82A97BA0;
	sub_82EA1050(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e2d2d8
	ctx.lr = 0x82A97BB0;
	sub_82E2D2D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e2d2e8
	ctx.lr = 0x82A97BC0;
	sub_82E2D2E8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// blt cr6,0x82a97b48
	if (ctx.cr6.lt) goto loc_82A97B48;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,1848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// bl 0x83391248
	ctx.lr = 0x82A97BE0;
	sub_83391248(ctx, base);
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x833a01e4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A97BF4"))) PPC_WEAK_FUNC(sub_82A97BF4);
PPC_FUNC_IMPL(__imp__sub_82A97BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A97BF8"))) PPC_WEAK_FUNC(sub_82A97BF8);
PPC_FUNC_IMPL(__imp__sub_82A97BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A97C00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8f018
	ctx.lr = 0x82A97C0C;
	sub_82E8F018(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,928
	ctx.r9.s64 = ctx.r11.s64 + 928;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stb r30,1832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1832, ctx.r30.u8);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// lfs f0,24284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1824, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,1828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f0,1836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1836, temp.u32);
	// addi r29,r31,1952
	ctx.r29.s64 = ctx.r31.s64 + 1952;
	// stfs f0,1840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
	// stfs f0,1844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// lfs f13,12452(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,1864(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1864, ctx.r30.u8);
	// stfs f0,1868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1868, temp.u32);
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stfs f13,1872(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1872, temp.u32);
	// stb r30,1888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1888, ctx.r30.u8);
	// stfs f0,1876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1876, temp.u32);
	// stfs f13,1880(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1880, temp.u32);
	// stw r10,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r10.u32);
	// stfs f0,1896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// stb r30,1904(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1904, ctx.r30.u8);
	// stfs f0,1900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1900, temp.u32);
	// stw r11,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r11.u32);
	// stfs f0,1912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1912, temp.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// stfs f0,1916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1916, temp.u32);
	// stfs f0,1920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1920, temp.u32);
	// stfs f0,1924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1924, temp.u32);
	// stfs f0,1928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1928, temp.u32);
	// stw r11,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r11.u32);
	// stfs f0,1940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1940, temp.u32);
	// stw r30,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r30.u32);
	// stfs f0,1944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1944, temp.u32);
	// addi r11,r31,1860
	ctx.r11.s64 = ctx.r31.s64 + 1860;
	// bl 0x82e947f0
	ctx.lr = 0x82A97CC4;
	sub_82E947F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,576
	ctx.r11.s64 = ctx.r11.s64 + 576;
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// bl 0x82a96920
	ctx.lr = 0x82A97CD8;
	sub_82A96920(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r31,2080
	ctx.r10.s64 = ctx.r31.s64 + 2080;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A97CE8:
	// stw r30,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r30.u32);
	// stwu r30,48(r10)
	ea = 48 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a97ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A97CE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a95bc0
	ctx.lr = 0x82A97CFC;
	sub_82A95BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A97D08"))) PPC_WEAK_FUNC(sub_82A97D08);
PPC_FUNC_IMPL(__imp__sub_82A97D08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r3,1952
	ctx.r3.s64 = ctx.r3.s64 + 1952;
	// addi r11,r11,928
	ctx.r11.s64 = ctx.r11.s64 + 928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e944e0
	ctx.lr = 0x82A97D38;
	sub_82E944E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ec10
	ctx.lr = 0x82A97D40;
	sub_82E8EC10(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a97d50
	if (ctx.cr0.eq) goto loc_82A97D50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82A97D50;
	sub_82E01698(ctx, base);
loc_82A97D50:
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

__attribute__((alias("__imp__sub_82A97D6C"))) PPC_WEAK_FUNC(sub_82A97D6C);
PPC_FUNC_IMPL(__imp__sub_82A97D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A97D70"))) PPC_WEAK_FUNC(sub_82A97D70);
PPC_FUNC_IMPL(__imp__sub_82A97D70) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a94128
	ctx.lr = 0x82A97D90;
	sub_82A94128(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x82e8d0f8
	ctx.lr = 0x82A97D98;
	sub_82E8D0F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r11,r11,796
	ctx.r11.s64 = ctx.r11.s64 + 796;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,732
	ctx.r10.s64 = ctx.r10.s64 + 732;
	// addi r9,r9,712
	ctx.r9.s64 = ctx.r9.s64 + 712;
	// addi r11,r8,788
	ctx.r11.s64 = ctx.r8.s64 + 788;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// li r3,2224
	ctx.r3.s64 = 2224;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// bl 0x82e01690
	ctx.lr = 0x82A97DD0;
	sub_82E01690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a97de4
	if (ctx.cr0.eq) goto loc_82A97DE4;
	// bl 0x82a97bf8
	ctx.lr = 0x82A97DDC;
	sub_82A97BF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82a97de8
	goto loc_82A97DE8;
loc_82A97DE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A97DE8:
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,1848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1848, ctx.r30.u32);
	// bl 0x83391260
	ctx.lr = 0x82A97DF8;
	sub_83391260(ctx, base);
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

__attribute__((alias("__imp__sub_82A97E14"))) PPC_WEAK_FUNC(sub_82A97E14);
PPC_FUNC_IMPL(__imp__sub_82A97E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A97E18"))) PPC_WEAK_FUNC(sub_82A97E18);
PPC_FUNC_IMPL(__imp__sub_82A97E18) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e2b450
	ctx.lr = 0x82A97E38;
	sub_82E2B450(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,1848(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1848);
	// bctrl 
	ctx.lr = 0x82A97E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2224
	ctx.r3.s64 = 2224;
	// bl 0x82e01690
	ctx.lr = 0x82A97E5C;
	sub_82E01690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a97e6c
	if (ctx.cr0.eq) goto loc_82A97E6C;
	// bl 0x82a97bf8
	ctx.lr = 0x82A97E68;
	sub_82A97BF8(ctx, base);
	// b 0x82a97e70
	goto loc_82A97E70;
loc_82A97E6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A97E70:
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// stw r30,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e8d3a8
	ctx.lr = 0x82A97E84;
	sub_82E8D3A8(ctx, base);
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e97fe0
	ctx.lr = 0x82A97E90;
	sub_82E97FE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x82A97E98;
	sub_82E01548(ctx, base);
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

__attribute__((alias("__imp__sub_82A97EB0"))) PPC_WEAK_FUNC(sub_82A97EB0);
PPC_FUNC_IMPL(__imp__sub_82A97EB0) {
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
	// bl 0x829fc950
	ctx.lr = 0x82A97EC0;
	sub_829FC950(ctx, base);
	// bl 0x829fdd40
	ctx.lr = 0x82A97EC4;
	sub_829FDD40(ctx, base);
	// bl 0x829fe0a0
	ctx.lr = 0x82A97EC8;
	sub_829FE0A0(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x82A97ECC;
	sub_82C10E98(ctx, base);
	// bl 0x829fa320
	ctx.lr = 0x82A97ED0;
	sub_829FA320(ctx, base);
	// bl 0x829fe280
	ctx.lr = 0x82A97ED4;
	sub_829FE280(ctx, base);
	// bl 0x829f9bc0
	ctx.lr = 0x82A97ED8;
	sub_829F9BC0(ctx, base);
	// bl 0x829fd468
	ctx.lr = 0x82A97EDC;
	sub_829FD468(ctx, base);
	// bl 0x829fb588
	ctx.lr = 0x82A97EE0;
	sub_829FB588(ctx, base);
	// bl 0x829fd360
	ctx.lr = 0x82A97EE4;
	sub_829FD360(ctx, base);
	// bl 0x829fe7c8
	ctx.lr = 0x82A97EE8;
	sub_829FE7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A97EF8"))) PPC_WEAK_FUNC(sub_82A97EF8);
PPC_FUNC_IMPL(__imp__sub_82A97EF8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r30,-31842
	ctx.r30.s64 = -2086797312;
	// addi r11,r31,-12388
	ctx.r11.s64 = ctx.r31.s64 + -12388;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,8288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f31,-12652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12652);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x833a03a0
	ctx.lr = 0x82A97F38;
	sub_833A03A0(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lfs f0,-12388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12388);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f13,8288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8288);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r11,-22944
	ctx.r31.s64 = ctx.r11.s64 + -22944;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x833a03a0
	ctx.lr = 0x82A97F5C;
	sub_833A03A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A97F80"))) PPC_WEAK_FUNC(sub_82A97F80);
PPC_FUNC_IMPL(__imp__sub_82A97F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a017c
	ctx.lr = 0x82A97F88;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x833a18f4
	ctx.lr = 0x82A97F90;
	__savefpr_27(ctx, base);
	// stwu r1,-3424(r1)
	ea = -3424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r22,r10,3184
	ctx.r22.s64 = ctx.r10.s64 + 3184;
	// lfs f0,-9180(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9180);
	ctx.f0.f64 = double(temp.f32);
	// li r17,0
	ctx.r17.s64 = 0;
	// stfs f0,-12340(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12340, temp.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// addi r23,r11,-12340
	ctx.r23.s64 = ctx.r11.s64 + -12340;
	// bl 0x82e02670
	ctx.lr = 0x82A97FCC;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r21,r11,3176
	ctx.r21.s64 = ctx.r11.s64 + 3176;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A97FE0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,4376
	ctx.r30.s64 = ctx.r11.s64 + 4376;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A97FF4;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e02670
	ctx.lr = 0x82A98000;
	sub_82E02670(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82af0930
	ctx.lr = 0x82A98014;
	sub_82AF0930(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82af1d28
	ctx.lr = 0x82A98028;
	sub_82AF1D28(ctx, base);
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a98040
	if (ctx.cr6.eq) goto loc_82A98040;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A98040;
	sub_82480108(ctx, base);
loc_82A98040:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98048;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98050;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98058;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98060;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e02670
	ctx.lr = 0x82A9806C;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e02670
	ctx.lr = 0x82A98078;
	sub_82E02670(ctx, base);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82af0930
	ctx.lr = 0x82A9808C;
	sub_82AF0930(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a980a4
	if (ctx.cr6.eq) goto loc_82A980A4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A980A4;
	sub_82480108(ctx, base);
loc_82A980A4:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e01bf0
	ctx.lr = 0x82A980AC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e01bf0
	ctx.lr = 0x82A980B4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,210
	ctx.r10.s64 = 210;
	// addi r18,r11,1096
	ctx.r18.s64 = ctx.r11.s64 + 1096;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01860
	ctx.lr = 0x82A980D4;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A980E8;
	sub_82E015D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a98124
	if (ctx.cr0.eq) goto loc_82A98124;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,4368
	ctx.r4.s64 = ctx.r11.s64 + 4368;
	// bl 0x82e02670
	ctx.lr = 0x82A98100;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23160
	ctx.r5.s64 = ctx.r11.s64 + -23160;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// bl 0x82aeb1e0
	ctx.lr = 0x82A9811C;
	sub_82AEB1E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82a98128
	goto loc_82A98128;
loc_82A98124:
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
loc_82A98128:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a98138
	if (ctx.cr6.eq) goto loc_82A98138;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e016b8
	ctx.lr = 0x82A98138;
	sub_82E016B8(ctx, base);
loc_82A98138:
	// clrlwi. r11,r20,31
	ctx.r11.u64 = ctx.r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9814c
	if (ctx.cr0.eq) goto loc_82A9814C;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// rlwinm r20,r20,0,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9814C;
	sub_82E01BF0(ctx, base);
loc_82A9814C:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// addi r19,r11,-12436
	ctx.r19.s64 = ctx.r11.s64 + -12436;
	// addi r29,r19,-4
	ctx.r29.s64 = ctx.r19.s64 + -4;
loc_82A9815C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82e02670
	ctx.lr = 0x82A98168;
	sub_82E02670(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aeafb0
	ctx.lr = 0x82A98178;
	sub_82AEAFB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98180;
	sub_82E01BF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// blt cr6,0x82a9815c
	if (ctx.cr6.lt) goto loc_82A9815C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4360
	ctx.r4.s64 = ctx.r11.s64 + 4360;
	// bl 0x82e02670
	ctx.lr = 0x82A9819C;
	sub_82E02670(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a981b0
	if (ctx.cr6.eq) goto loc_82A981B0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e016b8
	ctx.lr = 0x82A981B0;
	sub_82E016B8(ctx, base);
loc_82A981B0:
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ae3618
	ctx.lr = 0x82A981C4;
	sub_82AE3618(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82A981CC;
	sub_82E01BF0(ctx, base);
	// li r11,217
	ctx.r11.s64 = 217;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01860
	ctx.lr = 0x82A981E4;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A981F8;
	sub_82E015D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a98234
	if (ctx.cr0.eq) goto loc_82A98234;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4344
	ctx.r4.s64 = ctx.r11.s64 + 4344;
	// bl 0x82e02670
	ctx.lr = 0x82A98210;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23156
	ctx.r5.s64 = ctx.r11.s64 + -23156;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r20,r20,2
	ctx.r20.u64 = ctx.r20.u64 | 2;
	// bl 0x82aeb1e0
	ctx.lr = 0x82A9822C;
	sub_82AEB1E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82a98238
	goto loc_82A98238;
loc_82A98234:
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_82A98238:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a98248
	if (ctx.cr6.eq) goto loc_82A98248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e016b8
	ctx.lr = 0x82A98248;
	sub_82E016B8(ctx, base);
loc_82A98248:
	// rlwinm. r11,r20,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9825c
	if (ctx.cr0.eq) goto loc_82A9825C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r20,r20,0,31,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9825C;
	sub_82E01BF0(ctx, base);
loc_82A9825C:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// addi r11,r11,-12416
	ctx.r11.s64 = ctx.r11.s64 + -12416;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82A9826C:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82e02670
	ctx.lr = 0x82A98278;
	sub_82E02670(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aeafb0
	ctx.lr = 0x82A98288;
	sub_82AEAFB0(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98290;
	sub_82E01BF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x82a9826c
	if (ctx.cr6.lt) goto loc_82A9826C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,4328
	ctx.r4.s64 = ctx.r11.s64 + 4328;
	// bl 0x82e02670
	ctx.lr = 0x82A982AC;
	sub_82E02670(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a982c0
	if (ctx.cr6.eq) goto loc_82A982C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e016b8
	ctx.lr = 0x82A982C0;
	sub_82E016B8(ctx, base);
loc_82A982C0:
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ae3618
	ctx.lr = 0x82A982D4;
	sub_82AE3618(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e01bf0
	ctx.lr = 0x82A982DC;
	sub_82E01BF0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82af1908
	ctx.lr = 0x82A982E4;
	sub_82AF1908(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a982f4
	if (ctx.cr6.eq) goto loc_82A982F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e016e0
	ctx.lr = 0x82A982F4;
	sub_82E016E0(ctx, base);
loc_82A982F4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a98304
	if (ctx.cr6.eq) goto loc_82A98304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e016e0
	ctx.lr = 0x82A98304;
	sub_82E016E0(ctx, base);
loc_82A98304:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,4300
	ctx.r4.s64 = ctx.r11.s64 + 4300;
	// bl 0x82e02670
	ctx.lr = 0x82A98314;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,4272
	ctx.r4.s64 = ctx.r11.s64 + 4272;
	// bl 0x82e02670
	ctx.lr = 0x82A98324;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e02670
	ctx.lr = 0x82A98330;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e02670
	ctx.lr = 0x82A9833C;
	sub_82E02670(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82af0930
	ctx.lr = 0x82A98350;
	sub_82AF0930(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82af1d28
	ctx.lr = 0x82A98364;
	sub_82AF1D28(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9837c
	if (ctx.cr6.eq) goto loc_82A9837C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A9837C;
	sub_82480108(ctx, base);
loc_82A9837C:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98384;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9838C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98394;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9839C;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e02670
	ctx.lr = 0x82A983A8;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e02670
	ctx.lr = 0x82A983B4;
	sub_82E02670(ctx, base);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82af0930
	ctx.lr = 0x82A983C8;
	sub_82AF0930(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a983e0
	if (ctx.cr6.eq) goto loc_82A983E0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A983E0;
	sub_82480108(ctx, base);
loc_82A983E0:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e01bf0
	ctx.lr = 0x82A983E8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e01bf0
	ctx.lr = 0x82A983F0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4260
	ctx.r4.s64 = ctx.r11.s64 + 4260;
	// bl 0x82e02670
	ctx.lr = 0x82A98400;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4244
	ctx.r4.s64 = ctx.r11.s64 + 4244;
	// bl 0x82e02670
	ctx.lr = 0x82A98410;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r29,r11,-23056
	ctx.r29.s64 = ctx.r11.s64 + -23056;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f30,12452(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f28,21108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21108);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// lfs f31,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9844C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98460;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2360
	ctx.r3.s64 = ctx.r1.s64 + 2360;
	// bl 0x8259b670
	ctx.lr = 0x82A98468;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98470;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98478;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4232
	ctx.r4.s64 = ctx.r11.s64 + 4232;
	// bl 0x82e02670
	ctx.lr = 0x82A98488;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4216
	ctx.r4.s64 = ctx.r11.s64 + 4216;
	// bl 0x82e02670
	ctx.lr = 0x82A98498;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A984B4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A984C8;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2168
	ctx.r3.s64 = ctx.r1.s64 + 2168;
	// bl 0x8259b670
	ctx.lr = 0x82A984D0;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A984D8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A984E0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4204
	ctx.r4.s64 = ctx.r11.s64 + 4204;
	// bl 0x82e02670
	ctx.lr = 0x82A984F0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4188
	ctx.r4.s64 = ctx.r11.s64 + 4188;
	// bl 0x82e02670
	ctx.lr = 0x82A98500;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9851C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98530;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2264
	ctx.r3.s64 = ctx.r1.s64 + 2264;
	// bl 0x8259b670
	ctx.lr = 0x82A98538;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98540;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98548;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4164
	ctx.r4.s64 = ctx.r11.s64 + 4164;
	// bl 0x82e02670
	ctx.lr = 0x82A98558;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4140
	ctx.r4.s64 = ctx.r11.s64 + 4140;
	// bl 0x82e02670
	ctx.lr = 0x82A98568;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-12352
	ctx.r5.s64 = ctx.r9.s64 + -12352;
	// lfs f29,-4192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4192);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// lfs f27,16428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16428);
	ctx.f27.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98598;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A985AC;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1016
	ctx.r3.s64 = ctx.r1.s64 + 1016;
	// bl 0x8259b670
	ctx.lr = 0x82A985B4;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A985BC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A985C4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4128
	ctx.r4.s64 = ctx.r11.s64 + 4128;
	// bl 0x82e02670
	ctx.lr = 0x82A985D4;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4112
	ctx.r4.s64 = ctx.r11.s64 + 4112;
	// bl 0x82e02670
	ctx.lr = 0x82A985E4;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r28,r11,-23040
	ctx.r28.s64 = ctx.r11.s64 + -23040;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98608;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9861C;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2456
	ctx.r3.s64 = ctx.r1.s64 + 2456;
	// bl 0x8259b670
	ctx.lr = 0x82A98624;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9862C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98634;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4100
	ctx.r4.s64 = ctx.r11.s64 + 4100;
	// bl 0x82e02670
	ctx.lr = 0x82A98644;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4084
	ctx.r4.s64 = ctx.r11.s64 + 4084;
	// bl 0x82e02670
	ctx.lr = 0x82A98654;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// bl 0x82aebec8
	ctx.lr = 0x82A98670;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98684;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2552
	ctx.r3.s64 = ctx.r1.s64 + 2552;
	// bl 0x8259b670
	ctx.lr = 0x82A9868C;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98694;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9869C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4072
	ctx.r4.s64 = ctx.r11.s64 + 4072;
	// bl 0x82e02670
	ctx.lr = 0x82A986AC;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4056
	ctx.r4.s64 = ctx.r11.s64 + 4056;
	// bl 0x82e02670
	ctx.lr = 0x82A986BC;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r28,8
	ctx.r5.s64 = ctx.r28.s64 + 8;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A986D8;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A986EC;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2648
	ctx.r3.s64 = ctx.r1.s64 + 2648;
	// bl 0x8259b670
	ctx.lr = 0x82A986F4;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A986FC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98704;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4032
	ctx.r4.s64 = ctx.r11.s64 + 4032;
	// bl 0x82e02670
	ctx.lr = 0x82A98714;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,4008
	ctx.r4.s64 = ctx.r11.s64 + 4008;
	// bl 0x82e02670
	ctx.lr = 0x82A98724;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r11,-12348
	ctx.r5.s64 = ctx.r11.s64 + -12348;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98744;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98758;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2744
	ctx.r3.s64 = ctx.r1.s64 + 2744;
	// bl 0x8259b670
	ctx.lr = 0x82A98760;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98768;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98770;
	sub_82E01BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82af1908
	ctx.lr = 0x82A98778;
	sub_82AF1908(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,3980
	ctx.r4.s64 = ctx.r11.s64 + 3980;
	// bl 0x82e02670
	ctx.lr = 0x82A98788;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,3956
	ctx.r4.s64 = ctx.r11.s64 + 3956;
	// bl 0x82e02670
	ctx.lr = 0x82A98798;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e02670
	ctx.lr = 0x82A987A4;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e02670
	ctx.lr = 0x82A987B0;
	sub_82E02670(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82af0930
	ctx.lr = 0x82A987C4;
	sub_82AF0930(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82af1d28
	ctx.lr = 0x82A987D8;
	sub_82AF1D28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a987f0
	if (ctx.cr6.eq) goto loc_82A987F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A987F0;
	sub_82480108(ctx, base);
loc_82A987F0:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e01bf0
	ctx.lr = 0x82A987F8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98800;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98808;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98810;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e02670
	ctx.lr = 0x82A9881C;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e02670
	ctx.lr = 0x82A98828;
	sub_82E02670(ctx, base);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82af0930
	ctx.lr = 0x82A9883C;
	sub_82AF0930(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a98854
	if (ctx.cr6.eq) goto loc_82A98854;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A98854;
	sub_82480108(ctx, base);
loc_82A98854:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9885C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98864;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3948
	ctx.r4.s64 = ctx.r11.s64 + 3948;
	// bl 0x82e02670
	ctx.lr = 0x82A98874;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3936
	ctx.r4.s64 = ctx.r11.s64 + 3936;
	// bl 0x82e02670
	ctx.lr = 0x82A98884;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r31,r11,-23024
	ctx.r31.s64 = ctx.r11.s64 + -23024;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82aebec8
	ctx.lr = 0x82A988A8;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A988BC;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2840
	ctx.r3.s64 = ctx.r1.s64 + 2840;
	// bl 0x8259b670
	ctx.lr = 0x82A988C4;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A988CC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A988D4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3928
	ctx.r4.s64 = ctx.r11.s64 + 3928;
	// bl 0x82e02670
	ctx.lr = 0x82A988E4;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3916
	ctx.r4.s64 = ctx.r11.s64 + 3916;
	// bl 0x82e02670
	ctx.lr = 0x82A988F4;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2928
	ctx.r3.s64 = ctx.r1.s64 + 2928;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98910;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98924;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2936
	ctx.r3.s64 = ctx.r1.s64 + 2936;
	// bl 0x8259b670
	ctx.lr = 0x82A9892C;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98934;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9893C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3908
	ctx.r4.s64 = ctx.r11.s64 + 3908;
	// bl 0x82e02670
	ctx.lr = 0x82A9894C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3896
	ctx.r4.s64 = ctx.r11.s64 + 3896;
	// bl 0x82e02670
	ctx.lr = 0x82A9895C;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98978;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9898C;
	sub_82AE2818(ctx, base);
	// addi r3,r1,3032
	ctx.r3.s64 = ctx.r1.s64 + 3032;
	// bl 0x8259b670
	ctx.lr = 0x82A98994;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9899C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A989A4;
	sub_82E01BF0(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f30,12(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r26,r11,3880
	ctx.r26.s64 = ctx.r11.s64 + 3880;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A989C0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3852
	ctx.r4.s64 = ctx.r11.s64 + 3852;
	// bl 0x82e02670
	ctx.lr = 0x82A989D0;
	sub_82E02670(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lfs f28,-14984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14984);
	ctx.f28.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A989F4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98A08;
	sub_82AE2818(ctx, base);
	// addi r3,r1,3128
	ctx.r3.s64 = ctx.r1.s64 + 3128;
	// bl 0x8259b670
	ctx.lr = 0x82A98A10;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98A18;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98A20;
	sub_82E01BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82af1908
	ctx.lr = 0x82A98A28;
	sub_82AF1908(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,3832
	ctx.r4.s64 = ctx.r11.s64 + 3832;
	// bl 0x82e02670
	ctx.lr = 0x82A98A38;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-25392
	ctx.r4.s64 = ctx.r11.s64 + -25392;
	// bl 0x82e02670
	ctx.lr = 0x82A98A48;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e02670
	ctx.lr = 0x82A98A54;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e02670
	ctx.lr = 0x82A98A60;
	sub_82E02670(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82af0930
	ctx.lr = 0x82A98A74;
	sub_82AF0930(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82af1d28
	ctx.lr = 0x82A98A88;
	sub_82AF1D28(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a98aa0
	if (ctx.cr6.eq) goto loc_82A98AA0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A98AA0;
	sub_82480108(ctx, base);
loc_82A98AA0:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98AA8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98AB0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98AB8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98AC0;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e02670
	ctx.lr = 0x82A98ACC;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e02670
	ctx.lr = 0x82A98AD8;
	sub_82E02670(ctx, base);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82af0930
	ctx.lr = 0x82A98AEC;
	sub_82AF0930(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a98b04
	if (ctx.cr6.eq) goto loc_82A98B04;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A98B04;
	sub_82480108(ctx, base);
loc_82A98B04:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98B0C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98B14;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3812
	ctx.r4.s64 = ctx.r11.s64 + 3812;
	// bl 0x82e02670
	ctx.lr = 0x82A98B24;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3792
	ctx.r4.s64 = ctx.r11.s64 + 3792;
	// bl 0x82e02670
	ctx.lr = 0x82A98B34;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-23163
	ctx.r5.s64 = ctx.r11.s64 + -23163;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82ae3c70
	ctx.lr = 0x82A98B48;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A98B5C;
	sub_82AE3920(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98B64;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x8259b670
	ctx.lr = 0x82A98B6C;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98B74;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98B7C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3760
	ctx.r4.s64 = ctx.r11.s64 + 3760;
	// bl 0x82e02670
	ctx.lr = 0x82A98B8C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3728
	ctx.r4.s64 = ctx.r11.s64 + 3728;
	// bl 0x82e02670
	ctx.lr = 0x82A98B9C;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-23162
	ctx.r5.s64 = ctx.r11.s64 + -23162;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82ae3c70
	ctx.lr = 0x82A98BB0;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A98BC4;
	sub_82AE3920(ctx, base);
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98BCC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,920
	ctx.r3.s64 = ctx.r1.s64 + 920;
	// bl 0x8259b670
	ctx.lr = 0x82A98BD4;
	sub_8259B670(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98BDC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98BE4;
	sub_82E01BF0(ctx, base);
	// li r11,251
	ctx.r11.s64 = 251;
	// stw r18,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r18.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e01860
	ctx.lr = 0x82A98BFC;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A98C10;
	sub_82E015D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a98c4c
	if (ctx.cr0.eq) goto loc_82A98C4C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3708
	ctx.r4.s64 = ctx.r11.s64 + 3708;
	// bl 0x82e02670
	ctx.lr = 0x82A98C28;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23152
	ctx.r5.s64 = ctx.r11.s64 + -23152;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r20,r20,4
	ctx.r20.u64 = ctx.r20.u64 | 4;
	// bl 0x82aeb1e0
	ctx.lr = 0x82A98C44;
	sub_82AEB1E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a98c50
	goto loc_82A98C50;
loc_82A98C4C:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82A98C50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a98c60
	if (ctx.cr6.eq) goto loc_82A98C60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e016b8
	ctx.lr = 0x82A98C60;
	sub_82E016B8(ctx, base);
loc_82A98C60:
	// rlwinm. r11,r20,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a98c74
	if (ctx.cr0.eq) goto loc_82A98C74;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r20,r20,0,30,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98C74;
	sub_82E01BF0(ctx, base);
loc_82A98C74:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r11,r11,-12404
	ctx.r11.s64 = ctx.r11.s64 + -12404;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82A98C84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82e02670
	ctx.lr = 0x82A98C90;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aeafb0
	ctx.lr = 0x82A98CA0;
	sub_82AEAFB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98CA8;
	sub_82E01BF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82a98c84
	if (ctx.cr6.lt) goto loc_82A98C84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3676
	ctx.r4.s64 = ctx.r11.s64 + 3676;
	// bl 0x82e02670
	ctx.lr = 0x82A98CC4;
	sub_82E02670(ctx, base);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a98cd8
	if (ctx.cr6.eq) goto loc_82A98CD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e016b8
	ctx.lr = 0x82A98CD8;
	sub_82E016B8(ctx, base);
loc_82A98CD8:
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ae3618
	ctx.lr = 0x82A98CEC;
	sub_82AE3618(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98CF4;
	sub_82E01BF0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e02670
	ctx.lr = 0x82A98D00;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3632
	ctx.r4.s64 = ctx.r11.s64 + 3632;
	// bl 0x82e02670
	ctx.lr = 0x82A98D10;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r11,-12372
	ctx.r5.s64 = ctx.r11.s64 + -12372;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98D30;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98D44;
	sub_82AE2818(ctx, base);
	// addi r3,r1,3224
	ctx.r3.s64 = ctx.r1.s64 + 3224;
	// bl 0x8259b670
	ctx.lr = 0x82A98D4C;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98D54;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98D5C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,3616
	ctx.r4.s64 = ctx.r11.s64 + 3616;
	// bl 0x82e02670
	ctx.lr = 0x82A98D6C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3572
	ctx.r4.s64 = ctx.r11.s64 + 3572;
	// bl 0x82e02670
	ctx.lr = 0x82A98D7C;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r11,-12368
	ctx.r5.s64 = ctx.r11.s64 + -12368;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r3,r1,2688
	ctx.r3.s64 = ctx.r1.s64 + 2688;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98D9C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98DB0;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2696
	ctx.r3.s64 = ctx.r1.s64 + 2696;
	// bl 0x8259b670
	ctx.lr = 0x82A98DB8;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98DC0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98DC8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,3552
	ctx.r4.s64 = ctx.r11.s64 + 3552;
	// bl 0x82e02670
	ctx.lr = 0x82A98DD8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3528
	ctx.r4.s64 = ctx.r11.s64 + 3528;
	// bl 0x82e02670
	ctx.lr = 0x82A98DE8;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r5,r11,-23161
	ctx.r5.s64 = ctx.r11.s64 + -23161;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82ae3c70
	ctx.lr = 0x82A98DFC;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A98E10;
	sub_82AE3920(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98E18;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// bl 0x8259b670
	ctx.lr = 0x82A98E20;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98E28;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98E30;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,3496
	ctx.r4.s64 = ctx.r11.s64 + 3496;
	// bl 0x82e02670
	ctx.lr = 0x82A98E40;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3460
	ctx.r4.s64 = ctx.r11.s64 + 3460;
	// bl 0x82e02670
	ctx.lr = 0x82A98E50;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r5,r11,-23148
	ctx.r5.s64 = ctx.r11.s64 + -23148;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82ae3c70
	ctx.lr = 0x82A98E64;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A98E78;
	sub_82AE3920(ctx, base);
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98E80;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// bl 0x8259b670
	ctx.lr = 0x82A98E88;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98E90;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98E98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,3436
	ctx.r4.s64 = ctx.r11.s64 + 3436;
	// bl 0x82e02670
	ctx.lr = 0x82A98EA8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3404
	ctx.r4.s64 = ctx.r11.s64 + 3404;
	// bl 0x82e02670
	ctx.lr = 0x82A98EB8;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r30,r11,-23120
	ctx.r30.s64 = ctx.r11.s64 + -23120;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// lfs f28,-4128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4128);
	ctx.f28.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98EE4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98EF8;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1160
	ctx.r3.s64 = ctx.r1.s64 + 1160;
	// bl 0x8259b670
	ctx.lr = 0x82A98F00;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98F08;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98F10;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,3380
	ctx.r4.s64 = ctx.r11.s64 + 3380;
	// bl 0x82e02670
	ctx.lr = 0x82A98F20;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3348
	ctx.r4.s64 = ctx.r11.s64 + 3348;
	// bl 0x82e02670
	ctx.lr = 0x82A98F30;
	sub_82E02670(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98F4C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98F60;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2216
	ctx.r3.s64 = ctx.r1.s64 + 2216;
	// bl 0x8259b670
	ctx.lr = 0x82A98F68;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98F70;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98F78;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,3324
	ctx.r4.s64 = ctx.r11.s64 + 3324;
	// bl 0x82e02670
	ctx.lr = 0x82A98F88;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3292
	ctx.r4.s64 = ctx.r11.s64 + 3292;
	// bl 0x82e02670
	ctx.lr = 0x82A98F98;
	sub_82E02670(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A98FB4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A98FC8;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1256
	ctx.r3.s64 = ctx.r1.s64 + 1256;
	// bl 0x8259b670
	ctx.lr = 0x82A98FD0;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98FD8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A98FE0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,3268
	ctx.r4.s64 = ctx.r11.s64 + 3268;
	// bl 0x82e02670
	ctx.lr = 0x82A98FF0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3236
	ctx.r4.s64 = ctx.r11.s64 + 3236;
	// bl 0x82e02670
	ctx.lr = 0x82A99000;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// addi r30,r11,-23104
	ctx.r30.s64 = ctx.r11.s64 + -23104;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r1,2976
	ctx.r3.s64 = ctx.r1.s64 + 2976;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99024;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99038;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2984
	ctx.r3.s64 = ctx.r1.s64 + 2984;
	// bl 0x8259b670
	ctx.lr = 0x82A99040;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99048;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99050;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,3212
	ctx.r4.s64 = ctx.r11.s64 + 3212;
	// bl 0x82e02670
	ctx.lr = 0x82A99060;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,3180
	ctx.r4.s64 = ctx.r11.s64 + 3180;
	// bl 0x82e02670
	ctx.lr = 0x82A99070;
	sub_82E02670(ctx, base);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9908C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A990A0;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1352
	ctx.r3.s64 = ctx.r1.s64 + 1352;
	// bl 0x8259b670
	ctx.lr = 0x82A990A8;
	sub_8259B670(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e01bf0
	ctx.lr = 0x82A990B0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82e01bf0
	ctx.lr = 0x82A990B8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,3156
	ctx.r4.s64 = ctx.r11.s64 + 3156;
	// bl 0x82e02670
	ctx.lr = 0x82A990C8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,3124
	ctx.r4.s64 = ctx.r11.s64 + 3124;
	// bl 0x82e02670
	ctx.lr = 0x82A990D8;
	sub_82E02670(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,2304
	ctx.r3.s64 = ctx.r1.s64 + 2304;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A990F4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99108;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2312
	ctx.r3.s64 = ctx.r1.s64 + 2312;
	// bl 0x8259b670
	ctx.lr = 0x82A99110;
	sub_8259B670(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99118;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99120;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,3100
	ctx.r4.s64 = ctx.r11.s64 + 3100;
	// bl 0x82e02670
	ctx.lr = 0x82A99130;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,3068
	ctx.r4.s64 = ctx.r11.s64 + 3068;
	// bl 0x82e02670
	ctx.lr = 0x82A99140;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r30,r11,-23088
	ctx.r30.s64 = ctx.r11.s64 + -23088;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99164;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99178;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1448
	ctx.r3.s64 = ctx.r1.s64 + 1448;
	// bl 0x8259b670
	ctx.lr = 0x82A99180;
	sub_8259B670(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99188;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99190;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,3044
	ctx.r4.s64 = ctx.r11.s64 + 3044;
	// bl 0x82e02670
	ctx.lr = 0x82A991A0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// bl 0x82e02670
	ctx.lr = 0x82A991B0;
	sub_82E02670(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,2784
	ctx.r3.s64 = ctx.r1.s64 + 2784;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A991CC;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A991E0;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2792
	ctx.r3.s64 = ctx.r1.s64 + 2792;
	// bl 0x8259b670
	ctx.lr = 0x82A991E8;
	sub_8259B670(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82e01bf0
	ctx.lr = 0x82A991F0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01bf0
	ctx.lr = 0x82A991F8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x82e02670
	ctx.lr = 0x82A99208;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2956
	ctx.r4.s64 = ctx.r11.s64 + 2956;
	// bl 0x82e02670
	ctx.lr = 0x82A99218;
	sub_82E02670(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99234;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99248;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1544
	ctx.r3.s64 = ctx.r1.s64 + 1544;
	// bl 0x8259b670
	ctx.lr = 0x82A99250;
	sub_8259B670(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99258;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99260;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2932
	ctx.r4.s64 = ctx.r11.s64 + 2932;
	// bl 0x82e02670
	ctx.lr = 0x82A99270;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2900
	ctx.r4.s64 = ctx.r11.s64 + 2900;
	// bl 0x82e02670
	ctx.lr = 0x82A99280;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r30,r11,-23072
	ctx.r30.s64 = ctx.r11.s64 + -23072;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,2400
	ctx.r3.s64 = ctx.r1.s64 + 2400;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82aebec8
	ctx.lr = 0x82A992A4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A992B8;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2408
	ctx.r3.s64 = ctx.r1.s64 + 2408;
	// bl 0x8259b670
	ctx.lr = 0x82A992C0;
	sub_8259B670(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01bf0
	ctx.lr = 0x82A992C8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A992D0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2876
	ctx.r4.s64 = ctx.r11.s64 + 2876;
	// bl 0x82e02670
	ctx.lr = 0x82A992E0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2844
	ctx.r4.s64 = ctx.r11.s64 + 2844;
	// bl 0x82e02670
	ctx.lr = 0x82A992F0;
	sub_82E02670(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9930C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99320;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1640
	ctx.r3.s64 = ctx.r1.s64 + 1640;
	// bl 0x8259b670
	ctx.lr = 0x82A99328;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99330;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99338;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82e02670
	ctx.lr = 0x82A99348;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2788
	ctx.r4.s64 = ctx.r11.s64 + 2788;
	// bl 0x82e02670
	ctx.lr = 0x82A99358;
	sub_82E02670(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,3168
	ctx.r3.s64 = ctx.r1.s64 + 3168;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99374;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99388;
	sub_82AE2818(ctx, base);
	// addi r3,r1,3176
	ctx.r3.s64 = ctx.r1.s64 + 3176;
	// bl 0x8259b670
	ctx.lr = 0x82A99390;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99398;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e01bf0
	ctx.lr = 0x82A993A0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,2764
	ctx.r4.s64 = ctx.r11.s64 + 2764;
	// bl 0x82e02670
	ctx.lr = 0x82A993B0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r4,r11,2732
	ctx.r4.s64 = ctx.r11.s64 + 2732;
	// bl 0x82e02670
	ctx.lr = 0x82A993C0;
	sub_82E02670(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A993DC;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A993F0;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1736
	ctx.r3.s64 = ctx.r1.s64 + 1736;
	// bl 0x8259b670
	ctx.lr = 0x82A993F8;
	sub_8259B670(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99400;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99408;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,2720
	ctx.r4.s64 = ctx.r11.s64 + 2720;
	// bl 0x82e02670
	ctx.lr = 0x82A99418;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,2692
	ctx.r4.s64 = ctx.r11.s64 + 2692;
	// bl 0x82e02670
	ctx.lr = 0x82A99428;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r11,-12364
	ctx.r5.s64 = ctx.r11.s64 + -12364;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,2496
	ctx.r3.s64 = ctx.r1.s64 + 2496;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99448;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9945C;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2504
	ctx.r3.s64 = ctx.r1.s64 + 2504;
	// bl 0x8259b670
	ctx.lr = 0x82A99464;
	sub_8259B670(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9946C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99474;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,2680
	ctx.r4.s64 = ctx.r11.s64 + 2680;
	// bl 0x82e02670
	ctx.lr = 0x82A99484;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,2652
	ctx.r4.s64 = ctx.r11.s64 + 2652;
	// bl 0x82e02670
	ctx.lr = 0x82A99494;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r11,-12360
	ctx.r5.s64 = ctx.r11.s64 + -12360;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A994B4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A994C8;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1832
	ctx.r3.s64 = ctx.r1.s64 + 1832;
	// bl 0x8259b670
	ctx.lr = 0x82A994D0;
	sub_8259B670(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A994D8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A994E0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,2640
	ctx.r4.s64 = ctx.r11.s64 + 2640;
	// bl 0x82e02670
	ctx.lr = 0x82A994F0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,2608
	ctx.r4.s64 = ctx.r11.s64 + 2608;
	// bl 0x82e02670
	ctx.lr = 0x82A99500;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r11,-12356
	ctx.r5.s64 = ctx.r11.s64 + -12356;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,2880
	ctx.r3.s64 = ctx.r1.s64 + 2880;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99520;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99534;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2888
	ctx.r3.s64 = ctx.r1.s64 + 2888;
	// bl 0x8259b670
	ctx.lr = 0x82A9953C;
	sub_8259B670(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99544;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9954C;
	sub_82E01BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82af1908
	ctx.lr = 0x82A99554;
	sub_82AF1908(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a99564
	if (ctx.cr6.eq) goto loc_82A99564;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e016e0
	ctx.lr = 0x82A99564;
	sub_82E016E0(ctx, base);
loc_82A99564:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e02670
	ctx.lr = 0x82A99570;
	sub_82E02670(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e02670
	ctx.lr = 0x82A9957C;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r31,r11,5848
	ctx.r31.s64 = ctx.r11.s64 + 5848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A99590;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r29,r11,5840
	ctx.r29.s64 = ctx.r11.s64 + 5840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A995A4;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82af0930
	ctx.lr = 0x82A995B8;
	sub_82AF0930(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82af1d28
	ctx.lr = 0x82A995CC;
	sub_82AF1D28(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a995e4
	if (ctx.cr6.eq) goto loc_82A995E4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A995E4;
	sub_82480108(ctx, base);
loc_82A995E4:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A995EC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A995F4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A995FC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99604;
	sub_82E01BF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e02670
	ctx.lr = 0x82A99610;
	sub_82E02670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e02670
	ctx.lr = 0x82A9961C;
	sub_82E02670(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82af0930
	ctx.lr = 0x82A99630;
	sub_82AF0930(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a99648
	if (ctx.cr6.eq) goto loc_82A99648;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A99648;
	sub_82480108(ctx, base);
loc_82A99648:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99650;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99658;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2580
	ctx.r4.s64 = ctx.r11.s64 + 2580;
	// bl 0x82e02670
	ctx.lr = 0x82A99668;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2560
	ctx.r4.s64 = ctx.r11.s64 + 2560;
	// bl 0x82e02670
	ctx.lr = 0x82A99678;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r31,r11,-23008
	ctx.r31.s64 = ctx.r11.s64 + -23008;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9969C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A996B0;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1928
	ctx.r3.s64 = ctx.r1.s64 + 1928;
	// bl 0x8259b670
	ctx.lr = 0x82A996B8;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A996C0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01bf0
	ctx.lr = 0x82A996C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2524
	ctx.r4.s64 = ctx.r11.s64 + 2524;
	// bl 0x82e02670
	ctx.lr = 0x82A996D8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2504
	ctx.r4.s64 = ctx.r11.s64 + 2504;
	// bl 0x82e02670
	ctx.lr = 0x82A996E8;
	sub_82E02670(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99704;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99718;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2600
	ctx.r3.s64 = ctx.r1.s64 + 2600;
	// bl 0x8259b670
	ctx.lr = 0x82A99720;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99728;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99730;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,2476
	ctx.r4.s64 = ctx.r11.s64 + 2476;
	// bl 0x82e02670
	ctx.lr = 0x82A99740;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2456
	ctx.r4.s64 = ctx.r11.s64 + 2456;
	// bl 0x82e02670
	ctx.lr = 0x82A99750;
	sub_82E02670(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9976C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99780;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2024
	ctx.r3.s64 = ctx.r1.s64 + 2024;
	// bl 0x8259b670
	ctx.lr = 0x82A99788;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99790;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99798;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,2420
	ctx.r4.s64 = ctx.r11.s64 + 2420;
	// bl 0x82e02670
	ctx.lr = 0x82A997A8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2400
	ctx.r4.s64 = ctx.r11.s64 + 2400;
	// bl 0x82e02670
	ctx.lr = 0x82A997B8;
	sub_82E02670(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,3072
	ctx.r3.s64 = ctx.r1.s64 + 3072;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A997D4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A997E8;
	sub_82AE2818(ctx, base);
	// addi r3,r1,3080
	ctx.r3.s64 = ctx.r1.s64 + 3080;
	// bl 0x8259b670
	ctx.lr = 0x82A997F0;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A997F8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99800;
	sub_82E01BF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af1908
	ctx.lr = 0x82A99808;
	sub_82AF1908(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82e02670
	ctx.lr = 0x82A99814;
	sub_82E02670(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e02670
	ctx.lr = 0x82A99820;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r30,r11,2380
	ctx.r30.s64 = ctx.r11.s64 + 2380;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A99834;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r29,r11,2364
	ctx.r29.s64 = ctx.r11.s64 + 2364;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A99848;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82af0930
	ctx.lr = 0x82A9985C;
	sub_82AF0930(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82af1d28
	ctx.lr = 0x82A99870;
	sub_82AF1D28(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a99888
	if (ctx.cr6.eq) goto loc_82A99888;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A99888;
	sub_82480108(ctx, base);
loc_82A99888:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99890;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99898;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A998A0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82e01bf0
	ctx.lr = 0x82A998A8;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e02670
	ctx.lr = 0x82A998B4;
	sub_82E02670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e02670
	ctx.lr = 0x82A998C0;
	sub_82E02670(ctx, base);
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82af0930
	ctx.lr = 0x82A998D4;
	sub_82AF0930(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a998ec
	if (ctx.cr6.eq) goto loc_82A998EC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A998EC;
	sub_82480108(ctx, base);
loc_82A998EC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e01bf0
	ctx.lr = 0x82A998F4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e01bf0
	ctx.lr = 0x82A998FC;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,2344
	ctx.r4.s64 = ctx.r11.s64 + 2344;
	// bl 0x82e02670
	ctx.lr = 0x82A9990C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2324
	ctx.r4.s64 = ctx.r11.s64 + 2324;
	// bl 0x82e02670
	ctx.lr = 0x82A9991C;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-12343
	ctx.r5.s64 = ctx.r11.s64 + -12343;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82ae3c70
	ctx.lr = 0x82A99930;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A99944;
	sub_82AE3920(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9994C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x8259b670
	ctx.lr = 0x82A99954;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9995C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99964;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2304
	ctx.r4.s64 = ctx.r11.s64 + 2304;
	// bl 0x82e02670
	ctx.lr = 0x82A99974;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2284
	ctx.r4.s64 = ctx.r11.s64 + 2284;
	// bl 0x82e02670
	ctx.lr = 0x82A99984;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,-12344
	ctx.r5.s64 = ctx.r11.s64 + -12344;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82ae3c70
	ctx.lr = 0x82A99998;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A999AC;
	sub_82AE3920(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82e01bf0
	ctx.lr = 0x82A999B4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x8259b670
	ctx.lr = 0x82A999BC;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A999C4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01bf0
	ctx.lr = 0x82A999CC;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2264
	ctx.r4.s64 = ctx.r11.s64 + 2264;
	// bl 0x82e02670
	ctx.lr = 0x82A999DC;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2244
	ctx.r4.s64 = ctx.r11.s64 + 2244;
	// bl 0x82e02670
	ctx.lr = 0x82A999EC;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-23147
	ctx.r5.s64 = ctx.r11.s64 + -23147;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82ae3c70
	ctx.lr = 0x82A99A00;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A99A14;
	sub_82AE3920(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99A1C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x8259b670
	ctx.lr = 0x82A99A24;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99A2C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99A34;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,2208
	ctx.r4.s64 = ctx.r11.s64 + 2208;
	// bl 0x82e02670
	ctx.lr = 0x82A99A44;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2180
	ctx.r4.s64 = ctx.r11.s64 + 2180;
	// bl 0x82e02670
	ctx.lr = 0x82A99A54;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r5,r11,-23132
	ctx.r5.s64 = ctx.r11.s64 + -23132;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82ae3c70
	ctx.lr = 0x82A99A68;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A99A7C;
	sub_82AE3920(ctx, base);
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99A84;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x8259b670
	ctx.lr = 0x82A99A8C;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99A94;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99A9C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,2140
	ctx.r4.s64 = ctx.r11.s64 + 2140;
	// bl 0x82e02670
	ctx.lr = 0x82A99AAC;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2112
	ctx.r4.s64 = ctx.r11.s64 + 2112;
	// bl 0x82e02670
	ctx.lr = 0x82A99ABC;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r5,r11,-23131
	ctx.r5.s64 = ctx.r11.s64 + -23131;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82ae3c70
	ctx.lr = 0x82A99AD0;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A99AE4;
	sub_82AE3920(ctx, base);
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99AEC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x8259b670
	ctx.lr = 0x82A99AF4;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99AFC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99B04;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,2084
	ctx.r4.s64 = ctx.r11.s64 + 2084;
	// bl 0x82e02670
	ctx.lr = 0x82A99B14;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2060
	ctx.r4.s64 = ctx.r11.s64 + 2060;
	// bl 0x82e02670
	ctx.lr = 0x82A99B24;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r5,r11,-23130
	ctx.r5.s64 = ctx.r11.s64 + -23130;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82ae3c70
	ctx.lr = 0x82A99B38;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A99B4C;
	sub_82AE3920(ctx, base);
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99B54;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// bl 0x8259b670
	ctx.lr = 0x82A99B5C;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99B64;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99B6C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,2024
	ctx.r4.s64 = ctx.r11.s64 + 2024;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e02670
	ctx.lr = 0x82A99B7C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2000
	ctx.r4.s64 = ctx.r11.s64 + 2000;
	// bl 0x82e02670
	ctx.lr = 0x82A99B8C;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r5,r11,-23146
	ctx.r5.s64 = ctx.r11.s64 + -23146;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82ae3c70
	ctx.lr = 0x82A99BA0;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A99BB4;
	sub_82AE3920(ctx, base);
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99BBC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,968
	ctx.r3.s64 = ctx.r1.s64 + 968;
	// bl 0x8259b670
	ctx.lr = 0x82A99BC4;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99BCC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99BD4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1964
	ctx.r4.s64 = ctx.r11.s64 + 1964;
	// bl 0x82e02670
	ctx.lr = 0x82A99BE4;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1940
	ctx.r4.s64 = ctx.r11.s64 + 1940;
	// bl 0x82e02670
	ctx.lr = 0x82A99BF4;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,-23145
	ctx.r5.s64 = ctx.r11.s64 + -23145;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82ae3c70
	ctx.lr = 0x82A99C08;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A99C1C;
	sub_82AE3920(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99C24;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// bl 0x8259b670
	ctx.lr = 0x82A99C2C;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99C34;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99C3C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,1916
	ctx.r4.s64 = ctx.r11.s64 + 1916;
	// bl 0x82e02670
	ctx.lr = 0x82A99C4C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1892
	ctx.r4.s64 = ctx.r11.s64 + 1892;
	// bl 0x82e02670
	ctx.lr = 0x82A99C5C;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r11,-23140
	ctx.r5.s64 = ctx.r11.s64 + -23140;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// bl 0x82aebef8
	ctx.lr = 0x82A99C7C;
	sub_82AEBEF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3118
	ctx.lr = 0x82A99C90;
	sub_82AE3118(ctx, base);
	// addi r3,r1,2120
	ctx.r3.s64 = ctx.r1.s64 + 2120;
	// bl 0x8259b670
	ctx.lr = 0x82A99C98;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99CA0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99CA8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,1868
	ctx.r4.s64 = ctx.r11.s64 + 1868;
	// bl 0x82e02670
	ctx.lr = 0x82A99CB8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1844
	ctx.r4.s64 = ctx.r11.s64 + 1844;
	// bl 0x82e02670
	ctx.lr = 0x82A99CC8;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r11,-23136
	ctx.r5.s64 = ctx.r11.s64 + -23136;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82aebef8
	ctx.lr = 0x82A99CE8;
	sub_82AEBEF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3118
	ctx.lr = 0x82A99CFC;
	sub_82AE3118(ctx, base);
	// addi r3,r1,1064
	ctx.r3.s64 = ctx.r1.s64 + 1064;
	// bl 0x8259b670
	ctx.lr = 0x82A99D04;
	sub_8259B670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99D0C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99D14;
	sub_82E01BF0(ctx, base);
	// li r11,309
	ctx.r11.s64 = 309;
	// stw r18,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r18.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e01860
	ctx.lr = 0x82A99D2C;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A99D40;
	sub_82E015D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a99d7c
	if (ctx.cr0.eq) goto loc_82A99D7C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1828
	ctx.r4.s64 = ctx.r11.s64 + 1828;
	// bl 0x82e02670
	ctx.lr = 0x82A99D58;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23168
	ctx.r5.s64 = ctx.r11.s64 + -23168;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r20,r20,8
	ctx.r20.u64 = ctx.r20.u64 | 8;
	// bl 0x82aeb1e0
	ctx.lr = 0x82A99D74;
	sub_82AEB1E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a99d80
	goto loc_82A99D80;
loc_82A99D7C:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82A99D80:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a99d90
	if (ctx.cr6.eq) goto loc_82A99D90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e016b8
	ctx.lr = 0x82A99D90;
	sub_82E016B8(ctx, base);
loc_82A99D90:
	// rlwinm. r11,r20,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a99da0
	if (ctx.cr0.eq) goto loc_82A99DA0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99DA0;
	sub_82E01BF0(ctx, base);
loc_82A99DA0:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r11,r11,-12384
	ctx.r11.s64 = ctx.r11.s64 + -12384;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82A99DB0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82e02670
	ctx.lr = 0x82A99DBC;
	sub_82E02670(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aeafb0
	ctx.lr = 0x82A99DCC;
	sub_82AEAFB0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99DD4;
	sub_82E01BF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82a99db0
	if (ctx.cr6.lt) goto loc_82A99DB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1812
	ctx.r4.s64 = ctx.r11.s64 + 1812;
	// bl 0x82e02670
	ctx.lr = 0x82A99DF0;
	sub_82E02670(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a99e04
	if (ctx.cr6.eq) goto loc_82A99E04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e016b8
	ctx.lr = 0x82A99E04;
	sub_82E016B8(ctx, base);
loc_82A99E04:
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ae3618
	ctx.lr = 0x82A99E18;
	sub_82AE3618(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99E20;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,1792
	ctx.r4.s64 = ctx.r11.s64 + 1792;
	// bl 0x82e02670
	ctx.lr = 0x82A99E30;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1772
	ctx.r4.s64 = ctx.r11.s64 + 1772;
	// bl 0x82e02670
	ctx.lr = 0x82A99E40;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// addi r30,r11,-22992
	ctx.r30.s64 = ctx.r11.s64 + -22992;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// lfs f29,-4124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4124);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99E6C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99E80;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1112
	ctx.r3.s64 = ctx.r1.s64 + 1112;
	// bl 0x8259b670
	ctx.lr = 0x82A99E88;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99E90;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99E98;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,1752
	ctx.r4.s64 = ctx.r11.s64 + 1752;
	// bl 0x82e02670
	ctx.lr = 0x82A99EA8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1732
	ctx.r4.s64 = ctx.r11.s64 + 1732;
	// bl 0x82e02670
	ctx.lr = 0x82A99EB8;
	sub_82E02670(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99ED4;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99EE8;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1208
	ctx.r3.s64 = ctx.r1.s64 + 1208;
	// bl 0x8259b670
	ctx.lr = 0x82A99EF0;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99EF8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99F00;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,1712
	ctx.r4.s64 = ctx.r11.s64 + 1712;
	// bl 0x82e02670
	ctx.lr = 0x82A99F10;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1692
	ctx.r4.s64 = ctx.r11.s64 + 1692;
	// bl 0x82e02670
	ctx.lr = 0x82A99F20;
	sub_82E02670(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99F3C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99F50;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1304
	ctx.r3.s64 = ctx.r1.s64 + 1304;
	// bl 0x8259b670
	ctx.lr = 0x82A99F58;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99F60;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99F68;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,1672
	ctx.r4.s64 = ctx.r11.s64 + 1672;
	// bl 0x82e02670
	ctx.lr = 0x82A99F78;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1652
	ctx.r4.s64 = ctx.r11.s64 + 1652;
	// bl 0x82e02670
	ctx.lr = 0x82A99F88;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r30,r11,-22976
	ctx.r30.s64 = ctx.r11.s64 + -22976;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82aebec8
	ctx.lr = 0x82A99FAC;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A99FC0;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1400
	ctx.r3.s64 = ctx.r1.s64 + 1400;
	// bl 0x8259b670
	ctx.lr = 0x82A99FC8;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99FD0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01bf0
	ctx.lr = 0x82A99FD8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,1632
	ctx.r4.s64 = ctx.r11.s64 + 1632;
	// bl 0x82e02670
	ctx.lr = 0x82A99FE8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1612
	ctx.r4.s64 = ctx.r11.s64 + 1612;
	// bl 0x82e02670
	ctx.lr = 0x82A99FF8;
	sub_82E02670(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9A014;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9A028;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1496
	ctx.r3.s64 = ctx.r1.s64 + 1496;
	// bl 0x8259b670
	ctx.lr = 0x82A9A030;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A038;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A040;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,1592
	ctx.r4.s64 = ctx.r11.s64 + 1592;
	// bl 0x82e02670
	ctx.lr = 0x82A9A050;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1572
	ctx.r4.s64 = ctx.r11.s64 + 1572;
	// bl 0x82e02670
	ctx.lr = 0x82A9A060;
	sub_82E02670(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9A07C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9A090;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1592
	ctx.r3.s64 = ctx.r1.s64 + 1592;
	// bl 0x8259b670
	ctx.lr = 0x82A9A098;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A0A0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A0A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1548
	ctx.r4.s64 = ctx.r11.s64 + 1548;
	// bl 0x82e02670
	ctx.lr = 0x82A9A0B8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1532
	ctx.r4.s64 = ctx.r11.s64 + 1532;
	// bl 0x82e02670
	ctx.lr = 0x82A9A0C8;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r30,r11,-22960
	ctx.r30.s64 = ctx.r11.s64 + -22960;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// bl 0x82aebec8
	ctx.lr = 0x82A9A0EC;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9A100;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1688
	ctx.r3.s64 = ctx.r1.s64 + 1688;
	// bl 0x8259b670
	ctx.lr = 0x82A9A108;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A110;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A118;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,1512
	ctx.r4.s64 = ctx.r11.s64 + 1512;
	// bl 0x82e02670
	ctx.lr = 0x82A9A128;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1496
	ctx.r4.s64 = ctx.r11.s64 + 1496;
	// bl 0x82e02670
	ctx.lr = 0x82A9A138;
	sub_82E02670(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9A154;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9A168;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1784
	ctx.r3.s64 = ctx.r1.s64 + 1784;
	// bl 0x8259b670
	ctx.lr = 0x82A9A170;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A178;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A180;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,1472
	ctx.r4.s64 = ctx.r11.s64 + 1472;
	// bl 0x82e02670
	ctx.lr = 0x82A9A190;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1448
	ctx.r4.s64 = ctx.r11.s64 + 1448;
	// bl 0x82e02670
	ctx.lr = 0x82A9A1A0;
	sub_82E02670(ctx, base);
	// stw r17,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r17.u32);
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x829f8918
	ctx.lr = 0x82A9A1B4;
	sub_829F8918(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r5,r19,44
	ctx.r5.s64 = ctx.r19.s64 + 44;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// lfs f29,6964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	ctx.f29.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebe48
	ctx.lr = 0x82A9A1DC;
	sub_82AEBE48(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9A1F0;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1880
	ctx.r3.s64 = ctx.r1.s64 + 1880;
	// bl 0x8259b670
	ctx.lr = 0x82A9A1F8;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A200;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A208;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r30,r11,1424
	ctx.r30.s64 = ctx.r11.s64 + 1424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9A21C;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e02670
	ctx.lr = 0x82A9A228;
	sub_82E02670(ctx, base);
	// stw r17,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r17.u32);
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x829f8918
	ctx.lr = 0x82A9A23C;
	sub_829F8918(ctx, base);
	// addi r5,r19,48
	ctx.r5.s64 = ctx.r19.s64 + 48;
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82aebe48
	ctx.lr = 0x82A9A25C;
	sub_82AEBE48(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9A270;
	sub_82AE2818(ctx, base);
	// addi r3,r1,1976
	ctx.r3.s64 = ctx.r1.s64 + 1976;
	// bl 0x8259b670
	ctx.lr = 0x82A9A278;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A280;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A288;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,1408
	ctx.r4.s64 = ctx.r11.s64 + 1408;
	// bl 0x82e02670
	ctx.lr = 0x82A9A298;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1388
	ctx.r4.s64 = ctx.r11.s64 + 1388;
	// bl 0x82e02670
	ctx.lr = 0x82A9A2A8;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r11,r11,-22944
	ctx.r11.s64 = ctx.r11.s64 + -22944;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x82aebec8
	ctx.lr = 0x82A9A2CC;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9A2E0;
	sub_82AE2818(ctx, base);
	// addi r3,r1,2072
	ctx.r3.s64 = ctx.r1.s64 + 2072;
	// bl 0x8259b670
	ctx.lr = 0x82A9A2E8;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A2F0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A2F8;
	sub_82E01BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82af1908
	ctx.lr = 0x82A9A300;
	sub_82AF1908(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a9a310
	if (ctx.cr6.eq) goto loc_82A9A310;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e016e0
	ctx.lr = 0x82A9A310;
	sub_82E016E0(ctx, base);
loc_82A9A310:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,1376
	ctx.r4.s64 = ctx.r11.s64 + 1376;
	// bl 0x82e02670
	ctx.lr = 0x82A9A320;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x82e02670
	ctx.lr = 0x82A9A330;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82af0930
	ctx.lr = 0x82A9A344;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829f8970
	ctx.lr = 0x82A9A34C;
	sub_829F8970(ctx, base);
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a35c
	if (ctx.cr6.eq) goto loc_82A9A35C;
	// bl 0x82480108
	ctx.lr = 0x82A9A35C;
	sub_82480108(ctx, base);
loc_82A9A35C:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A364;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A36C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,1348
	ctx.r4.s64 = ctx.r11.s64 + 1348;
	// bl 0x82e02670
	ctx.lr = 0x82A9A37C;
	sub_82E02670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,7736
	ctx.r4.s64 = ctx.r11.s64 + 7736;
	// bl 0x82e02670
	ctx.lr = 0x82A9A38C;
	sub_82E02670(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82af0930
	ctx.lr = 0x82A9A3A0;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829fb5c8
	ctx.lr = 0x82A9A3A8;
	sub_829FB5C8(ctx, base);
	// lwz r3,380(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a3b8
	if (ctx.cr6.eq) goto loc_82A9A3B8;
	// bl 0x82480108
	ctx.lr = 0x82A9A3B8;
	sub_82480108(ctx, base);
loc_82A9A3B8:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A3C0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A3C8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,1332
	ctx.r4.s64 = ctx.r11.s64 + 1332;
	// bl 0x82e02670
	ctx.lr = 0x82A9A3D8;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,20652
	ctx.r4.s64 = ctx.r11.s64 + 20652;
	// bl 0x82e02670
	ctx.lr = 0x82A9A3E8;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82af0930
	ctx.lr = 0x82A9A3FC;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829faa00
	ctx.lr = 0x82A9A404;
	sub_829FAA00(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a414
	if (ctx.cr6.eq) goto loc_82A9A414;
	// bl 0x82480108
	ctx.lr = 0x82A9A414;
	sub_82480108(ctx, base);
loc_82A9A414:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A41C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A424;
	sub_82E01BF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r31,r11,9440
	ctx.r31.s64 = ctx.r11.s64 + 9440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9A438;
	sub_82E02670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e02670
	ctx.lr = 0x82A9A444;
	sub_82E02670(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82af0930
	ctx.lr = 0x82A9A458;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829f9408
	ctx.lr = 0x82A9A460;
	sub_829F9408(ctx, base);
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a470
	if (ctx.cr6.eq) goto loc_82A9A470;
	// bl 0x82480108
	ctx.lr = 0x82A9A470;
	sub_82480108(ctx, base);
loc_82A9A470:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A478;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A480;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,1308
	ctx.r4.s64 = ctx.r11.s64 + 1308;
	// bl 0x82e02670
	ctx.lr = 0x82A9A490;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,1296
	ctx.r4.s64 = ctx.r11.s64 + 1296;
	// bl 0x82e02670
	ctx.lr = 0x82A9A4A0;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82af0930
	ctx.lr = 0x82A9A4B4;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829fd478
	ctx.lr = 0x82A9A4BC;
	sub_829FD478(ctx, base);
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a4cc
	if (ctx.cr6.eq) goto loc_82A9A4CC;
	// bl 0x82480108
	ctx.lr = 0x82A9A4CC;
	sub_82480108(ctx, base);
loc_82A9A4CC:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A4D4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A4DC;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,1272
	ctx.r4.s64 = ctx.r11.s64 + 1272;
	// bl 0x82e02670
	ctx.lr = 0x82A9A4EC;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,14120
	ctx.r4.s64 = ctx.r11.s64 + 14120;
	// bl 0x82e02670
	ctx.lr = 0x82A9A4FC;
	sub_82E02670(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82af0930
	ctx.lr = 0x82A9A510;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829fdd50
	ctx.lr = 0x82A9A518;
	sub_829FDD50(ctx, base);
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a528
	if (ctx.cr6.eq) goto loc_82A9A528;
	// bl 0x82480108
	ctx.lr = 0x82A9A528;
	sub_82480108(ctx, base);
loc_82A9A528:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A530;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A538;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,1252
	ctx.r4.s64 = ctx.r11.s64 + 1252;
	// bl 0x82e02670
	ctx.lr = 0x82A9A548;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,19968
	ctx.r4.s64 = ctx.r11.s64 + 19968;
	// bl 0x82e02670
	ctx.lr = 0x82A9A558;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82af0930
	ctx.lr = 0x82A9A56C;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829fd370
	ctx.lr = 0x82A9A574;
	sub_829FD370(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a584
	if (ctx.cr6.eq) goto loc_82A9A584;
	// bl 0x82480108
	ctx.lr = 0x82A9A584;
	sub_82480108(ctx, base);
loc_82A9A584:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A58C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A594;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,1232
	ctx.r4.s64 = ctx.r11.s64 + 1232;
	// bl 0x82e02670
	ctx.lr = 0x82A9A5A4;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,1080
	ctx.r4.s64 = ctx.r11.s64 + 1080;
	// bl 0x82e02670
	ctx.lr = 0x82A9A5B4;
	sub_82E02670(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82af0930
	ctx.lr = 0x82A9A5C8;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829fbdb0
	ctx.lr = 0x82A9A5D0;
	sub_829FBDB0(ctx, base);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a5e0
	if (ctx.cr6.eq) goto loc_82A9A5E0;
	// bl 0x82480108
	ctx.lr = 0x82A9A5E0;
	sub_82480108(ctx, base);
loc_82A9A5E0:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A5E8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A5F0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,1216
	ctx.r4.s64 = ctx.r11.s64 + 1216;
	// bl 0x82e02670
	ctx.lr = 0x82A9A600;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,21372
	ctx.r4.s64 = ctx.r11.s64 + 21372;
	// bl 0x82e02670
	ctx.lr = 0x82A9A610;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82af0930
	ctx.lr = 0x82A9A624;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829fe2b8
	ctx.lr = 0x82A9A62C;
	sub_829FE2B8(ctx, base);
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a63c
	if (ctx.cr6.eq) goto loc_82A9A63C;
	// bl 0x82480108
	ctx.lr = 0x82A9A63C;
	sub_82480108(ctx, base);
loc_82A9A63C:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A644;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A64C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,1204
	ctx.r4.s64 = ctx.r11.s64 + 1204;
	// bl 0x82e02670
	ctx.lr = 0x82A9A65C;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,19764
	ctx.r4.s64 = ctx.r11.s64 + 19764;
	// bl 0x82e02670
	ctx.lr = 0x82A9A66C;
	sub_82E02670(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82af0930
	ctx.lr = 0x82A9A680;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829f9ce0
	ctx.lr = 0x82A9A688;
	sub_829F9CE0(ctx, base);
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a698
	if (ctx.cr6.eq) goto loc_82A9A698;
	// bl 0x82480108
	ctx.lr = 0x82A9A698;
	sub_82480108(ctx, base);
loc_82A9A698:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A6A0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A6A8;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,1188
	ctx.r4.s64 = ctx.r11.s64 + 1188;
	// bl 0x82e02670
	ctx.lr = 0x82A9A6B8;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,19820
	ctx.r4.s64 = ctx.r11.s64 + 19820;
	// bl 0x82e02670
	ctx.lr = 0x82A9A6C8;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82af0930
	ctx.lr = 0x82A9A6DC;
	sub_82AF0930(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829fe188
	ctx.lr = 0x82A9A6E4;
	sub_829FE188(ctx, base);
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9a6f4
	if (ctx.cr6.eq) goto loc_82A9A6F4;
	// bl 0x82480108
	ctx.lr = 0x82A9A6F4;
	sub_82480108(ctx, base);
loc_82A9A6F4:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A6FC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9A704;
	sub_82E01BF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824b4de0
	ctx.lr = 0x82A9A70C;
	sub_824B4DE0(ctx, base);
	// addi r1,r1,3424
	ctx.r1.s64 = ctx.r1.s64 + 3424;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x833a1940
	ctx.lr = 0x82A9A718;
	__restfpr_27(ctx, base);
	// b 0x833a01cc
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9A71C"))) PPC_WEAK_FUNC(sub_82A9A71C);
PPC_FUNC_IMPL(__imp__sub_82A9A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9A720"))) PPC_WEAK_FUNC(sub_82A9A720);
PPC_FUNC_IMPL(__imp__sub_82A9A720) {
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
	// bl 0x82e247a0
	ctx.lr = 0x82A9A740;
	sub_82E247A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r11,r11,4384
	ctx.r11.s64 = ctx.r11.s64 + 4384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ee9318
	ctx.lr = 0x82A9A758;
	sub_82EE9318(ctx, base);
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

__attribute__((alias("__imp__sub_82A9A774"))) PPC_WEAK_FUNC(sub_82A9A774);
PPC_FUNC_IMPL(__imp__sub_82A9A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9A778"))) PPC_WEAK_FUNC(sub_82A9A778);
PPC_FUNC_IMPL(__imp__sub_82A9A778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a9a7e4
	if (ctx.cr6.eq) goto loc_82A9A7E4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9A7A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ed9ff0
	ctx.lr = 0x82A9A7B4;
	sub_82ED9FF0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed9e00
	ctx.lr = 0x82A9A7C0;
	sub_82ED9E00(ctx, base);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ee9348
	ctx.lr = 0x82A9A7D0;
	sub_82EE9348(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82ee9318
	ctx.lr = 0x82A9A7DC;
	sub_82EE9318(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// b 0x82a9a7e8
	goto loc_82A9A7E8;
loc_82A9A7E4:
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
loc_82A9A7E8:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ee9318
	ctx.lr = 0x82A9A7F0;
	sub_82EE9318(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9A808"))) PPC_WEAK_FUNC(sub_82A9A808);
PPC_FUNC_IMPL(__imp__sub_82A9A808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9A810;
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
	// bl 0x82e247a0
	ctx.lr = 0x82A9A824;
	sub_82E247A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r11,r11,4404
	ctx.r11.s64 = ctx.r11.s64 + 4404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ee9318
	ctx.lr = 0x82A9A83C;
	sub_82EE9318(ctx, base);
	// stb r29,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9A84C"))) PPC_WEAK_FUNC(sub_82A9A84C);
PPC_FUNC_IMPL(__imp__sub_82A9A84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9A850"))) PPC_WEAK_FUNC(sub_82A9A850);
PPC_FUNC_IMPL(__imp__sub_82A9A850) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// b 0x82ee9318
	sub_82EE9318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9A858"))) PPC_WEAK_FUNC(sub_82A9A858);
PPC_FUNC_IMPL(__imp__sub_82A9A858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9A860;
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
	// bl 0x82e247a0
	ctx.lr = 0x82A9A874;
	sub_82E247A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r11,r11,4424
	ctx.r11.s64 = ctx.r11.s64 + 4424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ee9318
	ctx.lr = 0x82A9A88C;
	sub_82EE9318(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r29,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9A8A4"))) PPC_WEAK_FUNC(sub_82A9A8A4);
PPC_FUNC_IMPL(__imp__sub_82A9A8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9A8A8"))) PPC_WEAK_FUNC(sub_82A9A8A8);
PPC_FUNC_IMPL(__imp__sub_82A9A8A8) {
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
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a9a9f0
	if (ctx.cr6.eq) goto loc_82A9A9F0;
	// lbz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a9a99c
	if (ctx.cr0.eq) goto loc_82A9A99C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8313bd90
	ctx.lr = 0x82A9A8E0;
	sub_8313BD90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9a99c
	if (ctx.cr0.eq) goto loc_82A9A99C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9A8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82ee9318
	ctx.lr = 0x82A9A908;
	sub_82EE9318(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r5,r11,8272
	ctx.r5.s64 = ctx.r11.s64 + 8272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9408
	ctx.lr = 0x82A9A91C;
	sub_82EE9408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e9f738
	ctx.lr = 0x82A9A938;
	sub_82E9F738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82ee9318
	ctx.lr = 0x82A9A944;
	sub_82EE9318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313bd90
	ctx.lr = 0x82A9A94C;
	sub_8313BD90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9A95C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82ee9318
	ctx.lr = 0x82A9A968;
	sub_82EE9318(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee9348
	ctx.lr = 0x82A9A978;
	sub_82EE9348(ctx, base);
	// addi r5,r30,112
	ctx.r5.s64 = ctx.r30.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ee9348
	ctx.lr = 0x82A9A988;
	sub_82EE9348(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82ee9318
	ctx.lr = 0x82A9A994;
	sub_82EE9318(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// b 0x82a9a9f4
	goto loc_82A9A9F4;
loc_82A9A99C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9A9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x82A9A9C0;
	sub_82E9FA18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82e9f738
	ctx.lr = 0x82A9A9CC;
	sub_82E9F738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,112
	ctx.r5.s64 = ctx.r30.s64 + 112;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ee9348
	ctx.lr = 0x82A9A9DC;
	sub_82EE9348(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82ee9318
	ctx.lr = 0x82A9A9E8;
	sub_82EE9318(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// b 0x82a9a9f4
	goto loc_82A9A9F4;
loc_82A9A9F0:
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
loc_82A9A9F4:
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// bl 0x82ee9318
	ctx.lr = 0x82A9A9FC;
	sub_82EE9318(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
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

__attribute__((alias("__imp__sub_82A9AA18"))) PPC_WEAK_FUNC(sub_82A9AA18);
PPC_FUNC_IMPL(__imp__sub_82A9AA18) {
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
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,241(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 241);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a9abbc
	if (ctx.cr6.eq) goto loc_82A9ABBC;
	// beq 0x82a9aa80
	if (ctx.cr0.eq) goto loc_82A9AA80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9AA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82ee9348
	ctx.lr = 0x82A9AA6C;
	sub_82EE9348(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82ee9318
	ctx.lr = 0x82A9AA78;
	sub_82EE9318(ctx, base);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// b 0x82a9abc0
	goto loc_82A9ABC0;
loc_82A9AA80:
	// lbz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a9ab5c
	if (ctx.cr0.eq) goto loc_82A9AB5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313bd90
	ctx.lr = 0x82A9AA94;
	sub_8313BD90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9ab5c
	if (ctx.cr0.eq) goto loc_82A9AB5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9AAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82ee9318
	ctx.lr = 0x82A9AABC;
	sub_82EE9318(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r5,r11,8272
	ctx.r5.s64 = ctx.r11.s64 + 8272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9408
	ctx.lr = 0x82A9AAD0;
	sub_82EE9408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,24284(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82e9f738
	ctx.lr = 0x82A9AAF8;
	sub_82E9F738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82ee9318
	ctx.lr = 0x82A9AB04;
	sub_82EE9318(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8313bd90
	ctx.lr = 0x82A9AB0C;
	sub_8313BD90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9AB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee9318
	ctx.lr = 0x82A9AB28;
	sub_82EE9318(ctx, base);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ee9348
	ctx.lr = 0x82A9AB38;
	sub_82EE9348(ctx, base);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82ee9348
	ctx.lr = 0x82A9AB48;
	sub_82EE9348(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ee9318
	ctx.lr = 0x82A9AB54;
	sub_82EE9318(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// b 0x82a9abc0
	goto loc_82A9ABC0;
loc_82A9AB5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9AB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x82A9AB80;
	sub_82E9FA18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82e9f738
	ctx.lr = 0x82A9AB98;
	sub_82E9F738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82ee9348
	ctx.lr = 0x82A9ABA8;
	sub_82EE9348(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82ee9318
	ctx.lr = 0x82A9ABB4;
	sub_82EE9318(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// b 0x82a9abc0
	goto loc_82A9ABC0;
loc_82A9ABBC:
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
loc_82A9ABC0:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ee9318
	ctx.lr = 0x82A9ABC8;
	sub_82EE9318(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
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

__attribute__((alias("__imp__sub_82A9ABE4"))) PPC_WEAK_FUNC(sub_82A9ABE4);
PPC_FUNC_IMPL(__imp__sub_82A9ABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9ABE8"))) PPC_WEAK_FUNC(sub_82A9ABE8);
PPC_FUNC_IMPL(__imp__sub_82A9ABE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9ABF0"))) PPC_WEAK_FUNC(sub_82A9ABF0);
PPC_FUNC_IMPL(__imp__sub_82A9ABF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a9ac44
	if (ctx.cr6.eq) goto loc_82A9AC44;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9AC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9348
	ctx.lr = 0x82A9AC30;
	sub_82EE9348(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ee9318
	ctx.lr = 0x82A9AC3C;
	sub_82EE9318(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x82a9ac48
	goto loc_82A9AC48;
loc_82A9AC44:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
loc_82A9AC48:
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82ee9318
	ctx.lr = 0x82A9AC50;
	sub_82EE9318(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AC68"))) PPC_WEAK_FUNC(sub_82A9AC68);
PPC_FUNC_IMPL(__imp__sub_82A9AC68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AC70"))) PPC_WEAK_FUNC(sub_82A9AC70);
PPC_FUNC_IMPL(__imp__sub_82A9AC70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AC78"))) PPC_WEAK_FUNC(sub_82A9AC78);
PPC_FUNC_IMPL(__imp__sub_82A9AC78) {
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
	// bl 0x82e247a0
	ctx.lr = 0x82A9AC90;
	sub_82E247A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r11,r11,4444
	ctx.r11.s64 = ctx.r11.s64 + 4444;
	// lis r9,-31878
	ctx.r9.s64 = -2089156608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r5,r10,8272
	ctx.r5.s64 = ctx.r10.s64 + 8272;
	// addi r4,r9,-14992
	ctx.r4.s64 = ctx.r9.s64 + -14992;
	// bl 0x825a5bb0
	ctx.lr = 0x82A9ACB4;
	sub_825A5BB0(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82ee9318
	ctx.lr = 0x82A9ACC0;
	sub_82EE9318(ctx, base);
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

__attribute__((alias("__imp__sub_82A9ACD8"))) PPC_WEAK_FUNC(sub_82A9ACD8);
PPC_FUNC_IMPL(__imp__sub_82A9ACD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9ACE0;
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
	// bl 0x82e247a0
	ctx.lr = 0x82A9ACF4;
	sub_82E247A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r11,r11,4444
	ctx.r11.s64 = ctx.r11.s64 + 4444;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825a5bb0
	ctx.lr = 0x82A9AD10;
	sub_825A5BB0(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82ee9318
	ctx.lr = 0x82A9AD1C;
	sub_82EE9318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9AD28"))) PPC_WEAK_FUNC(sub_82A9AD28);
PPC_FUNC_IMPL(__imp__sub_82A9AD28) {
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
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// li r11,16
	ctx.r11.s64 = 16;
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825a5b38
	ctx.lr = 0x82A9AD50;
	sub_825A5B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e237e8
	ctx.lr = 0x82A9AD58;
	sub_82E237E8(ctx, base);
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

__attribute__((alias("__imp__sub_82A9AD6C"))) PPC_WEAK_FUNC(sub_82A9AD6C);
PPC_FUNC_IMPL(__imp__sub_82A9AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9AD70"))) PPC_WEAK_FUNC(sub_82A9AD70);
PPC_FUNC_IMPL(__imp__sub_82A9AD70) {
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
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x82876768
	ctx.lr = 0x82A9AD8C;
	sub_82876768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e237e8
	ctx.lr = 0x82A9AD94;
	sub_82E237E8(ctx, base);
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

__attribute__((alias("__imp__sub_82A9ADA8"))) PPC_WEAK_FUNC(sub_82A9ADA8);
PPC_FUNC_IMPL(__imp__sub_82A9ADA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// lbz r11,-20880(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -20880);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,-20880(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20880, ctx.r9.u8);
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r8,r10,-22928
	ctx.r8.s64 = ctx.r10.s64 + -22928;
loc_82A9ADC8:
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A9ADD4:
	// clrldi r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 & 0x1;
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82a9adf0
	if (ctx.cr6.eq) goto loc_82A9ADF0;
	// li r12,27
	ctx.r12.s64 = 27;
	// rldicr r12,r12,59,4
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 59) & 0xF800000000000000;
	// xor r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r12.u64;
loc_82A9ADF0:
	// bdnz 0x82a9add4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A9ADD4;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpldi cr6,r11,256
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 256, ctx.xer);
	// stdx r10,r9,r8
	PPC_STORE_U64(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u64);
	// blt cr6,0x82a9adc8
	if (ctx.cr6.lt) goto loc_82A9ADC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AE0C"))) PPC_WEAK_FUNC(sub_82A9AE0C);
PPC_FUNC_IMPL(__imp__sub_82A9AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9AE10"))) PPC_WEAK_FUNC(sub_82A9AE10);
PPC_FUNC_IMPL(__imp__sub_82A9AE10) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lbz r11,-20880(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20880);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a9ae30
	if (!ctx.cr0.eq) goto loc_82A9AE30;
	// bl 0x82a9ada8
	ctx.lr = 0x82A9AE30;
	sub_82A9ADA8(ctx, base);
loc_82A9AE30:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a9ae6c
	if (ctx.cr6.eq) goto loc_82A9AE6C;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r8,r9,-22928
	ctx.r8.s64 = ctx.r9.s64 + -22928;
loc_82A9AE4C:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rldicl r11,r11,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// bdnz 0x82a9ae4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A9AE4C;
loc_82A9AE6C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AE80"))) PPC_WEAK_FUNC(sub_82A9AE80);
PPC_FUNC_IMPL(__imp__sub_82A9AE80) {
	PPC_FUNC_PROLOGUE();
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldimi r11,r3,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AE90"))) PPC_WEAK_FUNC(sub_82A9AE90);
PPC_FUNC_IMPL(__imp__sub_82A9AE90) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82a9aebc
	if (ctx.cr6.eq) goto loc_82A9AEBC;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r4,16
	ctx.r4.s64 = 16;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a9ae10
	ctx.lr = 0x82A9AEBC;
	sub_82A9AE10(ctx, base);
loc_82A9AEBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AECC"))) PPC_WEAK_FUNC(sub_82A9AECC);
PPC_FUNC_IMPL(__imp__sub_82A9AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9AED0"))) PPC_WEAK_FUNC(sub_82A9AED0);
PPC_FUNC_IMPL(__imp__sub_82A9AED0) {
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
	// li r12,1
	ctx.r12.s64 = 1;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// or r3,r11,r12
	ctx.r3.u64 = ctx.r11.u64 | ctx.r12.u64;
	// beq cr6,0x82a9af14
	if (ctx.cr6.eq) goto loc_82A9AF14;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82a9af14
	if (ctx.cr6.eq) goto loc_82A9AF14;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r4,16
	ctx.r4.s64 = 16;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a9ae10
	ctx.lr = 0x82A9AF14;
	sub_82A9AE10(ctx, base);
loc_82A9AF14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AF24"))) PPC_WEAK_FUNC(sub_82A9AF24);
PPC_FUNC_IMPL(__imp__sub_82A9AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9AF28"))) PPC_WEAK_FUNC(sub_82A9AF28);
PPC_FUNC_IMPL(__imp__sub_82A9AF28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,4476
	ctx.r10.s64 = ctx.r10.s64 + 4476;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9AF4C"))) PPC_WEAK_FUNC(sub_82A9AF4C);
PPC_FUNC_IMPL(__imp__sub_82A9AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9AF50"))) PPC_WEAK_FUNC(sub_82A9AF50);
PPC_FUNC_IMPL(__imp__sub_82A9AF50) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9af7c
	if (ctx.cr6.eq) goto loc_82A9AF7C;
	// bl 0x82480108
	ctx.lr = 0x82A9AF7C;
	sub_82480108(ctx, base);
loc_82A9AF7C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4464
	ctx.r11.s64 = ctx.r11.s64 + 4464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82a9af98
	if (ctx.cr0.eq) goto loc_82A9AF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82A9AF98;
	sub_82E01568(ctx, base);
loc_82A9AF98:
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

__attribute__((alias("__imp__sub_82A9AFB4"))) PPC_WEAK_FUNC(sub_82A9AFB4);
PPC_FUNC_IMPL(__imp__sub_82A9AFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9AFB8"))) PPC_WEAK_FUNC(sub_82A9AFB8);
PPC_FUNC_IMPL(__imp__sub_82A9AFB8) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a9b014
	if (!ctx.cr0.eq) goto loc_82A9B014;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9AFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82a13550
	ctx.lr = 0x82A9AFFC;
	sub_82A13550(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9b00c
	if (ctx.cr6.eq) goto loc_82A9B00C;
	// bl 0x82480108
	ctx.lr = 0x82A9B00C;
	sub_82480108(ctx, base);
loc_82A9B00C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82A9B014:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82A9B054"))) PPC_WEAK_FUNC(sub_82A9B054);
PPC_FUNC_IMPL(__imp__sub_82A9B054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9B058"))) PPC_WEAK_FUNC(sub_82A9B058);
PPC_FUNC_IMPL(__imp__sub_82A9B058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x82A9B060;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x833a18f8
	ctx.lr = 0x82A9B068;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B08C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// fmuls f28,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x824cf4d8
	ctx.lr = 0x82A9B0E0;
	sub_824CF4D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9b0f8
	if (!ctx.cr6.eq) goto loc_82A9B0F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A9B0F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9b11c
	if (ctx.cr0.eq) goto loc_82A9B11C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82a9b134
	goto loc_82A9B134;
loc_82A9B11C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_82A9B134:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82e01548
	ctx.lr = 0x82A9B13C;
	sub_82E01548(ctx, base);
	// cmplwi cr6,r28,7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 7, ctx.xer);
	// bgt cr6,0x82a9b62c
	if (ctx.cr6.gt) goto loc_82A9B62C;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a9b304
	if (ctx.cr6.eq) goto loc_82A9B304;
	// bdz 0x82a9b358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A9B358;
	// bdz 0x82a9b24c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A9B24C;
	// bdz 0x82a9b16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A9B16C;
	// bdz 0x82a9b3ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A9B3AC;
	// bdz 0x82a9b3fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A9B3FC;
	// bdz 0x82a9b598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A9B598;
	// b 0x82a9b304
	goto loc_82A9B304;
loc_82A9B16C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12992(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12992);
	// bl 0x82e02670
	ctx.lr = 0x82A9B1C0;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B1D0;
	sub_82A104A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B1D8;
	sub_82E01BF0(ctx, base);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,12996(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12996);
	// bl 0x82e02670
	ctx.lr = 0x82A9B1E8;
	sub_82E02670(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B1F8;
	sub_82A104A8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B200;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,12992(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12992);
	// bl 0x82e02670
	ctx.lr = 0x82A9B20C;
	sub_82E02670(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B21C;
	sub_82A10510(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B224;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,12996(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12996);
	// bl 0x82e02670
	ctx.lr = 0x82A9B230;
	sub_82E02670(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B240;
	sub_82A10510(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_82A9B244:
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B248;
	sub_82E01BF0(ctx, base);
	// b 0x82a9b634
	goto loc_82A9B634;
loc_82A9B24C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9afb8
	ctx.lr = 0x82A9B254;
	sub_82A9AFB8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,12988(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12988);
	// bl 0x82e02670
	ctx.lr = 0x82A9B27C;
	sub_82E02670(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B28C;
	sub_82A104A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B294;
	sub_82E01BF0(ctx, base);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,12996(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12996);
	// bl 0x82e02670
	ctx.lr = 0x82A9B2A4;
	sub_82E02670(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B2B4;
	sub_82A104A8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B2BC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,12988(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12988);
	// bl 0x82e02670
	ctx.lr = 0x82A9B2C8;
	sub_82E02670(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B2D8;
	sub_82A10510(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B2E0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,12996(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12996);
	// bl 0x82e02670
	ctx.lr = 0x82A9B2EC;
	sub_82E02670(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B2FC;
	sub_82A10510(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// b 0x82a9b244
	goto loc_82A9B244;
loc_82A9B304:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9afb8
	ctx.lr = 0x82A9B30C;
	sub_82A9AFB8(ctx, base);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,12980(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12980);
	// bl 0x82e02670
	ctx.lr = 0x82A9B31C;
	sub_82E02670(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B32C;
	sub_82A104A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B334;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,12980(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12980);
	// bl 0x82e02670
	ctx.lr = 0x82A9B340;
	sub_82E02670(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B350;
	sub_82A10510(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// b 0x82a9b628
	goto loc_82A9B628;
loc_82A9B358:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9afb8
	ctx.lr = 0x82A9B360;
	sub_82A9AFB8(ctx, base);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,13000(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13000);
	// bl 0x82e02670
	ctx.lr = 0x82A9B370;
	sub_82E02670(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B380;
	sub_82A104A8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B388;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,13000(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13000);
	// bl 0x82e02670
	ctx.lr = 0x82A9B394;
	sub_82E02670(ctx, base);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B3A4;
	sub_82A10510(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// b 0x82a9b244
	goto loc_82A9B244;
loc_82A9B3AC:
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,12984(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12984);
	// bl 0x82e02670
	ctx.lr = 0x82A9B3BC;
	sub_82E02670(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B3CC;
	sub_82A104A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B3D4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,12984(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12984);
	// bl 0x82e02670
	ctx.lr = 0x82A9B3E0;
	sub_82E02670(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B3F0;
	sub_82A10510(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B3F8;
	sub_82E01BF0(ctx, base);
	// b 0x82a9b640
	goto loc_82A9B640;
loc_82A9B3FC:
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a1e858
	ctx.lr = 0x82A9B434;
	sub_82A1E858(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a9b45c
	if (!ctx.cr6.eq) goto loc_82A9B45C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9B45C:
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,12964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12964);
	// bl 0x82e02670
	ctx.lr = 0x82A9B46C;
	sub_82E02670(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B47C;
	sub_82A104A8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B484;
	sub_82E01BF0(ctx, base);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,12968(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12968);
	// bl 0x82e02670
	ctx.lr = 0x82A9B494;
	sub_82E02670(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B4A4;
	sub_82A104A8(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B4AC;
	sub_82E01BF0(ctx, base);
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,12972(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12972);
	// bl 0x82e02670
	ctx.lr = 0x82A9B4BC;
	sub_82E02670(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B4CC;
	sub_82A104A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B4D4;
	sub_82E01BF0(ctx, base);
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,12976(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12976);
	// bl 0x82e02670
	ctx.lr = 0x82A9B4E4;
	sub_82E02670(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B4F4;
	sub_82A104A8(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B4FC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,12964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12964);
	// bl 0x82e02670
	ctx.lr = 0x82A9B508;
	sub_82E02670(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B518;
	sub_82A10510(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B520;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,12968(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12968);
	// bl 0x82e02670
	ctx.lr = 0x82A9B52C;
	sub_82E02670(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B53C;
	sub_82A10510(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B544;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,12972(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12972);
	// bl 0x82e02670
	ctx.lr = 0x82A9B550;
	sub_82E02670(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B560;
	sub_82A10510(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B568;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,12976(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12976);
	// bl 0x82e02670
	ctx.lr = 0x82A9B574;
	sub_82E02670(ctx, base);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B584;
	sub_82A10510(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B58C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e01548
	ctx.lr = 0x82A9B594;
	sub_82E01548(ctx, base);
	// b 0x82a9b634
	goto loc_82A9B634;
loc_82A9B598:
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9B5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,13020(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13020);
	// bl 0x82e02670
	ctx.lr = 0x82A9B5F0;
	sub_82E02670(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B600;
	sub_82A104A8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B608;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,13020(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13020);
	// bl 0x82e02670
	ctx.lr = 0x82A9B614;
	sub_82E02670(ctx, base);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B624;
	sub_82A10510(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
loc_82A9B628:
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B62C;
	sub_82E01BF0(ctx, base);
loc_82A9B62C:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x82a9b640
	if (ctx.cr6.eq) goto loc_82A9B640;
loc_82A9B634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10ac0
	ctx.lr = 0x82A9B640;
	sub_82A10AC0(ctx, base);
loc_82A9B640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a106b0
	ctx.lr = 0x82A9B64C;
	sub_82A106B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10aa0
	ctx.lr = 0x82A9B654;
	sub_82A10AA0(ctx, base);
	// bl 0x82e2d378
	ctx.lr = 0x82A9B658;
	sub_82E2D378(ctx, base);
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// blt cr6,0x82a9b6b4
	if (ctx.cr6.lt) goto loc_82A9B6B4;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bgt cr6,0x82a9b6b4
	if (ctx.cr6.gt) goto loc_82A9B6B4;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,13024(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x82e02670
	ctx.lr = 0x82A9B678;
	sub_82E02670(ctx, base);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B688;
	sub_82A104A8(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B690;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,13024(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x82e02670
	ctx.lr = 0x82A9B69C;
	sub_82E02670(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B6AC;
	sub_82A10510(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B6B4;
	sub_82E01BF0(ctx, base);
loc_82A9B6B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a11bd0
	ctx.lr = 0x82A9B6BC;
	sub_82A11BD0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a9b6e4
	if (ctx.cr6.eq) goto loc_82A9B6E4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82a9b704
	if (!ctx.cr6.gt) goto loc_82A9B704;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// ble cr6,0x82a9b6e4
	if (!ctx.cr6.gt) goto loc_82A9B6E4;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// ble cr6,0x82a9b708
	if (!ctx.cr6.gt) goto loc_82A9B708;
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// bgt cr6,0x82a9b704
	if (ctx.cr6.gt) goto loc_82A9B704;
loc_82A9B6E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10648
	ctx.lr = 0x82A9B6F4;
	sub_82A10648(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10648
	ctx.lr = 0x82A9B704;
	sub_82A10648(ctx, base);
loc_82A9B704:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
loc_82A9B708:
	// beq cr6,0x82a9b718
	if (ctx.cr6.eq) goto loc_82A9B718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a100f8
	ctx.lr = 0x82A9B718;
	sub_82A100F8(ctx, base);
loc_82A9B718:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82a9b7d8
	if (ctx.cr6.lt) goto loc_82A9B7D8;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82a9b78c
	if (!ctx.cr6.gt) goto loc_82A9B78C;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// ble cr6,0x82a9b740
	if (!ctx.cr6.gt) goto loc_82A9B740;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// ble cr6,0x82a9b7dc
	if (!ctx.cr6.gt) goto loc_82A9B7DC;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bgt cr6,0x82a9b7d8
	if (ctx.cr6.gt) goto loc_82A9B7D8;
loc_82A9B740:
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,13012(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13012);
	// bl 0x82e02670
	ctx.lr = 0x82A9B750;
	sub_82E02670(ctx, base);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B760;
	sub_82A104A8(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B768;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,13012(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13012);
	// bl 0x82e02670
	ctx.lr = 0x82A9B774;
	sub_82E02670(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B784;
	sub_82A10510(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B78C;
	sub_82E01BF0(ctx, base);
loc_82A9B78C:
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,13016(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// bl 0x82e02670
	ctx.lr = 0x82A9B79C;
	sub_82E02670(ctx, base);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B7AC;
	sub_82A104A8(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B7B4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,13016(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// bl 0x82e02670
	ctx.lr = 0x82A9B7C0;
	sub_82E02670(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B7D0;
	sub_82A10510(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B7D8;
	sub_82E01BF0(ctx, base);
loc_82A9B7D8:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
loc_82A9B7DC:
	// beq cr6,0x82a9b7ec
	if (ctx.cr6.eq) goto loc_82A9B7EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a10108
	ctx.lr = 0x82A9B7EC;
	sub_82A10108(ctx, base);
loc_82A9B7EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a9b814
	if (ctx.cr6.eq) goto loc_82A9B814;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82a9b824
	if (!ctx.cr6.gt) goto loc_82A9B824;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// ble cr6,0x82a9b814
	if (!ctx.cr6.gt) goto loc_82A9B814;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// ble cr6,0x82a9b824
	if (!ctx.cr6.gt) goto loc_82A9B824;
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// bgt cr6,0x82a9b824
	if (ctx.cr6.gt) goto loc_82A9B824;
loc_82A9B814:
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10648
	ctx.lr = 0x82A9B824;
	sub_82A10648(ctx, base);
loc_82A9B824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a100d8
	ctx.lr = 0x82A9B82C;
	sub_82A100D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10aa0
	ctx.lr = 0x82A9B834;
	sub_82A10AA0(ctx, base);
	// bl 0x82e2d3a0
	ctx.lr = 0x82A9B838;
	sub_82E2D3A0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x833a1944
	ctx.lr = 0x82A9B844;
	__restfpr_28(ctx, base);
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9B848"))) PPC_WEAK_FUNC(sub_82A9B848);
PPC_FUNC_IMPL(__imp__sub_82A9B848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9B850;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,12964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12964);
	// bl 0x82e02670
	ctx.lr = 0x82A9B870;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B880;
	sub_82A104A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B888;
	sub_82E01BF0(ctx, base);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12976(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12976);
	// bl 0x82e02670
	ctx.lr = 0x82A9B898;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B8A8;
	sub_82A104A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B8B0;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12964);
	// bl 0x82e02670
	ctx.lr = 0x82A9B8BC;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B8CC;
	sub_82A10510(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B8D4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12976(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12976);
	// bl 0x82e02670
	ctx.lr = 0x82A9B8E0;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B8F0;
	sub_82A10510(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B8F8;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10ac0
	ctx.lr = 0x82A9B904;
	sub_82A10AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a106b0
	ctx.lr = 0x82A9B910;
	sub_82A106B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10aa0
	ctx.lr = 0x82A9B918;
	sub_82A10AA0(ctx, base);
	// bl 0x82e2d378
	ctx.lr = 0x82A9B91C;
	sub_82E2D378(ctx, base);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,13024(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x82e02670
	ctx.lr = 0x82A9B92C;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a104a8
	ctx.lr = 0x82A9B93C;
	sub_82A104A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B944;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,13024(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x82e02670
	ctx.lr = 0x82A9B950;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a10510
	ctx.lr = 0x82A9B960;
	sub_82A10510(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9B968;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a11bd0
	ctx.lr = 0x82A9B970;
	sub_82A11BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a100d8
	ctx.lr = 0x82A9B978;
	sub_82A100D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10aa0
	ctx.lr = 0x82A9B980;
	sub_82A10AA0(ctx, base);
	// bl 0x82e2d3a0
	ctx.lr = 0x82A9B984;
	sub_82E2D3A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9B990"))) PPC_WEAK_FUNC(sub_82A9B990);
PPC_FUNC_IMPL(__imp__sub_82A9B990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,4488
	ctx.r11.s64 = ctx.r11.s64 + 4488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9B9A0"))) PPC_WEAK_FUNC(sub_82A9B9A0);
PPC_FUNC_IMPL(__imp__sub_82A9B9A0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,4464
	ctx.r11.s64 = ctx.r11.s64 + 4464;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a9b9cc
	if (ctx.cr0.eq) goto loc_82A9B9CC;
	// bl 0x82e01568
	ctx.lr = 0x82A9B9CC;
	sub_82E01568(ctx, base);
loc_82A9B9CC:
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

__attribute__((alias("__imp__sub_82A9B9E4"))) PPC_WEAK_FUNC(sub_82A9B9E4);
PPC_FUNC_IMPL(__imp__sub_82A9B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9B9E8"))) PPC_WEAK_FUNC(sub_82A9B9E8);
PPC_FUNC_IMPL(__imp__sub_82A9B9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9B9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a1f2f0
	ctx.lr = 0x82A9BA0C;
	sub_82A1F2F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9bb84
	if (ctx.cr0.eq) goto loc_82A9BB84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e9cce0
	ctx.lr = 0x82A9BA1C;
	sub_82E9CCE0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-12036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82e9cea8
	ctx.lr = 0x82A9BA40;
	sub_82E9CEA8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e9c9a8
	ctx.lr = 0x82A9BA48;
	sub_82E9C9A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,18608
	ctx.r31.s64 = ctx.r11.s64 + 18608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9BA5C;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a20d58
	ctx.lr = 0x82A9BA6C;
	sub_82A20D58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a9ba80
	if (!ctx.cr6.eq) goto loc_82A9BA80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9BA80:
	// bl 0x82a3c2e0
	ctx.lr = 0x82A9BA84;
	sub_82A3C2E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ee9318
	ctx.lr = 0x82A9BA90;
	sub_82EE9318(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01548
	ctx.lr = 0x82A9BA98;
	sub_82E01548(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9BAA0;
	sub_82E01BF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82A9BAAC;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a20d58
	ctx.lr = 0x82A9BABC;
	sub_82A20D58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a9bad0
	if (!ctx.cr6.eq) goto loc_82A9BAD0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9BAD0:
	// bl 0x82a3c0a8
	ctx.lr = 0x82A9BAD4;
	sub_82A3C0A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ee9318
	ctx.lr = 0x82A9BAE0;
	sub_82EE9318(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82A9BAE8;
	sub_82E01548(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9BAF0;
	sub_82E01BF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82A9BAFC;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a20d58
	ctx.lr = 0x82A9BB0C;
	sub_82A20D58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a9bb20
	if (!ctx.cr6.eq) goto loc_82A9BB20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9BB20:
	// bl 0x82a3c1f0
	ctx.lr = 0x82A9BB24;
	sub_82A3C1F0(ctx, base);
	// stfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x82A9BB30;
	sub_82E01548(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9BB38;
	sub_82E01BF0(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,-12032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82e9cc18
	ctx.lr = 0x82A9BB4C;
	sub_82E9CC18(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82e9ccd8
	ctx.lr = 0x82A9BB58;
	sub_82E9CCD8(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82e9a188
	ctx.lr = 0x82A9BB60;
	sub_82E9A188(ctx, base);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e9c958
	ctx.lr = 0x82A9BB6C;
	sub_82E9C958(ctx, base);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82e9c958
	ctx.lr = 0x82A9BB78;
	sub_82E9C958(ctx, base);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82e9c820
	ctx.lr = 0x82A9BB84;
	sub_82E9C820(ctx, base);
loc_82A9BB84:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9BB8C"))) PPC_WEAK_FUNC(sub_82A9BB8C);
PPC_FUNC_IMPL(__imp__sub_82A9BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9BB90"))) PPC_WEAK_FUNC(sub_82A9BB90);
PPC_FUNC_IMPL(__imp__sub_82A9BB90) {
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
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e9c958
	ctx.lr = 0x82A9BBB8;
	sub_82E9C958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8249e448
	ctx.lr = 0x82A9BBC4;
	sub_8249E448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9c7c8
	ctx.lr = 0x82A9BBD4;
	sub_82E9C7C8(ctx, base);
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

__attribute__((alias("__imp__sub_82A9BBEC"))) PPC_WEAK_FUNC(sub_82A9BBEC);
PPC_FUNC_IMPL(__imp__sub_82A9BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9BBF0"))) PPC_WEAK_FUNC(sub_82A9BBF0);
PPC_FUNC_IMPL(__imp__sub_82A9BBF0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9BC1C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9bc48
	if (ctx.cr0.eq) goto loc_82A9BC48;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4500
	ctx.r9.s64 = ctx.r11.s64 + 4500;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9bc4c
	goto loc_82A9BC4C;
loc_82A9BC48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9BC4C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9bc98
	if (!ctx.cr6.eq) goto loc_82A9BC98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9bc78
	if (ctx.cr6.eq) goto loc_82A9BC78;
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
	ctx.lr = 0x82A9BC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9BC78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9BC98;
	sub_82C10E98(ctx, base);
loc_82A9BC98:
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

__attribute__((alias("__imp__sub_82A9BCB4"))) PPC_WEAK_FUNC(sub_82A9BCB4);
PPC_FUNC_IMPL(__imp__sub_82A9BCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9BCB8"))) PPC_WEAK_FUNC(sub_82A9BCB8);
PPC_FUNC_IMPL(__imp__sub_82A9BCB8) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9bbf0
	ctx.lr = 0x82A9BCE0;
	sub_82A9BBF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9BCF0;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9BD0C"))) PPC_WEAK_FUNC(sub_82A9BD0C);
PPC_FUNC_IMPL(__imp__sub_82A9BD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9BD10"))) PPC_WEAK_FUNC(sub_82A9BD10);
PPC_FUNC_IMPL(__imp__sub_82A9BD10) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9BD3C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9bd68
	if (ctx.cr0.eq) goto loc_82A9BD68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9bd6c
	goto loc_82A9BD6C;
loc_82A9BD68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9BD6C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9bda0
	if (!ctx.cr6.eq) goto loc_82A9BDA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82A9BD80;
	sub_82E01568(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9BDA0;
	sub_82C10E98(ctx, base);
loc_82A9BDA0:
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

__attribute__((alias("__imp__sub_82A9BDBC"))) PPC_WEAK_FUNC(sub_82A9BDBC);
PPC_FUNC_IMPL(__imp__sub_82A9BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9BDC0"))) PPC_WEAK_FUNC(sub_82A9BDC0);
PPC_FUNC_IMPL(__imp__sub_82A9BDC0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9BDEC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9be18
	if (ctx.cr0.eq) goto loc_82A9BE18;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4540
	ctx.r9.s64 = ctx.r11.s64 + 4540;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9be1c
	goto loc_82A9BE1C;
loc_82A9BE18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9BE1C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9be50
	if (!ctx.cr6.eq) goto loc_82A9BE50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82A9BE30;
	sub_82E01568(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9BE50;
	sub_82C10E98(ctx, base);
loc_82A9BE50:
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

__attribute__((alias("__imp__sub_82A9BE6C"))) PPC_WEAK_FUNC(sub_82A9BE6C);
PPC_FUNC_IMPL(__imp__sub_82A9BE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9BE70"))) PPC_WEAK_FUNC(sub_82A9BE70);
PPC_FUNC_IMPL(__imp__sub_82A9BE70) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9BE9C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9bec8
	if (ctx.cr0.eq) goto loc_82A9BEC8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4560
	ctx.r9.s64 = ctx.r11.s64 + 4560;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9becc
	goto loc_82A9BECC;
loc_82A9BEC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9BECC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9bf00
	if (!ctx.cr6.eq) goto loc_82A9BF00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82A9BEE0;
	sub_82E01568(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9BF00;
	sub_82C10E98(ctx, base);
loc_82A9BF00:
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

__attribute__((alias("__imp__sub_82A9BF1C"))) PPC_WEAK_FUNC(sub_82A9BF1C);
PPC_FUNC_IMPL(__imp__sub_82A9BF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9BF20"))) PPC_WEAK_FUNC(sub_82A9BF20);
PPC_FUNC_IMPL(__imp__sub_82A9BF20) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9BF4C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9bf78
	if (ctx.cr0.eq) goto loc_82A9BF78;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4580
	ctx.r9.s64 = ctx.r11.s64 + 4580;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9bf7c
	goto loc_82A9BF7C;
loc_82A9BF78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9BF7C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9bfb0
	if (!ctx.cr6.eq) goto loc_82A9BFB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82A9BF90;
	sub_82E01568(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9BFB0;
	sub_82C10E98(ctx, base);
loc_82A9BFB0:
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

__attribute__((alias("__imp__sub_82A9BFCC"))) PPC_WEAK_FUNC(sub_82A9BFCC);
PPC_FUNC_IMPL(__imp__sub_82A9BFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9BFD0"))) PPC_WEAK_FUNC(sub_82A9BFD0);
PPC_FUNC_IMPL(__imp__sub_82A9BFD0) {
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
	// addi r31,r4,24
	ctx.r31.s64 = ctx.r4.s64 + 24;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e99ed0
	ctx.lr = 0x82A9BFFC;
	sub_82E99ED0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,120
	ctx.r10.s64 = 120;
	// addi r11,r11,4600
	ctx.r11.s64 = ctx.r11.s64 + 4600;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01860
	ctx.lr = 0x82A9C020;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A9C034;
	sub_82E015D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9c050
	if (ctx.cr0.eq) goto loc_82A9C050;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e992e8
	ctx.lr = 0x82A9C048;
	sub_82E992E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9c054
	goto loc_82A9C054;
loc_82A9C050:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9C054:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9bcb8
	ctx.lr = 0x82A9C05C;
	sub_82A9BCB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82A9C078"))) PPC_WEAK_FUNC(sub_82A9C078);
PPC_FUNC_IMPL(__imp__sub_82A9C078) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9bd10
	ctx.lr = 0x82A9C0A0;
	sub_82A9BD10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9C0B0;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9C0CC"))) PPC_WEAK_FUNC(sub_82A9C0CC);
PPC_FUNC_IMPL(__imp__sub_82A9C0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9C0D0"))) PPC_WEAK_FUNC(sub_82A9C0D0);
PPC_FUNC_IMPL(__imp__sub_82A9C0D0) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9bdc0
	ctx.lr = 0x82A9C0F8;
	sub_82A9BDC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9C108;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9C124"))) PPC_WEAK_FUNC(sub_82A9C124);
PPC_FUNC_IMPL(__imp__sub_82A9C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9C128"))) PPC_WEAK_FUNC(sub_82A9C128);
PPC_FUNC_IMPL(__imp__sub_82A9C128) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9be70
	ctx.lr = 0x82A9C150;
	sub_82A9BE70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9C160;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9C17C"))) PPC_WEAK_FUNC(sub_82A9C17C);
PPC_FUNC_IMPL(__imp__sub_82A9C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9C180"))) PPC_WEAK_FUNC(sub_82A9C180);
PPC_FUNC_IMPL(__imp__sub_82A9C180) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9bf20
	ctx.lr = 0x82A9C1A8;
	sub_82A9BF20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9C1B8;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9C1D4"))) PPC_WEAK_FUNC(sub_82A9C1D4);
PPC_FUNC_IMPL(__imp__sub_82A9C1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9C1D8"))) PPC_WEAK_FUNC(sub_82A9C1D8);
PPC_FUNC_IMPL(__imp__sub_82A9C1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9C1E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,3184
	ctx.r4.s64 = ctx.r11.s64 + 3184;
	// bl 0x82e02670
	ctx.lr = 0x82A9C1F8;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,3176
	ctx.r4.s64 = ctx.r11.s64 + 3176;
	// bl 0x82e02670
	ctx.lr = 0x82A9C208;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r30,r11,4792
	ctx.r30.s64 = ctx.r11.s64 + 4792;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9C21C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r29,r11,4772
	ctx.r29.s64 = ctx.r11.s64 + 4772;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9C230;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82af0930
	ctx.lr = 0x82A9C244;
	sub_82AF0930(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82af1d28
	ctx.lr = 0x82A9C258;
	sub_82AF1D28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9c270
	if (ctx.cr6.eq) goto loc_82A9C270;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A9C270;
	sub_82480108(ctx, base);
loc_82A9C270:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C278;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C280;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C288;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C290;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e02670
	ctx.lr = 0x82A9C29C;
	sub_82E02670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e02670
	ctx.lr = 0x82A9C2A8;
	sub_82E02670(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82af0930
	ctx.lr = 0x82A9C2BC;
	sub_82AF0930(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9c2d4
	if (ctx.cr6.eq) goto loc_82A9C2D4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A9C2D4;
	sub_82480108(ctx, base);
loc_82A9C2D4:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C2DC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C2E4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4752
	ctx.r4.s64 = ctx.r11.s64 + 4752;
	// bl 0x82e02670
	ctx.lr = 0x82A9C2F4;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4724
	ctx.r4.s64 = ctx.r11.s64 + 4724;
	// bl 0x82e02670
	ctx.lr = 0x82A9C304;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-20879
	ctx.r5.s64 = ctx.r11.s64 + -20879;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ae3c70
	ctx.lr = 0x82A9C318;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A9C32C;
	sub_82AE3920(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C334;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8259b670
	ctx.lr = 0x82A9C33C;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C344;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C34C;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4704
	ctx.r4.s64 = ctx.r11.s64 + 4704;
	// bl 0x82e02670
	ctx.lr = 0x82A9C35C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4692
	ctx.r4.s64 = ctx.r11.s64 + 4692;
	// bl 0x82e02670
	ctx.lr = 0x82A9C36C;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r8,-12036
	ctx.r5.s64 = ctx.r8.s64 + -12036;
	// lfs f3,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f2,-31768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31768);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82aebec8
	ctx.lr = 0x82A9C398;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9C3AC;
	sub_82AE2818(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8259b670
	ctx.lr = 0x82A9C3B4;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C3BC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9C3C4;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af1908
	ctx.lr = 0x82A9C3CC;
	sub_82AF1908(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9C3D4"))) PPC_WEAK_FUNC(sub_82A9C3D4);
PPC_FUNC_IMPL(__imp__sub_82A9C3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9C3D8"))) PPC_WEAK_FUNC(sub_82A9C3D8);
PPC_FUNC_IMPL(__imp__sub_82A9C3D8) {
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
	// bl 0x82a9c078
	ctx.lr = 0x82A9C3F4;
	sub_82A9C078(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9c424
	if (ctx.cr6.eq) goto loc_82A9C424;
	// bl 0x82480108
	ctx.lr = 0x82A9C424;
	sub_82480108(ctx, base);
loc_82A9C424:
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

__attribute__((alias("__imp__sub_82A9C438"))) PPC_WEAK_FUNC(sub_82A9C438);
PPC_FUNC_IMPL(__imp__sub_82A9C438) {
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
	// bl 0x82a9c0d0
	ctx.lr = 0x82A9C454;
	sub_82A9C0D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9c484
	if (ctx.cr6.eq) goto loc_82A9C484;
	// bl 0x82480108
	ctx.lr = 0x82A9C484;
	sub_82480108(ctx, base);
loc_82A9C484:
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

__attribute__((alias("__imp__sub_82A9C498"))) PPC_WEAK_FUNC(sub_82A9C498);
PPC_FUNC_IMPL(__imp__sub_82A9C498) {
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
	// bl 0x82a9c128
	ctx.lr = 0x82A9C4B4;
	sub_82A9C128(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9c4e4
	if (ctx.cr6.eq) goto loc_82A9C4E4;
	// bl 0x82480108
	ctx.lr = 0x82A9C4E4;
	sub_82480108(ctx, base);
loc_82A9C4E4:
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

__attribute__((alias("__imp__sub_82A9C4F8"))) PPC_WEAK_FUNC(sub_82A9C4F8);
PPC_FUNC_IMPL(__imp__sub_82A9C4F8) {
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
	// bl 0x82a9c180
	ctx.lr = 0x82A9C514;
	sub_82A9C180(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9c544
	if (ctx.cr6.eq) goto loc_82A9C544;
	// bl 0x82480108
	ctx.lr = 0x82A9C544;
	sub_82480108(ctx, base);
loc_82A9C544:
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

__attribute__((alias("__imp__sub_82A9C558"))) PPC_WEAK_FUNC(sub_82A9C558);
PPC_FUNC_IMPL(__imp__sub_82A9C558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x82A9C560;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// lfs f4,-1896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1896);
	ctx.f4.f64 = double(temp.f32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// lfs f3,7772(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7772);
	ctx.f3.f64 = double(temp.f32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// lfs f2,21524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21524);
	ctx.f2.f64 = double(temp.f32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// lfs f1,4816(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4816);
	ctx.f1.f64 = double(temp.f32);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// addi r26,r30,32
	ctx.r26.s64 = ctx.r30.s64 + 32;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// bl 0x82e9a530
	ctx.lr = 0x82A9C5D0;
	sub_82E9A530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a13550
	ctx.lr = 0x82A9C5DC;
	sub_82A13550(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9c5ec
	if (ctx.cr6.eq) goto loc_82A9C5EC;
	// bl 0x82480108
	ctx.lr = 0x82A9C5EC;
	sub_82480108(ctx, base);
loc_82A9C5EC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,61
	ctx.r10.s64 = 61;
	// addi r29,r11,4600
	ctx.r29.s64 = ctx.r11.s64 + 4600;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A9C60C;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A9C620;
	sub_82E015D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9c63c
	if (ctx.cr0.eq) goto loc_82A9C63C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e9cd00
	ctx.lr = 0x82A9C634;
	sub_82E9CD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9c640
	goto loc_82A9C640;
loc_82A9C63C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A9C640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9c3d8
	ctx.lr = 0x82A9C648;
	sub_82A9C3D8(ctx, base);
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82e01570
	ctx.lr = 0x82A9C650;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9c674
	if (ctx.cr0.eq) goto loc_82A9C674;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e9c9f8
	ctx.lr = 0x82A9C66C;
	sub_82E9C9F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9c678
	goto loc_82A9C678;
loc_82A9C674:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A9C678:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9c438
	ctx.lr = 0x82A9C680;
	sub_82A9C438(ctx, base);
	// li r11,65
	ctx.r11.s64 = 65;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A9C698;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A9C6AC;
	sub_82E015D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9c6c0
	if (ctx.cr0.eq) goto loc_82A9C6C0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// b 0x82a9c6c4
	goto loc_82A9C6C4;
loc_82A9C6C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A9C6C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a9c498
	ctx.lr = 0x82A9C6CC;
	sub_82A9C498(ctx, base);
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A9C6E4;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A9C6F8;
	sub_82E015D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9c70c
	if (ctx.cr0.eq) goto loc_82A9C70C;
	// bl 0x82e9cec0
	ctx.lr = 0x82A9C704;
	sub_82E9CEC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9c710
	goto loc_82A9C710;
loc_82A9C70C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A9C710:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a9c4f8
	ctx.lr = 0x82A9C718;
	sub_82A9C4F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9C724"))) PPC_WEAK_FUNC(sub_82A9C724);
PPC_FUNC_IMPL(__imp__sub_82A9C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9C728"))) PPC_WEAK_FUNC(sub_82A9C728);
PPC_FUNC_IMPL(__imp__sub_82A9C728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,592(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 592, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9C730"))) PPC_WEAK_FUNC(sub_82A9C730);
PPC_FUNC_IMPL(__imp__sub_82A9C730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9C738;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lis r8,-31878
	ctx.r8.s64 = -2089156608;
	// lis r7,-31878
	ctx.r7.s64 = -2089156608;
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,-20852(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20852);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-24716(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24716);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r8,-24720(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24720);
	// addi r11,r11,-20876
	ctx.r11.s64 = ctx.r11.s64 + -20876;
	// clrlwi. r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82a9c7b4
	if (!ctx.cr0.eq) goto loc_82A9C7B4;
	// lis r7,-31878
	ctx.r7.s64 = -2089156608;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lis r6,-31878
	ctx.r6.s64 = -2089156608;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lis r5,-31878
	ctx.r5.s64 = -2089156608;
	// lis r4,-31878
	ctx.r4.s64 = -2089156608;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lwz r7,-24732(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24732);
	// lwz r6,-24712(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24712);
	// lwz r5,-24724(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24724);
	// lwz r4,-24740(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24740);
	// stw r10,-20852(r9)
	PPC_STORE_U32(ctx.r9.u32 + -20852, ctx.r10.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
loc_82A9C7B4:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x82a9c7d4
	if (!ctx.cr6.lt) goto loc_82A9C7D4;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82A9C7D4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a9c7e8
	if (!ctx.cr6.eq) goto loc_82A9C7E8;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82A9C7E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a24578
	ctx.lr = 0x82A9C7F8;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9c80c
	if (!ctx.cr6.eq) goto loc_82A9C80C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9C80C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a1f288
	ctx.lr = 0x82A9C814;
	sub_82A1F288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x82a9c828
	if (!ctx.cr6.eq) goto loc_82A9C828;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9C828:
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-14992
	ctx.r7.s64 = ctx.r11.s64 + -14992;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x831ccb50
	ctx.lr = 0x82A9C840;
	sub_831CCB50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82A9C848;
	sub_82E01548(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x82A9C850;
	sub_82E01548(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a9c888
	if (!ctx.cr0.eq) goto loc_82A9C888;
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9c888
	if (ctx.cr6.eq) goto loc_82A9C888;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82A9C86C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9c730
	ctx.lr = 0x82A9C87C;
	sub_82A9C730(ctx, base);
	// lwz r31,68(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a9c86c
	if (!ctx.cr6.eq) goto loc_82A9C86C;
loc_82A9C888:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9C894"))) PPC_WEAK_FUNC(sub_82A9C894);
PPC_FUNC_IMPL(__imp__sub_82A9C894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9C898"))) PPC_WEAK_FUNC(sub_82A9C898);
PPC_FUNC_IMPL(__imp__sub_82A9C898) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9C8C4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9c8f0
	if (ctx.cr0.eq) goto loc_82A9C8F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4844
	ctx.r9.s64 = ctx.r11.s64 + 4844;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9c8f4
	goto loc_82A9C8F4;
loc_82A9C8F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9C8F4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9c940
	if (!ctx.cr6.eq) goto loc_82A9C940;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9c920
	if (ctx.cr6.eq) goto loc_82A9C920;
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
	ctx.lr = 0x82A9C920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9C920:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9C940;
	sub_82C10E98(ctx, base);
loc_82A9C940:
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

__attribute__((alias("__imp__sub_82A9C95C"))) PPC_WEAK_FUNC(sub_82A9C95C);
PPC_FUNC_IMPL(__imp__sub_82A9C95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9C960"))) PPC_WEAK_FUNC(sub_82A9C960);
PPC_FUNC_IMPL(__imp__sub_82A9C960) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,4884
	ctx.r11.s64 = ctx.r11.s64 + 4884;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9c99c
	if (ctx.cr6.eq) goto loc_82A9C99C;
	// bl 0x82480108
	ctx.lr = 0x82A9C99C;
	sub_82480108(ctx, base);
loc_82A9C99C:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9c9ac
	if (ctx.cr6.eq) goto loc_82A9C9AC;
	// bl 0x82480108
	ctx.lr = 0x82A9C9AC;
	sub_82480108(ctx, base);
loc_82A9C9AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26938
	ctx.lr = 0x82A9C9B4;
	sub_82A26938(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82e03da8
	ctx.lr = 0x82A9C9BC;
	sub_82E03DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82A9C9D0"))) PPC_WEAK_FUNC(sub_82A9C9D0);
PPC_FUNC_IMPL(__imp__sub_82A9C9D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82a9cdb0
	sub_82A9CDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9C9D8"))) PPC_WEAK_FUNC(sub_82A9C9D8);
PPC_FUNC_IMPL(__imp__sub_82A9C9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x82A9C9E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-1504(r1)
	ea = -1504 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r10,36
	ctx.r10.s64 = 36;
loc_82A9C9F8:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r7,2(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r6,3(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// bne 0x82a9c9f8
	if (!ctx.cr0.eq) goto loc_82A9C9F8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82ea12d0
	ctx.lr = 0x82A9CA2C;
	sub_82EA12D0(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r1,384
	ctx.r29.s64 = ctx.r1.s64 + 384;
	// addi r28,r11,8432
	ctx.r28.s64 = ctx.r11.s64 + 8432;
	// addi r27,r10,-11288
	ctx.r27.s64 = ctx.r10.s64 + -11288;
loc_82A9CA48:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A9CA54:
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v63,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r9,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x82a9ca54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A9CA54;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A9CA90:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v63,r10,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r9,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x82a9ca90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A9CA90;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a24578
	ctx.lr = 0x82A9CAE0;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9caf4
	if (!ctx.cr6.eq) goto loc_82A9CAF4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9CAF4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a1f288
	ctx.lr = 0x82A9CAFC;
	sub_82A1F288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x82a9cb10
	if (!ctx.cr6.eq) goto loc_82A9CB10;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9CB10:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// bl 0x831cce48
	ctx.lr = 0x82A9CB20;
	sub_831CCE48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01548
	ctx.lr = 0x82A9CB28;
	sub_82E01548(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x82A9CB30;
	sub_82E01548(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a24578
	ctx.lr = 0x82A9CB3C;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9cb50
	if (!ctx.cr6.eq) goto loc_82A9CB50;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9CB50:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82a1f288
	ctx.lr = 0x82A9CB58;
	sub_82A1F288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x82a9cb6c
	if (!ctx.cr6.eq) goto loc_82A9CB6C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9CB6C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831cce48
	ctx.lr = 0x82A9CB7C;
	sub_831CCE48(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e01548
	ctx.lr = 0x82A9CB84;
	sub_82E01548(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01548
	ctx.lr = 0x82A9CB8C;
	sub_82E01548(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// addi r29,r29,192
	ctx.r29.s64 = ctx.r29.s64 + 192;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x82a9ca48
	if (ctx.cr6.lt) goto loc_82A9CA48;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// li r27,4
	ctx.r27.s64 = 4;
loc_82A9CBAC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a24578
	ctx.lr = 0x82A9CBB8;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9cbcc
	if (!ctx.cr6.eq) goto loc_82A9CBCC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9CBCC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a1f288
	ctx.lr = 0x82A9CBD4;
	sub_82A1F288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x82a9cbe8
	if (!ctx.cr6.eq) goto loc_82A9CBE8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9CBE8:
	// srawi r10,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 2;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// rlwinm r31,r10,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x831ca708
	ctx.lr = 0x82A9CC10;
	sub_831CA708(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01548
	ctx.lr = 0x82A9CC18;
	sub_82E01548(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x82A9CC20;
	sub_82E01548(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a24578
	ctx.lr = 0x82A9CC2C;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9cc40
	if (!ctx.cr6.eq) goto loc_82A9CC40;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9CC40:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a1f288
	ctx.lr = 0x82A9CC48;
	sub_82A1F288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x82a9cc5c
	if (!ctx.cr6.eq) goto loc_82A9CC5C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9CC5C:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r30,r29,64
	ctx.r30.s64 = ctx.r29.s64 + 64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ca708
	ctx.lr = 0x82A9CC74;
	sub_831CA708(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82A9CC7C;
	sub_82E01548(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01548
	ctx.lr = 0x82A9CC84;
	sub_82E01548(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a24578
	ctx.lr = 0x82A9CC90;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9cca4
	if (!ctx.cr6.eq) goto loc_82A9CCA4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9CCA4:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a1f288
	ctx.lr = 0x82A9CCAC;
	sub_82A1F288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x82a9ccc0
	if (!ctx.cr6.eq) goto loc_82A9CCC0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9CCC0:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ca708
	ctx.lr = 0x82A9CCD0;
	sub_831CA708(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01548
	ctx.lr = 0x82A9CCD8;
	sub_82E01548(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01548
	ctx.lr = 0x82A9CCE0;
	sub_82E01548(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82a9cbac
	if (!ctx.cr0.eq) goto loc_82A9CBAC;
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9CCF8"))) PPC_WEAK_FUNC(sub_82A9CCF8);
PPC_FUNC_IMPL(__imp__sub_82A9CCF8) {
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
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x8249e448
	ctx.lr = 0x82A9CD18;
	sub_8249E448(ctx, base);
	// lwz r31,60(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// b 0x82a9cd34
	goto loc_82A9CD34;
loc_82A9CD20:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9c730
	ctx.lr = 0x82A9CD30;
	sub_82A9C730(ctx, base);
	// lwz r31,68(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_82A9CD34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a9cd20
	if (!ctx.cr6.eq) goto loc_82A9CD20;
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

__attribute__((alias("__imp__sub_82A9CD54"))) PPC_WEAK_FUNC(sub_82A9CD54);
PPC_FUNC_IMPL(__imp__sub_82A9CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9CD58"))) PPC_WEAK_FUNC(sub_82A9CD58);
PPC_FUNC_IMPL(__imp__sub_82A9CD58) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9c898
	ctx.lr = 0x82A9CD80;
	sub_82A9C898(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9CD90;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9CDAC"))) PPC_WEAK_FUNC(sub_82A9CDAC);
PPC_FUNC_IMPL(__imp__sub_82A9CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9CDB0"))) PPC_WEAK_FUNC(sub_82A9CDB0);
PPC_FUNC_IMPL(__imp__sub_82A9CDB0) {
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
	// bl 0x82a9c960
	ctx.lr = 0x82A9CDD0;
	sub_82A9C960(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9cde0
	if (ctx.cr0.eq) goto loc_82A9CDE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82A9CDE0;
	sub_82E01698(ctx, base);
loc_82A9CDE0:
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

__attribute__((alias("__imp__sub_82A9CDFC"))) PPC_WEAK_FUNC(sub_82A9CDFC);
PPC_FUNC_IMPL(__imp__sub_82A9CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9CE00"))) PPC_WEAK_FUNC(sub_82A9CE00);
PPC_FUNC_IMPL(__imp__sub_82A9CE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9CE08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r4,184
	ctx.r30.s64 = ctx.r4.s64 + 184;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82e99ed0
	ctx.lr = 0x82A9CE28;
	sub_82E99ED0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,137
	ctx.r10.s64 = 137;
	// addi r11,r11,4936
	ctx.r11.s64 = ctx.r11.s64 + 4936;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01860
	ctx.lr = 0x82A9CE4C;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A9CE60;
	sub_82E015D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9ce80
	if (ctx.cr0.eq) goto loc_82A9CE80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e990e8
	ctx.lr = 0x82A9CE78;
	sub_82E990E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9ce84
	goto loc_82A9CE84;
loc_82A9CE80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9CE84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9cd58
	ctx.lr = 0x82A9CE8C;
	sub_82A9CD58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9CE98"))) PPC_WEAK_FUNC(sub_82A9CE98);
PPC_FUNC_IMPL(__imp__sub_82A9CE98) {
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
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A9CEBC:
	// lvx128 v63,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a9cebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A9CEBC;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x833a1390
	ctx.lr = 0x82A9CEDC;
	sub_833A1390(ctx, base);
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

__attribute__((alias("__imp__sub_82A9CEF4"))) PPC_WEAK_FUNC(sub_82A9CEF4);
PPC_FUNC_IMPL(__imp__sub_82A9CEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9CEF8"))) PPC_WEAK_FUNC(sub_82A9CEF8);
PPC_FUNC_IMPL(__imp__sub_82A9CEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9CF00;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3184
	ctx.r4.s64 = ctx.r11.s64 + 3184;
	// bl 0x82e02670
	ctx.lr = 0x82A9CF24;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,3176
	ctx.r4.s64 = ctx.r11.s64 + 3176;
	// bl 0x82e02670
	ctx.lr = 0x82A9CF34;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r30,r11,5308
	ctx.r30.s64 = ctx.r11.s64 + 5308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9CF48;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,5288
	ctx.r29.s64 = ctx.r11.s64 + 5288;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9CF5C;
	sub_82E02670(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82af0930
	ctx.lr = 0x82A9CF70;
	sub_82AF0930(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82af1d28
	ctx.lr = 0x82A9CF84;
	sub_82AF1D28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9cf9c
	if (ctx.cr6.eq) goto loc_82A9CF9C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A9CF9C;
	sub_82480108(ctx, base);
loc_82A9CF9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9CFA4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9CFAC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9CFB4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9CFBC;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e02670
	ctx.lr = 0x82A9CFC8;
	sub_82E02670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e02670
	ctx.lr = 0x82A9CFD4;
	sub_82E02670(ctx, base);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82af0930
	ctx.lr = 0x82A9CFE8;
	sub_82AF0930(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9d000
	if (ctx.cr6.eq) goto loc_82A9D000;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A9D000;
	sub_82480108(ctx, base);
loc_82A9D000:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D008;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D010;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5272
	ctx.r4.s64 = ctx.r11.s64 + 5272;
	// bl 0x82e02670
	ctx.lr = 0x82A9D020;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,5256
	ctx.r4.s64 = ctx.r11.s64 + 5256;
	// bl 0x82e02670
	ctx.lr = 0x82A9D030;
	sub_82E02670(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-11556
	ctx.r5.s64 = ctx.r11.s64 + -11556;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ae3c70
	ctx.lr = 0x82A9D044;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A9D058;
	sub_82AE3920(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D060;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8259b670
	ctx.lr = 0x82A9D068;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D070;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D078;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,5228
	ctx.r4.s64 = ctx.r11.s64 + 5228;
	// bl 0x82e02670
	ctx.lr = 0x82A9D088;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5212
	ctx.r4.s64 = ctx.r11.s64 + 5212;
	// bl 0x82e02670
	ctx.lr = 0x82A9D098;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-20878
	ctx.r5.s64 = ctx.r11.s64 + -20878;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ae3c70
	ctx.lr = 0x82A9D0AC;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A9D0C0;
	sub_82AE3920(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D0C8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8259b670
	ctx.lr = 0x82A9D0D0;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D0D8;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D0E0;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,5200
	ctx.r4.s64 = ctx.r11.s64 + 5200;
	// bl 0x82e02670
	ctx.lr = 0x82A9D0F0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5184
	ctx.r4.s64 = ctx.r11.s64 + 5184;
	// bl 0x82e02670
	ctx.lr = 0x82A9D100;
	sub_82E02670(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-20877
	ctx.r5.s64 = ctx.r11.s64 + -20877;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ae3c70
	ctx.lr = 0x82A9D114;
	sub_82AE3C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3920
	ctx.lr = 0x82A9D128;
	sub_82AE3920(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D130;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8259b670
	ctx.lr = 0x82A9D138;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D140;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D148;
	sub_82E01BF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,13516
	ctx.r4.s64 = ctx.r11.s64 + 13516;
	// bl 0x82e02670
	ctx.lr = 0x82A9D158;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5160
	ctx.r4.s64 = ctx.r11.s64 + 5160;
	// bl 0x82e02670
	ctx.lr = 0x82A9D168;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f31,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r8,-11552
	ctx.r5.s64 = ctx.r8.s64 + -11552;
	// lfs f30,-31768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31768);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lfs f29,-4128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4128);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9D1A0;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9D1B4;
	sub_82AE2818(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8259b670
	ctx.lr = 0x82A9D1BC;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D1C4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D1CC;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4704
	ctx.r4.s64 = ctx.r11.s64 + 4704;
	// bl 0x82e02670
	ctx.lr = 0x82A9D1DC;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5152
	ctx.r4.s64 = ctx.r11.s64 + 5152;
	// bl 0x82e02670
	ctx.lr = 0x82A9D1EC;
	sub_82E02670(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r5,r10,-11548
	ctx.r5.s64 = ctx.r10.s64 + -11548;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f30,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9D214;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9D228;
	sub_82AE2818(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x8259b670
	ctx.lr = 0x82A9D230;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D238;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D240;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,5124
	ctx.r4.s64 = ctx.r11.s64 + 5124;
	// bl 0x82e02670
	ctx.lr = 0x82A9D250;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5108
	ctx.r4.s64 = ctx.r11.s64 + 5108;
	// bl 0x82e02670
	ctx.lr = 0x82A9D260;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r5,r10,-11544
	ctx.r5.s64 = ctx.r10.s64 + -11544;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f29,4140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4140);
	ctx.f29.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82aebec8
	ctx.lr = 0x82A9D288;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9D29C;
	sub_82AE2818(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x8259b670
	ctx.lr = 0x82A9D2A4;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D2AC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D2B4;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,5080
	ctx.r4.s64 = ctx.r11.s64 + 5080;
	// bl 0x82e02670
	ctx.lr = 0x82A9D2C4;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5064
	ctx.r4.s64 = ctx.r11.s64 + 5064;
	// bl 0x82e02670
	ctx.lr = 0x82A9D2D4;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r5,r10,-11540
	ctx.r5.s64 = ctx.r10.s64 + -11540;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f1,-1896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1896);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82aebec8
	ctx.lr = 0x82A9D2F8;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9D30C;
	sub_82AE2818(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x8259b670
	ctx.lr = 0x82A9D314;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D31C;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D324;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,5040
	ctx.r4.s64 = ctx.r11.s64 + 5040;
	// bl 0x82e02670
	ctx.lr = 0x82A9D334;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5028
	ctx.r4.s64 = ctx.r11.s64 + 5028;
	// bl 0x82e02670
	ctx.lr = 0x82A9D344;
	sub_82E02670(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r9,-11536
	ctx.r5.s64 = ctx.r9.s64 + -11536;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f3,-4124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16428);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82aebec8
	ctx.lr = 0x82A9D36C;
	sub_82AEBEC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae2818
	ctx.lr = 0x82A9D380;
	sub_82AE2818(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x8259b670
	ctx.lr = 0x82A9D388;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D390;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D398;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af1908
	ctx.lr = 0x82A9D3A0;
	sub_82AF1908(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9D3B4"))) PPC_WEAK_FUNC(sub_82A9D3B4);
PPC_FUNC_IMPL(__imp__sub_82A9D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9D3B8"))) PPC_WEAK_FUNC(sub_82A9D3B8);
PPC_FUNC_IMPL(__imp__sub_82A9D3B8) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82ee9318
	ctx.lr = 0x82A9D3F0;
	sub_82EE9318(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// bl 0x82ee9318
	ctx.lr = 0x82A9D3FC;
	sub_82EE9318(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// bl 0x82a9ce98
	ctx.lr = 0x82A9D408;
	sub_82A9CE98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9D424"))) PPC_WEAK_FUNC(sub_82A9D424);
PPC_FUNC_IMPL(__imp__sub_82A9D424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9D428"))) PPC_WEAK_FUNC(sub_82A9D428);
PPC_FUNC_IMPL(__imp__sub_82A9D428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9D430;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,-20877(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20877);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a9d544
	if (!ctx.cr6.eq) goto loc_82A9D544;
	// addi r4,r3,192
	ctx.r4.s64 = ctx.r3.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9d3b8
	ctx.lr = 0x82A9D464;
	sub_82A9D3B8(ctx, base);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9cc18
	ctx.lr = 0x82A9D470;
	sub_82E9CC18(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r8,32
	ctx.r8.s64 = 32;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// bl 0x82a9c9d8
	ctx.lr = 0x82A9D4B8;
	sub_82A9C9D8(ctx, base);
	// addi r11,r30,560
	ctx.r11.s64 = ctx.r30.s64 + 560;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,576(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// lfs f0,-11548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// bl 0x82a24578
	ctx.lr = 0x82A9D4E4;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9d4f8
	if (!ctx.cr6.eq) goto loc_82A9D4F8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9D4F8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a1f288
	ctx.lr = 0x82A9D500;
	sub_82A1F288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x82a9d514
	if (!ctx.cr6.eq) goto loc_82A9D514;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9D514:
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// lfs f1,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-31878
	ctx.r10.s64 = -2089156608;
	// addi r7,r11,-14992
	ctx.r7.s64 = ctx.r11.s64 + -14992;
	// addi r6,r10,-24720
	ctx.r6.s64 = ctx.r10.s64 + -24720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ccb50
	ctx.lr = 0x82A9D530;
	sub_831CCB50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82A9D538;
	sub_82E01548(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x82A9D540;
	sub_82E01548(ctx, base);
	// b 0x82a9d74c
	goto loc_82A9D74C;
loc_82A9D544:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r11,18608
	ctx.r29.s64 = ctx.r11.s64 + 18608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e02670
	ctx.lr = 0x82A9D558;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a24578
	ctx.lr = 0x82A9D564;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9d578
	if (!ctx.cr6.eq) goto loc_82A9D578;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9D578:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a20d58
	ctx.lr = 0x82A9D584;
	sub_82A20D58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a9d598
	if (!ctx.cr6.eq) goto loc_82A9D598;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9D598:
	// bl 0x82a3c2e0
	ctx.lr = 0x82A9D59C;
	sub_82A3C2E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ee9318
	ctx.lr = 0x82A9D5A8;
	sub_82EE9318(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e01548
	ctx.lr = 0x82A9D5B0;
	sub_82E01548(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e01548
	ctx.lr = 0x82A9D5B8;
	sub_82E01548(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D5C0;
	sub_82E01BF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e02670
	ctx.lr = 0x82A9D5CC;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a24578
	ctx.lr = 0x82A9D5D8;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9d5ec
	if (!ctx.cr6.eq) goto loc_82A9D5EC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9D5EC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a20d58
	ctx.lr = 0x82A9D5F8;
	sub_82A20D58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a9d60c
	if (!ctx.cr6.eq) goto loc_82A9D60C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9D60C:
	// bl 0x82a3c0a8
	ctx.lr = 0x82A9D610;
	sub_82A3C0A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82ee9318
	ctx.lr = 0x82A9D61C;
	sub_82EE9318(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e01548
	ctx.lr = 0x82A9D624;
	sub_82E01548(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e01548
	ctx.lr = 0x82A9D62C;
	sub_82E01548(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D634;
	sub_82E01BF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e02670
	ctx.lr = 0x82A9D640;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a24578
	ctx.lr = 0x82A9D64C;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9d660
	if (!ctx.cr6.eq) goto loc_82A9D660;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9D660:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a20d58
	ctx.lr = 0x82A9D66C;
	sub_82A20D58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a9d680
	if (!ctx.cr6.eq) goto loc_82A9D680;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9D680:
	// bl 0x82a3c1f0
	ctx.lr = 0x82A9D684;
	sub_82A3C1F0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e01548
	ctx.lr = 0x82A9D690;
	sub_82E01548(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e01548
	ctx.lr = 0x82A9D698;
	sub_82E01548(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D6A0;
	sub_82E01BF0(ctx, base);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9cc18
	ctx.lr = 0x82A9D6AC;
	sub_82E9CC18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x82a9d3b8
	ctx.lr = 0x82A9D6B8;
	sub_82A9D3B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e02670
	ctx.lr = 0x82A9D6C4;
	sub_82E02670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a24578
	ctx.lr = 0x82A9D6D0;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9d6e4
	if (!ctx.cr6.eq) goto loc_82A9D6E4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9D6E4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82a20d58
	ctx.lr = 0x82A9D6F0;
	sub_82A20D58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82a9d704
	if (!ctx.cr6.eq) goto loc_82A9D704;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9D704:
	// bl 0x82a3c0f8
	ctx.lr = 0x82A9D708;
	sub_82A3C0F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e01548
	ctx.lr = 0x82A9D71C;
	sub_82E01548(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e01548
	ctx.lr = 0x82A9D724;
	sub_82E01548(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9D72C;
	sub_82E01BF0(ctx, base);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r11,r30,560
	ctx.r11.s64 = ctx.r30.s64 + 560;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-11548(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,576(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 576, temp.u32);
loc_82A9D74C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9D758"))) PPC_WEAK_FUNC(sub_82A9D758);
PPC_FUNC_IMPL(__imp__sub_82A9D758) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9D784;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9d7b0
	if (ctx.cr0.eq) goto loc_82A9D7B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4824
	ctx.r9.s64 = ctx.r11.s64 + 4824;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9d7b4
	goto loc_82A9D7B4;
loc_82A9D7B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9D7B4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9d7f8
	if (!ctx.cr6.eq) goto loc_82A9D7F8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9d7d8
	if (ctx.cr6.eq) goto loc_82A9D7D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbae8
	ctx.lr = 0x82A9D7D0;
	sub_82BCBAE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82A9D7D8;
	sub_82E01568(ctx, base);
loc_82A9D7D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9D7F8;
	sub_82C10E98(ctx, base);
loc_82A9D7F8:
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

__attribute__((alias("__imp__sub_82A9D814"))) PPC_WEAK_FUNC(sub_82A9D814);
PPC_FUNC_IMPL(__imp__sub_82A9D814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9D818"))) PPC_WEAK_FUNC(sub_82A9D818);
PPC_FUNC_IMPL(__imp__sub_82A9D818) {
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
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a24578
	ctx.lr = 0x82A9D83C;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9d850
	if (!ctx.cr6.eq) goto loc_82A9D850;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9D850:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a1f2f0
	ctx.lr = 0x82A9D858;
	sub_82A1F2F0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82e01548
	ctx.lr = 0x82A9D868;
	sub_82E01548(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82a9d958
	if (!ctx.cr0.eq) goto loc_82A9D958;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lbz r11,-11556(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -11556);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a9d8a4
	if (!ctx.cr0.eq) goto loc_82A9D8A4;
	// lbz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 596);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a9d958
	if (!ctx.cr0.eq) goto loc_82A9D958;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82e9d300
	ctx.lr = 0x82A9D898;
	sub_82E9D300(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r11.u8);
	// b 0x82a9d958
	goto loc_82A9D958;
loc_82A9D8A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// stb r11,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// lfs f1,-11544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e99598
	ctx.lr = 0x82A9D8C4;
	sub_82E99598(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f1,-11540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e99598
	ctx.lr = 0x82A9D8D8;
	sub_82E99598(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f1,-11536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11536);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e993a8
	ctx.lr = 0x82A9D8E8;
	sub_82E993A8(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lbz r11,-20878(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20878);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a9d900
	if (!ctx.cr6.eq) goto loc_82A9D900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9ccf8
	ctx.lr = 0x82A9D900;
	sub_82A9CCF8(ctx, base);
loc_82A9D900:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e9c9a8
	ctx.lr = 0x82A9D908;
	sub_82E9C9A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9cce0
	ctx.lr = 0x82A9D910;
	sub_82E9CCE0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f1,592(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,12452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a9d938
	if (ctx.cr6.gt) goto loc_82A9D938;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lfs f1,-11552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11552);
	ctx.f1.f64 = double(temp.f32);
loc_82A9D938:
	// bl 0x82a9d428
	ctx.lr = 0x82A9D93C;
	sub_82A9D428(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82e9d040
	ctx.lr = 0x82A9D94C;
	sub_82E9D040(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82e9cfe0
	ctx.lr = 0x82A9D958;
	sub_82E9CFE0(ctx, base);
loc_82A9D958:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
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

__attribute__((alias("__imp__sub_82A9D970"))) PPC_WEAK_FUNC(sub_82A9D970);
PPC_FUNC_IMPL(__imp__sub_82A9D970) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9d758
	ctx.lr = 0x82A9D998;
	sub_82A9D758(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9D9A8;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9D9C4"))) PPC_WEAK_FUNC(sub_82A9D9C4);
PPC_FUNC_IMPL(__imp__sub_82A9D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9D9C8"))) PPC_WEAK_FUNC(sub_82A9D9C8);
PPC_FUNC_IMPL(__imp__sub_82A9D9C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// bl 0x82e03d28
	ctx.lr = 0x82A9D9E8;
	sub_82E03D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a267f8
	ctx.lr = 0x82A9D9F0;
	sub_82A267F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,4884
	ctx.r11.s64 = ctx.r11.s64 + 4884;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// addi r9,r9,4936
	ctx.r9.s64 = ctx.r9.s64 + 4936;
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A9DA28;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A9DA3C;
	sub_82E015D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9da54
	if (ctx.cr0.eq) goto loc_82A9DA54;
	// bl 0x82e9d1f0
	ctx.lr = 0x82A9DA4C;
	sub_82E9D1F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9da58
	goto loc_82A9DA58;
loc_82A9DA54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A9DA58:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82a9d970
	ctx.lr = 0x82A9DA60;
	sub_82A9D970(ctx, base);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// bl 0x82e9c9a8
	ctx.lr = 0x82A9DA74;
	sub_82E9C9A8(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82e9cce0
	ctx.lr = 0x82A9DA7C;
	sub_82E9CCE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r7,2048
	ctx.r7.s64 = 2048;
	// lfs f0,2780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2780);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// lfs f3,-1896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1896);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-18508(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18508);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,5324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e9a478
	ctx.lr = 0x82A9DAAC;
	sub_82E9A478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13550
	ctx.lr = 0x82A9DAB8;
	sub_82A13550(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9dac8
	if (ctx.cr6.eq) goto loc_82A9DAC8;
	// bl 0x82480108
	ctx.lr = 0x82A9DAC8;
	sub_82480108(ctx, base);
loc_82A9DAC8:
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

__attribute__((alias("__imp__sub_82A9DAE4"))) PPC_WEAK_FUNC(sub_82A9DAE4);
PPC_FUNC_IMPL(__imp__sub_82A9DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DAE8"))) PPC_WEAK_FUNC(sub_82A9DAE8);
PPC_FUNC_IMPL(__imp__sub_82A9DAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9DAF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e01a78
	ctx.lr = 0x82A9DB00;
	sub_82E01A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e01a78
	ctx.lr = 0x82A9DB0C;
	sub_82E01A78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82a9db34
	if (ctx.cr6.lt) goto loc_82A9DB34;
	// subf r4,r3,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e03450
	ctx.lr = 0x82A9DB28;
	sub_82E03450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq 0x82a9db38
	if (ctx.cr0.eq) goto loc_82A9DB38;
loc_82A9DB34:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A9DB38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9DB40;
	sub_82E01BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9DB48;
	sub_82E01BF0(ctx, base);
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9DB54"))) PPC_WEAK_FUNC(sub_82A9DB54);
PPC_FUNC_IMPL(__imp__sub_82A9DB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DB58"))) PPC_WEAK_FUNC(sub_82A9DB58);
PPC_FUNC_IMPL(__imp__sub_82A9DB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A9DB6C"))) PPC_WEAK_FUNC(sub_82A9DB6C);
PPC_FUNC_IMPL(__imp__sub_82A9DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DB70"))) PPC_WEAK_FUNC(sub_82A9DB70);
PPC_FUNC_IMPL(__imp__sub_82A9DB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a280e8
	sub_82A280E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9DB7C"))) PPC_WEAK_FUNC(sub_82A9DB7C);
PPC_FUNC_IMPL(__imp__sub_82A9DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DB80"))) PPC_WEAK_FUNC(sub_82A9DB80);
PPC_FUNC_IMPL(__imp__sub_82A9DB80) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5332
	ctx.r11.s64 = ctx.r11.s64 + 5332;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a9dbac
	if (ctx.cr0.eq) goto loc_82A9DBAC;
	// bl 0x82e01568
	ctx.lr = 0x82A9DBAC;
	sub_82E01568(ctx, base);
loc_82A9DBAC:
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

__attribute__((alias("__imp__sub_82A9DBC4"))) PPC_WEAK_FUNC(sub_82A9DBC4);
PPC_FUNC_IMPL(__imp__sub_82A9DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DBC8"))) PPC_WEAK_FUNC(sub_82A9DBC8);
PPC_FUNC_IMPL(__imp__sub_82A9DBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9DBD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi. r30,r5,24
	ctx.r30.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a9dc20
	if (ctx.cr0.eq) goto loc_82A9DC20;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-18524(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18524);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9DC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9dc20
	if (ctx.cr0.eq) goto loc_82A9DC20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = ctx.r29.s64 + -40;
	// bl 0x82a9db58
	ctx.lr = 0x82A9DC18;
	sub_82A9DB58(ctx, base);
loc_82A9DC18:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a9dc6c
	goto loc_82A9DC6C;
loc_82A9DC20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a9dc5c
	if (ctx.cr6.eq) goto loc_82A9DC5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-18520(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9DC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9dc5c
	if (ctx.cr0.eq) goto loc_82A9DC5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = ctx.r29.s64 + -40;
	// bl 0x82a9db70
	ctx.lr = 0x82A9DC58;
	sub_82A9DB70(ctx, base);
	// b 0x82a9dc18
	goto loc_82A9DC18;
loc_82A9DC5C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a269a8
	ctx.lr = 0x82A9DC6C;
	sub_82A269A8(ctx, base);
loc_82A9DC6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9DC74"))) PPC_WEAK_FUNC(sub_82A9DC74);
PPC_FUNC_IMPL(__imp__sub_82A9DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DC78"))) PPC_WEAK_FUNC(sub_82A9DC78);
PPC_FUNC_IMPL(__imp__sub_82A9DC78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9DCA4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9dcd0
	if (ctx.cr0.eq) goto loc_82A9DCD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,5344
	ctx.r9.s64 = ctx.r11.s64 + 5344;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9dcd4
	goto loc_82A9DCD4;
loc_82A9DCD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9DCD4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9dd20
	if (!ctx.cr6.eq) goto loc_82A9DD20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9dd00
	if (ctx.cr6.eq) goto loc_82A9DD00;
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
	ctx.lr = 0x82A9DD00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9DD00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9DD20;
	sub_82C10E98(ctx, base);
loc_82A9DD20:
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

__attribute__((alias("__imp__sub_82A9DD3C"))) PPC_WEAK_FUNC(sub_82A9DD3C);
PPC_FUNC_IMPL(__imp__sub_82A9DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DD40"))) PPC_WEAK_FUNC(sub_82A9DD40);
PPC_FUNC_IMPL(__imp__sub_82A9DD40) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9DD6C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9dd98
	if (ctx.cr0.eq) goto loc_82A9DD98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,5364
	ctx.r9.s64 = ctx.r11.s64 + 5364;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9dd9c
	goto loc_82A9DD9C;
loc_82A9DD98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9DD9C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9dde8
	if (!ctx.cr6.eq) goto loc_82A9DDE8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9ddc8
	if (ctx.cr6.eq) goto loc_82A9DDC8;
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
	ctx.lr = 0x82A9DDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9DDC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9DDE8;
	sub_82C10E98(ctx, base);
loc_82A9DDE8:
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

__attribute__((alias("__imp__sub_82A9DE04"))) PPC_WEAK_FUNC(sub_82A9DE04);
PPC_FUNC_IMPL(__imp__sub_82A9DE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DE08"))) PPC_WEAK_FUNC(sub_82A9DE08);
PPC_FUNC_IMPL(__imp__sub_82A9DE08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9DE34;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9de60
	if (ctx.cr0.eq) goto loc_82A9DE60;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9de64
	goto loc_82A9DE64;
loc_82A9DE60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9DE64:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9deb0
	if (!ctx.cr6.eq) goto loc_82A9DEB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9de90
	if (ctx.cr6.eq) goto loc_82A9DE90;
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
	ctx.lr = 0x82A9DE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9DE90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9DEB0;
	sub_82C10E98(ctx, base);
loc_82A9DEB0:
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

__attribute__((alias("__imp__sub_82A9DECC"))) PPC_WEAK_FUNC(sub_82A9DECC);
PPC_FUNC_IMPL(__imp__sub_82A9DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DED0"))) PPC_WEAK_FUNC(sub_82A9DED0);
PPC_FUNC_IMPL(__imp__sub_82A9DED0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9DEFC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9df28
	if (ctx.cr0.eq) goto loc_82A9DF28;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,5404
	ctx.r9.s64 = ctx.r11.s64 + 5404;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9df2c
	goto loc_82A9DF2C;
loc_82A9DF28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9DF2C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9df78
	if (!ctx.cr6.eq) goto loc_82A9DF78;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9df58
	if (ctx.cr6.eq) goto loc_82A9DF58;
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
	ctx.lr = 0x82A9DF58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9DF58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9DF78;
	sub_82C10E98(ctx, base);
loc_82A9DF78:
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

__attribute__((alias("__imp__sub_82A9DF94"))) PPC_WEAK_FUNC(sub_82A9DF94);
PPC_FUNC_IMPL(__imp__sub_82A9DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9DF98"))) PPC_WEAK_FUNC(sub_82A9DF98);
PPC_FUNC_IMPL(__imp__sub_82A9DF98) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9DFC4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9dff0
	if (ctx.cr0.eq) goto loc_82A9DFF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,5424
	ctx.r9.s64 = ctx.r11.s64 + 5424;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9dff4
	goto loc_82A9DFF4;
loc_82A9DFF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9DFF4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9e040
	if (!ctx.cr6.eq) goto loc_82A9E040;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9e020
	if (ctx.cr6.eq) goto loc_82A9E020;
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
	ctx.lr = 0x82A9E020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9E020:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9E040;
	sub_82C10E98(ctx, base);
loc_82A9E040:
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

__attribute__((alias("__imp__sub_82A9E05C"))) PPC_WEAK_FUNC(sub_82A9E05C);
PPC_FUNC_IMPL(__imp__sub_82A9E05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E060"))) PPC_WEAK_FUNC(sub_82A9E060);
PPC_FUNC_IMPL(__imp__sub_82A9E060) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9E08C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9e0b8
	if (ctx.cr0.eq) goto loc_82A9E0B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,5444
	ctx.r9.s64 = ctx.r11.s64 + 5444;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9e0bc
	goto loc_82A9E0BC;
loc_82A9E0B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9E0BC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9e108
	if (!ctx.cr6.eq) goto loc_82A9E108;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9e0e8
	if (ctx.cr6.eq) goto loc_82A9E0E8;
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
	ctx.lr = 0x82A9E0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9E0E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9E108;
	sub_82C10E98(ctx, base);
loc_82A9E108:
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

__attribute__((alias("__imp__sub_82A9E124"))) PPC_WEAK_FUNC(sub_82A9E124);
PPC_FUNC_IMPL(__imp__sub_82A9E124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E128"))) PPC_WEAK_FUNC(sub_82A9E128);
PPC_FUNC_IMPL(__imp__sub_82A9E128) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82e01570
	ctx.lr = 0x82A9E154;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9e180
	if (ctx.cr0.eq) goto loc_82A9E180;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,5464
	ctx.r9.s64 = ctx.r11.s64 + 5464;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82a9e184
	goto loc_82A9E184;
loc_82A9E180:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A9E184:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a9e1d0
	if (!ctx.cr6.eq) goto loc_82A9E1D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a9e1b0
	if (ctx.cr6.eq) goto loc_82A9E1B0;
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
	ctx.lr = 0x82A9E1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9E1B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r10,r10,2036
	ctx.r10.s64 = ctx.r10.s64 + 2036;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82c10e98
	ctx.lr = 0x82A9E1D0;
	sub_82C10E98(ctx, base);
loc_82A9E1D0:
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

__attribute__((alias("__imp__sub_82A9E1EC"))) PPC_WEAK_FUNC(sub_82A9E1EC);
PPC_FUNC_IMPL(__imp__sub_82A9E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E1F0"))) PPC_WEAK_FUNC(sub_82A9E1F0);
PPC_FUNC_IMPL(__imp__sub_82A9E1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9E1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r11,-14992
	ctx.r5.s64 = ctx.r11.s64 + -14992;
	// addi r4,r10,8272
	ctx.r4.s64 = ctx.r10.s64 + 8272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a28320
	ctx.lr = 0x82A9E21C;
	sub_82A28320(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,5516
	ctx.r11.s64 = ctx.r11.s64 + 5516;
	// addi r10,r10,5496
	ctx.r10.s64 = ctx.r10.s64 + 5496;
	// addi r9,r9,5484
	ctx.r9.s64 = ctx.r9.s64 + 5484;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r30,r31,252
	ctx.r30.s64 = ctx.r31.s64 + 252;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e01a68
	ctx.lr = 0x82A9E24C;
	sub_82E01A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x82e02378
	ctx.lr = 0x82A9E284;
	sub_82E02378(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9E29C"))) PPC_WEAK_FUNC(sub_82A9E29C);
PPC_FUNC_IMPL(__imp__sub_82A9E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E2A0"))) PPC_WEAK_FUNC(sub_82A9E2A0);
PPC_FUNC_IMPL(__imp__sub_82A9E2A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 248);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r4,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r4.u8);
	// b 0x82a26d50
	sub_82A26D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9E2B8"))) PPC_WEAK_FUNC(sub_82A9E2B8);
PPC_FUNC_IMPL(__imp__sub_82A9E2B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9E2BC"))) PPC_WEAK_FUNC(sub_82A9E2BC);
PPC_FUNC_IMPL(__imp__sub_82A9E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E2C0"))) PPC_WEAK_FUNC(sub_82A9E2C0);
PPC_FUNC_IMPL(__imp__sub_82A9E2C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82a9e748
	sub_82A9E748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9E2C8"))) PPC_WEAK_FUNC(sub_82A9E2C8);
PPC_FUNC_IMPL(__imp__sub_82A9E2C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-176
	ctx.r3.s64 = ctx.r3.s64 + -176;
	// b 0x82a9e748
	sub_82A9E748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9E2D0"))) PPC_WEAK_FUNC(sub_82A9E2D0);
PPC_FUNC_IMPL(__imp__sub_82A9E2D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a262f8
	ctx.lr = 0x82A9E2F0;
	sub_82A262F8(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e328
	if (ctx.cr6.eq) goto loc_82A9E328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9E30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x82A9E31C;
	sub_82E9FA18(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27628
	ctx.lr = 0x82A9E328;
	sub_82A27628(ctx, base);
loc_82A9E328:
	// lbz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 248);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a9e440
	if (ctx.cr0.eq) goto loc_82A9E440;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e348
	if (ctx.cr6.eq) goto loc_82A9E348;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ee1e50
	ctx.lr = 0x82A9E348;
	sub_82EE1E50(ctx, base);
loc_82A9E348:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e35c
	if (ctx.cr6.eq) goto loc_82A9E35C;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e6cd98
	ctx.lr = 0x82A9E35C;
	sub_82E6CD98(ctx, base);
loc_82A9E35C:
	// lwz r30,260(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a9e440
	if (ctx.cr6.eq) goto loc_82A9E440;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9e440
	if (ctx.cr6.eq) goto loc_82A9E440;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v62,v60,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82a9e408
	if (!ctx.cr6.gt) goto loc_82A9E408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e35bf8
	ctx.lr = 0x82A9E3C0;
	sub_82E35BF8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e3f8
	if (ctx.cr6.eq) goto loc_82A9E3F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9E3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x82A9E3EC;
	sub_82E9FA18(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82A9E3F8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e408
	if (ctx.cr6.eq) goto loc_82A9E408;
	// bl 0x82480108
	ctx.lr = 0x82A9E408;
	sub_82480108(ctx, base);
loc_82A9E408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27070
	ctx.lr = 0x82A9E410;
	sub_82A27070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27070
	ctx.lr = 0x82A9E418;
	sub_82A27070(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e35a30
	ctx.lr = 0x82A9E440;
	sub_82E35A30(ctx, base);
loc_82A9E440:
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

__attribute__((alias("__imp__sub_82A9E458"))) PPC_WEAK_FUNC(sub_82A9E458);
PPC_FUNC_IMPL(__imp__sub_82A9E458) {
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
	// lwz r3,296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e47c
	if (ctx.cr6.eq) goto loc_82A9E47C;
	// bl 0x82480108
	ctx.lr = 0x82A9E47C;
	sub_82480108(ctx, base);
loc_82A9E47C:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e48c
	if (ctx.cr6.eq) goto loc_82A9E48C;
	// bl 0x82480108
	ctx.lr = 0x82A9E48C;
	sub_82480108(ctx, base);
loc_82A9E48C:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e49c
	if (ctx.cr6.eq) goto loc_82A9E49C;
	// bl 0x82480108
	ctx.lr = 0x82A9E49C;
	sub_82480108(ctx, base);
loc_82A9E49C:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e4ac
	if (ctx.cr6.eq) goto loc_82A9E4AC;
	// bl 0x82480108
	ctx.lr = 0x82A9E4AC;
	sub_82480108(ctx, base);
loc_82A9E4AC:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e4bc
	if (ctx.cr6.eq) goto loc_82A9E4BC;
	// bl 0x82480108
	ctx.lr = 0x82A9E4BC;
	sub_82480108(ctx, base);
loc_82A9E4BC:
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9E4C4;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28208
	ctx.lr = 0x82A9E4CC;
	sub_82A28208(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E4E0"))) PPC_WEAK_FUNC(sub_82A9E4E0);
PPC_FUNC_IMPL(__imp__sub_82A9E4E0) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9dc78
	ctx.lr = 0x82A9E508;
	sub_82A9DC78(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9E518;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E534"))) PPC_WEAK_FUNC(sub_82A9E534);
PPC_FUNC_IMPL(__imp__sub_82A9E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E538"))) PPC_WEAK_FUNC(sub_82A9E538);
PPC_FUNC_IMPL(__imp__sub_82A9E538) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9dd40
	ctx.lr = 0x82A9E560;
	sub_82A9DD40(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9E570;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E58C"))) PPC_WEAK_FUNC(sub_82A9E58C);
PPC_FUNC_IMPL(__imp__sub_82A9E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E590"))) PPC_WEAK_FUNC(sub_82A9E590);
PPC_FUNC_IMPL(__imp__sub_82A9E590) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9de08
	ctx.lr = 0x82A9E5B8;
	sub_82A9DE08(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9E5C8;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E5E4"))) PPC_WEAK_FUNC(sub_82A9E5E4);
PPC_FUNC_IMPL(__imp__sub_82A9E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E5E8"))) PPC_WEAK_FUNC(sub_82A9E5E8);
PPC_FUNC_IMPL(__imp__sub_82A9E5E8) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9ded0
	ctx.lr = 0x82A9E610;
	sub_82A9DED0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9E620;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E63C"))) PPC_WEAK_FUNC(sub_82A9E63C);
PPC_FUNC_IMPL(__imp__sub_82A9E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E640"))) PPC_WEAK_FUNC(sub_82A9E640);
PPC_FUNC_IMPL(__imp__sub_82A9E640) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9df98
	ctx.lr = 0x82A9E668;
	sub_82A9DF98(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9E678;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E694"))) PPC_WEAK_FUNC(sub_82A9E694);
PPC_FUNC_IMPL(__imp__sub_82A9E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E698"))) PPC_WEAK_FUNC(sub_82A9E698);
PPC_FUNC_IMPL(__imp__sub_82A9E698) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9e060
	ctx.lr = 0x82A9E6C0;
	sub_82A9E060(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9E6D0;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E6EC"))) PPC_WEAK_FUNC(sub_82A9E6EC);
PPC_FUNC_IMPL(__imp__sub_82A9E6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E6F0"))) PPC_WEAK_FUNC(sub_82A9E6F0);
PPC_FUNC_IMPL(__imp__sub_82A9E6F0) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a9e128
	ctx.lr = 0x82A9E718;
	sub_82A9E128(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82A9E728;
	sub_82C10E98(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E744"))) PPC_WEAK_FUNC(sub_82A9E744);
PPC_FUNC_IMPL(__imp__sub_82A9E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E748"))) PPC_WEAK_FUNC(sub_82A9E748);
PPC_FUNC_IMPL(__imp__sub_82A9E748) {
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
	// bl 0x82a9e458
	ctx.lr = 0x82A9E768;
	sub_82A9E458(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9e778
	if (ctx.cr0.eq) goto loc_82A9E778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82A9E778;
	sub_82E01698(ctx, base);
loc_82A9E778:
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

__attribute__((alias("__imp__sub_82A9E794"))) PPC_WEAK_FUNC(sub_82A9E794);
PPC_FUNC_IMPL(__imp__sub_82A9E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E798"))) PPC_WEAK_FUNC(sub_82A9E798);
PPC_FUNC_IMPL(__imp__sub_82A9E798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9E7A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a28460
	ctx.lr = 0x82A9E7B4;
	sub_82A28460(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,-19292
	ctx.r11.s64 = ctx.r11.s64 + -19292;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r11,r9,5896
	ctx.r11.s64 = ctx.r9.s64 + 5896;
	// addi r10,r10,5788
	ctx.r10.s64 = ctx.r10.s64 + 5788;
	// addi r9,r8,5884
	ctx.r9.s64 = ctx.r8.s64 + 5884;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r7,5708
	ctx.r10.s64 = ctx.r7.s64 + 5708;
	// addi r11,r6,5608
	ctx.r11.s64 = ctx.r6.s64 + 5608;
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82e01860
	ctx.lr = 0x82A9E820;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,300
	ctx.r3.s64 = 300;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9E834;
	sub_82E01688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9e850
	if (ctx.cr0.eq) goto loc_82A9E850;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a9e1f0
	ctx.lr = 0x82A9E848;
	sub_82A9E1F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9e854
	goto loc_82A9E854;
loc_82A9E850:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A9E854:
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82a9e590
	ctx.lr = 0x82A9E85C;
	sub_82A9E590(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9E864;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9E870"))) PPC_WEAK_FUNC(sub_82A9E870);
PPC_FUNC_IMPL(__imp__sub_82A9E870) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-176
	ctx.r3.s64 = ctx.r3.s64 + -176;
	// b 0x82a9e910
	sub_82A9E910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9E878"))) PPC_WEAK_FUNC(sub_82A9E878);
PPC_FUNC_IMPL(__imp__sub_82A9E878) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-248
	ctx.r3.s64 = ctx.r3.s64 + -248;
	// b 0x82a9e910
	sub_82A9E910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9E880"))) PPC_WEAK_FUNC(sub_82A9E880);
PPC_FUNC_IMPL(__imp__sub_82A9E880) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82a9e910
	sub_82A9E910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9E888"))) PPC_WEAK_FUNC(sub_82A9E888);
PPC_FUNC_IMPL(__imp__sub_82A9E888) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,5788
	ctx.r11.s64 = ctx.r11.s64 + 5788;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,5896
	ctx.r10.s64 = ctx.r10.s64 + 5896;
	// addi r9,r9,5884
	ctx.r9.s64 = ctx.r9.s64 + 5884;
	// addi r11,r8,5708
	ctx.r11.s64 = ctx.r8.s64 + 5708;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// addi r30,r3,248
	ctx.r30.s64 = ctx.r3.s64 + 248;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9e8e4
	if (ctx.cr6.eq) goto loc_82A9E8E4;
	// bl 0x82480108
	ctx.lr = 0x82A9E8E4;
	sub_82480108(ctx, base);
loc_82A9E8E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8280bda0
	ctx.lr = 0x82A9E8EC;
	sub_8280BDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28208
	ctx.lr = 0x82A9E8F4;
	sub_82A28208(ctx, base);
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

__attribute__((alias("__imp__sub_82A9E90C"))) PPC_WEAK_FUNC(sub_82A9E90C);
PPC_FUNC_IMPL(__imp__sub_82A9E90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E910"))) PPC_WEAK_FUNC(sub_82A9E910);
PPC_FUNC_IMPL(__imp__sub_82A9E910) {
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
	// bl 0x82a9e888
	ctx.lr = 0x82A9E930;
	sub_82A9E888(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9e940
	if (ctx.cr0.eq) goto loc_82A9E940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82A9E940;
	sub_82E01698(ctx, base);
loc_82A9E940:
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

__attribute__((alias("__imp__sub_82A9E95C"))) PPC_WEAK_FUNC(sub_82A9E95C);
PPC_FUNC_IMPL(__imp__sub_82A9E95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9E960"))) PPC_WEAK_FUNC(sub_82A9E960);
PPC_FUNC_IMPL(__imp__sub_82A9E960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x82A9E968;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,156
	ctx.r10.s64 = 156;
	// addi r11,r11,2128
	ctx.r11.s64 = ctx.r11.s64 + 2128;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e01860
	ctx.lr = 0x82A9E9A0;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9E9B4;
	sub_82E01688(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a9e9e4
	if (ctx.cr0.eq) goto loc_82A9E9E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82A9E9C8;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x825639c8
	ctx.lr = 0x82A9E9DC;
	sub_825639C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9e9e8
	goto loc_82A9E9E8;
loc_82A9E9E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9E9E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82644eb0
	ctx.lr = 0x82A9E9F0;
	sub_82644EB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9ea00
	if (ctx.cr0.eq) goto loc_82A9EA00;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9EA00;
	sub_82E01BF0(ctx, base);
loc_82A9EA00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9EA0C"))) PPC_WEAK_FUNC(sub_82A9EA0C);
PPC_FUNC_IMPL(__imp__sub_82A9EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9EA10"))) PPC_WEAK_FUNC(sub_82A9EA10);
PPC_FUNC_IMPL(__imp__sub_82A9EA10) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,156
	ctx.r10.s64 = 156;
	// addi r11,r11,2128
	ctx.r11.s64 = ctx.r11.s64 + 2128;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A9EA4C;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9EA60;
	sub_82E01688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9ea78
	if (ctx.cr0.eq) goto loc_82A9EA78;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x825655f0
	ctx.lr = 0x82A9EA70;
	sub_825655F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9ea7c
	goto loc_82A9EA7C;
loc_82A9EA78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9EA7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9e6f0
	ctx.lr = 0x82A9EA84;
	sub_82A9E6F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82A9EAA0"))) PPC_WEAK_FUNC(sub_82A9EAA0);
PPC_FUNC_IMPL(__imp__sub_82A9EAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9EAA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,156
	ctx.r10.s64 = 156;
	// addi r11,r11,2128
	ctx.r11.s64 = ctx.r11.s64 + 2128;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01860
	ctx.lr = 0x82A9EADC;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9EAF0;
	sub_82E01688(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a9eb1c
	if (ctx.cr0.eq) goto loc_82A9EB1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82A9EB04;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82563878
	ctx.lr = 0x82A9EB14;
	sub_82563878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9eb20
	goto loc_82A9EB20;
loc_82A9EB1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A9EB20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82644e58
	ctx.lr = 0x82A9EB28;
	sub_82644E58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9eb38
	if (ctx.cr0.eq) goto loc_82A9EB38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9EB38;
	sub_82E01BF0(ctx, base);
loc_82A9EB38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9EB44"))) PPC_WEAK_FUNC(sub_82A9EB44);
PPC_FUNC_IMPL(__imp__sub_82A9EB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9EB48"))) PPC_WEAK_FUNC(sub_82A9EB48);
PPC_FUNC_IMPL(__imp__sub_82A9EB48) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a9eb80
	if (ctx.cr6.eq) goto loc_82A9EB80;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e025d8
	ctx.lr = 0x82A9EB78;
	sub_82E025D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82A9EB80:
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

__attribute__((alias("__imp__sub_82A9EB98"))) PPC_WEAK_FUNC(sub_82A9EB98);
PPC_FUNC_IMPL(__imp__sub_82A9EB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9EBA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,5916
	ctx.r10.s64 = ctx.r10.s64 + 5916;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82a13550
	ctx.lr = 0x82A9EBD8;
	sub_82A13550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13550
	ctx.lr = 0x82A9EBE4;
	sub_82A13550(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9EBFC"))) PPC_WEAK_FUNC(sub_82A9EBFC);
PPC_FUNC_IMPL(__imp__sub_82A9EBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9EC00"))) PPC_WEAK_FUNC(sub_82A9EC00);
PPC_FUNC_IMPL(__imp__sub_82A9EC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9ec34
	if (ctx.cr0.eq) goto loc_82A9EC34;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a9ec38
	goto loc_82A9EC38;
loc_82A9EC34:
	// bl 0x82e0bda8
	ctx.lr = 0x82A9EC38;
	sub_82E0BDA8(ctx, base);
loc_82A9EC38:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9eca8
	if (ctx.cr0.eq) goto loc_82A9ECA8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a9ec64
	goto loc_82A9EC64;
loc_82A9EC58:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_82A9EC64:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a9ec58
	if (!ctx.cr6.lt) goto loc_82A9EC58;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f31,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9ec88
	if (ctx.cr0.eq) goto loc_82A9EC88;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a9ec8c
	goto loc_82A9EC8C;
loc_82A9EC88:
	// bl 0x82e0bda8
	ctx.lr = 0x82A9EC8C;
	sub_82E0BDA8(ctx, base);
loc_82A9EC8C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9eca8
	if (ctx.cr0.eq) goto loc_82A9ECA8;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82e6fe18
	ctx.lr = 0x82A9ECA8;
	sub_82E6FE18(ctx, base);
loc_82A9ECA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9ECC0"))) PPC_WEAK_FUNC(sub_82A9ECC0);
PPC_FUNC_IMPL(__imp__sub_82A9ECC0) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9ece4
	if (ctx.cr6.eq) goto loc_82A9ECE4;
	// bl 0x82480108
	ctx.lr = 0x82A9ECE4;
	sub_82480108(ctx, base);
loc_82A9ECE4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9ecf4
	if (ctx.cr6.eq) goto loc_82A9ECF4;
	// bl 0x82480108
	ctx.lr = 0x82A9ECF4;
	sub_82480108(ctx, base);
loc_82A9ECF4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,5332
	ctx.r11.s64 = ctx.r11.s64 + 5332;
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

__attribute__((alias("__imp__sub_82A9ED14"))) PPC_WEAK_FUNC(sub_82A9ED14);
PPC_FUNC_IMPL(__imp__sub_82A9ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9ED18"))) PPC_WEAK_FUNC(sub_82A9ED18);
PPC_FUNC_IMPL(__imp__sub_82A9ED18) {
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
	// bl 0x82a9ecc0
	ctx.lr = 0x82A9ED38;
	sub_82A9ECC0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9ed48
	if (ctx.cr0.eq) goto loc_82A9ED48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82A9ED48;
	sub_82E01568(ctx, base);
loc_82A9ED48:
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

__attribute__((alias("__imp__sub_82A9ED64"))) PPC_WEAK_FUNC(sub_82A9ED64);
PPC_FUNC_IMPL(__imp__sub_82A9ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9ED68"))) PPC_WEAK_FUNC(sub_82A9ED68);
PPC_FUNC_IMPL(__imp__sub_82A9ED68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9ED70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,5928
	ctx.r11.s64 = ctx.r11.s64 + 5928;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82a13550
	ctx.lr = 0x82A9EDB0;
	sub_82A13550(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a13550
	ctx.lr = 0x82A9EDBC;
	sub_82A13550(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9EDD8"))) PPC_WEAK_FUNC(sub_82A9EDD8);
PPC_FUNC_IMPL(__imp__sub_82A9EDD8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9ee10
	if (ctx.cr0.eq) goto loc_82A9EE10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a9ee14
	goto loc_82A9EE14;
loc_82A9EE10:
	// bl 0x82e0bda8
	ctx.lr = 0x82A9EE14;
	sub_82E0BDA8(ctx, base);
loc_82A9EE14:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9eed4
	if (ctx.cr0.eq) goto loc_82A9EED4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a9ee40
	goto loc_82A9EE40;
loc_82A9EE34:
	// lfs f13,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
loc_82A9EE40:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a9ee34
	if (!ctx.cr6.lt) goto loc_82A9EE34;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f31,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9ee64
	if (ctx.cr0.eq) goto loc_82A9EE64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a9ee68
	goto loc_82A9EE68;
loc_82A9EE64:
	// bl 0x82e0bda8
	ctx.lr = 0x82A9EE68;
	sub_82E0BDA8(ctx, base);
loc_82A9EE68:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9eed4
	if (ctx.cr0.eq) goto loc_82A9EED4;
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a9eebc
	if (!ctx.cr0.eq) goto loc_82A9EEBC;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r31,r11,-20848
	ctx.r31.s64 = ctx.r11.s64 + -20848;
	// lwz r11,-20844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a9eeac
	if (!ctx.cr0.eq) goto loc_82A9EEAC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r11,-20844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20844, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-4452
	ctx.r4.s64 = ctx.r9.s64 + -4452;
	// bl 0x82e038b0
	ctx.lr = 0x82A9EEAC;
	sub_82E038B0(ctx, base);
loc_82A9EEAC:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82e39908
	ctx.lr = 0x82A9EEBC;
	sub_82E39908(ctx, base);
loc_82A9EEBC:
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82e70860
	ctx.lr = 0x82A9EED4;
	sub_82E70860(ctx, base);
loc_82A9EED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A9EEF0"))) PPC_WEAK_FUNC(sub_82A9EEF0);
PPC_FUNC_IMPL(__imp__sub_82A9EEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x82A9EEF8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82a26f10
	ctx.lr = 0x82A9EF18;
	sub_82A26F10(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12964);
	// bl 0x82e02670
	ctx.lr = 0x82A9EF28;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a1f128
	ctx.lr = 0x82A9EF38;
	sub_82A1F128(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9EF40;
	sub_82E01BF0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,13020(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13020);
	// bl 0x82e02670
	ctx.lr = 0x82A9EF50;
	sub_82E02670(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f128
	ctx.lr = 0x82A9EF60;
	sub_82A1F128(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9EF68;
	sub_82E01BF0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// bne cr6,0x82a9ef78
	if (!ctx.cr6.eq) goto loc_82A9EF78;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82A9EF78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f138
	ctx.lr = 0x82A9EF80;
	sub_82A1F138(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a24300
	ctx.lr = 0x82A9EF8C;
	sub_82A24300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A9EF94;
	sub_82A0FB38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82a24300
	ctx.lr = 0x82A9EFA0;
	sub_82A24300(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a0fb38
	ctx.lr = 0x82A9EFA8;
	sub_82A0FB38(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a2d258
	ctx.lr = 0x82A9EFB0;
	sub_82A2D258(ctx, base);
	// bl 0x82a2daa8
	ctx.lr = 0x82A9EFB4;
	sub_82A2DAA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82e01548
	ctx.lr = 0x82A9EFC0;
	sub_82E01548(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e01548
	ctx.lr = 0x82A9EFC8;
	sub_82E01548(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a243a8
	ctx.lr = 0x82A9EFD0;
	sub_82A243A8(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// bl 0x82a27768
	ctx.lr = 0x82A9EFF0;
	sub_82A27768(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9F008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f018
	if (ctx.cr6.eq) goto loc_82A9F018;
	// bl 0x82480108
	ctx.lr = 0x82A9F018;
	sub_82480108(ctx, base);
loc_82A9F018:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82e58550
	ctx.lr = 0x82A9F024;
	sub_82E58550(ctx, base);
	// addi r28,r29,252
	ctx.r28.s64 = ctx.r29.s64 + 252;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e5c820
	ctx.lr = 0x82A9F03C;
	sub_82E5C820(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r11,12452
	ctx.r30.s64 = ctx.r11.s64 + 12452;
	// addi r24,r10,5944
	ctx.r24.s64 = ctx.r10.s64 + 5944;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9f158
	if (ctx.cr6.eq) goto loc_82A9F158;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a9f0c0
	if (ctx.cr6.eq) goto loc_82A9F0C0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ee8778
	ctx.lr = 0x82A9F070;
	sub_82EE8778(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r5,r11,8816
	ctx.r5.s64 = ctx.r11.s64 + 8816;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee9408
	ctx.lr = 0x82A9F084;
	sub_82EE9408(ctx, base);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v62,v61,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82a27020
	ctx.lr = 0x82A9F0C0;
	sub_82A27020(ctx, base);
loc_82A9F0C0:
	// li r11,173
	ctx.r11.s64 = 173;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01860
	ctx.lr = 0x82A9F0D8;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// li r3,172
	ctx.r3.s64 = 172;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9F0EC;
	sub_82E01688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9f104
	if (ctx.cr0.eq) goto loc_82A9F104;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e36cd8
	ctx.lr = 0x82A9F0FC;
	sub_82E36CD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9f108
	goto loc_82A9F108;
loc_82A9F104:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82A9F108:
	// addi r31,r29,260
	ctx.r31.s64 = ctx.r29.s64 + 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825559f0
	ctx.lr = 0x82A9F114;
	sub_825559F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,260(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x82a27768
	ctx.lr = 0x82A9F124;
	sub_82A27768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e35c38
	ctx.lr = 0x82A9F130;
	sub_82E35C38(ctx, base);
	// lwz r10,260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lhz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 144);
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// sth r9,144(r10)
	PPC_STORE_U16(ctx.r10.u32 + 144, ctx.r9.u16);
	// lwz r4,-23808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23808);
	// bl 0x82a25f40
	ctx.lr = 0x82A9F158;
	sub_82A25F40(ctx, base);
loc_82A9F158:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f168
	if (ctx.cr6.eq) goto loc_82A9F168;
	// bl 0x82480108
	ctx.lr = 0x82A9F168;
	sub_82480108(ctx, base);
loc_82A9F168:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82ee8198
	ctx.lr = 0x82A9F170;
	sub_82EE8198(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82e8ce60
	ctx.lr = 0x82A9F17C;
	sub_82E8CE60(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82ee80b8
	ctx.lr = 0x82A9F194;
	sub_82EE80B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a9f1c8
	if (ctx.cr6.eq) goto loc_82A9F1C8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// li r27,3
	ctx.r27.s64 = 3;
	// bl 0x82ee8128
	ctx.lr = 0x82A9F1B8;
	sub_82EE8128(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a9f1cc
	if (!ctx.cr6.eq) goto loc_82A9F1CC;
loc_82A9F1C8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A9F1CC:
	// rlwinm. r10,r27,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82a9f1ec
	if (ctx.cr0.eq) goto loc_82A9F1EC;
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// rlwinm r27,r27,0,31,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f1ec
	if (ctx.cr6.eq) goto loc_82A9F1EC;
	// bl 0x82480108
	ctx.lr = 0x82A9F1EC;
	sub_82480108(ctx, base);
loc_82A9F1EC:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9f208
	if (ctx.cr0.eq) goto loc_82A9F208;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r27,r27,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f208
	if (ctx.cr6.eq) goto loc_82A9F208;
	// bl 0x82480108
	ctx.lr = 0x82A9F208;
	sub_82480108(ctx, base);
loc_82A9F208:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9f730
	if (ctx.cr0.eq) goto loc_82A9F730;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// addi r4,r11,11072
	ctx.r4.s64 = ctx.r11.s64 + 11072;
	// bl 0x82e02670
	ctx.lr = 0x82A9F228;
	sub_82E02670(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e025d8
	ctx.lr = 0x82A9F238;
	sub_82E025D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a9dae8
	ctx.lr = 0x82A9F240;
	sub_82A9DAE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9f2e4
	if (ctx.cr0.eq) goto loc_82A9F2E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01a78
	ctx.lr = 0x82A9F250;
	sub_82E01A78(ctx, base);
	// addic. r31,r3,-5
	ctx.xer.ca = ctx.r3.u32 > 4;
	ctx.r31.s64 = ctx.r3.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a9f284
	if (ctx.cr0.eq) goto loc_82A9F284;
loc_82A9F258:
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01ca0
	ctx.lr = 0x82A9F264;
	sub_82E01CA0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82a9f284
	if (ctx.cr6.lt) goto loc_82A9F284;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82a9f284
	if (ctx.cr6.gt) goto loc_82A9F284;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a9f258
	if (!ctx.cr0.eq) goto loc_82A9F258;
loc_82A9F284:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A9F288:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01ca0
	ctx.lr = 0x82A9F294;
	sub_82E01CA0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82a9f2c0
	if (ctx.cr6.lt) goto loc_82A9F2C0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82a9f2c0
	if (ctx.cr6.gt) goto loc_82A9F2C0;
	// mulli r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 * 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
	// b 0x82a9f288
	goto loc_82A9F288;
loc_82A9F2C0:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16428);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82a9f3ac
	goto loc_82A9F3AC;
loc_82A9F2E4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,5936
	ctx.r4.s64 = ctx.r11.s64 + 5936;
	// bl 0x82e02670
	ctx.lr = 0x82A9F2F4;
	sub_82E02670(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e025d8
	ctx.lr = 0x82A9F304;
	sub_82E025D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a9dae8
	ctx.lr = 0x82A9F30C;
	sub_82A9DAE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9f3ac
	if (ctx.cr0.eq) goto loc_82A9F3AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01a78
	ctx.lr = 0x82A9F31C;
	sub_82E01A78(ctx, base);
	// addic. r31,r3,-3
	ctx.xer.ca = ctx.r3.u32 > 2;
	ctx.r31.s64 = ctx.r3.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a9f350
	if (ctx.cr0.eq) goto loc_82A9F350;
loc_82A9F324:
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01ca0
	ctx.lr = 0x82A9F330;
	sub_82E01CA0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82a9f350
	if (ctx.cr6.lt) goto loc_82A9F350;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82a9f350
	if (ctx.cr6.gt) goto loc_82A9F350;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a9f324
	if (!ctx.cr0.eq) goto loc_82A9F324;
loc_82A9F350:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A9F354:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01ca0
	ctx.lr = 0x82A9F360;
	sub_82E01CA0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82a9f38c
	if (ctx.cr6.lt) goto loc_82A9F38C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82a9f38c
	if (ctx.cr6.gt) goto loc_82A9F38C;
	// mulli r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 * 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
	// b 0x82a9f354
	goto loc_82A9F354;
loc_82A9F38C:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-4192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A9F3AC:
	// li r11,209
	ctx.r11.s64 = 209;
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01860
	ctx.lr = 0x82A9F3C4;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// li r3,352
	ctx.r3.s64 = 352;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9F3D8;
	sub_82E01688(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a9f420
	if (ctx.cr0.eq) goto loc_82A9F420;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// bl 0x82a24578
	ctx.lr = 0x82A9F3F0;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82a9f404
	if (!ctx.cr6.eq) goto loc_82A9F404;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82A9F404:
	// bl 0x82a1ee30
	ctx.lr = 0x82A9F408;
	sub_82A1EE30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ee11b8
	ctx.lr = 0x82A9F418;
	sub_82EE11B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9f424
	goto loc_82A9F424;
loc_82A9F420:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82A9F424:
	// addi r31,r29,268
	ctx.r31.s64 = ctx.r29.s64 + 268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82555a50
	ctx.lr = 0x82A9F430;
	sub_82555A50(ctx, base);
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9f440
	if (ctx.cr0.eq) goto loc_82A9F440;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82e01548
	ctx.lr = 0x82A9F440;
	sub_82E01548(ctx, base);
loc_82A9F440:
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82edc810
	ctx.lr = 0x82A9F450;
	sub_82EDC810(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82edaf98
	ctx.lr = 0x82A9F45C;
	sub_82EDAF98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82d46208
	ctx.lr = 0x82A9F468;
	sub_82D46208(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,21160
	ctx.r30.s64 = ctx.r11.s64 + 21160;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// bl 0x82e01bf8
	ctx.lr = 0x82A9F47C;
	sub_82E01BF8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// stfs f31,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stw r25,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r25.u32);
	// stb r25,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r25.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f13,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82A9F4B0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82e0be78
	ctx.lr = 0x82A9F4B8;
	sub_82E0BE78(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ee1378
	ctx.lr = 0x82A9F4C8;
	sub_82EE1378(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82A9F4D4;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82edff80
	ctx.lr = 0x82A9F4E4;
	sub_82EDFF80(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f4f4
	if (ctx.cr6.eq) goto loc_82A9F4F4;
	// bl 0x82480108
	ctx.lr = 0x82A9F4F4;
	sub_82480108(ctx, base);
loc_82A9F4F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F4FC;
	sub_82E01BF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x82a9f534
	if (ctx.cr6.eq) goto loc_82A9F534;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A9F518:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a9f518
	if (!ctx.cr0.eq) goto loc_82A9F518;
loc_82A9F534:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x82e35a38
	ctx.lr = 0x82A9F540;
	sub_82E35A38(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f550
	if (ctx.cr6.eq) goto loc_82A9F550;
	// bl 0x82480108
	ctx.lr = 0x82A9F550;
	sub_82480108(ctx, base);
loc_82A9F550:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee8198
	ctx.lr = 0x82A9F558;
	sub_82EE8198(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x830f2cf0
	ctx.lr = 0x82A9F564;
	sub_830F2CF0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82e58550
	ctx.lr = 0x82A9F570;
	sub_82E58550(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A9F580;
	sub_82E01BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82A9F58C;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82e73248
	ctx.lr = 0x82A9F5A0;
	sub_82E73248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a13550
	ctx.lr = 0x82A9F5AC;
	sub_82A13550(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r31,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x82a9f5cc
	if (ctx.cr6.eq) goto loc_82A9F5CC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82A9F5CC;
	sub_82480108(ctx, base);
loc_82A9F5CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F5D4;
	sub_82E01BF0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9f6d4
	if (ctx.cr0.eq) goto loc_82A9F6D4;
	// li r11,239
	ctx.r11.s64 = 239;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A9F5F4;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9F608;
	sub_82E01688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9f61c
	if (ctx.cr0.eq) goto loc_82A9F61C;
	// bl 0x82e6dfa0
	ctx.lr = 0x82A9F614;
	sub_82E6DFA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9f620
	goto loc_82A9F620;
loc_82A9F61C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82A9F620:
	// addi r31,r29,292
	ctx.r31.s64 = ctx.r29.s64 + 292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82555ab0
	ctx.lr = 0x82A9F62C;
	sub_82555AB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e01bf8
	ctx.lr = 0x82A9F634;
	sub_82E01BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82A9F640;
	sub_82E02670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r30,292(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// bl 0x82e5c820
	ctx.lr = 0x82A9F658;
	sub_82E5C820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82e6e9f0
	ctx.lr = 0x82A9F668;
	sub_82E6E9F0(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f678
	if (ctx.cr6.eq) goto loc_82A9F678;
	// bl 0x82480108
	ctx.lr = 0x82A9F678;
	sub_82480108(ctx, base);
loc_82A9F678:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F680;
	sub_82E01BF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// beq cr6,0x82a9f6b8
	if (ctx.cr6.eq) goto loc_82A9F6B8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A9F69C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a9f69c
	if (!ctx.cr0.eq) goto loc_82A9F69C;
loc_82A9F6B8:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x82e36268
	ctx.lr = 0x82A9F6C4;
	sub_82E36268(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f6d4
	if (ctx.cr6.eq) goto loc_82A9F6D4;
	// bl 0x82480108
	ctx.lr = 0x82A9F6D4;
	sub_82480108(ctx, base);
loc_82A9F6D4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f6e4
	if (ctx.cr6.eq) goto loc_82A9F6E4;
	// bl 0x82480108
	ctx.lr = 0x82A9F6E4;
	sub_82480108(ctx, base);
loc_82A9F6E4:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82ee8198
	ctx.lr = 0x82A9F6EC;
	sub_82EE8198(ctx, base);
	// lwz r4,260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a9f740
	if (ctx.cr6.eq) goto loc_82A9F740;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82e35bf8
	ctx.lr = 0x82A9F700;
	sub_82E35BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,284
	ctx.r3.s64 = ctx.r29.s64 + 284;
	// bl 0x82a13550
	ctx.lr = 0x82A9F70C;
	sub_82A13550(ctx, base);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f71c
	if (ctx.cr6.eq) goto loc_82A9F71C;
	// bl 0x82480108
	ctx.lr = 0x82A9F71C;
	sub_82480108(ctx, base);
loc_82A9F71C:
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a280e8
	ctx.lr = 0x82A9F72C;
	sub_82A280E8(ctx, base);
	// b 0x82a9f740
	goto loc_82A9F740;
loc_82A9F730:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a25e48
	ctx.lr = 0x82A9F738;
	sub_82A25E48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee8198
	ctx.lr = 0x82A9F740;
	sub_82EE8198(ctx, base);
loc_82A9F740:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9F750"))) PPC_WEAK_FUNC(sub_82A9F750);
PPC_FUNC_IMPL(__imp__sub_82A9F750) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32396
	ctx.r4.s64 = ctx.r11.s64 + 32396;
	// bl 0x82e02670
	ctx.lr = 0x82A9F77C;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-9556
	ctx.r4.s64 = ctx.r11.s64 + -9556;
	// bl 0x82e02670
	ctx.lr = 0x82A9F78C;
	sub_82E02670(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ae40b0
	ctx.lr = 0x82A9F7A8;
	sub_82AE40B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3240
	ctx.lr = 0x82A9F7BC;
	sub_82AE3240(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F7C4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x82A9F7CC;
	sub_8259B670(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F7D4;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F7DC;
	sub_82E01BF0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-9568
	ctx.r4.s64 = ctx.r11.s64 + -9568;
	// bl 0x82e02670
	ctx.lr = 0x82A9F7EC;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9592
	ctx.r4.s64 = ctx.r11.s64 + -9592;
	// bl 0x82e02670
	ctx.lr = 0x82A9F7FC;
	sub_82E02670(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ae40b0
	ctx.lr = 0x82A9F818;
	sub_82AE40B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// bl 0x82ae3240
	ctx.lr = 0x82A9F82C;
	sub_82AE3240(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F834;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8259b670
	ctx.lr = 0x82A9F83C;
	sub_8259B670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F844;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F84C;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82A9F864"))) PPC_WEAK_FUNC(sub_82A9F864);
PPC_FUNC_IMPL(__imp__sub_82A9F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9F868"))) PPC_WEAK_FUNC(sub_82A9F868);
PPC_FUNC_IMPL(__imp__sub_82A9F868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9F870;
	__savegprlr_29(ctx, base);
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
	// bl 0x82a28460
	ctx.lr = 0x82A9F884;
	sub_82A28460(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,6060
	ctx.r11.s64 = ctx.r11.s64 + 6060;
	// addi r10,r10,6036
	ctx.r10.s64 = ctx.r10.s64 + 6036;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r11,r8,5608
	ctx.r11.s64 = ctx.r8.s64 + 5608;
	// addi r9,r9,6024
	ctx.r9.s64 = ctx.r9.s64 + 6024;
	// li r10,216
	ctx.r10.s64 = 216;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01860
	ctx.lr = 0x82A9F8C8;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e015d8
	ctx.lr = 0x82A9F8DC;
	sub_82E015D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9f8f4
	if (ctx.cr0.eq) goto loc_82A9F8F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a9ed68
	ctx.lr = 0x82A9F8F0;
	sub_82A9ED68(ctx, base);
	// b 0x82a9f8f8
	goto loc_82A9F8F8;
loc_82A9F8F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A9F8F8:
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9F908"))) PPC_WEAK_FUNC(sub_82A9F908);
PPC_FUNC_IMPL(__imp__sub_82A9F908) {
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
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,12964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12964);
	// bl 0x82e02670
	ctx.lr = 0x82A9F934;
	sub_82E02670(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a1f128
	ctx.lr = 0x82A9F944;
	sub_82A1F128(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F94C;
	sub_82E01BF0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,13020(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13020);
	// bl 0x82e02670
	ctx.lr = 0x82A9F95C;
	sub_82E02670(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1f128
	ctx.lr = 0x82A9F96C;
	sub_82A1F128(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82A9F974;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A9F98C"))) PPC_WEAK_FUNC(sub_82A9F98C);
PPC_FUNC_IMPL(__imp__sub_82A9F98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9F990"))) PPC_WEAK_FUNC(sub_82A9F990);
PPC_FUNC_IMPL(__imp__sub_82A9F990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82a9fa08
	sub_82A9FA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9F998"))) PPC_WEAK_FUNC(sub_82A9F998);
PPC_FUNC_IMPL(__imp__sub_82A9F998) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-176
	ctx.r3.s64 = ctx.r3.s64 + -176;
	// b 0x82a9fa08
	sub_82A9FA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9F9A0"))) PPC_WEAK_FUNC(sub_82A9F9A0);
PPC_FUNC_IMPL(__imp__sub_82A9F9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A9F9B8"))) PPC_WEAK_FUNC(sub_82A9F9B8);
PPC_FUNC_IMPL(__imp__sub_82A9F9B8) {
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
	// lwz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9f9ec
	if (ctx.cr6.eq) goto loc_82A9F9EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A9F9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A9F9EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28208
	ctx.lr = 0x82A9F9F4;
	sub_82A28208(ctx, base);
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

__attribute__((alias("__imp__sub_82A9FA08"))) PPC_WEAK_FUNC(sub_82A9FA08);
PPC_FUNC_IMPL(__imp__sub_82A9FA08) {
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
	// bl 0x82a9f9b8
	ctx.lr = 0x82A9FA28;
	sub_82A9F9B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9fa38
	if (ctx.cr0.eq) goto loc_82A9FA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82A9FA38;
	sub_82E01698(ctx, base);
loc_82A9FA38:
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

__attribute__((alias("__imp__sub_82A9FA54"))) PPC_WEAK_FUNC(sub_82A9FA54);
PPC_FUNC_IMPL(__imp__sub_82A9FA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9FA58"))) PPC_WEAK_FUNC(sub_82A9FA58);
PPC_FUNC_IMPL(__imp__sub_82A9FA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82A9FA60;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,208
	ctx.r4.s64 = ctx.r3.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828858a0
	ctx.lr = 0x82A9FA7C;
	sub_828858A0(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a9fb18
	if (ctx.cr6.eq) goto loc_82A9FB18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r11,3189
	ctx.r4.s64 = ctx.r11.s64 + 3189;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a9e960
	ctx.lr = 0x82A9FAA0;
	sub_82A9E960(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a9fad8
	if (ctx.cr6.eq) goto loc_82A9FAD8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A9FABC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a9fabc
	if (!ctx.cr0.eq) goto loc_82A9FABC;
loc_82A9FAD8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e8ed28
	ctx.lr = 0x82A9FAF8;
	sub_82E8ED28(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fb08
	if (ctx.cr6.eq) goto loc_82A9FB08;
	// bl 0x82480108
	ctx.lr = 0x82A9FB08;
	sub_82480108(ctx, base);
loc_82A9FB08:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fb18
	if (ctx.cr6.eq) goto loc_82A9FB18;
	// bl 0x82480108
	ctx.lr = 0x82A9FB18;
	sub_82480108(ctx, base);
loc_82A9FB18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9FB20"))) PPC_WEAK_FUNC(sub_82A9FB20);
PPC_FUNC_IMPL(__imp__sub_82A9FB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9FB28;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82e01de8
	ctx.lr = 0x82A9FB44;
	sub_82E01DE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9fc0c
	if (ctx.cr0.eq) goto loc_82A9FC0C;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82a9fcb0
	if (ctx.cr6.eq) goto loc_82A9FCB0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r29,20
	ctx.r28.s64 = ctx.r29.s64 + 20;
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// lfs f31,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f31.f64 = double(temp.f32);
loc_82A9FB70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a9ea10
	ctx.lr = 0x82A9FB7C;
	sub_82A9EA10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a9fbb4
	if (ctx.cr6.eq) goto loc_82A9FBB4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A9FB98:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a9fb98
	if (!ctx.cr0.eq) goto loc_82A9FB98;
loc_82A9FBB4:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8ed28
	ctx.lr = 0x82A9FBD0;
	sub_82E8ED28(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fbe0
	if (ctx.cr6.eq) goto loc_82A9FBE0;
	// bl 0x82480108
	ctx.lr = 0x82A9FBE0;
	sub_82480108(ctx, base);
loc_82A9FBE0:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fbf0
	if (ctx.cr6.eq) goto loc_82A9FBF0;
	// bl 0x82480108
	ctx.lr = 0x82A9FBF0;
	sub_82480108(ctx, base);
loc_82A9FBF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee29b0
	ctx.lr = 0x82A9FBF8;
	sub_82EE29B0(ctx, base);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a9fb70
	if (!ctx.cr6.eq) goto loc_82A9FB70;
	// b 0x82a9fcb0
	goto loc_82A9FCB0;
loc_82A9FC0C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828858a0
	ctx.lr = 0x82A9FC1C;
	sub_828858A0(ctx, base);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a9fcb0
	if (ctx.cr6.eq) goto loc_82A9FCB0;
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a9ea10
	ctx.lr = 0x82A9FC38;
	sub_82A9EA10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82a9fc70
	if (ctx.cr6.eq) goto loc_82A9FC70;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A9FC54:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a9fc54
	if (!ctx.cr0.eq) goto loc_82A9FC54;
loc_82A9FC70:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e8ed28
	ctx.lr = 0x82A9FC90;
	sub_82E8ED28(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fca0
	if (ctx.cr6.eq) goto loc_82A9FCA0;
	// bl 0x82480108
	ctx.lr = 0x82A9FCA0;
	sub_82480108(ctx, base);
loc_82A9FCA0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fcb0
	if (ctx.cr6.eq) goto loc_82A9FCB0;
	// bl 0x82480108
	ctx.lr = 0x82A9FCB0;
	sub_82480108(ctx, base);
loc_82A9FCB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9FCBC"))) PPC_WEAK_FUNC(sub_82A9FCBC);
PPC_FUNC_IMPL(__imp__sub_82A9FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9FCC0"))) PPC_WEAK_FUNC(sub_82A9FCC0);
PPC_FUNC_IMPL(__imp__sub_82A9FCC0) {
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
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,208
	ctx.r4.s64 = ctx.r3.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828858a0
	ctx.lr = 0x82A9FCE8;
	sub_828858A0(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a9fd80
	if (ctx.cr6.eq) goto loc_82A9FD80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,3189
	ctx.r4.s64 = ctx.r11.s64 + 3189;
	// bl 0x82a9eaa0
	ctx.lr = 0x82A9FD08;
	sub_82A9EAA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82a9fd40
	if (ctx.cr6.eq) goto loc_82A9FD40;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A9FD24:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a9fd24
	if (!ctx.cr0.eq) goto loc_82A9FD24;
loc_82A9FD40:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e8ed28
	ctx.lr = 0x82A9FD60;
	sub_82E8ED28(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fd70
	if (ctx.cr6.eq) goto loc_82A9FD70;
	// bl 0x82480108
	ctx.lr = 0x82A9FD70;
	sub_82480108(ctx, base);
loc_82A9FD70:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fd80
	if (ctx.cr6.eq) goto loc_82A9FD80;
	// bl 0x82480108
	ctx.lr = 0x82A9FD80;
	sub_82480108(ctx, base);
loc_82A9FD80:
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

__attribute__((alias("__imp__sub_82A9FD98"))) PPC_WEAK_FUNC(sub_82A9FD98);
PPC_FUNC_IMPL(__imp__sub_82A9FD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x82A9FDA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a28460
	ctx.lr = 0x82A9FDB4;
	sub_82A28460(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,-19292
	ctx.r11.s64 = ctx.r11.s64 + -19292;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r11,r9,6344
	ctx.r11.s64 = ctx.r9.s64 + 6344;
	// addi r10,r10,6236
	ctx.r10.s64 = ctx.r10.s64 + 6236;
	// addi r9,r8,6332
	ctx.r9.s64 = ctx.r8.s64 + 6332;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r7,6156
	ctx.r10.s64 = ctx.r7.s64 + 6156;
	// addi r11,r6,5608
	ctx.r11.s64 = ctx.r6.s64 + 5608;
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82e01860
	ctx.lr = 0x82A9FE20;
	sub_82E01860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,256
	ctx.r3.s64 = 256;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e01688
	ctx.lr = 0x82A9FE34;
	sub_82E01688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a9fe50
	if (ctx.cr0.eq) goto loc_82A9FE50;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a9f868
	ctx.lr = 0x82A9FE48;
	sub_82A9F868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a9fe54
	goto loc_82A9FE54;
loc_82A9FE50:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82A9FE54:
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82a9e698
	ctx.lr = 0x82A9FE5C;
	sub_82A9E698(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fe6c
	if (ctx.cr6.eq) goto loc_82A9FE6C;
	// bl 0x82480108
	ctx.lr = 0x82A9FE6C;
	sub_82480108(ctx, base);
loc_82A9FE6C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fe7c
	if (ctx.cr6.eq) goto loc_82A9FE7C;
	// bl 0x82480108
	ctx.lr = 0x82A9FE7C;
	sub_82480108(ctx, base);
loc_82A9FE7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9FE88"))) PPC_WEAK_FUNC(sub_82A9FE88);
PPC_FUNC_IMPL(__imp__sub_82A9FE88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-176
	ctx.r3.s64 = ctx.r3.s64 + -176;
	// b 0x82a9ff28
	sub_82A9FF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9FE90"))) PPC_WEAK_FUNC(sub_82A9FE90);
PPC_FUNC_IMPL(__imp__sub_82A9FE90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-248
	ctx.r3.s64 = ctx.r3.s64 + -248;
	// b 0x82a9ff28
	sub_82A9FF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9FE98"))) PPC_WEAK_FUNC(sub_82A9FE98);
PPC_FUNC_IMPL(__imp__sub_82A9FE98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82a9ff28
	sub_82A9FF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A9FEA0"))) PPC_WEAK_FUNC(sub_82A9FEA0);
PPC_FUNC_IMPL(__imp__sub_82A9FEA0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,6236
	ctx.r11.s64 = ctx.r11.s64 + 6236;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,6344
	ctx.r10.s64 = ctx.r10.s64 + 6344;
	// addi r9,r9,6332
	ctx.r9.s64 = ctx.r9.s64 + 6332;
	// addi r11,r8,6156
	ctx.r11.s64 = ctx.r8.s64 + 6156;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// addi r30,r3,248
	ctx.r30.s64 = ctx.r3.s64 + 248;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a9fefc
	if (ctx.cr6.eq) goto loc_82A9FEFC;
	// bl 0x82480108
	ctx.lr = 0x82A9FEFC;
	sub_82480108(ctx, base);
loc_82A9FEFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8280bda0
	ctx.lr = 0x82A9FF04;
	sub_8280BDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28208
	ctx.lr = 0x82A9FF0C;
	sub_82A28208(ctx, base);
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

__attribute__((alias("__imp__sub_82A9FF24"))) PPC_WEAK_FUNC(sub_82A9FF24);
PPC_FUNC_IMPL(__imp__sub_82A9FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9FF28"))) PPC_WEAK_FUNC(sub_82A9FF28);
PPC_FUNC_IMPL(__imp__sub_82A9FF28) {
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
	// bl 0x82a9fea0
	ctx.lr = 0x82A9FF48;
	sub_82A9FEA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a9ff58
	if (ctx.cr0.eq) goto loc_82A9FF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82A9FF58;
	sub_82E01698(ctx, base);
loc_82A9FF58:
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

__attribute__((alias("__imp__sub_82A9FF74"))) PPC_WEAK_FUNC(sub_82A9FF74);
PPC_FUNC_IMPL(__imp__sub_82A9FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A9FF78"))) PPC_WEAK_FUNC(sub_82A9FF78);
PPC_FUNC_IMPL(__imp__sub_82A9FF78) {
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
	// lbz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82aa0058
	if (!ctx.cr0.eq) goto loc_82AA0058;
	// lwz r30,264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82aa0058
	if (ctx.cr6.eq) goto loc_82AA0058;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// bl 0x82a27070
	ctx.lr = 0x82A9FFB4;
	sub_82A27070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a27020
	ctx.lr = 0x82A9FFC0;
	sub_82A27020(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82a9fff8
	if (ctx.cr6.eq) goto loc_82A9FFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A9FFDC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a9ffdc
	if (!ctx.cr0.eq) goto loc_82A9FFDC;
loc_82A9FFF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a24578
	ctx.lr = 0x82AA0004;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82aa0018
	if (!ctx.cr6.eq) goto loc_82AA0018;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AA0018:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a245c8
	ctx.lr = 0x82AA0024;
	sub_82A245C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82a21e68
	ctx.lr = 0x82AA0038;
	sub_82A21E68(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82AA0040;
	sub_82E01548(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e01548
	ctx.lr = 0x82AA0048;
	sub_82E01548(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aa0058
	if (ctx.cr6.eq) goto loc_82AA0058;
	// bl 0x82480108
	ctx.lr = 0x82AA0058;
	sub_82480108(ctx, base);
loc_82AA0058:
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

__attribute__((alias("__imp__sub_82AA0070"))) PPC_WEAK_FUNC(sub_82AA0070);
PPC_FUNC_IMPL(__imp__sub_82AA0070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82AA0078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aa00c8
	if (ctx.cr0.eq) goto loc_82AA00C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,21220(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AA00AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aa00c8
	if (ctx.cr0.eq) goto loc_82AA00C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = ctx.r29.s64 + -40;
	// bl 0x82a9ff78
	ctx.lr = 0x82AA00C0;
	sub_82A9FF78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82aa00d8
	goto loc_82AA00D8;
loc_82AA00C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a27cf0
	ctx.lr = 0x82AA00D8;
	sub_82A27CF0(ctx, base);
loc_82AA00D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

