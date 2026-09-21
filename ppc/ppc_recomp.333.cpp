#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F9CF34"))) PPC_WEAK_FUNC(sub_82F9CF34);
PPC_FUNC_IMPL(__imp__sub_82F9CF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CF38"))) PPC_WEAK_FUNC(sub_82F9CF38);
PPC_FUNC_IMPL(__imp__sub_82F9CF38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9CF3C"))) PPC_WEAK_FUNC(sub_82F9CF3C);
PPC_FUNC_IMPL(__imp__sub_82F9CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CF40"))) PPC_WEAK_FUNC(sub_82F9CF40);
PPC_FUNC_IMPL(__imp__sub_82F9CF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-26032
	ctx.r3.s64 = ctx.r11.s64 + -26032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9CF4C"))) PPC_WEAK_FUNC(sub_82F9CF4C);
PPC_FUNC_IMPL(__imp__sub_82F9CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CF50"))) PPC_WEAK_FUNC(sub_82F9CF50);
PPC_FUNC_IMPL(__imp__sub_82F9CF50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82fc4ec8
	sub_82FC4EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9CF5C"))) PPC_WEAK_FUNC(sub_82F9CF5C);
PPC_FUNC_IMPL(__imp__sub_82F9CF5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9CF60"))) PPC_WEAK_FUNC(sub_82F9CF60);
PPC_FUNC_IMPL(__imp__sub_82F9CF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9CF74"))) PPC_WEAK_FUNC(sub_82F9CF74);
PPC_FUNC_IMPL(__imp__sub_82F9CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CF78"))) PPC_WEAK_FUNC(sub_82F9CF78);
PPC_FUNC_IMPL(__imp__sub_82F9CF78) {
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
	// bl 0x82fc4ec8
	ctx.lr = 0x82F9CF90;
	sub_82FC4EC8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9CFA4"))) PPC_WEAK_FUNC(sub_82F9CFA4);
PPC_FUNC_IMPL(__imp__sub_82F9CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CFA8"))) PPC_WEAK_FUNC(sub_82F9CFA8);
PPC_FUNC_IMPL(__imp__sub_82F9CFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25984
	ctx.r3.s64 = ctx.r11.s64 + -25984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9CFB4"))) PPC_WEAK_FUNC(sub_82F9CFB4);
PPC_FUNC_IMPL(__imp__sub_82F9CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CFB8"))) PPC_WEAK_FUNC(sub_82F9CFB8);
PPC_FUNC_IMPL(__imp__sub_82F9CFB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9CFCC"))) PPC_WEAK_FUNC(sub_82F9CFCC);
PPC_FUNC_IMPL(__imp__sub_82F9CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CFD0"))) PPC_WEAK_FUNC(sub_82F9CFD0);
PPC_FUNC_IMPL(__imp__sub_82F9CFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25864
	ctx.r3.s64 = ctx.r11.s64 + -25864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9CFDC"))) PPC_WEAK_FUNC(sub_82F9CFDC);
PPC_FUNC_IMPL(__imp__sub_82F9CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CFE0"))) PPC_WEAK_FUNC(sub_82F9CFE0);
PPC_FUNC_IMPL(__imp__sub_82F9CFE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9CFF4"))) PPC_WEAK_FUNC(sub_82F9CFF4);
PPC_FUNC_IMPL(__imp__sub_82F9CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9CFF8"))) PPC_WEAK_FUNC(sub_82F9CFF8);
PPC_FUNC_IMPL(__imp__sub_82F9CFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25792
	ctx.r3.s64 = ctx.r11.s64 + -25792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D004"))) PPC_WEAK_FUNC(sub_82F9D004);
PPC_FUNC_IMPL(__imp__sub_82F9D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D008"))) PPC_WEAK_FUNC(sub_82F9D008);
PPC_FUNC_IMPL(__imp__sub_82F9D008) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82fc5be0
	sub_82FC5BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D014"))) PPC_WEAK_FUNC(sub_82F9D014);
PPC_FUNC_IMPL(__imp__sub_82F9D014) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D018"))) PPC_WEAK_FUNC(sub_82F9D018);
PPC_FUNC_IMPL(__imp__sub_82F9D018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D02C"))) PPC_WEAK_FUNC(sub_82F9D02C);
PPC_FUNC_IMPL(__imp__sub_82F9D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D030"))) PPC_WEAK_FUNC(sub_82F9D030);
PPC_FUNC_IMPL(__imp__sub_82F9D030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fc5be0
	ctx.lr = 0x82F9D048;
	sub_82FC5BE0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D05C"))) PPC_WEAK_FUNC(sub_82F9D05C);
PPC_FUNC_IMPL(__imp__sub_82F9D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D060"))) PPC_WEAK_FUNC(sub_82F9D060);
PPC_FUNC_IMPL(__imp__sub_82F9D060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25720
	ctx.r3.s64 = ctx.r11.s64 + -25720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D06C"))) PPC_WEAK_FUNC(sub_82F9D06C);
PPC_FUNC_IMPL(__imp__sub_82F9D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D070"))) PPC_WEAK_FUNC(sub_82F9D070);
PPC_FUNC_IMPL(__imp__sub_82F9D070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D074"))) PPC_WEAK_FUNC(sub_82F9D074);
PPC_FUNC_IMPL(__imp__sub_82F9D074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D078"))) PPC_WEAK_FUNC(sub_82F9D078);
PPC_FUNC_IMPL(__imp__sub_82F9D078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25648
	ctx.r3.s64 = ctx.r11.s64 + -25648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D084"))) PPC_WEAK_FUNC(sub_82F9D084);
PPC_FUNC_IMPL(__imp__sub_82F9D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D088"))) PPC_WEAK_FUNC(sub_82F9D088);
PPC_FUNC_IMPL(__imp__sub_82F9D088) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82fc68a0
	sub_82FC68A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D094"))) PPC_WEAK_FUNC(sub_82F9D094);
PPC_FUNC_IMPL(__imp__sub_82F9D094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D098"))) PPC_WEAK_FUNC(sub_82F9D098);
PPC_FUNC_IMPL(__imp__sub_82F9D098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25600
	ctx.r3.s64 = ctx.r11.s64 + -25600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D0A4"))) PPC_WEAK_FUNC(sub_82F9D0A4);
PPC_FUNC_IMPL(__imp__sub_82F9D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D0A8"))) PPC_WEAK_FUNC(sub_82F9D0A8);
PPC_FUNC_IMPL(__imp__sub_82F9D0A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82fc6aa0
	sub_82FC6AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D0B4"))) PPC_WEAK_FUNC(sub_82F9D0B4);
PPC_FUNC_IMPL(__imp__sub_82F9D0B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D0B8"))) PPC_WEAK_FUNC(sub_82F9D0B8);
PPC_FUNC_IMPL(__imp__sub_82F9D0B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D0CC"))) PPC_WEAK_FUNC(sub_82F9D0CC);
PPC_FUNC_IMPL(__imp__sub_82F9D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D0D0"))) PPC_WEAK_FUNC(sub_82F9D0D0);
PPC_FUNC_IMPL(__imp__sub_82F9D0D0) {
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
	// bl 0x82fc6aa0
	ctx.lr = 0x82F9D0E8;
	sub_82FC6AA0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D0FC"))) PPC_WEAK_FUNC(sub_82F9D0FC);
PPC_FUNC_IMPL(__imp__sub_82F9D0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D100"))) PPC_WEAK_FUNC(sub_82F9D100);
PPC_FUNC_IMPL(__imp__sub_82F9D100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25552
	ctx.r3.s64 = ctx.r11.s64 + -25552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D10C"))) PPC_WEAK_FUNC(sub_82F9D10C);
PPC_FUNC_IMPL(__imp__sub_82F9D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D110"))) PPC_WEAK_FUNC(sub_82F9D110);
PPC_FUNC_IMPL(__imp__sub_82F9D110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D124"))) PPC_WEAK_FUNC(sub_82F9D124);
PPC_FUNC_IMPL(__imp__sub_82F9D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D128"))) PPC_WEAK_FUNC(sub_82F9D128);
PPC_FUNC_IMPL(__imp__sub_82F9D128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25480
	ctx.r3.s64 = ctx.r11.s64 + -25480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D134"))) PPC_WEAK_FUNC(sub_82F9D134);
PPC_FUNC_IMPL(__imp__sub_82F9D134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D138"))) PPC_WEAK_FUNC(sub_82F9D138);
PPC_FUNC_IMPL(__imp__sub_82F9D138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D14C"))) PPC_WEAK_FUNC(sub_82F9D14C);
PPC_FUNC_IMPL(__imp__sub_82F9D14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D150"))) PPC_WEAK_FUNC(sub_82F9D150);
PPC_FUNC_IMPL(__imp__sub_82F9D150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25432
	ctx.r3.s64 = ctx.r11.s64 + -25432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D15C"))) PPC_WEAK_FUNC(sub_82F9D15C);
PPC_FUNC_IMPL(__imp__sub_82F9D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D160"))) PPC_WEAK_FUNC(sub_82F9D160);
PPC_FUNC_IMPL(__imp__sub_82F9D160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D174"))) PPC_WEAK_FUNC(sub_82F9D174);
PPC_FUNC_IMPL(__imp__sub_82F9D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D178"))) PPC_WEAK_FUNC(sub_82F9D178);
PPC_FUNC_IMPL(__imp__sub_82F9D178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25384
	ctx.r3.s64 = ctx.r11.s64 + -25384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D184"))) PPC_WEAK_FUNC(sub_82F9D184);
PPC_FUNC_IMPL(__imp__sub_82F9D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D188"))) PPC_WEAK_FUNC(sub_82F9D188);
PPC_FUNC_IMPL(__imp__sub_82F9D188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D19C"))) PPC_WEAK_FUNC(sub_82F9D19C);
PPC_FUNC_IMPL(__imp__sub_82F9D19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D1A0"))) PPC_WEAK_FUNC(sub_82F9D1A0);
PPC_FUNC_IMPL(__imp__sub_82F9D1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25336
	ctx.r3.s64 = ctx.r11.s64 + -25336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D1AC"))) PPC_WEAK_FUNC(sub_82F9D1AC);
PPC_FUNC_IMPL(__imp__sub_82F9D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D1B0"))) PPC_WEAK_FUNC(sub_82F9D1B0);
PPC_FUNC_IMPL(__imp__sub_82F9D1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D1B4"))) PPC_WEAK_FUNC(sub_82F9D1B4);
PPC_FUNC_IMPL(__imp__sub_82F9D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D1B8"))) PPC_WEAK_FUNC(sub_82F9D1B8);
PPC_FUNC_IMPL(__imp__sub_82F9D1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25192
	ctx.r3.s64 = ctx.r11.s64 + -25192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D1C4"))) PPC_WEAK_FUNC(sub_82F9D1C4);
PPC_FUNC_IMPL(__imp__sub_82F9D1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D1C8"))) PPC_WEAK_FUNC(sub_82F9D1C8);
PPC_FUNC_IMPL(__imp__sub_82F9D1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D1DC"))) PPC_WEAK_FUNC(sub_82F9D1DC);
PPC_FUNC_IMPL(__imp__sub_82F9D1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D1E0"))) PPC_WEAK_FUNC(sub_82F9D1E0);
PPC_FUNC_IMPL(__imp__sub_82F9D1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25144
	ctx.r3.s64 = ctx.r11.s64 + -25144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D1EC"))) PPC_WEAK_FUNC(sub_82F9D1EC);
PPC_FUNC_IMPL(__imp__sub_82F9D1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D1F0"))) PPC_WEAK_FUNC(sub_82F9D1F0);
PPC_FUNC_IMPL(__imp__sub_82F9D1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D1F4"))) PPC_WEAK_FUNC(sub_82F9D1F4);
PPC_FUNC_IMPL(__imp__sub_82F9D1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D1F8"))) PPC_WEAK_FUNC(sub_82F9D1F8);
PPC_FUNC_IMPL(__imp__sub_82F9D1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25048
	ctx.r3.s64 = ctx.r11.s64 + -25048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D204"))) PPC_WEAK_FUNC(sub_82F9D204);
PPC_FUNC_IMPL(__imp__sub_82F9D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D208"))) PPC_WEAK_FUNC(sub_82F9D208);
PPC_FUNC_IMPL(__imp__sub_82F9D208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D21C"))) PPC_WEAK_FUNC(sub_82F9D21C);
PPC_FUNC_IMPL(__imp__sub_82F9D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D220"))) PPC_WEAK_FUNC(sub_82F9D220);
PPC_FUNC_IMPL(__imp__sub_82F9D220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-25000
	ctx.r3.s64 = ctx.r11.s64 + -25000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D22C"))) PPC_WEAK_FUNC(sub_82F9D22C);
PPC_FUNC_IMPL(__imp__sub_82F9D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D230"))) PPC_WEAK_FUNC(sub_82F9D230);
PPC_FUNC_IMPL(__imp__sub_82F9D230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D234"))) PPC_WEAK_FUNC(sub_82F9D234);
PPC_FUNC_IMPL(__imp__sub_82F9D234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D238"))) PPC_WEAK_FUNC(sub_82F9D238);
PPC_FUNC_IMPL(__imp__sub_82F9D238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24880
	ctx.r3.s64 = ctx.r11.s64 + -24880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D244"))) PPC_WEAK_FUNC(sub_82F9D244);
PPC_FUNC_IMPL(__imp__sub_82F9D244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D248"))) PPC_WEAK_FUNC(sub_82F9D248);
PPC_FUNC_IMPL(__imp__sub_82F9D248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D24C"))) PPC_WEAK_FUNC(sub_82F9D24C);
PPC_FUNC_IMPL(__imp__sub_82F9D24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D250"))) PPC_WEAK_FUNC(sub_82F9D250);
PPC_FUNC_IMPL(__imp__sub_82F9D250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D25C"))) PPC_WEAK_FUNC(sub_82F9D25C);
PPC_FUNC_IMPL(__imp__sub_82F9D25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D260"))) PPC_WEAK_FUNC(sub_82F9D260);
PPC_FUNC_IMPL(__imp__sub_82F9D260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24784
	ctx.r3.s64 = ctx.r11.s64 + -24784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D26C"))) PPC_WEAK_FUNC(sub_82F9D26C);
PPC_FUNC_IMPL(__imp__sub_82F9D26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D270"))) PPC_WEAK_FUNC(sub_82F9D270);
PPC_FUNC_IMPL(__imp__sub_82F9D270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D284"))) PPC_WEAK_FUNC(sub_82F9D284);
PPC_FUNC_IMPL(__imp__sub_82F9D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D288"))) PPC_WEAK_FUNC(sub_82F9D288);
PPC_FUNC_IMPL(__imp__sub_82F9D288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24736
	ctx.r3.s64 = ctx.r11.s64 + -24736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D294"))) PPC_WEAK_FUNC(sub_82F9D294);
PPC_FUNC_IMPL(__imp__sub_82F9D294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D298"))) PPC_WEAK_FUNC(sub_82F9D298);
PPC_FUNC_IMPL(__imp__sub_82F9D298) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82faddb8
	sub_82FADDB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D2A4"))) PPC_WEAK_FUNC(sub_82F9D2A4);
PPC_FUNC_IMPL(__imp__sub_82F9D2A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D2A8"))) PPC_WEAK_FUNC(sub_82F9D2A8);
PPC_FUNC_IMPL(__imp__sub_82F9D2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D2BC"))) PPC_WEAK_FUNC(sub_82F9D2BC);
PPC_FUNC_IMPL(__imp__sub_82F9D2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D2C0"))) PPC_WEAK_FUNC(sub_82F9D2C0);
PPC_FUNC_IMPL(__imp__sub_82F9D2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82faddb8
	ctx.lr = 0x82F9D2D8;
	sub_82FADDB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D2EC"))) PPC_WEAK_FUNC(sub_82F9D2EC);
PPC_FUNC_IMPL(__imp__sub_82F9D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D2F0"))) PPC_WEAK_FUNC(sub_82F9D2F0);
PPC_FUNC_IMPL(__imp__sub_82F9D2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24664
	ctx.r3.s64 = ctx.r11.s64 + -24664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D2FC"))) PPC_WEAK_FUNC(sub_82F9D2FC);
PPC_FUNC_IMPL(__imp__sub_82F9D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D300"))) PPC_WEAK_FUNC(sub_82F9D300);
PPC_FUNC_IMPL(__imp__sub_82F9D300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D314"))) PPC_WEAK_FUNC(sub_82F9D314);
PPC_FUNC_IMPL(__imp__sub_82F9D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D318"))) PPC_WEAK_FUNC(sub_82F9D318);
PPC_FUNC_IMPL(__imp__sub_82F9D318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24592
	ctx.r3.s64 = ctx.r11.s64 + -24592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D324"))) PPC_WEAK_FUNC(sub_82F9D324);
PPC_FUNC_IMPL(__imp__sub_82F9D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D328"))) PPC_WEAK_FUNC(sub_82F9D328);
PPC_FUNC_IMPL(__imp__sub_82F9D328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D33C"))) PPC_WEAK_FUNC(sub_82F9D33C);
PPC_FUNC_IMPL(__imp__sub_82F9D33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D340"))) PPC_WEAK_FUNC(sub_82F9D340);
PPC_FUNC_IMPL(__imp__sub_82F9D340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24544
	ctx.r3.s64 = ctx.r11.s64 + -24544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D34C"))) PPC_WEAK_FUNC(sub_82F9D34C);
PPC_FUNC_IMPL(__imp__sub_82F9D34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D350"))) PPC_WEAK_FUNC(sub_82F9D350);
PPC_FUNC_IMPL(__imp__sub_82F9D350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D364"))) PPC_WEAK_FUNC(sub_82F9D364);
PPC_FUNC_IMPL(__imp__sub_82F9D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D368"))) PPC_WEAK_FUNC(sub_82F9D368);
PPC_FUNC_IMPL(__imp__sub_82F9D368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24496
	ctx.r3.s64 = ctx.r11.s64 + -24496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D374"))) PPC_WEAK_FUNC(sub_82F9D374);
PPC_FUNC_IMPL(__imp__sub_82F9D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D378"))) PPC_WEAK_FUNC(sub_82F9D378);
PPC_FUNC_IMPL(__imp__sub_82F9D378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D38C"))) PPC_WEAK_FUNC(sub_82F9D38C);
PPC_FUNC_IMPL(__imp__sub_82F9D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D390"))) PPC_WEAK_FUNC(sub_82F9D390);
PPC_FUNC_IMPL(__imp__sub_82F9D390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24448
	ctx.r3.s64 = ctx.r11.s64 + -24448;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D39C"))) PPC_WEAK_FUNC(sub_82F9D39C);
PPC_FUNC_IMPL(__imp__sub_82F9D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D3A0"))) PPC_WEAK_FUNC(sub_82F9D3A0);
PPC_FUNC_IMPL(__imp__sub_82F9D3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D3B4"))) PPC_WEAK_FUNC(sub_82F9D3B4);
PPC_FUNC_IMPL(__imp__sub_82F9D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D3B8"))) PPC_WEAK_FUNC(sub_82F9D3B8);
PPC_FUNC_IMPL(__imp__sub_82F9D3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24400
	ctx.r3.s64 = ctx.r11.s64 + -24400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D3C4"))) PPC_WEAK_FUNC(sub_82F9D3C4);
PPC_FUNC_IMPL(__imp__sub_82F9D3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D3C8"))) PPC_WEAK_FUNC(sub_82F9D3C8);
PPC_FUNC_IMPL(__imp__sub_82F9D3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D3DC"))) PPC_WEAK_FUNC(sub_82F9D3DC);
PPC_FUNC_IMPL(__imp__sub_82F9D3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D3E0"))) PPC_WEAK_FUNC(sub_82F9D3E0);
PPC_FUNC_IMPL(__imp__sub_82F9D3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D3EC"))) PPC_WEAK_FUNC(sub_82F9D3EC);
PPC_FUNC_IMPL(__imp__sub_82F9D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D3F0"))) PPC_WEAK_FUNC(sub_82F9D3F0);
PPC_FUNC_IMPL(__imp__sub_82F9D3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D404"))) PPC_WEAK_FUNC(sub_82F9D404);
PPC_FUNC_IMPL(__imp__sub_82F9D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D408"))) PPC_WEAK_FUNC(sub_82F9D408);
PPC_FUNC_IMPL(__imp__sub_82F9D408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24304
	ctx.r3.s64 = ctx.r11.s64 + -24304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D414"))) PPC_WEAK_FUNC(sub_82F9D414);
PPC_FUNC_IMPL(__imp__sub_82F9D414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D418"))) PPC_WEAK_FUNC(sub_82F9D418);
PPC_FUNC_IMPL(__imp__sub_82F9D418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D42C"))) PPC_WEAK_FUNC(sub_82F9D42C);
PPC_FUNC_IMPL(__imp__sub_82F9D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D430"))) PPC_WEAK_FUNC(sub_82F9D430);
PPC_FUNC_IMPL(__imp__sub_82F9D430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24208
	ctx.r3.s64 = ctx.r11.s64 + -24208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D43C"))) PPC_WEAK_FUNC(sub_82F9D43C);
PPC_FUNC_IMPL(__imp__sub_82F9D43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D440"))) PPC_WEAK_FUNC(sub_82F9D440);
PPC_FUNC_IMPL(__imp__sub_82F9D440) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D454"))) PPC_WEAK_FUNC(sub_82F9D454);
PPC_FUNC_IMPL(__imp__sub_82F9D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D458"))) PPC_WEAK_FUNC(sub_82F9D458);
PPC_FUNC_IMPL(__imp__sub_82F9D458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-24136
	ctx.r3.s64 = ctx.r11.s64 + -24136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D464"))) PPC_WEAK_FUNC(sub_82F9D464);
PPC_FUNC_IMPL(__imp__sub_82F9D464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D468"))) PPC_WEAK_FUNC(sub_82F9D468);
PPC_FUNC_IMPL(__imp__sub_82F9D468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D46C"))) PPC_WEAK_FUNC(sub_82F9D46C);
PPC_FUNC_IMPL(__imp__sub_82F9D46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D470"))) PPC_WEAK_FUNC(sub_82F9D470);
PPC_FUNC_IMPL(__imp__sub_82F9D470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-23968
	ctx.r3.s64 = ctx.r11.s64 + -23968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D47C"))) PPC_WEAK_FUNC(sub_82F9D47C);
PPC_FUNC_IMPL(__imp__sub_82F9D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D480"))) PPC_WEAK_FUNC(sub_82F9D480);
PPC_FUNC_IMPL(__imp__sub_82F9D480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D494"))) PPC_WEAK_FUNC(sub_82F9D494);
PPC_FUNC_IMPL(__imp__sub_82F9D494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D498"))) PPC_WEAK_FUNC(sub_82F9D498);
PPC_FUNC_IMPL(__imp__sub_82F9D498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-23920
	ctx.r3.s64 = ctx.r11.s64 + -23920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D4A4"))) PPC_WEAK_FUNC(sub_82F9D4A4);
PPC_FUNC_IMPL(__imp__sub_82F9D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D4A8"))) PPC_WEAK_FUNC(sub_82F9D4A8);
PPC_FUNC_IMPL(__imp__sub_82F9D4A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-12468
	ctx.r10.s64 = ctx.r11.s64 + -12468;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D4C0"))) PPC_WEAK_FUNC(sub_82F9D4C0);
PPC_FUNC_IMPL(__imp__sub_82F9D4C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D4D4"))) PPC_WEAK_FUNC(sub_82F9D4D4);
PPC_FUNC_IMPL(__imp__sub_82F9D4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D4D8"))) PPC_WEAK_FUNC(sub_82F9D4D8);
PPC_FUNC_IMPL(__imp__sub_82F9D4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-12468
	ctx.r3.s64 = ctx.r11.s64 + -12468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D4E4"))) PPC_WEAK_FUNC(sub_82F9D4E4);
PPC_FUNC_IMPL(__imp__sub_82F9D4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D4E8"))) PPC_WEAK_FUNC(sub_82F9D4E8);
PPC_FUNC_IMPL(__imp__sub_82F9D4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-23848
	ctx.r3.s64 = ctx.r11.s64 + -23848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D4F4"))) PPC_WEAK_FUNC(sub_82F9D4F4);
PPC_FUNC_IMPL(__imp__sub_82F9D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D4F8"))) PPC_WEAK_FUNC(sub_82F9D4F8);
PPC_FUNC_IMPL(__imp__sub_82F9D4F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D50C"))) PPC_WEAK_FUNC(sub_82F9D50C);
PPC_FUNC_IMPL(__imp__sub_82F9D50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D510"))) PPC_WEAK_FUNC(sub_82F9D510);
PPC_FUNC_IMPL(__imp__sub_82F9D510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-23752
	ctx.r3.s64 = ctx.r11.s64 + -23752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D51C"))) PPC_WEAK_FUNC(sub_82F9D51C);
PPC_FUNC_IMPL(__imp__sub_82F9D51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D520"))) PPC_WEAK_FUNC(sub_82F9D520);
PPC_FUNC_IMPL(__imp__sub_82F9D520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D534"))) PPC_WEAK_FUNC(sub_82F9D534);
PPC_FUNC_IMPL(__imp__sub_82F9D534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D538"))) PPC_WEAK_FUNC(sub_82F9D538);
PPC_FUNC_IMPL(__imp__sub_82F9D538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-23704
	ctx.r3.s64 = ctx.r11.s64 + -23704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D544"))) PPC_WEAK_FUNC(sub_82F9D544);
PPC_FUNC_IMPL(__imp__sub_82F9D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D548"))) PPC_WEAK_FUNC(sub_82F9D548);
PPC_FUNC_IMPL(__imp__sub_82F9D548) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82f93120
	sub_82F93120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D554"))) PPC_WEAK_FUNC(sub_82F9D554);
PPC_FUNC_IMPL(__imp__sub_82F9D554) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D558"))) PPC_WEAK_FUNC(sub_82F9D558);
PPC_FUNC_IMPL(__imp__sub_82F9D558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D56C"))) PPC_WEAK_FUNC(sub_82F9D56C);
PPC_FUNC_IMPL(__imp__sub_82F9D56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D570"))) PPC_WEAK_FUNC(sub_82F9D570);
PPC_FUNC_IMPL(__imp__sub_82F9D570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f93120
	ctx.lr = 0x82F9D588;
	sub_82F93120(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D59C"))) PPC_WEAK_FUNC(sub_82F9D59C);
PPC_FUNC_IMPL(__imp__sub_82F9D59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D5A0"))) PPC_WEAK_FUNC(sub_82F9D5A0);
PPC_FUNC_IMPL(__imp__sub_82F9D5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-23632
	ctx.r3.s64 = ctx.r11.s64 + -23632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D5AC"))) PPC_WEAK_FUNC(sub_82F9D5AC);
PPC_FUNC_IMPL(__imp__sub_82F9D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D5B0"))) PPC_WEAK_FUNC(sub_82F9D5B0);
PPC_FUNC_IMPL(__imp__sub_82F9D5B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82fb2610
	sub_82FB2610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D5BC"))) PPC_WEAK_FUNC(sub_82F9D5BC);
PPC_FUNC_IMPL(__imp__sub_82F9D5BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D5C0"))) PPC_WEAK_FUNC(sub_82F9D5C0);
PPC_FUNC_IMPL(__imp__sub_82F9D5C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F9D5D4"))) PPC_WEAK_FUNC(sub_82F9D5D4);
PPC_FUNC_IMPL(__imp__sub_82F9D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D5D8"))) PPC_WEAK_FUNC(sub_82F9D5D8);
PPC_FUNC_IMPL(__imp__sub_82F9D5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb2610
	ctx.lr = 0x82F9D5F0;
	sub_82FB2610(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D604"))) PPC_WEAK_FUNC(sub_82F9D604);
PPC_FUNC_IMPL(__imp__sub_82F9D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D608"))) PPC_WEAK_FUNC(sub_82F9D608);
PPC_FUNC_IMPL(__imp__sub_82F9D608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-23560
	ctx.r3.s64 = ctx.r11.s64 + -23560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D614"))) PPC_WEAK_FUNC(sub_82F9D614);
PPC_FUNC_IMPL(__imp__sub_82F9D614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D618"))) PPC_WEAK_FUNC(sub_82F9D618);
PPC_FUNC_IMPL(__imp__sub_82F9D618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D61C"))) PPC_WEAK_FUNC(sub_82F9D61C);
PPC_FUNC_IMPL(__imp__sub_82F9D61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D620"))) PPC_WEAK_FUNC(sub_82F9D620);
PPC_FUNC_IMPL(__imp__sub_82F9D620) {
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
	// beq cr6,0x82f9d65c
	if (ctx.cr6.eq) goto loc_82F9D65C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-12440
	ctx.r10.s64 = ctx.r11.s64 + -12440;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x82F9D650;
	sub_82EEECE8(ctx, base);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,-12328
	ctx.r8.s64 = ctx.r9.s64 + -12328;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82F9D65C:
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

__attribute__((alias("__imp__sub_82F9D670"))) PPC_WEAK_FUNC(sub_82F9D670);
PPC_FUNC_IMPL(__imp__sub_82F9D670) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-12440
	ctx.r10.s64 = ctx.r11.s64 + -12440;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82eeece8
	ctx.lr = 0x82F9D694;
	sub_82EEECE8(ctx, base);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r3,r9,-12328
	ctx.r3.s64 = ctx.r9.s64 + -12328;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D6AC"))) PPC_WEAK_FUNC(sub_82F9D6AC);
PPC_FUNC_IMPL(__imp__sub_82F9D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D6B0"))) PPC_WEAK_FUNC(sub_82F9D6B0);
PPC_FUNC_IMPL(__imp__sub_82F9D6B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-12252
	ctx.r10.s64 = ctx.r11.s64 + -12252;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D6C8"))) PPC_WEAK_FUNC(sub_82F9D6C8);
PPC_FUNC_IMPL(__imp__sub_82F9D6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-12252
	ctx.r3.s64 = ctx.r11.s64 + -12252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D6D4"))) PPC_WEAK_FUNC(sub_82F9D6D4);
PPC_FUNC_IMPL(__imp__sub_82F9D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D6D8"))) PPC_WEAK_FUNC(sub_82F9D6D8);
PPC_FUNC_IMPL(__imp__sub_82F9D6D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-12232
	ctx.r10.s64 = ctx.r11.s64 + -12232;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D6F0"))) PPC_WEAK_FUNC(sub_82F9D6F0);
PPC_FUNC_IMPL(__imp__sub_82F9D6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-12232
	ctx.r3.s64 = ctx.r11.s64 + -12232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D6FC"))) PPC_WEAK_FUNC(sub_82F9D6FC);
PPC_FUNC_IMPL(__imp__sub_82F9D6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D700"))) PPC_WEAK_FUNC(sub_82F9D700);
PPC_FUNC_IMPL(__imp__sub_82F9D700) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-12212
	ctx.r10.s64 = ctx.r11.s64 + -12212;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D718"))) PPC_WEAK_FUNC(sub_82F9D718);
PPC_FUNC_IMPL(__imp__sub_82F9D718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-12212
	ctx.r3.s64 = ctx.r11.s64 + -12212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D724"))) PPC_WEAK_FUNC(sub_82F9D724);
PPC_FUNC_IMPL(__imp__sub_82F9D724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D728"))) PPC_WEAK_FUNC(sub_82F9D728);
PPC_FUNC_IMPL(__imp__sub_82F9D728) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-12192
	ctx.r10.s64 = ctx.r11.s64 + -12192;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D740"))) PPC_WEAK_FUNC(sub_82F9D740);
PPC_FUNC_IMPL(__imp__sub_82F9D740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-12192
	ctx.r3.s64 = ctx.r11.s64 + -12192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D74C"))) PPC_WEAK_FUNC(sub_82F9D74C);
PPC_FUNC_IMPL(__imp__sub_82F9D74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D750"))) PPC_WEAK_FUNC(sub_82F9D750);
PPC_FUNC_IMPL(__imp__sub_82F9D750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D754"))) PPC_WEAK_FUNC(sub_82F9D754);
PPC_FUNC_IMPL(__imp__sub_82F9D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D758"))) PPC_WEAK_FUNC(sub_82F9D758);
PPC_FUNC_IMPL(__imp__sub_82F9D758) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82f8e5e0
	sub_82F8E5E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D764"))) PPC_WEAK_FUNC(sub_82F9D764);
PPC_FUNC_IMPL(__imp__sub_82F9D764) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D768"))) PPC_WEAK_FUNC(sub_82F9D768);
PPC_FUNC_IMPL(__imp__sub_82F9D768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8e5e0
	ctx.lr = 0x82F9D780;
	sub_82F8E5E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D794"))) PPC_WEAK_FUNC(sub_82F9D794);
PPC_FUNC_IMPL(__imp__sub_82F9D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D798"))) PPC_WEAK_FUNC(sub_82F9D798);
PPC_FUNC_IMPL(__imp__sub_82F9D798) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-12172
	ctx.r10.s64 = ctx.r11.s64 + -12172;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D7B0"))) PPC_WEAK_FUNC(sub_82F9D7B0);
PPC_FUNC_IMPL(__imp__sub_82F9D7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-12172
	ctx.r3.s64 = ctx.r11.s64 + -12172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D7BC"))) PPC_WEAK_FUNC(sub_82F9D7BC);
PPC_FUNC_IMPL(__imp__sub_82F9D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D7C0"))) PPC_WEAK_FUNC(sub_82F9D7C0);
PPC_FUNC_IMPL(__imp__sub_82F9D7C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82f9e308
	sub_82F9E308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D7CC"))) PPC_WEAK_FUNC(sub_82F9D7CC);
PPC_FUNC_IMPL(__imp__sub_82F9D7CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D7D0"))) PPC_WEAK_FUNC(sub_82F9D7D0);
PPC_FUNC_IMPL(__imp__sub_82F9D7D0) {
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
	// bl 0x82f9e308
	ctx.lr = 0x82F9D7E8;
	sub_82F9E308(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D7FC"))) PPC_WEAK_FUNC(sub_82F9D7FC);
PPC_FUNC_IMPL(__imp__sub_82F9D7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D800"))) PPC_WEAK_FUNC(sub_82F9D800);
PPC_FUNC_IMPL(__imp__sub_82F9D800) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,26548
	ctx.r8.s64 = ctx.r11.s64 + 26548;
	// addi r6,r10,26572
	ctx.r6.s64 = ctx.r10.s64 + 26572;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r9,26592
	ctx.r6.s64 = ctx.r9.s64 + 26592;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r7,26560
	ctx.r9.s64 = ctx.r7.s64 + 26560;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r6,r4,-12028
	ctx.r6.s64 = ctx.r4.s64 + -12028;
	// addi r7,r5,-12048
	ctx.r7.s64 = ctx.r5.s64 + -12048;
	// addi r4,r10,-12060
	ctx.r4.s64 = ctx.r10.s64 + -12060;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r5,r11,-12080
	ctx.r5.s64 = ctx.r11.s64 + -12080;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r8,-12092
	ctx.r10.s64 = ctx.r8.s64 + -12092;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D88C"))) PPC_WEAK_FUNC(sub_82F9D88C);
PPC_FUNC_IMPL(__imp__sub_82F9D88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D890"))) PPC_WEAK_FUNC(sub_82F9D890);
PPC_FUNC_IMPL(__imp__sub_82F9D890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D89C"))) PPC_WEAK_FUNC(sub_82F9D89C);
PPC_FUNC_IMPL(__imp__sub_82F9D89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D8A0"))) PPC_WEAK_FUNC(sub_82F9D8A0);
PPC_FUNC_IMPL(__imp__sub_82F9D8A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D8A4"))) PPC_WEAK_FUNC(sub_82F9D8A4);
PPC_FUNC_IMPL(__imp__sub_82F9D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D8A8"))) PPC_WEAK_FUNC(sub_82F9D8A8);
PPC_FUNC_IMPL(__imp__sub_82F9D8A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D8AC"))) PPC_WEAK_FUNC(sub_82F9D8AC);
PPC_FUNC_IMPL(__imp__sub_82F9D8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D8B0"))) PPC_WEAK_FUNC(sub_82F9D8B0);
PPC_FUNC_IMPL(__imp__sub_82F9D8B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-11908
	ctx.r10.s64 = ctx.r11.s64 + -11908;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D8C8"))) PPC_WEAK_FUNC(sub_82F9D8C8);
PPC_FUNC_IMPL(__imp__sub_82F9D8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11908
	ctx.r3.s64 = ctx.r11.s64 + -11908;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D8D4"))) PPC_WEAK_FUNC(sub_82F9D8D4);
PPC_FUNC_IMPL(__imp__sub_82F9D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D8D8"))) PPC_WEAK_FUNC(sub_82F9D8D8);
PPC_FUNC_IMPL(__imp__sub_82F9D8D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D8DC"))) PPC_WEAK_FUNC(sub_82F9D8DC);
PPC_FUNC_IMPL(__imp__sub_82F9D8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D8E0"))) PPC_WEAK_FUNC(sub_82F9D8E0);
PPC_FUNC_IMPL(__imp__sub_82F9D8E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-11828
	ctx.r10.s64 = ctx.r11.s64 + -11828;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D8F8"))) PPC_WEAK_FUNC(sub_82F9D8F8);
PPC_FUNC_IMPL(__imp__sub_82F9D8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11828
	ctx.r3.s64 = ctx.r11.s64 + -11828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D904"))) PPC_WEAK_FUNC(sub_82F9D904);
PPC_FUNC_IMPL(__imp__sub_82F9D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D908"))) PPC_WEAK_FUNC(sub_82F9D908);
PPC_FUNC_IMPL(__imp__sub_82F9D908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D90C"))) PPC_WEAK_FUNC(sub_82F9D90C);
PPC_FUNC_IMPL(__imp__sub_82F9D90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D910"))) PPC_WEAK_FUNC(sub_82F9D910);
PPC_FUNC_IMPL(__imp__sub_82F9D910) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-11748
	ctx.r10.s64 = ctx.r11.s64 + -11748;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D928"))) PPC_WEAK_FUNC(sub_82F9D928);
PPC_FUNC_IMPL(__imp__sub_82F9D928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11748
	ctx.r3.s64 = ctx.r11.s64 + -11748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D934"))) PPC_WEAK_FUNC(sub_82F9D934);
PPC_FUNC_IMPL(__imp__sub_82F9D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D938"))) PPC_WEAK_FUNC(sub_82F9D938);
PPC_FUNC_IMPL(__imp__sub_82F9D938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D93C"))) PPC_WEAK_FUNC(sub_82F9D93C);
PPC_FUNC_IMPL(__imp__sub_82F9D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D940"))) PPC_WEAK_FUNC(sub_82F9D940);
PPC_FUNC_IMPL(__imp__sub_82F9D940) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-11668
	ctx.r10.s64 = ctx.r11.s64 + -11668;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D958"))) PPC_WEAK_FUNC(sub_82F9D958);
PPC_FUNC_IMPL(__imp__sub_82F9D958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11668
	ctx.r3.s64 = ctx.r11.s64 + -11668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D964"))) PPC_WEAK_FUNC(sub_82F9D964);
PPC_FUNC_IMPL(__imp__sub_82F9D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D968"))) PPC_WEAK_FUNC(sub_82F9D968);
PPC_FUNC_IMPL(__imp__sub_82F9D968) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r9,r10,-11588
	ctx.r9.s64 = ctx.r10.s64 + -11588;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82fc8208
	sub_82FC8208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F9D994"))) PPC_WEAK_FUNC(sub_82F9D994);
PPC_FUNC_IMPL(__imp__sub_82F9D994) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D998"))) PPC_WEAK_FUNC(sub_82F9D998);
PPC_FUNC_IMPL(__imp__sub_82F9D998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11588
	ctx.r3.s64 = ctx.r11.s64 + -11588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D9A4"))) PPC_WEAK_FUNC(sub_82F9D9A4);
PPC_FUNC_IMPL(__imp__sub_82F9D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D9A8"))) PPC_WEAK_FUNC(sub_82F9D9A8);
PPC_FUNC_IMPL(__imp__sub_82F9D9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D9AC"))) PPC_WEAK_FUNC(sub_82F9D9AC);
PPC_FUNC_IMPL(__imp__sub_82F9D9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D9B0"))) PPC_WEAK_FUNC(sub_82F9D9B0);
PPC_FUNC_IMPL(__imp__sub_82F9D9B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-11508
	ctx.r10.s64 = ctx.r11.s64 + -11508;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D9C8"))) PPC_WEAK_FUNC(sub_82F9D9C8);
PPC_FUNC_IMPL(__imp__sub_82F9D9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11508
	ctx.r3.s64 = ctx.r11.s64 + -11508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D9D4"))) PPC_WEAK_FUNC(sub_82F9D9D4);
PPC_FUNC_IMPL(__imp__sub_82F9D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D9D8"))) PPC_WEAK_FUNC(sub_82F9D9D8);
PPC_FUNC_IMPL(__imp__sub_82F9D9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D9DC"))) PPC_WEAK_FUNC(sub_82F9D9DC);
PPC_FUNC_IMPL(__imp__sub_82F9D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9D9E0"))) PPC_WEAK_FUNC(sub_82F9D9E0);
PPC_FUNC_IMPL(__imp__sub_82F9D9E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-11428
	ctx.r10.s64 = ctx.r11.s64 + -11428;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9D9F8"))) PPC_WEAK_FUNC(sub_82F9D9F8);
PPC_FUNC_IMPL(__imp__sub_82F9D9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11428
	ctx.r3.s64 = ctx.r11.s64 + -11428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9DA04"))) PPC_WEAK_FUNC(sub_82F9DA04);
PPC_FUNC_IMPL(__imp__sub_82F9DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9DA08"))) PPC_WEAK_FUNC(sub_82F9DA08);
PPC_FUNC_IMPL(__imp__sub_82F9DA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9DA0C"))) PPC_WEAK_FUNC(sub_82F9DA0C);
PPC_FUNC_IMPL(__imp__sub_82F9DA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9DA10"))) PPC_WEAK_FUNC(sub_82F9DA10);
PPC_FUNC_IMPL(__imp__sub_82F9DA10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-11348
	ctx.r10.s64 = ctx.r11.s64 + -11348;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9DA28"))) PPC_WEAK_FUNC(sub_82F9DA28);
PPC_FUNC_IMPL(__imp__sub_82F9DA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11348
	ctx.r3.s64 = ctx.r11.s64 + -11348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9DA34"))) PPC_WEAK_FUNC(sub_82F9DA34);
PPC_FUNC_IMPL(__imp__sub_82F9DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9DA38"))) PPC_WEAK_FUNC(sub_82F9DA38);
PPC_FUNC_IMPL(__imp__sub_82F9DA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9DA3C"))) PPC_WEAK_FUNC(sub_82F9DA3C);
PPC_FUNC_IMPL(__imp__sub_82F9DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9DA40"))) PPC_WEAK_FUNC(sub_82F9DA40);
PPC_FUNC_IMPL(__imp__sub_82F9DA40) {
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
	// beq cr6,0x82f9da88
	if (ctx.cr6.eq) goto loc_82F9DA88;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,-11268
	ctx.r10.s64 = ctx.r11.s64 + -11268;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82f9da88
	if (ctx.cr6.eq) goto loc_82F9DA88;
	// lbz r11,294(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 294);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f9da88
	if (ctx.cr6.eq) goto loc_82F9DA88;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82fb26d0
	ctx.lr = 0x82F9DA88;
	sub_82FB26D0(ctx, base);
loc_82F9DA88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9DA98"))) PPC_WEAK_FUNC(sub_82F9DA98);
PPC_FUNC_IMPL(__imp__sub_82F9DA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-11268
	ctx.r3.s64 = ctx.r11.s64 + -11268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9DAA4"))) PPC_WEAK_FUNC(sub_82F9DAA4);
PPC_FUNC_IMPL(__imp__sub_82F9DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F9DAA8"))) PPC_WEAK_FUNC(sub_82F9DAA8);
PPC_FUNC_IMPL(__imp__sub_82F9DAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F9DAAC"))) PPC_WEAK_FUNC(sub_82F9DAAC);
PPC_FUNC_IMPL(__imp__sub_82F9DAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

