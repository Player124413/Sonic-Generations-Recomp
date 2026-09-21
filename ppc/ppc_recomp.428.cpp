#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83280D44"))) PPC_WEAK_FUNC(sub_83280D44);
PPC_FUNC_IMPL(__imp__sub_83280D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280D48"))) PPC_WEAK_FUNC(sub_83280D48);
PPC_FUNC_IMPL(__imp__sub_83280D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832f66c0
	sub_832F66C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280D54"))) PPC_WEAK_FUNC(sub_83280D54);
PPC_FUNC_IMPL(__imp__sub_83280D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280D58"))) PPC_WEAK_FUNC(sub_83280D58);
PPC_FUNC_IMPL(__imp__sub_83280D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83280D60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83280e84
	if (ctx.cr6.eq) goto loc_83280E84;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x83280d90
	if (!ctx.cr6.eq) goto loc_83280D90;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
loc_83280D90:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x83280da4
	if (!ctx.cr6.eq) goto loc_83280DA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83280e6c
	goto loc_83280E6C;
loc_83280DA4:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdiv f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 / ctx.f0.f64;
	// bl 0x833a3348
	ctx.lr = 0x83280DD4;
	sub_833A3348(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfs f0,18252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-4192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-9180(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 * 100;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x83280e64
	if (!ctx.cr6.gt) goto loc_83280E64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// b 0x83280e6c
	goto loc_83280E6C;
loc_83280E64:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83280E6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832f6948
	ctx.lr = 0x83280E74;
	sub_832F6948(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,4256
	ctx.r3.s64 = ctx.r29.s64 + 4256;
	// bl 0x8328c6a8
	ctx.lr = 0x83280E84;
	sub_8328C6A8(ctx, base);
loc_83280E84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280E8C"))) PPC_WEAK_FUNC(sub_83280E8C);
PPC_FUNC_IMPL(__imp__sub_83280E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280E90"))) PPC_WEAK_FUNC(sub_83280E90);
PPC_FUNC_IMPL(__imp__sub_83280E90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r10,2400
	ctx.r9.s64 = ctx.r10.s64 + 2400;
	// stw r11,2400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2400, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83280EE4"))) PPC_WEAK_FUNC(sub_83280EE4);
PPC_FUNC_IMPL(__imp__sub_83280EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280EE8"))) PPC_WEAK_FUNC(sub_83280EE8);
PPC_FUNC_IMPL(__imp__sub_83280EE8) {
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
	// bl 0x832ef960
	ctx.lr = 0x83280EF8;
	sub_832EF960(ctx, base);
	// bl 0x832f72c0
	ctx.lr = 0x83280EFC;
	sub_832F72C0(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r11,2400
	ctx.r3.s64 = ctx.r11.s64 + 2400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8328be48
	ctx.lr = 0x83280F10;
	sub_8328BE48(ctx, base);
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

__attribute__((alias("__imp__sub_83280F24"))) PPC_WEAK_FUNC(sub_83280F24);
PPC_FUNC_IMPL(__imp__sub_83280F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280F28"))) PPC_WEAK_FUNC(sub_83280F28);
PPC_FUNC_IMPL(__imp__sub_83280F28) {
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
	// bl 0x832f72d8
	ctx.lr = 0x83280F38;
	sub_832F72D8(ctx, base);
	// bl 0x832efaa0
	ctx.lr = 0x83280F3C;
	sub_832EFAA0(ctx, base);
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

__attribute__((alias("__imp__sub_83280F50"))) PPC_WEAK_FUNC(sub_83280F50);
PPC_FUNC_IMPL(__imp__sub_83280F50) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x83282860
	sub_83282860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280F5C"))) PPC_WEAK_FUNC(sub_83280F5C);
PPC_FUNC_IMPL(__imp__sub_83280F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280F60"))) PPC_WEAK_FUNC(sub_83280F60);
PPC_FUNC_IMPL(__imp__sub_83280F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83280F7C"))) PPC_WEAK_FUNC(sub_83280F7C);
PPC_FUNC_IMPL(__imp__sub_83280F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280F80"))) PPC_WEAK_FUNC(sub_83280F80);
PPC_FUNC_IMPL(__imp__sub_83280F80) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x83280fd0
	if (ctx.cr6.eq) goto loc_83280FD0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x832f0da8
	ctx.lr = 0x83280FB0;
	sub_832F0DA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83280FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_83280FD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83280FE8;
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

__attribute__((alias("__imp__sub_83281000"))) PPC_WEAK_FUNC(sub_83281000);
PPC_FUNC_IMPL(__imp__sub_83281000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83281008;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8516(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83280f60
	ctx.lr = 0x83281030;
	sub_83280F60(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83281040
	if (ctx.cr6.lt) goto loc_83281040;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83281040:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,36864
	ctx.r11.u64 = ctx.r11.u64 | 36864;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83281054
	if (ctx.cr6.lt) goto loc_83281054;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83281054:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832884b0
	ctx.lr = 0x83281064;
	sub_832884B0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83280f80
	ctx.lr = 0x83281074;
	sub_83280F80(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328108C"))) PPC_WEAK_FUNC(sub_8328108C);
PPC_FUNC_IMPL(__imp__sub_8328108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281090"))) PPC_WEAK_FUNC(sub_83281090);
PPC_FUNC_IMPL(__imp__sub_83281090) {
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
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832f6418
	ctx.lr = 0x832810A8;
	sub_832F6418(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
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

__attribute__((alias("__imp__sub_832810C4"))) PPC_WEAK_FUNC(sub_832810C4);
PPC_FUNC_IMPL(__imp__sub_832810C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832810C8"))) PPC_WEAK_FUNC(sub_832810C8);
PPC_FUNC_IMPL(__imp__sub_832810C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8524(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8524);
	// bl 0x832881a0
	ctx.lr = 0x832810F0;
	sub_832881A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83281118"))) PPC_WEAK_FUNC(sub_83281118);
PPC_FUNC_IMPL(__imp__sub_83281118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8524);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x832884a8
	sub_832884A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281128"))) PPC_WEAK_FUNC(sub_83281128);
PPC_FUNC_IMPL(__imp__sub_83281128) {
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
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r30,8516(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// lwz r4,8524(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8524);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832879e0
	ctx.lr = 0x83281150;
	sub_832879E0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83287ff0
	ctx.lr = 0x83281160;
	sub_83287FF0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r3,2520(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2520);
	// bl 0x83287c70
	ctx.lr = 0x8328116C;
	sub_83287C70(ctx, base);
	// std r3,2520(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2520, ctx.r3.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r3,2528(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2528);
	// bl 0x83287c70
	ctx.lr = 0x8328117C;
	sub_83287C70(ctx, base);
	// std r3,2528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2528, ctx.r3.u64);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83287ff0
	ctx.lr = 0x83281190;
	sub_83287FF0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r3,2544(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2544);
	// bl 0x83287c70
	ctx.lr = 0x8328119C;
	sub_83287C70(ctx, base);
	// std r3,2544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2544, ctx.r3.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r3,2552(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2552);
	// bl 0x83287c70
	ctx.lr = 0x832811AC;
	sub_83287C70(ctx, base);
	// std r3,2552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2552, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_832811C8"))) PPC_WEAK_FUNC(sub_832811C8);
PPC_FUNC_IMPL(__imp__sub_832811C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8524(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8524);
	// b 0x83287b20
	sub_83287B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832811D0"))) PPC_WEAK_FUNC(sub_832811D0);
PPC_FUNC_IMPL(__imp__sub_832811D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8528(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8528);
	// b 0x83287b20
	sub_83287B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832811D8"))) PPC_WEAK_FUNC(sub_832811D8);
PPC_FUNC_IMPL(__imp__sub_832811D8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,8528(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8528);
	// b 0x83287b08
	sub_83287B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832811E4"))) PPC_WEAK_FUNC(sub_832811E4);
PPC_FUNC_IMPL(__imp__sub_832811E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832811E8"))) PPC_WEAK_FUNC(sub_832811E8);
PPC_FUNC_IMPL(__imp__sub_832811E8) {
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
	// bl 0x832f6418
	ctx.lr = 0x832811F8;
	sub_832F6418(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328120c
	if (ctx.cr0.eq) goto loc_8328120C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x83281210
	if (!ctx.cr6.eq) goto loc_83281210;
loc_8328120C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83281210:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281220"))) PPC_WEAK_FUNC(sub_83281220);
PPC_FUNC_IMPL(__imp__sub_83281220) {
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
	// lwz r31,8516(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83274d00
	ctx.lr = 0x83281244;
	sub_83274D00(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x83281260
	if (ctx.cr6.eq) goto loc_83281260;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f6ff0
	ctx.lr = 0x83281260;
	sub_832F6FF0(ctx, base);
loc_83281260:
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

__attribute__((alias("__imp__sub_83281278"))) PPC_WEAK_FUNC(sub_83281278);
PPC_FUNC_IMPL(__imp__sub_83281278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83281280;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,2400
	ctx.r11.s64 = ctx.r11.s64 + 2400;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83281400
	if (ctx.cr6.eq) goto loc_83281400;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83281400
	if (ctx.cr6.eq) goto loc_83281400;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x833a1390
	ctx.lr = 0x832812BC;
	sub_833A1390(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// li r4,63
	ctx.r4.s64 = 63;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r31,r30,4256
	ctx.r31.s64 = ctx.r30.s64 + 4256;
	// bl 0x83274d00
	ctx.lr = 0x83281314;
	sub_83274D00(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// ori r29,r11,16960
	ctx.r29.u64 = ctx.r11.u64 | 16960;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r4,64
	ctx.r4.s64 = 64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x83281334;
	sub_83274D00(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// li r4,65
	ctx.r4.s64 = 65;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x8328134C;
	sub_83274D00(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r29,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r29.u64);
	// li r4,66
	ctx.r4.s64 = 66;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x83281364;
	sub_83274D00(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r29,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// bl 0x8328c940
	ctx.lr = 0x83281378;
	sub_8328C940(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x83281384;
	sub_83274D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f2cf0
	ctx.lr = 0x83281390;
	sub_830F2CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8328c5f8
	ctx.lr = 0x8328139C;
	sub_8328C5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8328c610
	ctx.lr = 0x832813A8;
	sub_8328C610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8328c628
	ctx.lr = 0x832813B4;
	sub_8328C628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8328c640
	ctx.lr = 0x832813C0;
	sub_8328C640(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x832813CC;
	sub_83274D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c658
	ctx.lr = 0x832813D8;
	sub_8328C658(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c6a8
	ctx.lr = 0x832813E8;
	sub_8328C6A8(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83274d00
	ctx.lr = 0x832813F4;
	sub_83274D00(ctx, base);
	// bl 0x8328c4e8
	ctx.lr = 0x832813F8;
	sub_8328C4E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83281410
	goto loc_83281410;
loc_83281400:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3078
	ctx.r4.u64 = ctx.r4.u64 | 3078;
	// bl 0x83282390
	ctx.lr = 0x83281410;
	sub_83282390(ctx, base);
loc_83281410:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281418"))) PPC_WEAK_FUNC(sub_83281418);
PPC_FUNC_IMPL(__imp__sub_83281418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// lwz r3,500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281428"))) PPC_WEAK_FUNC(sub_83281428);
PPC_FUNC_IMPL(__imp__sub_83281428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83281430;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832f6418
	ctx.lr = 0x8328144C;
	sub_832F6418(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2428, ctx.r11.u32);
	// bl 0x832f6470
	ctx.lr = 0x83281468;
	sub_832F6470(ctx, base);
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// bl 0x8328c410
	ctx.lr = 0x8328147C;
	sub_8328C410(ctx, base);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// bl 0x8328c4c8
	ctx.lr = 0x83281484;
	sub_8328C4C8(ctx, base);
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328cf60
	ctx.lr = 0x8328149C;
	sub_8328CF60(ctx, base);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832814B4"))) PPC_WEAK_FUNC(sub_832814B4);
PPC_FUNC_IMPL(__imp__sub_832814B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832814B8"))) PPC_WEAK_FUNC(sub_832814B8);
PPC_FUNC_IMPL(__imp__sub_832814B8) {
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
	// bl 0x832f6dc8
	ctx.lr = 0x832814C8;
	sub_832F6DC8(ctx, base);
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

__attribute__((alias("__imp__sub_832814DC"))) PPC_WEAK_FUNC(sub_832814DC);
PPC_FUNC_IMPL(__imp__sub_832814DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832814E0"))) PPC_WEAK_FUNC(sub_832814E0);
PPC_FUNC_IMPL(__imp__sub_832814E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,1568
	ctx.r10.s64 = ctx.r10.s64 + 1568;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832814F8"))) PPC_WEAK_FUNC(sub_832814F8);
PPC_FUNC_IMPL(__imp__sub_832814F8) {
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
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832f63e0
	ctx.lr = 0x83281510;
	sub_832F63E0(ctx, base);
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

__attribute__((alias("__imp__sub_83281524"))) PPC_WEAK_FUNC(sub_83281524);
PPC_FUNC_IMPL(__imp__sub_83281524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281528"))) PPC_WEAK_FUNC(sub_83281528);
PPC_FUNC_IMPL(__imp__sub_83281528) {
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
	// lwz r31,8516(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f6418
	ctx.lr = 0x8328154C;
	sub_832F6418(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83281584
	if (ctx.cr0.eq) goto loc_83281584;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83281584
	if (ctx.cr6.eq) goto loc_83281584;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83281584
	if (ctx.cr6.eq) goto loc_83281584;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8328157c
	if (!ctx.cr6.eq) goto loc_8328157C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f64a8
	ctx.lr = 0x83281578;
	sub_832F64A8(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
loc_8328157C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x83281588
	goto loc_83281588;
loc_83281584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83281588:
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

__attribute__((alias("__imp__sub_832815A0"))) PPC_WEAK_FUNC(sub_832815A0);
PPC_FUNC_IMPL(__imp__sub_832815A0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832f6900
	ctx.lr = 0x832815C4;
	sub_832F6900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82822bf8
	ctx.lr = 0x832815D0;
	sub_82822BF8(ctx, base);
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

__attribute__((alias("__imp__sub_832815E8"))) PPC_WEAK_FUNC(sub_832815E8);
PPC_FUNC_IMPL(__imp__sub_832815E8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x832772e0
	ctx.lr = 0x83281610;
	sub_832772E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83289328
	ctx.lr = 0x83281620;
	sub_83289328(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8328163C"))) PPC_WEAK_FUNC(sub_8328163C);
PPC_FUNC_IMPL(__imp__sub_8328163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281640"))) PPC_WEAK_FUNC(sub_83281640);
PPC_FUNC_IMPL(__imp__sub_83281640) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3075
	ctx.r4.u64 = ctx.r4.u64 | 3075;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328164C"))) PPC_WEAK_FUNC(sub_8328164C);
PPC_FUNC_IMPL(__imp__sub_8328164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281650"))) PPC_WEAK_FUNC(sub_83281650);
PPC_FUNC_IMPL(__imp__sub_83281650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83281658;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r29,8516(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832810c8
	ctx.lr = 0x8328167C;
	sub_832810C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832816c4
	if (!ctx.cr0.eq) goto loc_832816C4;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832816A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83281118
	ctx.lr = 0x832816B0;
	sub_83281118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832816c4
	if (!ctx.cr0.eq) goto loc_832816C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281128
	ctx.lr = 0x832816C0;
	sub_83281128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832816C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832816CC"))) PPC_WEAK_FUNC(sub_832816CC);
PPC_FUNC_IMPL(__imp__sub_832816CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832816D0"))) PPC_WEAK_FUNC(sub_832816D0);
PPC_FUNC_IMPL(__imp__sub_832816D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832816D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8528(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,8524(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8524);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83287ae8
	ctx.lr = 0x832816F0;
	sub_83287AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8328172c
	if (ctx.cr6.eq) goto loc_8328172C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ae8
	ctx.lr = 0x83281704;
	sub_83287AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8328172c
	if (!ctx.cr6.eq) goto loc_8328172C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281090
	ctx.lr = 0x83281714;
	sub_83281090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8328172c
	if (ctx.cr0.eq) goto loc_8328172C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83287ad0
	ctx.lr = 0x8328172C;
	sub_83287AD0(ctx, base);
loc_8328172C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281734"))) PPC_WEAK_FUNC(sub_83281734);
PPC_FUNC_IMPL(__imp__sub_83281734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281738"))) PPC_WEAK_FUNC(sub_83281738);
PPC_FUNC_IMPL(__imp__sub_83281738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83281740;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,8516(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r3,4256
	ctx.r26.s64 = ctx.r3.s64 + 4256;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f6418
	ctx.lr = 0x83281760;
	sub_832F6418(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f67b8
	ctx.lr = 0x8328176C;
	sub_832F67B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8328177c
	if (ctx.cr0.eq) goto loc_8328177C;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// stw r30,2432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2432, ctx.r30.u32);
loc_8328177C:
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83281788;
	sub_83274D00(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x832817c4
	if (ctx.cr6.eq) goto loc_832817C4;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x832817b8
	if (ctx.cr6.eq) goto loc_832817B8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832817d4
	if (ctx.cr6.eq) goto loc_832817D4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3079
	ctx.r4.u64 = ctx.r4.u64 | 3079;
	// b 0x832817cc
	goto loc_832817CC;
loc_832817B8:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3080
	ctx.r4.u64 = ctx.r4.u64 | 3080;
	// b 0x832817cc
	goto loc_832817CC;
loc_832817C4:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3081
	ctx.r4.u64 = ctx.r4.u64 | 3081;
loc_832817CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282390
	ctx.lr = 0x832817D4;
	sub_83282390(ctx, base);
loc_832817D4:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x832817e4
	if (ctx.cr6.eq) goto loc_832817E4;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bne cr6,0x832817f8
	if (!ctx.cr6.eq) goto loc_832817F8;
loc_832817E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824ebfc0
	ctx.lr = 0x832817F0;
	sub_824EBFC0(ctx, base);
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// beq cr6,0x83281800
	if (ctx.cr6.eq) goto loc_83281800;
loc_832817F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8328180c
	if (ctx.cr6.eq) goto loc_8328180C;
loc_83281800:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832811d8
	ctx.lr = 0x8328180C;
	sub_832811D8(ctx, base);
loc_8328180C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832811c8
	ctx.lr = 0x83281814;
	sub_832811C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83281844
	if (!ctx.cr6.eq) goto loc_83281844;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x83281844
	if (!ctx.cr6.eq) goto loc_83281844;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f69e8
	ctx.lr = 0x8328182C;
	sub_832F69E8(ctx, base);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83281844
	if (!ctx.cr6.eq) goto loc_83281844;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832811d8
	ctx.lr = 0x83281844;
	sub_832811D8(ctx, base);
loc_83281844:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328184C"))) PPC_WEAK_FUNC(sub_8328184C);
PPC_FUNC_IMPL(__imp__sub_8328184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281850"))) PPC_WEAK_FUNC(sub_83281850);
PPC_FUNC_IMPL(__imp__sub_83281850) {
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
	// bl 0x8327e520
	ctx.lr = 0x83281868;
	sub_8327E520(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83281884
	if (ctx.cr6.eq) goto loc_83281884;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832f7188
	ctx.lr = 0x83281880;
	sub_832F7188(ctx, base);
	// b 0x83281888
	goto loc_83281888;
loc_83281884:
	// bl 0x83281418
	ctx.lr = 0x83281888;
	sub_83281418(ctx, base);
loc_83281888:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832818b0
	if (ctx.cr6.eq) goto loc_832818B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6ab0
	ctx.lr = 0x832818A0;
	sub_832F6AB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6750
	ctx.lr = 0x832818AC;
	sub_832F6750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832818B0:
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

__attribute__((alias("__imp__sub_832818C4"))) PPC_WEAK_FUNC(sub_832818C4);
PPC_FUNC_IMPL(__imp__sub_832818C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832818C8"))) PPC_WEAK_FUNC(sub_832818C8);
PPC_FUNC_IMPL(__imp__sub_832818C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832818D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8516(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83276d80
	ctx.lr = 0x832818EC;
	sub_83276D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83281940
	if (ctx.cr0.eq) goto loc_83281940;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83281930
	if (!ctx.cr6.eq) goto loc_83281930;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,4256
	ctx.r3.s64 = ctx.r30.s64 + 4256;
	// bl 0x83281428
	ctx.lr = 0x83281914;
	sub_83281428(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83281930
	if (!ctx.cr6.lt) goto loc_83281930;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_83281930:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_83281940:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328194C"))) PPC_WEAK_FUNC(sub_8328194C);
PPC_FUNC_IMPL(__imp__sub_8328194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281950"))) PPC_WEAK_FUNC(sub_83281950);
PPC_FUNC_IMPL(__imp__sub_83281950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83281958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8328197c
	if (!ctx.cr6.eq) goto loc_8328197C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832819d8
	goto loc_832819D8;
loc_8328197C:
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,2400
	ctx.r3.s64 = ctx.r10.s64 + 2400;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x833a1390
	ctx.lr = 0x83281990;
	sub_833A1390(ctx, base);
	// bl 0x8327e520
	ctx.lr = 0x83281994;
	sub_8327E520(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x832819a8
	if (ctx.cr6.eq) goto loc_832819A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832814b8
	ctx.lr = 0x832819A4;
	sub_832814B8(ctx, base);
	// b 0x832819b8
	goto loc_832819B8;
loc_832819A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832814f8
	ctx.lr = 0x832819B0;
	sub_832814F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832814e0
	ctx.lr = 0x832819B8;
	sub_832814E0(ctx, base);
loc_832819B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832819D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8328c470
	ctx.lr = 0x832819D4;
	sub_8328C470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832819D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832819E0"))) PPC_WEAK_FUNC(sub_832819E0);
PPC_FUNC_IMPL(__imp__sub_832819E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,4256
	ctx.r4.s64 = ctx.r3.s64 + 4256;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// bne cr6,0x83281a0c
	if (!ctx.cr6.eq) goto loc_83281A0C;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_83281A0C:
	// b 0x832815a0
	sub_832815A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281A10"))) PPC_WEAK_FUNC(sub_83281A10);
PPC_FUNC_IMPL(__imp__sub_83281A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281A14"))) PPC_WEAK_FUNC(sub_83281A14);
PPC_FUNC_IMPL(__imp__sub_83281A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281A18"))) PPC_WEAK_FUNC(sub_83281A18);
PPC_FUNC_IMPL(__imp__sub_83281A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,4256
	ctx.r4.s64 = ctx.r3.s64 + 4256;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x83281a3c
	if (!ctx.cr6.eq) goto loc_83281A3C;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_83281A3C:
	// b 0x832815a0
	sub_832815A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281A40"))) PPC_WEAK_FUNC(sub_83281A40);
PPC_FUNC_IMPL(__imp__sub_83281A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83281A44"))) PPC_WEAK_FUNC(sub_83281A44);
PPC_FUNC_IMPL(__imp__sub_83281A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281A48"))) PPC_WEAK_FUNC(sub_83281A48);
PPC_FUNC_IMPL(__imp__sub_83281A48) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83281A68;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83281a78
	if (!ctx.cr0.eq) goto loc_83281A78;
loc_83281A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83281ac0
	goto loc_83281AC0;
loc_83281A78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832811d0
	ctx.lr = 0x83281A80;
	sub_832811D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83281a70
	if (ctx.cr6.eq) goto loc_83281A70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281528
	ctx.lr = 0x83281A90;
	sub_83281528(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281650
	ctx.lr = 0x83281A9C;
	sub_83281650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832816d0
	ctx.lr = 0x83281AA8;
	sub_832816D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83281738
	ctx.lr = 0x83281AB4;
	sub_83281738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281220
	ctx.lr = 0x83281ABC;
	sub_83281220(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83281AC0:
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

__attribute__((alias("__imp__sub_83281AD8"))) PPC_WEAK_FUNC(sub_83281AD8);
PPC_FUNC_IMPL(__imp__sub_83281AD8) {
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
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,6344
	ctx.r4.s64 = ctx.r11.s64 + 6344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83276ed0
	ctx.lr = 0x83281AFC;
	sub_83276ED0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x83281B0C;
	sub_83274D40(ctx, base);
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

__attribute__((alias("__imp__sub_83281B20"))) PPC_WEAK_FUNC(sub_83281B20);
PPC_FUNC_IMPL(__imp__sub_83281B20) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832819e0
	ctx.lr = 0x83281B34;
	sub_832819E0(ctx, base);
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

__attribute__((alias("__imp__sub_83281B48"))) PPC_WEAK_FUNC(sub_83281B48);
PPC_FUNC_IMPL(__imp__sub_83281B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83281B50;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8516(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// blt cr6,0x83281bec
	if (ctx.cr6.lt) goto loc_83281BEC;
	// beq cr6,0x83281be4
	if (ctx.cr6.eq) goto loc_83281BE4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x83281c00
	if (!ctx.cr6.lt) goto loc_83281C00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832811e8
	ctx.lr = 0x83281B80;
	sub_832811E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83281c00
	if (ctx.cr0.eq) goto loc_83281C00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281528
	ctx.lr = 0x83281B90;
	sub_83281528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832815e8
	ctx.lr = 0x83281BA4;
	sub_832815E8(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832f70a8
	ctx.lr = 0x83281BBC;
	sub_832F70A8(ctx, base);
	// subf r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// addi r3,r31,4256
	ctx.r3.s64 = ctx.r31.s64 + 4256;
	// bl 0x8328c668
	ctx.lr = 0x83281BE0;
	sub_8328C668(ctx, base);
	// b 0x83281c00
	goto loc_83281C00;
loc_83281BE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83281bf8
	goto loc_83281BF8;
loc_83281BEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_83281BF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281a18
	ctx.lr = 0x83281C00;
	sub_83281A18(ctx, base);
loc_83281C00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281C0C"))) PPC_WEAK_FUNC(sub_83281C0C);
PPC_FUNC_IMPL(__imp__sub_83281C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281C10"))) PPC_WEAK_FUNC(sub_83281C10);
PPC_FUNC_IMPL(__imp__sub_83281C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83281C18;
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
	// addi r31,r11,3416
	ctx.r31.s64 = ctx.r11.s64 + 3416;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83281c50
	if (ctx.cr6.eq) goto loc_83281C50;
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
	ctx.lr = 0x83281C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83281C50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83281a48
	ctx.lr = 0x83281C58;
	sub_83281A48(ctx, base);
	// lwz r11,2364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83281c98
	if (ctx.cr6.eq) goto loc_83281C98;
	// addi r10,r30,2520
	ctx.r10.s64 = ctx.r30.s64 + 2520;
	// addi r9,r30,2528
	ctx.r9.s64 = ctx.r30.s64 + 2528;
	// addi r8,r30,2536
	ctx.r8.s64 = ctx.r30.s64 + 2536;
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
	ctx.lr = 0x83281C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83281C98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281CA4"))) PPC_WEAK_FUNC(sub_83281CA4);
PPC_FUNC_IMPL(__imp__sub_83281CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281CA8"))) PPC_WEAK_FUNC(sub_83281CA8);
PPC_FUNC_IMPL(__imp__sub_83281CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83281CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83281CC0;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83281db4
	if (ctx.cr0.eq) goto loc_83281DB4;
	// addi r29,r31,9888
	ctx.r29.s64 = ctx.r31.s64 + 9888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,8516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8516, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x83281278
	ctx.lr = 0x83281CE0;
	sub_83281278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83281db8
	if (!ctx.cr0.eq) goto loc_83281DB8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83281850
	ctx.lr = 0x83281CF0;
	sub_83281850(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83281d0c
	if (!ctx.cr0.eq) goto loc_83281D0C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3076
	ctx.r4.u64 = ctx.r4.u64 | 3076;
loc_83281D00:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83282390
	ctx.lr = 0x83281D08;
	sub_83282390(ctx, base);
	// b 0x83281db8
	goto loc_83281DB8;
loc_83281D0C:
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,3920
	ctx.r4.s64 = ctx.r11.s64 + 3920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f6a78
	ctx.lr = 0x83281D20;
	sub_832F6A78(ctx, base);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x832ee4c0
	ctx.lr = 0x83281D30;
	sub_832EE4C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x83281d44
	if (!ctx.cr0.eq) goto loc_83281D44;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3077
	ctx.r4.u64 = ctx.r4.u64 | 3077;
	// b 0x83281d00
	goto loc_83281D00;
loc_83281D44:
	// addi r11,r31,9980
	ctx.r11.s64 = ctx.r31.s64 + 9980;
	// stw r4,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r11,8788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8788, ctx.r11.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// addi r11,r8,3384
	ctx.r11.s64 = ctx.r8.s64 + 3384;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// stw r8,9980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9980, ctx.r8.u32);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r11,9992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9992, ctx.r11.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// addi r10,r10,3352
	ctx.r10.s64 = ctx.r10.s64 + 3352;
	// addi r9,r9,3368
	ctx.r9.s64 = ctx.r9.s64 + 3368;
	// addi r7,r7,3400
	ctx.r7.s64 = ctx.r7.s64 + 3400;
	// stw r10,9984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9984, ctx.r10.u32);
	// addi r8,r6,3416
	ctx.r8.s64 = ctx.r6.s64 + 3416;
	// stw r9,9988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9988, ctx.r9.u32);
	// stw r7,9996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9996, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,10000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10000, ctx.r8.u32);
	// bl 0x832f7220
	ctx.lr = 0x83281DA0;
	sub_832F7220(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832819e0
	ctx.lr = 0x83281DAC;
	sub_832819E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281ad8
	ctx.lr = 0x83281DB4;
	sub_83281AD8(ctx, base);
loc_83281DB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83281DB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281DC0"))) PPC_WEAK_FUNC(sub_83281DC0);
PPC_FUNC_IMPL(__imp__sub_83281DC0) {
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
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83281DDC;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83281dec
	if (!ctx.cr0.eq) goto loc_83281DEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83281dfc
	goto loc_83281DFC;
loc_83281DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832775b0
	ctx.lr = 0x83281DF4;
	sub_832775B0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_83281DFC:
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

__attribute__((alias("__imp__sub_83281E10"))) PPC_WEAK_FUNC(sub_83281E10);
PPC_FUNC_IMPL(__imp__sub_83281E10) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1793
	ctx.r4.u64 = ctx.r4.u64 | 1793;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281E1C"))) PPC_WEAK_FUNC(sub_83281E1C);
PPC_FUNC_IMPL(__imp__sub_83281E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281E20"))) PPC_WEAK_FUNC(sub_83281E20);
PPC_FUNC_IMPL(__imp__sub_83281E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83281e4c
	if (ctx.cr6.eq) goto loc_83281E4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83281e4c
	if (ctx.cr6.eq) goto loc_83281E4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83281E4C:
	// lwz r4,8728(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8728);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x83287a40
	sub_83287A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281E58"))) PPC_WEAK_FUNC(sub_83281E58);
PPC_FUNC_IMPL(__imp__sub_83281E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8728);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x83287a70
	sub_83287A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281E6C"))) PPC_WEAK_FUNC(sub_83281E6C);
PPC_FUNC_IMPL(__imp__sub_83281E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281E70"))) PPC_WEAK_FUNC(sub_83281E70);
PPC_FUNC_IMPL(__imp__sub_83281E70) {
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
	// bl 0x83285b60
	ctx.lr = 0x83281E8C;
	sub_83285B60(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83281ec8
	if (ctx.cr6.eq) goto loc_83281EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8728(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8728);
	// bl 0x83287b20
	ctx.lr = 0x83281EA0;
	sub_83287B20(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83281ec8
	if (!ctx.cr6.eq) goto loc_83281EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281dc0
	ctx.lr = 0x83281EB0;
	sub_83281DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83281ec8
	if (ctx.cr0.eq) goto loc_83281EC8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b50
	ctx.lr = 0x83281EC8;
	sub_83285B50(ctx, base);
loc_83281EC8:
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

__attribute__((alias("__imp__sub_83281EDC"))) PPC_WEAK_FUNC(sub_83281EDC);
PPC_FUNC_IMPL(__imp__sub_83281EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281EE0"))) PPC_WEAK_FUNC(sub_83281EE0);
PPC_FUNC_IMPL(__imp__sub_83281EE0) {
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
	// bl 0x83285b40
	ctx.lr = 0x83281EFC;
	sub_83285B40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83281f38
	if (ctx.cr6.eq) goto loc_83281F38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8728(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8728);
	// bl 0x83287ae8
	ctx.lr = 0x83281F10;
	sub_83287AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83281f38
	if (!ctx.cr6.eq) goto loc_83281F38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8313e928
	ctx.lr = 0x83281F20;
	sub_8313E928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83281f38
	if (ctx.cr0.eq) goto loc_83281F38;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285b30
	ctx.lr = 0x83281F38;
	sub_83285B30(ctx, base);
loc_83281F38:
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

__attribute__((alias("__imp__sub_83281F4C"))) PPC_WEAK_FUNC(sub_83281F4C);
PPC_FUNC_IMPL(__imp__sub_83281F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281F50"))) PPC_WEAK_FUNC(sub_83281F50);
PPC_FUNC_IMPL(__imp__sub_83281F50) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x83281F6C;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83281f8c
	if (ctx.cr0.eq) goto loc_83281F8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281e70
	ctx.lr = 0x83281F7C;
	sub_83281E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281ee0
	ctx.lr = 0x83281F84;
	sub_83281EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6da88
	ctx.lr = 0x83281F8C;
	sub_82D6DA88(ctx, base);
loc_83281F8C:
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

__attribute__((alias("__imp__sub_83281FA0"))) PPC_WEAK_FUNC(sub_83281FA0);
PPC_FUNC_IMPL(__imp__sub_83281FA0) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8324(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8324);
	// bl 0x83287ad0
	ctx.lr = 0x83281FB8;
	sub_83287AD0(ctx, base);
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

__attribute__((alias("__imp__sub_83281FCC"))) PPC_WEAK_FUNC(sub_83281FCC);
PPC_FUNC_IMPL(__imp__sub_83281FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281FD0"))) PPC_WEAK_FUNC(sub_83281FD0);
PPC_FUNC_IMPL(__imp__sub_83281FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8324);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x83288198
	sub_83288198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281FE0"))) PPC_WEAK_FUNC(sub_83281FE0);
PPC_FUNC_IMPL(__imp__sub_83281FE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,8324(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8324);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832884a0
	sub_832884A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281FF4"))) PPC_WEAK_FUNC(sub_83281FF4);
PPC_FUNC_IMPL(__imp__sub_83281FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281FF8"))) PPC_WEAK_FUNC(sub_83281FF8);
PPC_FUNC_IMPL(__imp__sub_83281FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1281
	ctx.r4.u64 = ctx.r4.u64 | 1281;
	// b 0x83282390
	sub_83282390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282004"))) PPC_WEAK_FUNC(sub_83282004);
PPC_FUNC_IMPL(__imp__sub_83282004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282008"))) PPC_WEAK_FUNC(sub_83282008);
PPC_FUNC_IMPL(__imp__sub_83282008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// addi r3,r11,540
	ctx.r3.s64 = ctx.r11.s64 + 540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282018"))) PPC_WEAK_FUNC(sub_83282018);
PPC_FUNC_IMPL(__imp__sub_83282018) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-15104
	ctx.r11.s64 = ctx.r4.s64 + -15104;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282028"))) PPC_WEAK_FUNC(sub_83282028);
PPC_FUNC_IMPL(__imp__sub_83282028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// stw r3,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282038"))) PPC_WEAK_FUNC(sub_83282038);
PPC_FUNC_IMPL(__imp__sub_83282038) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// stw r11,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282048"))) PPC_WEAK_FUNC(sub_83282048);
PPC_FUNC_IMPL(__imp__sub_83282048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83282058
	if (!ctx.cr6.eq) goto loc_83282058;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
loc_83282058:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83282078"))) PPC_WEAK_FUNC(sub_83282078);
PPC_FUNC_IMPL(__imp__sub_83282078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328207C"))) PPC_WEAK_FUNC(sub_8328207C);
PPC_FUNC_IMPL(__imp__sub_8328207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282080"))) PPC_WEAK_FUNC(sub_83282080);
PPC_FUNC_IMPL(__imp__sub_83282080) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328208C"))) PPC_WEAK_FUNC(sub_8328208C);
PPC_FUNC_IMPL(__imp__sub_8328208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282090"))) PPC_WEAK_FUNC(sub_83282090);
PPC_FUNC_IMPL(__imp__sub_83282090) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832820a4
	if (!ctx.cr6.eq) goto loc_832820A4;
loc_8328209C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832820A4:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8328209c
	if (ctx.cr6.eq) goto loc_8328209C;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2368, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832820C0"))) PPC_WEAK_FUNC(sub_832820C0);
PPC_FUNC_IMPL(__imp__sub_832820C0) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8328c4e8
	ctx.lr = 0x832820D4;
	sub_8328C4E8(ctx, base);
	// bl 0x832eddd0
	ctx.lr = 0x832820D8;
	sub_832EDDD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832820E8"))) PPC_WEAK_FUNC(sub_832820E8);
PPC_FUNC_IMPL(__imp__sub_832820E8) {
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
	// bl 0x832ede48
	ctx.lr = 0x832820F8;
	sub_832EDE48(ctx, base);
	// bl 0x8328c470
	ctx.lr = 0x832820FC;
	sub_8328C470(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328210C"))) PPC_WEAK_FUNC(sub_8328210C);
PPC_FUNC_IMPL(__imp__sub_8328210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282110"))) PPC_WEAK_FUNC(sub_83282110);
PPC_FUNC_IMPL(__imp__sub_83282110) {
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
	// bl 0x8327e958
	ctx.lr = 0x83282120;
	sub_8327E958(ctx, base);
	// bl 0x83288ac8
	ctx.lr = 0x83282124;
	sub_83288AC8(ctx, base);
	// bl 0x83282570
	ctx.lr = 0x83282128;
	sub_83282570(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282138"))) PPC_WEAK_FUNC(sub_83282138);
PPC_FUNC_IMPL(__imp__sub_83282138) {
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
	// bl 0x832825e0
	ctx.lr = 0x83282148;
	sub_832825E0(ctx, base);
	// bl 0x83288ad0
	ctx.lr = 0x8328214C;
	sub_83288AD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328215C"))) PPC_WEAK_FUNC(sub_8328215C);
PPC_FUNC_IMPL(__imp__sub_8328215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282160"))) PPC_WEAK_FUNC(sub_83282160);
PPC_FUNC_IMPL(__imp__sub_83282160) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,10984
	ctx.r31.s64 = ctx.r11.s64 + 10984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3f50
	ctx.lr = 0x83282184;
	sub_832F3F50(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8328219C"))) PPC_WEAK_FUNC(sub_8328219C);
PPC_FUNC_IMPL(__imp__sub_8328219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832821A0"))) PPC_WEAK_FUNC(sub_832821A0);
PPC_FUNC_IMPL(__imp__sub_832821A0) {
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
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r3,11040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11040);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832821cc
	if (ctx.cr6.eq) goto loc_832821CC;
	// bl 0x832f4030
	ctx.lr = 0x832821C4;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11040, ctx.r11.u32);
loc_832821CC:
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

__attribute__((alias("__imp__sub_832821E0"))) PPC_WEAK_FUNC(sub_832821E0);
PPC_FUNC_IMPL(__imp__sub_832821E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,11040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11040);
	// b 0x832f40c0
	sub_832F40C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832821EC"))) PPC_WEAK_FUNC(sub_832821EC);
PPC_FUNC_IMPL(__imp__sub_832821EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832821F0"))) PPC_WEAK_FUNC(sub_832821F0);
PPC_FUNC_IMPL(__imp__sub_832821F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,11040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11040);
	// b 0x832f4158
	sub_832F4158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832821FC"))) PPC_WEAK_FUNC(sub_832821FC);
PPC_FUNC_IMPL(__imp__sub_832821FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282200"))) PPC_WEAK_FUNC(sub_83282200);
PPC_FUNC_IMPL(__imp__sub_83282200) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,1568
	ctx.r31.s64 = ctx.r11.s64 + 1568;
	// li r5,199
	ctx.r5.s64 = 199;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328be48
	ctx.lr = 0x83282230;
	sub_8328BE48(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,17448
	ctx.r4.s64 = ctx.r11.s64 + 17448;
	// li r5,400
	ctx.r5.s64 = 400;
	// bl 0x832884b0
	ctx.lr = 0x83282244;
	sub_832884B0(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lis r9,23130
	ctx.r9.s64 = 1515847680;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,23130
	ctx.r9.u64 = ctx.r9.u64 | 23130;
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// stw r9,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r9.u32);
	// std r11,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83276a90
	ctx.lr = 0x8328226C;
	sub_83276A90(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x83287ca0
	ctx.lr = 0x83282274;
	sub_83287CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282038
	ctx.lr = 0x8328227C;
	sub_83282038(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,504
	ctx.r10.s64 = ctx.r31.s64 + 504;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8328228C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8328228c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8328228C;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83285b88
	ctx.lr = 0x832822A0;
	sub_83285B88(ctx, base);
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

__attribute__((alias("__imp__sub_832822B8"))) PPC_WEAK_FUNC(sub_832822B8);
PPC_FUNC_IMPL(__imp__sub_832822B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832822C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31822
	ctx.r27.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r28,r11,176
	ctx.r28.s64 = ctx.r11.s64 + 176;
	// lwz r3,2364(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832822f0
	if (ctx.cr6.eq) goto loc_832822F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832822F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832822F0:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,1568
	ctx.r31.s64 = ctx.r11.s64 + 1568;
	// addi r30,r31,508
	ctx.r30.s64 = ctx.r31.s64 + 508;
loc_83282300:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83282314
	if (ctx.cr6.eq) goto loc_83282314;
	// bl 0x83280050
	ctx.lr = 0x83282310;
	sub_83280050(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83282314:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r31,540
	ctx.r11.s64 = ctx.r31.s64 + 540;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83282300
	if (ctx.cr6.lt) goto loc_83282300;
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x82c10e98
	ctx.lr = 0x8328232C;
	sub_82C10E98(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x82c10e98
	ctx.lr = 0x83282334;
	sub_82C10E98(ctx, base);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x83285bc8
	ctx.lr = 0x8328233C;
	sub_83285BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832821a0
	ctx.lr = 0x83282344;
	sub_832821A0(ctx, base);
	// bl 0x83282138
	ctx.lr = 0x83282348;
	sub_83282138(ctx, base);
	// bl 0x832820e8
	ctx.lr = 0x8328234C;
	sub_832820E8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x8328235c
	if (!ctx.cr6.eq) goto loc_8328235C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_8328235C:
	// lwz r3,2364(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83282384
	if (ctx.cr6.eq) goto loc_83282384;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// stw r11,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83282384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83282384:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282390"))) PPC_WEAK_FUNC(sub_83282390);
PPC_FUNC_IMPL(__imp__sub_83282390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83282398;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x832823b4
	if (!ctx.cr6.eq) goto loc_832823B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83282448
	goto loc_83282448;
loc_832823B4:
	// lis r29,-31822
	ctx.r29.s64 = -2085486592;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,2768
	ctx.r31.s64 = ctx.r11.s64 + 2768;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832823f0
	if (ctx.cr6.eq) goto loc_832823F0;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832823EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_832823F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83282408
	if (!ctx.cr6.eq) goto loc_83282408;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,11020
	ctx.r3.s64 = ctx.r11.s64 + 11020;
	// bl 0x83282048
	ctx.lr = 0x83282404;
	sub_83282048(ctx, base);
	// b 0x83282424
	goto loc_83282424;
loc_83282408:
	// addi r3,r30,2584
	ctx.r3.s64 = ctx.r30.s64 + 2584;
	// bl 0x83282048
	ctx.lr = 0x83282410;
	sub_83282048(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83282424
	if (!ctx.cr6.gt) goto loc_83282424;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
loc_83282424:
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83282444
	if (ctx.cr6.eq) goto loc_83282444;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83282444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83282444:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_83282448:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282450"))) PPC_WEAK_FUNC(sub_83282450);
PPC_FUNC_IMPL(__imp__sub_83282450) {
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
	// bne cr6,0x83282474
	if (!ctx.cr6.eq) goto loc_83282474;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,11020
	ctx.r3.s64 = ctx.r11.s64 + 11020;
	// b 0x8328249c
	goto loc_8328249C;
loc_83282474:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83282090
	ctx.lr = 0x8328247C;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83282498
	if (ctx.cr0.eq) goto loc_83282498;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,257
	ctx.r4.u64 = ctx.r4.u64 | 257;
	// bl 0x83282390
	ctx.lr = 0x83282494;
	sub_83282390(ctx, base);
	// b 0x832824a4
	goto loc_832824A4;
loc_83282498:
	// addi r3,r9,2584
	ctx.r3.s64 = ctx.r9.s64 + 2584;
loc_8328249C:
	// bl 0x83282080
	ctx.lr = 0x832824A0;
	sub_83282080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832824A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832824B4"))) PPC_WEAK_FUNC(sub_832824B4);
PPC_FUNC_IMPL(__imp__sub_832824B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832824B8"))) PPC_WEAK_FUNC(sub_832824B8);
PPC_FUNC_IMPL(__imp__sub_832824B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832824C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31822
	ctx.r29.s64 = -2085486592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31845
	ctx.r11.s64 = -2086993920;
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832824fc
	if (ctx.cr6.eq) goto loc_832824FC;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832824FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832824FC:
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,15104
	ctx.r11.s64 = 15104;
	// addi r10,r10,19168
	ctx.r10.s64 = ctx.r10.s64 + 19168;
	// stw r10,11016(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11016, ctx.r10.u32);
	// stw r11,2372(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2372, ctx.r11.u32);
	// bl 0x832820c0
	ctx.lr = 0x8328251C;
	sub_832820C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282200
	ctx.lr = 0x83282524;
	sub_83282200(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83282538
	if (!ctx.cr0.eq) goto loc_83282538;
	// bl 0x83282110
	ctx.lr = 0x83282534;
	sub_83282110(ctx, base);
	// bl 0x83282160
	ctx.lr = 0x83282538;
	sub_83282160(ctx, base);
loc_83282538:
	// lwz r3,2364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83282560
	if (ctx.cr6.eq) goto loc_83282560;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83282560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83282560:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328256C"))) PPC_WEAK_FUNC(sub_8328256C);
PPC_FUNC_IMPL(__imp__sub_8328256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282570"))) PPC_WEAK_FUNC(sub_83282570);
PPC_FUNC_IMPL(__imp__sub_83282570) {
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
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r11,11080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11080);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11080, ctx.r11.u32);
	// lwz r11,11080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832825c8
	if (!ctx.cr6.eq) goto loc_832825C8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,11044
	ctx.r31.s64 = ctx.r11.s64 + 11044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f3f50
	ctx.lr = 0x832825B0;
	sub_832F3F50(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832825c8
	if (!ctx.cr0.eq) goto loc_832825C8;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3937
	ctx.r4.u64 = ctx.r4.u64 | 3937;
	// bl 0x83282390
	ctx.lr = 0x832825C8;
	sub_83282390(ctx, base);
loc_832825C8:
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

__attribute__((alias("__imp__sub_832825DC"))) PPC_WEAK_FUNC(sub_832825DC);
PPC_FUNC_IMPL(__imp__sub_832825DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832825E0"))) PPC_WEAK_FUNC(sub_832825E0);
PPC_FUNC_IMPL(__imp__sub_832825E0) {
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
	// addi r31,r11,11080
	ctx.r31.s64 = ctx.r11.s64 + 11080;
	// lwz r11,11080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11080);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83282628
	if (!ctx.cr6.eq) goto loc_83282628;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83282628
	if (ctx.cr6.eq) goto loc_83282628;
	// bl 0x832f4030
	ctx.lr = 0x83282620;
	sub_832F4030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_83282628:
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

__attribute__((alias("__imp__sub_8328263C"))) PPC_WEAK_FUNC(sub_8328263C);
PPC_FUNC_IMPL(__imp__sub_8328263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282640"))) PPC_WEAK_FUNC(sub_83282640);
PPC_FUNC_IMPL(__imp__sub_83282640) {
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
	// lwz r3,11076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11076);
	// bl 0x832f40c0
	ctx.lr = 0x83282658;
	sub_832F40C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83282670
	if (!ctx.cr0.lt) goto loc_83282670;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3938
	ctx.r4.u64 = ctx.r4.u64 | 3938;
	// bl 0x83282390
	ctx.lr = 0x83282670;
	sub_83282390(ctx, base);
loc_83282670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282680"))) PPC_WEAK_FUNC(sub_83282680);
PPC_FUNC_IMPL(__imp__sub_83282680) {
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
	// lwz r3,11076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11076);
	// bl 0x832f4158
	ctx.lr = 0x83282698;
	sub_832F4158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832826b0
	if (!ctx.cr0.lt) goto loc_832826B0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3939
	ctx.r4.u64 = ctx.r4.u64 | 3939;
	// bl 0x83282390
	ctx.lr = 0x832826B0;
	sub_83282390(ctx, base);
loc_832826B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832826C0"))) PPC_WEAK_FUNC(sub_832826C0);
PPC_FUNC_IMPL(__imp__sub_832826C0) {
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
	ctx.lr = 0x832826D8;
	sub_83282090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832826f4
	if (ctx.cr0.eq) goto loc_832826F4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,353
	ctx.r4.u64 = ctx.r4.u64 | 353;
	// bl 0x83282390
	ctx.lr = 0x832826F0;
	sub_83282390(ctx, base);
	// b 0x83282708
	goto loc_83282708;
loc_832826F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d40
	ctx.lr = 0x83282704;
	sub_83274D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83282708:
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

__attribute__((alias("__imp__sub_8328271C"))) PPC_WEAK_FUNC(sub_8328271C);
PPC_FUNC_IMPL(__imp__sub_8328271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282720"))) PPC_WEAK_FUNC(sub_83282720);
PPC_FUNC_IMPL(__imp__sub_83282720) {
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
	// li r4,49
	ctx.r4.s64 = 49;
	// bl 0x83274d00
	ctx.lr = 0x83282734;
	sub_83274D00(ctx, base);
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

__attribute__((alias("__imp__sub_8328274C"))) PPC_WEAK_FUNC(sub_8328274C);
PPC_FUNC_IMPL(__imp__sub_8328274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282750"))) PPC_WEAK_FUNC(sub_83282750);
PPC_FUNC_IMPL(__imp__sub_83282750) {
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
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x8328276C;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8328278c
	if (!ctx.cr0.eq) goto loc_8328278C;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x83282780;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83282790
	if (ctx.cr0.eq) goto loc_83282790;
loc_8328278C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83282790:
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

__attribute__((alias("__imp__sub_832827A4"))) PPC_WEAK_FUNC(sub_832827A4);
PPC_FUNC_IMPL(__imp__sub_832827A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832827A8"))) PPC_WEAK_FUNC(sub_832827A8);
PPC_FUNC_IMPL(__imp__sub_832827A8) {
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
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83274d00
	ctx.lr = 0x832827C4;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832827e4
	if (!ctx.cr0.eq) goto loc_832827E4;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83274d00
	ctx.lr = 0x832827D8;
	sub_83274D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x832827e8
	if (ctx.cr0.eq) goto loc_832827E8;
loc_832827E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_832827E8:
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

__attribute__((alias("__imp__sub_832827FC"))) PPC_WEAK_FUNC(sub_832827FC);
PPC_FUNC_IMPL(__imp__sub_832827FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282800"))) PPC_WEAK_FUNC(sub_83282800);
PPC_FUNC_IMPL(__imp__sub_83282800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83282808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,3496
	ctx.r30.s64 = ctx.r3.s64 + 3496;
	// bl 0x83282640
	ctx.lr = 0x8328281C;
	sub_83282640(ctx, base);
	// lwz r11,3848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3848);
	// lwz r10,3844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3844);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// stw r10,3844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3844, ctx.r10.u32);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r9,r9,89
	ctx.r9.s64 = ctx.r9.s64 + 89;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u32);
	// stw r11,3848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3848, ctx.r11.u32);
	// bl 0x83282680
	ctx.lr = 0x83282854;
	sub_83282680(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328285C"))) PPC_WEAK_FUNC(sub_8328285C);
PPC_FUNC_IMPL(__imp__sub_8328285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282860"))) PPC_WEAK_FUNC(sub_83282860);
PPC_FUNC_IMPL(__imp__sub_83282860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83282868;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r3,3496
	ctx.r31.s64 = ctx.r3.s64 + 3496;
	// bl 0x83282640
	ctx.lr = 0x8328287C;
	sub_83282640(ctx, base);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// lwz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83282898
	if (ctx.cr6.lt) goto loc_83282898;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832828d4
	goto loc_832828D4;
loc_83282898:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// stw r29,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r29.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lwz r10,496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
loc_832828D4:
	// bl 0x83282680
	ctx.lr = 0x832828D8;
	sub_83282680(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832828E4"))) PPC_WEAK_FUNC(sub_832828E4);
PPC_FUNC_IMPL(__imp__sub_832828E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832828E8"))) PPC_WEAK_FUNC(sub_832828E8);
PPC_FUNC_IMPL(__imp__sub_832828E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x832828F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r3,3496
	ctx.r31.s64 = ctx.r3.s64 + 3496;
	// bl 0x83282640
	ctx.lr = 0x83282904;
	sub_83282640(ctx, base);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// lwz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x83282924
	if (ctx.cr0.gt) goto loc_83282924;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83282960
	goto loc_83282960;
loc_83282924:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
loc_83282960:
	// bl 0x83282680
	ctx.lr = 0x83282964;
	sub_83282680(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282970"))) PPC_WEAK_FUNC(sub_83282970);
PPC_FUNC_IMPL(__imp__sub_83282970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83282978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r10,-6528
	ctx.r4.s64 = ctx.r10.s64 + -6528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83282ca0
	ctx.lr = 0x8328299C;
	sub_83282CA0(ctx, base);
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10944
	ctx.r4.s64 = ctx.r11.s64 + -10944;
	// bl 0x83282ca8
	ctx.lr = 0x832829AC;
	sub_83282CA8(ctx, base);
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10776
	ctx.r4.s64 = ctx.r11.s64 + -10776;
	// bl 0x83282cb0
	ctx.lr = 0x832829BC;
	sub_83282CB0(ctx, base);
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10032
	ctx.r4.s64 = ctx.r11.s64 + -10032;
	// bl 0x83282cc0
	ctx.lr = 0x832829CC;
	sub_83282CC0(ctx, base);
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10384
	ctx.r4.s64 = ctx.r11.s64 + -10384;
	// bl 0x83282cd0
	ctx.lr = 0x832829DC;
	sub_83282CD0(ctx, base);
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9192
	ctx.r4.s64 = ctx.r11.s64 + -9192;
	// bl 0x83282ce0
	ctx.lr = 0x832829EC;
	sub_83282CE0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832831a8
	ctx.lr = 0x832829FC;
	sub_832831A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282A04"))) PPC_WEAK_FUNC(sub_83282A04);
PPC_FUNC_IMPL(__imp__sub_83282A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282A08"))) PPC_WEAK_FUNC(sub_83282A08);
PPC_FUNC_IMPL(__imp__sub_83282A08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// b 0x83283770
	sub_83283770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282A24"))) PPC_WEAK_FUNC(sub_83282A24);
PPC_FUNC_IMPL(__imp__sub_83282A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282A28"))) PPC_WEAK_FUNC(sub_83282A28);
PPC_FUNC_IMPL(__imp__sub_83282A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282A50"))) PPC_WEAK_FUNC(sub_83282A50);
PPC_FUNC_IMPL(__imp__sub_83282A50) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// bgt cr6,0x83282a94
	if (ctx.cr6.gt) goto loc_83282A94;
	// beq cr6,0x83282ad0
	if (ctx.cr6.eq) goto loc_83282AD0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x83282ad0
	if (ctx.cr6.eq) goto loc_83282AD0;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x83282ae4
	if (ctx.cr6.eq) goto loc_83282AE4;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x83282ad0
	if (ctx.cr6.eq) goto loc_83282AD0;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x83282ad0
	if (ctx.cr6.eq) goto loc_83282AD0;
	// cmpwi cr6,r11,81
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 81, ctx.xer);
	// b 0x83282ab8
	goto loc_83282AB8;
loc_83282A94:
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x83282ad0
	if (ctx.cr6.eq) goto loc_83282AD0;
	// cmpwi cr6,r11,241
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 241, ctx.xer);
	// beq cr6,0x83282ad0
	if (ctx.cr6.eq) goto loc_83282AD0;
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// beq cr6,0x83282ae4
	if (ctx.cr6.eq) goto loc_83282AE4;
	// cmpwi cr6,r11,273
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 273, ctx.xer);
	// beq cr6,0x83282ad0
	if (ctx.cr6.eq) goto loc_83282AD0;
	// cmpwi cr6,r11,4097
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4097, ctx.xer);
loc_83282AB8:
	// beq cr6,0x83282ad0
	if (ctx.cr6.eq) goto loc_83282AD0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83283478
	ctx.lr = 0x83282AD0;
	sub_83283478(ctx, base);
loc_83282AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83282AD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83282AE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83282ad4
	goto loc_83282AD4;
}

__attribute__((alias("__imp__sub_83282AEC"))) PPC_WEAK_FUNC(sub_83282AEC);
PPC_FUNC_IMPL(__imp__sub_83282AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282AF0"))) PPC_WEAK_FUNC(sub_83282AF0);
PPC_FUNC_IMPL(__imp__sub_83282AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,81
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 81, ctx.xer);
	// bne cr6,0x83282b04
	if (!ctx.cr6.eq) goto loc_83282B04;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83282B04:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x83282b1c
	if (ctx.cr6.eq) goto loc_83282B1C;
	// lwz r11,148(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// li r3,4
	ctx.r3.s64 = 4;
	// cmpwi cr6,r11,81
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 81, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_83282B1C:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282B24"))) PPC_WEAK_FUNC(sub_83282B24);
PPC_FUNC_IMPL(__imp__sub_83282B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282B28"))) PPC_WEAK_FUNC(sub_83282B28);
PPC_FUNC_IMPL(__imp__sub_83282B28) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bne cr6,0x83282b50
	if (!ctx.cr6.eq) goto loc_83282B50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83282b9c
	goto loc_83282B9C;
loc_83282B50:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x83282b98
	if (!ctx.cr6.eq) goto loc_83282B98;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x83282b94
	if (ctx.cr6.eq) goto loc_83282B94;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x83282b84
	if (ctx.cr6.eq) goto loc_83282B84;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// ble cr6,0x83282b98
	if (!ctx.cr6.gt) goto loc_83282B98;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// ble cr6,0x83282b94
	if (!ctx.cr6.gt) goto loc_83282B94;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// beq cr6,0x83282b94
	if (ctx.cr6.eq) goto loc_83282B94;
	// b 0x83282b98
	goto loc_83282B98;
loc_83282B84:
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8313bd90
	ctx.lr = 0x83282B8C;
	sub_8313BD90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83282b98
	if (ctx.cr6.eq) goto loc_83282B98;
loc_83282B94:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83282B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83282B9C:
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

__attribute__((alias("__imp__sub_83282BB0"))) PPC_WEAK_FUNC(sub_83282BB0);
PPC_FUNC_IMPL(__imp__sub_83282BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,84(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83284278
	sub_83284278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282BC0"))) PPC_WEAK_FUNC(sub_83282BC0);
PPC_FUNC_IMPL(__imp__sub_83282BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83282BD0:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83282bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83282BD0;
	// li r10,220
	ctx.r10.s64 = 220;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// subfic r9,r3,-16
	ctx.xer.ca = ctx.r3.u32 <= 4294967280;
	ctx.r9.s64 = -16 - ctx.r3.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,19372(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	ctx.f13.f64 = double(temp.f32);
loc_83282BF8:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f12.u64);
	// lbz r10,-1(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -1);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83282bf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83282BF8;
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r10,r3,236
	ctx.r10.s64 = ctx.r3.s64 + 236;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83282C40:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83282c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83282C40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282C4C"))) PPC_WEAK_FUNC(sub_83282C4C);
PPC_FUNC_IMPL(__imp__sub_83282C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282C50"))) PPC_WEAK_FUNC(sub_83282C50);
PPC_FUNC_IMPL(__imp__sub_83282C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,84(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8328e800
	sub_8328E800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282C60"))) PPC_WEAK_FUNC(sub_83282C60);
PPC_FUNC_IMPL(__imp__sub_83282C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,84(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8328e858
	sub_8328E858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282C70"))) PPC_WEAK_FUNC(sub_83282C70);
PPC_FUNC_IMPL(__imp__sub_83282C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,84(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8328e888
	sub_8328E888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282C80"))) PPC_WEAK_FUNC(sub_83282C80);
PPC_FUNC_IMPL(__imp__sub_83282C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83282C98"))) PPC_WEAK_FUNC(sub_83282C98);
PPC_FUNC_IMPL(__imp__sub_83282C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282C9C"))) PPC_WEAK_FUNC(sub_83282C9C);
PPC_FUNC_IMPL(__imp__sub_83282C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282CA0"))) PPC_WEAK_FUNC(sub_83282CA0);
PPC_FUNC_IMPL(__imp__sub_83282CA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282CA8"))) PPC_WEAK_FUNC(sub_83282CA8);
PPC_FUNC_IMPL(__imp__sub_83282CA8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282CB0"))) PPC_WEAK_FUNC(sub_83282CB0);
PPC_FUNC_IMPL(__imp__sub_83282CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282CBC"))) PPC_WEAK_FUNC(sub_83282CBC);
PPC_FUNC_IMPL(__imp__sub_83282CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282CC0"))) PPC_WEAK_FUNC(sub_83282CC0);
PPC_FUNC_IMPL(__imp__sub_83282CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282CCC"))) PPC_WEAK_FUNC(sub_83282CCC);
PPC_FUNC_IMPL(__imp__sub_83282CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282CD0"))) PPC_WEAK_FUNC(sub_83282CD0);
PPC_FUNC_IMPL(__imp__sub_83282CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282CDC"))) PPC_WEAK_FUNC(sub_83282CDC);
PPC_FUNC_IMPL(__imp__sub_83282CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282CE0"))) PPC_WEAK_FUNC(sub_83282CE0);
PPC_FUNC_IMPL(__imp__sub_83282CE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282CE8"))) PPC_WEAK_FUNC(sub_83282CE8);
PPC_FUNC_IMPL(__imp__sub_83282CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83282CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83282D10;
	sub_833A2B30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83282dc0
	if (ctx.cr6.eq) goto loc_83282DC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83282dc0
	if (ctx.cr6.eq) goto loc_83282DC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83282d44
	if (ctx.cr6.eq) goto loc_83282D44;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,19376
	ctx.r5.s64 = ctx.r11.s64 + 19376;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83283478
	ctx.lr = 0x83282D40;
	sub_83283478(ctx, base);
	// b 0x83282de8
	goto loc_83282DE8;
loc_83282D44:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x83282de8
	goto loc_83282DE8;
loc_83282DC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83282DE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282DF0"))) PPC_WEAK_FUNC(sub_83282DF0);
PPC_FUNC_IMPL(__imp__sub_83282DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83282DF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83282ce8
	ctx.lr = 0x83282E10;
	sub_83282CE8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83282eb0
	if (!ctx.cr6.gt) goto loc_83282EB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x83282ec4
	if (!ctx.cr6.gt) goto loc_83282EC4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83282eb0
	if (!ctx.cr6.eq) goto loc_83282EB0;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bne cr6,0x83282ea8
	if (!ctx.cr6.eq) goto loc_83282EA8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,19508
	ctx.r5.s64 = ctx.r10.s64 + 19508;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x83282eb8
	goto loc_83282EB8;
loc_83282EA8:
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// b 0x83282ec4
	goto loc_83282EC4;
loc_83282EB0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r11,19440
	ctx.r5.s64 = ctx.r11.s64 + 19440;
loc_83282EB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83283478
	ctx.lr = 0x83282EC4;
	sub_83283478(ctx, base);
loc_83282EC4:
	// bl 0x832834c0
	ctx.lr = 0x83282EC8;
	sub_832834C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83282ed8
	if (!ctx.cr6.eq) goto loc_83282ED8;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// b 0x83282edc
	goto loc_83282EDC;
loc_83282ED8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83282EDC:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83282f00
	if (ctx.cr6.eq) goto loc_83282F00;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x83282F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83282F00:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282F08"))) PPC_WEAK_FUNC(sub_83282F08);
PPC_FUNC_IMPL(__imp__sub_83282F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83282F10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r30,r11,r6
	ctx.r30.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x83282a50
	ctx.lr = 0x83282F34;
	sub_83282A50(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83282f48
	if (!ctx.cr6.eq) goto loc_83282F48;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
loc_83282F48:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x83282f70
	if (!ctx.cr6.eq) goto loc_83282F70;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r28,68(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,19572
	ctx.r5.s64 = ctx.r11.s64 + 19572;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83283478
	ctx.lr = 0x83282F70;
	sub_83283478(ctx, base);
loc_83282F70:
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282F7C"))) PPC_WEAK_FUNC(sub_83282F7C);
PPC_FUNC_IMPL(__imp__sub_83282F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282F80"))) PPC_WEAK_FUNC(sub_83282F80);
PPC_FUNC_IMPL(__imp__sub_83282F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x83282bc0
	sub_83282BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282F88"))) PPC_WEAK_FUNC(sub_83282F88);
PPC_FUNC_IMPL(__imp__sub_83282F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83282F90;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83282FB4;
	sub_833A2B30(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282ce8
	ctx.lr = 0x83282FC4;
	sub_83282CE8(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x83282fd4
	if (!ctx.cr6.eq) goto loc_83282FD4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// b 0x83282fd8
	goto loc_83282FD8;
loc_83282FD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83282FD8:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83283740
	ctx.lr = 0x83282FEC;
	sub_83283740(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83282ffc
	if (!ctx.cr6.eq) goto loc_83282FFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282a28
	ctx.lr = 0x83282FFC;
	sub_83282A28(ctx, base);
loc_83282FFC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328301c
	if (ctx.cr6.eq) goto loc_8328301C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bctrl 
	ctx.lr = 0x8328301C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328301C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283024"))) PPC_WEAK_FUNC(sub_83283024);
PPC_FUNC_IMPL(__imp__sub_83283024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283028"))) PPC_WEAK_FUNC(sub_83283028);
PPC_FUNC_IMPL(__imp__sub_83283028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83283030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83282f88
	ctx.lr = 0x83283048;
	sub_83282F88(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282df0
	ctx.lr = 0x83283058;
	sub_83282DF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283060"))) PPC_WEAK_FUNC(sub_83283060);
PPC_FUNC_IMPL(__imp__sub_83283060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83283068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83282a08
	ctx.lr = 0x83283090;
	sub_83282A08(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832830A0;
	sub_833A2B30(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282f08
	ctx.lr = 0x832830B8;
	sub_83282F08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832830C8"))) PPC_WEAK_FUNC(sub_832830C8);
PPC_FUNC_IMPL(__imp__sub_832830C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832830D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83282b28
	ctx.lr = 0x832830E8;
	sub_83282B28(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83283194
	if (!ctx.cr6.eq) goto loc_83283194;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8328318c
	if (ctx.cr6.eq) goto loc_8328318C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8328317c
	if (ctx.cr6.eq) goto loc_8328317C;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x8328316c
	if (ctx.cr6.eq) goto loc_8328316C;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// beq cr6,0x8328315c
	if (ctx.cr6.eq) goto loc_8328315C;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// beq cr6,0x8328314c
	if (ctx.cr6.eq) goto loc_8328314C;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// beq cr6,0x8328314c
	if (ctx.cr6.eq) goto loc_8328314C;
	// cmpwi cr6,r31,21
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 21, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x83283144
	if (ctx.cr6.eq) goto loc_83283144;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,19636
	ctx.r5.s64 = ctx.r11.s64 + 19636;
	// bl 0x83283478
	ctx.lr = 0x83283140;
	sub_83283478(ctx, base);
	// b 0x83283194
	goto loc_83283194;
loc_83283144:
	// bl 0x83282c80
	ctx.lr = 0x83283148;
	sub_83282C80(ctx, base);
	// b 0x83283194
	goto loc_83283194;
loc_8328314C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282bb0
	ctx.lr = 0x83283158;
	sub_83282BB0(ctx, base);
	// b 0x83283194
	goto loc_83283194;
loc_8328315C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282c70
	ctx.lr = 0x83283168;
	sub_83282C70(ctx, base);
	// b 0x83283194
	goto loc_83283194;
loc_8328316C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282c60
	ctx.lr = 0x83283178;
	sub_83282C60(ctx, base);
	// b 0x83283194
	goto loc_83283194;
loc_8328317C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282c50
	ctx.lr = 0x83283188;
	sub_83282C50(ctx, base);
	// b 0x83283194
	goto loc_83283194;
loc_8328318C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83282f80
	ctx.lr = 0x83283194;
	sub_83282F80(ctx, base);
loc_83283194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328319C"))) PPC_WEAK_FUNC(sub_8328319C);
PPC_FUNC_IMPL(__imp__sub_8328319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832831A0"))) PPC_WEAK_FUNC(sub_832831A0);
PPC_FUNC_IMPL(__imp__sub_832831A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832830c8
	sub_832830C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832831A4"))) PPC_WEAK_FUNC(sub_832831A4);
PPC_FUNC_IMPL(__imp__sub_832831A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832831A8"))) PPC_WEAK_FUNC(sub_832831A8);
PPC_FUNC_IMPL(__imp__sub_832831A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x832831B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832831e4
	if (!ctx.cr6.eq) goto loc_832831E4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,19748
	ctx.r4.s64 = ctx.r11.s64 + 19748;
	// bl 0x82ce7018
	ctx.lr = 0x832831DC;
	sub_82CE7018(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_832831E4:
	// cmpwi cr6,r11,81
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 81, ctx.xer);
	// bgt cr6,0x83283288
	if (ctx.cr6.gt) goto loc_83283288;
	// beq cr6,0x83283210
	if (ctx.cr6.eq) goto loc_83283210;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x83283274
	if (ctx.cr6.eq) goto loc_83283274;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x83283250
	if (ctx.cr6.eq) goto loc_83283250;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x83283248
	if (ctx.cr6.eq) goto loc_83283248;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bne cr6,0x832832a0
	if (!ctx.cr6.eq) goto loc_832832A0;
loc_83283210:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282af0
	ctx.lr = 0x8328321C;
	sub_83282AF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_83283220:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832831a0
	ctx.lr = 0x8328322C;
	sub_832831A0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_83283230:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83282f88
	ctx.lr = 0x83283240;
	sub_83282F88(ctx, base);
loc_83283240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
loc_83283248:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x83283220
	goto loc_83283220;
loc_83283250:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832831a0
	ctx.lr = 0x83283260;
	sub_832831A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83283028
	ctx.lr = 0x83283270;
	sub_83283028(ctx, base);
	// b 0x83283240
	goto loc_83283240;
loc_83283274:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832832b8
	if (ctx.cr6.eq) goto loc_832832B8;
loc_83283280:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83283230
	goto loc_83283230;
loc_83283288:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x83283210
	if (ctx.cr6.eq) goto loc_83283210;
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// beq cr6,0x83283280
	if (ctx.cr6.eq) goto loc_83283280;
	// cmpwi cr6,r11,4097
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4097, ctx.xer);
	// beq cr6,0x832832b8
	if (ctx.cr6.eq) goto loc_832832B8;
loc_832832A0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,19688
	ctx.r5.s64 = ctx.r11.s64 + 19688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83283478
	ctx.lr = 0x832832B4;
	sub_83283478(ctx, base);
	// b 0x83283240
	goto loc_83283240;
loc_832832B8:
	// li r5,21
	ctx.r5.s64 = 21;
	// b 0x83283220
	goto loc_83283220;
}

__attribute__((alias("__imp__sub_832832C0"))) PPC_WEAK_FUNC(sub_832832C0);
PPC_FUNC_IMPL(__imp__sub_832832C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,19756
	ctx.r3.s64 = ctx.r11.s64 + 19756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832832CC"))) PPC_WEAK_FUNC(sub_832832CC);
PPC_FUNC_IMPL(__imp__sub_832832CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832832D0"))) PPC_WEAK_FUNC(sub_832832D0);
PPC_FUNC_IMPL(__imp__sub_832832D0) {
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
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r11,11088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8328330c
	if (!ctx.cr6.gt) goto loc_8328330C;
	// bl 0x82c10e98
	ctx.lr = 0x832832F4;
	sub_82C10E98(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x832832F8;
	sub_82C10E98(ctx, base);
	// bl 0x8328e928
	ctx.lr = 0x832832FC;
	sub_8328E928(ctx, base);
	// bl 0x82c10e98
	ctx.lr = 0x83283300;
	sub_82C10E98(ctx, base);
	// lwz r11,11088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,11088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11088, ctx.r11.u32);
loc_8328330C:
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

__attribute__((alias("__imp__sub_83283320"))) PPC_WEAK_FUNC(sub_83283320);
PPC_FUNC_IMPL(__imp__sub_83283320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283334"))) PPC_WEAK_FUNC(sub_83283334);
PPC_FUNC_IMPL(__imp__sub_83283334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283338"))) PPC_WEAK_FUNC(sub_83283338);
PPC_FUNC_IMPL(__imp__sub_83283338) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x83283370
	if (!ctx.cr0.gt) goto loc_83283370;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
loc_83283354:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83283354
	if (ctx.cr6.lt) goto loc_83283354;
loc_83283370:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283378"))) PPC_WEAK_FUNC(sub_83283378);
PPC_FUNC_IMPL(__imp__sub_83283378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83283380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,156
	ctx.r5.s64 = 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x833a2b30
	ctx.lr = 0x8328339C;
	sub_833A2B30(ctx, base);
	// addi r10,r31,31
	ctx.r10.s64 = ctx.r31.s64 + 31;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r10,r9,1024
	ctx.r10.s64 = ctx.r9.s64 + 1024;
	// stw r9,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r9,r10,1024
	ctx.r9.s64 = ctx.r10.s64 + 1024;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r10,r9,1024
	ctx.r10.s64 = ctx.r9.s64 + 1024;
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
	// stw r8,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r8.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r10,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r10.u32);
	// stw r7,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r7.u32);
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283400"))) PPC_WEAK_FUNC(sub_83283400);
PPC_FUNC_IMPL(__imp__sub_83283400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,8223
	ctx.r11.s64 = 8223;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283418"))) PPC_WEAK_FUNC(sub_83283418);
PPC_FUNC_IMPL(__imp__sub_83283418) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83283460
	if (ctx.cr6.eq) goto loc_83283460;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x83283a48
	ctx.lr = 0x83283448;
	sub_83283A48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e7d8
	ctx.lr = 0x83283450;
	sub_8328E7D8(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
loc_83283460:
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

__attribute__((alias("__imp__sub_83283474"))) PPC_WEAK_FUNC(sub_83283474);
PPC_FUNC_IMPL(__imp__sub_83283474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283478"))) PPC_WEAK_FUNC(sub_83283478);
PPC_FUNC_IMPL(__imp__sub_83283478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832834AC"))) PPC_WEAK_FUNC(sub_832834AC);
PPC_FUNC_IMPL(__imp__sub_832834AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832834B0"))) PPC_WEAK_FUNC(sub_832834B0);
PPC_FUNC_IMPL(__imp__sub_832834B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832834C0"))) PPC_WEAK_FUNC(sub_832834C0);
PPC_FUNC_IMPL(__imp__sub_832834C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832834D0"))) PPC_WEAK_FUNC(sub_832834D0);
PPC_FUNC_IMPL(__imp__sub_832834D0) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r5,1288
	ctx.r5.s64 = 1288;
	// addi r31,r11,256
	ctx.r31.s64 = ctx.r11.s64 + 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x832834F8;
	sub_833A2B30(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x832834b0
	ctx.lr = 0x83283508;
	sub_832834B0(ctx, base);
	// bl 0x8328e908
	ctx.lr = 0x8328350C;
	sub_8328E908(ctx, base);
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

__attribute__((alias("__imp__sub_83283520"))) PPC_WEAK_FUNC(sub_83283520);
PPC_FUNC_IMPL(__imp__sub_83283520) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x83283338
	ctx.lr = 0x8328353C;
	sub_83283338(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8328354c
	if (!ctx.cr0.eq) goto loc_8328354C;
loc_83283544:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832835e0
	goto loc_832835E0;
loc_8328354C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83283400
	ctx.lr = 0x83283554;
	sub_83283400(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83283574
	if (ctx.cr6.eq) goto loc_83283574;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19876
	ctx.r5.s64 = ctx.r11.s64 + 19876;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83283478
	ctx.lr = 0x83283570;
	sub_83283478(ctx, base);
	// b 0x83283544
	goto loc_83283544;
loc_83283574:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83283378
	ctx.lr = 0x83283580;
	sub_83283378(ctx, base);
	// bl 0x83283e90
	ctx.lr = 0x83283584;
	sub_83283E90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832835ac
	if (!ctx.cr0.eq) goto loc_832835AC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r11,19844
	ctx.r5.s64 = ctx.r11.s64 + 19844;
loc_83283594:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83283478
	ctx.lr = 0x832835A0;
	sub_83283478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83283418
	ctx.lr = 0x832835A8;
	sub_83283418(ctx, base);
	// b 0x83283544
	goto loc_83283544;
loc_832835AC:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x8328e8c0
	ctx.lr = 0x832835B4;
	sub_8328E8C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832835c8
	if (!ctx.cr0.eq) goto loc_832835C8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r11,19812
	ctx.r5.s64 = ctx.r11.s64 + 19812;
	// b 0x83283594
	goto loc_83283594;
loc_832835C8:
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
loc_832835E0:
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

__attribute__((alias("__imp__sub_832835F4"))) PPC_WEAK_FUNC(sub_832835F4);
PPC_FUNC_IMPL(__imp__sub_832835F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832835F8"))) PPC_WEAK_FUNC(sub_832835F8);
PPC_FUNC_IMPL(__imp__sub_832835F8) {
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
	// lis r31,-31827
	ctx.r31.s64 = -2085814272;
	// lwz r11,11088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8328364c
	if (!ctx.cr6.lt) goto loc_8328364C;
	// bl 0x832832c0
	ctx.lr = 0x8328361C;
	sub_832832C0(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// stw r3,11084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11084, ctx.r3.u32);
	// bl 0x832834d0
	ctx.lr = 0x83283628;
	sub_832834D0(ctx, base);
	// bl 0x8328e920
	ctx.lr = 0x8328362C;
	sub_8328E920(ctx, base);
	// bl 0x832841d8
	ctx.lr = 0x83283630;
	sub_832841D8(ctx, base);
	// bl 0x8328e8b8
	ctx.lr = 0x83283634;
	sub_8328E8B8(ctx, base);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11092, ctx.r11.u32);
	// lwz r11,11088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11088, ctx.r11.u32);
loc_8328364C:
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

__attribute__((alias("__imp__sub_83283660"))) PPC_WEAK_FUNC(sub_83283660);
PPC_FUNC_IMPL(__imp__sub_83283660) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328366C"))) PPC_WEAK_FUNC(sub_8328366C);
PPC_FUNC_IMPL(__imp__sub_8328366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283670"))) PPC_WEAK_FUNC(sub_83283670);
PPC_FUNC_IMPL(__imp__sub_83283670) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r5,r10,13492
	ctx.r5.s64 = ctx.r10.s64 + 13492;
	// addi r4,r9,19920
	ctx.r4.s64 = ctx.r9.s64 + 19920;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832f0eb0
	ctx.lr = 0x832836BC;
	sub_832F0EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x832836d4
	if (!ctx.cr0.eq) goto loc_832836D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832836dc
	goto loc_832836DC;
loc_832836D4:
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_832836DC:
	// bl 0x83283ed8
	ctx.lr = 0x832836E0;
	sub_83283ED8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83283700"))) PPC_WEAK_FUNC(sub_83283700);
PPC_FUNC_IMPL(__imp__sub_83283700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83283718
	if (ctx.cr6.eq) goto loc_83283718;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x83283724
	goto loc_83283724;
loc_83283718:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_83283724:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328372C"))) PPC_WEAK_FUNC(sub_8328372C);
PPC_FUNC_IMPL(__imp__sub_8328372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283730"))) PPC_WEAK_FUNC(sub_83283730);
PPC_FUNC_IMPL(__imp__sub_83283730) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,84(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83283ef0
	sub_83283EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328373C"))) PPC_WEAK_FUNC(sub_8328373C);
PPC_FUNC_IMPL(__imp__sub_8328373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283740"))) PPC_WEAK_FUNC(sub_83283740);
PPC_FUNC_IMPL(__imp__sub_83283740) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283748"))) PPC_WEAK_FUNC(sub_83283748);
PPC_FUNC_IMPL(__imp__sub_83283748) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r4,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283770"))) PPC_WEAK_FUNC(sub_83283770);
PPC_FUNC_IMPL(__imp__sub_83283770) {
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
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83283748
	ctx.lr = 0x832837A8;
	sub_83283748(ctx, base);
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// addi r3,r8,20
	ctx.r3.s64 = ctx.r8.s64 + 20;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x83283748
	ctx.lr = 0x832837C0;
	sub_83283748(ctx, base);
	// addi r3,r8,36
	ctx.r3.s64 = ctx.r8.s64 + 36;
	// bl 0x83283748
	ctx.lr = 0x832837C8;
	sub_83283748(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832837D8"))) PPC_WEAK_FUNC(sub_832837D8);
PPC_FUNC_IMPL(__imp__sub_832837D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832837E4"))) PPC_WEAK_FUNC(sub_832837E4);
PPC_FUNC_IMPL(__imp__sub_832837E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832837E8"))) PPC_WEAK_FUNC(sub_832837E8);
PPC_FUNC_IMPL(__imp__sub_832837E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// lwz r11,11100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,11100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283804"))) PPC_WEAK_FUNC(sub_83283804);
PPC_FUNC_IMPL(__imp__sub_83283804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283808"))) PPC_WEAK_FUNC(sub_83283808);
PPC_FUNC_IMPL(__imp__sub_83283808) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83283844
	if (ctx.cr6.eq) goto loc_83283844;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x83283844
	if (ctx.cr6.lt) goto loc_83283844;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,19984
	ctx.r4.s64 = ctx.r11.s64 + 19984;
	// addi r3,r3,18
	ctx.r3.s64 = ctx.r3.s64 + 18;
	// bl 0x833a31f0
	ctx.lr = 0x83283838;
	sub_833A31F0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83283848
	goto loc_83283848;
loc_83283844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83283848:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283858"))) PPC_WEAK_FUNC(sub_83283858);
PPC_FUNC_IMPL(__imp__sub_83283858) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83283894
	if (ctx.cr6.eq) goto loc_83283894;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x83283894
	if (ctx.cr6.lt) goto loc_83283894;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,20496
	ctx.r4.s64 = ctx.r11.s64 + 20496;
	// addi r3,r3,19
	ctx.r3.s64 = ctx.r3.s64 + 19;
	// bl 0x833a31f0
	ctx.lr = 0x83283888;
	sub_833A31F0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83283898
	goto loc_83283898;
loc_83283894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83283898:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832838A8"))) PPC_WEAK_FUNC(sub_832838A8);
PPC_FUNC_IMPL(__imp__sub_832838A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,35
	ctx.r10.s64 = 35;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832838BC"))) PPC_WEAK_FUNC(sub_832838BC);
PPC_FUNC_IMPL(__imp__sub_832838BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832838C0"))) PPC_WEAK_FUNC(sub_832838C0);
PPC_FUNC_IMPL(__imp__sub_832838C0) {
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
	// lis r9,-31827
	ctx.r9.s64 = -2085814272;
	// lwz r10,11100(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11100);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x832838f0
	if (!ctx.cr6.lt) goto loc_832838F0;
	// bl 0x832837d8
	ctx.lr = 0x832838E0;
	sub_832837D8(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,11100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11100, ctx.r11.u32);
	// stw r3,11096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11096, ctx.r3.u32);
loc_832838F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283900"))) PPC_WEAK_FUNC(sub_83283900);
PPC_FUNC_IMPL(__imp__sub_83283900) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x832839c8
	if (ctx.cr6.eq) goto loc_832839C8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x832839c8
	if (!ctx.cr6.gt) goto loc_832839C8;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r31,r10,19988
	ctx.r31.s64 = ctx.r10.s64 + 19988;
	// addi r30,r11,16476
	ctx.r30.s64 = ctx.r11.s64 + 16476;
loc_83283944:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
loc_83283950:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83283970
	if (!ctx.cr0.eq) goto loc_83283970;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x83283950
	if (!ctx.cr6.eq) goto loc_83283950;
loc_83283970:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832839bc
	if (!ctx.cr0.eq) goto loc_832839BC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
loc_83283984:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832839a4
	if (!ctx.cr0.eq) goto loc_832839A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x83283984
	if (!ctx.cr6.eq) goto loc_83283984;
loc_832839A4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832839bc
	if (!ctx.cr0.eq) goto loc_832839BC;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// bl 0x832838a8
	ctx.lr = 0x832839B8;
	sub_832838A8(ctx, base);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
loc_832839BC:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x83283944
	if (!ctx.cr0.eq) goto loc_83283944;
loc_832839C8:
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

__attribute__((alias("__imp__sub_832839E0"))) PPC_WEAK_FUNC(sub_832839E0);
PPC_FUNC_IMPL(__imp__sub_832839E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-384
	ctx.r10.s64 = ctx.r10.s64 + -384;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x83283a18
	if (!ctx.cr0.gt) goto loc_83283A18;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
loc_832839FC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x832839fc
	if (ctx.cr6.lt) goto loc_832839FC;
loc_83283A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283A20"))) PPC_WEAK_FUNC(sub_83283A20);
PPC_FUNC_IMPL(__imp__sub_83283A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lfs f0,24284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283A44"))) PPC_WEAK_FUNC(sub_83283A44);
PPC_FUNC_IMPL(__imp__sub_83283A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283A48"))) PPC_WEAK_FUNC(sub_83283A48);
PPC_FUNC_IMPL(__imp__sub_83283A48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,-384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -384);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283A6C"))) PPC_WEAK_FUNC(sub_83283A6C);
PPC_FUNC_IMPL(__imp__sub_83283A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283A70"))) PPC_WEAK_FUNC(sub_83283A70);
PPC_FUNC_IMPL(__imp__sub_83283A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83283A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83283aa4
	if (!ctx.cr6.eq) goto loc_83283AA4;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x83283b0c
	goto loc_83283B0C;
loc_83283AA4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r29,r9,13492
	ctx.r29.s64 = ctx.r9.s64 + 13492;
	// addi r4,r11,20008
	ctx.r4.s64 = ctx.r11.s64 + 20008;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832f0eb0
	ctx.lr = 0x83283AD0;
	sub_832F0EB0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r11,20000
	ctx.r4.s64 = ctx.r11.s64 + 20000;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x832f0eb0
	ctx.lr = 0x83283B00;
	sub_832F0EB0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_83283B0C:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283B1C"))) PPC_WEAK_FUNC(sub_83283B1C);
PPC_FUNC_IMPL(__imp__sub_83283B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283B20"))) PPC_WEAK_FUNC(sub_83283B20);
PPC_FUNC_IMPL(__imp__sub_83283B20) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83283b80
	if (!ctx.cr6.eq) goto loc_83283B80;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83283b80
	if (ctx.cr6.eq) goto loc_83283B80;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x832f0eb0
	ctx.lr = 0x83283B6C;
	sub_832F0EB0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x83283b8c
	goto loc_83283B8C;
loc_83283B80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83283B8C:
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

__attribute__((alias("__imp__sub_83283BA4"))) PPC_WEAK_FUNC(sub_83283BA4);
PPC_FUNC_IMPL(__imp__sub_83283BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283BA8"))) PPC_WEAK_FUNC(sub_83283BA8);
PPC_FUNC_IMPL(__imp__sub_83283BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x83283bc0
	if (!ctx.cr6.eq) goto loc_83283BC0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_83283BC0:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83283bcc
	if (!ctx.cr6.eq) goto loc_83283BCC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_83283BCC:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83283BDC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83283bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283BDC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r5,36
	ctx.r11.s64 = ctx.r5.s64 + 36;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83283BF4:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83283bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283BF4;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83283c20
	if (!ctx.cr6.eq) goto loc_83283C20;
	// li r10,207
	ctx.r10.s64 = 207;
	// addi r11,r5,68
	ctx.r11.s64 = ctx.r5.s64 + 68;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83283C14:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83283c14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283C14;
	// b 0x83283c50
	goto loc_83283C50;
loc_83283C20:
	// li r9,207
	ctx.r9.s64 = 207;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r11,17
	ctx.r11.s64 = 17;
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r10,r5,64
	ctx.r10.s64 = ctx.r5.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83283C38:
	// addi r9,r11,-17
	ctx.r9.s64 = ctx.r11.s64 + -17;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83283c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283C38;
loc_83283C50:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r5,896
	ctx.r10.s64 = ctx.r5.s64 + 896;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83283C60:
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83283c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283C60;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r5,960
	ctx.r10.s64 = ctx.r5.s64 + 960;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83283C7C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83283c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283C7C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283C88"))) PPC_WEAK_FUNC(sub_83283C88);
PPC_FUNC_IMPL(__imp__sub_83283C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r7,r5,1024
	ctx.r7.s64 = ctx.r5.s64 + 1024;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r31,r7,1024
	ctx.r31.s64 = ctx.r7.s64 + 1024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83283CA4:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83283ca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283CA4;
	// li r10,220
	ctx.r10.s64 = 220;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// subfic r9,r31,-16
	ctx.xer.ca = ctx.r31.u32 <= 4294967280;
	ctx.r9.s64 = -16 - ctx.r31.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lfs f0,19372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19372);
	ctx.f0.f64 = double(temp.f32);
loc_83283CC4:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lfd f13,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f13.u64);
	// lbz r10,-17(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -17);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83283cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283CC4;
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r10,r31,236
	ctx.r10.s64 = ctx.r31.s64 + 236;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83283D0C:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83283d0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283D0C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x83283d2c
	if (!ctx.cr6.eq) goto loc_83283D2C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_83283D2C:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83283d38
	if (!ctx.cr6.eq) goto loc_83283D38;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_83283D38:
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83283D48:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83283d48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283D48;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r7,36
	ctx.r11.s64 = ctx.r7.s64 + 36;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83283D60:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83283d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283D60;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83283d8c
	if (!ctx.cr6.eq) goto loc_83283D8C;
	// li r10,207
	ctx.r10.s64 = 207;
	// addi r11,r7,68
	ctx.r11.s64 = ctx.r7.s64 + 68;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83283D80:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83283d80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283D80;
	// b 0x83283dbc
	goto loc_83283DBC;
loc_83283D8C:
	// li r9,207
	ctx.r9.s64 = 207;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r11,17
	ctx.r11.s64 = 17;
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r10,r7,64
	ctx.r10.s64 = ctx.r7.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83283DA4:
	// addi r9,r11,-17
	ctx.r9.s64 = ctx.r11.s64 + -17;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83283da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283DA4;
loc_83283DBC:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r7,896
	ctx.r10.s64 = ctx.r7.s64 + 896;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83283DCC:
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83283dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283DCC;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r7,960
	ctx.r10.s64 = ctx.r7.s64 + 960;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83283DE8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83283de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283DE8;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83283E00:
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83283e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83283E00;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283E20"))) PPC_WEAK_FUNC(sub_83283E20);
PPC_FUNC_IMPL(__imp__sub_83283E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,-384
	ctx.r11.s64 = ctx.r11.s64 + -384;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283E30"))) PPC_WEAK_FUNC(sub_83283E30);
PPC_FUNC_IMPL(__imp__sub_83283E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,-384
	ctx.r11.s64 = ctx.r11.s64 + -384;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283E40"))) PPC_WEAK_FUNC(sub_83283E40);
PPC_FUNC_IMPL(__imp__sub_83283E40) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r5,620
	ctx.r5.s64 = 620;
	// addi r31,r11,-384
	ctx.r31.s64 = ctx.r11.s64 + -384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833a2b30
	ctx.lr = 0x83283E68;
	sub_833A2B30(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83283e20
	ctx.lr = 0x83283E78;
	sub_83283E20(ctx, base);
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

__attribute__((alias("__imp__sub_83283E8C"))) PPC_WEAK_FUNC(sub_83283E8C);
PPC_FUNC_IMPL(__imp__sub_83283E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283E90"))) PPC_WEAK_FUNC(sub_83283E90);
PPC_FUNC_IMPL(__imp__sub_83283E90) {
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
	// bl 0x832839e0
	ctx.lr = 0x83283EA0;
	sub_832839E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83283ec4
	if (ctx.cr0.eq) goto loc_83283EC4;
	// bl 0x83283a20
	ctx.lr = 0x83283EAC;
	sub_83283A20(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -384);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -384, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_83283EC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283ED4"))) PPC_WEAK_FUNC(sub_83283ED4);
PPC_FUNC_IMPL(__imp__sub_83283ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283ED8"))) PPC_WEAK_FUNC(sub_83283ED8);
PPC_FUNC_IMPL(__imp__sub_83283ED8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x83283a70
	sub_83283A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283EEC"))) PPC_WEAK_FUNC(sub_83283EEC);
PPC_FUNC_IMPL(__imp__sub_83283EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283EF0"))) PPC_WEAK_FUNC(sub_83283EF0);
PPC_FUNC_IMPL(__imp__sub_83283EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83283EF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r30,r11,13492
	ctx.r30.s64 = ctx.r11.s64 + 13492;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r4,r10,20040
	ctx.r4.s64 = ctx.r10.s64 + 20040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83283b20
	ctx.lr = 0x83283F2C;
	sub_83283B20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83283f50
	if (!ctx.cr6.eq) goto loc_83283F50;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x83283fcc
	goto loc_83283FCC;
loc_83283F50:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,20036
	ctx.r4.s64 = ctx.r11.s64 + 20036;
	// bl 0x833a3d40
	ctx.lr = 0x83283F60;
	sub_833A3D40(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20028
	ctx.r4.s64 = ctx.r11.s64 + 20028;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83283b20
	ctx.lr = 0x83283F7C;
	sub_83283B20(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83283f98
	if (!ctx.cr6.eq) goto loc_83283F98;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83283fcc
	goto loc_83283FCC;
loc_83283F98:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// addi r4,r9,20016
	ctx.r4.s64 = ctx.r9.s64 + 20016;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x833a3d40
	ctx.lr = 0x83283FBC;
	sub_833A3D40(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_83283FCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283FD4"))) PPC_WEAK_FUNC(sub_83283FD4);
PPC_FUNC_IMPL(__imp__sub_83283FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283FD8"))) PPC_WEAK_FUNC(sub_83283FD8);
PPC_FUNC_IMPL(__imp__sub_83283FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83283FE0;
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
	// bl 0x832834c0
	ctx.lr = 0x83283FF4;
	sub_832834C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83284010
	if (!ctx.cr6.eq) goto loc_83284010;
	// bl 0x83283c88
	ctx.lr = 0x8328400C;
	sub_83283C88(ctx, base);
	// b 0x83284014
	goto loc_83284014;
loc_83284010:
	// bl 0x83283ba8
	ctx.lr = 0x83284014;
	sub_83283BA8(ctx, base);
loc_83284014:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328401C"))) PPC_WEAK_FUNC(sub_8328401C);
PPC_FUNC_IMPL(__imp__sub_8328401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284020"))) PPC_WEAK_FUNC(sub_83284020);
PPC_FUNC_IMPL(__imp__sub_83284020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// bl 0x83283e30
	ctx.lr = 0x83284038;
	sub_83283E30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// bne cr6,0x83284064
	if (!ctx.cr6.eq) goto loc_83284064;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83284050:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r9,r9,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83284050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83284050;
	// b 0x832840ec
	goto loc_832840EC;
loc_83284064:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// lfd f12,-4600(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4600);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lfd f13,-4792(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + -4792);
	// fsub f10,f0,f11
	ctx.f10.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fdiv f12,f12,f10
	ctx.f12.f64 = ctx.f12.f64 / ctx.f10.f64;
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f11,f12,f11
	ctx.f11.f64 = ctx.f12.f64 * ctx.f11.f64;
	// fmul f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// lfd f11,20048(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20048);
loc_832840A4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832840b8
	if (!ctx.cr6.eq) goto loc_832840B8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_832840B8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f0
	ctx.f10.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 * ctx.f11.f64;
	// fdiv f10,f13,f10
	ctx.f10.f64 = ctx.f13.f64 / ctx.f10.f64;
	// fsub f10,f12,f10
	ctx.f10.f64 = ctx.f12.f64 - ctx.f10.f64;
	// fctidz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832840a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832840A4;
loc_832840EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832840FC"))) PPC_WEAK_FUNC(sub_832840FC);
PPC_FUNC_IMPL(__imp__sub_832840FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284100"))) PPC_WEAK_FUNC(sub_83284100);
PPC_FUNC_IMPL(__imp__sub_83284100) {
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
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// bl 0x83283e30
	ctx.lr = 0x83284118;
	sub_83283E30(ctx, base);
	// li r10,256
	ctx.r10.s64 = 256;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x83284148
	if (!ctx.cr6.eq) goto loc_83284148;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_83284130:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r10,1,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFF00;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83284130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83284130;
	// b 0x832841c8
	goto loc_832841C8;
loc_83284148:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lfd f12,-4600(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4600);
	// lfd f13,20056(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 20056);
	// fsub f10,f0,f11
	ctx.f10.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fdiv f12,f12,f10
	ctx.f12.f64 = ctx.f12.f64 / ctx.f10.f64;
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f11,f12,f11
	ctx.f11.f64 = ctx.f12.f64 * ctx.f11.f64;
	// fmul f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// lfd f11,20048(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20048);
loc_83284184:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83284198
	if (!ctx.cr6.eq) goto loc_83284198;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83284198:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f0
	ctx.f10.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 * ctx.f11.f64;
	// fdiv f10,f13,f10
	ctx.f10.f64 = ctx.f13.f64 / ctx.f10.f64;
	// fsub f10,f12,f10
	ctx.f10.f64 = ctx.f12.f64 - ctx.f10.f64;
	// fctidz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.f10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83284184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83284184;
loc_832841C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832841D8"))) PPC_WEAK_FUNC(sub_832841D8);
PPC_FUNC_IMPL(__imp__sub_832841D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83283e40
	sub_83283E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832841DC"))) PPC_WEAK_FUNC(sub_832841DC);
PPC_FUNC_IMPL(__imp__sub_832841DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832841E0"))) PPC_WEAK_FUNC(sub_832841E0);
PPC_FUNC_IMPL(__imp__sub_832841E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x832841E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r29,r6,1024
	ctx.r29.s64 = ctx.r6.s64 + 1024;
	// bl 0x833a2b30
	ctx.lr = 0x83284210;
	sub_833A2B30(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83283fd8
	ctx.lr = 0x83284220;
	sub_83283FD8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83284254
	if (!ctx.cr6.eq) goto loc_83284254;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8328424c
	if (!ctx.cr6.eq) goto loc_8328424C;
	// bl 0x83284020
	ctx.lr = 0x83284248;
	sub_83284020(ctx, base);
	// b 0x8328426c
	goto loc_8328426C;
loc_8328424C:
	// bl 0x83284100
	ctx.lr = 0x83284250;
	sub_83284100(ctx, base);
	// b 0x8328426c
	goto loc_8328426C;
loc_83284254:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f2,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8328426C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8328426C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284274"))) PPC_WEAK_FUNC(sub_83284274);
PPC_FUNC_IMPL(__imp__sub_83284274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284278"))) PPC_WEAK_FUNC(sub_83284278);
PPC_FUNC_IMPL(__imp__sub_83284278) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83283ef0
	ctx.lr = 0x832842A0;
	sub_83283EF0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x832841e0
	ctx.lr = 0x832842B4;
	sub_832841E0(ctx, base);
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

__attribute__((alias("__imp__sub_832842CC"))) PPC_WEAK_FUNC(sub_832842CC);
PPC_FUNC_IMPL(__imp__sub_832842CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832842D0"))) PPC_WEAK_FUNC(sub_832842D0);
PPC_FUNC_IMPL(__imp__sub_832842D0) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r11,-448
	ctx.r3.s64 = ctx.r11.s64 + -448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a2b30
	ctx.lr = 0x832842F0;
	sub_833A2B30(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-480
	ctx.r9.s64 = ctx.r10.s64 + -480;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,-480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -480, ctx.r11.u32);
	// addi r3,r8,-544
	ctx.r3.s64 = ctx.r8.s64 + -544;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x833a2b30
	ctx.lr = 0x83284318;
	sub_833A2B30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284328"))) PPC_WEAK_FUNC(sub_83284328);
PPC_FUNC_IMPL(__imp__sub_83284328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83284330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,-448
	ctx.r28.s64 = ctx.r11.s64 + -448;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833a1390
	ctx.lr = 0x83284358;
	sub_833A1390(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,-480
	ctx.r7.s64 = ctx.r11.s64 + -480;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r8,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r8.u32);
	// subf r10,r7,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r7.s64;
loc_83284380:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83284380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83284380;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r8,r11,-544
	ctx.r8.s64 = ctx.r11.s64 + -544;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832843B4:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x832843d0
	if (!ctx.cr6.lt) goto loc_832843D0;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// b 0x832843d4
	goto loc_832843D4;
loc_832843D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_832843D4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832843b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832843B4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832843EC"))) PPC_WEAK_FUNC(sub_832843EC);
PPC_FUNC_IMPL(__imp__sub_832843EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832843F0"))) PPC_WEAK_FUNC(sub_832843F0);
PPC_FUNC_IMPL(__imp__sub_832843F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,-448
	ctx.r11.s64 = ctx.r11.s64 + -448;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8328448c
	if (!ctx.cr6.gt) goto loc_8328448C;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bgt cr6,0x8328448c
	if (ctx.cr6.gt) goto loc_8328448C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83284484
	if (!ctx.cr6.eq) goto loc_83284484;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8328442c
	if (ctx.cr6.eq) goto loc_8328442C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83284484
	if (!ctx.cr6.eq) goto loc_83284484;
loc_8328442C:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r10,r11,-480
	ctx.r10.s64 = ctx.r11.s64 + -480;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83284438:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8328448c
	if (ctx.cr6.eq) goto loc_8328448C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x83284438
	if (ctx.cr6.lt) goto loc_83284438;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x83284484
	if (!ctx.cr6.gt) goto loc_83284484;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r11,r11,-544
	ctx.r11.s64 = ctx.r11.s64 + -544;
loc_83284468:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8328448c
	if (ctx.cr6.eq) goto loc_8328448C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83284468
	if (ctx.cr6.lt) goto loc_83284468;
loc_83284484:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8328448C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284494"))) PPC_WEAK_FUNC(sub_83284494);
PPC_FUNC_IMPL(__imp__sub_83284494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284498"))) PPC_WEAK_FUNC(sub_83284498);
PPC_FUNC_IMPL(__imp__sub_83284498) {
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
	// bl 0x832843f0
	ctx.lr = 0x832844B4;
	sub_832843F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832844d0
	if (ctx.cr0.eq) goto loc_832844D0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3861
	ctx.r4.u64 = ctx.r4.u64 | 3861;
	// bl 0x83282390
	ctx.lr = 0x832844CC;
	sub_83282390(ctx, base);
	// b 0x83284508
	goto loc_83284508;
loc_832844D0:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r3,r31,10320
	ctx.r3.s64 = ctx.r31.s64 + 10320;
	// addi r4,r11,-448
	ctx.r4.s64 = ctx.r11.s64 + -448;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x833a1390
	ctx.lr = 0x832844E4;
	sub_833A1390(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r3,r31,10364
	ctx.r3.s64 = ctx.r31.s64 + 10364;
	// addi r4,r10,-544
	ctx.r4.s64 = ctx.r10.s64 + -544;
	// li r5,64
	ctx.r5.s64 = 64;
	// ld r11,-480(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -480);
	// std r11,10356(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10356, ctx.r11.u64);
	// bl 0x833a1390
	ctx.lr = 0x83284504;
	sub_833A1390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83284508:
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

__attribute__((alias("__imp__sub_8328451C"))) PPC_WEAK_FUNC(sub_8328451C);
PPC_FUNC_IMPL(__imp__sub_8328451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284520"))) PPC_WEAK_FUNC(sub_83284520);
PPC_FUNC_IMPL(__imp__sub_83284520) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,10320
	ctx.r4.s64 = ctx.r3.s64 + 10320;
	// addi r3,r11,-448
	ctx.r3.s64 = ctx.r11.s64 + -448;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x833a1390
	ctx.lr = 0x83284548;
	sub_833A1390(ctx, base);
	// ld r11,10356(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 10356);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// addi r4,r31,10364
	ctx.r4.s64 = ctx.r31.s64 + 10364;
	// addi r3,r9,-544
	ctx.r3.s64 = ctx.r9.s64 + -544;
	// li r5,64
	ctx.r5.s64 = 64;
	// std r11,-480(r10)
	PPC_STORE_U64(ctx.r10.u32 + -480, ctx.r11.u64);
	// bl 0x833a1390
	ctx.lr = 0x83284568;
	sub_833A1390(ctx, base);
	// lis r8,-31827
	ctx.r8.s64 = -2085814272;
	// lwz r11,14920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14920);
	// lwz r10,14924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14924);
	// addi r7,r8,11104
	ctx.r7.s64 = ctx.r8.s64 + 11104;
	// lwz r9,14928(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14928);
	// stw r11,11104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11104, ctx.r11.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8328459C"))) PPC_WEAK_FUNC(sub_8328459C);
PPC_FUNC_IMPL(__imp__sub_8328459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

