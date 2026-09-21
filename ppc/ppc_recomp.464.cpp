#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833EC428"))) PPC_WEAK_FUNC(sub_833EC428);
PPC_FUNC_IMPL(__imp__sub_833EC428) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16396
	ctx.r4.s64 = ctx.r11.s64 + 16396;
	// bl 0x82e02670
	ctx.lr = 0x833EC444;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC448;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC450;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4560, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC464;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC474"))) PPC_WEAK_FUNC(sub_833EC474);
PPC_FUNC_IMPL(__imp__sub_833EC474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC478"))) PPC_WEAK_FUNC(sub_833EC478);
PPC_FUNC_IMPL(__imp__sub_833EC478) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16408
	ctx.r4.s64 = ctx.r11.s64 + 16408;
	// bl 0x82e02670
	ctx.lr = 0x833EC494;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC498;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC4A0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4556, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC4B4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC4C4"))) PPC_WEAK_FUNC(sub_833EC4C4);
PPC_FUNC_IMPL(__imp__sub_833EC4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC4C8"))) PPC_WEAK_FUNC(sub_833EC4C8);
PPC_FUNC_IMPL(__imp__sub_833EC4C8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// bl 0x82e02670
	ctx.lr = 0x833EC4E4;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC4E8;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC4F0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4552, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC504;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC514"))) PPC_WEAK_FUNC(sub_833EC514);
PPC_FUNC_IMPL(__imp__sub_833EC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC518"))) PPC_WEAK_FUNC(sub_833EC518);
PPC_FUNC_IMPL(__imp__sub_833EC518) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16432
	ctx.r4.s64 = ctx.r11.s64 + 16432;
	// bl 0x82e02670
	ctx.lr = 0x833EC534;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC538;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC540;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4548, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC554;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC564"))) PPC_WEAK_FUNC(sub_833EC564);
PPC_FUNC_IMPL(__imp__sub_833EC564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC568"))) PPC_WEAK_FUNC(sub_833EC568);
PPC_FUNC_IMPL(__imp__sub_833EC568) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16448
	ctx.r4.s64 = ctx.r11.s64 + 16448;
	// bl 0x82e02670
	ctx.lr = 0x833EC584;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC588;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC590;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4544, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC5A4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC5B4"))) PPC_WEAK_FUNC(sub_833EC5B4);
PPC_FUNC_IMPL(__imp__sub_833EC5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC5B8"))) PPC_WEAK_FUNC(sub_833EC5B8);
PPC_FUNC_IMPL(__imp__sub_833EC5B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16456
	ctx.r4.s64 = ctx.r11.s64 + 16456;
	// bl 0x82e02670
	ctx.lr = 0x833EC5D4;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC5D8;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC5E0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4540, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC5F4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC604"))) PPC_WEAK_FUNC(sub_833EC604);
PPC_FUNC_IMPL(__imp__sub_833EC604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC608"))) PPC_WEAK_FUNC(sub_833EC608);
PPC_FUNC_IMPL(__imp__sub_833EC608) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16472
	ctx.r4.s64 = ctx.r11.s64 + 16472;
	// bl 0x82e02670
	ctx.lr = 0x833EC624;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC628;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC630;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4536, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC644;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC654"))) PPC_WEAK_FUNC(sub_833EC654);
PPC_FUNC_IMPL(__imp__sub_833EC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC658"))) PPC_WEAK_FUNC(sub_833EC658);
PPC_FUNC_IMPL(__imp__sub_833EC658) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16484
	ctx.r4.s64 = ctx.r11.s64 + 16484;
	// bl 0x82e02670
	ctx.lr = 0x833EC674;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC678;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC680;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4532, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC694;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC6A4"))) PPC_WEAK_FUNC(sub_833EC6A4);
PPC_FUNC_IMPL(__imp__sub_833EC6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC6A8"))) PPC_WEAK_FUNC(sub_833EC6A8);
PPC_FUNC_IMPL(__imp__sub_833EC6A8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x82e02670
	ctx.lr = 0x833EC6C4;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC6C8;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC6D0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4528(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4528, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC6E4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC6F4"))) PPC_WEAK_FUNC(sub_833EC6F4);
PPC_FUNC_IMPL(__imp__sub_833EC6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC6F8"))) PPC_WEAK_FUNC(sub_833EC6F8);
PPC_FUNC_IMPL(__imp__sub_833EC6F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16520
	ctx.r4.s64 = ctx.r11.s64 + 16520;
	// bl 0x82e02670
	ctx.lr = 0x833EC714;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC718;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC720;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4524, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC734;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC744"))) PPC_WEAK_FUNC(sub_833EC744);
PPC_FUNC_IMPL(__imp__sub_833EC744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC748"))) PPC_WEAK_FUNC(sub_833EC748);
PPC_FUNC_IMPL(__imp__sub_833EC748) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16532
	ctx.r4.s64 = ctx.r11.s64 + 16532;
	// bl 0x82e02670
	ctx.lr = 0x833EC764;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC768;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC770;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4520, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC784;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC794"))) PPC_WEAK_FUNC(sub_833EC794);
PPC_FUNC_IMPL(__imp__sub_833EC794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC798"))) PPC_WEAK_FUNC(sub_833EC798);
PPC_FUNC_IMPL(__imp__sub_833EC798) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16556
	ctx.r4.s64 = ctx.r11.s64 + 16556;
	// bl 0x82e02670
	ctx.lr = 0x833EC7B4;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC7B8;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC7C0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4516, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC7D4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC7E4"))) PPC_WEAK_FUNC(sub_833EC7E4);
PPC_FUNC_IMPL(__imp__sub_833EC7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC7E8"))) PPC_WEAK_FUNC(sub_833EC7E8);
PPC_FUNC_IMPL(__imp__sub_833EC7E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x82e02670
	ctx.lr = 0x833EC804;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC808;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC810;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4512, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC824;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC834"))) PPC_WEAK_FUNC(sub_833EC834);
PPC_FUNC_IMPL(__imp__sub_833EC834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC838"))) PPC_WEAK_FUNC(sub_833EC838);
PPC_FUNC_IMPL(__imp__sub_833EC838) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16588
	ctx.r4.s64 = ctx.r11.s64 + 16588;
	// bl 0x82e02670
	ctx.lr = 0x833EC854;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC858;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC860;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4508, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC874;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC884"))) PPC_WEAK_FUNC(sub_833EC884);
PPC_FUNC_IMPL(__imp__sub_833EC884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC888"))) PPC_WEAK_FUNC(sub_833EC888);
PPC_FUNC_IMPL(__imp__sub_833EC888) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16608
	ctx.r4.s64 = ctx.r11.s64 + 16608;
	// bl 0x82e02670
	ctx.lr = 0x833EC8A4;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC8A8;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC8B0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4504, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC8C4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC8D4"))) PPC_WEAK_FUNC(sub_833EC8D4);
PPC_FUNC_IMPL(__imp__sub_833EC8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC8D8"))) PPC_WEAK_FUNC(sub_833EC8D8);
PPC_FUNC_IMPL(__imp__sub_833EC8D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16624
	ctx.r4.s64 = ctx.r11.s64 + 16624;
	// bl 0x82e02670
	ctx.lr = 0x833EC8F4;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC8F8;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC900;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4500, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC914;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC924"))) PPC_WEAK_FUNC(sub_833EC924);
PPC_FUNC_IMPL(__imp__sub_833EC924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC928"))) PPC_WEAK_FUNC(sub_833EC928);
PPC_FUNC_IMPL(__imp__sub_833EC928) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16640
	ctx.r4.s64 = ctx.r11.s64 + 16640;
	// bl 0x82e02670
	ctx.lr = 0x833EC944;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC948;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC950;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4496, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC964;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC974"))) PPC_WEAK_FUNC(sub_833EC974);
PPC_FUNC_IMPL(__imp__sub_833EC974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC978"))) PPC_WEAK_FUNC(sub_833EC978);
PPC_FUNC_IMPL(__imp__sub_833EC978) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16660
	ctx.r4.s64 = ctx.r11.s64 + 16660;
	// bl 0x82e02670
	ctx.lr = 0x833EC994;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC998;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC9A0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4492, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833EC9B4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EC9C4"))) PPC_WEAK_FUNC(sub_833EC9C4);
PPC_FUNC_IMPL(__imp__sub_833EC9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EC9C8"))) PPC_WEAK_FUNC(sub_833EC9C8);
PPC_FUNC_IMPL(__imp__sub_833EC9C8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16680
	ctx.r4.s64 = ctx.r11.s64 + 16680;
	// bl 0x82e02670
	ctx.lr = 0x833EC9E4;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833EC9E8;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833EC9F0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4488, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833ECA04;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECA14"))) PPC_WEAK_FUNC(sub_833ECA14);
PPC_FUNC_IMPL(__imp__sub_833ECA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECA18"))) PPC_WEAK_FUNC(sub_833ECA18);
PPC_FUNC_IMPL(__imp__sub_833ECA18) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16696
	ctx.r4.s64 = ctx.r11.s64 + 16696;
	// bl 0x82e02670
	ctx.lr = 0x833ECA34;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833ECA38;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833ECA40;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4484, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833ECA54;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECA64"))) PPC_WEAK_FUNC(sub_833ECA64);
PPC_FUNC_IMPL(__imp__sub_833ECA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECA68"))) PPC_WEAK_FUNC(sub_833ECA68);
PPC_FUNC_IMPL(__imp__sub_833ECA68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16716
	ctx.r4.s64 = ctx.r11.s64 + 16716;
	// bl 0x82e02670
	ctx.lr = 0x833ECA84;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833ECA88;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833ECA90;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4480, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833ECAA4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECAB4"))) PPC_WEAK_FUNC(sub_833ECAB4);
PPC_FUNC_IMPL(__imp__sub_833ECAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECAB8"))) PPC_WEAK_FUNC(sub_833ECAB8);
PPC_FUNC_IMPL(__imp__sub_833ECAB8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16732
	ctx.r4.s64 = ctx.r11.s64 + 16732;
	// bl 0x82e02670
	ctx.lr = 0x833ECAD4;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833ECAD8;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833ECAE0;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4476, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833ECAF4;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECB04"))) PPC_WEAK_FUNC(sub_833ECB04);
PPC_FUNC_IMPL(__imp__sub_833ECB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECB08"))) PPC_WEAK_FUNC(sub_833ECB08);
PPC_FUNC_IMPL(__imp__sub_833ECB08) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16744
	ctx.r4.s64 = ctx.r11.s64 + 16744;
	// bl 0x82e02670
	ctx.lr = 0x833ECB24;
	sub_82E02670(ctx, base);
	// bl 0x824a70e8
	ctx.lr = 0x833ECB28;
	sub_824A70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824ae7f8
	ctx.lr = 0x833ECB30;
	sub_824AE7F8(ctx, base);
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-4472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4472, ctx.r11.u32);
	// bl 0x82e01bf0
	ctx.lr = 0x833ECB44;
	sub_82E01BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECB54"))) PPC_WEAK_FUNC(sub_833ECB54);
PPC_FUNC_IMPL(__imp__sub_833ECB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECB58"))) PPC_WEAK_FUNC(sub_833ECB58);
PPC_FUNC_IMPL(__imp__sub_833ECB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,17668
	ctx.r4.s64 = ctx.r11.s64 + 17668;
	// addi r3,r10,-4464
	ctx.r3.s64 = ctx.r10.s64 + -4464;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ECB6C"))) PPC_WEAK_FUNC(sub_833ECB6C);
PPC_FUNC_IMPL(__imp__sub_833ECB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECB70"))) PPC_WEAK_FUNC(sub_833ECB70);
PPC_FUNC_IMPL(__imp__sub_833ECB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,17672
	ctx.r4.s64 = ctx.r11.s64 + 17672;
	// addi r3,r10,-4460
	ctx.r3.s64 = ctx.r10.s64 + -4460;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ECB84"))) PPC_WEAK_FUNC(sub_833ECB84);
PPC_FUNC_IMPL(__imp__sub_833ECB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECB88"))) PPC_WEAK_FUNC(sub_833ECB88);
PPC_FUNC_IMPL(__imp__sub_833ECB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ECB94"))) PPC_WEAK_FUNC(sub_833ECB94);
PPC_FUNC_IMPL(__imp__sub_833ECB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECB98"))) PPC_WEAK_FUNC(sub_833ECB98);
PPC_FUNC_IMPL(__imp__sub_833ECB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-18608
	ctx.r3.s64 = ctx.r11.s64 + -18608;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ECBA4"))) PPC_WEAK_FUNC(sub_833ECBA4);
PPC_FUNC_IMPL(__imp__sub_833ECBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECBA8"))) PPC_WEAK_FUNC(sub_833ECBA8);
PPC_FUNC_IMPL(__imp__sub_833ECBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,18680
	ctx.r10.s64 = ctx.r10.s64 + 18680;
	// addi r9,r9,18676
	ctx.r9.s64 = ctx.r9.s64 + 18676;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-4208
	ctx.r11.s64 = ctx.r8.s64 + -4208;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v62,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vrlimi128 v63,v61,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 3));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECBF0"))) PPC_WEAK_FUNC(sub_833ECBF0);
PPC_FUNC_IMPL(__imp__sub_833ECBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,-4144
	ctx.r9.s64 = ctx.r9.s64 + -4144;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 3));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECC30"))) PPC_WEAK_FUNC(sub_833ECC30);
PPC_FUNC_IMPL(__imp__sub_833ECC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,-4128
	ctx.r9.s64 = ctx.r9.s64 + -4128;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 3));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECC70"))) PPC_WEAK_FUNC(sub_833ECC70);
PPC_FUNC_IMPL(__imp__sub_833ECC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ECC7C"))) PPC_WEAK_FUNC(sub_833ECC7C);
PPC_FUNC_IMPL(__imp__sub_833ECC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECC80"))) PPC_WEAK_FUNC(sub_833ECC80);
PPC_FUNC_IMPL(__imp__sub_833ECC80) {
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
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82eef230
	ctx.lr = 0x833ECCA0;
	sub_82EEF230(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// stw r3,-3872(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECCB8"))) PPC_WEAK_FUNC(sub_833ECCB8);
PPC_FUNC_IMPL(__imp__sub_833ECCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// lis r11,-31892
	ctx.r11.s64 = -2090074112;
	// addi r8,r11,-22040
	ctx.r8.s64 = ctx.r11.s64 + -22040;
	// lwz r11,21104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21104);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r8,21104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21104, ctx.r8.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECCD8"))) PPC_WEAK_FUNC(sub_833ECCD8);
PPC_FUNC_IMPL(__imp__sub_833ECCD8) {
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
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82eef230
	ctx.lr = 0x833ECCF8;
	sub_82EEF230(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// stw r3,-3852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECD10"))) PPC_WEAK_FUNC(sub_833ECD10);
PPC_FUNC_IMPL(__imp__sub_833ECD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,26420
	ctx.r11.s64 = ctx.r11.s64 + 26420;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,-3840
	ctx.r9.s64 = ctx.r9.s64 + -3840;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECD50"))) PPC_WEAK_FUNC(sub_833ECD50);
PPC_FUNC_IMPL(__imp__sub_833ECD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,26424
	ctx.r11.s64 = ctx.r11.s64 + 26424;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,-3824
	ctx.r9.s64 = ctx.r9.s64 + -3824;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECD90"))) PPC_WEAK_FUNC(sub_833ECD90);
PPC_FUNC_IMPL(__imp__sub_833ECD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,26428
	ctx.r11.s64 = ctx.r11.s64 + 26428;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r9,26420
	ctx.r9.s64 = ctx.r9.s64 + 26420;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r8,-3808
	ctx.r11.s64 = ctx.r8.s64 + -3808;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECDD8"))) PPC_WEAK_FUNC(sub_833ECDD8);
PPC_FUNC_IMPL(__imp__sub_833ECDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,26432
	ctx.r11.s64 = ctx.r11.s64 + 26432;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r9,26424
	ctx.r9.s64 = ctx.r9.s64 + 26424;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r8,-3792
	ctx.r11.s64 = ctx.r8.s64 + -3792;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECE20"))) PPC_WEAK_FUNC(sub_833ECE20);
PPC_FUNC_IMPL(__imp__sub_833ECE20) {
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
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82eef230
	ctx.lr = 0x833ECE40;
	sub_82EEF230(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// stw r3,-3776(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECE58"))) PPC_WEAK_FUNC(sub_833ECE58);
PPC_FUNC_IMPL(__imp__sub_833ECE58) {
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
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82eef230
	ctx.lr = 0x833ECE78;
	sub_82EEF230(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// stw r3,-3752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECE90"))) PPC_WEAK_FUNC(sub_833ECE90);
PPC_FUNC_IMPL(__imp__sub_833ECE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-3748
	ctx.r3.s64 = ctx.r11.s64 + -3748;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// b 0x82eda2e0
	sub_82EDA2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ECEA8"))) PPC_WEAK_FUNC(sub_833ECEA8);
PPC_FUNC_IMPL(__imp__sub_833ECEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// addi r10,r10,-3728
	ctx.r10.s64 = ctx.r10.s64 + -3728;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ECEC4"))) PPC_WEAK_FUNC(sub_833ECEC4);
PPC_FUNC_IMPL(__imp__sub_833ECEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ECEC8"))) PPC_WEAK_FUNC(sub_833ECEC8);
PPC_FUNC_IMPL(__imp__sub_833ECEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31892
	ctx.r11.s64 = -2090074112;
	// lis r10,-31892
	ctx.r10.s64 = -2090074112;
	// addi r9,r11,-19000
	ctx.r9.s64 = ctx.r11.s64 + -19000;
	// addi r8,r10,-18808
	ctx.r8.s64 = ctx.r10.s64 + -18808;
	// lwz r10,-19000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19000);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r10,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r10.u32);
	// stw r10,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r10.u32);
	// stw r10,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r10.u32);
	// stw r10,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r10.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// stw r10,160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 160, ctx.r10.u32);
	// stw r11,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r11.u32);
	// stw r11,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// stw r11,208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 208, ctx.r11.u32);
	// stw r11,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, ctx.r11.u32);
	// stw r11,240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 240, ctx.r11.u32);
	// stw r11,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r11.u32);
	// stw r11,272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 272, ctx.r11.u32);
	// stw r11,288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 288, ctx.r11.u32);
	// stw r11,304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 304, ctx.r11.u32);
	// stw r11,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r11.u32);
	// stw r11,336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 336, ctx.r11.u32);
	// stw r11,352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 352, ctx.r11.u32);
	// stw r11,368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 368, ctx.r11.u32);
	// stw r11,384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 384, ctx.r11.u32);
	// stw r11,400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 400, ctx.r11.u32);
	// stw r11,416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 416, ctx.r11.u32);
	// stw r11,432(r8)
	PPC_STORE_U32(ctx.r8.u32 + 432, ctx.r11.u32);
	// stw r11,448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 448, ctx.r11.u32);
	// stw r11,464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 464, ctx.r11.u32);
	// stw r11,480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 480, ctx.r11.u32);
	// stw r11,496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 496, ctx.r11.u32);
	// stw r11,512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 512, ctx.r11.u32);
	// stw r11,528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 528, ctx.r11.u32);
	// stw r11,544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 544, ctx.r11.u32);
	// stw r11,560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 560, ctx.r11.u32);
	// stw r11,576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 576, ctx.r11.u32);
	// stw r11,592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 592, ctx.r11.u32);
	// stw r11,608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 608, ctx.r11.u32);
	// stw r11,624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 624, ctx.r11.u32);
	// stw r11,640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 640, ctx.r11.u32);
	// stw r11,656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 656, ctx.r11.u32);
	// stw r11,672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 672, ctx.r11.u32);
	// stw r11,688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 688, ctx.r11.u32);
	// stw r11,704(r8)
	PPC_STORE_U32(ctx.r8.u32 + 704, ctx.r11.u32);
	// stw r11,720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 720, ctx.r11.u32);
	// stw r11,736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 736, ctx.r11.u32);
	// stw r11,752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 752, ctx.r11.u32);
	// stw r11,768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 768, ctx.r11.u32);
	// stw r11,784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 784, ctx.r11.u32);
	// stw r11,800(r8)
	PPC_STORE_U32(ctx.r8.u32 + 800, ctx.r11.u32);
	// stw r11,816(r8)
	PPC_STORE_U32(ctx.r8.u32 + 816, ctx.r11.u32);
	// stw r11,832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 832, ctx.r11.u32);
	// stw r11,848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 848, ctx.r11.u32);
	// stw r11,864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 864, ctx.r11.u32);
	// stw r11,880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 880, ctx.r11.u32);
	// stw r11,896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 896, ctx.r11.u32);
	// stw r11,912(r8)
	PPC_STORE_U32(ctx.r8.u32 + 912, ctx.r11.u32);
	// stw r11,928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 928, ctx.r11.u32);
	// stw r11,944(r8)
	PPC_STORE_U32(ctx.r8.u32 + 944, ctx.r11.u32);
	// stw r11,960(r8)
	PPC_STORE_U32(ctx.r8.u32 + 960, ctx.r11.u32);
	// stw r11,976(r8)
	PPC_STORE_U32(ctx.r8.u32 + 976, ctx.r11.u32);
	// stw r11,992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 992, ctx.r11.u32);
	// stw r11,1008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1008, ctx.r11.u32);
	// stw r11,1024(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1024, ctx.r11.u32);
	// stw r11,1040(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1040, ctx.r11.u32);
	// stw r11,1056(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1056, ctx.r11.u32);
	// stw r11,1072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1072, ctx.r11.u32);
	// stw r11,1088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1088, ctx.r11.u32);
	// stw r11,1104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1104, ctx.r11.u32);
	// stw r11,1120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1120, ctx.r11.u32);
	// stw r11,1136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1136, ctx.r11.u32);
	// stw r11,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r11.u32);
	// stw r11,1168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1168, ctx.r11.u32);
	// stw r11,1184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1184, ctx.r11.u32);
	// stw r11,1200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1200, ctx.r11.u32);
	// stw r11,1216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1216, ctx.r11.u32);
	// stw r11,1232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1232, ctx.r11.u32);
	// stw r11,1248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1248, ctx.r11.u32);
	// stw r11,1264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1264, ctx.r11.u32);
	// stw r11,1280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1280, ctx.r11.u32);
	// stw r11,1296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1296, ctx.r11.u32);
	// stw r11,1312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1312, ctx.r11.u32);
	// stw r11,1328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1328, ctx.r11.u32);
	// stw r11,1344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1344, ctx.r11.u32);
	// stw r11,1360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1360, ctx.r11.u32);
	// stw r11,1376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1376, ctx.r11.u32);
	// stw r11,1392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1392, ctx.r11.u32);
	// stw r11,1408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1408, ctx.r11.u32);
	// stw r11,1424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1424, ctx.r11.u32);
	// stw r11,1440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1440, ctx.r11.u32);
	// stw r11,1456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1456, ctx.r11.u32);
	// stw r11,1472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1472, ctx.r11.u32);
	// stw r11,1488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1488, ctx.r11.u32);
	// stw r11,1504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1504, ctx.r11.u32);
	// stw r11,1520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1520, ctx.r11.u32);
	// stw r11,1536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1536, ctx.r11.u32);
	// stw r11,1552(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1552, ctx.r11.u32);
	// stw r11,1568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1568, ctx.r11.u32);
	// stw r11,1584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1584, ctx.r11.u32);
	// stw r11,1600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1600, ctx.r11.u32);
	// stw r11,1616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1616, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,1632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1632, ctx.r10.u32);
	// stw r10,1648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1648, ctx.r10.u32);
	// stw r10,1664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1664, ctx.r10.u32);
	// stw r10,1680(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1680, ctx.r10.u32);
	// stw r10,1696(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1696, ctx.r10.u32);
	// stw r10,1712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1712, ctx.r10.u32);
	// stw r10,1728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1728, ctx.r10.u32);
	// stw r10,1744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1744, ctx.r10.u32);
	// stw r10,1760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1760, ctx.r10.u32);
	// stw r10,1776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1776, ctx.r10.u32);
	// stw r10,1792(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1792, ctx.r10.u32);
	// stw r10,1808(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1808, ctx.r10.u32);
	// stw r10,1824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1824, ctx.r10.u32);
	// stw r10,1840(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1840, ctx.r10.u32);
	// stw r10,1856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1856, ctx.r10.u32);
	// stw r10,1872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1872, ctx.r10.u32);
	// stw r10,1888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1888, ctx.r10.u32);
	// stw r10,1904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1904, ctx.r10.u32);
	// stw r10,1920(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1920, ctx.r10.u32);
	// stw r10,1936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1936, ctx.r10.u32);
	// stw r10,1952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1952, ctx.r10.u32);
	// stw r10,1968(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1968, ctx.r10.u32);
	// stw r10,1984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1984, ctx.r10.u32);
	// stw r10,2000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2000, ctx.r10.u32);
	// stw r10,2016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2016, ctx.r10.u32);
	// stw r10,2032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2032, ctx.r10.u32);
	// stw r10,2048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2048, ctx.r10.u32);
	// stw r10,2064(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2064, ctx.r10.u32);
	// stw r10,2080(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2080, ctx.r10.u32);
	// stw r10,2096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2096, ctx.r10.u32);
	// stw r10,2112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2112, ctx.r10.u32);
	// stw r10,2128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2128, ctx.r10.u32);
	// stw r10,2144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2144, ctx.r10.u32);
	// stw r10,2160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2160, ctx.r10.u32);
	// stw r10,2176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2176, ctx.r10.u32);
	// stw r10,2192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2192, ctx.r10.u32);
	// stw r10,2208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2208, ctx.r10.u32);
	// stw r10,2224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2224, ctx.r10.u32);
	// stw r10,2240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2240, ctx.r10.u32);
	// stw r10,2256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2256, ctx.r10.u32);
	// stw r10,2272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2272, ctx.r10.u32);
	// stw r10,2288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2288, ctx.r10.u32);
	// stw r10,2304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2304, ctx.r10.u32);
	// stw r11,2320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2320, ctx.r11.u32);
	// stw r11,2336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2336, ctx.r11.u32);
	// stw r11,2352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2352, ctx.r11.u32);
	// stw r10,2368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2368, ctx.r10.u32);
	// stw r10,2384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2384, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED13C"))) PPC_WEAK_FUNC(sub_833ED13C);
PPC_FUNC_IMPL(__imp__sub_833ED13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED140"))) PPC_WEAK_FUNC(sub_833ED140);
PPC_FUNC_IMPL(__imp__sub_833ED140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,8960
	ctx.r11.s64 = ctx.r11.s64 + 8960;
	// addi r10,r10,2432
	ctx.r10.s64 = ctx.r10.s64 + 2432;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// addi r8,r8,2428
	ctx.r8.s64 = ctx.r8.s64 + 2428;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,10752
	ctx.r11.s64 = ctx.r11.s64 + 10752;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED190"))) PPC_WEAK_FUNC(sub_833ED190);
PPC_FUNC_IMPL(__imp__sub_833ED190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,8960
	ctx.r11.s64 = ctx.r11.s64 + 8960;
	// addi r10,r10,2432
	ctx.r10.s64 = ctx.r10.s64 + 2432;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// addi r8,r8,2780
	ctx.r8.s64 = ctx.r8.s64 + 2780;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,10768
	ctx.r11.s64 = ctx.r11.s64 + 10768;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED1E0"))) PPC_WEAK_FUNC(sub_833ED1E0);
PPC_FUNC_IMPL(__imp__sub_833ED1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,10784
	ctx.r9.s64 = ctx.r9.s64 + 10784;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED214"))) PPC_WEAK_FUNC(sub_833ED214);
PPC_FUNC_IMPL(__imp__sub_833ED214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED218"))) PPC_WEAK_FUNC(sub_833ED218);
PPC_FUNC_IMPL(__imp__sub_833ED218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-21376
	ctx.r10.s64 = ctx.r10.s64 + -21376;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// stw r11,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED244"))) PPC_WEAK_FUNC(sub_833ED244);
PPC_FUNC_IMPL(__imp__sub_833ED244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED248"))) PPC_WEAK_FUNC(sub_833ED248);
PPC_FUNC_IMPL(__imp__sub_833ED248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-21136
	ctx.r10.s64 = ctx.r10.s64 + -21136;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED264"))) PPC_WEAK_FUNC(sub_833ED264);
PPC_FUNC_IMPL(__imp__sub_833ED264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED268"))) PPC_WEAK_FUNC(sub_833ED268);
PPC_FUNC_IMPL(__imp__sub_833ED268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-21056
	ctx.r10.s64 = ctx.r10.s64 + -21056;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// stw r11,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r11.u32);
	// stw r11,244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED298"))) PPC_WEAK_FUNC(sub_833ED298);
PPC_FUNC_IMPL(__imp__sub_833ED298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20776
	ctx.r10.s64 = ctx.r10.s64 + -20776;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED2B4"))) PPC_WEAK_FUNC(sub_833ED2B4);
PPC_FUNC_IMPL(__imp__sub_833ED2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED2B8"))) PPC_WEAK_FUNC(sub_833ED2B8);
PPC_FUNC_IMPL(__imp__sub_833ED2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20696
	ctx.r10.s64 = ctx.r10.s64 + -20696;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED2D0"))) PPC_WEAK_FUNC(sub_833ED2D0);
PPC_FUNC_IMPL(__imp__sub_833ED2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20656
	ctx.r10.s64 = ctx.r10.s64 + -20656;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED2E8"))) PPC_WEAK_FUNC(sub_833ED2E8);
PPC_FUNC_IMPL(__imp__sub_833ED2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20616
	ctx.r10.s64 = ctx.r10.s64 + -20616;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED300"))) PPC_WEAK_FUNC(sub_833ED300);
PPC_FUNC_IMPL(__imp__sub_833ED300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20576
	ctx.r10.s64 = ctx.r10.s64 + -20576;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED31C"))) PPC_WEAK_FUNC(sub_833ED31C);
PPC_FUNC_IMPL(__imp__sub_833ED31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED320"))) PPC_WEAK_FUNC(sub_833ED320);
PPC_FUNC_IMPL(__imp__sub_833ED320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20496
	ctx.r10.s64 = ctx.r10.s64 + -20496;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED340"))) PPC_WEAK_FUNC(sub_833ED340);
PPC_FUNC_IMPL(__imp__sub_833ED340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20376
	ctx.r10.s64 = ctx.r10.s64 + -20376;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED358"))) PPC_WEAK_FUNC(sub_833ED358);
PPC_FUNC_IMPL(__imp__sub_833ED358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20336
	ctx.r10.s64 = ctx.r10.s64 + -20336;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED370"))) PPC_WEAK_FUNC(sub_833ED370);
PPC_FUNC_IMPL(__imp__sub_833ED370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20296
	ctx.r10.s64 = ctx.r10.s64 + -20296;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED388"))) PPC_WEAK_FUNC(sub_833ED388);
PPC_FUNC_IMPL(__imp__sub_833ED388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20256
	ctx.r10.s64 = ctx.r10.s64 + -20256;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED3A0"))) PPC_WEAK_FUNC(sub_833ED3A0);
PPC_FUNC_IMPL(__imp__sub_833ED3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20216
	ctx.r10.s64 = ctx.r10.s64 + -20216;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED3BC"))) PPC_WEAK_FUNC(sub_833ED3BC);
PPC_FUNC_IMPL(__imp__sub_833ED3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED3C0"))) PPC_WEAK_FUNC(sub_833ED3C0);
PPC_FUNC_IMPL(__imp__sub_833ED3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20136
	ctx.r10.s64 = ctx.r10.s64 + -20136;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED3E0"))) PPC_WEAK_FUNC(sub_833ED3E0);
PPC_FUNC_IMPL(__imp__sub_833ED3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-20016
	ctx.r10.s64 = ctx.r10.s64 + -20016;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED3F8"))) PPC_WEAK_FUNC(sub_833ED3F8);
PPC_FUNC_IMPL(__imp__sub_833ED3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-19976
	ctx.r10.s64 = ctx.r10.s64 + -19976;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED414"))) PPC_WEAK_FUNC(sub_833ED414);
PPC_FUNC_IMPL(__imp__sub_833ED414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED418"))) PPC_WEAK_FUNC(sub_833ED418);
PPC_FUNC_IMPL(__imp__sub_833ED418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-19896
	ctx.r10.s64 = ctx.r10.s64 + -19896;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED438"))) PPC_WEAK_FUNC(sub_833ED438);
PPC_FUNC_IMPL(__imp__sub_833ED438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-19776
	ctx.r10.s64 = ctx.r10.s64 + -19776;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED454"))) PPC_WEAK_FUNC(sub_833ED454);
PPC_FUNC_IMPL(__imp__sub_833ED454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED458"))) PPC_WEAK_FUNC(sub_833ED458);
PPC_FUNC_IMPL(__imp__sub_833ED458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-19696
	ctx.r10.s64 = ctx.r10.s64 + -19696;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED470"))) PPC_WEAK_FUNC(sub_833ED470);
PPC_FUNC_IMPL(__imp__sub_833ED470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-19656
	ctx.r10.s64 = ctx.r10.s64 + -19656;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// stw r11,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED49C"))) PPC_WEAK_FUNC(sub_833ED49C);
PPC_FUNC_IMPL(__imp__sub_833ED49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED4A0"))) PPC_WEAK_FUNC(sub_833ED4A0);
PPC_FUNC_IMPL(__imp__sub_833ED4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// addi r10,r10,-19416
	ctx.r10.s64 = ctx.r10.s64 + -19416;
	// lwz r11,-21896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21896);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED4C8"))) PPC_WEAK_FUNC(sub_833ED4C8);
PPC_FUNC_IMPL(__imp__sub_833ED4C8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,-29464
	ctx.r4.s64 = ctx.r11.s64 + -29464;
	// addi r3,r10,11136
	ctx.r3.s64 = ctx.r10.s64 + 11136;
	// bl 0x82e02670
	ctx.lr = 0x833ED4E8;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// bl 0x833a1ff8
	ctx.lr = 0x833ED4F4;
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

__attribute__((alias("__imp__sub_833ED504"))) PPC_WEAK_FUNC(sub_833ED504);
PPC_FUNC_IMPL(__imp__sub_833ED504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED508"))) PPC_WEAK_FUNC(sub_833ED508);
PPC_FUNC_IMPL(__imp__sub_833ED508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,-18056
	ctx.r4.s64 = ctx.r11.s64 + -18056;
	// addi r3,r10,11156
	ctx.r3.s64 = ctx.r10.s64 + 11156;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ED51C"))) PPC_WEAK_FUNC(sub_833ED51C);
PPC_FUNC_IMPL(__imp__sub_833ED51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED520"))) PPC_WEAK_FUNC(sub_833ED520);
PPC_FUNC_IMPL(__imp__sub_833ED520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,11184
	ctx.r9.s64 = ctx.r9.s64 + 11184;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED554"))) PPC_WEAK_FUNC(sub_833ED554);
PPC_FUNC_IMPL(__imp__sub_833ED554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED558"))) PPC_WEAK_FUNC(sub_833ED558);
PPC_FUNC_IMPL(__imp__sub_833ED558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-31844
	ctx.r7.s64 = -2086928384;
	// lwz r11,22440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22440);
	// lwz r10,22432(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22432);
	// addi r6,r7,11292
	ctx.r6.s64 = ctx.r7.s64 + 11292;
	// lwz r9,23184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23184);
	// lwz r8,22436(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22436);
	// stw r11,11292(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11292, ctx.r11.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r8,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r8.u32);
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED59C"))) PPC_WEAK_FUNC(sub_833ED59C);
PPC_FUNC_IMPL(__imp__sub_833ED59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED5A0"))) PPC_WEAK_FUNC(sub_833ED5A0);
PPC_FUNC_IMPL(__imp__sub_833ED5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r8,r9,11316
	ctx.r8.s64 = ctx.r9.s64 + 11316;
	// lwz r11,22452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22452);
	// lwz r10,22448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22448);
	// stw r11,11316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11316, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED5C4"))) PPC_WEAK_FUNC(sub_833ED5C4);
PPC_FUNC_IMPL(__imp__sub_833ED5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED5C8"))) PPC_WEAK_FUNC(sub_833ED5C8);
PPC_FUNC_IMPL(__imp__sub_833ED5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// lwz r11,22460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22460);
	// addi r7,r8,11324
	ctx.r7.s64 = ctx.r8.s64 + 11324;
	// lwz r10,22456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22456);
	// lwz r9,27304(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27304);
	// stw r11,11324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11324, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED5F8"))) PPC_WEAK_FUNC(sub_833ED5F8);
PPC_FUNC_IMPL(__imp__sub_833ED5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,11360
	ctx.r9.s64 = ctx.r9.s64 + 11360;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED638"))) PPC_WEAK_FUNC(sub_833ED638);
PPC_FUNC_IMPL(__imp__sub_833ED638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,11376
	ctx.r9.s64 = ctx.r9.s64 + 11376;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED66C"))) PPC_WEAK_FUNC(sub_833ED66C);
PPC_FUNC_IMPL(__imp__sub_833ED66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED670"))) PPC_WEAK_FUNC(sub_833ED670);
PPC_FUNC_IMPL(__imp__sub_833ED670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,12132
	ctx.r4.s64 = ctx.r11.s64 + 12132;
	// addi r3,r10,11392
	ctx.r3.s64 = ctx.r10.s64 + 11392;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ED684"))) PPC_WEAK_FUNC(sub_833ED684);
PPC_FUNC_IMPL(__imp__sub_833ED684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED688"))) PPC_WEAK_FUNC(sub_833ED688);
PPC_FUNC_IMPL(__imp__sub_833ED688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,-1896
	ctx.r10.s64 = ctx.r10.s64 + -1896;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,12400
	ctx.r11.s64 = ctx.r8.s64 + 12400;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lis r10,-31891
	ctx.r10.s64 = -2090008576;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,22688
	ctx.r10.s64 = ctx.r10.s64 + 22688;
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r8,8960
	ctx.r11.s64 = ctx.r8.s64 + 8960;
	// vrlimi128 v59,v63,4,3
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// li r9,16
	ctx.r9.s64 = 16;
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vrlimi128 v63,v59,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 78), 2));
	// stvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED708"))) PPC_WEAK_FUNC(sub_833ED708);
PPC_FUNC_IMPL(__imp__sub_833ED708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// addi r31,r11,28320
	ctx.r31.s64 = ctx.r11.s64 + 28320;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833ED734;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833ED73C;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,21980
	ctx.r11.s64 = ctx.r11.s64 + 21980;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,23636
	ctx.r10.s64 = ctx.r10.s64 + 23636;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833ED794;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833ED79C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,22632
	ctx.r11.s64 = ctx.r11.s64 + 22632;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,23620
	ctx.r10.s64 = ctx.r10.s64 + 23620;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833ED7DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833ED7E4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,21968
	ctx.r11.s64 = ctx.r11.s64 + 21968;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,23604
	ctx.r10.s64 = ctx.r10.s64 + 23604;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833ED824;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833ED82C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,22620
	ctx.r11.s64 = ctx.r11.s64 + 22620;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,23588
	ctx.r10.s64 = ctx.r10.s64 + 23588;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833ED86C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833ED874;
	sub_82E0BE78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,23580
	ctx.r11.s64 = ctx.r11.s64 + 23580;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// addi r10,r10,23568
	ctx.r10.s64 = ctx.r10.s64 + 23568;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833ED8B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x833ED8BC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r11,r11,23556
	ctx.r11.s64 = ctx.r11.s64 + 23556;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// addi r10,r10,23540
	ctx.r10.s64 = ctx.r10.s64 + 23540;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stb r8,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833ED8FC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x833ED904;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ED924"))) PPC_WEAK_FUNC(sub_833ED924);
PPC_FUNC_IMPL(__imp__sub_833ED924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ED928"))) PPC_WEAK_FUNC(sub_833ED928);
PPC_FUNC_IMPL(__imp__sub_833ED928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// addi r31,r11,31176
	ctx.r31.s64 = ctx.r11.s64 + 31176;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833ED954;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833ED95C;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,25064
	ctx.r11.s64 = ctx.r11.s64 + 25064;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,25032
	ctx.r10.s64 = ctx.r10.s64 + 25032;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833ED9B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833ED9BC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,25024
	ctx.r11.s64 = ctx.r11.s64 + 25024;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,24992
	ctx.r10.s64 = ctx.r10.s64 + 24992;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833ED9FC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EDA04;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDA24"))) PPC_WEAK_FUNC(sub_833EDA24);
PPC_FUNC_IMPL(__imp__sub_833EDA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDA28"))) PPC_WEAK_FUNC(sub_833EDA28);
PPC_FUNC_IMPL(__imp__sub_833EDA28) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,-29252
	ctx.r31.s64 = ctx.r11.s64 + -29252;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EDA48;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EDA50;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EDA64"))) PPC_WEAK_FUNC(sub_833EDA64);
PPC_FUNC_IMPL(__imp__sub_833EDA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDA68"))) PPC_WEAK_FUNC(sub_833EDA68);
PPC_FUNC_IMPL(__imp__sub_833EDA68) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,-29204
	ctx.r31.s64 = ctx.r11.s64 + -29204;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EDA88;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EDA90;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EDAA4"))) PPC_WEAK_FUNC(sub_833EDAA4);
PPC_FUNC_IMPL(__imp__sub_833EDAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDAA8"))) PPC_WEAK_FUNC(sub_833EDAA8);
PPC_FUNC_IMPL(__imp__sub_833EDAA8) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,-29156
	ctx.r31.s64 = ctx.r11.s64 + -29156;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EDAC8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EDAD0;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EDAE4"))) PPC_WEAK_FUNC(sub_833EDAE4);
PPC_FUNC_IMPL(__imp__sub_833EDAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDAE8"))) PPC_WEAK_FUNC(sub_833EDAE8);
PPC_FUNC_IMPL(__imp__sub_833EDAE8) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,-29108
	ctx.r31.s64 = ctx.r11.s64 + -29108;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EDB08;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EDB10;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EDB24"))) PPC_WEAK_FUNC(sub_833EDB24);
PPC_FUNC_IMPL(__imp__sub_833EDB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDB28"))) PPC_WEAK_FUNC(sub_833EDB28);
PPC_FUNC_IMPL(__imp__sub_833EDB28) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,-27488
	ctx.r31.s64 = ctx.r11.s64 + -27488;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EDB48;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EDB50;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EDB64"))) PPC_WEAK_FUNC(sub_833EDB64);
PPC_FUNC_IMPL(__imp__sub_833EDB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDB68"))) PPC_WEAK_FUNC(sub_833EDB68);
PPC_FUNC_IMPL(__imp__sub_833EDB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,-14152
	ctx.r4.s64 = ctx.r11.s64 + -14152;
	// addi r3,r10,11580
	ctx.r3.s64 = ctx.r10.s64 + 11580;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EDB7C"))) PPC_WEAK_FUNC(sub_833EDB7C);
PPC_FUNC_IMPL(__imp__sub_833EDB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDB80"))) PPC_WEAK_FUNC(sub_833EDB80);
PPC_FUNC_IMPL(__imp__sub_833EDB80) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f1,-14136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -14136);
	// bl 0x833a03a0
	ctx.lr = 0x833EDB98;
	sub_833A03A0(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,11584(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11584, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDBB4"))) PPC_WEAK_FUNC(sub_833EDBB4);
PPC_FUNC_IMPL(__imp__sub_833EDBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDBB8"))) PPC_WEAK_FUNC(sub_833EDBB8);
PPC_FUNC_IMPL(__imp__sub_833EDBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,11616
	ctx.r10.s64 = ctx.r10.s64 + 11616;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDBE4"))) PPC_WEAK_FUNC(sub_833EDBE4);
PPC_FUNC_IMPL(__imp__sub_833EDBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDBE8"))) PPC_WEAK_FUNC(sub_833EDBE8);
PPC_FUNC_IMPL(__imp__sub_833EDBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,11632
	ctx.r10.s64 = ctx.r10.s64 + 11632;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDC14"))) PPC_WEAK_FUNC(sub_833EDC14);
PPC_FUNC_IMPL(__imp__sub_833EDC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDC18"))) PPC_WEAK_FUNC(sub_833EDC18);
PPC_FUNC_IMPL(__imp__sub_833EDC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,11648
	ctx.r10.s64 = ctx.r10.s64 + 11648;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDC44"))) PPC_WEAK_FUNC(sub_833EDC44);
PPC_FUNC_IMPL(__imp__sub_833EDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDC48"))) PPC_WEAK_FUNC(sub_833EDC48);
PPC_FUNC_IMPL(__imp__sub_833EDC48) {
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
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82eef230
	ctx.lr = 0x833EDC68;
	sub_82EEF230(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// stw r3,11688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDC80"))) PPC_WEAK_FUNC(sub_833EDC80);
PPC_FUNC_IMPL(__imp__sub_833EDC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,11696
	ctx.r10.s64 = ctx.r10.s64 + 11696;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDCAC"))) PPC_WEAK_FUNC(sub_833EDCAC);
PPC_FUNC_IMPL(__imp__sub_833EDCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDCB0"))) PPC_WEAK_FUNC(sub_833EDCB0);
PPC_FUNC_IMPL(__imp__sub_833EDCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,-4124
	ctx.r10.s64 = ctx.r10.s64 + -4124;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,11712
	ctx.r9.s64 = ctx.r9.s64 + 11712;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDCF0"))) PPC_WEAK_FUNC(sub_833EDCF0);
PPC_FUNC_IMPL(__imp__sub_833EDCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,-4124
	ctx.r10.s64 = ctx.r10.s64 + -4124;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,11728
	ctx.r9.s64 = ctx.r9.s64 + 11728;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EDD30"))) PPC_WEAK_FUNC(sub_833EDD30);
PPC_FUNC_IMPL(__imp__sub_833EDD30) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r9,r10,-18484
	ctx.r9.s64 = ctx.r10.s64 + -18484;
	// addi r31,r11,-760
	ctx.r31.s64 = ctx.r11.s64 + -760;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lhz r10,-18484(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -18484);
	// li r5,7
	ctx.r5.s64 = 7;
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// addi r3,r31,19
	ctx.r3.s64 = ctx.r31.s64 + 19;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// lfs f0,24284(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 5;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// stb r9,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r9.u8);
	// bl 0x833a2b30
	ctx.lr = 0x833EDD98;
	sub_833A2B30(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-18488
	ctx.r9.s64 = ctx.r11.s64 + -18488;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,-18488(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -18488);
	// addi r3,r31,35
	ctx.r3.s64 = ctx.r31.s64 + 35;
	// lfs f0,6484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// stb r10,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r10.u8);
	// bl 0x833a2b30
	ctx.lr = 0x833EDDCC;
	sub_833A2B30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,19496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
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

__attribute__((alias("__imp__sub_833EDDEC"))) PPC_WEAK_FUNC(sub_833EDDEC);
PPC_FUNC_IMPL(__imp__sub_833EDDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EDDF0"))) PPC_WEAK_FUNC(sub_833EDDF0);
PPC_FUNC_IMPL(__imp__sub_833EDDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,856
	ctx.r31.s64 = ctx.r11.s64 + 856;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EDE1C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EDE24;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,22760
	ctx.r11.s64 = ctx.r11.s64 + 22760;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,24536
	ctx.r10.s64 = ctx.r10.s64 + 24536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833EDE7C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EDE84;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,22968
	ctx.r11.s64 = ctx.r11.s64 + 22968;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,24520
	ctx.r10.s64 = ctx.r10.s64 + 24520;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EDEC4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EDECC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,22956
	ctx.r11.s64 = ctx.r11.s64 + 22956;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,24504
	ctx.r10.s64 = ctx.r10.s64 + 24504;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EDF0C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EDF14;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,24488
	ctx.r10.s64 = ctx.r10.s64 + 24488;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EDF54;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EDF5C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,22776
	ctx.r11.s64 = ctx.r11.s64 + 22776;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// addi r10,r10,24476
	ctx.r10.s64 = ctx.r10.s64 + 24476;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EDF9C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x833EDFA4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// addi r10,r10,24460
	ctx.r10.s64 = ctx.r10.s64 + 24460;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stb r8,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EDFE4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x833EDFEC;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE00C"))) PPC_WEAK_FUNC(sub_833EE00C);
PPC_FUNC_IMPL(__imp__sub_833EE00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE010"))) PPC_WEAK_FUNC(sub_833EE010);
PPC_FUNC_IMPL(__imp__sub_833EE010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,25148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25148);
	// stw r11,11784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE024"))) PPC_WEAK_FUNC(sub_833EE024);
PPC_FUNC_IMPL(__imp__sub_833EE024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE028"))) PPC_WEAK_FUNC(sub_833EE028);
PPC_FUNC_IMPL(__imp__sub_833EE028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,25156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25156);
	// stw r11,11788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11788, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE03C"))) PPC_WEAK_FUNC(sub_833EE03C);
PPC_FUNC_IMPL(__imp__sub_833EE03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE040"))) PPC_WEAK_FUNC(sub_833EE040);
PPC_FUNC_IMPL(__imp__sub_833EE040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,25152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25152);
	// stw r11,11792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE054"))) PPC_WEAK_FUNC(sub_833EE054);
PPC_FUNC_IMPL(__imp__sub_833EE054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE058"))) PPC_WEAK_FUNC(sub_833EE058);
PPC_FUNC_IMPL(__imp__sub_833EE058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,25156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25156);
	// stw r11,11796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11796, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE06C"))) PPC_WEAK_FUNC(sub_833EE06C);
PPC_FUNC_IMPL(__imp__sub_833EE06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE070"))) PPC_WEAK_FUNC(sub_833EE070);
PPC_FUNC_IMPL(__imp__sub_833EE070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,25160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25160);
	// stw r11,11800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE084"))) PPC_WEAK_FUNC(sub_833EE084);
PPC_FUNC_IMPL(__imp__sub_833EE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE088"))) PPC_WEAK_FUNC(sub_833EE088);
PPC_FUNC_IMPL(__imp__sub_833EE088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,25164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25164);
	// stw r11,11804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE09C"))) PPC_WEAK_FUNC(sub_833EE09C);
PPC_FUNC_IMPL(__imp__sub_833EE09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE0A0"))) PPC_WEAK_FUNC(sub_833EE0A0);
PPC_FUNC_IMPL(__imp__sub_833EE0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// addi r9,r11,3136
	ctx.r9.s64 = ctx.r11.s64 + 3136;
	// addi r7,r8,11844
	ctx.r7.s64 = ctx.r8.s64 + 11844;
	// lwz r11,3136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r11,11844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11844, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE0CC"))) PPC_WEAK_FUNC(sub_833EE0CC);
PPC_FUNC_IMPL(__imp__sub_833EE0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE0D0"))) PPC_WEAK_FUNC(sub_833EE0D0);
PPC_FUNC_IMPL(__imp__sub_833EE0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,12012
	ctx.r11.s64 = ctx.r11.s64 + 12012;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,11824
	ctx.r9.s64 = ctx.r9.s64 + 11824;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE110"))) PPC_WEAK_FUNC(sub_833EE110);
PPC_FUNC_IMPL(__imp__sub_833EE110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,-5672
	ctx.r4.s64 = ctx.r11.s64 + -5672;
	// addi r3,r10,11892
	ctx.r3.s64 = ctx.r10.s64 + 11892;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EE124"))) PPC_WEAK_FUNC(sub_833EE124);
PPC_FUNC_IMPL(__imp__sub_833EE124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE128"))) PPC_WEAK_FUNC(sub_833EE128);
PPC_FUNC_IMPL(__imp__sub_833EE128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,-2684
	ctx.r4.s64 = ctx.r11.s64 + -2684;
	// addi r3,r10,11896
	ctx.r3.s64 = ctx.r10.s64 + 11896;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EE13C"))) PPC_WEAK_FUNC(sub_833EE13C);
PPC_FUNC_IMPL(__imp__sub_833EE13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE140"))) PPC_WEAK_FUNC(sub_833EE140);
PPC_FUNC_IMPL(__imp__sub_833EE140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,31068
	ctx.r4.s64 = ctx.r11.s64 + 31068;
	// addi r3,r10,11900
	ctx.r3.s64 = ctx.r10.s64 + 11900;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EE154"))) PPC_WEAK_FUNC(sub_833EE154);
PPC_FUNC_IMPL(__imp__sub_833EE154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE158"))) PPC_WEAK_FUNC(sub_833EE158);
PPC_FUNC_IMPL(__imp__sub_833EE158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,31080
	ctx.r4.s64 = ctx.r11.s64 + 31080;
	// addi r3,r10,11904
	ctx.r3.s64 = ctx.r10.s64 + 11904;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EE16C"))) PPC_WEAK_FUNC(sub_833EE16C);
PPC_FUNC_IMPL(__imp__sub_833EE16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE170"))) PPC_WEAK_FUNC(sub_833EE170);
PPC_FUNC_IMPL(__imp__sub_833EE170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,12012
	ctx.r11.s64 = ctx.r11.s64 + 12012;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,11936
	ctx.r9.s64 = ctx.r9.s64 + 11936;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE1B0"))) PPC_WEAK_FUNC(sub_833EE1B0);
PPC_FUNC_IMPL(__imp__sub_833EE1B0) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,7728
	ctx.r31.s64 = ctx.r11.s64 + 7728;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE1D0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE1D8;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-31736
	ctx.r11.s64 = ctx.r11.s64 + -31736;
	// lfs f12,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-30744
	ctx.r10.s64 = ctx.r10.s64 + -30744;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833EE230;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EE238;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EE24C"))) PPC_WEAK_FUNC(sub_833EE24C);
PPC_FUNC_IMPL(__imp__sub_833EE24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE250"))) PPC_WEAK_FUNC(sub_833EE250);
PPC_FUNC_IMPL(__imp__sub_833EE250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r11,r11,-30344
	ctx.r11.s64 = ctx.r11.s64 + -30344;
	// addi r9,r9,-4188
	ctx.r9.s64 = ctx.r9.s64 + -4188;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v60,v62,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// addi r8,r8,12080
	ctx.r8.s64 = ctx.r8.s64 + 12080;
	// addi r11,r11,19300
	ctx.r11.s64 = ctx.r11.s64 + 19300;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,16
	ctx.r10.s64 = 16;
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v63,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE2B4"))) PPC_WEAK_FUNC(sub_833EE2B4);
PPC_FUNC_IMPL(__imp__sub_833EE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE2B8"))) PPC_WEAK_FUNC(sub_833EE2B8);
PPC_FUNC_IMPL(__imp__sub_833EE2B8) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,9992
	ctx.r31.s64 = ctx.r11.s64 + 9992;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE2D8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE2E0;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EE2F4"))) PPC_WEAK_FUNC(sub_833EE2F4);
PPC_FUNC_IMPL(__imp__sub_833EE2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE2F8"))) PPC_WEAK_FUNC(sub_833EE2F8);
PPC_FUNC_IMPL(__imp__sub_833EE2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,2780
	ctx.r10.s64 = ctx.r10.s64 + 2780;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,12112
	ctx.r11.s64 = ctx.r8.s64 + 12112;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE340"))) PPC_WEAK_FUNC(sub_833EE340);
PPC_FUNC_IMPL(__imp__sub_833EE340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,-27740
	ctx.r10.s64 = ctx.r10.s64 + -27740;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,12128
	ctx.r11.s64 = ctx.r8.s64 + 12128;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE388"))) PPC_WEAK_FUNC(sub_833EE388);
PPC_FUNC_IMPL(__imp__sub_833EE388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// addi r9,r9,12144
	ctx.r9.s64 = ctx.r9.s64 + 12144;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE3C8"))) PPC_WEAK_FUNC(sub_833EE3C8);
PPC_FUNC_IMPL(__imp__sub_833EE3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r9,-2808
	ctx.r9.s64 = ctx.r9.s64 + -2808;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r8,12160
	ctx.r11.s64 = ctx.r8.s64 + 12160;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE410"))) PPC_WEAK_FUNC(sub_833EE410);
PPC_FUNC_IMPL(__imp__sub_833EE410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EE41C"))) PPC_WEAK_FUNC(sub_833EE41C);
PPC_FUNC_IMPL(__imp__sub_833EE41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE420"))) PPC_WEAK_FUNC(sub_833EE420);
PPC_FUNC_IMPL(__imp__sub_833EE420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,10952
	ctx.r31.s64 = ctx.r11.s64 + 10952;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE44C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE454;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-27472
	ctx.r11.s64 = ctx.r11.s64 + -27472;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-27148
	ctx.r10.s64 = ctx.r10.s64 + -27148;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833EE4AC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EE4B4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-27484
	ctx.r11.s64 = ctx.r11.s64 + -27484;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-27172
	ctx.r10.s64 = ctx.r10.s64 + -27172;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EE4F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EE4FC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,-27496
	ctx.r11.s64 = ctx.r11.s64 + -27496;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-27196
	ctx.r10.s64 = ctx.r10.s64 + -27196;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EE53C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EE544;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE564"))) PPC_WEAK_FUNC(sub_833EE564);
PPC_FUNC_IMPL(__imp__sub_833EE564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE568"))) PPC_WEAK_FUNC(sub_833EE568);
PPC_FUNC_IMPL(__imp__sub_833EE568) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,11692
	ctx.r31.s64 = ctx.r11.s64 + 11692;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE588;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE590;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EE5A4"))) PPC_WEAK_FUNC(sub_833EE5A4);
PPC_FUNC_IMPL(__imp__sub_833EE5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE5A8"))) PPC_WEAK_FUNC(sub_833EE5A8);
PPC_FUNC_IMPL(__imp__sub_833EE5A8) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,11740
	ctx.r31.s64 = ctx.r11.s64 + 11740;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE5C8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE5D0;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EE5E4"))) PPC_WEAK_FUNC(sub_833EE5E4);
PPC_FUNC_IMPL(__imp__sub_833EE5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE5E8"))) PPC_WEAK_FUNC(sub_833EE5E8);
PPC_FUNC_IMPL(__imp__sub_833EE5E8) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,11788
	ctx.r31.s64 = ctx.r11.s64 + 11788;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE608;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE610;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EE624"))) PPC_WEAK_FUNC(sub_833EE624);
PPC_FUNC_IMPL(__imp__sub_833EE624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE628"))) PPC_WEAK_FUNC(sub_833EE628);
PPC_FUNC_IMPL(__imp__sub_833EE628) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,11836
	ctx.r31.s64 = ctx.r11.s64 + 11836;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE648;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE650;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EE664"))) PPC_WEAK_FUNC(sub_833EE664);
PPC_FUNC_IMPL(__imp__sub_833EE664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE668"))) PPC_WEAK_FUNC(sub_833EE668);
PPC_FUNC_IMPL(__imp__sub_833EE668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-31844
	ctx.r8.s64 = -2086928384;
	// lwz r11,24084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24084);
	// addi r7,r8,12208
	ctx.r7.s64 = ctx.r8.s64 + 12208;
	// lwz r10,24088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	// lwz r9,24092(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24092);
	// stw r11,12208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12208, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EE698"))) PPC_WEAK_FUNC(sub_833EE698);
PPC_FUNC_IMPL(__imp__sub_833EE698) {
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
	// addi r3,r11,12184
	ctx.r3.s64 = ctx.r11.s64 + 12184;
	// bl 0x82839d98
	ctx.lr = 0x833EE6B0;
	sub_82839D98(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-18416
	ctx.r3.s64 = ctx.r11.s64 + -18416;
	// bl 0x833a1ff8
	ctx.lr = 0x833EE6BC;
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

__attribute__((alias("__imp__sub_833EE6CC"))) PPC_WEAK_FUNC(sub_833EE6CC);
PPC_FUNC_IMPL(__imp__sub_833EE6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE6D0"))) PPC_WEAK_FUNC(sub_833EE6D0);
PPC_FUNC_IMPL(__imp__sub_833EE6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x833EE6D8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,18528
	ctx.r31.s64 = ctx.r11.s64 + 18528;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE6F8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE700;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r11,-15104
	ctx.r30.s64 = ctx.r11.s64 + -15104;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-14184
	ctx.r10.s64 = ctx.r10.s64 + -14184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EE75C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EE764;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r29,r10,-15100
	ctx.r29.s64 = ctx.r10.s64 + -15100;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r11,-14208
	ctx.r10.s64 = ctx.r11.s64 + -14208;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EE7A8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EE7B0;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r28,r10,-15116
	ctx.r28.s64 = ctx.r10.s64 + -15116;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r11,-14232
	ctx.r10.s64 = ctx.r11.s64 + -14232;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EE7F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EE7FC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-15112
	ctx.r11.s64 = ctx.r11.s64 + -15112;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,-14252
	ctx.r10.s64 = ctx.r10.s64 + -14252;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EE83C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EE844;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r10,r10,-14272
	ctx.r10.s64 = ctx.r10.s64 + -14272;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EE880;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x833EE888;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r10,r10,-14292
	ctx.r10.s64 = ctx.r10.s64 + -14292;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r8,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EE8C4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x833EE8CC;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// addi r10,r10,-14312
	ctx.r10.s64 = ctx.r10.s64 + -14312;
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EE908;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x833EE910;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_833EE924"))) PPC_WEAK_FUNC(sub_833EE924);
PPC_FUNC_IMPL(__imp__sub_833EE924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EE928"))) PPC_WEAK_FUNC(sub_833EE928);
PPC_FUNC_IMPL(__imp__sub_833EE928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x833EE930;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,18912
	ctx.r31.s64 = ctx.r11.s64 + 18912;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EE950;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EE958;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r11,-15104
	ctx.r30.s64 = ctx.r11.s64 + -15104;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-14136
	ctx.r10.s64 = ctx.r10.s64 + -14136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EE9B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EE9BC;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r29,r10,-15100
	ctx.r29.s64 = ctx.r10.s64 + -15100;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r11,-14208
	ctx.r10.s64 = ctx.r11.s64 + -14208;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EEA00;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EEA08;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r28,r10,-15116
	ctx.r28.s64 = ctx.r10.s64 + -15116;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r11,-14232
	ctx.r10.s64 = ctx.r11.s64 + -14232;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EEA4C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EEA54;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-15112
	ctx.r11.s64 = ctx.r11.s64 + -15112;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,-14252
	ctx.r10.s64 = ctx.r10.s64 + -14252;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EEA94;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EEA9C;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r10,r10,-14272
	ctx.r10.s64 = ctx.r10.s64 + -14272;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EEAD8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x833EEAE0;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r10,r10,-14292
	ctx.r10.s64 = ctx.r10.s64 + -14292;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r8,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EEB1C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x833EEB24;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// addi r10,r10,-14312
	ctx.r10.s64 = ctx.r10.s64 + -14312;
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EEB60;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x833EEB68;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_833EEB7C"))) PPC_WEAK_FUNC(sub_833EEB7C);
PPC_FUNC_IMPL(__imp__sub_833EEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EEB80"))) PPC_WEAK_FUNC(sub_833EEB80);
PPC_FUNC_IMPL(__imp__sub_833EEB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x833EEB88;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,19296
	ctx.r31.s64 = ctx.r11.s64 + 19296;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EEBA8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EEBB0;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r11,-15104
	ctx.r30.s64 = ctx.r11.s64 + -15104;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-14088
	ctx.r10.s64 = ctx.r10.s64 + -14088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EEC0C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EEC14;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r29,r11,-15100
	ctx.r29.s64 = ctx.r11.s64 + -15100;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r28,r10,-14208
	ctx.r28.s64 = ctx.r10.s64 + -14208;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EEC5C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EEC64;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r27,r11,-15116
	ctx.r27.s64 = ctx.r11.s64 + -15116;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r26,r10,-14232
	ctx.r26.s64 = ctx.r10.s64 + -14232;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r26,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r26.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EECAC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EECB4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-15112
	ctx.r11.s64 = ctx.r11.s64 + -15112;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// addi r10,r10,-14160
	ctx.r10.s64 = ctx.r10.s64 + -14160;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EECF4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EECFC;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r10,r10,-14112
	ctx.r10.s64 = ctx.r10.s64 + -14112;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EED38;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x833EED40;
	sub_82E0BE78(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stw r28,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r28.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stb r8,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r8.u8);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EED78;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x833EED80;
	sub_82E0BE78(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stw r27,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r27.u32);
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stw r26,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r26.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EEDB8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x833EEDC0;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EEDD4"))) PPC_WEAK_FUNC(sub_833EEDD4);
PPC_FUNC_IMPL(__imp__sub_833EEDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EEDD8"))) PPC_WEAK_FUNC(sub_833EEDD8);
PPC_FUNC_IMPL(__imp__sub_833EEDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x833EEDE0;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,19680
	ctx.r31.s64 = ctx.r11.s64 + 19680;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EEE00;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EEE08;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r11,-15104
	ctx.r30.s64 = ctx.r11.s64 + -15104;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-14040
	ctx.r10.s64 = ctx.r10.s64 + -14040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EEE64;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EEE6C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r29,r11,-15100
	ctx.r29.s64 = ctx.r11.s64 + -15100;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r28,r10,-14208
	ctx.r28.s64 = ctx.r10.s64 + -14208;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EEEB4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EEEBC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r27,r11,-15116
	ctx.r27.s64 = ctx.r11.s64 + -15116;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r26,r10,-14232
	ctx.r26.s64 = ctx.r10.s64 + -14232;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r26,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r26.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EEF04;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EEF0C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-15112
	ctx.r11.s64 = ctx.r11.s64 + -15112;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// addi r10,r10,-14160
	ctx.r10.s64 = ctx.r10.s64 + -14160;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EEF4C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EEF54;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r10,r10,-14064
	ctx.r10.s64 = ctx.r10.s64 + -14064;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EEF90;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x833EEF98;
	sub_82E0BE78(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stw r28,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r28.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stb r8,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r8.u8);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EEFD0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x833EEFD8;
	sub_82E0BE78(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stw r27,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r27.u32);
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stw r26,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r26.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EF010;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x833EF018;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EF02C"))) PPC_WEAK_FUNC(sub_833EF02C);
PPC_FUNC_IMPL(__imp__sub_833EF02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF030"))) PPC_WEAK_FUNC(sub_833EF030);
PPC_FUNC_IMPL(__imp__sub_833EF030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r3,r10,12224
	ctx.r3.s64 = ctx.r10.s64 + 12224;
	// lwz r4,22496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22496);
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EF044"))) PPC_WEAK_FUNC(sub_833EF044);
PPC_FUNC_IMPL(__imp__sub_833EF044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF048"))) PPC_WEAK_FUNC(sub_833EF048);
PPC_FUNC_IMPL(__imp__sub_833EF048) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,22776
	ctx.r31.s64 = ctx.r11.s64 + 22776;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF078;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF080;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r10,-6616
	ctx.r30.s64 = ctx.r10.s64 + -6616;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82e0be78
	ctx.lr = 0x833EF0DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EF0E4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-6632
	ctx.r11.s64 = ctx.r11.s64 + -6632;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF120;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EF128;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,-6640
	ctx.r11.s64 = ctx.r11.s64 + -6640;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-6652
	ctx.r10.s64 = ctx.r10.s64 + -6652;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF168;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EF170;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-6660
	ctx.r11.s64 = ctx.r11.s64 + -6660;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// addi r10,r10,-6672
	ctx.r10.s64 = ctx.r10.s64 + -6672;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF1B0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EF1B8;
	sub_82E0BE78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-2904
	ctx.r11.s64 = ctx.r11.s64 + -2904;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// addi r10,r10,-6688
	ctx.r10.s64 = ctx.r10.s64 + -6688;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF1F8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x833EF200;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r11,r11,-6700
	ctx.r11.s64 = ctx.r11.s64 + -6700;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// addi r10,r10,-6716
	ctx.r10.s64 = ctx.r10.s64 + -6716;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stb r8,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF240;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x833EF248;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r11,r11,-22644
	ctx.r11.s64 = ctx.r11.s64 + -22644;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// addi r10,r10,-6732
	ctx.r10.s64 = ctx.r10.s64 + -6732;
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF288;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x833EF290;
	sub_82E0BE78(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// addi r30,r10,-6744
	ctx.r30.s64 = ctx.r10.s64 + -6744;
	// stfs f29,400(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// addi r11,r11,-6752
	ctx.r11.s64 = ctx.r11.s64 + -6752;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r8,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF2D4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x833EF2DC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-6760
	ctx.r11.s64 = ctx.r11.s64 + -6760;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stfs f29,448(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stw r9,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r9.u32);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stb r8,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r8.u8);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x82e0be78
	ctx.lr = 0x833EF318;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e0be78
	ctx.lr = 0x833EF320;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_833EF344"))) PPC_WEAK_FUNC(sub_833EF344);
PPC_FUNC_IMPL(__imp__sub_833EF344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF348"))) PPC_WEAK_FUNC(sub_833EF348);
PPC_FUNC_IMPL(__imp__sub_833EF348) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,24676
	ctx.r31.s64 = ctx.r11.s64 + 24676;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF368;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF370;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EF384"))) PPC_WEAK_FUNC(sub_833EF384);
PPC_FUNC_IMPL(__imp__sub_833EF384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF388"))) PPC_WEAK_FUNC(sub_833EF388);
PPC_FUNC_IMPL(__imp__sub_833EF388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r3,r10,12256
	ctx.r3.s64 = ctx.r10.s64 + 12256;
	// lwz r4,25496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EF39C"))) PPC_WEAK_FUNC(sub_833EF39C);
PPC_FUNC_IMPL(__imp__sub_833EF39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF3A0"))) PPC_WEAK_FUNC(sub_833EF3A0);
PPC_FUNC_IMPL(__imp__sub_833EF3A0) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,26976
	ctx.r31.s64 = ctx.r11.s64 + 26976;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF3C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF3C8;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EF3DC"))) PPC_WEAK_FUNC(sub_833EF3DC);
PPC_FUNC_IMPL(__imp__sub_833EF3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF3E0"))) PPC_WEAK_FUNC(sub_833EF3E0);
PPC_FUNC_IMPL(__imp__sub_833EF3E0) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,27320
	ctx.r31.s64 = ctx.r11.s64 + 27320;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF400;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF408;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EF41C"))) PPC_WEAK_FUNC(sub_833EF41C);
PPC_FUNC_IMPL(__imp__sub_833EF41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF420"))) PPC_WEAK_FUNC(sub_833EF420);
PPC_FUNC_IMPL(__imp__sub_833EF420) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,27368
	ctx.r31.s64 = ctx.r11.s64 + 27368;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF440;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF448;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EF45C"))) PPC_WEAK_FUNC(sub_833EF45C);
PPC_FUNC_IMPL(__imp__sub_833EF45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF460"))) PPC_WEAK_FUNC(sub_833EF460);
PPC_FUNC_IMPL(__imp__sub_833EF460) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,27416
	ctx.r31.s64 = ctx.r11.s64 + 27416;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF480;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF488;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EF49C"))) PPC_WEAK_FUNC(sub_833EF49C);
PPC_FUNC_IMPL(__imp__sub_833EF49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF4A0"))) PPC_WEAK_FUNC(sub_833EF4A0);
PPC_FUNC_IMPL(__imp__sub_833EF4A0) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,27464
	ctx.r31.s64 = ctx.r11.s64 + 27464;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF4C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF4C8;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EF4DC"))) PPC_WEAK_FUNC(sub_833EF4DC);
PPC_FUNC_IMPL(__imp__sub_833EF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF4E0"))) PPC_WEAK_FUNC(sub_833EF4E0);
PPC_FUNC_IMPL(__imp__sub_833EF4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,27512
	ctx.r31.s64 = ctx.r11.s64 + 27512;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF50C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF514;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-1076
	ctx.r11.s64 = ctx.r11.s64 + -1076;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-1092
	ctx.r10.s64 = ctx.r10.s64 + -1092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833EF56C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EF574;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-1100
	ctx.r11.s64 = ctx.r11.s64 + -1100;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-1112
	ctx.r10.s64 = ctx.r10.s64 + -1112;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF5B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EF5BC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,22748
	ctx.r11.s64 = ctx.r11.s64 + 22748;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-1128
	ctx.r10.s64 = ctx.r10.s64 + -1128;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF5FC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EF604;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-1612
	ctx.r11.s64 = ctx.r11.s64 + -1612;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,-1144
	ctx.r10.s64 = ctx.r10.s64 + -1144;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF644;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EF64C;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EF66C"))) PPC_WEAK_FUNC(sub_833EF66C);
PPC_FUNC_IMPL(__imp__sub_833EF66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF670"))) PPC_WEAK_FUNC(sub_833EF670);
PPC_FUNC_IMPL(__imp__sub_833EF670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,27896
	ctx.r31.s64 = ctx.r11.s64 + 27896;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF69C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF6A4;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,22760
	ctx.r11.s64 = ctx.r11.s64 + 22760;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,24536
	ctx.r10.s64 = ctx.r10.s64 + 24536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833EF6FC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EF704;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,22968
	ctx.r11.s64 = ctx.r11.s64 + 22968;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,24520
	ctx.r10.s64 = ctx.r10.s64 + 24520;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF744;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EF74C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,22956
	ctx.r11.s64 = ctx.r11.s64 + 22956;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,24504
	ctx.r10.s64 = ctx.r10.s64 + 24504;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF78C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EF794;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,24488
	ctx.r10.s64 = ctx.r10.s64 + 24488;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF7D4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EF7DC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,22776
	ctx.r11.s64 = ctx.r11.s64 + 22776;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// addi r10,r10,24476
	ctx.r10.s64 = ctx.r10.s64 + 24476;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF81C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x833EF824;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// addi r10,r10,24460
	ctx.r10.s64 = ctx.r10.s64 + 24460;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stb r8,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF864;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x833EF86C;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EF88C"))) PPC_WEAK_FUNC(sub_833EF88C);
PPC_FUNC_IMPL(__imp__sub_833EF88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EF890"))) PPC_WEAK_FUNC(sub_833EF890);
PPC_FUNC_IMPL(__imp__sub_833EF890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,28568
	ctx.r31.s64 = ctx.r11.s64 + 28568;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EF8BC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EF8C4;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-1076
	ctx.r11.s64 = ctx.r11.s64 + -1076;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-1092
	ctx.r10.s64 = ctx.r10.s64 + -1092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833EF91C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EF924;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-1100
	ctx.r11.s64 = ctx.r11.s64 + -1100;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-1112
	ctx.r10.s64 = ctx.r10.s64 + -1112;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF964;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EF96C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,22748
	ctx.r11.s64 = ctx.r11.s64 + 22748;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-1128
	ctx.r10.s64 = ctx.r10.s64 + -1128;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF9AC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EF9B4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-1612
	ctx.r11.s64 = ctx.r11.s64 + -1612;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,-1144
	ctx.r10.s64 = ctx.r10.s64 + -1144;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EF9F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EF9FC;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EFA1C"))) PPC_WEAK_FUNC(sub_833EFA1C);
PPC_FUNC_IMPL(__imp__sub_833EFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFA20"))) PPC_WEAK_FUNC(sub_833EFA20);
PPC_FUNC_IMPL(__imp__sub_833EFA20) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,28928
	ctx.r31.s64 = ctx.r11.s64 + 28928;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EFA40;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EFA48;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EFA5C"))) PPC_WEAK_FUNC(sub_833EFA5C);
PPC_FUNC_IMPL(__imp__sub_833EFA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFA60"))) PPC_WEAK_FUNC(sub_833EFA60);
PPC_FUNC_IMPL(__imp__sub_833EFA60) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,29112
	ctx.r31.s64 = ctx.r11.s64 + 29112;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EFA80;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EFA88;
	sub_82E0BE78(ctx, base);
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

__attribute__((alias("__imp__sub_833EFA9C"))) PPC_WEAK_FUNC(sub_833EFA9C);
PPC_FUNC_IMPL(__imp__sub_833EFA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFAA0"))) PPC_WEAK_FUNC(sub_833EFAA0);
PPC_FUNC_IMPL(__imp__sub_833EFAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r31,r11,29304
	ctx.r31.s64 = ctx.r11.s64 + 29304;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x833EFACC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x833EFAD4;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-1076
	ctx.r11.s64 = ctx.r11.s64 + -1076;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-1092
	ctx.r10.s64 = ctx.r10.s64 + -1092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e0be78
	ctx.lr = 0x833EFB2C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x833EFB34;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-1100
	ctx.r11.s64 = ctx.r11.s64 + -1100;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-1112
	ctx.r10.s64 = ctx.r10.s64 + -1112;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EFB74;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x833EFB7C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,22748
	ctx.r11.s64 = ctx.r11.s64 + 22748;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-1128
	ctx.r10.s64 = ctx.r10.s64 + -1128;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EFBBC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x833EFBC4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-1612
	ctx.r11.s64 = ctx.r11.s64 + -1612;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,-1144
	ctx.r10.s64 = ctx.r10.s64 + -1144;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x833EFC04;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x833EFC0C;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EFC2C"))) PPC_WEAK_FUNC(sub_833EFC2C);
PPC_FUNC_IMPL(__imp__sub_833EFC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFC30"))) PPC_WEAK_FUNC(sub_833EFC30);
PPC_FUNC_IMPL(__imp__sub_833EFC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,24032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// stw r11,12260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EFC44"))) PPC_WEAK_FUNC(sub_833EFC44);
PPC_FUNC_IMPL(__imp__sub_833EFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFC48"))) PPC_WEAK_FUNC(sub_833EFC48);
PPC_FUNC_IMPL(__imp__sub_833EFC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,24044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24044);
	// stw r11,12264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EFC5C"))) PPC_WEAK_FUNC(sub_833EFC5C);
PPC_FUNC_IMPL(__imp__sub_833EFC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFC60"))) PPC_WEAK_FUNC(sub_833EFC60);
PPC_FUNC_IMPL(__imp__sub_833EFC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// stw r11,12268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833EFC74"))) PPC_WEAK_FUNC(sub_833EFC74);
PPC_FUNC_IMPL(__imp__sub_833EFC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFC78"))) PPC_WEAK_FUNC(sub_833EFC78);
PPC_FUNC_IMPL(__imp__sub_833EFC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,2228
	ctx.r4.s64 = ctx.r11.s64 + 2228;
	// addi r3,r10,12272
	ctx.r3.s64 = ctx.r10.s64 + 12272;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EFC8C"))) PPC_WEAK_FUNC(sub_833EFC8C);
PPC_FUNC_IMPL(__imp__sub_833EFC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFC90"))) PPC_WEAK_FUNC(sub_833EFC90);
PPC_FUNC_IMPL(__imp__sub_833EFC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// addi r4,r11,1644
	ctx.r4.s64 = ctx.r11.s64 + 1644;
	// addi r3,r10,12276
	ctx.r3.s64 = ctx.r10.s64 + 12276;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833EFCA4"))) PPC_WEAK_FUNC(sub_833EFCA4);
PPC_FUNC_IMPL(__imp__sub_833EFCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833EFCA8"))) PPC_WEAK_FUNC(sub_833EFCA8);
PPC_FUNC_IMPL(__imp__sub_833EFCA8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// addi r4,r10,2268
	ctx.r4.s64 = ctx.r10.s64 + 2268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x833EFCD0;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,2240
	ctx.r4.s64 = ctx.r11.s64 + 2240;
	// bl 0x82e02670
	ctx.lr = 0x833EFCE0;
	sub_82E02670(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r10,-18400
	ctx.r3.s64 = ctx.r10.s64 + -18400;
	// bl 0x833a1ff8
	ctx.lr = 0x833EFCF4;
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

__attribute__((alias("__imp__sub_833EFD08"))) PPC_WEAK_FUNC(sub_833EFD08);
PPC_FUNC_IMPL(__imp__sub_833EFD08) {
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
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r31,r11,12296
	ctx.r31.s64 = ctx.r11.s64 + 12296;
	// addi r4,r10,4044
	ctx.r4.s64 = ctx.r10.s64 + 4044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x833EFD34;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,4020
	ctx.r4.s64 = ctx.r11.s64 + 4020;
	// bl 0x82e02670
	ctx.lr = 0x833EFD44;
	sub_82E02670(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lfs f31,8960(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8960);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r11,3996
	ctx.r4.s64 = ctx.r11.s64 + 3996;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x82e02670
	ctx.lr = 0x833EFD70;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,3972
	ctx.r4.s64 = ctx.r11.s64 + 3972;
	// bl 0x82e02670
	ctx.lr = 0x833EFD80;
	sub_82E02670(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,3948
	ctx.r4.s64 = ctx.r11.s64 + 3948;
	// bl 0x82e02670
	ctx.lr = 0x833EFDA4;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r4,r11,3924
	ctx.r4.s64 = ctx.r11.s64 + 3924;
	// bl 0x82e02670
	ctx.lr = 0x833EFDB4;
	sub_82E02670(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r4,r11,3900
	ctx.r4.s64 = ctx.r11.s64 + 3900;
	// bl 0x82e02670
	ctx.lr = 0x833EFDD8;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r11,3876
	ctx.r4.s64 = ctx.r11.s64 + 3876;
	// bl 0x82e02670
	ctx.lr = 0x833EFDE8;
	sub_82E02670(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r10,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r10.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,3852
	ctx.r4.s64 = ctx.r11.s64 + 3852;
	// bl 0x82e02670
	ctx.lr = 0x833EFE0C;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,3828
	ctx.r4.s64 = ctx.r11.s64 + 3828;
	// bl 0x82e02670
	ctx.lr = 0x833EFE1C;
	sub_82E02670(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r10,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r10.u8);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r11,3804
	ctx.r4.s64 = ctx.r11.s64 + 3804;
	// bl 0x82e02670
	ctx.lr = 0x833EFE40;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r11,3780
	ctx.r4.s64 = ctx.r11.s64 + 3780;
	// bl 0x82e02670
	ctx.lr = 0x833EFE50;
	sub_82E02670(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stb r10,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r10.u8);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// bl 0x833a1ff8
	ctx.lr = 0x833EFE70;
	sub_833A1FF8(ctx, base);
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

