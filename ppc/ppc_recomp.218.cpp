#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BD0968"))) PPC_WEAK_FUNC(sub_82BD0968);
PPC_FUNC_IMPL(__imp__sub_82BD0968) {
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
	// bl 0x82e8f7d8
	ctx.lr = 0x82BD0988;
	sub_82E8F7D8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29132
	ctx.r11.s64 = ctx.r11.s64 + -29132;
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

__attribute__((alias("__imp__sub_82BD09B4"))) PPC_WEAK_FUNC(sub_82BD09B4);
PPC_FUNC_IMPL(__imp__sub_82BD09B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD09B8"))) PPC_WEAK_FUNC(sub_82BD09B8);
PPC_FUNC_IMPL(__imp__sub_82BD09B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,-21192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21192);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD09D0"))) PPC_WEAK_FUNC(sub_82BD09D0);
PPC_FUNC_IMPL(__imp__sub_82BD09D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-21192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD09DC"))) PPC_WEAK_FUNC(sub_82BD09DC);
PPC_FUNC_IMPL(__imp__sub_82BD09DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD09E0"))) PPC_WEAK_FUNC(sub_82BD09E0);
PPC_FUNC_IMPL(__imp__sub_82BD09E0) {
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
	// bl 0x82e8f7f8
	ctx.lr = 0x82BD0A00;
	sub_82E8F7F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29116
	ctx.r11.s64 = ctx.r11.s64 + -29116;
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

__attribute__((alias("__imp__sub_82BD0A2C"))) PPC_WEAK_FUNC(sub_82BD0A2C);
PPC_FUNC_IMPL(__imp__sub_82BD0A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0A30"))) PPC_WEAK_FUNC(sub_82BD0A30);
PPC_FUNC_IMPL(__imp__sub_82BD0A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,-21188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21188);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0A48"))) PPC_WEAK_FUNC(sub_82BD0A48);
PPC_FUNC_IMPL(__imp__sub_82BD0A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-21188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0A54"))) PPC_WEAK_FUNC(sub_82BD0A54);
PPC_FUNC_IMPL(__imp__sub_82BD0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0A58"))) PPC_WEAK_FUNC(sub_82BD0A58);
PPC_FUNC_IMPL(__imp__sub_82BD0A58) {
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
	// bl 0x82e8f7f8
	ctx.lr = 0x82BD0A70;
	sub_82E8F7F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29100
	ctx.r11.s64 = ctx.r11.s64 + -29100;
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

__attribute__((alias("__imp__sub_82BD0A94"))) PPC_WEAK_FUNC(sub_82BD0A94);
PPC_FUNC_IMPL(__imp__sub_82BD0A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0A98"))) PPC_WEAK_FUNC(sub_82BD0A98);
PPC_FUNC_IMPL(__imp__sub_82BD0A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,-21184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21184);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0AB0"))) PPC_WEAK_FUNC(sub_82BD0AB0);
PPC_FUNC_IMPL(__imp__sub_82BD0AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-21184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0ABC"))) PPC_WEAK_FUNC(sub_82BD0ABC);
PPC_FUNC_IMPL(__imp__sub_82BD0ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0AC0"))) PPC_WEAK_FUNC(sub_82BD0AC0);
PPC_FUNC_IMPL(__imp__sub_82BD0AC0) {
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
	// bl 0x82e8f7d8
	ctx.lr = 0x82BD0AD8;
	sub_82E8F7D8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29084
	ctx.r11.s64 = ctx.r11.s64 + -29084;
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

__attribute__((alias("__imp__sub_82BD0AFC"))) PPC_WEAK_FUNC(sub_82BD0AFC);
PPC_FUNC_IMPL(__imp__sub_82BD0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0B00"))) PPC_WEAK_FUNC(sub_82BD0B00);
PPC_FUNC_IMPL(__imp__sub_82BD0B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,-21180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21180);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0B18"))) PPC_WEAK_FUNC(sub_82BD0B18);
PPC_FUNC_IMPL(__imp__sub_82BD0B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-21180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0B24"))) PPC_WEAK_FUNC(sub_82BD0B24);
PPC_FUNC_IMPL(__imp__sub_82BD0B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0B28"))) PPC_WEAK_FUNC(sub_82BD0B28);
PPC_FUNC_IMPL(__imp__sub_82BD0B28) {
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
	// bl 0x82e8f7d8
	ctx.lr = 0x82BD0B40;
	sub_82E8F7D8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29068
	ctx.r11.s64 = ctx.r11.s64 + -29068;
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

__attribute__((alias("__imp__sub_82BD0B64"))) PPC_WEAK_FUNC(sub_82BD0B64);
PPC_FUNC_IMPL(__imp__sub_82BD0B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0B68"))) PPC_WEAK_FUNC(sub_82BD0B68);
PPC_FUNC_IMPL(__imp__sub_82BD0B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,-21172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21172);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0B80"))) PPC_WEAK_FUNC(sub_82BD0B80);
PPC_FUNC_IMPL(__imp__sub_82BD0B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-21172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0B8C"))) PPC_WEAK_FUNC(sub_82BD0B8C);
PPC_FUNC_IMPL(__imp__sub_82BD0B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0B90"))) PPC_WEAK_FUNC(sub_82BD0B90);
PPC_FUNC_IMPL(__imp__sub_82BD0B90) {
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
	// bl 0x82e8f7d8
	ctx.lr = 0x82BD0BA8;
	sub_82E8F7D8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29052
	ctx.r11.s64 = ctx.r11.s64 + -29052;
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

__attribute__((alias("__imp__sub_82BD0BCC"))) PPC_WEAK_FUNC(sub_82BD0BCC);
PPC_FUNC_IMPL(__imp__sub_82BD0BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0BD0"))) PPC_WEAK_FUNC(sub_82BD0BD0);
PPC_FUNC_IMPL(__imp__sub_82BD0BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,-21216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21216);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0BE8"))) PPC_WEAK_FUNC(sub_82BD0BE8);
PPC_FUNC_IMPL(__imp__sub_82BD0BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-21216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0BF4"))) PPC_WEAK_FUNC(sub_82BD0BF4);
PPC_FUNC_IMPL(__imp__sub_82BD0BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0BF8"))) PPC_WEAK_FUNC(sub_82BD0BF8);
PPC_FUNC_IMPL(__imp__sub_82BD0BF8) {
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
	// bl 0x82e8f7f8
	ctx.lr = 0x82BD0C10;
	sub_82E8F7F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29036
	ctx.r11.s64 = ctx.r11.s64 + -29036;
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

__attribute__((alias("__imp__sub_82BD0C34"))) PPC_WEAK_FUNC(sub_82BD0C34);
PPC_FUNC_IMPL(__imp__sub_82BD0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0C38"))) PPC_WEAK_FUNC(sub_82BD0C38);
PPC_FUNC_IMPL(__imp__sub_82BD0C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,-21208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21208);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0C50"))) PPC_WEAK_FUNC(sub_82BD0C50);
PPC_FUNC_IMPL(__imp__sub_82BD0C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-21208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21208);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0C5C"))) PPC_WEAK_FUNC(sub_82BD0C5C);
PPC_FUNC_IMPL(__imp__sub_82BD0C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0C60"))) PPC_WEAK_FUNC(sub_82BD0C60);
PPC_FUNC_IMPL(__imp__sub_82BD0C60) {
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
	// bl 0x82e8f7f8
	ctx.lr = 0x82BD0C78;
	sub_82E8F7F8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29020
	ctx.r10.s64 = ctx.r10.s64 + -29020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD0CAC"))) PPC_WEAK_FUNC(sub_82BD0CAC);
PPC_FUNC_IMPL(__imp__sub_82BD0CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0CB0"))) PPC_WEAK_FUNC(sub_82BD0CB0);
PPC_FUNC_IMPL(__imp__sub_82BD0CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r11,-21196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21196);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0CC8"))) PPC_WEAK_FUNC(sub_82BD0CC8);
PPC_FUNC_IMPL(__imp__sub_82BD0CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-21196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21196);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0CD4"))) PPC_WEAK_FUNC(sub_82BD0CD4);
PPC_FUNC_IMPL(__imp__sub_82BD0CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0CD8"))) PPC_WEAK_FUNC(sub_82BD0CD8);
PPC_FUNC_IMPL(__imp__sub_82BD0CD8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826b09c8
	ctx.lr = 0x82BD0CFC;
	sub_826B09C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8f730
	ctx.lr = 0x82BD0D04;
	sub_82E8F730(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bd0d14
	if (ctx.cr0.eq) goto loc_82BD0D14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x82BD0D14;
	sub_82E01698(ctx, base);
loc_82BD0D14:
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

__attribute__((alias("__imp__sub_82BD0D30"))) PPC_WEAK_FUNC(sub_82BD0D30);
PPC_FUNC_IMPL(__imp__sub_82BD0D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r11,-8408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8408);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0D48"))) PPC_WEAK_FUNC(sub_82BD0D48);
PPC_FUNC_IMPL(__imp__sub_82BD0D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r3,-8408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8408);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0D54"))) PPC_WEAK_FUNC(sub_82BD0D54);
PPC_FUNC_IMPL(__imp__sub_82BD0D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0D58"))) PPC_WEAK_FUNC(sub_82BD0D58);
PPC_FUNC_IMPL(__imp__sub_82BD0D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82BD0D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd0da0
	if (ctx.cr6.eq) goto loc_82BD0DA0;
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// bl 0x82571b78
	ctx.lr = 0x82BD0D80;
	sub_82571B78(ctx, base);
	// bl 0x83105550
	ctx.lr = 0x82BD0D84;
	sub_83105550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bd0da0
	if (ctx.cr0.eq) goto loc_82BD0DA0;
	// lwz r29,280(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82571b78
	ctx.lr = 0x82BD0D98;
	sub_82571B78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a0d7f8
	ctx.lr = 0x82BD0DA0;
	sub_82A0D7F8(ctx, base);
loc_82BD0DA0:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd0dcc
	if (ctx.cr6.eq) goto loc_82BD0DCC;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82571b70
	ctx.lr = 0x82BD0DB4;
	sub_82571B70(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BD0DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD0DCC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c10e98
	ctx.lr = 0x82BD0DD8;
	sub_82C10E98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD0DE0"))) PPC_WEAK_FUNC(sub_82BD0DE0);
PPC_FUNC_IMPL(__imp__sub_82BD0DE0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e025d8
	ctx.lr = 0x82BD0E00;
	sub_82E025D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD0E44"))) PPC_WEAK_FUNC(sub_82BD0E44);
PPC_FUNC_IMPL(__imp__sub_82BD0E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0E48"))) PPC_WEAK_FUNC(sub_82BD0E48);
PPC_FUNC_IMPL(__imp__sub_82BD0E48) {
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
	// lfs f0,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,284(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82bd0e88
	if (!ctx.cr6.lt) goto loc_82BD0E88;
	// bl 0x82a25e48
	ctx.lr = 0x82BD0E88;
	sub_82A25E48(ctx, base);
loc_82BD0E88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a262f8
	ctx.lr = 0x82BD0E94;
	sub_82A262F8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD0EAC"))) PPC_WEAK_FUNC(sub_82BD0EAC);
PPC_FUNC_IMPL(__imp__sub_82BD0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0EB0"))) PPC_WEAK_FUNC(sub_82BD0EB0);
PPC_FUNC_IMPL(__imp__sub_82BD0EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,984(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,984(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0ED0"))) PPC_WEAK_FUNC(sub_82BD0ED0);
PPC_FUNC_IMPL(__imp__sub_82BD0ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,984(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 984, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0EDC"))) PPC_WEAK_FUNC(sub_82BD0EDC);
PPC_FUNC_IMPL(__imp__sub_82BD0EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0EE0"))) PPC_WEAK_FUNC(sub_82BD0EE0);
PPC_FUNC_IMPL(__imp__sub_82BD0EE0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82b9ee38
	ctx.lr = 0x82BD0EF4;
	sub_82B9EE38(ctx, base);
	// bl 0x82e96fb8
	ctx.lr = 0x82BD0EF8;
	sub_82E96FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0F08"))) PPC_WEAK_FUNC(sub_82BD0F08);
PPC_FUNC_IMPL(__imp__sub_82BD0F08) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82b13180
	ctx.lr = 0x82BD0F1C;
	sub_82B13180(ctx, base);
	// bl 0x82e96fb8
	ctx.lr = 0x82BD0F20;
	sub_82E96FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0F30"))) PPC_WEAK_FUNC(sub_82BD0F30);
PPC_FUNC_IMPL(__imp__sub_82BD0F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-4188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0F40"))) PPC_WEAK_FUNC(sub_82BD0F40);
PPC_FUNC_IMPL(__imp__sub_82BD0F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r3,r4,520
	ctx.r3.s64 = ctx.r4.s64 + 520;
	// b 0x82e96fb8
	sub_82E96FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD0F64"))) PPC_WEAK_FUNC(sub_82BD0F64);
PPC_FUNC_IMPL(__imp__sub_82BD0F64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0F68"))) PPC_WEAK_FUNC(sub_82BD0F68);
PPC_FUNC_IMPL(__imp__sub_82BD0F68) {
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
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82bd0fa4
	if (!ctx.cr6.lt) goto loc_82BD0FA4;
	// addi r3,r4,520
	ctx.r3.s64 = ctx.r4.s64 + 520;
	// bl 0x82e96fb8
	ctx.lr = 0x82BD0FA4;
	sub_82E96FB8(ctx, base);
loc_82BD0FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b13180
	ctx.lr = 0x82BD0FAC;
	sub_82B13180(ctx, base);
	// bl 0x82e96a70
	ctx.lr = 0x82BD0FB0;
	sub_82E96A70(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r4,-20576(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20576);
	// bl 0x82e01e10
	ctx.lr = 0x82BD0FBC;
	sub_82E01E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82bd0fc8
	if (ctx.cr0.eq) goto loc_82BD0FC8;
	// stfs f31,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
loc_82BD0FC8:
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

__attribute__((alias("__imp__sub_82BD0FE0"))) PPC_WEAK_FUNC(sub_82BD0FE0);
PPC_FUNC_IMPL(__imp__sub_82BD0FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,8960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8960);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0FF0"))) PPC_WEAK_FUNC(sub_82BD0FF0);
PPC_FUNC_IMPL(__imp__sub_82BD0FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// b 0x82e96fb8
	sub_82E96FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD0FF8"))) PPC_WEAK_FUNC(sub_82BD0FF8);
PPC_FUNC_IMPL(__imp__sub_82BD0FF8) {
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
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82e96fb8
	ctx.lr = 0x82BD1014;
	sub_82E96FB8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82e96fb8
	ctx.lr = 0x82BD101C;
	sub_82E96FB8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD1030"))) PPC_WEAK_FUNC(sub_82BD1030);
PPC_FUNC_IMPL(__imp__sub_82BD1030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x82BD1038;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x833a18f4
	ctx.lr = 0x82BD1040;
	__savefpr_27(ctx, base);
	// stwu r1,-3152(r1)
	ea = -3152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31882
	ctx.r28.s64 = -2089418752;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r28,-19984
	ctx.r27.s64 = ctx.r28.s64 + -19984;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lfs f29,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f29.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-248(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -248);
	// addi r8,r8,-23368
	ctx.r8.s64 = ctx.r8.s64 + -23368;
	// lfs f30,24284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lfs f31,2780(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e0be78
	ctx.lr = 0x82BD10A0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e0be78
	ctx.lr = 0x82BD10A8;
	sub_82E0BE78(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,-244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -244);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r30,1
	ctx.r30.s64 = 1;
	// stfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r26,r9,-23384
	ctx.r26.s64 = ctx.r9.s64 + -23384;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lfs f28,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	ctx.f28.f64 = double(temp.f32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stfs f28,136(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e0be78
	ctx.lr = 0x82BD10E8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e0be78
	ctx.lr = 0x82BD10F0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-240(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -240);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r10,r10,-23408
	ctx.r10.s64 = ctx.r10.s64 + -23408;
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1124;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82e0be78
	ctx.lr = 0x82BD112C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-236(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -236);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f30,240(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// addi r10,r10,-23432
	ctx.r10.s64 = ctx.r10.s64 + -23432;
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1160;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1168;
	sub_82E0BE78(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r11,-232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -232);
	// stfs f29,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f30,288(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// addi r10,r10,-23460
	ctx.r10.s64 = ctx.r10.s64 + -23460;
	// stfs f31,292(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stfs f31,296(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD119C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82e0be78
	ctx.lr = 0x82BD11A4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -228);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f30,336(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// addi r10,r10,-23480
	ctx.r10.s64 = ctx.r10.s64 + -23480;
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stb r31,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, ctx.r31.u8);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD11D8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82e0be78
	ctx.lr = 0x82BD11E0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -224);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,376(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f30,384(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// addi r10,r10,-23504
	ctx.r10.s64 = ctx.r10.s64 + -23504;
	// stfs f31,388(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f31,392(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stb r31,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r31.u8);
	// stw r10,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r10.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1214;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82e0be78
	ctx.lr = 0x82BD121C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-220(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -220);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,424(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f30,432(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r10,r10,-23532
	ctx.r10.s64 = ctx.r10.s64 + -23532;
	// stfs f31,436(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f31,440(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stb r31,444(r1)
	PPC_STORE_U8(ctx.r1.u32 + 444, ctx.r31.u8);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1250;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1258;
	sub_82E0BE78(ctx, base);
	// lwz r11,-216(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -216);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,472(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f30,480(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stw r30,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r30.u32);
	// addi r10,r10,-23552
	ctx.r10.s64 = ctx.r10.s64 + -23552;
	// stfs f31,484(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f31,488(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stb r31,492(r1)
	PPC_STORE_U8(ctx.r1.u32 + 492, ctx.r31.u8);
	// stw r10,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r10.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r11,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD128C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1294;
	sub_82E0BE78(ctx, base);
	// lwz r11,-212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -212);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,520(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stfs f30,528(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stw r30,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r30.u32);
	// addi r10,r10,-23576
	ctx.r10.s64 = ctx.r10.s64 + -23576;
	// stfs f31,532(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f31,536(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stb r31,540(r1)
	PPC_STORE_U8(ctx.r1.u32 + 540, ctx.r31.u8);
	// stw r10,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r10.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD12C8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82e0be78
	ctx.lr = 0x82BD12D0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-208(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -208);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,568(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stfs f30,576(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// stw r31,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r31.u32);
	// addi r10,r10,-23600
	ctx.r10.s64 = ctx.r10.s64 + -23600;
	// stfs f31,580(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// stfs f31,584(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// stb r31,588(r1)
	PPC_STORE_U8(ctx.r1.u32 + 588, ctx.r31.u8);
	// stw r10,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r10.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1304;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82e0be78
	ctx.lr = 0x82BD130C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -204);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,616(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stfs f30,624(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// stw r30,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r30.u32);
	// addi r10,r10,-23616
	ctx.r10.s64 = ctx.r10.s64 + -23616;
	// stfs f31,628(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// stfs f31,632(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stb r31,636(r1)
	PPC_STORE_U8(ctx.r1.u32 + 636, ctx.r31.u8);
	// stw r10,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r10.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r11,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1340;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1348;
	sub_82E0BE78(ctx, base);
	// lwz r11,-200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -200);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,664(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 664, temp.u32);
	// stfs f30,672(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// stw r31,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r31.u32);
	// addi r10,r10,-23636
	ctx.r10.s64 = ctx.r10.s64 + -23636;
	// stfs f31,676(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// stfs f31,680(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stb r31,684(r1)
	PPC_STORE_U8(ctx.r1.u32 + 684, ctx.r31.u8);
	// stw r10,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r10.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD137C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1384;
	sub_82E0BE78(ctx, base);
	// lwz r11,-196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -196);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,712(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// stfs f30,720(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 720, temp.u32);
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// addi r10,r10,-23656
	ctx.r10.s64 = ctx.r10.s64 + -23656;
	// stfs f31,724(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 724, temp.u32);
	// stfs f31,728(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 728, temp.u32);
	// stb r31,732(r1)
	PPC_STORE_U8(ctx.r1.u32 + 732, ctx.r31.u8);
	// stw r10,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r10.u32);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r11,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD13B8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x82e0be78
	ctx.lr = 0x82BD13C0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-192(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -192);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,760(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 760, temp.u32);
	// stfs f30,768(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 768, temp.u32);
	// stw r30,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r30.u32);
	// addi r10,r10,-23676
	ctx.r10.s64 = ctx.r10.s64 + -23676;
	// stfs f31,772(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 772, temp.u32);
	// stfs f31,776(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 776, temp.u32);
	// stb r31,780(r1)
	PPC_STORE_U8(ctx.r1.u32 + 780, ctx.r31.u8);
	// stw r10,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r10.u32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD13F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82e0be78
	ctx.lr = 0x82BD13FC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f29,808(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 808, temp.u32);
	// stfs f30,816(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 816, temp.u32);
	// addi r10,r11,-23696
	ctx.r10.s64 = ctx.r11.s64 + -23696;
	// stfs f31,820(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 820, temp.u32);
	// lwz r11,-188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -188);
	// stfs f31,824(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 824, temp.u32);
	// stw r30,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r30.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stw r10,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r10.u32);
	// stb r31,828(r1)
	PPC_STORE_U8(ctx.r1.u32 + 828, ctx.r31.u8);
	// stw r11,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1430;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1438;
	sub_82E0BE78(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,-184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -184);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stfs f30,864(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 864, temp.u32);
	// stw r30,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r30.u32);
	// addi r9,r9,-23720
	ctx.r9.s64 = ctx.r9.s64 + -23720;
	// stfs f31,868(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 868, temp.u32);
	// stfs f31,872(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 872, temp.u32);
	// stb r31,876(r1)
	PPC_STORE_U8(ctx.r1.u32 + 876, ctx.r31.u8);
	// lfs f27,8960(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8960);
	ctx.f27.f64 = double(temp.f32);
	// stw r9,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r9.u32);
	// stfs f27,856(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 856, temp.u32);
	// stw r11,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r11.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1474;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x82e0be78
	ctx.lr = 0x82BD147C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -180);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f27,904(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 904, temp.u32);
	// stfs f30,912(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 912, temp.u32);
	// stw r30,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r30.u32);
	// addi r10,r10,-23744
	ctx.r10.s64 = ctx.r10.s64 + -23744;
	// stfs f31,916(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 916, temp.u32);
	// stfs f31,920(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 920, temp.u32);
	// stb r31,924(r1)
	PPC_STORE_U8(ctx.r1.u32 + 924, ctx.r31.u8);
	// stw r10,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r10.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stw r11,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD14B0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x82e0be78
	ctx.lr = 0x82BD14B8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -176);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,952(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 952, temp.u32);
	// stfs f30,960(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 960, temp.u32);
	// stw r31,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r31.u32);
	// addi r10,r10,-23764
	ctx.r10.s64 = ctx.r10.s64 + -23764;
	// stfs f31,964(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 964, temp.u32);
	// stfs f31,968(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 968, temp.u32);
	// stb r31,972(r1)
	PPC_STORE_U8(ctx.r1.u32 + 972, ctx.r31.u8);
	// stw r10,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r10.u32);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// stw r11,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD14EC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// bl 0x82e0be78
	ctx.lr = 0x82BD14F4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -172);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1000(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1000, temp.u32);
	// stfs f30,1008(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1008, temp.u32);
	// stw r30,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r30.u32);
	// addi r10,r10,-23780
	ctx.r10.s64 = ctx.r10.s64 + -23780;
	// stfs f31,1012(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1012, temp.u32);
	// stfs f31,1016(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1016, temp.u32);
	// stb r31,1020(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1020, ctx.r31.u8);
	// stw r10,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r10.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stw r11,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1528;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1530;
	sub_82E0BE78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f29,1048(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1048, temp.u32);
	// stw r30,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r30.u32);
	// addi r11,r11,-23804
	ctx.r11.s64 = ctx.r11.s64 + -23804;
	// stfs f30,1056(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1056, temp.u32);
	// stfs f31,1060(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1060, temp.u32);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// stfs f31,1064(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1064, temp.u32);
	// stw r11,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r11.u32);
	// lwz r11,-168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -168);
	// stb r31,1068(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1068, ctx.r31.u8);
	// stw r11,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1564;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x82e0be78
	ctx.lr = 0x82BD156C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -164);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1096(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1096, temp.u32);
	// stfs f30,1104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1104, temp.u32);
	// stw r31,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r31.u32);
	// addi r10,r10,-23828
	ctx.r10.s64 = ctx.r10.s64 + -23828;
	// stfs f31,1108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1108, temp.u32);
	// stfs f31,1112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1112, temp.u32);
	// stb r31,1116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1116, ctx.r31.u8);
	// stw r10,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r10.u32);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// stw r11,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD15A0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// bl 0x82e0be78
	ctx.lr = 0x82BD15A8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -160);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1144, temp.u32);
	// stfs f30,1152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1152, temp.u32);
	// stw r30,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r30.u32);
	// addi r10,r10,-23848
	ctx.r10.s64 = ctx.r10.s64 + -23848;
	// stfs f31,1156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1156, temp.u32);
	// stfs f31,1160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1160, temp.u32);
	// stb r31,1164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1164, ctx.r31.u8);
	// stw r10,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r10.u32);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// stw r11,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD15DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1176
	ctx.r3.s64 = ctx.r1.s64 + 1176;
	// bl 0x82e0be78
	ctx.lr = 0x82BD15E4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -156);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1192, temp.u32);
	// stfs f30,1200(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1200, temp.u32);
	// stw r30,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, ctx.r30.u32);
	// addi r10,r10,-23868
	ctx.r10.s64 = ctx.r10.s64 + -23868;
	// stfs f31,1204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1204, temp.u32);
	// stfs f31,1208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1208, temp.u32);
	// stb r31,1212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1212, ctx.r31.u8);
	// stw r10,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r10.u32);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// stw r11,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1618;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1620;
	sub_82E0BE78(ctx, base);
	// lwz r11,-152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -152);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1240, temp.u32);
	// stfs f30,1248(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1248, temp.u32);
	// stw r30,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r30.u32);
	// addi r10,r10,-23892
	ctx.r10.s64 = ctx.r10.s64 + -23892;
	// stfs f31,1252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1252, temp.u32);
	// stfs f31,1256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1256, temp.u32);
	// stb r31,1260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1260, ctx.r31.u8);
	// stw r10,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r10.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// stw r11,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1654;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// bl 0x82e0be78
	ctx.lr = 0x82BD165C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -148);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1288, temp.u32);
	// stfs f30,1296(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1296, temp.u32);
	// stw r31,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r31.u32);
	// addi r10,r10,-23916
	ctx.r10.s64 = ctx.r10.s64 + -23916;
	// stfs f31,1300(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1300, temp.u32);
	// stfs f31,1304(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1304, temp.u32);
	// stb r31,1308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1308, ctx.r31.u8);
	// stw r10,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r10.u32);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// stw r11,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1690;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1698;
	sub_82E0BE78(ctx, base);
	// lwz r11,-144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -144);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f28,1336(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1336, temp.u32);
	// stw r30,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r30.u32);
	// addi r10,r10,-23932
	ctx.r10.s64 = ctx.r10.s64 + -23932;
	// stfs f30,1344(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1344, temp.u32);
	// stfs f31,1348(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1348, temp.u32);
	// stb r31,1356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1356, ctx.r31.u8);
	// stfs f31,1352(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1352, temp.u32);
	// stw r10,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, ctx.r10.u32);
	// stw r11,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r11.u32);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82e0be78
	ctx.lr = 0x82BD16CC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1368
	ctx.r3.s64 = ctx.r1.s64 + 1368;
	// bl 0x82e0be78
	ctx.lr = 0x82BD16D4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-140(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -140);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1384(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1384, temp.u32);
	// stfs f30,1392(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1392, temp.u32);
	// stw r31,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r31.u32);
	// addi r10,r10,-23956
	ctx.r10.s64 = ctx.r10.s64 + -23956;
	// stfs f31,1396(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1396, temp.u32);
	// stfs f31,1400(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1400, temp.u32);
	// stb r31,1404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1404, ctx.r31.u8);
	// stw r10,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r10.u32);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// stw r11,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1708;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1710;
	sub_82E0BE78(ctx, base);
	// lwz r11,-136(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -136);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1432(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1432, temp.u32);
	// stfs f30,1440(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1440, temp.u32);
	// stw r30,1436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1436, ctx.r30.u32);
	// addi r10,r10,-23976
	ctx.r10.s64 = ctx.r10.s64 + -23976;
	// stfs f31,1444(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1444, temp.u32);
	// stfs f31,1448(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1448, temp.u32);
	// stb r31,1452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1452, ctx.r31.u8);
	// stw r10,1428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1428, ctx.r10.u32);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// stw r11,1424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1424, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1744;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1464
	ctx.r3.s64 = ctx.r1.s64 + 1464;
	// bl 0x82e0be78
	ctx.lr = 0x82BD174C;
	sub_82E0BE78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -132);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stfs f30,1488(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1488, temp.u32);
	// stw r31,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, ctx.r31.u32);
	// addi r9,r9,-23996
	ctx.r9.s64 = ctx.r9.s64 + -23996;
	// stfs f31,1492(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1492, temp.u32);
	// stfs f31,1496(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1496, temp.u32);
	// stb r31,1500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1500, ctx.r31.u8);
	// lfs f28,4796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4796);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r9.u32);
	// stfs f28,1480(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1480, temp.u32);
	// stw r11,1472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1472, ctx.r11.u32);
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1788;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1512
	ctx.r3.s64 = ctx.r1.s64 + 1512;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1790;
	sub_82E0BE78(ctx, base);
	// lwz r11,-128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -128);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1528(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1528, temp.u32);
	// stfs f30,1536(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1536, temp.u32);
	// stw r30,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, ctx.r30.u32);
	// addi r10,r10,-24016
	ctx.r10.s64 = ctx.r10.s64 + -24016;
	// stfs f31,1540(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1540, temp.u32);
	// stfs f31,1544(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1544, temp.u32);
	// stb r31,1548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1548, ctx.r31.u8);
	// stw r10,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r10.u32);
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// stw r11,1520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1520, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD17C4;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// bl 0x82e0be78
	ctx.lr = 0x82BD17CC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f29,1576(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1576, temp.u32);
	// stfs f30,1584(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1584, temp.u32);
	// addi r10,r11,-24032
	ctx.r10.s64 = ctx.r11.s64 + -24032;
	// lwz r11,-124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -124);
	// stfs f31,1588(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1588, temp.u32);
	// stfs f31,1592(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1592, temp.u32);
	// stw r10,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r10.u32);
	// stw r30,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r30.u32);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// stb r31,1596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1596, ctx.r31.u8);
	// stw r11,1568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1568, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1800;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1608
	ctx.r3.s64 = ctx.r1.s64 + 1608;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1808;
	sub_82E0BE78(ctx, base);
	// lwz r11,-120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -120);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1624(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1624, temp.u32);
	// stfs f30,1632(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1632, temp.u32);
	// stw r30,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r30.u32);
	// addi r10,r10,-24048
	ctx.r10.s64 = ctx.r10.s64 + -24048;
	// stfs f31,1636(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1636, temp.u32);
	// stfs f31,1640(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1640, temp.u32);
	// stb r31,1644(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1644, ctx.r31.u8);
	// stw r10,1620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1620, ctx.r10.u32);
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// stw r11,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD183C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1844;
	sub_82E0BE78(ctx, base);
	// lwz r11,-116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -116);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1672(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1672, temp.u32);
	// stfs f30,1680(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1680, temp.u32);
	// stw r31,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, ctx.r31.u32);
	// addi r10,r10,-24072
	ctx.r10.s64 = ctx.r10.s64 + -24072;
	// stfs f31,1684(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1684, temp.u32);
	// stfs f31,1688(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1688, temp.u32);
	// stb r31,1692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1692, ctx.r31.u8);
	// stw r10,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r10.u32);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// stw r11,1664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1664, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1878;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1704
	ctx.r3.s64 = ctx.r1.s64 + 1704;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1880;
	sub_82E0BE78(ctx, base);
	// lwz r11,-112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -112);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1720(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1720, temp.u32);
	// stfs f30,1728(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1728, temp.u32);
	// stw r30,1724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1724, ctx.r30.u32);
	// addi r10,r10,-24096
	ctx.r10.s64 = ctx.r10.s64 + -24096;
	// stfs f31,1732(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1732, temp.u32);
	// stfs f31,1736(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1736, temp.u32);
	// stb r31,1740(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1740, ctx.r31.u8);
	// stw r10,1716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1716, ctx.r10.u32);
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// stw r11,1712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1712, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD18B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1752
	ctx.r3.s64 = ctx.r1.s64 + 1752;
	// bl 0x82e0be78
	ctx.lr = 0x82BD18BC;
	sub_82E0BE78(ctx, base);
	// lwz r11,-108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -108);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1768(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1768, temp.u32);
	// stfs f30,1776(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1776, temp.u32);
	// stw r30,1772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1772, ctx.r30.u32);
	// addi r10,r10,-24124
	ctx.r10.s64 = ctx.r10.s64 + -24124;
	// stfs f31,1780(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1780, temp.u32);
	// stfs f31,1784(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1784, temp.u32);
	// stb r31,1788(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1788, ctx.r31.u8);
	// stw r10,1764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1764, ctx.r10.u32);
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// stw r11,1760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1760, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD18F0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1800
	ctx.r3.s64 = ctx.r1.s64 + 1800;
	// bl 0x82e0be78
	ctx.lr = 0x82BD18F8;
	sub_82E0BE78(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r11,-104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -104);
	// stfs f29,1816(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1816, temp.u32);
	// addi r10,r10,-24156
	ctx.r10.s64 = ctx.r10.s64 + -24156;
	// stfs f30,1824(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1824, temp.u32);
	// stfs f31,1828(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1828, temp.u32);
	// stw r31,1820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1820, ctx.r31.u32);
	// stfs f31,1832(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1832, temp.u32);
	// stw r10,1812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1812, ctx.r10.u32);
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// stb r31,1836(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1836, ctx.r31.u8);
	// stw r11,1808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1808, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD192C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1848
	ctx.r3.s64 = ctx.r1.s64 + 1848;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1934;
	sub_82E0BE78(ctx, base);
	// lwz r11,-88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -88);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1864(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1864, temp.u32);
	// stfs f30,1872(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1872, temp.u32);
	// stw r30,1868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1868, ctx.r30.u32);
	// addi r10,r10,-24176
	ctx.r10.s64 = ctx.r10.s64 + -24176;
	// stfs f31,1876(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1876, temp.u32);
	// stfs f31,1880(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1880, temp.u32);
	// stb r31,1884(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1884, ctx.r31.u8);
	// stw r10,1860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1860, ctx.r10.u32);
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// stw r11,1856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1856, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1968;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1896
	ctx.r3.s64 = ctx.r1.s64 + 1896;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1970;
	sub_82E0BE78(ctx, base);
	// lwz r11,-84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -84);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1912(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1912, temp.u32);
	// stfs f30,1920(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1920, temp.u32);
	// stw r31,1916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1916, ctx.r31.u32);
	// addi r10,r10,-24208
	ctx.r10.s64 = ctx.r10.s64 + -24208;
	// stfs f31,1924(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1924, temp.u32);
	// stfs f31,1928(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1928, temp.u32);
	// stb r31,1932(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1932, ctx.r31.u8);
	// stw r10,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r10.u32);
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// stw r11,1904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1904, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD19A4;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1944
	ctx.r3.s64 = ctx.r1.s64 + 1944;
	// bl 0x82e0be78
	ctx.lr = 0x82BD19AC;
	sub_82E0BE78(ctx, base);
	// lwz r11,-80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -80);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1960(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1960, temp.u32);
	// stfs f30,1968(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1968, temp.u32);
	// stw r30,1964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1964, ctx.r30.u32);
	// addi r10,r10,-24232
	ctx.r10.s64 = ctx.r10.s64 + -24232;
	// stfs f31,1972(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1972, temp.u32);
	// stfs f31,1976(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1976, temp.u32);
	// stb r31,1980(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1980, ctx.r31.u8);
	// stw r10,1956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1956, ctx.r10.u32);
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// stw r11,1952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1952, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD19E0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1992
	ctx.r3.s64 = ctx.r1.s64 + 1992;
	// bl 0x82e0be78
	ctx.lr = 0x82BD19E8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -96);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f28,2008(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2008, temp.u32);
	// stfs f30,2016(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2016, temp.u32);
	// stw r31,2012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2012, ctx.r31.u32);
	// addi r10,r10,-24256
	ctx.r10.s64 = ctx.r10.s64 + -24256;
	// stfs f31,2020(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2020, temp.u32);
	// stfs f31,2024(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2024, temp.u32);
	// stb r31,2028(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2028, ctx.r31.u8);
	// stw r10,2004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2004, ctx.r10.u32);
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// stw r11,2000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2000, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1A1C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2040
	ctx.r3.s64 = ctx.r1.s64 + 2040;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1A24;
	sub_82E0BE78(ctx, base);
	// lwz r11,-92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -92);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2056(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2056, temp.u32);
	// stfs f30,2064(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2064, temp.u32);
	// stw r30,2060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2060, ctx.r30.u32);
	// addi r10,r10,-24280
	ctx.r10.s64 = ctx.r10.s64 + -24280;
	// stfs f31,2068(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2068, temp.u32);
	// stfs f31,2072(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2072, temp.u32);
	// stb r31,2076(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2076, ctx.r31.u8);
	// stw r10,2052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2052, ctx.r10.u32);
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// stw r11,2048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2048, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1A58;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2088
	ctx.r3.s64 = ctx.r1.s64 + 2088;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1A60;
	sub_82E0BE78(ctx, base);
	// stfs f29,2104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2104, temp.u32);
	// lwz r11,-76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -76);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f30,2112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2112, temp.u32);
	// stw r31,2108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2108, ctx.r31.u32);
	// addi r10,r10,-24300
	ctx.r10.s64 = ctx.r10.s64 + -24300;
	// stfs f31,2116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2116, temp.u32);
	// stfs f31,2120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2120, temp.u32);
	// stb r31,2124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2124, ctx.r31.u8);
	// stw r10,2100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2100, ctx.r10.u32);
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// stw r11,2096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2096, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1A94;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2136
	ctx.r3.s64 = ctx.r1.s64 + 2136;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1A9C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -72);
	// stfs f29,2152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2152, temp.u32);
	// stw r30,2156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2156, ctx.r30.u32);
	// stfs f30,2160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2160, temp.u32);
	// stw r26,2148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2148, ctx.r26.u32);
	// stfs f31,2164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2164, temp.u32);
	// stb r31,2172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2172, ctx.r31.u8);
	// stfs f31,2168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2168, temp.u32);
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// stw r11,2144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1AC8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2184
	ctx.r3.s64 = ctx.r1.s64 + 2184;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1AD0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -68);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2200, temp.u32);
	// stfs f30,2208(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2208, temp.u32);
	// stw r30,2204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2204, ctx.r30.u32);
	// addi r10,r10,-24328
	ctx.r10.s64 = ctx.r10.s64 + -24328;
	// stfs f31,2212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2212, temp.u32);
	// stfs f31,2216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2216, temp.u32);
	// stb r31,2220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2220, ctx.r31.u8);
	// stw r10,2196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2196, ctx.r10.u32);
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// stw r11,2192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1B04;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2232
	ctx.r3.s64 = ctx.r1.s64 + 2232;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1B0C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -64);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2248(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2248, temp.u32);
	// stfs f30,2256(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2256, temp.u32);
	// stw r31,2252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2252, ctx.r31.u32);
	// addi r10,r10,-24356
	ctx.r10.s64 = ctx.r10.s64 + -24356;
	// stfs f31,2260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2260, temp.u32);
	// stfs f31,2264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2264, temp.u32);
	// stb r31,2268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2268, ctx.r31.u8);
	// stw r10,2244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2244, ctx.r10.u32);
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// stw r11,2240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1B40;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2280
	ctx.r3.s64 = ctx.r1.s64 + 2280;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1B48;
	sub_82E0BE78(ctx, base);
	// lwz r11,-60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -60);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2296(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2296, temp.u32);
	// stfs f30,2304(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2304, temp.u32);
	// stw r30,2300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2300, ctx.r30.u32);
	// addi r10,r10,-24376
	ctx.r10.s64 = ctx.r10.s64 + -24376;
	// stfs f31,2308(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2308, temp.u32);
	// stfs f31,2312(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2312, temp.u32);
	// stb r31,2316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2316, ctx.r31.u8);
	// stw r10,2292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2292, ctx.r10.u32);
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// stw r11,2288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1B7C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2328
	ctx.r3.s64 = ctx.r1.s64 + 2328;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1B84;
	sub_82E0BE78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f29,2344(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2344, temp.u32);
	// stw r31,2348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2348, ctx.r31.u32);
	// addi r11,r11,-24400
	ctx.r11.s64 = ctx.r11.s64 + -24400;
	// stfs f30,2352(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2352, temp.u32);
	// stfs f31,2356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2356, temp.u32);
	// addi r3,r1,2368
	ctx.r3.s64 = ctx.r1.s64 + 2368;
	// stfs f31,2360(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2360, temp.u32);
	// stw r11,2340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2340, ctx.r11.u32);
	// lwz r11,-56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -56);
	// stb r31,2364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2364, ctx.r31.u8);
	// stw r11,2336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2336, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1BB8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2376
	ctx.r3.s64 = ctx.r1.s64 + 2376;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1BC0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -52);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2392(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2392, temp.u32);
	// stfs f30,2400(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2400, temp.u32);
	// stw r30,2396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2396, ctx.r30.u32);
	// addi r10,r10,-24420
	ctx.r10.s64 = ctx.r10.s64 + -24420;
	// stfs f31,2404(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2404, temp.u32);
	// stfs f31,2408(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2408, temp.u32);
	// stb r31,2412(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2412, ctx.r31.u8);
	// stw r10,2388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2388, ctx.r10.u32);
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// stw r11,2384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2384, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1BF4;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2424
	ctx.r3.s64 = ctx.r1.s64 + 2424;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1BFC;
	sub_82E0BE78(ctx, base);
	// lwz r11,-48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -48);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2440(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2440, temp.u32);
	// stfs f30,2448(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2448, temp.u32);
	// stw r30,2444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2444, ctx.r30.u32);
	// addi r10,r10,-24444
	ctx.r10.s64 = ctx.r10.s64 + -24444;
	// stfs f31,2452(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2452, temp.u32);
	// stfs f31,2456(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2456, temp.u32);
	// stb r31,2460(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2460, ctx.r31.u8);
	// stw r10,2436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2436, ctx.r10.u32);
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// stw r11,2432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2432, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1C30;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2472
	ctx.r3.s64 = ctx.r1.s64 + 2472;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1C38;
	sub_82E0BE78(ctx, base);
	// lwz r11,-44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -44);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2488(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2488, temp.u32);
	// stfs f30,2496(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2496, temp.u32);
	// stw r30,2492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2492, ctx.r30.u32);
	// addi r10,r10,-24468
	ctx.r10.s64 = ctx.r10.s64 + -24468;
	// stfs f31,2500(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2500, temp.u32);
	// stfs f31,2504(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2504, temp.u32);
	// stb r31,2508(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2508, ctx.r31.u8);
	// stw r10,2484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2484, ctx.r10.u32);
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// stw r11,2480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2480, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1C6C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2520
	ctx.r3.s64 = ctx.r1.s64 + 2520;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1C74;
	sub_82E0BE78(ctx, base);
	// lwz r11,-40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -40);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2536(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2536, temp.u32);
	// stfs f30,2544(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2544, temp.u32);
	// stw r31,2540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2540, ctx.r31.u32);
	// addi r10,r10,-24496
	ctx.r10.s64 = ctx.r10.s64 + -24496;
	// stfs f31,2548(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2548, temp.u32);
	// stfs f31,2552(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2552, temp.u32);
	// stb r31,2556(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2556, ctx.r31.u8);
	// stw r10,2532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2532, ctx.r10.u32);
	// addi r3,r1,2560
	ctx.r3.s64 = ctx.r1.s64 + 2560;
	// stw r11,2528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2528, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1CA8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2568
	ctx.r3.s64 = ctx.r1.s64 + 2568;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1CB0;
	sub_82E0BE78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -36);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stfs f30,2592(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2592, temp.u32);
	// stw r30,2588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2588, ctx.r30.u32);
	// addi r9,r9,-24512
	ctx.r9.s64 = ctx.r9.s64 + -24512;
	// stfs f31,2596(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2596, temp.u32);
	// stfs f31,2600(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2600, temp.u32);
	// stb r31,2604(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2604, ctx.r31.u8);
	// lfs f28,6636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6636);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,2580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2580, ctx.r9.u32);
	// stfs f28,2584(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2584, temp.u32);
	// stw r11,2576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2576, ctx.r11.u32);
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1CEC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2616
	ctx.r3.s64 = ctx.r1.s64 + 2616;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1CF4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2632(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2632, temp.u32);
	// stfs f30,2640(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2640, temp.u32);
	// stw r30,2636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2636, ctx.r30.u32);
	// addi r10,r10,-24536
	ctx.r10.s64 = ctx.r10.s64 + -24536;
	// stfs f31,2644(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2644, temp.u32);
	// stfs f31,2648(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2648, temp.u32);
	// stb r31,2652(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2652, ctx.r31.u8);
	// stw r10,2628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2628, ctx.r10.u32);
	// addi r3,r1,2656
	ctx.r3.s64 = ctx.r1.s64 + 2656;
	// stw r11,2624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2624, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1D28;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2664
	ctx.r3.s64 = ctx.r1.s64 + 2664;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1D30;
	sub_82E0BE78(ctx, base);
	// lwz r11,-28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2680(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2680, temp.u32);
	// stfs f30,2688(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2688, temp.u32);
	// stw r31,2684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2684, ctx.r31.u32);
	// addi r10,r10,-24564
	ctx.r10.s64 = ctx.r10.s64 + -24564;
	// stfs f31,2692(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2692, temp.u32);
	// stfs f31,2696(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2696, temp.u32);
	// stb r31,2700(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2700, ctx.r31.u8);
	// stw r10,2676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2676, ctx.r10.u32);
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// stw r11,2672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2672, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1D64;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2712
	ctx.r3.s64 = ctx.r1.s64 + 2712;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1D6C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f28,2728(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2728, temp.u32);
	// stfs f30,2736(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2736, temp.u32);
	// stw r30,2732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2732, ctx.r30.u32);
	// addi r10,r10,-24580
	ctx.r10.s64 = ctx.r10.s64 + -24580;
	// stfs f31,2740(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2740, temp.u32);
	// stfs f31,2744(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2744, temp.u32);
	// stb r31,2748(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2748, ctx.r31.u8);
	// stw r10,2724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2724, ctx.r10.u32);
	// addi r3,r1,2752
	ctx.r3.s64 = ctx.r1.s64 + 2752;
	// stw r11,2720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2720, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1DA0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2760
	ctx.r3.s64 = ctx.r1.s64 + 2760;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1DA8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -20);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2776(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2776, temp.u32);
	// stfs f30,2784(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2784, temp.u32);
	// stw r30,2780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2780, ctx.r30.u32);
	// addi r10,r10,-24604
	ctx.r10.s64 = ctx.r10.s64 + -24604;
	// stfs f31,2788(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2788, temp.u32);
	// stfs f31,2792(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2792, temp.u32);
	// stb r31,2796(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2796, ctx.r31.u8);
	// stw r11,2768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2768, ctx.r11.u32);
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// stw r10,2772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2772, ctx.r10.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1DDC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2808
	ctx.r3.s64 = ctx.r1.s64 + 2808;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1DE4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2824(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2824, temp.u32);
	// stfs f30,2832(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2832, temp.u32);
	// stw r31,2828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2828, ctx.r31.u32);
	// addi r10,r10,-24632
	ctx.r10.s64 = ctx.r10.s64 + -24632;
	// stfs f31,2836(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2836, temp.u32);
	// stfs f31,2840(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2840, temp.u32);
	// stb r31,2844(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2844, ctx.r31.u8);
	// stw r10,2820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2820, ctx.r10.u32);
	// addi r3,r1,2848
	ctx.r3.s64 = ctx.r1.s64 + 2848;
	// stw r11,2816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2816, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1E18;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2856
	ctx.r3.s64 = ctx.r1.s64 + 2856;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1E20;
	sub_82E0BE78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f28,2872(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2872, temp.u32);
	// stfs f30,2880(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2880, temp.u32);
	// addi r10,r11,-24648
	ctx.r10.s64 = ctx.r11.s64 + -24648;
	// lwz r11,-12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	// stfs f31,2884(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2884, temp.u32);
	// stfs f31,2888(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2888, temp.u32);
	// stw r30,2876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2876, ctx.r30.u32);
	// stw r10,2868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2868, ctx.r10.u32);
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// stb r31,2892(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2892, ctx.r31.u8);
	// stw r11,2864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2864, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1E54;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2904
	ctx.r3.s64 = ctx.r1.s64 + 2904;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1E5C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2920(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2920, temp.u32);
	// stfs f30,2928(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2928, temp.u32);
	// stw r30,2924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2924, ctx.r30.u32);
	// addi r10,r10,-24676
	ctx.r10.s64 = ctx.r10.s64 + -24676;
	// stfs f31,2932(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2932, temp.u32);
	// stfs f31,2936(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2936, temp.u32);
	// stb r31,2940(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2940, ctx.r31.u8);
	// stw r10,2916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2916, ctx.r10.u32);
	// addi r3,r1,2944
	ctx.r3.s64 = ctx.r1.s64 + 2944;
	// stw r11,2912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2912, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1E90;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2952
	ctx.r3.s64 = ctx.r1.s64 + 2952;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1E98;
	sub_82E0BE78(ctx, base);
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2968(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2968, temp.u32);
	// stfs f30,2976(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2976, temp.u32);
	// stw r30,2972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2972, ctx.r30.u32);
	// addi r10,r10,-24700
	ctx.r10.s64 = ctx.r10.s64 + -24700;
	// stfs f31,2980(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2980, temp.u32);
	// stfs f31,2984(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2984, temp.u32);
	// stb r31,2988(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2988, ctx.r31.u8);
	// stw r10,2964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2964, ctx.r10.u32);
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// stw r11,2960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2960, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1ECC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,3000
	ctx.r3.s64 = ctx.r1.s64 + 3000;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1ED4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-19984(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19984);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,3016(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3016, temp.u32);
	// stfs f30,3024(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3024, temp.u32);
	// stw r31,3020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3020, ctx.r31.u32);
	// addi r10,r10,-24728
	ctx.r10.s64 = ctx.r10.s64 + -24728;
	// stfs f31,3028(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3028, temp.u32);
	// stfs f31,3032(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3032, temp.u32);
	// stb r31,3036(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3036, ctx.r31.u8);
	// stw r10,3012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3012, ctx.r10.u32);
	// addi r3,r1,3040
	ctx.r3.s64 = ctx.r1.s64 + 3040;
	// stw r11,3008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3008, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD1F08;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,3048
	ctx.r3.s64 = ctx.r1.s64 + 3048;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1F10;
	sub_82E0BE78(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0c3b8
	ctx.lr = 0x82BD1F24;
	sub_82D0C3B8(ctx, base);
	// addi r1,r1,3152
	ctx.r1.s64 = ctx.r1.s64 + 3152;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x833a1940
	ctx.lr = 0x82BD1F30;
	__restfpr_27(ctx, base);
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1F34"))) PPC_WEAK_FUNC(sub_82BD1F34);
PPC_FUNC_IMPL(__imp__sub_82BD1F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1F38"))) PPC_WEAK_FUNC(sub_82BD1F38);
PPC_FUNC_IMPL(__imp__sub_82BD1F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x82BD1F40;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x833a18f4
	ctx.lr = 0x82BD1F48;
	__savefpr_27(ctx, base);
	// stwu r1,-3264(r1)
	ea = -3264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31882
	ctx.r28.s64 = -2089418752;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r28,-19968
	ctx.r27.s64 = ctx.r28.s64 + -19968;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lfs f29,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f29.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -264);
	// addi r8,r8,-21888
	ctx.r8.s64 = ctx.r8.s64 + -21888;
	// lfs f30,24284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lfs f31,2780(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1FA8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1FB0;
	sub_82E0BE78(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,-260(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -260);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r30,1
	ctx.r30.s64 = 1;
	// stfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r26,r9,-21908
	ctx.r26.s64 = ctx.r9.s64 + -21908;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lfs f28,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	ctx.f28.f64 = double(temp.f32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stfs f28,136(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1FF0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e0be78
	ctx.lr = 0x82BD1FF8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -256);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r10,r10,-21932
	ctx.r10.s64 = ctx.r10.s64 + -21932;
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD202C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2034;
	sub_82E0BE78(ctx, base);
	// lwz r11,-252(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -252);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f30,240(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// addi r10,r10,-21956
	ctx.r10.s64 = ctx.r10.s64 + -21956;
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2068;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2070;
	sub_82E0BE78(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r11,-248(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -248);
	// stfs f29,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f30,288(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// addi r10,r10,-21984
	ctx.r10.s64 = ctx.r10.s64 + -21984;
	// stfs f31,292(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stfs f31,296(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD20A4;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82e0be78
	ctx.lr = 0x82BD20AC;
	sub_82E0BE78(ctx, base);
	// lwz r11,-244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -244);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f30,336(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// addi r10,r10,-22008
	ctx.r10.s64 = ctx.r10.s64 + -22008;
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stb r31,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, ctx.r31.u8);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD20E0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82e0be78
	ctx.lr = 0x82BD20E8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-240(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -240);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,376(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f30,384(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// addi r10,r10,-22036
	ctx.r10.s64 = ctx.r10.s64 + -22036;
	// stfs f31,388(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f31,392(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stb r31,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r31.u8);
	// stw r10,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r10.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD211C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2124;
	sub_82E0BE78(ctx, base);
	// lwz r11,-236(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -236);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,424(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f30,432(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r10,r10,-22064
	ctx.r10.s64 = ctx.r10.s64 + -22064;
	// stfs f31,436(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f31,440(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stb r31,444(r1)
	PPC_STORE_U8(ctx.r1.u32 + 444, ctx.r31.u8);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2158;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2160;
	sub_82E0BE78(ctx, base);
	// lwz r11,-232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -232);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,472(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f30,480(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stw r30,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r30.u32);
	// addi r10,r10,-22088
	ctx.r10.s64 = ctx.r10.s64 + -22088;
	// stfs f31,484(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f31,488(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stb r31,492(r1)
	PPC_STORE_U8(ctx.r1.u32 + 492, ctx.r31.u8);
	// stw r10,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r10.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r11,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2194;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x82e0be78
	ctx.lr = 0x82BD219C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -228);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,520(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stfs f30,528(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stw r30,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r30.u32);
	// addi r10,r10,-22112
	ctx.r10.s64 = ctx.r10.s64 + -22112;
	// stfs f31,532(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f31,536(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stb r31,540(r1)
	PPC_STORE_U8(ctx.r1.u32 + 540, ctx.r31.u8);
	// stw r10,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r10.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD21D0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82e0be78
	ctx.lr = 0x82BD21D8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -224);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,568(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stfs f30,576(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// stw r31,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r31.u32);
	// addi r10,r10,-22140
	ctx.r10.s64 = ctx.r10.s64 + -22140;
	// stfs f31,580(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// stfs f31,584(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// stb r31,588(r1)
	PPC_STORE_U8(ctx.r1.u32 + 588, ctx.r31.u8);
	// stw r10,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r10.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD220C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2214;
	sub_82E0BE78(ctx, base);
	// lwz r11,-220(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -220);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,616(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stfs f30,624(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// stw r30,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r30.u32);
	// addi r10,r10,-22156
	ctx.r10.s64 = ctx.r10.s64 + -22156;
	// stfs f31,628(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// stfs f31,632(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stb r31,636(r1)
	PPC_STORE_U8(ctx.r1.u32 + 636, ctx.r31.u8);
	// stw r10,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r10.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r11,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2248;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2250;
	sub_82E0BE78(ctx, base);
	// lwz r11,-216(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -216);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,664(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 664, temp.u32);
	// stfs f30,672(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// stw r31,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r31.u32);
	// addi r10,r10,-22176
	ctx.r10.s64 = ctx.r10.s64 + -22176;
	// stfs f31,676(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// stfs f31,680(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stb r31,684(r1)
	PPC_STORE_U8(ctx.r1.u32 + 684, ctx.r31.u8);
	// stw r10,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r10.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2284;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x82e0be78
	ctx.lr = 0x82BD228C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -212);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,712(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// stfs f30,720(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 720, temp.u32);
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// addi r10,r10,-22200
	ctx.r10.s64 = ctx.r10.s64 + -22200;
	// stfs f31,724(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 724, temp.u32);
	// stfs f31,728(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 728, temp.u32);
	// stb r31,732(r1)
	PPC_STORE_U8(ctx.r1.u32 + 732, ctx.r31.u8);
	// stw r10,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r10.u32);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r11,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD22C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x82e0be78
	ctx.lr = 0x82BD22C8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-208(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -208);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,760(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 760, temp.u32);
	// stfs f30,768(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 768, temp.u32);
	// stw r30,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r30.u32);
	// addi r10,r10,-22224
	ctx.r10.s64 = ctx.r10.s64 + -22224;
	// stfs f31,772(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 772, temp.u32);
	// stfs f31,776(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 776, temp.u32);
	// stb r31,780(r1)
	PPC_STORE_U8(ctx.r1.u32 + 780, ctx.r31.u8);
	// stw r10,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r10.u32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD22FC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2304;
	sub_82E0BE78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f29,808(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 808, temp.u32);
	// stfs f30,816(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 816, temp.u32);
	// addi r10,r11,-22244
	ctx.r10.s64 = ctx.r11.s64 + -22244;
	// stfs f31,820(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 820, temp.u32);
	// lwz r11,-204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -204);
	// stfs f31,824(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 824, temp.u32);
	// stw r30,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r30.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stw r10,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r10.u32);
	// stb r31,828(r1)
	PPC_STORE_U8(ctx.r1.u32 + 828, ctx.r31.u8);
	// stw r11,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2338;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2340;
	sub_82E0BE78(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,-200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -200);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stfs f30,864(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 864, temp.u32);
	// stw r30,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r30.u32);
	// addi r25,r9,-22268
	ctx.r25.s64 = ctx.r9.s64 + -22268;
	// stfs f31,868(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 868, temp.u32);
	// stfs f31,872(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 872, temp.u32);
	// stb r31,876(r1)
	PPC_STORE_U8(ctx.r1.u32 + 876, ctx.r31.u8);
	// lfs f27,8960(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8960);
	ctx.f27.f64 = double(temp.f32);
	// stw r25,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r25.u32);
	// stfs f27,856(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 856, temp.u32);
	// stw r11,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r11.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82e0be78
	ctx.lr = 0x82BD237C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2384;
	sub_82E0BE78(ctx, base);
	// lwz r11,-196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -196);
	// stfs f27,904(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 904, temp.u32);
	// stw r30,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r30.u32);
	// stfs f30,912(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 912, temp.u32);
	// stw r25,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r25.u32);
	// stfs f31,916(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 916, temp.u32);
	// stb r31,924(r1)
	PPC_STORE_U8(ctx.r1.u32 + 924, ctx.r31.u8);
	// stfs f31,920(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 920, temp.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stw r11,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD23B0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x82e0be78
	ctx.lr = 0x82BD23B8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-192(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -192);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,952(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 952, temp.u32);
	// stfs f30,960(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 960, temp.u32);
	// stw r31,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r31.u32);
	// addi r10,r10,-22292
	ctx.r10.s64 = ctx.r10.s64 + -22292;
	// stfs f31,964(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 964, temp.u32);
	// stfs f31,968(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 968, temp.u32);
	// stb r31,972(r1)
	PPC_STORE_U8(ctx.r1.u32 + 972, ctx.r31.u8);
	// stw r10,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r10.u32);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// stw r11,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD23EC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// bl 0x82e0be78
	ctx.lr = 0x82BD23F4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -188);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1000(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1000, temp.u32);
	// stfs f30,1008(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1008, temp.u32);
	// stw r30,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r30.u32);
	// addi r10,r10,-22312
	ctx.r10.s64 = ctx.r10.s64 + -22312;
	// stfs f31,1012(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1012, temp.u32);
	// stfs f31,1016(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1016, temp.u32);
	// stb r31,1020(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1020, ctx.r31.u8);
	// stw r10,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r10.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stw r11,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2428;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2430;
	sub_82E0BE78(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r11,-184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -184);
	// stfs f29,1048(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1048, temp.u32);
	// addi r10,r10,-22336
	ctx.r10.s64 = ctx.r10.s64 + -22336;
	// stfs f30,1056(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1056, temp.u32);
	// stfs f31,1060(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1060, temp.u32);
	// stw r30,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r30.u32);
	// stfs f31,1064(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1064, temp.u32);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// stw r10,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r10.u32);
	// stb r31,1068(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1068, ctx.r31.u8);
	// stw r11,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2464;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x82e0be78
	ctx.lr = 0x82BD246C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -180);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1096(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1096, temp.u32);
	// stfs f30,1104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1104, temp.u32);
	// stw r31,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r31.u32);
	// addi r10,r10,-22364
	ctx.r10.s64 = ctx.r10.s64 + -22364;
	// stfs f31,1108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1108, temp.u32);
	// stfs f31,1112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1112, temp.u32);
	// stb r31,1116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1116, ctx.r31.u8);
	// stw r10,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r10.u32);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// stw r11,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD24A0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// bl 0x82e0be78
	ctx.lr = 0x82BD24A8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -176);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1144, temp.u32);
	// stfs f30,1152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1152, temp.u32);
	// stw r30,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r30.u32);
	// addi r10,r10,-22384
	ctx.r10.s64 = ctx.r10.s64 + -22384;
	// stfs f31,1156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1156, temp.u32);
	// stfs f31,1160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1160, temp.u32);
	// stb r31,1164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1164, ctx.r31.u8);
	// stw r10,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r10.u32);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// stw r11,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD24DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1176
	ctx.r3.s64 = ctx.r1.s64 + 1176;
	// bl 0x82e0be78
	ctx.lr = 0x82BD24E4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -172);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1192, temp.u32);
	// stfs f30,1200(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1200, temp.u32);
	// stw r30,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, ctx.r30.u32);
	// addi r10,r10,-22404
	ctx.r10.s64 = ctx.r10.s64 + -22404;
	// stfs f31,1204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1204, temp.u32);
	// stfs f31,1208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1208, temp.u32);
	// stb r31,1212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1212, ctx.r31.u8);
	// stw r10,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r10.u32);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// stw r11,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2518;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2520;
	sub_82E0BE78(ctx, base);
	// lwz r11,-168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -168);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1240, temp.u32);
	// stfs f30,1248(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1248, temp.u32);
	// stw r30,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r30.u32);
	// addi r10,r10,-22428
	ctx.r10.s64 = ctx.r10.s64 + -22428;
	// stfs f31,1252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1252, temp.u32);
	// stfs f31,1256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1256, temp.u32);
	// stb r31,1260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1260, ctx.r31.u8);
	// stw r10,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r10.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// stw r11,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2554;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// bl 0x82e0be78
	ctx.lr = 0x82BD255C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -164);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1288, temp.u32);
	// stfs f30,1296(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1296, temp.u32);
	// stw r31,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r31.u32);
	// addi r10,r10,-22456
	ctx.r10.s64 = ctx.r10.s64 + -22456;
	// stfs f31,1300(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1300, temp.u32);
	// stfs f31,1304(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1304, temp.u32);
	// stb r31,1308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1308, ctx.r31.u8);
	// stw r10,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r10.u32);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// stw r11,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2590;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2598;
	sub_82E0BE78(ctx, base);
	// stfs f28,1336(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1336, temp.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,-22472
	ctx.r10.s64 = ctx.r11.s64 + -22472;
	// lwz r11,-160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -160);
	// stfs f30,1344(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1344, temp.u32);
	// stw r30,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r30.u32);
	// stfs f31,1348(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1348, temp.u32);
	// stw r10,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, ctx.r10.u32);
	// stfs f31,1352(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1352, temp.u32);
	// stb r31,1356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1356, ctx.r31.u8);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// stw r11,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD25CC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1368
	ctx.r3.s64 = ctx.r1.s64 + 1368;
	// bl 0x82e0be78
	ctx.lr = 0x82BD25D4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -156);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1384(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1384, temp.u32);
	// stfs f30,1392(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1392, temp.u32);
	// stw r31,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r31.u32);
	// addi r10,r10,-22500
	ctx.r10.s64 = ctx.r10.s64 + -22500;
	// stfs f31,1396(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1396, temp.u32);
	// stfs f31,1400(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1400, temp.u32);
	// stb r31,1404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1404, ctx.r31.u8);
	// stw r10,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r10.u32);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// stw r11,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2608;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2610;
	sub_82E0BE78(ctx, base);
	// lwz r11,-152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -152);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1432(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1432, temp.u32);
	// stfs f30,1440(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1440, temp.u32);
	// stw r30,1436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1436, ctx.r30.u32);
	// addi r10,r10,-22520
	ctx.r10.s64 = ctx.r10.s64 + -22520;
	// stfs f31,1444(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1444, temp.u32);
	// stfs f31,1448(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1448, temp.u32);
	// stb r31,1452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1452, ctx.r31.u8);
	// stw r10,1428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1428, ctx.r10.u32);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// stw r11,1424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1424, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2644;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1464
	ctx.r3.s64 = ctx.r1.s64 + 1464;
	// bl 0x82e0be78
	ctx.lr = 0x82BD264C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -148);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1480(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1480, temp.u32);
	// stfs f30,1488(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1488, temp.u32);
	// stw r31,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, ctx.r31.u32);
	// addi r10,r10,-22540
	ctx.r10.s64 = ctx.r10.s64 + -22540;
	// stfs f31,1492(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1492, temp.u32);
	// stfs f31,1496(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1496, temp.u32);
	// stb r31,1500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1500, ctx.r31.u8);
	// stw r10,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r10.u32);
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// stw r11,1472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1472, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2680;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1512
	ctx.r3.s64 = ctx.r1.s64 + 1512;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2688;
	sub_82E0BE78(ctx, base);
	// lwz r11,-144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -144);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1528(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1528, temp.u32);
	// stfs f30,1536(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1536, temp.u32);
	// stw r30,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, ctx.r30.u32);
	// addi r10,r10,-22560
	ctx.r10.s64 = ctx.r10.s64 + -22560;
	// stfs f31,1540(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1540, temp.u32);
	// stfs f31,1544(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1544, temp.u32);
	// stb r31,1548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1548, ctx.r31.u8);
	// stw r10,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r10.u32);
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// stw r11,1520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1520, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD26BC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// bl 0x82e0be78
	ctx.lr = 0x82BD26C4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f29,1576(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1576, temp.u32);
	// stw r30,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r30.u32);
	// stfs f30,1584(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1584, temp.u32);
	// addi r11,r11,-22576
	ctx.r11.s64 = ctx.r11.s64 + -22576;
	// stfs f31,1588(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1588, temp.u32);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// stfs f31,1592(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1592, temp.u32);
	// stw r11,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// lwz r11,-140(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -140);
	// stb r31,1596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1596, ctx.r31.u8);
	// stw r11,1568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1568, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD26F8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1608
	ctx.r3.s64 = ctx.r1.s64 + 1608;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2700;
	sub_82E0BE78(ctx, base);
	// lwz r11,-136(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -136);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1624(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1624, temp.u32);
	// stfs f30,1632(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1632, temp.u32);
	// stw r30,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r30.u32);
	// addi r10,r10,-22592
	ctx.r10.s64 = ctx.r10.s64 + -22592;
	// stfs f31,1636(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1636, temp.u32);
	// stfs f31,1640(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1640, temp.u32);
	// stb r31,1644(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1644, ctx.r31.u8);
	// stw r10,1620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1620, ctx.r10.u32);
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// stw r11,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2734;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// bl 0x82e0be78
	ctx.lr = 0x82BD273C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -132);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1672(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1672, temp.u32);
	// stfs f30,1680(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1680, temp.u32);
	// stw r31,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, ctx.r31.u32);
	// addi r10,r10,-22620
	ctx.r10.s64 = ctx.r10.s64 + -22620;
	// stfs f31,1684(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1684, temp.u32);
	// stfs f31,1688(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1688, temp.u32);
	// stb r31,1692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1692, ctx.r31.u8);
	// stw r10,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r10.u32);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// stw r11,1664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1664, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2770;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1704
	ctx.r3.s64 = ctx.r1.s64 + 1704;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2778;
	sub_82E0BE78(ctx, base);
	// lwz r11,-128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -128);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1720(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1720, temp.u32);
	// stfs f30,1728(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1728, temp.u32);
	// stw r30,1724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1724, ctx.r30.u32);
	// addi r10,r10,-22644
	ctx.r10.s64 = ctx.r10.s64 + -22644;
	// stfs f31,1732(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1732, temp.u32);
	// stfs f31,1736(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1736, temp.u32);
	// stb r31,1740(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1740, ctx.r31.u8);
	// stw r10,1716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1716, ctx.r10.u32);
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// stw r11,1712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1712, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD27AC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1752
	ctx.r3.s64 = ctx.r1.s64 + 1752;
	// bl 0x82e0be78
	ctx.lr = 0x82BD27B4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -124);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1768(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1768, temp.u32);
	// stfs f30,1776(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1776, temp.u32);
	// stw r30,1772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1772, ctx.r30.u32);
	// addi r10,r10,-22672
	ctx.r10.s64 = ctx.r10.s64 + -22672;
	// stfs f31,1780(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1780, temp.u32);
	// stfs f31,1784(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1784, temp.u32);
	// stb r31,1788(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1788, ctx.r31.u8);
	// stw r10,1764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1764, ctx.r10.u32);
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// stw r11,1760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1760, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD27E8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1800
	ctx.r3.s64 = ctx.r1.s64 + 1800;
	// bl 0x82e0be78
	ctx.lr = 0x82BD27F0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -120);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1816(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1816, temp.u32);
	// stfs f30,1824(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1824, temp.u32);
	// stw r31,1820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1820, ctx.r31.u32);
	// addi r10,r10,-22704
	ctx.r10.s64 = ctx.r10.s64 + -22704;
	// stfs f31,1828(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1828, temp.u32);
	// stfs f31,1832(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1832, temp.u32);
	// stb r31,1836(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1836, ctx.r31.u8);
	// stw r10,1812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1812, ctx.r10.u32);
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// stw r11,1808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1808, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2824;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1848
	ctx.r3.s64 = ctx.r1.s64 + 1848;
	// bl 0x82e0be78
	ctx.lr = 0x82BD282C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -116);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1864(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1864, temp.u32);
	// stfs f30,1872(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1872, temp.u32);
	// stw r30,1868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1868, ctx.r30.u32);
	// addi r25,r10,-22732
	ctx.r25.s64 = ctx.r10.s64 + -22732;
	// stfs f31,1876(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1876, temp.u32);
	// stfs f31,1880(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1880, temp.u32);
	// stb r31,1884(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1884, ctx.r31.u8);
	// stw r25,1860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1860, ctx.r25.u32);
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// stw r11,1856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1856, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2860;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1896
	ctx.r3.s64 = ctx.r1.s64 + 1896;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2868;
	sub_82E0BE78(ctx, base);
	// lwz r11,-112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -112);
	// stfs f29,1912(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1912, temp.u32);
	// stw r30,1916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1916, ctx.r30.u32);
	// stfs f30,1920(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1920, temp.u32);
	// stw r25,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r25.u32);
	// stfs f31,1924(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1924, temp.u32);
	// stb r31,1932(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1932, ctx.r31.u8);
	// stfs f31,1928(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1928, temp.u32);
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// stw r11,1904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1904, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2894;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1944
	ctx.r3.s64 = ctx.r1.s64 + 1944;
	// bl 0x82e0be78
	ctx.lr = 0x82BD289C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -108);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,1960(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1960, temp.u32);
	// stfs f30,1968(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1968, temp.u32);
	// stw r30,1964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1964, ctx.r30.u32);
	// addi r10,r10,-22760
	ctx.r10.s64 = ctx.r10.s64 + -22760;
	// stfs f31,1972(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1972, temp.u32);
	// stfs f31,1976(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1976, temp.u32);
	// stb r31,1980(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1980, ctx.r31.u8);
	// stw r10,1956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1956, ctx.r10.u32);
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// stw r11,1952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1952, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD28D0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,1992
	ctx.r3.s64 = ctx.r1.s64 + 1992;
	// bl 0x82e0be78
	ctx.lr = 0x82BD28D8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -92);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2008(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2008, temp.u32);
	// stfs f30,2016(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2016, temp.u32);
	// stw r31,2012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2012, ctx.r31.u32);
	// addi r10,r10,-22780
	ctx.r10.s64 = ctx.r10.s64 + -22780;
	// stfs f31,2020(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2020, temp.u32);
	// stfs f31,2024(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2024, temp.u32);
	// stb r31,2028(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2028, ctx.r31.u8);
	// stw r10,2004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2004, ctx.r10.u32);
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// stw r11,2000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2000, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD290C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2040
	ctx.r3.s64 = ctx.r1.s64 + 2040;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2914;
	sub_82E0BE78(ctx, base);
	// lwz r11,-88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -88);
	// stfs f29,2056(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2056, temp.u32);
	// stw r30,2060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2060, ctx.r30.u32);
	// stfs f30,2064(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2064, temp.u32);
	// stw r26,2052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2052, ctx.r26.u32);
	// stfs f31,2068(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2068, temp.u32);
	// stb r31,2076(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2076, ctx.r31.u8);
	// stfs f31,2072(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2072, temp.u32);
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// stw r11,2048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2048, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2940;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2088
	ctx.r3.s64 = ctx.r1.s64 + 2088;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2948;
	sub_82E0BE78(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r11,-84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -84);
	// stfs f29,2104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2104, temp.u32);
	// addi r10,r10,-22808
	ctx.r10.s64 = ctx.r10.s64 + -22808;
	// stfs f30,2112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2112, temp.u32);
	// stfs f31,2116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2116, temp.u32);
	// stw r30,2108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2108, ctx.r30.u32);
	// stfs f31,2120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2120, temp.u32);
	// stw r10,2100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2100, ctx.r10.u32);
	// stb r31,2124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2124, ctx.r31.u8);
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// stw r11,2096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2096, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD297C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2136
	ctx.r3.s64 = ctx.r1.s64 + 2136;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2984;
	sub_82E0BE78(ctx, base);
	// lwz r11,-80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -80);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2152, temp.u32);
	// stfs f30,2160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2160, temp.u32);
	// stw r31,2156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2156, ctx.r31.u32);
	// addi r10,r10,-22840
	ctx.r10.s64 = ctx.r10.s64 + -22840;
	// stfs f31,2164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2164, temp.u32);
	// stfs f31,2168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2168, temp.u32);
	// stb r31,2172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2172, ctx.r31.u8);
	// stw r10,2148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2148, ctx.r10.u32);
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// stw r11,2144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD29B8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2184
	ctx.r3.s64 = ctx.r1.s64 + 2184;
	// bl 0x82e0be78
	ctx.lr = 0x82BD29C0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -76);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2200, temp.u32);
	// stfs f30,2208(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2208, temp.u32);
	// stw r30,2204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2204, ctx.r30.u32);
	// addi r10,r10,-22864
	ctx.r10.s64 = ctx.r10.s64 + -22864;
	// stfs f31,2212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2212, temp.u32);
	// stfs f31,2216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2216, temp.u32);
	// stb r31,2220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2220, ctx.r31.u8);
	// stw r10,2196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2196, ctx.r10.u32);
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// stw r11,2192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD29F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2232
	ctx.r3.s64 = ctx.r1.s64 + 2232;
	// bl 0x82e0be78
	ctx.lr = 0x82BD29FC;
	sub_82E0BE78(ctx, base);
	// lwz r11,-72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -72);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2248(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2248, temp.u32);
	// stfs f30,2256(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2256, temp.u32);
	// stw r31,2252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2252, ctx.r31.u32);
	// addi r10,r10,-22888
	ctx.r10.s64 = ctx.r10.s64 + -22888;
	// stfs f31,2260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2260, temp.u32);
	// stfs f31,2264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2264, temp.u32);
	// stb r31,2268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2268, ctx.r31.u8);
	// stw r10,2244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2244, ctx.r10.u32);
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// stw r11,2240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2A30;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2280
	ctx.r3.s64 = ctx.r1.s64 + 2280;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2A38;
	sub_82E0BE78(ctx, base);
	// lwz r11,-68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -68);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2296(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2296, temp.u32);
	// stfs f30,2304(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2304, temp.u32);
	// stw r30,2300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2300, ctx.r30.u32);
	// addi r10,r10,-22912
	ctx.r10.s64 = ctx.r10.s64 + -22912;
	// stfs f31,2308(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2308, temp.u32);
	// stfs f31,2312(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2312, temp.u32);
	// stb r31,2316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2316, ctx.r31.u8);
	// stw r10,2292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2292, ctx.r10.u32);
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// stw r11,2288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2A6C;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2328
	ctx.r3.s64 = ctx.r1.s64 + 2328;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2A74;
	sub_82E0BE78(ctx, base);
	// lwz r11,-64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -64);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2344(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2344, temp.u32);
	// stfs f30,2352(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2352, temp.u32);
	// stw r30,2348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2348, ctx.r30.u32);
	// addi r10,r10,-22936
	ctx.r10.s64 = ctx.r10.s64 + -22936;
	// stfs f31,2356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2356, temp.u32);
	// stfs f31,2360(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2360, temp.u32);
	// stb r31,2364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2364, ctx.r31.u8);
	// stw r10,2340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2340, ctx.r10.u32);
	// addi r3,r1,2368
	ctx.r3.s64 = ctx.r1.s64 + 2368;
	// stw r11,2336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2336, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2AA8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2376
	ctx.r3.s64 = ctx.r1.s64 + 2376;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2AB0;
	sub_82E0BE78(ctx, base);
	// lwz r11,-60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -60);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2392(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2392, temp.u32);
	// stw r30,2396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2396, ctx.r30.u32);
	// addi r10,r10,-22960
	ctx.r10.s64 = ctx.r10.s64 + -22960;
	// stfs f30,2400(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2400, temp.u32);
	// stfs f31,2404(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2404, temp.u32);
	// stb r31,2412(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2412, ctx.r31.u8);
	// stfs f31,2408(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2408, temp.u32);
	// stw r10,2388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2388, ctx.r10.u32);
	// stw r11,2384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2384, ctx.r11.u32);
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2AE4;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2424
	ctx.r3.s64 = ctx.r1.s64 + 2424;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2AEC;
	sub_82E0BE78(ctx, base);
	// lwz r11,-56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -56);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2440(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2440, temp.u32);
	// stfs f30,2448(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2448, temp.u32);
	// stw r31,2444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2444, ctx.r31.u32);
	// addi r10,r10,-22988
	ctx.r10.s64 = ctx.r10.s64 + -22988;
	// stfs f31,2452(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2452, temp.u32);
	// stfs f31,2456(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2456, temp.u32);
	// stb r31,2460(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2460, ctx.r31.u8);
	// stw r10,2436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2436, ctx.r10.u32);
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// stw r11,2432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2432, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2B20;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2472
	ctx.r3.s64 = ctx.r1.s64 + 2472;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2B28;
	sub_82E0BE78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -52);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stfs f30,2496(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2496, temp.u32);
	// stw r30,2492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2492, ctx.r30.u32);
	// addi r9,r9,-23004
	ctx.r9.s64 = ctx.r9.s64 + -23004;
	// stfs f31,2500(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2500, temp.u32);
	// stfs f31,2504(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2504, temp.u32);
	// stb r31,2508(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2508, ctx.r31.u8);
	// lfs f28,6636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6636);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,2484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2484, ctx.r9.u32);
	// stfs f28,2488(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2488, temp.u32);
	// stw r11,2480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2480, ctx.r11.u32);
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2B64;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2520
	ctx.r3.s64 = ctx.r1.s64 + 2520;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2B6C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -48);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2536(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2536, temp.u32);
	// stfs f30,2544(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2544, temp.u32);
	// stw r30,2540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2540, ctx.r30.u32);
	// addi r10,r10,-23028
	ctx.r10.s64 = ctx.r10.s64 + -23028;
	// stfs f31,2548(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2548, temp.u32);
	// stfs f31,2552(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2552, temp.u32);
	// stb r31,2556(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2556, ctx.r31.u8);
	// stw r10,2532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2532, ctx.r10.u32);
	// addi r3,r1,2560
	ctx.r3.s64 = ctx.r1.s64 + 2560;
	// stw r11,2528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2528, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2BA0;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2568
	ctx.r3.s64 = ctx.r1.s64 + 2568;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2BA8;
	sub_82E0BE78(ctx, base);
	// lwz r11,-44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -44);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2584(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2584, temp.u32);
	// stfs f30,2592(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2592, temp.u32);
	// stw r31,2588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2588, ctx.r31.u32);
	// addi r10,r10,-23056
	ctx.r10.s64 = ctx.r10.s64 + -23056;
	// stfs f31,2596(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2596, temp.u32);
	// stfs f31,2600(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2600, temp.u32);
	// stb r31,2604(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2604, ctx.r31.u8);
	// stw r10,2580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2580, ctx.r10.u32);
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// stw r11,2576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2576, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2BDC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2616
	ctx.r3.s64 = ctx.r1.s64 + 2616;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2BE4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f28,2632(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2632, temp.u32);
	// stfs f30,2640(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2640, temp.u32);
	// addi r10,r11,-23072
	ctx.r10.s64 = ctx.r11.s64 + -23072;
	// lwz r11,-40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -40);
	// stfs f31,2644(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2644, temp.u32);
	// stfs f31,2648(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2648, temp.u32);
	// stw r30,2636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2636, ctx.r30.u32);
	// stw r10,2628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2628, ctx.r10.u32);
	// addi r3,r1,2656
	ctx.r3.s64 = ctx.r1.s64 + 2656;
	// stb r31,2652(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2652, ctx.r31.u8);
	// stw r11,2624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2624, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2C18;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2664
	ctx.r3.s64 = ctx.r1.s64 + 2664;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2C20;
	sub_82E0BE78(ctx, base);
	// lwz r11,-36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -36);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2680(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2680, temp.u32);
	// stfs f30,2688(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2688, temp.u32);
	// stw r30,2684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2684, ctx.r30.u32);
	// addi r10,r10,-23096
	ctx.r10.s64 = ctx.r10.s64 + -23096;
	// stfs f31,2692(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2692, temp.u32);
	// stfs f31,2696(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2696, temp.u32);
	// stb r31,2700(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2700, ctx.r31.u8);
	// stw r10,2676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2676, ctx.r10.u32);
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// stw r11,2672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2672, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2C54;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2712
	ctx.r3.s64 = ctx.r1.s64 + 2712;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2C5C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2728(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2728, temp.u32);
	// stfs f30,2736(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2736, temp.u32);
	// stw r31,2732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2732, ctx.r31.u32);
	// addi r10,r10,-23124
	ctx.r10.s64 = ctx.r10.s64 + -23124;
	// stfs f31,2740(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2740, temp.u32);
	// stfs f31,2744(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2744, temp.u32);
	// stb r31,2748(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2748, ctx.r31.u8);
	// stw r10,2724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2724, ctx.r10.u32);
	// addi r3,r1,2752
	ctx.r3.s64 = ctx.r1.s64 + 2752;
	// stw r11,2720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2720, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2C90;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2760
	ctx.r3.s64 = ctx.r1.s64 + 2760;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2C98;
	sub_82E0BE78(ctx, base);
	// lwz r11,-28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f28,2776(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2776, temp.u32);
	// stfs f30,2784(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2784, temp.u32);
	// stw r30,2780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2780, ctx.r30.u32);
	// addi r10,r10,-23140
	ctx.r10.s64 = ctx.r10.s64 + -23140;
	// stfs f31,2788(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2788, temp.u32);
	// stfs f31,2792(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2792, temp.u32);
	// stb r31,2796(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2796, ctx.r31.u8);
	// stw r10,2772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2772, ctx.r10.u32);
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// stw r11,2768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2768, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2CCC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2808
	ctx.r3.s64 = ctx.r1.s64 + 2808;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2CD4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2824(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2824, temp.u32);
	// stfs f30,2832(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2832, temp.u32);
	// stw r30,2828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2828, ctx.r30.u32);
	// addi r10,r10,-23168
	ctx.r10.s64 = ctx.r10.s64 + -23168;
	// stfs f31,2836(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2836, temp.u32);
	// stfs f31,2840(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2840, temp.u32);
	// stb r31,2844(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2844, ctx.r31.u8);
	// stw r10,2820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2820, ctx.r10.u32);
	// addi r3,r1,2848
	ctx.r3.s64 = ctx.r1.s64 + 2848;
	// stw r11,2816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2816, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2D08;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2856
	ctx.r3.s64 = ctx.r1.s64 + 2856;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2D10;
	sub_82E0BE78(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r11,-20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -20);
	// stfs f29,2872(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2872, temp.u32);
	// addi r10,r10,-23196
	ctx.r10.s64 = ctx.r10.s64 + -23196;
	// stfs f30,2880(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2880, temp.u32);
	// stfs f31,2884(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2884, temp.u32);
	// stw r30,2876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2876, ctx.r30.u32);
	// stfs f31,2888(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2888, temp.u32);
	// stw r10,2868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2868, ctx.r10.u32);
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// stb r31,2892(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2892, ctx.r31.u8);
	// stw r11,2864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2864, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2D44;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2904
	ctx.r3.s64 = ctx.r1.s64 + 2904;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2D4C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2920(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2920, temp.u32);
	// stfs f30,2928(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2928, temp.u32);
	// stw r31,2924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2924, ctx.r31.u32);
	// addi r10,r10,-23224
	ctx.r10.s64 = ctx.r10.s64 + -23224;
	// stfs f31,2932(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2932, temp.u32);
	// stfs f31,2936(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2936, temp.u32);
	// stb r31,2940(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2940, ctx.r31.u8);
	// stw r10,2916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2916, ctx.r10.u32);
	// addi r3,r1,2944
	ctx.r3.s64 = ctx.r1.s64 + 2944;
	// stw r11,2912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2912, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2D80;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,2952
	ctx.r3.s64 = ctx.r1.s64 + 2952;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2D88;
	sub_82E0BE78(ctx, base);
	// lwz r11,-12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,2968(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2968, temp.u32);
	// stfs f30,2976(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2976, temp.u32);
	// stw r30,2972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2972, ctx.r30.u32);
	// addi r10,r10,-23256
	ctx.r10.s64 = ctx.r10.s64 + -23256;
	// stfs f31,2980(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2980, temp.u32);
	// stfs f31,2984(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2984, temp.u32);
	// stb r31,2988(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2988, ctx.r31.u8);
	// stw r10,2964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2964, ctx.r10.u32);
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// stw r11,2960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2960, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2DBC;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,3000
	ctx.r3.s64 = ctx.r1.s64 + 3000;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2DC4;
	sub_82E0BE78(ctx, base);
	// lwz r11,-8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,3016(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3016, temp.u32);
	// stfs f30,3024(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3024, temp.u32);
	// stw r31,3020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3020, ctx.r31.u32);
	// addi r10,r10,-23288
	ctx.r10.s64 = ctx.r10.s64 + -23288;
	// stfs f31,3028(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3028, temp.u32);
	// stfs f31,3032(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3032, temp.u32);
	// stb r31,3036(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3036, ctx.r31.u8);
	// stw r10,3012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3012, ctx.r10.u32);
	// addi r3,r1,3040
	ctx.r3.s64 = ctx.r1.s64 + 3040;
	// stw r11,3008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3008, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2DF8;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,3048
	ctx.r3.s64 = ctx.r1.s64 + 3048;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2E00;
	sub_82E0BE78(ctx, base);
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,3064(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3064, temp.u32);
	// stfs f30,3072(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3072, temp.u32);
	// stw r30,3068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3068, ctx.r30.u32);
	// addi r10,r10,-23320
	ctx.r10.s64 = ctx.r10.s64 + -23320;
	// stfs f31,3076(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3076, temp.u32);
	// stfs f31,3080(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3080, temp.u32);
	// stb r31,3084(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3084, ctx.r31.u8);
	// stw r10,3060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3060, ctx.r10.u32);
	// addi r3,r1,3088
	ctx.r3.s64 = ctx.r1.s64 + 3088;
	// stw r11,3056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3056, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2E34;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,3096
	ctx.r3.s64 = ctx.r1.s64 + 3096;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2E3C;
	sub_82E0BE78(ctx, base);
	// lwz r11,-19968(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19968);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f29,3112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3112, temp.u32);
	// stfs f30,3120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3120, temp.u32);
	// stw r30,3116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3116, ctx.r30.u32);
	// addi r10,r10,-23348
	ctx.r10.s64 = ctx.r10.s64 + -23348;
	// stfs f31,3124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3124, temp.u32);
	// stfs f31,3128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3128, temp.u32);
	// stb r31,3132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3132, ctx.r31.u8);
	// stw r10,3108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3108, ctx.r10.u32);
	// addi r3,r1,3136
	ctx.r3.s64 = ctx.r1.s64 + 3136;
	// stw r11,3104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3104, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x82BD2E70;
	sub_82E0BE78(ctx, base);
	// addi r3,r1,3144
	ctx.r3.s64 = ctx.r1.s64 + 3144;
	// bl 0x82e0be78
	ctx.lr = 0x82BD2E78;
	sub_82E0BE78(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0c3b8
	ctx.lr = 0x82BD2E8C;
	sub_82D0C3B8(ctx, base);
	// addi r1,r1,3264
	ctx.r1.s64 = ctx.r1.s64 + 3264;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x833a1940
	ctx.lr = 0x82BD2E98;
	__restfpr_27(ctx, base);
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2E9C"))) PPC_WEAK_FUNC(sub_82BD2E9C);
PPC_FUNC_IMPL(__imp__sub_82BD2E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2EA0"))) PPC_WEAK_FUNC(sub_82BD2EA0);
PPC_FUNC_IMPL(__imp__sub_82BD2EA0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,12964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12964);
	// bl 0x82e02670
	ctx.lr = 0x82BD2ECC;
	sub_82E02670(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1f128
	ctx.lr = 0x82BD2EDC;
	sub_82A1F128(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD2EE4;
	sub_82E01BF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bne cr6,0x82bd2ef4
	if (!ctx.cr6.eq) goto loc_82BD2EF4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BD2EF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1f138
	ctx.lr = 0x82BD2EFC;
	sub_82A1F138(ctx, base);
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

__attribute__((alias("__imp__sub_82BD2F14"))) PPC_WEAK_FUNC(sub_82BD2F14);
PPC_FUNC_IMPL(__imp__sub_82BD2F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2F18"))) PPC_WEAK_FUNC(sub_82BD2F18);
PPC_FUNC_IMPL(__imp__sub_82BD2F18) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82e02378
	ctx.lr = 0x82BD2F58;
	sub_82E02378(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82e02378
	ctx.lr = 0x82BD2F64;
	sub_82E02378(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// bl 0x82e02378
	ctx.lr = 0x82BD2F70;
	sub_82E02378(ctx, base);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x82e02378
	ctx.lr = 0x82BD2F8C;
	sub_82E02378(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x82e02378
	ctx.lr = 0x82BD2F98;
	sub_82E02378(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// bl 0x82e02378
	ctx.lr = 0x82BD2FA4;
	sub_82E02378(ctx, base);
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

__attribute__((alias("__imp__sub_82BD2FC0"))) PPC_WEAK_FUNC(sub_82BD2FC0);
PPC_FUNC_IMPL(__imp__sub_82BD2FC0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20512);
	// bl 0x82e02670
	ctx.lr = 0x82BD2FE8;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b13180
	ctx.lr = 0x82BD2FF0;
	sub_82B13180(ctx, base);
	// bl 0x82e96a70
	ctx.lr = 0x82BD2FF4;
	sub_82E96A70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e023a8
	ctx.lr = 0x82BD2FFC;
	sub_82E023A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD3008;
	sub_82E01BF0(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bd301c
	if (ctx.cr0.eq) goto loc_82BD301C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
loc_82BD301C:
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

__attribute__((alias("__imp__sub_82BD3034"))) PPC_WEAK_FUNC(sub_82BD3034);
PPC_FUNC_IMPL(__imp__sub_82BD3034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3038"))) PPC_WEAK_FUNC(sub_82BD3038);
PPC_FUNC_IMPL(__imp__sub_82BD3038) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20248);
	// bl 0x82e02670
	ctx.lr = 0x82BD305C;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9ee38
	ctx.lr = 0x82BD3064;
	sub_82B9EE38(ctx, base);
	// bl 0x82e96a70
	ctx.lr = 0x82BD3068;
	sub_82E96A70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02318
	ctx.lr = 0x82BD3070;
	sub_82E02318(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD3078;
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

__attribute__((alias("__imp__sub_82BD308C"))) PPC_WEAK_FUNC(sub_82BD308C);
PPC_FUNC_IMPL(__imp__sub_82BD308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3090"))) PPC_WEAK_FUNC(sub_82BD3090);
PPC_FUNC_IMPL(__imp__sub_82BD3090) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x826601e8
	sub_826601E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD309C"))) PPC_WEAK_FUNC(sub_82BD309C);
PPC_FUNC_IMPL(__imp__sub_82BD309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD30A0"))) PPC_WEAK_FUNC(sub_82BD30A0);
PPC_FUNC_IMPL(__imp__sub_82BD30A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1444
	ctx.r3.s64 = ctx.r3.s64 + 1444;
	// b 0x825e6088
	sub_825E6088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD30A8"))) PPC_WEAK_FUNC(sub_82BD30A8);
PPC_FUNC_IMPL(__imp__sub_82BD30A8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82bd3128
	if (ctx.cr6.eq) goto loc_82BD3128;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82bd3128
	if (ctx.cr6.eq) goto loc_82BD3128;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82bd3140
	if (ctx.cr6.eq) goto loc_82BD3140;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82bd310c
	if (!ctx.cr6.eq) goto loc_82BD310C;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,-18224
	ctx.r4.s64 = ctx.r11.s64 + -18224;
	// bl 0x8339ffd8
	ctx.lr = 0x82BD30F4;
	sub_8339FFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bd3140
	goto loc_82BD3140;
loc_82BD310C:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-18224
	ctx.r10.s64 = ctx.r10.s64 + -18224;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// b 0x82bd3140
	goto loc_82BD3140;
loc_82BD3128:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd3140
	if (ctx.cr6.eq) goto loc_82BD3140;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82BD3140:
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

__attribute__((alias("__imp__sub_82BD3158"))) PPC_WEAK_FUNC(sub_82BD3158);
PPC_FUNC_IMPL(__imp__sub_82BD3158) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82bd31d8
	if (ctx.cr6.eq) goto loc_82BD31D8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82bd31d8
	if (ctx.cr6.eq) goto loc_82BD31D8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82bd31f0
	if (ctx.cr6.eq) goto loc_82BD31F0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82bd31bc
	if (!ctx.cr6.eq) goto loc_82BD31BC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,-17992
	ctx.r4.s64 = ctx.r11.s64 + -17992;
	// bl 0x8339ffd8
	ctx.lr = 0x82BD31A4;
	sub_8339FFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bd31f0
	goto loc_82BD31F0;
loc_82BD31BC:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// b 0x82bd31f0
	goto loc_82BD31F0;
loc_82BD31D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd31f0
	if (ctx.cr6.eq) goto loc_82BD31F0;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_82BD31F0:
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

__attribute__((alias("__imp__sub_82BD3208"))) PPC_WEAK_FUNC(sub_82BD3208);
PPC_FUNC_IMPL(__imp__sub_82BD3208) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82bd3288
	if (ctx.cr6.eq) goto loc_82BD3288;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82bd3288
	if (ctx.cr6.eq) goto loc_82BD3288;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82bd32a0
	if (ctx.cr6.eq) goto loc_82BD32A0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82bd326c
	if (!ctx.cr6.eq) goto loc_82BD326C;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,-17784
	ctx.r4.s64 = ctx.r11.s64 + -17784;
	// bl 0x8339ffd8
	ctx.lr = 0x82BD3254;
	sub_8339FFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bd32a0
	goto loc_82BD32A0;
loc_82BD326C:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-17784
	ctx.r10.s64 = ctx.r10.s64 + -17784;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// b 0x82bd32a0
	goto loc_82BD32A0;
loc_82BD3288:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd32a0
	if (ctx.cr6.eq) goto loc_82BD32A0;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_82BD32A0:
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

__attribute__((alias("__imp__sub_82BD32B8"))) PPC_WEAK_FUNC(sub_82BD32B8);
PPC_FUNC_IMPL(__imp__sub_82BD32B8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82bd3338
	if (ctx.cr6.eq) goto loc_82BD3338;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82bd3338
	if (ctx.cr6.eq) goto loc_82BD3338;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82bd3350
	if (ctx.cr6.eq) goto loc_82BD3350;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82bd331c
	if (!ctx.cr6.eq) goto loc_82BD331C;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,-17592
	ctx.r4.s64 = ctx.r11.s64 + -17592;
	// bl 0x8339ffd8
	ctx.lr = 0x82BD3304;
	sub_8339FFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bd3350
	goto loc_82BD3350;
loc_82BD331C:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-17592
	ctx.r10.s64 = ctx.r10.s64 + -17592;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// b 0x82bd3350
	goto loc_82BD3350;
loc_82BD3338:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd3350
	if (ctx.cr6.eq) goto loc_82BD3350;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_82BD3350:
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

__attribute__((alias("__imp__sub_82BD3368"))) PPC_WEAK_FUNC(sub_82BD3368);
PPC_FUNC_IMPL(__imp__sub_82BD3368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r11,-8124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8124);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD3380"))) PPC_WEAK_FUNC(sub_82BD3380);
PPC_FUNC_IMPL(__imp__sub_82BD3380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// lwz r3,-8124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD338C"))) PPC_WEAK_FUNC(sub_82BD338C);
PPC_FUNC_IMPL(__imp__sub_82BD338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3390"))) PPC_WEAK_FUNC(sub_82BD3390);
PPC_FUNC_IMPL(__imp__sub_82BD3390) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD33B0;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-19448
	ctx.r11.s64 = ctx.r11.s64 + -19448;
	// addi r4,r10,-19484
	ctx.r4.s64 = ctx.r10.s64 + -19484;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD33D0;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD33DC;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD33E4;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3400"))) PPC_WEAK_FUNC(sub_82BD3400);
PPC_FUNC_IMPL(__imp__sub_82BD3400) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD3420;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-19372
	ctx.r11.s64 = ctx.r11.s64 + -19372;
	// addi r4,r10,-19400
	ctx.r4.s64 = ctx.r10.s64 + -19400;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD3440;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD344C;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD3454;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3470"))) PPC_WEAK_FUNC(sub_82BD3470);
PPC_FUNC_IMPL(__imp__sub_82BD3470) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD3490;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-19292
	ctx.r11.s64 = ctx.r11.s64 + -19292;
	// addi r4,r10,-19324
	ctx.r4.s64 = ctx.r10.s64 + -19324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD34B0;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD34BC;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD34C4;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD34E0"))) PPC_WEAK_FUNC(sub_82BD34E0);
PPC_FUNC_IMPL(__imp__sub_82BD34E0) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD3500;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-19216
	ctx.r11.s64 = ctx.r11.s64 + -19216;
	// addi r4,r10,-19244
	ctx.r4.s64 = ctx.r10.s64 + -19244;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD3520;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD352C;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD3534;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3550"))) PPC_WEAK_FUNC(sub_82BD3550);
PPC_FUNC_IMPL(__imp__sub_82BD3550) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD3570;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-19140
	ctx.r11.s64 = ctx.r11.s64 + -19140;
	// addi r4,r10,-19168
	ctx.r4.s64 = ctx.r10.s64 + -19168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD3590;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD359C;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD35A4;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD35C0"))) PPC_WEAK_FUNC(sub_82BD35C0);
PPC_FUNC_IMPL(__imp__sub_82BD35C0) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD35E0;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-19056
	ctx.r11.s64 = ctx.r11.s64 + -19056;
	// addi r4,r10,-19092
	ctx.r4.s64 = ctx.r10.s64 + -19092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD3600;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD360C;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD3614;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3630"))) PPC_WEAK_FUNC(sub_82BD3630);
PPC_FUNC_IMPL(__imp__sub_82BD3630) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD3650;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-18968
	ctx.r11.s64 = ctx.r11.s64 + -18968;
	// addi r4,r10,-19008
	ctx.r4.s64 = ctx.r10.s64 + -19008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD3670;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD367C;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD3684;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD36A0"))) PPC_WEAK_FUNC(sub_82BD36A0);
PPC_FUNC_IMPL(__imp__sub_82BD36A0) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD36C0;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-18876
	ctx.r11.s64 = ctx.r11.s64 + -18876;
	// addi r4,r10,-18920
	ctx.r4.s64 = ctx.r10.s64 + -18920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD36E0;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD36EC;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD36F4;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3710"))) PPC_WEAK_FUNC(sub_82BD3710);
PPC_FUNC_IMPL(__imp__sub_82BD3710) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82487648
	ctx.lr = 0x82BD3730;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-18784
	ctx.r11.s64 = ctx.r11.s64 + -18784;
	// addi r4,r10,-18828
	ctx.r4.s64 = ctx.r10.s64 + -18828;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD3750;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD375C;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD3764;
	sub_82E01BF0(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r3,1072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BD377C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x82BD378C;
	sub_82E9FA18(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82BD37B4"))) PPC_WEAK_FUNC(sub_82BD37B4);
PPC_FUNC_IMPL(__imp__sub_82BD37B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD37B8"))) PPC_WEAK_FUNC(sub_82BD37B8);
PPC_FUNC_IMPL(__imp__sub_82BD37B8) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD37D8;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-18704
	ctx.r11.s64 = ctx.r11.s64 + -18704;
	// addi r4,r10,-18736
	ctx.r4.s64 = ctx.r10.s64 + -18736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD37F8;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD3804;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD380C;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3828"))) PPC_WEAK_FUNC(sub_82BD3828);
PPC_FUNC_IMPL(__imp__sub_82BD3828) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD3848;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-18624
	ctx.r11.s64 = ctx.r11.s64 + -18624;
	// addi r4,r10,-18656
	ctx.r4.s64 = ctx.r10.s64 + -18656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD3868;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD3874;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD387C;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3898"))) PPC_WEAK_FUNC(sub_82BD3898);
PPC_FUNC_IMPL(__imp__sub_82BD3898) {
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
	// bl 0x82487648
	ctx.lr = 0x82BD38B8;
	sub_82487648(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-18552
	ctx.r11.s64 = ctx.r11.s64 + -18552;
	// addi r4,r10,-18576
	ctx.r4.s64 = ctx.r10.s64 + -18576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02670
	ctx.lr = 0x82BD38D8;
	sub_82E02670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e968c0
	ctx.lr = 0x82BD38E4;
	sub_82E968C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD38EC;
	sub_82E01BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3908"))) PPC_WEAK_FUNC(sub_82BD3908);
PPC_FUNC_IMPL(__imp__sub_82BD3908) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BD3930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,8272
	ctx.r5.s64 = ctx.r11.s64 + 8272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0af88
	ctx.lr = 0x82BD3944;
	sub_82D0AF88(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3958"))) PPC_WEAK_FUNC(sub_82BD3958);
PPC_FUNC_IMPL(__imp__sub_82BD3958) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b9f0a8
	ctx.lr = 0x82BD397C;
	sub_82B9F0A8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r10,8432
	ctx.r4.s64 = ctx.r10.s64 + 8432;
	// lfs f0,-24832(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r3,868(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// bl 0x82e23558
	ctx.lr = 0x82BD39A0;
	sub_82E23558(ctx, base);
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

__attribute__((alias("__imp__sub_82BD39B8"))) PPC_WEAK_FUNC(sub_82BD39B8);
PPC_FUNC_IMPL(__imp__sub_82BD39B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82b13180
	ctx.lr = 0x82BD39D4;
	sub_82B13180(ctx, base);
	// bl 0x82e96fb8
	ctx.lr = 0x82BD39D8;
	sub_82E96FB8(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r3,860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// addi r4,r11,8432
	ctx.r4.s64 = ctx.r11.s64 + 8432;
	// bl 0x82e23558
	ctx.lr = 0x82BD39E8;
	sub_82E23558(ctx, base);
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

__attribute__((alias("__imp__sub_82BD39FC"))) PPC_WEAK_FUNC(sub_82BD39FC);
PPC_FUNC_IMPL(__imp__sub_82BD39FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3A00"))) PPC_WEAK_FUNC(sub_82BD3A00);
PPC_FUNC_IMPL(__imp__sub_82BD3A00) {
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
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd3a38
	if (ctx.cr6.eq) goto loc_82BD3A38;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82b9ef28
	ctx.lr = 0x82BD3A2C;
	sub_82B9EF28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9ad28
	ctx.lr = 0x82BD3A38;
	sub_82A9AD28(ctx, base);
loc_82BD3A38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e96968
	ctx.lr = 0x82BD3A40;
	sub_82E96968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82e96cb0
	ctx.lr = 0x82BD3A4C;
	sub_82E96CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3A64"))) PPC_WEAK_FUNC(sub_82BD3A64);
PPC_FUNC_IMPL(__imp__sub_82BD3A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3A68"))) PPC_WEAK_FUNC(sub_82BD3A68);
PPC_FUNC_IMPL(__imp__sub_82BD3A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82BD3A70;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,852(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 852);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BD3A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x82BD3AA8;
	sub_82E9FA18(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lfs f12,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r30,r11,-20496
	ctx.r30.s64 = ctx.r11.s64 + -20496;
	// lfs f13,-1148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,960(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f0,f31,f12
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82bd3ae0
	if (!ctx.cr6.lt) goto loc_82BD3AE0;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82bd3ae4
	goto loc_82BD3AE4;
loc_82BD3AE0:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82BD3AE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9f738
	ctx.lr = 0x82BD3AF0;
	sub_82E9F738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee9318
	ctx.lr = 0x82BD3AFC;
	sub_82EE9318(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,852(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 852);
	// bl 0x82e23558
	ctx.lr = 0x82BD3B08;
	sub_82E23558(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82bd3b48
	if (ctx.cr6.gt) goto loc_82BD3B48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e02670
	ctx.lr = 0x82BD3B28;
	sub_82E02670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e97110
	ctx.lr = 0x82BD3B38;
	sub_82E97110(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd3b48
	if (ctx.cr6.eq) goto loc_82BD3B48;
	// bl 0x82480108
	ctx.lr = 0x82BD3B48;
	sub_82480108(ctx, base);
loc_82BD3B48:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD3B54"))) PPC_WEAK_FUNC(sub_82BD3B54);
PPC_FUNC_IMPL(__imp__sub_82BD3B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3B58"))) PPC_WEAK_FUNC(sub_82BD3B58);
PPC_FUNC_IMPL(__imp__sub_82BD3B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82BD3B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82bd3c14
	if (!ctx.cr6.lt) goto loc_82BD3C14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,19404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19404);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82bd3ba8
	if (ctx.cr6.lt) goto loc_82BD3BA8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BD3BA8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82a24578
	ctx.lr = 0x82BD3BC8;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82bd3bdc
	if (!ctx.cr6.eq) goto loc_82BD3BDC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD3BDC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r10,-20616
	ctx.r10.s64 = ctx.r10.s64 + -20616;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a1ee30
	ctx.lr = 0x82BD3BF8;
	sub_82A1EE30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,628
	ctx.r5.s64 = ctx.r30.s64 + 628;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8283ffc8
	ctx.lr = 0x82BD3C0C;
	sub_8283FFC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01548
	ctx.lr = 0x82BD3C14;
	sub_82E01548(ctx, base);
loc_82BD3C14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD3C1C"))) PPC_WEAK_FUNC(sub_82BD3C1C);
PPC_FUNC_IMPL(__imp__sub_82BD3C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3C20"))) PPC_WEAK_FUNC(sub_82BD3C20);
PPC_FUNC_IMPL(__imp__sub_82BD3C20) {
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
	// lfs f0,980(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,980(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 980, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82bd3c80
	if (!ctx.cr6.lt) goto loc_82BD3C80;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20488(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20488);
	// bl 0x82e02670
	ctx.lr = 0x82BD3C60;
	sub_82E02670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e97110
	ctx.lr = 0x82BD3C70;
	sub_82E97110(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd3c80
	if (ctx.cr6.eq) goto loc_82BD3C80;
	// bl 0x82480108
	ctx.lr = 0x82BD3C80;
	sub_82480108(ctx, base);
loc_82BD3C80:
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

__attribute__((alias("__imp__sub_82BD3C94"))) PPC_WEAK_FUNC(sub_82BD3C94);
PPC_FUNC_IMPL(__imp__sub_82BD3C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3C98"))) PPC_WEAK_FUNC(sub_82BD3C98);
PPC_FUNC_IMPL(__imp__sub_82BD3C98) {
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
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// bl 0x82e96968
	ctx.lr = 0x82BD3CB8;
	sub_82E96968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e96cb0
	ctx.lr = 0x82BD3CC4;
	sub_82E96CB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e85f20
	ctx.lr = 0x82BD3CD0;
	sub_82E85F20(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x82bd3cf0
	if (ctx.cr6.eq) goto loc_82BD3CF0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82480108
	ctx.lr = 0x82BD3CF0;
	sub_82480108(ctx, base);
loc_82BD3CF0:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bd3d00
	if (ctx.cr0.eq) goto loc_82BD3D00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e97030
	ctx.lr = 0x82BD3D00;
	sub_82E97030(ctx, base);
loc_82BD3D00:
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

__attribute__((alias("__imp__sub_82BD3D18"))) PPC_WEAK_FUNC(sub_82BD3D18);
PPC_FUNC_IMPL(__imp__sub_82BD3D18) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82b9efe8
	ctx.lr = 0x82BD3D3C;
	sub_82B9EFE8(ctx, base);
	// lfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27070
	ctx.lr = 0x82BD3D48;
	sub_82A27070(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82bd3da4
	if (!ctx.cr6.lt) goto loc_82BD3DA4;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20360);
	// bl 0x82e02670
	ctx.lr = 0x82BD3D74;
	sub_82E02670(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b13180
	ctx.lr = 0x82BD3D80;
	sub_82B13180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82e970a8
	ctx.lr = 0x82BD3D90;
	sub_82E970A8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd3db0
	if (ctx.cr6.eq) goto loc_82BD3DB0;
	// bl 0x82480108
	ctx.lr = 0x82BD3DA0;
	sub_82480108(ctx, base);
	// b 0x82bd3db0
	goto loc_82BD3DB0;
loc_82BD3DA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b13180
	ctx.lr = 0x82BD3DAC;
	sub_82B13180(ctx, base);
	// bl 0x82e96fb8
	ctx.lr = 0x82BD3DB0;
	sub_82E96FB8(ctx, base);
loc_82BD3DB0:
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

__attribute__((alias("__imp__sub_82BD3DCC"))) PPC_WEAK_FUNC(sub_82BD3DCC);
PPC_FUNC_IMPL(__imp__sub_82BD3DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3DD0"))) PPC_WEAK_FUNC(sub_82BD3DD0);
PPC_FUNC_IMPL(__imp__sub_82BD3DD0) {
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
	// lfs f0,980(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,980(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 980, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82bd3e30
	if (!ctx.cr6.lt) goto loc_82BD3E30;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20352);
	// bl 0x82e02670
	ctx.lr = 0x82BD3E10;
	sub_82E02670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e97110
	ctx.lr = 0x82BD3E20;
	sub_82E97110(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd3e30
	if (ctx.cr6.eq) goto loc_82BD3E30;
	// bl 0x82480108
	ctx.lr = 0x82BD3E30;
	sub_82480108(ctx, base);
loc_82BD3E30:
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

__attribute__((alias("__imp__sub_82BD3E44"))) PPC_WEAK_FUNC(sub_82BD3E44);
PPC_FUNC_IMPL(__imp__sub_82BD3E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3E48"))) PPC_WEAK_FUNC(sub_82BD3E48);
PPC_FUNC_IMPL(__imp__sub_82BD3E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82BD3E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82eb8d40
	ctx.lr = 0x82BD3E68;
	sub_82EB8D40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb8d30
	ctx.lr = 0x82BD3E78;
	sub_82EB8D30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// bl 0x82eb8d40
	ctx.lr = 0x82BD3E90;
	sub_82EB8D40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb8d30
	ctx.lr = 0x82BD3EA4;
	sub_82EB8D30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD3EB8"))) PPC_WEAK_FUNC(sub_82BD3EB8);
PPC_FUNC_IMPL(__imp__sub_82BD3EB8) {
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
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82857010
	ctx.lr = 0x82BD3ED8;
	sub_82857010(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd3ee8
	if (ctx.cr6.eq) goto loc_82BD3EE8;
	// bl 0x82480108
	ctx.lr = 0x82BD3EE8;
	sub_82480108(ctx, base);
loc_82BD3EE8:
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

__attribute__((alias("__imp__sub_82BD3EFC"))) PPC_WEAK_FUNC(sub_82BD3EFC);
PPC_FUNC_IMPL(__imp__sub_82BD3EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3F00"))) PPC_WEAK_FUNC(sub_82BD3F00);
PPC_FUNC_IMPL(__imp__sub_82BD3F00) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82bd3f50
	if (!ctx.cr6.gt) goto loc_82BD3F50;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82bd3f50
	if (ctx.cr6.gt) goto loc_82BD3F50;
	// lwz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// bl 0x824a9e68
	ctx.lr = 0x82BD3F50;
	sub_824A9E68(ctx, base);
loc_82BD3F50:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82bd3f90
	if (!ctx.cr6.gt) goto loc_82BD3F90;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82bd3f90
	if (ctx.cr6.gt) goto loc_82BD3F90;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,-24836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24836);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BD3F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD3F90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a262f8
	ctx.lr = 0x82BD3F9C;
	sub_82A262F8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD3FB8"))) PPC_WEAK_FUNC(sub_82BD3FB8);
PPC_FUNC_IMPL(__imp__sub_82BD3FB8) {
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
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BD3FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x82BD3FF0;
	sub_82E9FA18(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82BD4010"))) PPC_WEAK_FUNC(sub_82BD4010);
PPC_FUNC_IMPL(__imp__sub_82BD4010) {
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
	// lwz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x824a9be0
	ctx.lr = 0x82BD402C;
	sub_824A9BE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,11
	ctx.r10.s64 = 11;
	// beq 0x82bd4040
	if (ctx.cr0.eq) goto loc_82BD4040;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82BD4040:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82BD4058"))) PPC_WEAK_FUNC(sub_82BD4058);
PPC_FUNC_IMPL(__imp__sub_82BD4058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82BD4060;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,1056(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82bd4150
	if (!ctx.cr6.gt) goto loc_82BD4150;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18484
	ctx.r4.s64 = ctx.r11.s64 + -18484;
	// bl 0x82e02670
	ctx.lr = 0x82BD4094;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82edb140
	ctx.lr = 0x82BD40A0;
	sub_82EDB140(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD40AC;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82edb178
	ctx.lr = 0x82BD40B4;
	sub_82EDB178(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8308cbd8
	ctx.lr = 0x82BD40C0;
	sub_8308CBD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,1056(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r9,-18500
	ctx.r4.s64 = ctx.r9.s64 + -18500;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e02670
	ctx.lr = 0x82BD40FC;
	sub_82E02670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82edb140
	ctx.lr = 0x82BD4108;
	sub_82EDB140(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD4114;
	sub_82E01BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82edb178
	ctx.lr = 0x82BD411C;
	sub_82EDB178(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8308cbd8
	ctx.lr = 0x82BD4128;
	sub_8308CBD8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,1056(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82BD4150:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD415C"))) PPC_WEAK_FUNC(sub_82BD415C);
PPC_FUNC_IMPL(__imp__sub_82BD415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4160"))) PPC_WEAK_FUNC(sub_82BD4160);
PPC_FUNC_IMPL(__imp__sub_82BD4160) {
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
	// bl 0x83253250
	ctx.lr = 0x82BD4180;
	sub_83253250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d0bcd0
	ctx.lr = 0x82BD4188;
	sub_82D0BCD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x82d0bcd0
	ctx.lr = 0x82BD4194;
	sub_82D0BCD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82d0bcd0
	ctx.lr = 0x82BD41A0;
	sub_82D0BCD0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD41B8"))) PPC_WEAK_FUNC(sub_82BD41B8);
PPC_FUNC_IMPL(__imp__sub_82BD41B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83253250
	ctx.lr = 0x82BD41E0;
	sub_83253250(ctx, base);
	// bl 0x82d0bd30
	ctx.lr = 0x82BD41E4;
	sub_82D0BD30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e02318
	ctx.lr = 0x82BD41EC;
	sub_82E02318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bd420c
	if (ctx.cr0.eq) goto loc_82BD420C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9eec8
	ctx.lr = 0x82BD4200;
	sub_82B9EEC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x82d0bf60
	ctx.lr = 0x82BD420C;
	sub_82D0BF60(ctx, base);
loc_82BD420C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82bd4238
	if (!ctx.cr6.gt) goto loc_82BD4238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83253250
	ctx.lr = 0x82BD4224;
	sub_83253250(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d0bdb0
	ctx.lr = 0x82BD422C;
	sub_82D0BDB0(ctx, base);
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d0bdb0
	ctx.lr = 0x82BD4238;
	sub_82D0BDB0(ctx, base);
loc_82BD4238:
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

__attribute__((alias("__imp__sub_82BD4254"))) PPC_WEAK_FUNC(sub_82BD4254);
PPC_FUNC_IMPL(__imp__sub_82BD4254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4258"))) PPC_WEAK_FUNC(sub_82BD4258);
PPC_FUNC_IMPL(__imp__sub_82BD4258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82BD4260;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r3,832
	ctx.r30.s64 = ctx.r3.s64 + 832;
	// li r29,2
	ctx.r29.s64 = 2;
	// lfs f31,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f31.f64 = double(temp.f32);
loc_82BD4278:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BD427C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e6cfa0
	ctx.lr = 0x82BD4288;
	sub_82E6CFA0(ctx, base);
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e6f4f8
	ctx.lr = 0x82BD4294;
	sub_82E6F4F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82bd427c
	if (ctx.cr6.lt) goto loc_82BD427C;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82bd4278
	if (!ctx.cr0.eq) goto loc_82BD4278;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD42B8"))) PPC_WEAK_FUNC(sub_82BD42B8);
PPC_FUNC_IMPL(__imp__sub_82BD42B8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a24578
	ctx.lr = 0x82BD42D8;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82bd42ec
	if (!ctx.cr6.eq) goto loc_82BD42EC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD42EC:
	// bl 0x82a1ef80
	ctx.lr = 0x82BD42F0;
	sub_82A1EF80(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4320
	if (ctx.cr6.eq) goto loc_82BD4320;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BD4304:
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
	// bne 0x82bd4304
	if (!ctx.cr0.eq) goto loc_82BD4304;
loc_82BD4320:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82BD4328;
	sub_82E01548(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18468
	ctx.r4.s64 = ctx.r11.s64 + -18468;
	// bl 0x82e02670
	ctx.lr = 0x82BD4338;
	sub_82E02670(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8432
	ctx.r5.s64 = ctx.r11.s64 + 8432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d85e20
	ctx.lr = 0x82BD4350;
	sub_82D85E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD4358;
	sub_82E01BF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4368
	if (ctx.cr6.eq) goto loc_82BD4368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82480108
	ctx.lr = 0x82BD4368;
	sub_82480108(ctx, base);
loc_82BD4368:
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

__attribute__((alias("__imp__sub_82BD4380"))) PPC_WEAK_FUNC(sub_82BD4380);
PPC_FUNC_IMPL(__imp__sub_82BD4380) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a24578
	ctx.lr = 0x82BD43A0;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82bd43b4
	if (!ctx.cr6.eq) goto loc_82BD43B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD43B4:
	// bl 0x82a1ef80
	ctx.lr = 0x82BD43B8;
	sub_82A1EF80(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd43e8
	if (ctx.cr6.eq) goto loc_82BD43E8;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BD43CC:
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
	// bne 0x82bd43cc
	if (!ctx.cr0.eq) goto loc_82BD43CC;
loc_82BD43E8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82BD43F0;
	sub_82E01548(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18460
	ctx.r4.s64 = ctx.r11.s64 + -18460;
	// bl 0x82e02670
	ctx.lr = 0x82BD4400;
	sub_82E02670(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8432
	ctx.r5.s64 = ctx.r11.s64 + 8432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d85e20
	ctx.lr = 0x82BD4418;
	sub_82D85E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD4420;
	sub_82E01BF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4430
	if (ctx.cr6.eq) goto loc_82BD4430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82480108
	ctx.lr = 0x82BD4430;
	sub_82480108(ctx, base);
loc_82BD4430:
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

__attribute__((alias("__imp__sub_82BD4448"))) PPC_WEAK_FUNC(sub_82BD4448);
PPC_FUNC_IMPL(__imp__sub_82BD4448) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a24578
	ctx.lr = 0x82BD4468;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82bd447c
	if (!ctx.cr6.eq) goto loc_82BD447C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD447C:
	// bl 0x82a1ef80
	ctx.lr = 0x82BD4480;
	sub_82A1EF80(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd44b0
	if (ctx.cr6.eq) goto loc_82BD44B0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BD4494:
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
	// bne 0x82bd4494
	if (!ctx.cr0.eq) goto loc_82BD4494;
loc_82BD44B0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82BD44B8;
	sub_82E01548(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d833f0
	ctx.lr = 0x82BD44C4;
	sub_82D833F0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-9180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d83408
	ctx.lr = 0x82BD44D4;
	sub_82D83408(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18452
	ctx.r4.s64 = ctx.r11.s64 + -18452;
	// bl 0x82e02670
	ctx.lr = 0x82BD44E4;
	sub_82E02670(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8432
	ctx.r5.s64 = ctx.r11.s64 + 8432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d85e20
	ctx.lr = 0x82BD44FC;
	sub_82D85E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD4504;
	sub_82E01BF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4514
	if (ctx.cr6.eq) goto loc_82BD4514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82480108
	ctx.lr = 0x82BD4514;
	sub_82480108(ctx, base);
loc_82BD4514:
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

__attribute__((alias("__imp__sub_82BD452C"))) PPC_WEAK_FUNC(sub_82BD452C);
PPC_FUNC_IMPL(__imp__sub_82BD452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4530"))) PPC_WEAK_FUNC(sub_82BD4530);
PPC_FUNC_IMPL(__imp__sub_82BD4530) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a24578
	ctx.lr = 0x82BD4550;
	sub_82A24578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82bd4564
	if (!ctx.cr6.eq) goto loc_82BD4564;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD4564:
	// bl 0x82a1ef80
	ctx.lr = 0x82BD4568;
	sub_82A1EF80(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4598
	if (ctx.cr6.eq) goto loc_82BD4598;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BD457C:
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
	// bne 0x82bd457c
	if (!ctx.cr0.eq) goto loc_82BD457C;
loc_82BD4598:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e01548
	ctx.lr = 0x82BD45A0;
	sub_82E01548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d833f8
	ctx.lr = 0x82BD45A8;
	sub_82D833F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18444
	ctx.r4.s64 = ctx.r11.s64 + -18444;
	// bl 0x82e02670
	ctx.lr = 0x82BD45B8;
	sub_82E02670(ctx, base);
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8432
	ctx.r5.s64 = ctx.r11.s64 + 8432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d85e20
	ctx.lr = 0x82BD45D0;
	sub_82D85E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD45D8;
	sub_82E01BF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd45e8
	if (ctx.cr6.eq) goto loc_82BD45E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82480108
	ctx.lr = 0x82BD45E8;
	sub_82480108(ctx, base);
loc_82BD45E8:
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

__attribute__((alias("__imp__sub_82BD4600"))) PPC_WEAK_FUNC(sub_82BD4600);
PPC_FUNC_IMPL(__imp__sub_82BD4600) {
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
	// lwz r3,708(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd4688
	if (ctx.cr6.eq) goto loc_82BD4688;
	// bl 0x82857000
	ctx.lr = 0x82BD4638;
	sub_82857000(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r3,708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82857a80
	ctx.lr = 0x82BD4650;
	sub_82857A80(ctx, base);
	// lwz r3,708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// bl 0x82857000
	ctx.lr = 0x82BD4658;
	sub_82857000(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f1,12452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f1.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82bd4688
	if (!ctx.cr6.lt) goto loc_82BD4688;
	// lwz r31,708(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82857520
	ctx.lr = 0x82BD4680;
	sub_82857520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82857010
	ctx.lr = 0x82BD4688;
	sub_82857010(ctx, base);
loc_82BD4688:
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

__attribute__((alias("__imp__sub_82BD46A8"))) PPC_WEAK_FUNC(sub_82BD46A8);
PPC_FUNC_IMPL(__imp__sub_82BD46A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x82BD46B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e02670
	ctx.lr = 0x82BD46CC;
	sub_82E02670(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,628(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// bl 0x82e35bb8
	ctx.lr = 0x82BD46E4;
	sub_82E35BB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e01bf0
	ctx.lr = 0x82BD46EC;
	sub_82E01BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD46F8"))) PPC_WEAK_FUNC(sub_82BD46F8);
PPC_FUNC_IMPL(__imp__sub_82BD46F8) {
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
	// lwz r3,968(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 968);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd4774
	if (ctx.cr6.eq) goto loc_82BD4774;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BD4728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82e9fa18
	ctx.lr = 0x82BD4738;
	sub_82E9FA18(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32), 0xEF));
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,24284(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82bd476c
	if (ctx.cr6.gt) goto loc_82BD476C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD476C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82bd4778
	goto loc_82BD4778;
loc_82BD4774:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD4778:
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

__attribute__((alias("__imp__sub_82BD478C"))) PPC_WEAK_FUNC(sub_82BD478C);
PPC_FUNC_IMPL(__imp__sub_82BD478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4790"))) PPC_WEAK_FUNC(sub_82BD4790);
PPC_FUNC_IMPL(__imp__sub_82BD4790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82bd47ec
	if (!ctx.cr0.eq) goto loc_82BD47EC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82bd47c0
	goto loc_82BD47C0;
loc_82BD47B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BD47C0:
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82bd47b8
	if (ctx.cr0.eq) goto loc_82BD47B8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82BD47D4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bd47fc
	if (!ctx.cr6.eq) goto loc_82BD47FC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82BD47EC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82bd47d4
	if (ctx.cr0.eq) goto loc_82BD47D4;
loc_82BD47FC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4804"))) PPC_WEAK_FUNC(sub_82BD4804);
PPC_FUNC_IMPL(__imp__sub_82BD4804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4808"))) PPC_WEAK_FUNC(sub_82BD4808);
PPC_FUNC_IMPL(__imp__sub_82BD4808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,65(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82bd4864
	if (!ctx.cr0.eq) goto loc_82BD4864;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82bd4838
	goto loc_82BD4838;
loc_82BD4830:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BD4838:
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82bd4830
	if (ctx.cr0.eq) goto loc_82BD4830;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82BD484C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bd4874
	if (!ctx.cr6.eq) goto loc_82BD4874;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82BD4864:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82bd484c
	if (ctx.cr0.eq) goto loc_82BD484C;
loc_82BD4874:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD487C"))) PPC_WEAK_FUNC(sub_82BD487C);
PPC_FUNC_IMPL(__imp__sub_82BD487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4880"))) PPC_WEAK_FUNC(sub_82BD4880);
PPC_FUNC_IMPL(__imp__sub_82BD4880) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82bd48d8
	if (ctx.cr6.eq) goto loc_82BD48D8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82BD48BC:
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
	// bne 0x82bd48bc
	if (!ctx.cr0.eq) goto loc_82BD48BC;
loc_82BD48D8:
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd48e8
	if (ctx.cr6.eq) goto loc_82BD48E8;
	// bl 0x82480108
	ctx.lr = 0x82BD48E8;
	sub_82480108(ctx, base);
loc_82BD48E8:
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

__attribute__((alias("__imp__sub_82BD4900"))) PPC_WEAK_FUNC(sub_82BD4900);
PPC_FUNC_IMPL(__imp__sub_82BD4900) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82bd4954
	if (ctx.cr6.eq) goto loc_82BD4954;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82BD4938:
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
	// bne 0x82bd4938
	if (!ctx.cr0.eq) goto loc_82BD4938;
loc_82BD4954:
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd4964
	if (ctx.cr6.eq) goto loc_82BD4964;
	// bl 0x82480108
	ctx.lr = 0x82BD4964;
	sub_82480108(ctx, base);
loc_82BD4964:
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

__attribute__((alias("__imp__sub_82BD497C"))) PPC_WEAK_FUNC(sub_82BD497C);
PPC_FUNC_IMPL(__imp__sub_82BD497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4980"))) PPC_WEAK_FUNC(sub_82BD4980);
PPC_FUNC_IMPL(__imp__sub_82BD4980) {
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
	ctx.lr = 0x82BD49AC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd49d8
	if (ctx.cr0.eq) goto loc_82BD49D8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21844
	ctx.r9.s64 = ctx.r11.s64 + -21844;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd49dc
	goto loc_82BD49DC;
loc_82BD49D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD49DC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4a10
	if (!ctx.cr6.eq) goto loc_82BD4A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82BD49F0;
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
	ctx.lr = 0x82BD4A10;
	sub_82C10E98(ctx, base);
loc_82BD4A10:
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

__attribute__((alias("__imp__sub_82BD4A2C"))) PPC_WEAK_FUNC(sub_82BD4A2C);
PPC_FUNC_IMPL(__imp__sub_82BD4A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4A30"))) PPC_WEAK_FUNC(sub_82BD4A30);
PPC_FUNC_IMPL(__imp__sub_82BD4A30) {
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
	ctx.lr = 0x82BD4A5C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd4a88
	if (ctx.cr0.eq) goto loc_82BD4A88;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21824
	ctx.r9.s64 = ctx.r11.s64 + -21824;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd4a8c
	goto loc_82BD4A8C;
loc_82BD4A88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD4A8C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4ad8
	if (!ctx.cr6.eq) goto loc_82BD4AD8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4ab8
	if (ctx.cr6.eq) goto loc_82BD4AB8;
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
	ctx.lr = 0x82BD4AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD4AB8:
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
	ctx.lr = 0x82BD4AD8;
	sub_82C10E98(ctx, base);
loc_82BD4AD8:
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

__attribute__((alias("__imp__sub_82BD4AF4"))) PPC_WEAK_FUNC(sub_82BD4AF4);
PPC_FUNC_IMPL(__imp__sub_82BD4AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4AF8"))) PPC_WEAK_FUNC(sub_82BD4AF8);
PPC_FUNC_IMPL(__imp__sub_82BD4AF8) {
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
	ctx.lr = 0x82BD4B24;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd4b50
	if (ctx.cr0.eq) goto loc_82BD4B50;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21804
	ctx.r9.s64 = ctx.r11.s64 + -21804;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd4b54
	goto loc_82BD4B54;
loc_82BD4B50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD4B54:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4b88
	if (!ctx.cr6.eq) goto loc_82BD4B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01568
	ctx.lr = 0x82BD4B68;
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
	ctx.lr = 0x82BD4B88;
	sub_82C10E98(ctx, base);
loc_82BD4B88:
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

__attribute__((alias("__imp__sub_82BD4BA4"))) PPC_WEAK_FUNC(sub_82BD4BA4);
PPC_FUNC_IMPL(__imp__sub_82BD4BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4BA8"))) PPC_WEAK_FUNC(sub_82BD4BA8);
PPC_FUNC_IMPL(__imp__sub_82BD4BA8) {
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
	ctx.lr = 0x82BD4BD4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd4c00
	if (ctx.cr0.eq) goto loc_82BD4C00;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21784
	ctx.r9.s64 = ctx.r11.s64 + -21784;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd4c04
	goto loc_82BD4C04;
loc_82BD4C00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD4C04:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4c50
	if (!ctx.cr6.eq) goto loc_82BD4C50;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4c30
	if (ctx.cr6.eq) goto loc_82BD4C30;
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
	ctx.lr = 0x82BD4C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD4C30:
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
	ctx.lr = 0x82BD4C50;
	sub_82C10E98(ctx, base);
loc_82BD4C50:
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

__attribute__((alias("__imp__sub_82BD4C6C"))) PPC_WEAK_FUNC(sub_82BD4C6C);
PPC_FUNC_IMPL(__imp__sub_82BD4C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4C70"))) PPC_WEAK_FUNC(sub_82BD4C70);
PPC_FUNC_IMPL(__imp__sub_82BD4C70) {
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
	ctx.lr = 0x82BD4C9C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd4cc8
	if (ctx.cr0.eq) goto loc_82BD4CC8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21764
	ctx.r9.s64 = ctx.r11.s64 + -21764;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd4ccc
	goto loc_82BD4CCC;
loc_82BD4CC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD4CCC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4d18
	if (!ctx.cr6.eq) goto loc_82BD4D18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4cf8
	if (ctx.cr6.eq) goto loc_82BD4CF8;
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
	ctx.lr = 0x82BD4CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD4CF8:
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
	ctx.lr = 0x82BD4D18;
	sub_82C10E98(ctx, base);
loc_82BD4D18:
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

__attribute__((alias("__imp__sub_82BD4D34"))) PPC_WEAK_FUNC(sub_82BD4D34);
PPC_FUNC_IMPL(__imp__sub_82BD4D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4D38"))) PPC_WEAK_FUNC(sub_82BD4D38);
PPC_FUNC_IMPL(__imp__sub_82BD4D38) {
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
	ctx.lr = 0x82BD4D64;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd4d90
	if (ctx.cr0.eq) goto loc_82BD4D90;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21744
	ctx.r9.s64 = ctx.r11.s64 + -21744;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd4d94
	goto loc_82BD4D94;
loc_82BD4D90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD4D94:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4de0
	if (!ctx.cr6.eq) goto loc_82BD4DE0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4dc0
	if (ctx.cr6.eq) goto loc_82BD4DC0;
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
	ctx.lr = 0x82BD4DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD4DC0:
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
	ctx.lr = 0x82BD4DE0;
	sub_82C10E98(ctx, base);
loc_82BD4DE0:
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

__attribute__((alias("__imp__sub_82BD4DFC"))) PPC_WEAK_FUNC(sub_82BD4DFC);
PPC_FUNC_IMPL(__imp__sub_82BD4DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4E00"))) PPC_WEAK_FUNC(sub_82BD4E00);
PPC_FUNC_IMPL(__imp__sub_82BD4E00) {
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
	ctx.lr = 0x82BD4E2C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd4e58
	if (ctx.cr0.eq) goto loc_82BD4E58;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21724
	ctx.r9.s64 = ctx.r11.s64 + -21724;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd4e5c
	goto loc_82BD4E5C;
loc_82BD4E58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD4E5C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4ea8
	if (!ctx.cr6.eq) goto loc_82BD4EA8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4e88
	if (ctx.cr6.eq) goto loc_82BD4E88;
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
	ctx.lr = 0x82BD4E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD4E88:
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
	ctx.lr = 0x82BD4EA8;
	sub_82C10E98(ctx, base);
loc_82BD4EA8:
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

__attribute__((alias("__imp__sub_82BD4EC4"))) PPC_WEAK_FUNC(sub_82BD4EC4);
PPC_FUNC_IMPL(__imp__sub_82BD4EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4EC8"))) PPC_WEAK_FUNC(sub_82BD4EC8);
PPC_FUNC_IMPL(__imp__sub_82BD4EC8) {
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
	ctx.lr = 0x82BD4EF4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd4f20
	if (ctx.cr0.eq) goto loc_82BD4F20;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21704
	ctx.r9.s64 = ctx.r11.s64 + -21704;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd4f24
	goto loc_82BD4F24;
loc_82BD4F20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD4F24:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4f70
	if (!ctx.cr6.eq) goto loc_82BD4F70;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd4f50
	if (ctx.cr6.eq) goto loc_82BD4F50;
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
	ctx.lr = 0x82BD4F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD4F50:
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
	ctx.lr = 0x82BD4F70;
	sub_82C10E98(ctx, base);
loc_82BD4F70:
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

__attribute__((alias("__imp__sub_82BD4F8C"))) PPC_WEAK_FUNC(sub_82BD4F8C);
PPC_FUNC_IMPL(__imp__sub_82BD4F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4F90"))) PPC_WEAK_FUNC(sub_82BD4F90);
PPC_FUNC_IMPL(__imp__sub_82BD4F90) {
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
	ctx.lr = 0x82BD4FBC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd4fe8
	if (ctx.cr0.eq) goto loc_82BD4FE8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21684
	ctx.r9.s64 = ctx.r11.s64 + -21684;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd4fec
	goto loc_82BD4FEC;
loc_82BD4FE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD4FEC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5038
	if (!ctx.cr6.eq) goto loc_82BD5038;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5018
	if (ctx.cr6.eq) goto loc_82BD5018;
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
	ctx.lr = 0x82BD5018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5018:
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
	ctx.lr = 0x82BD5038;
	sub_82C10E98(ctx, base);
loc_82BD5038:
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

__attribute__((alias("__imp__sub_82BD5054"))) PPC_WEAK_FUNC(sub_82BD5054);
PPC_FUNC_IMPL(__imp__sub_82BD5054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5058"))) PPC_WEAK_FUNC(sub_82BD5058);
PPC_FUNC_IMPL(__imp__sub_82BD5058) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82e01568
	sub_82E01568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5060"))) PPC_WEAK_FUNC(sub_82BD5060);
PPC_FUNC_IMPL(__imp__sub_82BD5060) {
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
	ctx.lr = 0x82BD508C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd50b8
	if (ctx.cr0.eq) goto loc_82BD50B8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21644
	ctx.r9.s64 = ctx.r11.s64 + -21644;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd50bc
	goto loc_82BD50BC;
loc_82BD50B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD50BC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5108
	if (!ctx.cr6.eq) goto loc_82BD5108;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd50e8
	if (ctx.cr6.eq) goto loc_82BD50E8;
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
	ctx.lr = 0x82BD50E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD50E8:
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
	ctx.lr = 0x82BD5108;
	sub_82C10E98(ctx, base);
loc_82BD5108:
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

__attribute__((alias("__imp__sub_82BD5124"))) PPC_WEAK_FUNC(sub_82BD5124);
PPC_FUNC_IMPL(__imp__sub_82BD5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5128"))) PPC_WEAK_FUNC(sub_82BD5128);
PPC_FUNC_IMPL(__imp__sub_82BD5128) {
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
	ctx.lr = 0x82BD5154;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5180
	if (ctx.cr0.eq) goto loc_82BD5180;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21624
	ctx.r9.s64 = ctx.r11.s64 + -21624;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5184
	goto loc_82BD5184;
loc_82BD5180:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5184:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd51d0
	if (!ctx.cr6.eq) goto loc_82BD51D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd51b0
	if (ctx.cr6.eq) goto loc_82BD51B0;
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
	ctx.lr = 0x82BD51B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD51B0:
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
	ctx.lr = 0x82BD51D0;
	sub_82C10E98(ctx, base);
loc_82BD51D0:
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

__attribute__((alias("__imp__sub_82BD51EC"))) PPC_WEAK_FUNC(sub_82BD51EC);
PPC_FUNC_IMPL(__imp__sub_82BD51EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD51F0"))) PPC_WEAK_FUNC(sub_82BD51F0);
PPC_FUNC_IMPL(__imp__sub_82BD51F0) {
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
	ctx.lr = 0x82BD521C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5248
	if (ctx.cr0.eq) goto loc_82BD5248;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21604
	ctx.r9.s64 = ctx.r11.s64 + -21604;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd524c
	goto loc_82BD524C;
loc_82BD5248:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD524C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5298
	if (!ctx.cr6.eq) goto loc_82BD5298;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5278
	if (ctx.cr6.eq) goto loc_82BD5278;
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
	ctx.lr = 0x82BD5278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5278:
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
	ctx.lr = 0x82BD5298;
	sub_82C10E98(ctx, base);
loc_82BD5298:
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

__attribute__((alias("__imp__sub_82BD52B4"))) PPC_WEAK_FUNC(sub_82BD52B4);
PPC_FUNC_IMPL(__imp__sub_82BD52B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD52B8"))) PPC_WEAK_FUNC(sub_82BD52B8);
PPC_FUNC_IMPL(__imp__sub_82BD52B8) {
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
	ctx.lr = 0x82BD52E4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5310
	if (ctx.cr0.eq) goto loc_82BD5310;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21584
	ctx.r9.s64 = ctx.r11.s64 + -21584;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5314
	goto loc_82BD5314;
loc_82BD5310:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5314:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5360
	if (!ctx.cr6.eq) goto loc_82BD5360;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5340
	if (ctx.cr6.eq) goto loc_82BD5340;
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
	ctx.lr = 0x82BD5340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5340:
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
	ctx.lr = 0x82BD5360;
	sub_82C10E98(ctx, base);
loc_82BD5360:
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

__attribute__((alias("__imp__sub_82BD537C"))) PPC_WEAK_FUNC(sub_82BD537C);
PPC_FUNC_IMPL(__imp__sub_82BD537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5380"))) PPC_WEAK_FUNC(sub_82BD5380);
PPC_FUNC_IMPL(__imp__sub_82BD5380) {
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
	ctx.lr = 0x82BD53AC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd53d8
	if (ctx.cr0.eq) goto loc_82BD53D8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21564
	ctx.r9.s64 = ctx.r11.s64 + -21564;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd53dc
	goto loc_82BD53DC;
loc_82BD53D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD53DC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5428
	if (!ctx.cr6.eq) goto loc_82BD5428;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5408
	if (ctx.cr6.eq) goto loc_82BD5408;
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
	ctx.lr = 0x82BD5408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5408:
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
	ctx.lr = 0x82BD5428;
	sub_82C10E98(ctx, base);
loc_82BD5428:
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

__attribute__((alias("__imp__sub_82BD5444"))) PPC_WEAK_FUNC(sub_82BD5444);
PPC_FUNC_IMPL(__imp__sub_82BD5444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5448"))) PPC_WEAK_FUNC(sub_82BD5448);
PPC_FUNC_IMPL(__imp__sub_82BD5448) {
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
	ctx.lr = 0x82BD5474;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd54a0
	if (ctx.cr0.eq) goto loc_82BD54A0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21544
	ctx.r9.s64 = ctx.r11.s64 + -21544;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd54a4
	goto loc_82BD54A4;
loc_82BD54A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD54A4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd54f0
	if (!ctx.cr6.eq) goto loc_82BD54F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd54d0
	if (ctx.cr6.eq) goto loc_82BD54D0;
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
	ctx.lr = 0x82BD54D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD54D0:
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
	ctx.lr = 0x82BD54F0;
	sub_82C10E98(ctx, base);
loc_82BD54F0:
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

__attribute__((alias("__imp__sub_82BD550C"))) PPC_WEAK_FUNC(sub_82BD550C);
PPC_FUNC_IMPL(__imp__sub_82BD550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5510"))) PPC_WEAK_FUNC(sub_82BD5510);
PPC_FUNC_IMPL(__imp__sub_82BD5510) {
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
	ctx.lr = 0x82BD553C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5568
	if (ctx.cr0.eq) goto loc_82BD5568;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21524
	ctx.r9.s64 = ctx.r11.s64 + -21524;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd556c
	goto loc_82BD556C;
loc_82BD5568:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD556C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd55b8
	if (!ctx.cr6.eq) goto loc_82BD55B8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5598
	if (ctx.cr6.eq) goto loc_82BD5598;
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
	ctx.lr = 0x82BD5598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5598:
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
	ctx.lr = 0x82BD55B8;
	sub_82C10E98(ctx, base);
loc_82BD55B8:
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

__attribute__((alias("__imp__sub_82BD55D4"))) PPC_WEAK_FUNC(sub_82BD55D4);
PPC_FUNC_IMPL(__imp__sub_82BD55D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD55D8"))) PPC_WEAK_FUNC(sub_82BD55D8);
PPC_FUNC_IMPL(__imp__sub_82BD55D8) {
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
	ctx.lr = 0x82BD5604;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5630
	if (ctx.cr0.eq) goto loc_82BD5630;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21504
	ctx.r9.s64 = ctx.r11.s64 + -21504;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5634
	goto loc_82BD5634;
loc_82BD5630:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5634:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5680
	if (!ctx.cr6.eq) goto loc_82BD5680;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5660
	if (ctx.cr6.eq) goto loc_82BD5660;
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
	ctx.lr = 0x82BD5660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5660:
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
	ctx.lr = 0x82BD5680;
	sub_82C10E98(ctx, base);
loc_82BD5680:
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

__attribute__((alias("__imp__sub_82BD569C"))) PPC_WEAK_FUNC(sub_82BD569C);
PPC_FUNC_IMPL(__imp__sub_82BD569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD56A0"))) PPC_WEAK_FUNC(sub_82BD56A0);
PPC_FUNC_IMPL(__imp__sub_82BD56A0) {
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
	ctx.lr = 0x82BD56CC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd56f8
	if (ctx.cr0.eq) goto loc_82BD56F8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21484
	ctx.r9.s64 = ctx.r11.s64 + -21484;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd56fc
	goto loc_82BD56FC;
loc_82BD56F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD56FC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5748
	if (!ctx.cr6.eq) goto loc_82BD5748;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5728
	if (ctx.cr6.eq) goto loc_82BD5728;
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
	ctx.lr = 0x82BD5728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5728:
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
	ctx.lr = 0x82BD5748;
	sub_82C10E98(ctx, base);
loc_82BD5748:
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

__attribute__((alias("__imp__sub_82BD5764"))) PPC_WEAK_FUNC(sub_82BD5764);
PPC_FUNC_IMPL(__imp__sub_82BD5764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5768"))) PPC_WEAK_FUNC(sub_82BD5768);
PPC_FUNC_IMPL(__imp__sub_82BD5768) {
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
	ctx.lr = 0x82BD5794;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd57c0
	if (ctx.cr0.eq) goto loc_82BD57C0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21464
	ctx.r9.s64 = ctx.r11.s64 + -21464;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd57c4
	goto loc_82BD57C4;
loc_82BD57C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD57C4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5810
	if (!ctx.cr6.eq) goto loc_82BD5810;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd57f0
	if (ctx.cr6.eq) goto loc_82BD57F0;
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
	ctx.lr = 0x82BD57F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD57F0:
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
	ctx.lr = 0x82BD5810;
	sub_82C10E98(ctx, base);
loc_82BD5810:
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

__attribute__((alias("__imp__sub_82BD582C"))) PPC_WEAK_FUNC(sub_82BD582C);
PPC_FUNC_IMPL(__imp__sub_82BD582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5830"))) PPC_WEAK_FUNC(sub_82BD5830);
PPC_FUNC_IMPL(__imp__sub_82BD5830) {
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
	ctx.lr = 0x82BD585C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5888
	if (ctx.cr0.eq) goto loc_82BD5888;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21444
	ctx.r9.s64 = ctx.r11.s64 + -21444;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd588c
	goto loc_82BD588C;
loc_82BD5888:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD588C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd58d8
	if (!ctx.cr6.eq) goto loc_82BD58D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd58b8
	if (ctx.cr6.eq) goto loc_82BD58B8;
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
	ctx.lr = 0x82BD58B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD58B8:
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
	ctx.lr = 0x82BD58D8;
	sub_82C10E98(ctx, base);
loc_82BD58D8:
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

__attribute__((alias("__imp__sub_82BD58F4"))) PPC_WEAK_FUNC(sub_82BD58F4);
PPC_FUNC_IMPL(__imp__sub_82BD58F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD58F8"))) PPC_WEAK_FUNC(sub_82BD58F8);
PPC_FUNC_IMPL(__imp__sub_82BD58F8) {
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
	ctx.lr = 0x82BD5924;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5950
	if (ctx.cr0.eq) goto loc_82BD5950;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21424
	ctx.r9.s64 = ctx.r11.s64 + -21424;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5954
	goto loc_82BD5954;
loc_82BD5950:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5954:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd59a0
	if (!ctx.cr6.eq) goto loc_82BD59A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5980
	if (ctx.cr6.eq) goto loc_82BD5980;
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
	ctx.lr = 0x82BD5980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5980:
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
	ctx.lr = 0x82BD59A0;
	sub_82C10E98(ctx, base);
loc_82BD59A0:
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

__attribute__((alias("__imp__sub_82BD59BC"))) PPC_WEAK_FUNC(sub_82BD59BC);
PPC_FUNC_IMPL(__imp__sub_82BD59BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD59C0"))) PPC_WEAK_FUNC(sub_82BD59C0);
PPC_FUNC_IMPL(__imp__sub_82BD59C0) {
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
	ctx.lr = 0x82BD59EC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5a18
	if (ctx.cr0.eq) goto loc_82BD5A18;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21404
	ctx.r9.s64 = ctx.r11.s64 + -21404;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5a1c
	goto loc_82BD5A1C;
loc_82BD5A18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5A1C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5a68
	if (!ctx.cr6.eq) goto loc_82BD5A68;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5a48
	if (ctx.cr6.eq) goto loc_82BD5A48;
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
	ctx.lr = 0x82BD5A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5A48:
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
	ctx.lr = 0x82BD5A68;
	sub_82C10E98(ctx, base);
loc_82BD5A68:
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

__attribute__((alias("__imp__sub_82BD5A84"))) PPC_WEAK_FUNC(sub_82BD5A84);
PPC_FUNC_IMPL(__imp__sub_82BD5A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5A88"))) PPC_WEAK_FUNC(sub_82BD5A88);
PPC_FUNC_IMPL(__imp__sub_82BD5A88) {
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
	ctx.lr = 0x82BD5AB4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5ae0
	if (ctx.cr0.eq) goto loc_82BD5AE0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21384
	ctx.r9.s64 = ctx.r11.s64 + -21384;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5ae4
	goto loc_82BD5AE4;
loc_82BD5AE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5AE4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5b30
	if (!ctx.cr6.eq) goto loc_82BD5B30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5b10
	if (ctx.cr6.eq) goto loc_82BD5B10;
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
	ctx.lr = 0x82BD5B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5B10:
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
	ctx.lr = 0x82BD5B30;
	sub_82C10E98(ctx, base);
loc_82BD5B30:
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

__attribute__((alias("__imp__sub_82BD5B4C"))) PPC_WEAK_FUNC(sub_82BD5B4C);
PPC_FUNC_IMPL(__imp__sub_82BD5B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5B50"))) PPC_WEAK_FUNC(sub_82BD5B50);
PPC_FUNC_IMPL(__imp__sub_82BD5B50) {
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
	ctx.lr = 0x82BD5B7C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5ba8
	if (ctx.cr0.eq) goto loc_82BD5BA8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21364
	ctx.r9.s64 = ctx.r11.s64 + -21364;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5bac
	goto loc_82BD5BAC;
loc_82BD5BA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5BAC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5bf8
	if (!ctx.cr6.eq) goto loc_82BD5BF8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5bd8
	if (ctx.cr6.eq) goto loc_82BD5BD8;
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
	ctx.lr = 0x82BD5BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5BD8:
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
	ctx.lr = 0x82BD5BF8;
	sub_82C10E98(ctx, base);
loc_82BD5BF8:
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

__attribute__((alias("__imp__sub_82BD5C14"))) PPC_WEAK_FUNC(sub_82BD5C14);
PPC_FUNC_IMPL(__imp__sub_82BD5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5C18"))) PPC_WEAK_FUNC(sub_82BD5C18);
PPC_FUNC_IMPL(__imp__sub_82BD5C18) {
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
	ctx.lr = 0x82BD5C44;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5c70
	if (ctx.cr0.eq) goto loc_82BD5C70;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21344
	ctx.r9.s64 = ctx.r11.s64 + -21344;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5c74
	goto loc_82BD5C74;
loc_82BD5C70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5C74:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5cc0
	if (!ctx.cr6.eq) goto loc_82BD5CC0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5ca0
	if (ctx.cr6.eq) goto loc_82BD5CA0;
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
	ctx.lr = 0x82BD5CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5CA0:
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
	ctx.lr = 0x82BD5CC0;
	sub_82C10E98(ctx, base);
loc_82BD5CC0:
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

__attribute__((alias("__imp__sub_82BD5CDC"))) PPC_WEAK_FUNC(sub_82BD5CDC);
PPC_FUNC_IMPL(__imp__sub_82BD5CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5CE0"))) PPC_WEAK_FUNC(sub_82BD5CE0);
PPC_FUNC_IMPL(__imp__sub_82BD5CE0) {
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
	ctx.lr = 0x82BD5D0C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5d38
	if (ctx.cr0.eq) goto loc_82BD5D38;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21324
	ctx.r9.s64 = ctx.r11.s64 + -21324;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5d3c
	goto loc_82BD5D3C;
loc_82BD5D38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5D3C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5d88
	if (!ctx.cr6.eq) goto loc_82BD5D88;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5d68
	if (ctx.cr6.eq) goto loc_82BD5D68;
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
	ctx.lr = 0x82BD5D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5D68:
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
	ctx.lr = 0x82BD5D88;
	sub_82C10E98(ctx, base);
loc_82BD5D88:
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

__attribute__((alias("__imp__sub_82BD5DA4"))) PPC_WEAK_FUNC(sub_82BD5DA4);
PPC_FUNC_IMPL(__imp__sub_82BD5DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5DA8"))) PPC_WEAK_FUNC(sub_82BD5DA8);
PPC_FUNC_IMPL(__imp__sub_82BD5DA8) {
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
	ctx.lr = 0x82BD5DD4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5e00
	if (ctx.cr0.eq) goto loc_82BD5E00;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21304
	ctx.r9.s64 = ctx.r11.s64 + -21304;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5e04
	goto loc_82BD5E04;
loc_82BD5E00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5E04:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5e50
	if (!ctx.cr6.eq) goto loc_82BD5E50;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5e30
	if (ctx.cr6.eq) goto loc_82BD5E30;
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
	ctx.lr = 0x82BD5E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5E30:
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
	ctx.lr = 0x82BD5E50;
	sub_82C10E98(ctx, base);
loc_82BD5E50:
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

__attribute__((alias("__imp__sub_82BD5E6C"))) PPC_WEAK_FUNC(sub_82BD5E6C);
PPC_FUNC_IMPL(__imp__sub_82BD5E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5E70"))) PPC_WEAK_FUNC(sub_82BD5E70);
PPC_FUNC_IMPL(__imp__sub_82BD5E70) {
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
	ctx.lr = 0x82BD5E9C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5ec8
	if (ctx.cr0.eq) goto loc_82BD5EC8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21284
	ctx.r9.s64 = ctx.r11.s64 + -21284;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5ecc
	goto loc_82BD5ECC;
loc_82BD5EC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5ECC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5f18
	if (!ctx.cr6.eq) goto loc_82BD5F18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5ef8
	if (ctx.cr6.eq) goto loc_82BD5EF8;
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
	ctx.lr = 0x82BD5EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5EF8:
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
	ctx.lr = 0x82BD5F18;
	sub_82C10E98(ctx, base);
loc_82BD5F18:
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

__attribute__((alias("__imp__sub_82BD5F34"))) PPC_WEAK_FUNC(sub_82BD5F34);
PPC_FUNC_IMPL(__imp__sub_82BD5F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5F38"))) PPC_WEAK_FUNC(sub_82BD5F38);
PPC_FUNC_IMPL(__imp__sub_82BD5F38) {
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
	ctx.lr = 0x82BD5F64;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd5f90
	if (ctx.cr0.eq) goto loc_82BD5F90;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21264
	ctx.r9.s64 = ctx.r11.s64 + -21264;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd5f94
	goto loc_82BD5F94;
loc_82BD5F90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5F94:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5fe0
	if (!ctx.cr6.eq) goto loc_82BD5FE0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd5fc0
	if (ctx.cr6.eq) goto loc_82BD5FC0;
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
	ctx.lr = 0x82BD5FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD5FC0:
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
	ctx.lr = 0x82BD5FE0;
	sub_82C10E98(ctx, base);
loc_82BD5FE0:
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

__attribute__((alias("__imp__sub_82BD5FFC"))) PPC_WEAK_FUNC(sub_82BD5FFC);
PPC_FUNC_IMPL(__imp__sub_82BD5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6000"))) PPC_WEAK_FUNC(sub_82BD6000);
PPC_FUNC_IMPL(__imp__sub_82BD6000) {
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
	ctx.lr = 0x82BD602C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6058
	if (ctx.cr0.eq) goto loc_82BD6058;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21244
	ctx.r9.s64 = ctx.r11.s64 + -21244;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd605c
	goto loc_82BD605C;
loc_82BD6058:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD605C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd60a8
	if (!ctx.cr6.eq) goto loc_82BD60A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6088
	if (ctx.cr6.eq) goto loc_82BD6088;
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
	ctx.lr = 0x82BD6088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6088:
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
	ctx.lr = 0x82BD60A8;
	sub_82C10E98(ctx, base);
loc_82BD60A8:
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

__attribute__((alias("__imp__sub_82BD60C4"))) PPC_WEAK_FUNC(sub_82BD60C4);
PPC_FUNC_IMPL(__imp__sub_82BD60C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD60C8"))) PPC_WEAK_FUNC(sub_82BD60C8);
PPC_FUNC_IMPL(__imp__sub_82BD60C8) {
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
	ctx.lr = 0x82BD60F4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6120
	if (ctx.cr0.eq) goto loc_82BD6120;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21224
	ctx.r9.s64 = ctx.r11.s64 + -21224;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6124
	goto loc_82BD6124;
loc_82BD6120:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6124:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6170
	if (!ctx.cr6.eq) goto loc_82BD6170;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6150
	if (ctx.cr6.eq) goto loc_82BD6150;
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
	ctx.lr = 0x82BD6150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6150:
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
	ctx.lr = 0x82BD6170;
	sub_82C10E98(ctx, base);
loc_82BD6170:
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

__attribute__((alias("__imp__sub_82BD618C"))) PPC_WEAK_FUNC(sub_82BD618C);
PPC_FUNC_IMPL(__imp__sub_82BD618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6190"))) PPC_WEAK_FUNC(sub_82BD6190);
PPC_FUNC_IMPL(__imp__sub_82BD6190) {
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
	ctx.lr = 0x82BD61BC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd61e8
	if (ctx.cr0.eq) goto loc_82BD61E8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21204
	ctx.r9.s64 = ctx.r11.s64 + -21204;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd61ec
	goto loc_82BD61EC;
loc_82BD61E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD61EC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6238
	if (!ctx.cr6.eq) goto loc_82BD6238;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6218
	if (ctx.cr6.eq) goto loc_82BD6218;
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
	ctx.lr = 0x82BD6218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6218:
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
	ctx.lr = 0x82BD6238;
	sub_82C10E98(ctx, base);
loc_82BD6238:
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

__attribute__((alias("__imp__sub_82BD6254"))) PPC_WEAK_FUNC(sub_82BD6254);
PPC_FUNC_IMPL(__imp__sub_82BD6254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6258"))) PPC_WEAK_FUNC(sub_82BD6258);
PPC_FUNC_IMPL(__imp__sub_82BD6258) {
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
	ctx.lr = 0x82BD6284;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd62b0
	if (ctx.cr0.eq) goto loc_82BD62B0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21184
	ctx.r9.s64 = ctx.r11.s64 + -21184;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd62b4
	goto loc_82BD62B4;
loc_82BD62B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD62B4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6300
	if (!ctx.cr6.eq) goto loc_82BD6300;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd62e0
	if (ctx.cr6.eq) goto loc_82BD62E0;
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
	ctx.lr = 0x82BD62E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD62E0:
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
	ctx.lr = 0x82BD6300;
	sub_82C10E98(ctx, base);
loc_82BD6300:
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

__attribute__((alias("__imp__sub_82BD631C"))) PPC_WEAK_FUNC(sub_82BD631C);
PPC_FUNC_IMPL(__imp__sub_82BD631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6320"))) PPC_WEAK_FUNC(sub_82BD6320);
PPC_FUNC_IMPL(__imp__sub_82BD6320) {
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
	ctx.lr = 0x82BD634C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6378
	if (ctx.cr0.eq) goto loc_82BD6378;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21164
	ctx.r9.s64 = ctx.r11.s64 + -21164;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd637c
	goto loc_82BD637C;
loc_82BD6378:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD637C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd63c8
	if (!ctx.cr6.eq) goto loc_82BD63C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd63a8
	if (ctx.cr6.eq) goto loc_82BD63A8;
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
	ctx.lr = 0x82BD63A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD63A8:
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
	ctx.lr = 0x82BD63C8;
	sub_82C10E98(ctx, base);
loc_82BD63C8:
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

__attribute__((alias("__imp__sub_82BD63E4"))) PPC_WEAK_FUNC(sub_82BD63E4);
PPC_FUNC_IMPL(__imp__sub_82BD63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD63E8"))) PPC_WEAK_FUNC(sub_82BD63E8);
PPC_FUNC_IMPL(__imp__sub_82BD63E8) {
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
	ctx.lr = 0x82BD6414;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6440
	if (ctx.cr0.eq) goto loc_82BD6440;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21144
	ctx.r9.s64 = ctx.r11.s64 + -21144;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6444
	goto loc_82BD6444;
loc_82BD6440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6444:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6490
	if (!ctx.cr6.eq) goto loc_82BD6490;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6470
	if (ctx.cr6.eq) goto loc_82BD6470;
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
	ctx.lr = 0x82BD6470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6470:
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
	ctx.lr = 0x82BD6490;
	sub_82C10E98(ctx, base);
loc_82BD6490:
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

__attribute__((alias("__imp__sub_82BD64AC"))) PPC_WEAK_FUNC(sub_82BD64AC);
PPC_FUNC_IMPL(__imp__sub_82BD64AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD64B0"))) PPC_WEAK_FUNC(sub_82BD64B0);
PPC_FUNC_IMPL(__imp__sub_82BD64B0) {
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
	ctx.lr = 0x82BD64DC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6508
	if (ctx.cr0.eq) goto loc_82BD6508;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21124
	ctx.r9.s64 = ctx.r11.s64 + -21124;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd650c
	goto loc_82BD650C;
loc_82BD6508:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD650C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6558
	if (!ctx.cr6.eq) goto loc_82BD6558;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6538
	if (ctx.cr6.eq) goto loc_82BD6538;
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
	ctx.lr = 0x82BD6538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6538:
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
	ctx.lr = 0x82BD6558;
	sub_82C10E98(ctx, base);
loc_82BD6558:
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

__attribute__((alias("__imp__sub_82BD6574"))) PPC_WEAK_FUNC(sub_82BD6574);
PPC_FUNC_IMPL(__imp__sub_82BD6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6578"))) PPC_WEAK_FUNC(sub_82BD6578);
PPC_FUNC_IMPL(__imp__sub_82BD6578) {
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
	ctx.lr = 0x82BD65A4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd65d0
	if (ctx.cr0.eq) goto loc_82BD65D0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21104
	ctx.r9.s64 = ctx.r11.s64 + -21104;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd65d4
	goto loc_82BD65D4;
loc_82BD65D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD65D4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6620
	if (!ctx.cr6.eq) goto loc_82BD6620;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6600
	if (ctx.cr6.eq) goto loc_82BD6600;
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
	ctx.lr = 0x82BD6600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6600:
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
	ctx.lr = 0x82BD6620;
	sub_82C10E98(ctx, base);
loc_82BD6620:
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

__attribute__((alias("__imp__sub_82BD663C"))) PPC_WEAK_FUNC(sub_82BD663C);
PPC_FUNC_IMPL(__imp__sub_82BD663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6640"))) PPC_WEAK_FUNC(sub_82BD6640);
PPC_FUNC_IMPL(__imp__sub_82BD6640) {
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
	ctx.lr = 0x82BD666C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6698
	if (ctx.cr0.eq) goto loc_82BD6698;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21084
	ctx.r9.s64 = ctx.r11.s64 + -21084;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd669c
	goto loc_82BD669C;
loc_82BD6698:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD669C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd66e8
	if (!ctx.cr6.eq) goto loc_82BD66E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd66c8
	if (ctx.cr6.eq) goto loc_82BD66C8;
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
	ctx.lr = 0x82BD66C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD66C8:
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
	ctx.lr = 0x82BD66E8;
	sub_82C10E98(ctx, base);
loc_82BD66E8:
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

__attribute__((alias("__imp__sub_82BD6704"))) PPC_WEAK_FUNC(sub_82BD6704);
PPC_FUNC_IMPL(__imp__sub_82BD6704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6708"))) PPC_WEAK_FUNC(sub_82BD6708);
PPC_FUNC_IMPL(__imp__sub_82BD6708) {
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
	ctx.lr = 0x82BD6734;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6760
	if (ctx.cr0.eq) goto loc_82BD6760;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21064
	ctx.r9.s64 = ctx.r11.s64 + -21064;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6764
	goto loc_82BD6764;
loc_82BD6760:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6764:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd67b0
	if (!ctx.cr6.eq) goto loc_82BD67B0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6790
	if (ctx.cr6.eq) goto loc_82BD6790;
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
	ctx.lr = 0x82BD6790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6790:
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
	ctx.lr = 0x82BD67B0;
	sub_82C10E98(ctx, base);
loc_82BD67B0:
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

__attribute__((alias("__imp__sub_82BD67CC"))) PPC_WEAK_FUNC(sub_82BD67CC);
PPC_FUNC_IMPL(__imp__sub_82BD67CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD67D0"))) PPC_WEAK_FUNC(sub_82BD67D0);
PPC_FUNC_IMPL(__imp__sub_82BD67D0) {
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
	ctx.lr = 0x82BD67FC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6828
	if (ctx.cr0.eq) goto loc_82BD6828;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21044
	ctx.r9.s64 = ctx.r11.s64 + -21044;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd682c
	goto loc_82BD682C;
loc_82BD6828:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD682C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6878
	if (!ctx.cr6.eq) goto loc_82BD6878;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6858
	if (ctx.cr6.eq) goto loc_82BD6858;
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
	ctx.lr = 0x82BD6858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6858:
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
	ctx.lr = 0x82BD6878;
	sub_82C10E98(ctx, base);
loc_82BD6878:
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

__attribute__((alias("__imp__sub_82BD6894"))) PPC_WEAK_FUNC(sub_82BD6894);
PPC_FUNC_IMPL(__imp__sub_82BD6894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6898"))) PPC_WEAK_FUNC(sub_82BD6898);
PPC_FUNC_IMPL(__imp__sub_82BD6898) {
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
	ctx.lr = 0x82BD68C4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd68f0
	if (ctx.cr0.eq) goto loc_82BD68F0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21024
	ctx.r9.s64 = ctx.r11.s64 + -21024;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd68f4
	goto loc_82BD68F4;
loc_82BD68F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD68F4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6940
	if (!ctx.cr6.eq) goto loc_82BD6940;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6920
	if (ctx.cr6.eq) goto loc_82BD6920;
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
	ctx.lr = 0x82BD6920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6920:
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
	ctx.lr = 0x82BD6940;
	sub_82C10E98(ctx, base);
loc_82BD6940:
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

__attribute__((alias("__imp__sub_82BD695C"))) PPC_WEAK_FUNC(sub_82BD695C);
PPC_FUNC_IMPL(__imp__sub_82BD695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6960"))) PPC_WEAK_FUNC(sub_82BD6960);
PPC_FUNC_IMPL(__imp__sub_82BD6960) {
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
	ctx.lr = 0x82BD698C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd69b8
	if (ctx.cr0.eq) goto loc_82BD69B8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21004
	ctx.r9.s64 = ctx.r11.s64 + -21004;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd69bc
	goto loc_82BD69BC;
loc_82BD69B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD69BC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6a08
	if (!ctx.cr6.eq) goto loc_82BD6A08;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd69e8
	if (ctx.cr6.eq) goto loc_82BD69E8;
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
	ctx.lr = 0x82BD69E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD69E8:
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
	ctx.lr = 0x82BD6A08;
	sub_82C10E98(ctx, base);
loc_82BD6A08:
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

__attribute__((alias("__imp__sub_82BD6A24"))) PPC_WEAK_FUNC(sub_82BD6A24);
PPC_FUNC_IMPL(__imp__sub_82BD6A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6A28"))) PPC_WEAK_FUNC(sub_82BD6A28);
PPC_FUNC_IMPL(__imp__sub_82BD6A28) {
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
	ctx.lr = 0x82BD6A54;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6a80
	if (ctx.cr0.eq) goto loc_82BD6A80;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20984
	ctx.r9.s64 = ctx.r11.s64 + -20984;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6a84
	goto loc_82BD6A84;
loc_82BD6A80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6A84:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6ad0
	if (!ctx.cr6.eq) goto loc_82BD6AD0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6ab0
	if (ctx.cr6.eq) goto loc_82BD6AB0;
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
	ctx.lr = 0x82BD6AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6AB0:
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
	ctx.lr = 0x82BD6AD0;
	sub_82C10E98(ctx, base);
loc_82BD6AD0:
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

__attribute__((alias("__imp__sub_82BD6AEC"))) PPC_WEAK_FUNC(sub_82BD6AEC);
PPC_FUNC_IMPL(__imp__sub_82BD6AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6AF0"))) PPC_WEAK_FUNC(sub_82BD6AF0);
PPC_FUNC_IMPL(__imp__sub_82BD6AF0) {
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
	ctx.lr = 0x82BD6B1C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6b48
	if (ctx.cr0.eq) goto loc_82BD6B48;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20964
	ctx.r9.s64 = ctx.r11.s64 + -20964;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6b4c
	goto loc_82BD6B4C;
loc_82BD6B48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6B4C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6b98
	if (!ctx.cr6.eq) goto loc_82BD6B98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6b78
	if (ctx.cr6.eq) goto loc_82BD6B78;
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
	ctx.lr = 0x82BD6B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6B78:
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
	ctx.lr = 0x82BD6B98;
	sub_82C10E98(ctx, base);
loc_82BD6B98:
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

__attribute__((alias("__imp__sub_82BD6BB4"))) PPC_WEAK_FUNC(sub_82BD6BB4);
PPC_FUNC_IMPL(__imp__sub_82BD6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6BB8"))) PPC_WEAK_FUNC(sub_82BD6BB8);
PPC_FUNC_IMPL(__imp__sub_82BD6BB8) {
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
	ctx.lr = 0x82BD6BE4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6c10
	if (ctx.cr0.eq) goto loc_82BD6C10;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20944
	ctx.r9.s64 = ctx.r11.s64 + -20944;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6c14
	goto loc_82BD6C14;
loc_82BD6C10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6C14:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6c60
	if (!ctx.cr6.eq) goto loc_82BD6C60;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6c40
	if (ctx.cr6.eq) goto loc_82BD6C40;
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
	ctx.lr = 0x82BD6C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6C40:
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
	ctx.lr = 0x82BD6C60;
	sub_82C10E98(ctx, base);
loc_82BD6C60:
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

__attribute__((alias("__imp__sub_82BD6C7C"))) PPC_WEAK_FUNC(sub_82BD6C7C);
PPC_FUNC_IMPL(__imp__sub_82BD6C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6C80"))) PPC_WEAK_FUNC(sub_82BD6C80);
PPC_FUNC_IMPL(__imp__sub_82BD6C80) {
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
	ctx.lr = 0x82BD6CAC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6cd8
	if (ctx.cr0.eq) goto loc_82BD6CD8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20924
	ctx.r9.s64 = ctx.r11.s64 + -20924;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6cdc
	goto loc_82BD6CDC;
loc_82BD6CD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6CDC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6d28
	if (!ctx.cr6.eq) goto loc_82BD6D28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6d08
	if (ctx.cr6.eq) goto loc_82BD6D08;
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
	ctx.lr = 0x82BD6D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6D08:
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
	ctx.lr = 0x82BD6D28;
	sub_82C10E98(ctx, base);
loc_82BD6D28:
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

__attribute__((alias("__imp__sub_82BD6D44"))) PPC_WEAK_FUNC(sub_82BD6D44);
PPC_FUNC_IMPL(__imp__sub_82BD6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6D48"))) PPC_WEAK_FUNC(sub_82BD6D48);
PPC_FUNC_IMPL(__imp__sub_82BD6D48) {
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
	ctx.lr = 0x82BD6D74;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6da0
	if (ctx.cr0.eq) goto loc_82BD6DA0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20904
	ctx.r9.s64 = ctx.r11.s64 + -20904;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6da4
	goto loc_82BD6DA4;
loc_82BD6DA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6DA4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6df0
	if (!ctx.cr6.eq) goto loc_82BD6DF0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6dd0
	if (ctx.cr6.eq) goto loc_82BD6DD0;
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
	ctx.lr = 0x82BD6DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6DD0:
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
	ctx.lr = 0x82BD6DF0;
	sub_82C10E98(ctx, base);
loc_82BD6DF0:
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

__attribute__((alias("__imp__sub_82BD6E0C"))) PPC_WEAK_FUNC(sub_82BD6E0C);
PPC_FUNC_IMPL(__imp__sub_82BD6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6E10"))) PPC_WEAK_FUNC(sub_82BD6E10);
PPC_FUNC_IMPL(__imp__sub_82BD6E10) {
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
	ctx.lr = 0x82BD6E3C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6e68
	if (ctx.cr0.eq) goto loc_82BD6E68;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20884
	ctx.r9.s64 = ctx.r11.s64 + -20884;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6e6c
	goto loc_82BD6E6C;
loc_82BD6E68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6E6C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6eb8
	if (!ctx.cr6.eq) goto loc_82BD6EB8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6e98
	if (ctx.cr6.eq) goto loc_82BD6E98;
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
	ctx.lr = 0x82BD6E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6E98:
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
	ctx.lr = 0x82BD6EB8;
	sub_82C10E98(ctx, base);
loc_82BD6EB8:
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

__attribute__((alias("__imp__sub_82BD6ED4"))) PPC_WEAK_FUNC(sub_82BD6ED4);
PPC_FUNC_IMPL(__imp__sub_82BD6ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6ED8"))) PPC_WEAK_FUNC(sub_82BD6ED8);
PPC_FUNC_IMPL(__imp__sub_82BD6ED8) {
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
	ctx.lr = 0x82BD6F04;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6f30
	if (ctx.cr0.eq) goto loc_82BD6F30;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20864
	ctx.r9.s64 = ctx.r11.s64 + -20864;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6f34
	goto loc_82BD6F34;
loc_82BD6F30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6F34:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd6f80
	if (!ctx.cr6.eq) goto loc_82BD6F80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd6f60
	if (ctx.cr6.eq) goto loc_82BD6F60;
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
	ctx.lr = 0x82BD6F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD6F60:
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
	ctx.lr = 0x82BD6F80;
	sub_82C10E98(ctx, base);
loc_82BD6F80:
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

__attribute__((alias("__imp__sub_82BD6F9C"))) PPC_WEAK_FUNC(sub_82BD6F9C);
PPC_FUNC_IMPL(__imp__sub_82BD6F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6FA0"))) PPC_WEAK_FUNC(sub_82BD6FA0);
PPC_FUNC_IMPL(__imp__sub_82BD6FA0) {
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
	ctx.lr = 0x82BD6FCC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd6ff8
	if (ctx.cr0.eq) goto loc_82BD6FF8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20844
	ctx.r9.s64 = ctx.r11.s64 + -20844;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd6ffc
	goto loc_82BD6FFC;
loc_82BD6FF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6FFC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd7048
	if (!ctx.cr6.eq) goto loc_82BD7048;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd7028
	if (ctx.cr6.eq) goto loc_82BD7028;
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
	ctx.lr = 0x82BD7028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD7028:
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
	ctx.lr = 0x82BD7048;
	sub_82C10E98(ctx, base);
loc_82BD7048:
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

__attribute__((alias("__imp__sub_82BD7064"))) PPC_WEAK_FUNC(sub_82BD7064);
PPC_FUNC_IMPL(__imp__sub_82BD7064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7068"))) PPC_WEAK_FUNC(sub_82BD7068);
PPC_FUNC_IMPL(__imp__sub_82BD7068) {
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
	ctx.lr = 0x82BD7094;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd70c0
	if (ctx.cr0.eq) goto loc_82BD70C0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20824
	ctx.r9.s64 = ctx.r11.s64 + -20824;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd70c4
	goto loc_82BD70C4;
loc_82BD70C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD70C4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd7110
	if (!ctx.cr6.eq) goto loc_82BD7110;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd70f0
	if (ctx.cr6.eq) goto loc_82BD70F0;
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
	ctx.lr = 0x82BD70F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD70F0:
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
	ctx.lr = 0x82BD7110;
	sub_82C10E98(ctx, base);
loc_82BD7110:
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

__attribute__((alias("__imp__sub_82BD712C"))) PPC_WEAK_FUNC(sub_82BD712C);
PPC_FUNC_IMPL(__imp__sub_82BD712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7130"))) PPC_WEAK_FUNC(sub_82BD7130);
PPC_FUNC_IMPL(__imp__sub_82BD7130) {
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
	ctx.lr = 0x82BD715C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd7188
	if (ctx.cr0.eq) goto loc_82BD7188;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20804
	ctx.r9.s64 = ctx.r11.s64 + -20804;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd718c
	goto loc_82BD718C;
loc_82BD7188:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD718C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd71d8
	if (!ctx.cr6.eq) goto loc_82BD71D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd71b8
	if (ctx.cr6.eq) goto loc_82BD71B8;
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
	ctx.lr = 0x82BD71B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD71B8:
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
	ctx.lr = 0x82BD71D8;
	sub_82C10E98(ctx, base);
loc_82BD71D8:
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

__attribute__((alias("__imp__sub_82BD71F4"))) PPC_WEAK_FUNC(sub_82BD71F4);
PPC_FUNC_IMPL(__imp__sub_82BD71F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD71F8"))) PPC_WEAK_FUNC(sub_82BD71F8);
PPC_FUNC_IMPL(__imp__sub_82BD71F8) {
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
	ctx.lr = 0x82BD7224;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd7250
	if (ctx.cr0.eq) goto loc_82BD7250;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20784
	ctx.r9.s64 = ctx.r11.s64 + -20784;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd7254
	goto loc_82BD7254;
loc_82BD7250:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD7254:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd72a0
	if (!ctx.cr6.eq) goto loc_82BD72A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd7280
	if (ctx.cr6.eq) goto loc_82BD7280;
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
	ctx.lr = 0x82BD7280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD7280:
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
	ctx.lr = 0x82BD72A0;
	sub_82C10E98(ctx, base);
loc_82BD72A0:
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

__attribute__((alias("__imp__sub_82BD72BC"))) PPC_WEAK_FUNC(sub_82BD72BC);
PPC_FUNC_IMPL(__imp__sub_82BD72BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD72C0"))) PPC_WEAK_FUNC(sub_82BD72C0);
PPC_FUNC_IMPL(__imp__sub_82BD72C0) {
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
	ctx.lr = 0x82BD72EC;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd7318
	if (ctx.cr0.eq) goto loc_82BD7318;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20764
	ctx.r9.s64 = ctx.r11.s64 + -20764;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd731c
	goto loc_82BD731C;
loc_82BD7318:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD731C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd7368
	if (!ctx.cr6.eq) goto loc_82BD7368;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd7348
	if (ctx.cr6.eq) goto loc_82BD7348;
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
	ctx.lr = 0x82BD7348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD7348:
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
	ctx.lr = 0x82BD7368;
	sub_82C10E98(ctx, base);
loc_82BD7368:
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

__attribute__((alias("__imp__sub_82BD7384"))) PPC_WEAK_FUNC(sub_82BD7384);
PPC_FUNC_IMPL(__imp__sub_82BD7384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7388"))) PPC_WEAK_FUNC(sub_82BD7388);
PPC_FUNC_IMPL(__imp__sub_82BD7388) {
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
	ctx.lr = 0x82BD73B4;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd73e0
	if (ctx.cr0.eq) goto loc_82BD73E0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20744
	ctx.r9.s64 = ctx.r11.s64 + -20744;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd73e4
	goto loc_82BD73E4;
loc_82BD73E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD73E4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd7430
	if (!ctx.cr6.eq) goto loc_82BD7430;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd7410
	if (ctx.cr6.eq) goto loc_82BD7410;
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
	ctx.lr = 0x82BD7410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD7410:
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
	ctx.lr = 0x82BD7430;
	sub_82C10E98(ctx, base);
loc_82BD7430:
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

__attribute__((alias("__imp__sub_82BD744C"))) PPC_WEAK_FUNC(sub_82BD744C);
PPC_FUNC_IMPL(__imp__sub_82BD744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7450"))) PPC_WEAK_FUNC(sub_82BD7450);
PPC_FUNC_IMPL(__imp__sub_82BD7450) {
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
	ctx.lr = 0x82BD747C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd74a8
	if (ctx.cr0.eq) goto loc_82BD74A8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20724
	ctx.r9.s64 = ctx.r11.s64 + -20724;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd74ac
	goto loc_82BD74AC;
loc_82BD74A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD74AC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd74f8
	if (!ctx.cr6.eq) goto loc_82BD74F8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd74d8
	if (ctx.cr6.eq) goto loc_82BD74D8;
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
	ctx.lr = 0x82BD74D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD74D8:
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
	ctx.lr = 0x82BD74F8;
	sub_82C10E98(ctx, base);
loc_82BD74F8:
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

__attribute__((alias("__imp__sub_82BD7514"))) PPC_WEAK_FUNC(sub_82BD7514);
PPC_FUNC_IMPL(__imp__sub_82BD7514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7518"))) PPC_WEAK_FUNC(sub_82BD7518);
PPC_FUNC_IMPL(__imp__sub_82BD7518) {
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
	ctx.lr = 0x82BD7544;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd7570
	if (ctx.cr0.eq) goto loc_82BD7570;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20704
	ctx.r9.s64 = ctx.r11.s64 + -20704;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd7574
	goto loc_82BD7574;
loc_82BD7570:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD7574:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd75c0
	if (!ctx.cr6.eq) goto loc_82BD75C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd75a0
	if (ctx.cr6.eq) goto loc_82BD75A0;
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
	ctx.lr = 0x82BD75A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD75A0:
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
	ctx.lr = 0x82BD75C0;
	sub_82C10E98(ctx, base);
loc_82BD75C0:
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

__attribute__((alias("__imp__sub_82BD75DC"))) PPC_WEAK_FUNC(sub_82BD75DC);
PPC_FUNC_IMPL(__imp__sub_82BD75DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD75E0"))) PPC_WEAK_FUNC(sub_82BD75E0);
PPC_FUNC_IMPL(__imp__sub_82BD75E0) {
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
	ctx.lr = 0x82BD760C;
	sub_82E01570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bd7638
	if (ctx.cr0.eq) goto loc_82BD7638;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20684
	ctx.r9.s64 = ctx.r11.s64 + -20684;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82bd763c
	goto loc_82BD763C;
loc_82BD7638:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD763C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd7688
	if (!ctx.cr6.eq) goto loc_82BD7688;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd7668
	if (ctx.cr6.eq) goto loc_82BD7668;
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
	ctx.lr = 0x82BD7668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BD7668:
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
	ctx.lr = 0x82BD7688;
	sub_82C10E98(ctx, base);
loc_82BD7688:
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

