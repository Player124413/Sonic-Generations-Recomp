#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82888888"))) PPC_WEAK_FUNC(sub_82888888);
PPC_FUNC_IMPL(__imp__sub_82888888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1424(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888890"))) PPC_WEAK_FUNC(sub_82888890);
PPC_FUNC_IMPL(__imp__sub_82888890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1428(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888898"))) PPC_WEAK_FUNC(sub_82888898);
PPC_FUNC_IMPL(__imp__sub_82888898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1428(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1428, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828888A0"))) PPC_WEAK_FUNC(sub_828888A0);
PPC_FUNC_IMPL(__imp__sub_828888A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1432(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1432, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828888A8"))) PPC_WEAK_FUNC(sub_828888A8);
PPC_FUNC_IMPL(__imp__sub_828888A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1432(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1432);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828888B0"))) PPC_WEAK_FUNC(sub_828888B0);
PPC_FUNC_IMPL(__imp__sub_828888B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1504(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828888B8"))) PPC_WEAK_FUNC(sub_828888B8);
PPC_FUNC_IMPL(__imp__sub_828888B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1504(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1504, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828888C0"))) PPC_WEAK_FUNC(sub_828888C0);
PPC_FUNC_IMPL(__imp__sub_828888C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1504(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1504, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828888D0"))) PPC_WEAK_FUNC(sub_828888D0);
PPC_FUNC_IMPL(__imp__sub_828888D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1596(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1596, temp.u32);
	// stb r5,1600(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1600, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828888DC"))) PPC_WEAK_FUNC(sub_828888DC);
PPC_FUNC_IMPL(__imp__sub_828888DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828888E0"))) PPC_WEAK_FUNC(sub_828888E0);
PPC_FUNC_IMPL(__imp__sub_828888E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1600(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1600);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828888E8"))) PPC_WEAK_FUNC(sub_828888E8);
PPC_FUNC_IMPL(__imp__sub_828888E8) {
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
	// lfs f31,1596(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82876840
	ctx.lr = 0x82888908;
	sub_82876840(ctx, base);
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,12452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8288892c
	if (!ctx.cr6.lt) goto loc_8288892C;
	// lbz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1600);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8288895c
	goto loc_8288895C;
loc_8288892C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875b00
	ctx.lr = 0x82888934;
	sub_82875B00(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-4128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82888958
	if (!ctx.cr6.gt) goto loc_82888958;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-18508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18508);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8288895c
	if (ctx.cr6.lt) goto loc_8288895C;
loc_82888958:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8288895C:
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

__attribute__((alias("__imp__sub_82888974"))) PPC_WEAK_FUNC(sub_82888974);
PPC_FUNC_IMPL(__imp__sub_82888974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888978"))) PPC_WEAK_FUNC(sub_82888978);
PPC_FUNC_IMPL(__imp__sub_82888978) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2008, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888980"))) PPC_WEAK_FUNC(sub_82888980);
PPC_FUNC_IMPL(__imp__sub_82888980) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288898C"))) PPC_WEAK_FUNC(sub_8288898C);
PPC_FUNC_IMPL(__imp__sub_8288898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888990"))) PPC_WEAK_FUNC(sub_82888990);
PPC_FUNC_IMPL(__imp__sub_82888990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2032(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2032);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288899C"))) PPC_WEAK_FUNC(sub_8288899C);
PPC_FUNC_IMPL(__imp__sub_8288899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828889A0"))) PPC_WEAK_FUNC(sub_828889A0);
PPC_FUNC_IMPL(__imp__sub_828889A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2032, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828889A8"))) PPC_WEAK_FUNC(sub_828889A8);
PPC_FUNC_IMPL(__imp__sub_828889A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r11,15908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15908);
	// stw r11,2032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828889B8"))) PPC_WEAK_FUNC(sub_828889B8);
PPC_FUNC_IMPL(__imp__sub_828889B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,2008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
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

__attribute__((alias("__imp__sub_828889C8"))) PPC_WEAK_FUNC(sub_828889C8);
PPC_FUNC_IMPL(__imp__sub_828889C8) {
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
	// lbz r10,4424(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4424);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828889ec
	if (ctx.cr0.eq) goto loc_828889EC;
	// lbz r3,4425(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4425);
	// b 0x82888a10
	goto loc_82888A10;
loc_828889EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// beq cr6,0x82888a0c
	if (ctx.cr6.eq) goto loc_82888A0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8197
	ctx.r4.s64 = 8197;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824a9ae0
	ctx.lr = 0x82888A0C;
	sub_824A9AE0(ctx, base);
loc_82888A0C:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82888A10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888A20"))) PPC_WEAK_FUNC(sub_82888A20);
PPC_FUNC_IMPL(__imp__sub_82888A20) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14112);
	// bl 0x82e02670
	ctx.lr = 0x82888A44;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d78
	ctx.lr = 0x82888A50;
	sub_82875D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888A58;
	sub_82E01BF0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20940);
	// bl 0x82e02670
	ctx.lr = 0x82888A68;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d10
	ctx.lr = 0x82888A74;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888A7C;
	sub_82E01BF0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20936);
	// bl 0x82e02670
	ctx.lr = 0x82888A8C;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d10
	ctx.lr = 0x82888A98;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888AA0;
	sub_82E01BF0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-21012(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21012);
	// bl 0x82e02670
	ctx.lr = 0x82888AB0;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d10
	ctx.lr = 0x82888ABC;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888AC4;
	sub_82E01BF0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20992);
	// bl 0x82e02670
	ctx.lr = 0x82888AD4;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d10
	ctx.lr = 0x82888AE0;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888AE8;
	sub_82E01BF0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20988);
	// bl 0x82e02670
	ctx.lr = 0x82888AF8;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x82888B04;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888B0C;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82888B20"))) PPC_WEAK_FUNC(sub_82888B20);
PPC_FUNC_IMPL(__imp__sub_82888B20) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1460(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1460, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888B28"))) PPC_WEAK_FUNC(sub_82888B28);
PPC_FUNC_IMPL(__imp__sub_82888B28) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1460(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1460);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888B30"))) PPC_WEAK_FUNC(sub_82888B30);
PPC_FUNC_IMPL(__imp__sub_82888B30) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14188(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14188);
	// bl 0x82e02670
	ctx.lr = 0x82888B54;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d78
	ctx.lr = 0x82888B60;
	sub_82875D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888B68;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82888B7C"))) PPC_WEAK_FUNC(sub_82888B7C);
PPC_FUNC_IMPL(__imp__sub_82888B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888B80"))) PPC_WEAK_FUNC(sub_82888B80);
PPC_FUNC_IMPL(__imp__sub_82888B80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2064
	ctx.r3.s64 = ctx.r11.s64 + 2064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888B90"))) PPC_WEAK_FUNC(sub_82888B90);
PPC_FUNC_IMPL(__imp__sub_82888B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3492(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3492);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888B98"))) PPC_WEAK_FUNC(sub_82888B98);
PPC_FUNC_IMPL(__imp__sub_82888B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x828763b8
	ctx.lr = 0x82888BB0;
	sub_828763B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82888bbc
	if (ctx.cr0.eq) goto loc_82888BBC;
	// stfs f31,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
loc_82888BBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888BD0"))) PPC_WEAK_FUNC(sub_82888BD0);
PPC_FUNC_IMPL(__imp__sub_82888BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1484(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888BD8"))) PPC_WEAK_FUNC(sub_82888BD8);
PPC_FUNC_IMPL(__imp__sub_82888BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1488(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888BE0"))) PPC_WEAK_FUNC(sub_82888BE0);
PPC_FUNC_IMPL(__imp__sub_82888BE0) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14176);
	// bl 0x82e02670
	ctx.lr = 0x82888C04;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d78
	ctx.lr = 0x82888C10;
	sub_82875D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888C18;
	sub_82E01BF0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-13448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13448);
	// bl 0x82e02670
	ctx.lr = 0x82888C28;
	sub_82E02670(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82875d60
	ctx.lr = 0x82888C3C;
	sub_82875D60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888C44;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82888C58"))) PPC_WEAK_FUNC(sub_82888C58);
PPC_FUNC_IMPL(__imp__sub_82888C58) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14160);
	// bl 0x82e02670
	ctx.lr = 0x82888C7C;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d68
	ctx.lr = 0x82888C88;
	sub_82875D68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888C90;
	sub_82E01BF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82888CA4;
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

__attribute__((alias("__imp__sub_82888CB8"))) PPC_WEAK_FUNC(sub_82888CB8);
PPC_FUNC_IMPL(__imp__sub_82888CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4356(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4356, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888CC0"))) PPC_WEAK_FUNC(sub_82888CC0);
PPC_FUNC_IMPL(__imp__sub_82888CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4360(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4360, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888CC8"))) PPC_WEAK_FUNC(sub_82888CC8);
PPC_FUNC_IMPL(__imp__sub_82888CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4360(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4360, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888CD8"))) PPC_WEAK_FUNC(sub_82888CD8);
PPC_FUNC_IMPL(__imp__sub_82888CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,3552(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82888cf4
	if (!ctx.cr6.lt) goto loc_82888CF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82888CF4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888CFC"))) PPC_WEAK_FUNC(sub_82888CFC);
PPC_FUNC_IMPL(__imp__sub_82888CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888D00"))) PPC_WEAK_FUNC(sub_82888D00);
PPC_FUNC_IMPL(__imp__sub_82888D00) {
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
	// bl 0x82875f78
	ctx.lr = 0x82888D10;
	sub_82875F78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82888D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888D30"))) PPC_WEAK_FUNC(sub_82888D30);
PPC_FUNC_IMPL(__imp__sub_82888D30) {
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
	// bl 0x82875f78
	ctx.lr = 0x82888D40;
	sub_82875F78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82888D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888D60"))) PPC_WEAK_FUNC(sub_82888D60);
PPC_FUNC_IMPL(__imp__sub_82888D60) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14164);
	// bl 0x82e02670
	ctx.lr = 0x82888D84;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d78
	ctx.lr = 0x82888D90;
	sub_82875D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888D98;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82888DAC"))) PPC_WEAK_FUNC(sub_82888DAC);
PPC_FUNC_IMPL(__imp__sub_82888DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888DB0"))) PPC_WEAK_FUNC(sub_82888DB0);
PPC_FUNC_IMPL(__imp__sub_82888DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888DC0"))) PPC_WEAK_FUNC(sub_82888DC0);
PPC_FUNC_IMPL(__imp__sub_82888DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888DD0"))) PPC_WEAK_FUNC(sub_82888DD0);
PPC_FUNC_IMPL(__imp__sub_82888DD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888DDC"))) PPC_WEAK_FUNC(sub_82888DDC);
PPC_FUNC_IMPL(__imp__sub_82888DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888DE0"))) PPC_WEAK_FUNC(sub_82888DE0);
PPC_FUNC_IMPL(__imp__sub_82888DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2060(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888DE8"))) PPC_WEAK_FUNC(sub_82888DE8);
PPC_FUNC_IMPL(__imp__sub_82888DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4420, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888DF8"))) PPC_WEAK_FUNC(sub_82888DF8);
PPC_FUNC_IMPL(__imp__sub_82888DF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r4,4425(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4425, ctx.r4.u8);
	// stb r11,4424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4424, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888E08"))) PPC_WEAK_FUNC(sub_82888E08);
PPC_FUNC_IMPL(__imp__sub_82888E08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4424, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888E14"))) PPC_WEAK_FUNC(sub_82888E14);
PPC_FUNC_IMPL(__imp__sub_82888E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888E18"))) PPC_WEAK_FUNC(sub_82888E18);
PPC_FUNC_IMPL(__imp__sub_82888E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4432(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4432);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,4432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4432, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888E28"))) PPC_WEAK_FUNC(sub_82888E28);
PPC_FUNC_IMPL(__imp__sub_82888E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// b 0x8286ff40
	sub_8286FF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82888E30"))) PPC_WEAK_FUNC(sub_82888E30);
PPC_FUNC_IMPL(__imp__sub_82888E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// b 0x8286fff8
	sub_8286FFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82888E38"))) PPC_WEAK_FUNC(sub_82888E38);
PPC_FUNC_IMPL(__imp__sub_82888E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x82888E40;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31844
	ctx.r25.s64 = -2086928384;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r11,r11,17344
	ctx.r11.s64 = ctx.r11.s64 + 17344;
	// lwz r10,17396(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17396);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82888f04
	if (!ctx.cr0.eq) goto loc_82888F04;
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// lis r7,-31887
	ctx.r7.s64 = -2089746432;
	// lis r6,-31887
	ctx.r6.s64 = -2089746432;
	// lis r5,-31887
	ctx.r5.s64 = -2089746432;
	// lis r4,-31887
	ctx.r4.s64 = -2089746432;
	// lwz r9,-29524(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29524);
	// lis r3,-31887
	ctx.r3.s64 = -2089746432;
	// lwz r8,-29520(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29520);
	// lis r31,-31887
	ctx.r31.s64 = -2089746432;
	// lwz r7,-29216(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -29216);
	// lis r30,-31887
	ctx.r30.s64 = -2089746432;
	// lwz r6,-29212(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29212);
	// lis r29,-31887
	ctx.r29.s64 = -2089746432;
	// lwz r5,-29496(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + -29496);
	// lis r28,-31887
	ctx.r28.s64 = -2089746432;
	// lwz r4,-29276(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -29276);
	// lis r27,-31887
	ctx.r27.s64 = -2089746432;
	// lwz r3,-29264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29264);
	// lis r26,-31887
	ctx.r26.s64 = -2089746432;
	// lwz r31,-29272(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29272);
	// lwz r30,-29260(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29260);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lwz r29,-29488(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29488);
	// lwz r28,-29296(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29296);
	// lwz r27,-29292(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29292);
	// lwz r26,-29516(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29516);
	// stw r10,17396(r25)
	PPC_STORE_U32(ctx.r25.u32 + 17396, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// stw r26,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
loc_82888F04:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82888F0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e02670
	ctx.lr = 0x82888F18;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e023a8
	ctx.lr = 0x82888F24;
	sub_82E023A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82888F30;
	sub_82E01BF0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82888f54
	if (!ctx.cr0.eq) goto loc_82888F54;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,52
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 52, ctx.xer);
	// blt cr6,0x82888f0c
	if (ctx.cr6.lt) goto loc_82888F0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82888F4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
loc_82888F54:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82888f4c
	goto loc_82888F4C;
}

__attribute__((alias("__imp__sub_82888F5C"))) PPC_WEAK_FUNC(sub_82888F5C);
PPC_FUNC_IMPL(__imp__sub_82888F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888F60"))) PPC_WEAK_FUNC(sub_82888F60);
PPC_FUNC_IMPL(__imp__sub_82888F60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1776(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1776, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888F6C"))) PPC_WEAK_FUNC(sub_82888F6C);
PPC_FUNC_IMPL(__imp__sub_82888F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888F70"))) PPC_WEAK_FUNC(sub_82888F70);
PPC_FUNC_IMPL(__imp__sub_82888F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1188(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888F78"))) PPC_WEAK_FUNC(sub_82888F78);
PPC_FUNC_IMPL(__imp__sub_82888F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,3648(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3648, temp.u32);
	// stb r11,3644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3644, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888F88"))) PPC_WEAK_FUNC(sub_82888F88);
PPC_FUNC_IMPL(__imp__sub_82888F88) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3644, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888F94"))) PPC_WEAK_FUNC(sub_82888F94);
PPC_FUNC_IMPL(__imp__sub_82888F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888F98"))) PPC_WEAK_FUNC(sub_82888F98);
PPC_FUNC_IMPL(__imp__sub_82888F98) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3644(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3644);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888FA0"))) PPC_WEAK_FUNC(sub_82888FA0);
PPC_FUNC_IMPL(__imp__sub_82888FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888FA8"))) PPC_WEAK_FUNC(sub_82888FA8);
PPC_FUNC_IMPL(__imp__sub_82888FA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3496(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3496, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888FB4"))) PPC_WEAK_FUNC(sub_82888FB4);
PPC_FUNC_IMPL(__imp__sub_82888FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82888FB8"))) PPC_WEAK_FUNC(sub_82888FB8);
PPC_FUNC_IMPL(__imp__sub_82888FB8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3496(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3496);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82888FC0"))) PPC_WEAK_FUNC(sub_82888FC0);
PPC_FUNC_IMPL(__imp__sub_82888FC0) {
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
	// bl 0x82875da8
	ctx.lr = 0x82888FD8;
	sub_82875DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82888ff4
	if (ctx.cr0.eq) goto loc_82888FF4;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r4,r11,17456
	ctx.r4.s64 = ctx.r11.s64 + 17456;
	// b 0x82888ffc
	goto loc_82888FFC;
loc_82888FF4:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r4,r11,17448
	ctx.r4.s64 = ctx.r11.s64 + 17448;
loc_82888FFC:
	// bl 0x82878b38
	ctx.lr = 0x82889000;
	sub_82878B38(ctx, base);
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

__attribute__((alias("__imp__sub_82889014"))) PPC_WEAK_FUNC(sub_82889014);
PPC_FUNC_IMPL(__imp__sub_82889014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889018"))) PPC_WEAK_FUNC(sub_82889018);
PPC_FUNC_IMPL(__imp__sub_82889018) {
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
	// bl 0x82875da8
	ctx.lr = 0x82889030;
	sub_82875DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8288904c
	if (ctx.cr0.eq) goto loc_8288904C;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r4,r11,17472
	ctx.r4.s64 = ctx.r11.s64 + 17472;
	// b 0x82889054
	goto loc_82889054;
loc_8288904C:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r4,r11,17464
	ctx.r4.s64 = ctx.r11.s64 + 17464;
loc_82889054:
	// bl 0x82878b38
	ctx.lr = 0x82889058;
	sub_82878B38(ctx, base);
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

__attribute__((alias("__imp__sub_8288906C"))) PPC_WEAK_FUNC(sub_8288906C);
PPC_FUNC_IMPL(__imp__sub_8288906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889070"))) PPC_WEAK_FUNC(sub_82889070);
PPC_FUNC_IMPL(__imp__sub_82889070) {
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
	// bl 0x82875da8
	ctx.lr = 0x82889088;
	sub_82875DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x828890a4
	if (ctx.cr0.eq) goto loc_828890A4;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r4,r11,17488
	ctx.r4.s64 = ctx.r11.s64 + 17488;
	// b 0x828890ac
	goto loc_828890AC;
loc_828890A4:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
loc_828890AC:
	// bl 0x82878b38
	ctx.lr = 0x828890B0;
	sub_82878B38(ctx, base);
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

__attribute__((alias("__imp__sub_828890C4"))) PPC_WEAK_FUNC(sub_828890C4);
PPC_FUNC_IMPL(__imp__sub_828890C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828890C8"))) PPC_WEAK_FUNC(sub_828890C8);
PPC_FUNC_IMPL(__imp__sub_828890C8) {
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
	// bl 0x82875da8
	ctx.lr = 0x828890E0;
	sub_82875DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x828890fc
	if (ctx.cr0.eq) goto loc_828890FC;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r4,r11,17432
	ctx.r4.s64 = ctx.r11.s64 + 17432;
	// b 0x82889104
	goto loc_82889104;
loc_828890FC:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
loc_82889104:
	// bl 0x82878b38
	ctx.lr = 0x82889108;
	sub_82878B38(ctx, base);
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

__attribute__((alias("__imp__sub_8288911C"))) PPC_WEAK_FUNC(sub_8288911C);
PPC_FUNC_IMPL(__imp__sub_8288911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889120"))) PPC_WEAK_FUNC(sub_82889120);
PPC_FUNC_IMPL(__imp__sub_82889120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4608(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4608, temp.u32);
	// stfs f2,4612(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4612, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288912C"))) PPC_WEAK_FUNC(sub_8288912C);
PPC_FUNC_IMPL(__imp__sub_8288912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889130"))) PPC_WEAK_FUNC(sub_82889130);
PPC_FUNC_IMPL(__imp__sub_82889130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4608(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4608);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4612(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889144"))) PPC_WEAK_FUNC(sub_82889144);
PPC_FUNC_IMPL(__imp__sub_82889144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889148"))) PPC_WEAK_FUNC(sub_82889148);
PPC_FUNC_IMPL(__imp__sub_82889148) {
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
	// lbz r11,4544(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4544);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82889178
	if (ctx.cr0.eq) goto loc_82889178;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,6028
	ctx.r5.s64 = ctx.r11.s64 + 6028;
	// b 0x82889180
	goto loc_82889180;
loc_82889178:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,6032
	ctx.r5.s64 = ctx.r11.s64 + 6032;
loc_82889180:
	// bl 0x82e027b0
	ctx.lr = 0x82889184;
	sub_82E027B0(ctx, base);
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

__attribute__((alias("__imp__sub_8288919C"))) PPC_WEAK_FUNC(sub_8288919C);
PPC_FUNC_IMPL(__imp__sub_8288919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828891A0"))) PPC_WEAK_FUNC(sub_828891A0);
PPC_FUNC_IMPL(__imp__sub_828891A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4544(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4544);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828891A8"))) PPC_WEAK_FUNC(sub_828891A8);
PPC_FUNC_IMPL(__imp__sub_828891A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4544(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4544);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,4544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4544, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828891BC"))) PPC_WEAK_FUNC(sub_828891BC);
PPC_FUNC_IMPL(__imp__sub_828891BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828891C0"))) PPC_WEAK_FUNC(sub_828891C0);
PPC_FUNC_IMPL(__imp__sub_828891C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4616(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4616, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828891C8"))) PPC_WEAK_FUNC(sub_828891C8);
PPC_FUNC_IMPL(__imp__sub_828891C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4616(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4616);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828891D0"))) PPC_WEAK_FUNC(sub_828891D0);
PPC_FUNC_IMPL(__imp__sub_828891D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1468);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828891D8"))) PPC_WEAK_FUNC(sub_828891D8);
PPC_FUNC_IMPL(__imp__sub_828891D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1468(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1468, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828891E0"))) PPC_WEAK_FUNC(sub_828891E0);
PPC_FUNC_IMPL(__imp__sub_828891E0) {
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
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82877c40
	ctx.lr = 0x828891FC;
	sub_82877C40(ctx, base);
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// beq 0x82889214
	if (ctx.cr0.eq) goto loc_82889214;
	// stw r10,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r10.u32);
	// b 0x82889218
	goto loc_82889218;
loc_82889214:
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
loc_82889218:
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// stw r10,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82889234"))) PPC_WEAK_FUNC(sub_82889234);
PPC_FUNC_IMPL(__imp__sub_82889234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889238"))) PPC_WEAK_FUNC(sub_82889238);
PPC_FUNC_IMPL(__imp__sub_82889238) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3652, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889240"))) PPC_WEAK_FUNC(sub_82889240);
PPC_FUNC_IMPL(__imp__sub_82889240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3652);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889254"))) PPC_WEAK_FUNC(sub_82889254);
PPC_FUNC_IMPL(__imp__sub_82889254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889258"))) PPC_WEAK_FUNC(sub_82889258);
PPC_FUNC_IMPL(__imp__sub_82889258) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x82889284
	if (ctx.cr6.eq) goto loc_82889284;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8205
	ctx.r4.s64 = 8205;
	// bl 0x824a9ae0
	ctx.lr = 0x82889284;
	sub_824A9AE0(ctx, base);
loc_82889284:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889298"))) PPC_WEAK_FUNC(sub_82889298);
PPC_FUNC_IMPL(__imp__sub_82889298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4468);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828892b0
	if (ctx.cr6.eq) goto loc_828892B0;
	// stw r4,4468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4468, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_828892B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828892B8"))) PPC_WEAK_FUNC(sub_828892B8);
PPC_FUNC_IMPL(__imp__sub_828892B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4460(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4460, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828892C0"))) PPC_WEAK_FUNC(sub_828892C0);
PPC_FUNC_IMPL(__imp__sub_828892C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4460(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,4460(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4460, temp.u32);
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f0,4460(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4460, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828892E4"))) PPC_WEAK_FUNC(sub_828892E4);
PPC_FUNC_IMPL(__imp__sub_828892E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828892E8"))) PPC_WEAK_FUNC(sub_828892E8);
PPC_FUNC_IMPL(__imp__sub_828892E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4400, ctx.r4.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8288930c
	if (ctx.cr6.lt) goto loc_8288930C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4396(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4396);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8288930C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,4396(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4396);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82889320"))) PPC_WEAK_FUNC(sub_82889320);
PPC_FUNC_IMPL(__imp__sub_82889320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889324"))) PPC_WEAK_FUNC(sub_82889324);
PPC_FUNC_IMPL(__imp__sub_82889324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889328"))) PPC_WEAK_FUNC(sub_82889328);
PPC_FUNC_IMPL(__imp__sub_82889328) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3736);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889330"))) PPC_WEAK_FUNC(sub_82889330);
PPC_FUNC_IMPL(__imp__sub_82889330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,3736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3736);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
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

__attribute__((alias("__imp__sub_82889344"))) PPC_WEAK_FUNC(sub_82889344);
PPC_FUNC_IMPL(__imp__sub_82889344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889348"))) PPC_WEAK_FUNC(sub_82889348);
PPC_FUNC_IMPL(__imp__sub_82889348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4352(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4352, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889350"))) PPC_WEAK_FUNC(sub_82889350);
PPC_FUNC_IMPL(__imp__sub_82889350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4352);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889358"))) PPC_WEAK_FUNC(sub_82889358);
PPC_FUNC_IMPL(__imp__sub_82889358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-4128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4352(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4352, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889368"))) PPC_WEAK_FUNC(sub_82889368);
PPC_FUNC_IMPL(__imp__sub_82889368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1728(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1728, temp.u32);
	// stfs f2,1732(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1732, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889374"))) PPC_WEAK_FUNC(sub_82889374);
PPC_FUNC_IMPL(__imp__sub_82889374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889378"))) PPC_WEAK_FUNC(sub_82889378);
PPC_FUNC_IMPL(__imp__sub_82889378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82875f78
	ctx.lr = 0x82889390;
	sub_82875F78(ctx, base);
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828893A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828893b4
	if (ctx.cr0.eq) goto loc_828893B4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d46208
	ctx.lr = 0x828893B4;
	sub_82D46208(ctx, base);
loc_828893B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828893C8"))) PPC_WEAK_FUNC(sub_828893C8);
PPC_FUNC_IMPL(__imp__sub_828893C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82875f78
	ctx.lr = 0x828893E0;
	sub_82875F78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82886128
	ctx.lr = 0x828893E8;
	sub_82886128(ctx, base);
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

__attribute__((alias("__imp__sub_828893FC"))) PPC_WEAK_FUNC(sub_828893FC);
PPC_FUNC_IMPL(__imp__sub_828893FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889400"))) PPC_WEAK_FUNC(sub_82889400);
PPC_FUNC_IMPL(__imp__sub_82889400) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82875f78
	ctx.lr = 0x82889418;
	sub_82875F78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82885c48
	ctx.lr = 0x82889420;
	sub_82885C48(ctx, base);
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

__attribute__((alias("__imp__sub_82889434"))) PPC_WEAK_FUNC(sub_82889434);
PPC_FUNC_IMPL(__imp__sub_82889434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889438"))) PPC_WEAK_FUNC(sub_82889438);
PPC_FUNC_IMPL(__imp__sub_82889438) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82875f78
	ctx.lr = 0x82889458;
	sub_82875F78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82889470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82889488"))) PPC_WEAK_FUNC(sub_82889488);
PPC_FUNC_IMPL(__imp__sub_82889488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288949C"))) PPC_WEAK_FUNC(sub_8288949C);
PPC_FUNC_IMPL(__imp__sub_8288949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828894A0"))) PPC_WEAK_FUNC(sub_828894A0);
PPC_FUNC_IMPL(__imp__sub_828894A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r11,20252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20252);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828894B8"))) PPC_WEAK_FUNC(sub_828894B8);
PPC_FUNC_IMPL(__imp__sub_828894B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lwz r3,20252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828894C4"))) PPC_WEAK_FUNC(sub_828894C4);
PPC_FUNC_IMPL(__imp__sub_828894C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828894C8"))) PPC_WEAK_FUNC(sub_828894C8);
PPC_FUNC_IMPL(__imp__sub_828894C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r11,-13368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13368);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828894E0"))) PPC_WEAK_FUNC(sub_828894E0);
PPC_FUNC_IMPL(__imp__sub_828894E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r3,-13368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13368);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828894EC"))) PPC_WEAK_FUNC(sub_828894EC);
PPC_FUNC_IMPL(__imp__sub_828894EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828894F0"))) PPC_WEAK_FUNC(sub_828894F0);
PPC_FUNC_IMPL(__imp__sub_828894F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r11,-3296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889508"))) PPC_WEAK_FUNC(sub_82889508);
PPC_FUNC_IMPL(__imp__sub_82889508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r3,-3296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889514"))) PPC_WEAK_FUNC(sub_82889514);
PPC_FUNC_IMPL(__imp__sub_82889514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889518"))) PPC_WEAK_FUNC(sub_82889518);
PPC_FUNC_IMPL(__imp__sub_82889518) {
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
	// beq cr6,0x8288956c
	if (ctx.cr6.eq) goto loc_8288956C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82889548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9348
	ctx.lr = 0x82889558;
	sub_82EE9348(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ee9318
	ctx.lr = 0x82889564;
	sub_82EE9318(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x82889570
	goto loc_82889570;
loc_8288956C:
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
loc_82889570:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82ee9318
	ctx.lr = 0x82889578;
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

__attribute__((alias("__imp__sub_82889590"))) PPC_WEAK_FUNC(sub_82889590);
PPC_FUNC_IMPL(__imp__sub_82889590) {
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
	// lbz r10,1776(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1776);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828895b8
	if (ctx.cr0.eq) goto loc_828895B8;
	// addi r3,r3,1792
	ctx.r3.s64 = ctx.r3.s64 + 1792;
	// b 0x828895ec
	goto loc_828895EC;
loc_828895B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,272(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// bl 0x82a245c8
	ctx.lr = 0x828895C4;
	sub_82A245C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x828895d8
	if (!ctx.cr6.eq) goto loc_828895D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828895D8:
	// bl 0x82a3bd60
	ctx.lr = 0x828895DC;
	sub_82A3BD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x828895E8;
	sub_82E01548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828895EC:
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

__attribute__((alias("__imp__sub_82889600"))) PPC_WEAK_FUNC(sub_82889600);
PPC_FUNC_IMPL(__imp__sub_82889600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824bfa10
	sub_824BFA10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288960C"))) PPC_WEAK_FUNC(sub_8288960C);
PPC_FUNC_IMPL(__imp__sub_8288960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889610"))) PPC_WEAK_FUNC(sub_82889610);
PPC_FUNC_IMPL(__imp__sub_82889610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824bfd68
	sub_824BFD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288961C"))) PPC_WEAK_FUNC(sub_8288961C);
PPC_FUNC_IMPL(__imp__sub_8288961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889620"))) PPC_WEAK_FUNC(sub_82889620);
PPC_FUNC_IMPL(__imp__sub_82889620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824bfc20
	sub_824BFC20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288962C"))) PPC_WEAK_FUNC(sub_8288962C);
PPC_FUNC_IMPL(__imp__sub_8288962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889630"))) PPC_WEAK_FUNC(sub_82889630);
PPC_FUNC_IMPL(__imp__sub_82889630) {
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
	// lwz r10,1516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,-4752(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x824bfc20
	ctx.lr = 0x8288965C;
	sub_824BFC20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82889690
	if (ctx.cr0.eq) goto loc_82889690;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82889690
	if (ctx.cr6.eq) goto loc_82889690;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,8216
	ctx.r4.s64 = 8216;
	// bl 0x824a9ae0
	ctx.lr = 0x82889684;
	sub_824A9AE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bne 0x82889694
	if (!ctx.cr0.eq) goto loc_82889694;
loc_82889690:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82889694:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828896A4"))) PPC_WEAK_FUNC(sub_828896A4);
PPC_FUNC_IMPL(__imp__sub_828896A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828896A8"))) PPC_WEAK_FUNC(sub_828896A8);
PPC_FUNC_IMPL(__imp__sub_828896A8) {
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
	// lwz r4,272(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a24578
	ctx.lr = 0x828896C8;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x828896dc
	if (!ctx.cr6.eq) goto loc_828896DC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_828896DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1f288
	ctx.lr = 0x828896E4;
	sub_82A1F288(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x828896EC;
	sub_82E01548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82889704"))) PPC_WEAK_FUNC(sub_82889704);
PPC_FUNC_IMPL(__imp__sub_82889704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889708"))) PPC_WEAK_FUNC(sub_82889708);
PPC_FUNC_IMPL(__imp__sub_82889708) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82877c40
	ctx.lr = 0x82889724;
	sub_82877C40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288973c
	if (ctx.cr0.eq) goto loc_8288973C;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x82889738;
	sub_829E9700(ctx, base);
	// b 0x82889750
	goto loc_82889750;
loc_8288973C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82889750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82889750:
	// lfs f0,1340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1340);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,1472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_82889778"))) PPC_WEAK_FUNC(sub_82889778);
PPC_FUNC_IMPL(__imp__sub_82889778) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x8288979C;
	sub_829E9700(ctx, base);
	// li r4,196
	ctx.r4.s64 = 196;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x829e9700
	ctx.lr = 0x828897AC;
	sub_829E9700(ctx, base);
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f0,1476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828897D4"))) PPC_WEAK_FUNC(sub_828897D4);
PPC_FUNC_IMPL(__imp__sub_828897D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828897D8"))) PPC_WEAK_FUNC(sub_828897D8);
PPC_FUNC_IMPL(__imp__sub_828897D8) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x828897FC;
	sub_829E9700(ctx, base);
	// li r4,197
	ctx.r4.s64 = 197;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x829e9700
	ctx.lr = 0x8288980C;
	sub_829E9700(ctx, base);
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f0,1480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889834"))) PPC_WEAK_FUNC(sub_82889834);
PPC_FUNC_IMPL(__imp__sub_82889834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889838"))) PPC_WEAK_FUNC(sub_82889838);
PPC_FUNC_IMPL(__imp__sub_82889838) {
	PPC_FUNC_PROLOGUE();
	// li r11,656
	ctx.r11.s64 = 656;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r10,1512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1512, ctx.r10.u8);
	// stb r9,1513(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1513, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889858"))) PPC_WEAK_FUNC(sub_82889858);
PPC_FUNC_IMPL(__imp__sub_82889858) {
	PPC_FUNC_PROLOGUE();
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889868"))) PPC_WEAK_FUNC(sub_82889868);
PPC_FUNC_IMPL(__imp__sub_82889868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1572(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1572);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82889890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9318
	ctx.lr = 0x8288989C;
	sub_82EE9318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9fa18
	ctx.lr = 0x828898AC;
	sub_82E9FA18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828898C4"))) PPC_WEAK_FUNC(sub_828898C4);
PPC_FUNC_IMPL(__imp__sub_828898C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828898C8"))) PPC_WEAK_FUNC(sub_828898C8);
PPC_FUNC_IMPL(__imp__sub_828898C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1572(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1572);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828898F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9318
	ctx.lr = 0x828898FC;
	sub_82EE9318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9fdf0
	ctx.lr = 0x82889908;
	sub_82E9FDF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889920"))) PPC_WEAK_FUNC(sub_82889920);
PPC_FUNC_IMPL(__imp__sub_82889920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// addi r5,r3,1248
	ctx.r5.s64 = ctx.r3.s64 + 1248;
	// addi r4,r3,1216
	ctx.r4.s64 = ctx.r3.s64 + 1216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9688
	ctx.lr = 0x82889944;
	sub_82EE9688(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x828760e0
	ctx.lr = 0x82889970;
	sub_828760E0(ctx, base);
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

__attribute__((alias("__imp__sub_82889984"))) PPC_WEAK_FUNC(sub_82889984);
PPC_FUNC_IMPL(__imp__sub_82889984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889988"))) PPC_WEAK_FUNC(sub_82889988);
PPC_FUNC_IMPL(__imp__sub_82889988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,1248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1248, temp.u32);
	// addi r11,r3,1248
	ctx.r11.s64 = ctx.r3.s64 + 1248;
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1252(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1252, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1256, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1260, temp.u32);
	// beq 0x82889a04
	if (ctx.cr0.eq) goto loc_82889A04;
	// addi r4,r3,1216
	ctx.r4.s64 = ctx.r3.s64 + 1216;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9688
	ctx.lr = 0x828899D8;
	sub_82EE9688(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x828760e0
	ctx.lr = 0x82889A04;
	sub_828760E0(ctx, base);
loc_82889A04:
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

__attribute__((alias("__imp__sub_82889A18"))) PPC_WEAK_FUNC(sub_82889A18);
PPC_FUNC_IMPL(__imp__sub_82889A18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,272(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a24578
	ctx.lr = 0x82889A40;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82889a54
	if (!ctx.cr6.eq) goto loc_82889A54;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82889A54:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82889A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a1df68
	ctx.lr = 0x82889A70;
	sub_82A1DF68(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82889A78;
	sub_82E01548(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828686a8
	ctx.lr = 0x82889A88;
	sub_828686A8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82889a98
	if (ctx.cr6.eq) goto loc_82889A98;
	// bl 0x82480108
	ctx.lr = 0x82889A98;
	sub_82480108(ctx, base);
loc_82889A98:
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

__attribute__((alias("__imp__sub_82889AB4"))) PPC_WEAK_FUNC(sub_82889AB4);
PPC_FUNC_IMPL(__imp__sub_82889AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889AB8"))) PPC_WEAK_FUNC(sub_82889AB8);
PPC_FUNC_IMPL(__imp__sub_82889AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1312);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,1316(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82889AD4:
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
	// bne 0x82889ad4
	if (!ctx.cr0.eq) goto loc_82889AD4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889AF4"))) PPC_WEAK_FUNC(sub_82889AF4);
PPC_FUNC_IMPL(__imp__sub_82889AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889AF8"))) PPC_WEAK_FUNC(sub_82889AF8);
PPC_FUNC_IMPL(__imp__sub_82889AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// b 0x8287d528
	sub_8287D528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82889B00"))) PPC_WEAK_FUNC(sub_82889B00);
PPC_FUNC_IMPL(__imp__sub_82889B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// b 0x8287d540
	sub_8287D540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82889B08"))) PPC_WEAK_FUNC(sub_82889B08);
PPC_FUNC_IMPL(__imp__sub_82889B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// b 0x8287d550
	sub_8287D550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82889B10"))) PPC_WEAK_FUNC(sub_82889B10);
PPC_FUNC_IMPL(__imp__sub_82889B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// b 0x8287d560
	sub_8287D560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82889B18"))) PPC_WEAK_FUNC(sub_82889B18);
PPC_FUNC_IMPL(__imp__sub_82889B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// b 0x8287d580
	sub_8287D580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82889B20"))) PPC_WEAK_FUNC(sub_82889B20);
PPC_FUNC_IMPL(__imp__sub_82889B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82889b74
	if (ctx.cr6.eq) goto loc_82889B74;
	// lwz r11,1296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1296);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82889b50
	if (!ctx.cr6.eq) goto loc_82889B50;
	// lwz r11,1320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82889b50
	if (!ctx.cr6.eq) goto loc_82889B50;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82889B50:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,1328(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82889b74
	if (!ctx.cr6.gt) goto loc_82889B74;
	// lwz r11,1324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1324);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82889B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889B7C"))) PPC_WEAK_FUNC(sub_82889B7C);
PPC_FUNC_IMPL(__imp__sub_82889B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889B80"))) PPC_WEAK_FUNC(sub_82889B80);
PPC_FUNC_IMPL(__imp__sub_82889B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,59
	ctx.r4.s64 = 59;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x8287d528
	ctx.lr = 0x82889BB0;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82889be0
	if (ctx.cr0.eq) goto loc_82889BE0;
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d540
	ctx.lr = 0x82889BC4;
	sub_8287D540(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,3636(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3636, temp.u32);
	// stfs f30,3640(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3640, temp.u32);
	// stb r10,3632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3632, ctx.r10.u8);
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3600, temp.u32);
loc_82889BE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889BFC"))) PPC_WEAK_FUNC(sub_82889BFC);
PPC_FUNC_IMPL(__imp__sub_82889BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889C00"))) PPC_WEAK_FUNC(sub_82889C00);
PPC_FUNC_IMPL(__imp__sub_82889C00) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// li r4,59
	ctx.r4.s64 = 59;
	// beq 0x82889c14
	if (ctx.cr0.eq) goto loc_82889C14;
	// b 0x8287d540
	sub_8287D540(ctx, base);
	return;
loc_82889C14:
	// b 0x8287d550
	sub_8287D550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82889C18"))) PPC_WEAK_FUNC(sub_82889C18);
PPC_FUNC_IMPL(__imp__sub_82889C18) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x82889C3C;
	sub_829E9700(ctx, base);
	// li r4,110
	ctx.r4.s64 = 110;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8287d528
	ctx.lr = 0x82889C4C;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82889c7c
	if (ctx.cr0.eq) goto loc_82889C7C;
	// li r4,130
	ctx.r4.s64 = 130;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x82889C60;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// li r4,31
	ctx.r4.s64 = 31;
	// bne 0x82889c74
	if (!ctx.cr0.eq) goto loc_82889C74;
	// li r4,30
	ctx.r4.s64 = 30;
loc_82889C74:
	// bl 0x829e9700
	ctx.lr = 0x82889C78;
	sub_829E9700(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82889C7C:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82877c40
	ctx.lr = 0x82889C88;
	sub_82877C40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82889ca4
	if (ctx.cr0.eq) goto loc_82889CA4;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x82889C9C;
	sub_829E9700(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82889cec
	goto loc_82889CEC;
loc_82889CA4:
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x82889CB0;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82889ccc
	if (ctx.cr0.eq) goto loc_82889CCC;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x82889CC4;
	sub_829E9700(ctx, base);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// b 0x82889cec
	goto loc_82889CEC;
loc_82889CCC:
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x82889CD8;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82889cec
	if (ctx.cr0.eq) goto loc_82889CEC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,10064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_82889CEC:
	// li r4,111
	ctx.r4.s64 = 111;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x82889CF8;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82889d10
	if (ctx.cr0.eq) goto loc_82889D10;
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x82889D0C;
	sub_829E9700(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82889D10:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889D2C"))) PPC_WEAK_FUNC(sub_82889D2C);
PPC_FUNC_IMPL(__imp__sub_82889D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889D30"))) PPC_WEAK_FUNC(sub_82889D30);
PPC_FUNC_IMPL(__imp__sub_82889D30) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x82889D54;
	sub_829E9700(ctx, base);
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8287d528
	ctx.lr = 0x82889D64;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82889d7c
	if (ctx.cr0.eq) goto loc_82889D7C;
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x82889D78;
	sub_829E9700(ctx, base);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
loc_82889D7C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889D98"))) PPC_WEAK_FUNC(sub_82889D98);
PPC_FUNC_IMPL(__imp__sub_82889D98) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828779c8
	ctx.lr = 0x82889DB0;
	sub_828779C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e23c98
	ctx.lr = 0x82889DB8;
	sub_82E23C98(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82889dc8
	if (ctx.cr6.eq) goto loc_82889DC8;
	// bl 0x82480108
	ctx.lr = 0x82889DC8;
	sub_82480108(ctx, base);
loc_82889DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889DD8"))) PPC_WEAK_FUNC(sub_82889DD8);
PPC_FUNC_IMPL(__imp__sub_82889DD8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// bl 0x82870048
	ctx.lr = 0x82889DF8;
	sub_82870048(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d540
	ctx.lr = 0x82889E04;
	sub_8287D540(ctx, base);
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d550
	ctx.lr = 0x82889E10;
	sub_8287D550(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r4,r11,8432
	ctx.r4.s64 = ctx.r11.s64 + 8432;
	// bl 0x82e23558
	ctx.lr = 0x82889E20;
	sub_82E23558(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
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

__attribute__((alias("__imp__sub_82889E44"))) PPC_WEAK_FUNC(sub_82889E44);
PPC_FUNC_IMPL(__imp__sub_82889E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889E48"))) PPC_WEAK_FUNC(sub_82889E48);
PPC_FUNC_IMPL(__imp__sub_82889E48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82875da8
	ctx.lr = 0x82889E64;
	sub_82875DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,20
	ctx.r4.s64 = 20;
	// beq 0x82889eb4
	if (ctx.cr0.eq) goto loc_82889EB4;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r3,17432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17432);
	// bl 0x829e9700
	ctx.lr = 0x82889E7C;
	sub_829E9700(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r9,r9,24284
	ctx.r9.s64 = ctx.r9.s64 + 24284;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v61,v62,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// b 0x82889ef4
	goto loc_82889EF4;
loc_82889EB4:
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lwz r3,17424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17424);
	// bl 0x829e9700
	ctx.lr = 0x82889EC0;
	sub_829E9700(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v60,v62,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
loc_82889EF4:
	// vrlimi128 v60,v61,2,2
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v60,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82889F14"))) PPC_WEAK_FUNC(sub_82889F14);
PPC_FUNC_IMPL(__imp__sub_82889F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889F18"))) PPC_WEAK_FUNC(sub_82889F18);
PPC_FUNC_IMPL(__imp__sub_82889F18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,1360
	ctx.r3.s64 = ctx.r3.s64 + 1360;
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ee8680
	ctx.lr = 0x82889F3C;
	sub_82EE8680(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875e38
	ctx.lr = 0x82889F48;
	sub_82875E38(ctx, base);
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x829e9dd8
	ctx.lr = 0x82889F5C;
	sub_829E9DD8(ctx, base);
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

__attribute__((alias("__imp__sub_82889F70"))) PPC_WEAK_FUNC(sub_82889F70);
PPC_FUNC_IMPL(__imp__sub_82889F70) {
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
	// lfs f0,1380(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f1,1376(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1376, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82875e38
	ctx.lr = 0x82889F90;
	sub_82875E38(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d98
	ctx.lr = 0x82889FA0;
	sub_829E9D98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889FB0"))) PPC_WEAK_FUNC(sub_82889FB0);
PPC_FUNC_IMPL(__imp__sub_82889FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2036(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2036);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889FB8"))) PPC_WEAK_FUNC(sub_82889FB8);
PPC_FUNC_IMPL(__imp__sub_82889FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2048);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82889FC0"))) PPC_WEAK_FUNC(sub_82889FC0);
PPC_FUNC_IMPL(__imp__sub_82889FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8287d528
	sub_8287D528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82889FCC"))) PPC_WEAK_FUNC(sub_82889FCC);
PPC_FUNC_IMPL(__imp__sub_82889FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82889FD0"))) PPC_WEAK_FUNC(sub_82889FD0);
PPC_FUNC_IMPL(__imp__sub_82889FD0) {
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
	// li r4,139
	ctx.r4.s64 = 139;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x82889FF0;
	sub_829E9700(ctx, base);
	// stfs f1,1384(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
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

__attribute__((alias("__imp__sub_8288A008"))) PPC_WEAK_FUNC(sub_8288A008);
PPC_FUNC_IMPL(__imp__sub_8288A008) {
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
	// li r4,154
	ctx.r4.s64 = 154;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A028;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// li r4,149
	ctx.r4.s64 = 149;
	// beq 0x8288a04c
	if (ctx.cr0.eq) goto loc_8288A04C;
	// bl 0x829e9700
	ctx.lr = 0x8288A03C;
	sub_829E9700(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,8960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8960);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x8288a050
	goto loc_8288A050;
loc_8288A04C:
	// bl 0x829e9700
	ctx.lr = 0x8288A050;
	sub_829E9700(ctx, base);
loc_8288A050:
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

__attribute__((alias("__imp__sub_8288A064"))) PPC_WEAK_FUNC(sub_8288A064);
PPC_FUNC_IMPL(__imp__sub_8288A064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A068"))) PPC_WEAK_FUNC(sub_8288A068);
PPC_FUNC_IMPL(__imp__sub_8288A068) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x8288A08C;
	sub_829E9700(ctx, base);
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x829e9700
	ctx.lr = 0x8288A09C;
	sub_829E9700(ctx, base);
	// fdivs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288A0B8"))) PPC_WEAK_FUNC(sub_8288A0B8);
PPC_FUNC_IMPL(__imp__sub_8288A0B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x833a2768
	ctx.lr = 0x8288A0D4;
	sub_833A2768(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288A0E8"))) PPC_WEAK_FUNC(sub_8288A0E8);
PPC_FUNC_IMPL(__imp__sub_8288A0E8) {
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
	// li r4,106
	ctx.r4.s64 = 106;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A108;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288a150
	if (!ctx.cr0.eq) goto loc_8288A150;
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A11C;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288a150
	if (!ctx.cr0.eq) goto loc_8288A150;
	// li r4,105
	ctx.r4.s64 = 105;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A130;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288a150
	if (!ctx.cr0.eq) goto loc_8288A150;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A144;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8288a154
	if (ctx.cr0.eq) goto loc_8288A154;
loc_8288A150:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8288A154:
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

__attribute__((alias("__imp__sub_8288A168"))) PPC_WEAK_FUNC(sub_8288A168);
PPC_FUNC_IMPL(__imp__sub_8288A168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8288A170;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82875f78
	ctx.lr = 0x8288A180;
	sub_82875F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a24578
	ctx.lr = 0x8288A18C;
	sub_82A24578(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8288a1a0
	if (!ctx.cr6.eq) goto loc_8288A1A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8288A1A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d90
	ctx.lr = 0x8288A1A8;
	sub_82875D90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82971a70
	ctx.lr = 0x8288A1B8;
	sub_82971A70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875f78
	ctx.lr = 0x8288A1C4;
	sub_82875F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a245c8
	ctx.lr = 0x8288A1D0;
	sub_82A245C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82a21e68
	ctx.lr = 0x8288A1E4;
	sub_82A21E68(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x8288A1EC;
	sub_82E01548(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8288a1fc
	if (ctx.cr6.eq) goto loc_8288A1FC;
	// bl 0x82480108
	ctx.lr = 0x8288A1FC;
	sub_82480108(ctx, base);
loc_8288A1FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x8288A204;
	sub_82E01548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A20C"))) PPC_WEAK_FUNC(sub_8288A20C);
PPC_FUNC_IMPL(__imp__sub_8288A20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A210"))) PPC_WEAK_FUNC(sub_8288A210);
PPC_FUNC_IMPL(__imp__sub_8288A210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,1568(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,1424(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1424, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8288a224
	if (!ctx.cr6.lt) goto loc_8288A224;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_8288A224:
	// stfs f0,1568(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1568, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288A22C"))) PPC_WEAK_FUNC(sub_8288A22C);
PPC_FUNC_IMPL(__imp__sub_8288A22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A230"))) PPC_WEAK_FUNC(sub_8288A230);
PPC_FUNC_IMPL(__imp__sub_8288A230) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288a258
	if (!ctx.cr0.eq) goto loc_8288A258;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// bl 0x8287d540
	ctx.lr = 0x8288A258;
	sub_8287D540(ctx, base);
loc_8288A258:
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A264;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288a2d4
	if (!ctx.cr0.eq) goto loc_8288A2D4;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d540
	ctx.lr = 0x8288A278;
	sub_8287D540(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14192);
	// bl 0x82e02670
	ctx.lr = 0x8288A288;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828763c0
	ctx.lr = 0x8288A298;
	sub_828763C0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8288a2a8
	if (ctx.cr6.eq) goto loc_8288A2A8;
	// bl 0x82480108
	ctx.lr = 0x8288A2A8;
	sub_82480108(ctx, base);
loc_8288A2A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A2B0;
	sub_82E01BF0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-21060(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21060);
	// bl 0x82e02670
	ctx.lr = 0x8288A2C0;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d18
	ctx.lr = 0x8288A2CC;
	sub_82875D18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A2D4;
	sub_82E01BF0(ctx, base);
loc_8288A2D4:
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

__attribute__((alias("__imp__sub_8288A2E8"))) PPC_WEAK_FUNC(sub_8288A2E8);
PPC_FUNC_IMPL(__imp__sub_8288A2E8) {
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
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A308;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a328
	if (ctx.cr0.eq) goto loc_8288A328;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d550
	ctx.lr = 0x8288A31C;
	sub_8287D550(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1432, temp.u32);
loc_8288A328:
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

__attribute__((alias("__imp__sub_8288A33C"))) PPC_WEAK_FUNC(sub_8288A33C);
PPC_FUNC_IMPL(__imp__sub_8288A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A340"))) PPC_WEAK_FUNC(sub_8288A340);
PPC_FUNC_IMPL(__imp__sub_8288A340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8288A348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,2064(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2064);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8288a3cc
	if (ctx.cr0.eq) goto loc_8288A3CC;
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,2064(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2064);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8288a3cc
	if (ctx.cr0.eq) goto loc_8288A3CC;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r31,-31844
	ctx.r31.s64 = -2086928384;
	// lwz r11,17404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8288a3a4
	if (!ctx.cr0.eq) goto loc_8288A3A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r11,17404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17404, ctx.r11.u32);
	// lfd f1,15208(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + 15208);
	// bl 0x833a03a0
	ctx.lr = 0x8288A39C;
	sub_833A03A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,17400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 17400, temp.u32);
loc_8288A3A4:
	// addi r4,r30,2080
	ctx.r4.s64 = ctx.r30.s64 + 2080;
	// addi r3,r29,2080
	ctx.r3.s64 = ctx.r29.s64 + 2080;
	// bl 0x82ee85d8
	ctx.lr = 0x8288A3B0;
	sub_82EE85D8(ctx, base);
	// lfs f0,17400(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 17400);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8288a3c4
	if (!ctx.cr6.lt) goto loc_8288A3C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8288a3e4
	goto loc_8288A3E4;
loc_8288A3C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8288a3e4
	goto loc_8288A3E4;
loc_8288A3CC:
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,2064(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2064);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8288A3E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A3EC"))) PPC_WEAK_FUNC(sub_8288A3EC);
PPC_FUNC_IMPL(__imp__sub_8288A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A3F0"))) PPC_WEAK_FUNC(sub_8288A3F0);
PPC_FUNC_IMPL(__imp__sub_8288A3F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,2016
	ctx.r11.s64 = 2016;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288A400"))) PPC_WEAK_FUNC(sub_8288A400);
PPC_FUNC_IMPL(__imp__sub_8288A400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8288A408;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8287d528
	ctx.lr = 0x8288A428;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a438
	if (ctx.cr0.eq) goto loc_8288A438;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8288a4a0
	goto loc_8288A4A0;
loc_8288A438:
	// lbz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1088);
	// li r4,178
	ctx.r4.s64 = 178;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8288a46c
	if (ctx.cr0.eq) goto loc_8288A46C;
	// bl 0x829e9700
	ctx.lr = 0x8288A450;
	sub_829E9700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,21472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21472);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,2800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8288a47c
	goto loc_8288A47C;
loc_8288A46C:
	// bl 0x829e9700
	ctx.lr = 0x8288A470;
	sub_829E9700(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8288A47C:
	// bl 0x833a03a0
	ctx.lr = 0x8288A480;
	sub_833A03A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x82ee85d8
	ctx.lr = 0x8288A490;
	sub_82EE85D8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x8288a4a0
	if (!ctx.cr6.lt) goto loc_8288A4A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8288A4A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A4AC"))) PPC_WEAK_FUNC(sub_8288A4AC);
PPC_FUNC_IMPL(__imp__sub_8288A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A4B0"))) PPC_WEAK_FUNC(sub_8288A4B0);
PPC_FUNC_IMPL(__imp__sub_8288A4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8288A4B8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,183
	ctx.r4.s64 = 183;
	// bne 0x8288a4e0
	if (!ctx.cr0.eq) goto loc_8288A4E0;
	// li r4,184
	ctx.r4.s64 = 184;
loc_8288A4E0:
	// bl 0x829e9700
	ctx.lr = 0x8288A4E4;
	sub_829E9700(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,113
	ctx.r4.s64 = 113;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// lfs f0,2800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x8287d528
	ctx.lr = 0x8288A4FC;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a510
	if (ctx.cr0.eq) goto loc_8288A510;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,8960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8960);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_8288A510:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x833a03a0
	ctx.lr = 0x8288A518;
	sub_833A03A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ee85d8
	ctx.lr = 0x8288A528;
	sub_82EE85D8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x8288a538
	if (!ctx.cr6.lt) goto loc_8288A538;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8288A538:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A544"))) PPC_WEAK_FUNC(sub_8288A544);
PPC_FUNC_IMPL(__imp__sub_8288A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A548"))) PPC_WEAK_FUNC(sub_8288A548);
PPC_FUNC_IMPL(__imp__sub_8288A548) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20960);
	// bl 0x82e02670
	ctx.lr = 0x8288A56C;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x8288A578;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A580;
	sub_82E01BF0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20976(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	// bl 0x82e02670
	ctx.lr = 0x8288A590;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x8288A59C;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A5A4;
	sub_82E01BF0(ctx, base);
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A5B0;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a5c4
	if (ctx.cr0.eq) goto loc_8288A5C4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82876980
	ctx.lr = 0x8288A5C4;
	sub_82876980(ctx, base);
loc_8288A5C4:
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-21008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21008);
	// bl 0x82e02670
	ctx.lr = 0x8288A5D4;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x8288A5E0;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A5E8;
	sub_82E01BF0(ctx, base);
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A5F4;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a608
	if (ctx.cr0.eq) goto loc_8288A608;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82876980
	ctx.lr = 0x8288A608;
	sub_82876980(ctx, base);
loc_8288A608:
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-21004(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21004);
	// bl 0x82e02670
	ctx.lr = 0x8288A618;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x8288A624;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A62C;
	sub_82E01BF0(ctx, base);
	// li r4,105
	ctx.r4.s64 = 105;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A638;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a64c
	if (ctx.cr0.eq) goto loc_8288A64C;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82876980
	ctx.lr = 0x8288A64C;
	sub_82876980(ctx, base);
loc_8288A64C:
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-21000(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21000);
	// bl 0x82e02670
	ctx.lr = 0x8288A65C;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x8288A668;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A670;
	sub_82E01BF0(ctx, base);
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A67C;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a690
	if (ctx.cr0.eq) goto loc_8288A690;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82876980
	ctx.lr = 0x8288A690;
	sub_82876980(ctx, base);
loc_8288A690:
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20996);
	// bl 0x82e02670
	ctx.lr = 0x8288A6A0;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x8288A6AC;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A6B4;
	sub_82E01BF0(ctx, base);
	// li r4,107
	ctx.r4.s64 = 107;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A6C0;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a6d4
	if (ctx.cr0.eq) goto loc_8288A6D4;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82876980
	ctx.lr = 0x8288A6D4;
	sub_82876980(ctx, base);
loc_8288A6D4:
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20992);
	// bl 0x82e02670
	ctx.lr = 0x8288A6E4;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x8288A6F0;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A6F8;
	sub_82E01BF0(ctx, base);
	// li r4,110
	ctx.r4.s64 = 110;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288A704;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288a718
	if (ctx.cr0.eq) goto loc_8288A718;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82876980
	ctx.lr = 0x8288A718;
	sub_82876980(ctx, base);
loc_8288A718:
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20972);
	// bl 0x82e02670
	ctx.lr = 0x8288A728;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d10
	ctx.lr = 0x8288A734;
	sub_82875D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A73C;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_8288A750"))) PPC_WEAK_FUNC(sub_8288A750);
PPC_FUNC_IMPL(__imp__sub_8288A750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4640);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8288a76c
	if (!ctx.cr6.eq) goto loc_8288A76C;
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_8288A76C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288A774"))) PPC_WEAK_FUNC(sub_8288A774);
PPC_FUNC_IMPL(__imp__sub_8288A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A778"))) PPC_WEAK_FUNC(sub_8288A778);
PPC_FUNC_IMPL(__imp__sub_8288A778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x8288A780;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,1588(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1588);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8288A7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee9318
	ctx.lr = 0x8288A7B8;
	sub_82EE9318(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9fa18
	ctx.lr = 0x8288A7C8;
	sub_82E9FA18(ctx, base);
	// lis r28,-31887
	ctx.r28.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14188(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14188);
	// bl 0x82e02670
	ctx.lr = 0x8288A7D8;
	sub_82E02670(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d78
	ctx.lr = 0x8288A7E4;
	sub_82875D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A7EC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14188(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14188);
	// bl 0x82e02670
	ctx.lr = 0x8288A7F8;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828763c0
	ctx.lr = 0x8288A808;
	sub_828763C0(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,24504
	ctx.r6.s64 = ctx.r11.s64 + 24504;
	// addi r5,r10,20096
	ctx.r5.s64 = ctx.r10.s64 + 20096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a11a0
	ctx.lr = 0x8288A828;
	sub_833A11A0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8288a840
	if (ctx.cr6.eq) goto loc_8288A840;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x8288A840;
	sub_82480108(ctx, base);
loc_8288A840:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A848;
	sub_82E01BF0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82900248
	ctx.lr = 0x8288A860;
	sub_82900248(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A86C"))) PPC_WEAK_FUNC(sub_8288A86C);
PPC_FUNC_IMPL(__imp__sub_8288A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A870"))) PPC_WEAK_FUNC(sub_8288A870);
PPC_FUNC_IMPL(__imp__sub_8288A870) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1336);
	// b 0x8287d528
	sub_8287D528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A878"))) PPC_WEAK_FUNC(sub_8288A878);
PPC_FUNC_IMPL(__imp__sub_8288A878) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1336);
	// b 0x8287d540
	sub_8287D540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A880"))) PPC_WEAK_FUNC(sub_8288A880);
PPC_FUNC_IMPL(__imp__sub_8288A880) {
	PPC_FUNC_PROLOGUE();
	// li r11,304
	ctx.r11.s64 = 304;
	// lvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288A890"))) PPC_WEAK_FUNC(sub_8288A890);
PPC_FUNC_IMPL(__imp__sub_8288A890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwa r11,3544(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 3544));
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,24284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f13,f13,f2,f1
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f2.f64 - ctx.f1.f64)));
	// fsel f1,f13,f13,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288A8B8"))) PPC_WEAK_FUNC(sub_8288A8B8);
PPC_FUNC_IMPL(__imp__sub_8288A8B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1336);
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8287d540
	sub_8287D540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A8C4"))) PPC_WEAK_FUNC(sub_8288A8C4);
PPC_FUNC_IMPL(__imp__sub_8288A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A8C8"))) PPC_WEAK_FUNC(sub_8288A8C8);
PPC_FUNC_IMPL(__imp__sub_8288A8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8288A8D0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31887
	ctx.r29.s64 = -2089746432;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,-14176(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14176);
	// bl 0x82e02670
	ctx.lr = 0x8288A8F4;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d78
	ctx.lr = 0x8288A900;
	sub_82875D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A908;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14176(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14176);
	// bl 0x82e02670
	ctx.lr = 0x8288A914;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828763c0
	ctx.lr = 0x8288A924;
	sub_828763C0(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,24684
	ctx.r6.s64 = ctx.r11.s64 + 24684;
	// addi r5,r10,20096
	ctx.r5.s64 = ctx.r10.s64 + 20096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a11a0
	ctx.lr = 0x8288A944;
	sub_833A11A0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8288a95c
	if (ctx.cr6.eq) goto loc_8288A95C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x8288A95C;
	sub_82480108(ctx, base);
loc_8288A95C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A964;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828fce78
	ctx.lr = 0x8288A974;
	sub_828FCE78(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-13448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13448);
	// bl 0x82e02670
	ctx.lr = 0x8288A984;
	sub_82E02670(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82875d58
	ctx.lr = 0x8288A99C;
	sub_82875D58(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// addi r5,r11,24640
	ctx.r5.s64 = ctx.r11.s64 + 24640;
	// addi r6,r10,24576
	ctx.r6.s64 = ctx.r10.s64 + 24576;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x833a11a0
	ctx.lr = 0x8288A9B8;
	sub_833A11A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288A9C4;
	sub_82E01BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6ca8
	ctx.lr = 0x8288A9D0;
	sub_828F6CA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288A9DC"))) PPC_WEAK_FUNC(sub_8288A9DC);
PPC_FUNC_IMPL(__imp__sub_8288A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288A9E0"))) PPC_WEAK_FUNC(sub_8288A9E0);
PPC_FUNC_IMPL(__imp__sub_8288A9E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r3,976
	ctx.r11.s64 = ctx.r3.s64 + 976;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// stb r10,976(r3)
	PPC_STORE_U8(ctx.r3.u32 + 976, ctx.r10.u8);
	// lvx128 v63,r4,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,80
	ctx.r10.s64 = 80;
	// lvx128 v63,r4,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,1072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1072, ctx.r11.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,1076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288AA3C"))) PPC_WEAK_FUNC(sub_8288AA3C);
PPC_FUNC_IMPL(__imp__sub_8288AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AA40"))) PPC_WEAK_FUNC(sub_8288AA40);
PPC_FUNC_IMPL(__imp__sub_8288AA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// li r4,143
	ctx.r4.s64 = 143;
	// b 0x8287d528
	sub_8287D528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AA4C"))) PPC_WEAK_FUNC(sub_8288AA4C);
PPC_FUNC_IMPL(__imp__sub_8288AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AA50"))) PPC_WEAK_FUNC(sub_8288AA50);
PPC_FUNC_IMPL(__imp__sub_8288AA50) {
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
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14160);
	// bl 0x82e02670
	ctx.lr = 0x8288AA74;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828775c0
	ctx.lr = 0x8288AA84;
	sub_828775C0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8288aa94
	if (ctx.cr6.eq) goto loc_8288AA94;
	// bl 0x82480108
	ctx.lr = 0x8288AA94;
	sub_82480108(ctx, base);
loc_8288AA94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288AA9C;
	sub_82E01BF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8288AAB0;
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

__attribute__((alias("__imp__sub_8288AAC4"))) PPC_WEAK_FUNC(sub_8288AAC4);
PPC_FUNC_IMPL(__imp__sub_8288AAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AAC8"))) PPC_WEAK_FUNC(sub_8288AAC8);
PPC_FUNC_IMPL(__imp__sub_8288AAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// li r4,259
	ctx.r4.s64 = 259;
	// b 0x829e9700
	sub_829E9700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AAD4"))) PPC_WEAK_FUNC(sub_8288AAD4);
PPC_FUNC_IMPL(__imp__sub_8288AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AAD8"))) PPC_WEAK_FUNC(sub_8288AAD8);
PPC_FUNC_IMPL(__imp__sub_8288AAD8) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82875e38
	ctx.lr = 0x8288AAEC;
	sub_82875E38(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,259
	ctx.r4.s64 = 259;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d98
	ctx.lr = 0x8288AAFC;
	sub_829E9D98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288AB0C"))) PPC_WEAK_FUNC(sub_8288AB0C);
PPC_FUNC_IMPL(__imp__sub_8288AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AB10"))) PPC_WEAK_FUNC(sub_8288AB10);
PPC_FUNC_IMPL(__imp__sub_8288AB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// li r4,258
	ctx.r4.s64 = 258;
	// b 0x829e9700
	sub_829E9700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AB1C"))) PPC_WEAK_FUNC(sub_8288AB1C);
PPC_FUNC_IMPL(__imp__sub_8288AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AB20"))) PPC_WEAK_FUNC(sub_8288AB20);
PPC_FUNC_IMPL(__imp__sub_8288AB20) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82875e38
	ctx.lr = 0x8288AB34;
	sub_82875E38(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,258
	ctx.r4.s64 = 258;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d98
	ctx.lr = 0x8288AB44;
	sub_829E9D98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288AB54"))) PPC_WEAK_FUNC(sub_8288AB54);
PPC_FUNC_IMPL(__imp__sub_8288AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AB58"))) PPC_WEAK_FUNC(sub_8288AB58);
PPC_FUNC_IMPL(__imp__sub_8288AB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// li r4,378
	ctx.r4.s64 = 378;
	// b 0x829e9700
	sub_829E9700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AB64"))) PPC_WEAK_FUNC(sub_8288AB64);
PPC_FUNC_IMPL(__imp__sub_8288AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AB68"))) PPC_WEAK_FUNC(sub_8288AB68);
PPC_FUNC_IMPL(__imp__sub_8288AB68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// li r4,265
	ctx.r4.s64 = 265;
	// b 0x829e9700
	sub_829E9700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AB74"))) PPC_WEAK_FUNC(sub_8288AB74);
PPC_FUNC_IMPL(__imp__sub_8288AB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AB78"))) PPC_WEAK_FUNC(sub_8288AB78);
PPC_FUNC_IMPL(__imp__sub_8288AB78) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82875e38
	ctx.lr = 0x8288AB8C;
	sub_82875E38(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,77
	ctx.r4.s64 = 77;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d98
	ctx.lr = 0x8288AB9C;
	sub_829E9D98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288ABAC"))) PPC_WEAK_FUNC(sub_8288ABAC);
PPC_FUNC_IMPL(__imp__sub_8288ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288ABB0"))) PPC_WEAK_FUNC(sub_8288ABB0);
PPC_FUNC_IMPL(__imp__sub_8288ABB0) {
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
	// bl 0x82875e38
	ctx.lr = 0x8288ABC0;
	sub_82875E38(ctx, base);
	// li r4,77
	ctx.r4.s64 = 77;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d68
	ctx.lr = 0x8288ABCC;
	sub_829E9D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8288ABDC"))) PPC_WEAK_FUNC(sub_8288ABDC);
PPC_FUNC_IMPL(__imp__sub_8288ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288ABE0"))) PPC_WEAK_FUNC(sub_8288ABE0);
PPC_FUNC_IMPL(__imp__sub_8288ABE0) {
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
	// bl 0x828779c8
	ctx.lr = 0x8288ABFC;
	sub_828779C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8288AC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x8288AC20;
	sub_82E9FA18(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8288ac30
	if (ctx.cr6.eq) goto loc_8288AC30;
	// bl 0x82480108
	ctx.lr = 0x8288AC30;
	sub_82480108(ctx, base);
loc_8288AC30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8288AC48"))) PPC_WEAK_FUNC(sub_8288AC48);
PPC_FUNC_IMPL(__imp__sub_8288AC48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// li r4,131
	ctx.r4.s64 = 131;
	// b 0x8287d540
	sub_8287D540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AC54"))) PPC_WEAK_FUNC(sub_8288AC54);
PPC_FUNC_IMPL(__imp__sub_8288AC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AC58"))) PPC_WEAK_FUNC(sub_8288AC58);
PPC_FUNC_IMPL(__imp__sub_8288AC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// li r4,131
	ctx.r4.s64 = 131;
	// b 0x8287d550
	sub_8287D550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AC64"))) PPC_WEAK_FUNC(sub_8288AC64);
PPC_FUNC_IMPL(__imp__sub_8288AC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AC68"))) PPC_WEAK_FUNC(sub_8288AC68);
PPC_FUNC_IMPL(__imp__sub_8288AC68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// li r4,131
	ctx.r4.s64 = 131;
	// b 0x8287d528
	sub_8287D528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AC74"))) PPC_WEAK_FUNC(sub_8288AC74);
PPC_FUNC_IMPL(__imp__sub_8288AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AC78"))) PPC_WEAK_FUNC(sub_8288AC78);
PPC_FUNC_IMPL(__imp__sub_8288AC78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,4492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4492, ctx.r4.u32);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8288acac
	if (ctx.cr6.eq) goto loc_8288ACAC;
	// bl 0x82875e38
	ctx.lr = 0x8288AC9C;
	sub_82875E38(ctx, base);
	// li r4,324
	ctx.r4.s64 = 324;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d68
	ctx.lr = 0x8288ACA8;
	sub_829E9D68(ctx, base);
	// b 0x8288ace0
	goto loc_8288ACE0;
loc_8288ACAC:
	// li r4,193
	ctx.r4.s64 = 193;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x829e9700
	ctx.lr = 0x8288ACB8;
	sub_829E9700(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,8960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8960);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82875e38
	ctx.lr = 0x8288ACD0;
	sub_82875E38(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,324
	ctx.r4.s64 = 324;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d98
	ctx.lr = 0x8288ACE0;
	sub_829E9D98(ctx, base);
loc_8288ACE0:
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

__attribute__((alias("__imp__sub_8288ACF4"))) PPC_WEAK_FUNC(sub_8288ACF4);
PPC_FUNC_IMPL(__imp__sub_8288ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288ACF8"))) PPC_WEAK_FUNC(sub_8288ACF8);
PPC_FUNC_IMPL(__imp__sub_8288ACF8) {
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
	// li r4,131
	ctx.r4.s64 = 131;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288AD18;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288ad50
	if (!ctx.cr0.eq) goto loc_8288AD50;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288AD2C;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne 0x8288ad4c
	if (!ctx.cr0.eq) goto loc_8288AD4C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8288AD4C:
	// bctrl 
	ctx.lr = 0x8288AD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8288AD50:
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

__attribute__((alias("__imp__sub_8288AD64"))) PPC_WEAK_FUNC(sub_8288AD64);
PPC_FUNC_IMPL(__imp__sub_8288AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AD68"))) PPC_WEAK_FUNC(sub_8288AD68);
PPC_FUNC_IMPL(__imp__sub_8288AD68) {
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
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8288ae24
	if (ctx.cr6.eq) goto loc_8288AE24;
	// lis r30,-31887
	ctx.r30.s64 = -2089746432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14164);
	// bl 0x82e02670
	ctx.lr = 0x8288ADA8;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875d78
	ctx.lr = 0x8288ADB4;
	sub_82875D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288ADBC;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14164);
	// bl 0x82e02670
	ctx.lr = 0x8288ADC8;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828763c0
	ctx.lr = 0x8288ADD8;
	sub_828763C0(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,24824
	ctx.r6.s64 = ctx.r11.s64 + 24824;
	// addi r5,r10,20096
	ctx.r5.s64 = ctx.r10.s64 + 20096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a11a0
	ctx.lr = 0x8288ADF8;
	sub_833A11A0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8288ae10
	if (ctx.cr6.eq) goto loc_8288AE10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x8288AE10;
	sub_82480108(ctx, base);
loc_8288AE10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288AE18;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828e01c0
	ctx.lr = 0x8288AE24;
	sub_828E01C0(ctx, base);
loc_8288AE24:
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

__attribute__((alias("__imp__sub_8288AE40"))) PPC_WEAK_FUNC(sub_8288AE40);
PPC_FUNC_IMPL(__imp__sub_8288AE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x8288AE48;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31887
	ctx.r29.s64 = -2089746432;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,-14164(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14164);
	// bl 0x82e02670
	ctx.lr = 0x8288AE6C;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82875d78
	ctx.lr = 0x8288AE78;
	sub_82875D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288AE80;
	sub_82E01BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-14164(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14164);
	// bl 0x82e02670
	ctx.lr = 0x8288AE8C;
	sub_82E02670(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828763c0
	ctx.lr = 0x8288AE9C;
	sub_828763C0(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,24824
	ctx.r6.s64 = ctx.r11.s64 + 24824;
	// addi r5,r10,20096
	ctx.r5.s64 = ctx.r10.s64 + 20096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833a11a0
	ctx.lr = 0x8288AEBC;
	sub_833A11A0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8288aed4
	if (ctx.cr6.eq) goto loc_8288AED4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x8288AED4;
	sub_82480108(ctx, base);
loc_8288AED4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x8288AEDC;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828e01c0
	ctx.lr = 0x8288AEE8;
	sub_828E01C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fd080
	ctx.lr = 0x8288AEF4;
	sub_828FD080(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8288AF00"))) PPC_WEAK_FUNC(sub_8288AF00);
PPC_FUNC_IMPL(__imp__sub_8288AF00) {
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
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8288AF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8288af34
	if (ctx.cr0.eq) goto loc_8288AF34;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8288af40
	goto loc_8288AF40;
loc_8288AF34:
	// li r4,117
	ctx.r4.s64 = 117;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288AF40;
	sub_8287D528(ctx, base);
loc_8288AF40:
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

__attribute__((alias("__imp__sub_8288AF54"))) PPC_WEAK_FUNC(sub_8288AF54);
PPC_FUNC_IMPL(__imp__sub_8288AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288AF58"))) PPC_WEAK_FUNC(sub_8288AF58);
PPC_FUNC_IMPL(__imp__sub_8288AF58) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82877c40
	ctx.lr = 0x8288AF74;
	sub_82877C40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288af84
	if (!ctx.cr0.eq) goto loc_8288AF84;
loc_8288AF7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8288aff4
	goto loc_8288AFF4;
loc_8288AF84:
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288AF90;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288af7c
	if (!ctx.cr0.eq) goto loc_8288AF7C;
	// li r4,63
	ctx.r4.s64 = 63;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288AFA4;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288af7c
	if (!ctx.cr0.eq) goto loc_8288AF7C;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288AFB8;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288af7c
	if (!ctx.cr0.eq) goto loc_8288AF7C;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d528
	ctx.lr = 0x8288AFCC;
	sub_8287D528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8288af7c
	if (!ctx.cr0.eq) goto loc_8288AF7C;
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8288afe8
	if (!ctx.cr6.gt) goto loc_8288AFE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8288aff4
	goto loc_8288AFF4;
loc_8288AFE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x8288aff4
	if (ctx.cr6.lt) goto loc_8288AFF4;
	// lbz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2056);
loc_8288AFF4:
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

__attribute__((alias("__imp__sub_8288B008"))) PPC_WEAK_FUNC(sub_8288B008);
PPC_FUNC_IMPL(__imp__sub_8288B008) {
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
	// addi r4,r3,1632
	ctx.r4.s64 = ctx.r3.s64 + 1632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82889f18
	ctx.lr = 0x8288B024;
	sub_82889F18(ctx, base);
	// li r4,43
	ctx.r4.s64 = 43;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x8287d550
	ctx.lr = 0x8288B030;
	sub_8287D550(ctx, base);
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

__attribute__((alias("__imp__sub_8288B044"))) PPC_WEAK_FUNC(sub_8288B044);
PPC_FUNC_IMPL(__imp__sub_8288B044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8288B048"))) PPC_WEAK_FUNC(sub_8288B048);
PPC_FUNC_IMPL(__imp__sub_8288B048) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82875e38
	ctx.lr = 0x8288B064;
	sub_82875E38(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,174
	ctx.r4.s64 = 174;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d98
	ctx.lr = 0x8288B074;
	sub_829E9D98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875e38
	ctx.lr = 0x8288B07C;
	sub_82875E38(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,175
	ctx.r4.s64 = 175;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d98
	ctx.lr = 0x8288B08C;
	sub_829E9D98(ctx, base);
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

__attribute__((alias("__imp__sub_8288B0A0"))) PPC_WEAK_FUNC(sub_8288B0A0);
PPC_FUNC_IMPL(__imp__sub_8288B0A0) {
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
	// bl 0x82875e38
	ctx.lr = 0x8288B0B8;
	sub_82875E38(ctx, base);
	// li r4,174
	ctx.r4.s64 = 174;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d68
	ctx.lr = 0x8288B0C4;
	sub_829E9D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82875e38
	ctx.lr = 0x8288B0CC;
	sub_82875E38(ctx, base);
	// li r4,175
	ctx.r4.s64 = 175;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x829e9d68
	ctx.lr = 0x8288B0D8;
	sub_829E9D68(ctx, base);
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

__attribute__((alias("__imp__sub_8288B0EC"))) PPC_WEAK_FUNC(sub_8288B0EC);
PPC_FUNC_IMPL(__imp__sub_8288B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

