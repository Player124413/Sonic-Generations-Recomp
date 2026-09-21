#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83142FA0"))) PPC_WEAK_FUNC(sub_83142FA0);
PPC_FUNC_IMPL(__imp__sub_83142FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830fcfb8
	ctx.lr = 0x83142FB8;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142FC8"))) PPC_WEAK_FUNC(sub_83142FC8);
PPC_FUNC_IMPL(__imp__sub_83142FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,7080(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7080);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x83155b68
	ctx.lr = 0x83143004;
	sub_83155B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83142e78
	ctx.lr = 0x8314300C;
	sub_83142E78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83142FD0"))) PPC_WEAK_FUNC(sub_83142FD0);
PPC_FUNC_IMPL(__imp__sub_83142FD0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x83155b68
	ctx.lr = 0x83143004;
	sub_83155B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83142e78
	ctx.lr = 0x8314300C;
	sub_83142E78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83143028"))) PPC_WEAK_FUNC(sub_83143028);
PPC_FUNC_IMPL(__imp__sub_83143028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x83155c40
	ctx.lr = 0x83143044;
	sub_83155C40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143054"))) PPC_WEAK_FUNC(sub_83143054);
PPC_FUNC_IMPL(__imp__sub_83143054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143058"))) PPC_WEAK_FUNC(sub_83143058);
PPC_FUNC_IMPL(__imp__sub_83143058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,7136(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7136);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x830dd340
	ctx.lr = 0x83143080;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831430a0
	if (ctx.cr0.eq) goto loc_831430A0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83142fd0
	ctx.lr = 0x83143098;
	sub_83142FD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831430a4
	goto loc_831430A4;
loc_831430A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831430A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831430bc
	if (ctx.cr6.eq) goto loc_831430BC;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83155c40
	ctx.lr = 0x831430B4;
	sub_83155C40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831430BC;
	sub_830DD3E0(ctx, base);
loc_831430BC:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83143060"))) PPC_WEAK_FUNC(sub_83143060);
PPC_FUNC_IMPL(__imp__sub_83143060) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x830dd340
	ctx.lr = 0x83143080;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831430a0
	if (ctx.cr0.eq) goto loc_831430A0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83142fd0
	ctx.lr = 0x83143098;
	sub_83142FD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831430a4
	goto loc_831430A4;
loc_831430A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831430A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831430bc
	if (ctx.cr6.eq) goto loc_831430BC;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83155c40
	ctx.lr = 0x831430B4;
	sub_83155C40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x831430BC;
	sub_830DD3E0(ctx, base);
loc_831430BC:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_831430D4"))) PPC_WEAK_FUNC(sub_831430D4);
PPC_FUNC_IMPL(__imp__sub_831430D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x831430EC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831430FC"))) PPC_WEAK_FUNC(sub_831430FC);
PPC_FUNC_IMPL(__imp__sub_831430FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143100"))) PPC_WEAK_FUNC(sub_83143100);
PPC_FUNC_IMPL(__imp__sub_83143100) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r31,-4536(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4536);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83143134
	if (ctx.cr6.eq) goto loc_83143134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fcf30
	ctx.lr = 0x8314312C;
	sub_830FCF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83143134;
	sub_830DD3E0(ctx, base);
loc_83143134:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4536(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4536, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83143154"))) PPC_WEAK_FUNC(sub_83143154);
PPC_FUNC_IMPL(__imp__sub_83143154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143158"))) PPC_WEAK_FUNC(sub_83143158);
PPC_FUNC_IMPL(__imp__sub_83143158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,14448(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14448);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831431f0
	if (!ctx.cr6.eq) goto loc_831431F0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83143198;
	sub_830FCF80(ctx, base);
	// lwz r11,-4536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831431e4
	if (!ctx.cr6.eq) goto loc_831431E4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x831431AC;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831431c8
	if (ctx.cr0.eq) goto loc_831431C8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x831431C4;
	sub_830FCEF0(ctx, base);
	// b 0x831431cc
	goto loc_831431CC;
loc_831431C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831431CC:
	// stw r3,-4536(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4536, ctx.r3.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,12544
	ctx.r4.s64 = ctx.r11.s64 + 12544;
	// addi r3,r10,-4516
	ctx.r3.s64 = ctx.r10.s64 + -4516;
	// bl 0x830ff598
	ctx.lr = 0x831431E4;
	sub_830FF598(ctx, base);
loc_831431E4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x831431EC;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4536);
loc_831431F0:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83143160"))) PPC_WEAK_FUNC(sub_83143160);
PPC_FUNC_IMPL(__imp__sub_83143160) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831431f0
	if (!ctx.cr6.eq) goto loc_831431F0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x83143198;
	sub_830FCF80(ctx, base);
	// lwz r11,-4536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831431e4
	if (!ctx.cr6.eq) goto loc_831431E4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x831431AC;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831431c8
	if (ctx.cr0.eq) goto loc_831431C8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x831431C4;
	sub_830FCEF0(ctx, base);
	// b 0x831431cc
	goto loc_831431CC;
loc_831431C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831431CC:
	// stw r3,-4536(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4536, ctx.r3.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,12544
	ctx.r4.s64 = ctx.r11.s64 + 12544;
	// addi r3,r10,-4516
	ctx.r3.s64 = ctx.r10.s64 + -4516;
	// bl 0x830ff598
	ctx.lr = 0x831431E4;
	sub_830FF598(ctx, base);
loc_831431E4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x831431EC;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4536);
loc_831431F0:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83143208"))) PPC_WEAK_FUNC(sub_83143208);
PPC_FUNC_IMPL(__imp__sub_83143208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143220;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143230"))) PPC_WEAK_FUNC(sub_83143230);
PPC_FUNC_IMPL(__imp__sub_83143230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83143248;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143258"))) PPC_WEAK_FUNC(sub_83143258);
PPC_FUNC_IMPL(__imp__sub_83143258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83143260;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83178eb8
	ctx.lr = 0x83143278;
	sub_83178EB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83143290
	if (ctx.cr0.eq) goto loc_83143290;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x831432e8
	goto loc_831432E8;
loc_83143290:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831432A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831432d8
	if (ctx.cr0.eq) goto loc_831432D8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x831432dc
	goto loc_831432DC;
loc_831432D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831432DC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_831432E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831432F0"))) PPC_WEAK_FUNC(sub_831432F0);
PPC_FUNC_IMPL(__imp__sub_831432F0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83178eb8
	ctx.lr = 0x83143308;
	sub_83178EB8(ctx, base);
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

__attribute__((alias("__imp__sub_83143320"))) PPC_WEAK_FUNC(sub_83143320);
PPC_FUNC_IMPL(__imp__sub_83143320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,14528(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14528);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83143330;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830dd340
	ctx.lr = 0x83143344;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83143364
	if (ctx.cr0.eq) goto loc_83143364;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r5,-5084(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83143888
	ctx.lr = 0x83143360;
	sub_83143888(ctx, base);
	// b 0x83143368
	goto loc_83143368;
loc_83143364:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83143368:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r29,r11,7192
	ctx.r29.s64 = ctx.r11.s64 + 7192;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// li r30,791
	ctx.r30.s64 = 791;
loc_83143380:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83143258
	ctx.lr = 0x83143390;
	sub_83143258(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// bne 0x83143380
	if (!ctx.cr0.eq) goto loc_83143380;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143328"))) PPC_WEAK_FUNC(sub_83143328);
PPC_FUNC_IMPL(__imp__sub_83143328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83143330;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830dd340
	ctx.lr = 0x83143344;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83143364
	if (ctx.cr0.eq) goto loc_83143364;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r5,-5084(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83143888
	ctx.lr = 0x83143360;
	sub_83143888(ctx, base);
	// b 0x83143368
	goto loc_83143368;
loc_83143364:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83143368:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r29,r11,7192
	ctx.r29.s64 = ctx.r11.s64 + 7192;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// li r30,791
	ctx.r30.s64 = 791;
loc_83143380:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83143258
	ctx.lr = 0x83143390;
	sub_83143258(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// bne 0x83143380
	if (!ctx.cr0.eq) goto loc_83143380;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831433A4"))) PPC_WEAK_FUNC(sub_831433A4);
PPC_FUNC_IMPL(__imp__sub_831433A4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831433BC;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831433CC"))) PPC_WEAK_FUNC(sub_831433CC);
PPC_FUNC_IMPL(__imp__sub_831433CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831433D0"))) PPC_WEAK_FUNC(sub_831433D0);
PPC_FUNC_IMPL(__imp__sub_831433D0) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83143404
	if (ctx.cr6.eq) goto loc_83143404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83143920
	ctx.lr = 0x831433FC;
	sub_83143920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83143404;
	sub_830DD3E0(ctx, base);
loc_83143404:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83143424"))) PPC_WEAK_FUNC(sub_83143424);
PPC_FUNC_IMPL(__imp__sub_83143424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143428"))) PPC_WEAK_FUNC(sub_83143428);
PPC_FUNC_IMPL(__imp__sub_83143428) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r31,-4532(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4532);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8314345c
	if (ctx.cr6.eq) goto loc_8314345C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831433d0
	ctx.lr = 0x83143454;
	sub_831433D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e01698
	ctx.lr = 0x8314345C;
	sub_82E01698(ctx, base);
loc_8314345C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4532(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4532, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8314347C"))) PPC_WEAK_FUNC(sub_8314347C);
PPC_FUNC_IMPL(__imp__sub_8314347C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143480"))) PPC_WEAK_FUNC(sub_83143480);
PPC_FUNC_IMPL(__imp__sub_83143480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,14600(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14600);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82e01690
	ctx.lr = 0x831434A8;
	sub_82E01690(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x831434c8
	if (ctx.cr0.eq) goto loc_831434C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83143328
	ctx.lr = 0x831434C4;
	sub_83143328(ctx, base);
	// b 0x831434cc
	goto loc_831434CC;
loc_831434C8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831434CC:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,-4532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4532, ctx.r30.u32);
	// beq cr6,0x831434f0
	if (ctx.cr6.eq) goto loc_831434F0;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,13352
	ctx.r4.s64 = ctx.r11.s64 + 13352;
	// addi r3,r10,-4528
	ctx.r3.s64 = ctx.r10.s64 + -4528;
	// bl 0x830ff598
	ctx.lr = 0x831434F0;
	sub_830FF598(ctx, base);
loc_831434F0:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83143488"))) PPC_WEAK_FUNC(sub_83143488);
PPC_FUNC_IMPL(__imp__sub_83143488) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82e01690
	ctx.lr = 0x831434A8;
	sub_82E01690(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x831434c8
	if (ctx.cr0.eq) goto loc_831434C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83143328
	ctx.lr = 0x831434C4;
	sub_83143328(ctx, base);
	// b 0x831434cc
	goto loc_831434CC;
loc_831434C8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831434CC:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,-4532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4532, ctx.r30.u32);
	// beq cr6,0x831434f0
	if (ctx.cr6.eq) goto loc_831434F0;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,13352
	ctx.r4.s64 = ctx.r11.s64 + 13352;
	// addi r3,r10,-4528
	ctx.r3.s64 = ctx.r10.s64 + -4528;
	// bl 0x830ff598
	ctx.lr = 0x831434F0;
	sub_830FF598(ctx, base);
loc_831434F0:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83143508"))) PPC_WEAK_FUNC(sub_83143508);
PPC_FUNC_IMPL(__imp__sub_83143508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82e01698
	ctx.lr = 0x83143520;
	sub_82E01698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143530"))) PPC_WEAK_FUNC(sub_83143530);
PPC_FUNC_IMPL(__imp__sub_83143530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,14672(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14672);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83143540;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31827
	ctx.r29.s64 = -2085814272;
	// lwz r3,-4532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831435c4
	if (!ctx.cr6.eq) goto loc_831435C4;
	// bl 0x83143160
	ctx.lr = 0x8314355C;
	sub_83143160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83143568;
	sub_830FCF80(ctx, base);
	// lwz r11,-4532(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831435b8
	if (!ctx.cr6.eq) goto loc_831435B8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82e01690
	ctx.lr = 0x8314357C;
	sub_82E01690(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq 0x8314359c
	if (ctx.cr0.eq) goto loc_8314359C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83143328
	ctx.lr = 0x83143598;
	sub_83143328(ctx, base);
	// b 0x831435a0
	goto loc_831435A0;
loc_8314359C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831435A0:
	// stw r30,-4532(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4532, ctx.r30.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,13352
	ctx.r4.s64 = ctx.r11.s64 + 13352;
	// addi r3,r10,-4528
	ctx.r3.s64 = ctx.r10.s64 + -4528;
	// bl 0x830ff598
	ctx.lr = 0x831435B8;
	sub_830FF598(ctx, base);
loc_831435B8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x831435C0;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4532);
loc_831435C4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143538"))) PPC_WEAK_FUNC(sub_83143538);
PPC_FUNC_IMPL(__imp__sub_83143538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83143540;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31827
	ctx.r29.s64 = -2085814272;
	// lwz r3,-4532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831435c4
	if (!ctx.cr6.eq) goto loc_831435C4;
	// bl 0x83143160
	ctx.lr = 0x8314355C;
	sub_83143160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83143568;
	sub_830FCF80(ctx, base);
	// lwz r11,-4532(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831435b8
	if (!ctx.cr6.eq) goto loc_831435B8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82e01690
	ctx.lr = 0x8314357C;
	sub_82E01690(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq 0x8314359c
	if (ctx.cr0.eq) goto loc_8314359C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83143328
	ctx.lr = 0x83143598;
	sub_83143328(ctx, base);
	// b 0x831435a0
	goto loc_831435A0;
loc_8314359C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831435A0:
	// stw r30,-4532(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4532, ctx.r30.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,13352
	ctx.r4.s64 = ctx.r11.s64 + 13352;
	// addi r3,r10,-4528
	ctx.r3.s64 = ctx.r10.s64 + -4528;
	// bl 0x830ff598
	ctx.lr = 0x831435B8;
	sub_830FF598(ctx, base);
loc_831435B8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x831435C0;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4532);
loc_831435C4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831435CC"))) PPC_WEAK_FUNC(sub_831435CC);
PPC_FUNC_IMPL(__imp__sub_831435CC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x831435E4;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831435F4"))) PPC_WEAK_FUNC(sub_831435F4);
PPC_FUNC_IMPL(__imp__sub_831435F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82e01698
	ctx.lr = 0x8314360C;
	sub_82E01698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314361C"))) PPC_WEAK_FUNC(sub_8314361C);
PPC_FUNC_IMPL(__imp__sub_8314361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143620"))) PPC_WEAK_FUNC(sub_83143620);
PPC_FUNC_IMPL(__imp__sub_83143620) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83143640
	if (!ctx.cr0.eq) goto loc_83143640;
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,23400
	ctx.r11.s64 = ctx.r11.s64 + 23400;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
loc_83143640:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// blt cr6,0x83143668
	if (ctx.cr6.lt) goto loc_83143668;
	// cmplwi cr6,r11,56319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56319, ctx.xer);
	// bgt cr6,0x83143668
	if (ctx.cr6.gt) goto loc_83143668;
	// cmplwi cr6,r10,56320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56320, ctx.xer);
	// blt cr6,0x83143668
	if (ctx.cr6.lt) goto loc_83143668;
	// cmplwi cr6,r10,57343
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57343, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_83143668:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143670"))) PPC_WEAK_FUNC(sub_83143670);
PPC_FUNC_IMPL(__imp__sub_83143670) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83143690
	if (!ctx.cr0.eq) goto loc_83143690;
	// lis r11,-31847
	ctx.r11.s64 = -2087124992;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,23400
	ctx.r11.s64 = ctx.r11.s64 + 23400;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
loc_83143690:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// blt cr6,0x831436b8
	if (ctx.cr6.lt) goto loc_831436B8;
	// cmplwi cr6,r11,56319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56319, ctx.xer);
	// bgt cr6,0x831436b8
	if (ctx.cr6.gt) goto loc_831436B8;
	// cmplwi cr6,r10,56320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56320, ctx.xer);
	// blt cr6,0x831436b8
	if (ctx.cr6.lt) goto loc_831436B8;
	// cmplwi cr6,r10,57343
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57343, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_831436B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831436C0"))) PPC_WEAK_FUNC(sub_831436C0);
PPC_FUNC_IMPL(__imp__sub_831436C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x831436C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83143738
	if (!ctx.cr6.gt) goto loc_83143738;
	// li r30,0
	ctx.r30.s64 = 0;
loc_831436E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83143718
	if (ctx.cr6.eq) goto loc_83143718;
loc_831436F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314370C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x831436f4
	if (!ctx.cr6.eq) goto loc_831436F4;
loc_83143718:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831436e4
	if (ctx.cr6.lt) goto loc_831436E4;
loc_83143738:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143740"))) PPC_WEAK_FUNC(sub_83143740);
PPC_FUNC_IMPL(__imp__sub_83143740) {
	PPC_FUNC_PROLOGUE();
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83143788
	if (!ctx.cr6.eq) goto loc_83143788;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r4,r11,-11584
	ctx.r4.s64 = ctx.r11.s64 + -11584;
	// li r5,70
	ctx.r5.s64 = 70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5a30
	ctx.lr = 0x83143778;
	sub_830D5A30(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28580
	ctx.r4.s64 = ctx.r11.s64 + -28580;
	// bl 0x833a7198
	ctx.lr = 0x83143788;
	sub_833A7198(ctx, base);
loc_83143788:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831437A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x833a2b30
	ctx.lr = 0x831437B8;
	sub_833A2B30(ctx, base);
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

__attribute__((alias("__imp__sub_831437CC"))) PPC_WEAK_FUNC(sub_831437CC);
PPC_FUNC_IMPL(__imp__sub_831437CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831437D0"))) PPC_WEAK_FUNC(sub_831437D0);
PPC_FUNC_IMPL(__imp__sub_831437D0) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r31,-4504(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4504);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83143804
	if (ctx.cr6.eq) goto loc_83143804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fcf30
	ctx.lr = 0x831437FC;
	sub_830FCF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83143804;
	sub_830DD3E0(ctx, base);
loc_83143804:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4504(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4504, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83143824"))) PPC_WEAK_FUNC(sub_83143824);
PPC_FUNC_IMPL(__imp__sub_83143824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143828"))) PPC_WEAK_FUNC(sub_83143828);
PPC_FUNC_IMPL(__imp__sub_83143828) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r31,-4500(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4500);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8314385c
	if (ctx.cr6.eq) goto loc_8314385C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83147bb0
	ctx.lr = 0x83143854;
	sub_83147BB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8314385C;
	sub_830DD3E0(ctx, base);
loc_8314385C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4500(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4500, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8314387C"))) PPC_WEAK_FUNC(sub_8314387C);
PPC_FUNC_IMPL(__imp__sub_8314387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143880"))) PPC_WEAK_FUNC(sub_83143880);
PPC_FUNC_IMPL(__imp__sub_83143880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15120(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15120);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83143890;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// bl 0x83143740
	ctx.lr = 0x831438B8;
	sub_83143740(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x831438C4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831438d8
	if (ctx.cr0.eq) goto loc_831438D8;
	// bl 0x83116550
	ctx.lr = 0x831438D4;
	sub_83116550(ctx, base);
	// b 0x831438dc
	goto loc_831438DC;
loc_831438D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_831438DC:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143888"))) PPC_WEAK_FUNC(sub_83143888);
PPC_FUNC_IMPL(__imp__sub_83143888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83143890;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// bl 0x83143740
	ctx.lr = 0x831438B8;
	sub_83143740(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830dd390
	ctx.lr = 0x831438C4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831438d8
	if (ctx.cr0.eq) goto loc_831438D8;
	// bl 0x83116550
	ctx.lr = 0x831438D4;
	sub_83116550(ctx, base);
	// b 0x831438dc
	goto loc_831438DC;
loc_831438D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_831438DC:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831438EC"))) PPC_WEAK_FUNC(sub_831438EC);
PPC_FUNC_IMPL(__imp__sub_831438EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x8314390C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314391C"))) PPC_WEAK_FUNC(sub_8314391C);
PPC_FUNC_IMPL(__imp__sub_8314391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143920"))) PPC_WEAK_FUNC(sub_83143920);
PPC_FUNC_IMPL(__imp__sub_83143920) {
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
	// bl 0x831436c0
	ctx.lr = 0x83143938;
	sub_831436C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83143950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83143970
	if (ctx.cr6.eq) goto loc_83143970;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83143970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83143970:
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

__attribute__((alias("__imp__sub_83143984"))) PPC_WEAK_FUNC(sub_83143984);
PPC_FUNC_IMPL(__imp__sub_83143984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143988"))) PPC_WEAK_FUNC(sub_83143988);
PPC_FUNC_IMPL(__imp__sub_83143988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15184(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15184);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83143998;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31827
	ctx.r29.s64 = -2085814272;
	// lwz r3,-4504(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83143a1c
	if (!ctx.cr6.eq) goto loc_83143A1C;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x831439C0;
	sub_830FCF80(ctx, base);
	// lwz r11,-4504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83143a10
	if (!ctx.cr6.eq) goto loc_83143A10;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830dd390
	ctx.lr = 0x831439DC;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831439f4
	if (ctx.cr0.eq) goto loc_831439F4;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x831439F0;
	sub_830FCEF0(ctx, base);
	// b 0x831439f8
	goto loc_831439F8;
loc_831439F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831439F8:
	// stw r3,-4504(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4504, ctx.r3.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,14288
	ctx.r4.s64 = ctx.r11.s64 + 14288;
	// addi r3,r10,-4492
	ctx.r3.s64 = ctx.r10.s64 + -4492;
	// bl 0x830ff598
	ctx.lr = 0x83143A10;
	sub_830FF598(ctx, base);
loc_83143A10:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143A18;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4504(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4504);
loc_83143A1C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143990"))) PPC_WEAK_FUNC(sub_83143990);
PPC_FUNC_IMPL(__imp__sub_83143990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83143998;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31827
	ctx.r29.s64 = -2085814272;
	// lwz r3,-4504(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83143a1c
	if (!ctx.cr6.eq) goto loc_83143A1C;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x831439C0;
	sub_830FCF80(ctx, base);
	// lwz r11,-4504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83143a10
	if (!ctx.cr6.eq) goto loc_83143A10;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830dd390
	ctx.lr = 0x831439DC;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831439f4
	if (ctx.cr0.eq) goto loc_831439F4;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x831439F0;
	sub_830FCEF0(ctx, base);
	// b 0x831439f8
	goto loc_831439F8;
loc_831439F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831439F8:
	// stw r3,-4504(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4504, ctx.r3.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,14288
	ctx.r4.s64 = ctx.r11.s64 + 14288;
	// addi r3,r10,-4492
	ctx.r3.s64 = ctx.r10.s64 + -4492;
	// bl 0x830ff598
	ctx.lr = 0x83143A10;
	sub_830FF598(ctx, base);
loc_83143A10:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143A18;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4504(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4504);
loc_83143A1C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143A24"))) PPC_WEAK_FUNC(sub_83143A24);
PPC_FUNC_IMPL(__imp__sub_83143A24) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143A3C;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143A4C"))) PPC_WEAK_FUNC(sub_83143A4C);
PPC_FUNC_IMPL(__imp__sub_83143A4C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83143A6C;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143A7C"))) PPC_WEAK_FUNC(sub_83143A7C);
PPC_FUNC_IMPL(__imp__sub_83143A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143A80"))) PPC_WEAK_FUNC(sub_83143A80);
PPC_FUNC_IMPL(__imp__sub_83143A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15348(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15348);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x83143A98;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31827
	ctx.r29.s64 = -2085814272;
	// lwz r3,-4500(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83143b3c
	if (!ctx.cr6.eq) goto loc_83143B3C;
	// bl 0x83143990
	ctx.lr = 0x83143AB4;
	sub_83143990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83143AC0;
	sub_830FCF80(ctx, base);
	// lwz r11,-4500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83143b30
	if (!ctx.cr6.eq) goto loc_83143B30;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// li r3,60
	ctx.r3.s64 = 60;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830dd390
	ctx.lr = 0x83143ADC;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83143b14
	if (ctx.cr6.eq) goto loc_83143B14;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r5,r11,17664
	ctx.r5.s64 = ctx.r11.s64 + 17664;
	// addi r4,r10,192
	ctx.r4.s64 = ctx.r10.s64 + 192;
	// bl 0x83148b08
	ctx.lr = 0x83143B08;
	sub_83148B08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83143b18
	goto loc_83143B18;
loc_83143B14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83143B18:
	// stw r3,-4500(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4500, ctx.r3.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,14376
	ctx.r4.s64 = ctx.r11.s64 + 14376;
	// addi r3,r10,-4492
	ctx.r3.s64 = ctx.r10.s64 + -4492;
	// bl 0x830ff598
	ctx.lr = 0x83143B30;
	sub_830FF598(ctx, base);
loc_83143B30:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143B38;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4500(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4500);
loc_83143B3C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143A88"))) PPC_WEAK_FUNC(sub_83143A88);
PPC_FUNC_IMPL(__imp__sub_83143A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x83143A98;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31827
	ctx.r29.s64 = -2085814272;
	// lwz r3,-4500(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83143b3c
	if (!ctx.cr6.eq) goto loc_83143B3C;
	// bl 0x83143990
	ctx.lr = 0x83143AB4;
	sub_83143990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83143AC0;
	sub_830FCF80(ctx, base);
	// lwz r11,-4500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83143b30
	if (!ctx.cr6.eq) goto loc_83143B30;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// li r3,60
	ctx.r3.s64 = 60;
	// lwz r4,-5084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// bl 0x830dd390
	ctx.lr = 0x83143ADC;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83143b14
	if (ctx.cr6.eq) goto loc_83143B14;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,-5084(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5084);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r5,r11,17664
	ctx.r5.s64 = ctx.r11.s64 + 17664;
	// addi r4,r10,192
	ctx.r4.s64 = ctx.r10.s64 + 192;
	// bl 0x83148b08
	ctx.lr = 0x83143B08;
	sub_83148B08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83143b18
	goto loc_83143B18;
loc_83143B14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83143B18:
	// stw r3,-4500(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4500, ctx.r3.u32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,14376
	ctx.r4.s64 = ctx.r11.s64 + 14376;
	// addi r3,r10,-4492
	ctx.r3.s64 = ctx.r10.s64 + -4492;
	// bl 0x830ff598
	ctx.lr = 0x83143B30;
	sub_830FF598(ctx, base);
loc_83143B30:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143B38;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4500(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4500);
loc_83143B3C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143B4C;
	sub_830FCFB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83143b3c
	goto loc_83143B3C;
}

__attribute__((alias("__imp__sub_83143B44"))) PPC_WEAK_FUNC(sub_83143B44);
PPC_FUNC_IMPL(__imp__sub_83143B44) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143B4C;
	sub_830FCFB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83143b3c
	// ERROR 83143B3C
	return;
}

__attribute__((alias("__imp__sub_83143B54"))) PPC_WEAK_FUNC(sub_83143B54);
PPC_FUNC_IMPL(__imp__sub_83143B54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15348(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15348);
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833a7198
	ctx.lr = 0x83143B74;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15348(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15348);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,15172
	ctx.r3.s64 = ctx.r3.s64 + 15172;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143B5C"))) PPC_WEAK_FUNC(sub_83143B5C);
PPC_FUNC_IMPL(__imp__sub_83143B5C) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833a7198
	ctx.lr = 0x83143B74;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83143B7C"))) PPC_WEAK_FUNC(sub_83143B7C);
PPC_FUNC_IMPL(__imp__sub_83143B7C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,15172
	ctx.r3.s64 = ctx.r3.s64 + 15172;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143B90"))) PPC_WEAK_FUNC(sub_83143B90);
PPC_FUNC_IMPL(__imp__sub_83143B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83143BA8;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143BB8"))) PPC_WEAK_FUNC(sub_83143BB8);
PPC_FUNC_IMPL(__imp__sub_83143BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x83143BD8;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143BE8"))) PPC_WEAK_FUNC(sub_83143BE8);
PPC_FUNC_IMPL(__imp__sub_83143BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15528(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15528);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83143BF8;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r4,30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30, ctx.xer);
	// bgt cr6,0x8314443c
	if (ctx.cr6.gt) {
		sub_8314443C(ctx, base);
		return;
	}
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// rlwinm r0,r24,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,15016
	ctx.r12.s64 = ctx.r12.s64 + 15016;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31980
	ctx.r12.s64 = -2095841280;
	// addi r12,r12,15432
	ctx.r12.s64 = ctx.r12.s64 + 15432;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83143BF0"))) PPC_WEAK_FUNC(sub_83143BF0);
PPC_FUNC_IMPL(__imp__sub_83143BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83143BF8;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r4,30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30, ctx.xer);
	// bgt cr6,0x8314443c
	if (ctx.cr6.gt) goto loc_8314443C;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// rlwinm r0,r24,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,15016
	ctx.r12.s64 = ctx.r12.s64 + 15016;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31980
	ctx.r12.s64 = -2095841280;
	// addi r12,r12,15432
	ctx.r12.s64 = ctx.r12.s64 + 15432;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x830d58e8
	ctx.lr = 0x83143C58;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83143C68;
	sub_830D6C48(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,188(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83143ca4
	if (ctx.cr6.eq) goto loc_83143CA4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r27,r11,264
	ctx.r27.s64 = ctx.r11.s64 + 264;
loc_83143C80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83143C8C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83143ca4
	if (!ctx.cr0.eq) goto loc_83143CA4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83143c80
	if (ctx.cr6.lt) goto loc_83143C80;
loc_83143CA4:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 & ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
loc_83143CBC:
	// bl 0x831b3a50
	ctx.lr = 0x83143CC0;
	sub_831B3A50(ctx, base);
	// b 0x83144448
	goto loc_83144448;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83143CD0;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83143CE0;
	sub_830D6C48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319b2a0
	ctx.lr = 0x83143CE8;
	sub_8319B2A0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 & ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x83143cbc
	goto loc_83143CBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319b178
	ctx.lr = 0x83143D14;
	sub_8319B178(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83144448
	if (!ctx.cr6.eq) goto loc_83144448;
	// b 0x83144444
	goto loc_83144444;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830e19b8
	ctx.lr = 0x83143D2C;
	sub_830E19B8(ctx, base);
loc_83143D2C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144448
	if (!ctx.cr0.eq) goto loc_83144448;
	// b 0x83144444
	goto loc_83144444;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83143D44;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83143D54;
	sub_830D6C48(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83143da4
	if (!ctx.cr6.eq) goto loc_83143DA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83143d94
	if (ctx.cr6.eq) goto loc_83143D94;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83143d94
	if (ctx.cr0.eq) goto loc_83143D94;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83143d80
	goto loc_83143D80;
loc_83143D7C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83143D80:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83143d7c
	if (!ctx.cr0.eq) goto loc_83143D7C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83143d98
	goto loc_83143D98;
loc_83143D94:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83143D98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de9f8
	ctx.lr = 0x83143DA0;
	sub_830DE9F8(ctx, base);
	// b 0x83143de8
	goto loc_83143DE8;
loc_83143DA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83143ddc
	if (ctx.cr6.eq) goto loc_83143DDC;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83143ddc
	if (ctx.cr0.eq) goto loc_83143DDC;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83143dc8
	goto loc_83143DC8;
loc_83143DC4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83143DC8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83143dc4
	if (!ctx.cr0.eq) goto loc_83143DC4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83143de0
	goto loc_83143DE0;
loc_83143DDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83143DE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ded88
	ctx.lr = 0x83143DE8;
	sub_830DED88(ctx, base);
loc_83143DE8:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x83143cbc
	goto loc_83143CBC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83143E04;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83143E14;
	sub_830D6C48(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d82c0
	ctx.lr = 0x83143E20;
	sub_830D82C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 & ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x83143cbc
	goto loc_83143CBC;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144448
	if (ctx.cr0.eq) goto loc_83144448;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// bne cr6,0x83143e78
	if (!ctx.cr6.eq) goto loc_83143E78;
loc_83143E54:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// bl 0x83143620
	ctx.lr = 0x83143E60;
	sub_83143620(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144444
	if (ctx.cr0.eq) goto loc_83144444;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83143e54
	if (!ctx.cr0.eq) goto loc_83143E54;
	// b 0x83144448
	goto loc_83144448;
loc_83143E78:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// bl 0x83143670
	ctx.lr = 0x83143E84;
	sub_83143670(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144444
	if (ctx.cr0.eq) goto loc_83144444;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83143e78
	if (!ctx.cr0.eq) goto loc_83143E78;
	// b 0x83144448
	goto loc_83144448;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lhz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x83144448
	if (ctx.cr0.eq) goto loc_83144448;
	// bne cr6,0x83143ef4
	if (!ctx.cr6.eq) goto loc_83143EF4;
loc_83143EB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83143620
	ctx.lr = 0x83143EC0;
	sub_83143620(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144444
	if (ctx.cr0.eq) goto loc_83144444;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) goto loc_83144444;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) goto loc_83144444;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) goto loc_83144444;
	// lhzu r30,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r30.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// mr. r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83143eb4
	if (!ctx.cr0.eq) goto loc_83143EB4;
	// b 0x83144448
	goto loc_83144448;
loc_83143EF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83143670
	ctx.lr = 0x83143F00;
	sub_83143670(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144444
	if (ctx.cr0.eq) goto loc_83144444;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) goto loc_83144444;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) goto loc_83144444;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) goto loc_83144444;
	// lhzu r30,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r30.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// mr. r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83143ef4
	if (!ctx.cr0.eq) goto loc_83143EF4;
	// b 0x83144448
	goto loc_83144448;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83143f6c
	if (ctx.cr6.eq) goto loc_83143F6C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83143f6c
	if (ctx.cr0.eq) goto loc_83143F6C;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83143f58
	goto loc_83143F58;
loc_83143F54:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83143F58:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83143f54
	if (!ctx.cr0.eq) goto loc_83143F54;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// b 0x83143f70
	goto loc_83143F70;
loc_83143F6C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83143F70:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lhz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bne cr6,0x8314401c
	if (!ctx.cr6.eq) goto loc_8314401C;
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// addi r28,r11,23400
	ctx.r28.s64 = ctx.r11.s64 + 23400;
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831440b4
	if (ctx.cr6.eq) goto loc_831440B4;
loc_83143FBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83143620
	ctx.lr = 0x83143FC8;
	sub_83143620(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831440b0
	if (ctx.cr0.eq) goto loc_831440B0;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144008
	if (ctx.cr0.eq) goto loc_83144008;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8314400c
	goto loc_8314400C;
loc_83144008:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8314400C:
	// lhzu r29,2(r26)
	ea = 2 + ctx.r26.u32;
	ctx.r29.u64 = PPC_LOAD_U16(ea);
	ctx.r26.u32 = ea;
	// mr. r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83143fbc
	if (!ctx.cr0.eq) goto loc_83143FBC;
	// b 0x831440b4
	goto loc_831440B4;
loc_8314401C:
	// lis r11,-31847
	ctx.r11.s64 = -2087124992;
	// addi r28,r11,23400
	ctx.r28.s64 = ctx.r11.s64 + 23400;
	// lbzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831440b4
	if (ctx.cr6.eq) goto loc_831440B4;
loc_83144050:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83143670
	ctx.lr = 0x8314405C;
	sub_83143670(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831440b0
	if (ctx.cr0.eq) goto loc_831440B0;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314409c
	if (ctx.cr0.eq) goto loc_8314409C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x831440a0
	goto loc_831440A0;
loc_8314409C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_831440A0:
	// lhzu r29,2(r26)
	ea = 2 + ctx.r26.u32;
	ctx.r29.u64 = PPC_LOAD_U16(ea);
	ctx.r26.u32 = ea;
	// mr. r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144050
	if (!ctx.cr0.eq) goto loc_83144050;
	// b 0x831440b4
	goto loc_831440B4;
loc_831440B0:
	// li r23,0
	ctx.r23.s64 = 0;
loc_831440B4:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83144448
	if (!ctx.cr6.eq) goto loc_83144448;
	// cmpwi cr6,r24,21
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 21, ctx.xer);
	// bne cr6,0x83144448
	if (!ctx.cr6.eq) goto loc_83144448;
	// bl 0x83143a88
	ctx.lr = 0x831440CC;
	sub_83143A88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831440dc
	if (!ctx.cr0.eq) goto loc_831440DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83144440
	goto loc_83144440;
loc_831440DC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831490f0
	ctx.lr = 0x831440E8;
	sub_831490F0(ctx, base);
	// b 0x83143d2c
	goto loc_83143D2C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8314413c
	if (!ctx.cr6.eq) goto loc_8314413C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8314412c
	if (ctx.cr6.eq) goto loc_8314412C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8314412c
	if (ctx.cr0.eq) goto loc_8314412C;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83144118
	goto loc_83144118;
loc_83144114:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83144118:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83144114
	if (!ctx.cr0.eq) goto loc_83144114;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83144130
	goto loc_83144130;
loc_8314412C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83144130:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de968
	ctx.lr = 0x83144138;
	sub_830DE968(ctx, base);
	// b 0x83144180
	goto loc_83144180;
loc_8314413C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83144174
	if (ctx.cr6.eq) goto loc_83144174;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144174
	if (ctx.cr0.eq) goto loc_83144174;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83144160
	goto loc_83144160;
loc_8314415C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83144160:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8314415c
	if (!ctx.cr0.eq) goto loc_8314415C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83144178
	goto loc_83144178;
loc_83144174:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83144178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dec20
	ctx.lr = 0x83144180;
	sub_830DEC20(ctx, base);
loc_83144180:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x83144448
	goto loc_83144448;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r11,r11,15000
	ctx.r11.s64 = ctx.r11.s64 + 15000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bb28
	ctx.lr = 0x831441A4;
	sub_8313BB28(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83144268
	if (!ctx.cr6.eq) goto loc_83144268;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x83144208
	goto loc_83144208;
loc_831441B4:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bcc0
	ctx.lr = 0x831441BC;
	sub_8313BCC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831441f4
	if (ctx.cr0.eq) goto loc_831441F4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831441f4
	if (ctx.cr0.eq) goto loc_831441F4;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x831441e0
	goto loc_831441E0;
loc_831441DC:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831441E0:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831441dc
	if (!ctx.cr0.eq) goto loc_831441DC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x831441f8
	goto loc_831441F8;
loc_831441F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831441F8:
	// bl 0x830de968
	ctx.lr = 0x831441FC;
	sub_830DE968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314427c
	if (ctx.cr0.eq) goto loc_8314427C;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_83144208:
	// bl 0x8313b950
	ctx.lr = 0x8314420C;
	sub_8313B950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831441b4
	if (!ctx.cr0.eq) goto loc_831441B4;
	// b 0x83144280
	goto loc_83144280;
loc_83144218:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bcc0
	ctx.lr = 0x83144220;
	sub_8313BCC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83144258
	if (ctx.cr0.eq) goto loc_83144258;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144258
	if (ctx.cr0.eq) goto loc_83144258;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x83144244
	goto loc_83144244;
loc_83144240:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83144244:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83144240
	if (!ctx.cr0.eq) goto loc_83144240;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x8314425c
	goto loc_8314425C;
loc_83144258:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8314425C:
	// bl 0x830dec20
	ctx.lr = 0x83144260;
	sub_830DEC20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314427c
	if (ctx.cr0.eq) goto loc_8314427C;
loc_83144268:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313b950
	ctx.lr = 0x83144270;
	sub_8313B950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144218
	if (!ctx.cr0.eq) goto loc_83144218;
	// b 0x83144280
	goto loc_83144280;
loc_8314427C:
	// li r23,0
	ctx.r23.s64 = 0;
loc_83144280:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_83144284:
	// bl 0x8313b980
	ctx.lr = 0x83144288;
	sub_8313B980(ctx, base);
	// b 0x83144448
	goto loc_83144448;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x831442a0
	if (!ctx.cr6.eq) goto loc_831442A0;
	// bl 0x830de9b0
	ctx.lr = 0x8314429C;
	sub_830DE9B0(ctx, base);
	// b 0x83144180
	goto loc_83144180;
loc_831442A0:
	// bl 0x830decb8
	ctx.lr = 0x831442A4;
	sub_830DECB8(ctx, base);
	// b 0x83144180
	goto loc_83144180;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x831442f8
	if (!ctx.cr6.eq) goto loc_831442F8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831442e8
	if (ctx.cr6.eq) goto loc_831442E8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831442e8
	if (ctx.cr0.eq) goto loc_831442E8;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x831442d4
	goto loc_831442D4;
loc_831442D0:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831442D4:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831442d0
	if (!ctx.cr0.eq) goto loc_831442D0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x831442ec
	goto loc_831442EC;
loc_831442E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831442EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de910
	ctx.lr = 0x831442F4;
	sub_830DE910(ctx, base);
	// b 0x83144180
	goto loc_83144180;
loc_831442F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83144330
	if (ctx.cr6.eq) goto loc_83144330;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144330
	if (ctx.cr0.eq) goto loc_83144330;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x8314431c
	goto loc_8314431C;
loc_83144318:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8314431C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83144318
	if (!ctx.cr0.eq) goto loc_83144318;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83144334
	goto loc_83144334;
loc_83144330:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83144334:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830deb50
	ctx.lr = 0x8314433C;
	sub_830DEB50(ctx, base);
	// b 0x83144180
	goto loc_83144180;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,15000
	ctx.r5.s64 = ctx.r11.s64 + 15000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bb28
	ctx.lr = 0x83144358;
	sub_8313BB28(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8314441c
	if (!ctx.cr6.eq) goto loc_8314441C;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x831443bc
	goto loc_831443BC;
loc_83144368:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bcc0
	ctx.lr = 0x83144370;
	sub_8313BCC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831443a8
	if (ctx.cr0.eq) goto loc_831443A8;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831443a8
	if (ctx.cr0.eq) goto loc_831443A8;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x83144394
	goto loc_83144394;
loc_83144390:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83144394:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83144390
	if (!ctx.cr0.eq) goto loc_83144390;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x831443ac
	goto loc_831443AC;
loc_831443A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831443AC:
	// bl 0x830de910
	ctx.lr = 0x831443B0;
	sub_830DE910(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144430
	if (ctx.cr0.eq) goto loc_83144430;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_831443BC:
	// bl 0x8313b950
	ctx.lr = 0x831443C0;
	sub_8313B950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144368
	if (!ctx.cr0.eq) goto loc_83144368;
	// b 0x83144434
	goto loc_83144434;
loc_831443CC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bcc0
	ctx.lr = 0x831443D4;
	sub_8313BCC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8314440c
	if (ctx.cr0.eq) goto loc_8314440C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8314440c
	if (ctx.cr0.eq) goto loc_8314440C;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x831443f8
	goto loc_831443F8;
loc_831443F4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831443F8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831443f4
	if (!ctx.cr0.eq) goto loc_831443F4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83144410
	goto loc_83144410;
loc_8314440C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83144410:
	// bl 0x830deb50
	ctx.lr = 0x83144414;
	sub_830DEB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144430
	if (ctx.cr0.eq) goto loc_83144430;
loc_8314441C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313b950
	ctx.lr = 0x83144424;
	sub_8313B950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831443cc
	if (!ctx.cr0.eq) goto loc_831443CC;
	// b 0x83144434
	goto loc_83144434;
loc_83144430:
	// li r23,0
	ctx.r23.s64 = 0;
loc_83144434:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x83144284
	goto loc_83144284;
loc_8314443C:
	// li r11,4
	ctx.r11.s64 = 4;
loc_83144440:
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_83144444:
	// li r23,0
	ctx.r23.s64 = 0;
loc_83144448:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144464
	if (!ctx.cr0.eq) goto loc_83144464;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83144464
	if (!ctx.cr6.eq) goto loc_83144464;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_83144464:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83143C48"))) PPC_WEAK_FUNC(sub_83143C48);
PPC_FUNC_IMPL(__imp__sub_83143C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x830d58e8
	ctx.lr = 0x83143C58;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83143C68;
	sub_830D6C48(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,188(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83143ca4
	if (ctx.cr6.eq) goto loc_83143CA4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r27,r11,264
	ctx.r27.s64 = ctx.r11.s64 + 264;
loc_83143C80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83143C8C;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83143ca4
	if (!ctx.cr0.eq) goto loc_83143CA4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83143c80
	if (ctx.cr6.lt) goto loc_83143C80;
loc_83143CA4:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 & ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b3a50
	ctx.lr = 0x83143CC0;
	sub_831B3A50(ctx, base);
	// b 0x83144448
	// ERROR 83144448
	return;
}

__attribute__((alias("__imp__sub_83143CC4"))) PPC_WEAK_FUNC(sub_83143CC4);
PPC_FUNC_IMPL(__imp__sub_83143CC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83143CD0;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83143CE0;
	sub_830D6C48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319b2a0
	ctx.lr = 0x83143CE8;
	sub_8319B2A0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 & ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x83143cbc
	// ERROR 83143CBC
	return;
}

__attribute__((alias("__imp__sub_83143D04"))) PPC_WEAK_FUNC(sub_83143D04);
PPC_FUNC_IMPL(__imp__sub_83143D04) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319b178
	ctx.lr = 0x83143D14;
	sub_8319B178(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83144448
	if (!ctx.cr6.eq) {
		// ERROR 83144448
		return;
	}
	// b 0x83144444
	// ERROR 83144444
	return;
}

__attribute__((alias("__imp__sub_83143D20"))) PPC_WEAK_FUNC(sub_83143D20);
PPC_FUNC_IMPL(__imp__sub_83143D20) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830e19b8
	ctx.lr = 0x83143D2C;
	sub_830E19B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144448
	if (!ctx.cr0.eq) {
		// ERROR 83144448
		return;
	}
	// b 0x83144444
	// ERROR 83144444
	return;
}

__attribute__((alias("__imp__sub_83143D38"))) PPC_WEAK_FUNC(sub_83143D38);
PPC_FUNC_IMPL(__imp__sub_83143D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83143D44;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83143D54;
	sub_830D6C48(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83143da4
	if (!ctx.cr6.eq) goto loc_83143DA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83143d94
	if (ctx.cr6.eq) goto loc_83143D94;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83143d94
	if (ctx.cr0.eq) goto loc_83143D94;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83143d80
	goto loc_83143D80;
loc_83143D7C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83143D80:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83143d7c
	if (!ctx.cr0.eq) goto loc_83143D7C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83143d98
	goto loc_83143D98;
loc_83143D94:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83143D98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de9f8
	ctx.lr = 0x83143DA0;
	sub_830DE9F8(ctx, base);
	// b 0x83143de8
	goto loc_83143DE8;
loc_83143DA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83143ddc
	if (ctx.cr6.eq) goto loc_83143DDC;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83143ddc
	if (ctx.cr0.eq) goto loc_83143DDC;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83143dc8
	goto loc_83143DC8;
loc_83143DC4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83143DC8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83143dc4
	if (!ctx.cr0.eq) goto loc_83143DC4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83143de0
	goto loc_83143DE0;
loc_83143DDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83143DE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ded88
	ctx.lr = 0x83143DE8;
	sub_830DED88(ctx, base);
loc_83143DE8:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x83143cbc
	// ERROR 83143CBC
	return;
}

__attribute__((alias("__imp__sub_83143DF8"))) PPC_WEAK_FUNC(sub_83143DF8);
PPC_FUNC_IMPL(__imp__sub_83143DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83143E04;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83143E14;
	sub_830D6C48(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d82c0
	ctx.lr = 0x83143E20;
	sub_830D82C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 & ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x83143cbc
	// ERROR 83143CBC
	return;
}

__attribute__((alias("__imp__sub_83143E3C"))) PPC_WEAK_FUNC(sub_83143E3C);
PPC_FUNC_IMPL(__imp__sub_83143E3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144448
	if (ctx.cr0.eq) {
		// ERROR 83144448
		return;
	}
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// bne cr6,0x83143e78
	if (!ctx.cr6.eq) goto loc_83143E78;
loc_83143E54:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// bl 0x83143620
	ctx.lr = 0x83143E60;
	sub_83143620(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144444
	if (ctx.cr0.eq) {
		// ERROR 83144444
		return;
	}
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83143e54
	if (!ctx.cr0.eq) goto loc_83143E54;
	// b 0x83144448
	// ERROR 83144448
	return;
loc_83143E78:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// bl 0x83143670
	ctx.lr = 0x83143E84;
	sub_83143670(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144444
	if (ctx.cr0.eq) {
		// ERROR 83144444
		return;
	}
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83143e78
	if (!ctx.cr0.eq) goto loc_83143E78;
	// b 0x83144448
	// ERROR 83144448
	return;
}

__attribute__((alias("__imp__sub_83143E9C"))) PPC_WEAK_FUNC(sub_83143E9C);
PPC_FUNC_IMPL(__imp__sub_83143E9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lhz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x83144448
	if (ctx.cr0.eq) {
		// ERROR 83144448
		return;
	}
	// bne cr6,0x83143ef4
	if (!ctx.cr6.eq) goto loc_83143EF4;
loc_83143EB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83143620
	ctx.lr = 0x83143EC0;
	sub_83143620(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144444
	if (ctx.cr0.eq) {
		// ERROR 83144444
		return;
	}
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) {
		// ERROR 83144444
		return;
	}
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) {
		// ERROR 83144444
		return;
	}
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) {
		// ERROR 83144444
		return;
	}
	// lhzu r30,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r30.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// mr. r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83143eb4
	if (!ctx.cr0.eq) goto loc_83143EB4;
	// b 0x83144448
	// ERROR 83144448
	return;
loc_83143EF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83143670
	ctx.lr = 0x83143F00;
	sub_83143670(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144444
	if (ctx.cr0.eq) {
		// ERROR 83144444
		return;
	}
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) {
		// ERROR 83144444
		return;
	}
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) {
		// ERROR 83144444
		return;
	}
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x83144444
	if (ctx.cr6.eq) {
		// ERROR 83144444
		return;
	}
	// lhzu r30,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r30.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// mr. r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83143ef4
	if (!ctx.cr0.eq) goto loc_83143EF4;
	// b 0x83144448
	// ERROR 83144448
	return;
}

__attribute__((alias("__imp__sub_83143F34"))) PPC_WEAK_FUNC(sub_83143F34);
PPC_FUNC_IMPL(__imp__sub_83143F34) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83143f6c
	if (ctx.cr6.eq) goto loc_83143F6C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83143f6c
	if (ctx.cr0.eq) goto loc_83143F6C;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83143f58
	goto loc_83143F58;
loc_83143F54:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83143F58:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83143f54
	if (!ctx.cr0.eq) goto loc_83143F54;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// b 0x83143f70
	goto loc_83143F70;
loc_83143F6C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83143F70:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lhz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bne cr6,0x8314401c
	if (!ctx.cr6.eq) goto loc_8314401C;
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// addi r28,r11,23400
	ctx.r28.s64 = ctx.r11.s64 + 23400;
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831440b4
	if (ctx.cr6.eq) goto loc_831440B4;
loc_83143FBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83143620
	ctx.lr = 0x83143FC8;
	sub_83143620(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831440b0
	if (ctx.cr0.eq) goto loc_831440B0;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144008
	if (ctx.cr0.eq) goto loc_83144008;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8314400c
	goto loc_8314400C;
loc_83144008:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8314400C:
	// lhzu r29,2(r26)
	ea = 2 + ctx.r26.u32;
	ctx.r29.u64 = PPC_LOAD_U16(ea);
	ctx.r26.u32 = ea;
	// mr. r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83143fbc
	if (!ctx.cr0.eq) goto loc_83143FBC;
	// b 0x831440b4
	goto loc_831440B4;
loc_8314401C:
	// lis r11,-31847
	ctx.r11.s64 = -2087124992;
	// addi r28,r11,23400
	ctx.r28.s64 = ctx.r11.s64 + 23400;
	// lbzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831440b4
	if (ctx.cr6.eq) goto loc_831440B4;
loc_83144050:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83143670
	ctx.lr = 0x8314405C;
	sub_83143670(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831440b0
	if (ctx.cr0.eq) goto loc_831440B0;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x831440b0
	if (ctx.cr6.eq) goto loc_831440B0;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314409c
	if (ctx.cr0.eq) goto loc_8314409C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831440b0
	if (!ctx.cr0.eq) goto loc_831440B0;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x831440a0
	goto loc_831440A0;
loc_8314409C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_831440A0:
	// lhzu r29,2(r26)
	ea = 2 + ctx.r26.u32;
	ctx.r29.u64 = PPC_LOAD_U16(ea);
	ctx.r26.u32 = ea;
	// mr. r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144050
	if (!ctx.cr0.eq) goto loc_83144050;
	// b 0x831440b4
	goto loc_831440B4;
loc_831440B0:
	// li r23,0
	ctx.r23.s64 = 0;
loc_831440B4:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83144448
	if (!ctx.cr6.eq) {
		// ERROR 83144448
		return;
	}
	// cmpwi cr6,r24,21
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 21, ctx.xer);
	// bne cr6,0x83144448
	if (!ctx.cr6.eq) {
		// ERROR 83144448
		return;
	}
	// bl 0x83143a88
	ctx.lr = 0x831440CC;
	sub_83143A88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831440dc
	if (!ctx.cr0.eq) goto loc_831440DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83144440
	// ERROR 83144440
	return;
loc_831440DC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831490f0
	ctx.lr = 0x831440E8;
	sub_831490F0(ctx, base);
	// b 0x83143d2c
	// ERROR 83143D2C
	return;
}

__attribute__((alias("__imp__sub_831440EC"))) PPC_WEAK_FUNC(sub_831440EC);
PPC_FUNC_IMPL(__imp__sub_831440EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8314413c
	if (!ctx.cr6.eq) goto loc_8314413C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8314412c
	if (ctx.cr6.eq) goto loc_8314412C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8314412c
	if (ctx.cr0.eq) goto loc_8314412C;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83144118
	goto loc_83144118;
loc_83144114:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83144118:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83144114
	if (!ctx.cr0.eq) goto loc_83144114;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83144130
	goto loc_83144130;
loc_8314412C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83144130:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de968
	ctx.lr = 0x83144138;
	sub_830DE968(ctx, base);
	// b 0x83144180
	goto loc_83144180;
loc_8314413C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83144174
	if (ctx.cr6.eq) goto loc_83144174;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144174
	if (ctx.cr0.eq) goto loc_83144174;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x83144160
	goto loc_83144160;
loc_8314415C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83144160:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8314415c
	if (!ctx.cr0.eq) goto loc_8314415C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83144178
	goto loc_83144178;
loc_83144174:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83144178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dec20
	ctx.lr = 0x83144180;
	sub_830DEC20(ctx, base);
loc_83144180:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x83144448
	// ERROR 83144448
	return;
}

__attribute__((alias("__imp__sub_83144188"))) PPC_WEAK_FUNC(sub_83144188);
PPC_FUNC_IMPL(__imp__sub_83144188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r11,r11,15000
	ctx.r11.s64 = ctx.r11.s64 + 15000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bb28
	ctx.lr = 0x831441A4;
	sub_8313BB28(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83144268
	if (!ctx.cr6.eq) goto loc_83144268;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x83144208
	goto loc_83144208;
loc_831441B4:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bcc0
	ctx.lr = 0x831441BC;
	sub_8313BCC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831441f4
	if (ctx.cr0.eq) goto loc_831441F4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831441f4
	if (ctx.cr0.eq) goto loc_831441F4;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x831441e0
	goto loc_831441E0;
loc_831441DC:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831441E0:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831441dc
	if (!ctx.cr0.eq) goto loc_831441DC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x831441f8
	goto loc_831441F8;
loc_831441F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831441F8:
	// bl 0x830de968
	ctx.lr = 0x831441FC;
	sub_830DE968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314427c
	if (ctx.cr0.eq) goto loc_8314427C;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_83144208:
	// bl 0x8313b950
	ctx.lr = 0x8314420C;
	sub_8313B950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831441b4
	if (!ctx.cr0.eq) goto loc_831441B4;
	// b 0x83144280
	goto loc_83144280;
loc_83144218:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bcc0
	ctx.lr = 0x83144220;
	sub_8313BCC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83144258
	if (ctx.cr0.eq) goto loc_83144258;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144258
	if (ctx.cr0.eq) goto loc_83144258;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x83144244
	goto loc_83144244;
loc_83144240:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83144244:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83144240
	if (!ctx.cr0.eq) goto loc_83144240;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x8314425c
	goto loc_8314425C;
loc_83144258:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8314425C:
	// bl 0x830dec20
	ctx.lr = 0x83144260;
	sub_830DEC20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314427c
	if (ctx.cr0.eq) goto loc_8314427C;
loc_83144268:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313b950
	ctx.lr = 0x83144270;
	sub_8313B950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144218
	if (!ctx.cr0.eq) goto loc_83144218;
	// b 0x83144280
	goto loc_83144280;
loc_8314427C:
	// li r23,0
	ctx.r23.s64 = 0;
loc_83144280:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313b980
	ctx.lr = 0x83144288;
	sub_8313B980(ctx, base);
	// b 0x83144448
	// ERROR 83144448
	return;
}

__attribute__((alias("__imp__sub_8314428C"))) PPC_WEAK_FUNC(sub_8314428C);
PPC_FUNC_IMPL(__imp__sub_8314428C) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x831442a0
	if (!ctx.cr6.eq) goto loc_831442A0;
	// bl 0x830de9b0
	ctx.lr = 0x8314429C;
	sub_830DE9B0(ctx, base);
	// b 0x83144180
	// ERROR 83144180
	return;
loc_831442A0:
	// bl 0x830decb8
	ctx.lr = 0x831442A4;
	sub_830DECB8(ctx, base);
	// b 0x83144180
	// ERROR 83144180
	return;
}

__attribute__((alias("__imp__sub_831442A8"))) PPC_WEAK_FUNC(sub_831442A8);
PPC_FUNC_IMPL(__imp__sub_831442A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x831442f8
	if (!ctx.cr6.eq) goto loc_831442F8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831442e8
	if (ctx.cr6.eq) goto loc_831442E8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831442e8
	if (ctx.cr0.eq) goto loc_831442E8;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x831442d4
	goto loc_831442D4;
loc_831442D0:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831442D4:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831442d0
	if (!ctx.cr0.eq) goto loc_831442D0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x831442ec
	goto loc_831442EC;
loc_831442E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831442EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de910
	ctx.lr = 0x831442F4;
	sub_830DE910(ctx, base);
	// b 0x83144180
	// ERROR 83144180
	return;
loc_831442F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83144330
	if (ctx.cr6.eq) goto loc_83144330;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144330
	if (ctx.cr0.eq) goto loc_83144330;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// b 0x8314431c
	goto loc_8314431C;
loc_83144318:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8314431C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83144318
	if (!ctx.cr0.eq) goto loc_83144318;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83144334
	goto loc_83144334;
loc_83144330:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83144334:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830deb50
	ctx.lr = 0x8314433C;
	sub_830DEB50(ctx, base);
	// b 0x83144180
	// ERROR 83144180
	return;
}

__attribute__((alias("__imp__sub_83144340"))) PPC_WEAK_FUNC(sub_83144340);
PPC_FUNC_IMPL(__imp__sub_83144340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,15000
	ctx.r5.s64 = ctx.r11.s64 + 15000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bb28
	ctx.lr = 0x83144358;
	sub_8313BB28(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8314441c
	if (!ctx.cr6.eq) goto loc_8314441C;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x831443bc
	goto loc_831443BC;
loc_83144368:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bcc0
	ctx.lr = 0x83144370;
	sub_8313BCC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831443a8
	if (ctx.cr0.eq) goto loc_831443A8;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831443a8
	if (ctx.cr0.eq) goto loc_831443A8;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x83144394
	goto loc_83144394;
loc_83144390:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83144394:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83144390
	if (!ctx.cr0.eq) goto loc_83144390;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x831443ac
	goto loc_831443AC;
loc_831443A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831443AC:
	// bl 0x830de910
	ctx.lr = 0x831443B0;
	sub_830DE910(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144430
	if (ctx.cr0.eq) goto loc_83144430;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_831443BC:
	// bl 0x8313b950
	ctx.lr = 0x831443C0;
	sub_8313B950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144368
	if (!ctx.cr0.eq) goto loc_83144368;
	// b 0x83144434
	goto loc_83144434;
loc_831443CC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313bcc0
	ctx.lr = 0x831443D4;
	sub_8313BCC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8314440c
	if (ctx.cr0.eq) goto loc_8314440C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8314440c
	if (ctx.cr0.eq) goto loc_8314440C;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x831443f8
	goto loc_831443F8;
loc_831443F4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831443F8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831443f4
	if (!ctx.cr0.eq) goto loc_831443F4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x83144410
	goto loc_83144410;
loc_8314440C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83144410:
	// bl 0x830deb50
	ctx.lr = 0x83144414;
	sub_830DEB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144430
	if (ctx.cr0.eq) goto loc_83144430;
loc_8314441C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313b950
	ctx.lr = 0x83144424;
	sub_8313B950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831443cc
	if (!ctx.cr0.eq) goto loc_831443CC;
	// b 0x83144434
	goto loc_83144434;
loc_83144430:
	// li r23,0
	ctx.r23.s64 = 0;
loc_83144434:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x83144284
	// ERROR 83144284
	return;
}

__attribute__((alias("__imp__sub_8314443C"))) PPC_WEAK_FUNC(sub_8314443C);
PPC_FUNC_IMPL(__imp__sub_8314443C) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144464
	if (!ctx.cr0.eq) goto loc_83144464;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83144464
	if (!ctx.cr6.eq) goto loc_83144464;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_83144464:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83144470"))) PPC_WEAK_FUNC(sub_83144470);
PPC_FUNC_IMPL(__imp__sub_83144470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b4220
	ctx.lr = 0x83144488;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144498"))) PPC_WEAK_FUNC(sub_83144498);
PPC_FUNC_IMPL(__imp__sub_83144498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b4220
	ctx.lr = 0x831444B0;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831444C0"))) PPC_WEAK_FUNC(sub_831444C0);
PPC_FUNC_IMPL(__imp__sub_831444C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b4220
	ctx.lr = 0x831444D8;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831444E8"))) PPC_WEAK_FUNC(sub_831444E8);
PPC_FUNC_IMPL(__imp__sub_831444E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b4220
	ctx.lr = 0x83144500;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144510"))) PPC_WEAK_FUNC(sub_83144510);
PPC_FUNC_IMPL(__imp__sub_83144510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313b980
	ctx.lr = 0x83144528;
	sub_8313B980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144538"))) PPC_WEAK_FUNC(sub_83144538);
PPC_FUNC_IMPL(__imp__sub_83144538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8313b980
	ctx.lr = 0x83144550;
	sub_8313B980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144560"))) PPC_WEAK_FUNC(sub_83144560);
PPC_FUNC_IMPL(__imp__sub_83144560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15964(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15964);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x83144578;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r4,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r4.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r5,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83144598;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x831445A8;
	sub_830D6C48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83198b88
	ctx.lr = 0x831445B8;
	sub_83198B88(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r28,-5
	ctx.r11.s64 = ctx.r28.s64 + -5;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x83144788
	if (ctx.cr6.gt) goto loc_83144788;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8314460c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8314460C;
	// bdzf 4*cr6+eq,0x83144618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144618;
	// bdzf 4*cr6+eq,0x83144634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144634;
	// bdzf 4*cr6+eq,0x83144654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144654;
	// bdzf 4*cr6+eq,0x83144674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144674;
	// bdzf 4*cr6+eq,0x83144690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144690;
	// bdzf 4*cr6+eq,0x831446ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_831446AC;
	// bne cr6,0x831446cc
	if (!ctx.cr6.eq) goto loc_831446CC;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83198c20
	ctx.lr = 0x831445FC;
	sub_83198C20(ctx, base);
loc_831445FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831446f0
	goto loc_831446F0;
loc_8314460C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a880
	ctx.lr = 0x83144614;
	sub_8319A880(ctx, base);
	// b 0x831445fc
	goto loc_831445FC;
loc_83144618:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a990
	ctx.lr = 0x83144620;
	sub_8319A990(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x831446e8
	goto loc_831446E8;
loc_83144634:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a938
	ctx.lr = 0x8314463C;
	sub_8319A938(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83144648:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// b 0x831446f0
	goto loc_831446F0;
loc_83144654:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319aa00
	ctx.lr = 0x8314465C;
	sub_8319AA00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83144668:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// b 0x831446ec
	goto loc_831446EC;
loc_83144674:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a1b8
	ctx.lr = 0x8314467C;
	sub_8319A1B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x83144668
	goto loc_83144668;
loc_83144690:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a268
	ctx.lr = 0x83144698;
	sub_8319A268(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// b 0x83144648
	goto loc_83144648;
loc_831446AC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83199ef8
	ctx.lr = 0x831446B4;
	sub_83199EF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x83144648
	goto loc_83144648;
loc_831446CC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a040
	ctx.lr = 0x831446D4;
	sub_8319A040(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_831446E8:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_831446EC:
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_831446F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x831446FC;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83144720
	if (ctx.cr6.eq) goto loc_83144720;
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stb r30,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r30.u8);
	// b 0x83144724
	goto loc_83144724;
loc_83144720:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83144724:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lfd f0,152(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// stfd f0,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.f0.u64);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83197ab8
	ctx.lr = 0x83144764;
	sub_83197AB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x83144778;
	sub_831B3A50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x831447c4
	// ERROR 831447C4
	return;
loc_83144788:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83197ab8
	ctx.lr = 0x83144790;
	sub_83197AB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x831447A4;
	sub_831B3A50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831447c0
	// ERROR 831447C0
	return;
}

__attribute__((alias("__imp__sub_83144568"))) PPC_WEAK_FUNC(sub_83144568);
PPC_FUNC_IMPL(__imp__sub_83144568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a8
	ctx.lr = 0x83144578;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r4,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r4.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r5,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83144598;
	sub_830D58E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x831445A8;
	sub_830D6C48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83198b88
	ctx.lr = 0x831445B8;
	sub_83198B88(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r28,-5
	ctx.r11.s64 = ctx.r28.s64 + -5;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x83144788
	if (ctx.cr6.gt) goto loc_83144788;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8314460c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8314460C;
	// bdzf 4*cr6+eq,0x83144618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144618;
	// bdzf 4*cr6+eq,0x83144634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144634;
	// bdzf 4*cr6+eq,0x83144654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144654;
	// bdzf 4*cr6+eq,0x83144674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144674;
	// bdzf 4*cr6+eq,0x83144690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83144690;
	// bdzf 4*cr6+eq,0x831446ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_831446AC;
	// bne cr6,0x831446cc
	if (!ctx.cr6.eq) goto loc_831446CC;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83198c20
	ctx.lr = 0x831445FC;
	sub_83198C20(ctx, base);
loc_831445FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831446f0
	goto loc_831446F0;
loc_8314460C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a880
	ctx.lr = 0x83144614;
	sub_8319A880(ctx, base);
	// b 0x831445fc
	goto loc_831445FC;
loc_83144618:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a990
	ctx.lr = 0x83144620;
	sub_8319A990(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x831446e8
	goto loc_831446E8;
loc_83144634:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a938
	ctx.lr = 0x8314463C;
	sub_8319A938(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83144648:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// b 0x831446f0
	goto loc_831446F0;
loc_83144654:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319aa00
	ctx.lr = 0x8314465C;
	sub_8319AA00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83144668:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// b 0x831446ec
	goto loc_831446EC;
loc_83144674:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a1b8
	ctx.lr = 0x8314467C;
	sub_8319A1B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x83144668
	goto loc_83144668;
loc_83144690:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a268
	ctx.lr = 0x83144698;
	sub_8319A268(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// b 0x83144648
	goto loc_83144648;
loc_831446AC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83199ef8
	ctx.lr = 0x831446B4;
	sub_83199EF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x83144648
	goto loc_83144648;
loc_831446CC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319a040
	ctx.lr = 0x831446D4;
	sub_8319A040(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_831446E8:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_831446EC:
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_831446F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x831446FC;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83144720
	if (ctx.cr6.eq) goto loc_83144720;
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stb r30,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r30.u8);
	// b 0x83144724
	goto loc_83144724;
loc_83144720:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83144724:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lfd f0,152(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// stfd f0,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.f0.u64);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83197ab8
	ctx.lr = 0x83144764;
	sub_83197AB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x83144778;
	sub_831B3A50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x831447c4
	goto loc_831447C4;
loc_83144788:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83197ab8
	ctx.lr = 0x83144790;
	sub_83197AB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x831447A4;
	sub_831B3A50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831447c0
	goto loc_831447C0;
	// b 0x831447b4
	goto loc_831447B4;
loc_831447B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x831447C0;
	sub_831B3A50(ctx, base);
loc_831447C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831447C4:
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831447B0"))) PPC_WEAK_FUNC(sub_831447B0);
PPC_FUNC_IMPL(__imp__sub_831447B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831447b4
	goto loc_831447B4;
loc_831447B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x831447C0;
	sub_831B3A50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831447CC"))) PPC_WEAK_FUNC(sub_831447CC);
PPC_FUNC_IMPL(__imp__sub_831447CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15964(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15964);
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x831447f8
	if (ctx.cr6.eq) goto loc_831447F8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x831447f8
	if (ctx.cr6.eq) goto loc_831447F8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x83144830
	if (!ctx.cr6.eq) goto loc_83144830;
loc_831447F8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,343
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 343, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83144838
	if (ctx.cr6.eq) goto loc_83144838;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 344, ctx.xer);
	// beq cr6,0x83144838
	if (ctx.cr6.eq) goto loc_83144838;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,345
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 345, ctx.xer);
	// beq cr6,0x83144838
	if (ctx.cr6.eq) goto loc_83144838;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 352, ctx.xer);
	// beq cr6,0x83144838
	if (ctx.cr6.eq) goto loc_83144838;
loc_83144830:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8314483c
	goto loc_8314483C;
loc_83144838:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8314483C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r3,r3,18352
	ctx.r3.s64 = ctx.r3.s64 + 18352;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831447D4"))) PPC_WEAK_FUNC(sub_831447D4);
PPC_FUNC_IMPL(__imp__sub_831447D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x831447f8
	if (ctx.cr6.eq) goto loc_831447F8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x831447f8
	if (ctx.cr6.eq) goto loc_831447F8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x83144830
	if (!ctx.cr6.eq) goto loc_83144830;
loc_831447F8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,343
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 343, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83144838
	if (ctx.cr6.eq) goto loc_83144838;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,344
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 344, ctx.xer);
	// beq cr6,0x83144838
	if (ctx.cr6.eq) goto loc_83144838;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,345
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 345, ctx.xer);
	// beq cr6,0x83144838
	if (ctx.cr6.eq) goto loc_83144838;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 352, ctx.xer);
	// beq cr6,0x83144838
	if (ctx.cr6.eq) goto loc_83144838;
loc_83144830:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8314483c
	goto loc_8314483C;
loc_83144838:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8314483C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r3,r3,18352
	ctx.r3.s64 = ctx.r3.s64 + 18352;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83144868"))) PPC_WEAK_FUNC(sub_83144868);
PPC_FUNC_IMPL(__imp__sub_83144868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,15964(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15964);
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,18356
	ctx.r3.s64 = ctx.r3.s64 + 18356;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83144870"))) PPC_WEAK_FUNC(sub_83144870);
PPC_FUNC_IMPL(__imp__sub_83144870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,18356
	ctx.r3.s64 = ctx.r3.s64 + 18356;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83144894"))) PPC_WEAK_FUNC(sub_83144894);
PPC_FUNC_IMPL(__imp__sub_83144894) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b4220
	ctx.lr = 0x831448AC;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831448BC"))) PPC_WEAK_FUNC(sub_831448BC);
PPC_FUNC_IMPL(__imp__sub_831448BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83197ab8
	ctx.lr = 0x831448D4;
	sub_83197AB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831448E4"))) PPC_WEAK_FUNC(sub_831448E4);
PPC_FUNC_IMPL(__imp__sub_831448E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831448E8"))) PPC_WEAK_FUNC(sub_831448E8);
PPC_FUNC_IMPL(__imp__sub_831448E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16352(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16352);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x831448F8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x83144934
	if (ctx.cr6.eq) goto loc_83144934;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x83144a58
	if (ctx.cr6.eq) goto loc_83144A58;
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// beq cr6,0x831449cc
	if (ctx.cr6.eq) goto loc_831449CC;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x83144968
	if (ctx.cr6.eq) goto loc_83144968;
	// ble cr6,0x8314495c
	if (!ctx.cr6.gt) goto loc_8314495C;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// bgt cr6,0x8314495c
	if (ctx.cr6.gt) goto loc_8314495C;
loc_83144934:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144954
	if (ctx.cr0.eq) goto loc_83144954;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83143bf0
	ctx.lr = 0x83144948;
	sub_83143BF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// beq 0x83144958
	if (ctx.cr0.eq) goto loc_83144958;
loc_83144954:
	// li r11,3
	ctx.r11.s64 = 3;
loc_83144958:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8314495C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83144960:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_83144968:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x8319b048
	ctx.lr = 0x83144980;
	sub_8319B048(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83144990
	if (!ctx.cr0.eq) goto loc_83144990;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83144958
	goto loc_83144958;
loc_83144990:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x8314499C;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831449b8
	if (ctx.cr0.eq) goto loc_831449B8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r29.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831449bc
	goto loc_831449BC;
loc_831449B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_831449BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// b 0x83144960
	goto loc_83144960;
loc_831449CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x831449D4;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x831449E4;
	sub_830D6C48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8319b320
	ctx.lr = 0x831449F0;
	sub_8319B320(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83144a10
	if (!ctx.cr0.eq) goto loc_83144A10;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_83144A04:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x83144b58
	goto loc_83144B58;
loc_83144A10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144A1C;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83144a40
	if (ctx.cr0.eq) goto loc_83144A40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83144a44
	goto loc_83144A44;
loc_83144A40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83144A44:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x83144a04
	goto loc_83144A04;
loc_83144A58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83144A60;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83144A70;
	sub_830D6C48(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,264
	ctx.r28.s64 = ctx.r11.s64 + 264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83144A84;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144b14
	if (!ctx.cr0.eq) goto loc_83144B14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// bl 0x830d8d28
	ctx.lr = 0x83144A98;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144b14
	if (!ctx.cr0.eq) goto loc_83144B14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// bl 0x830d8d28
	ctx.lr = 0x83144AAC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144ad8
	if (!ctx.cr0.eq) goto loc_83144AD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// bl 0x830d8d28
	ctx.lr = 0x83144AC0;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144ad8
	if (!ctx.cr0.eq) goto loc_83144AD8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83144b50
	goto loc_83144B50;
loc_83144AD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144AE4;
	sub_830DD390(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83144b08
	if (ctx.cr0.eq) goto loc_83144B08;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r9,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r9.u8);
	// b 0x83144b0c
	goto loc_83144B0C;
loc_83144B08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83144B0C:
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// b 0x83144b4c
	goto loc_83144B4C;
loc_83144B14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144B20;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x83144b44
	if (ctx.cr0.eq) goto loc_83144B44;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r29.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83144b48
	goto loc_83144B48;
loc_83144B44:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83144B48:
	// stb r29,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r29.u8);
loc_83144B4C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83144B50:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
loc_83144B58:
	// bl 0x831b3a50
	ctx.lr = 0x83144B5C;
	sub_831B3A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83144960
	goto loc_83144960;
}

__attribute__((alias("__imp__sub_831448F0"))) PPC_WEAK_FUNC(sub_831448F0);
PPC_FUNC_IMPL(__imp__sub_831448F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x831448F8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x83144934
	if (ctx.cr6.eq) goto loc_83144934;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x83144a58
	if (ctx.cr6.eq) goto loc_83144A58;
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// beq cr6,0x831449cc
	if (ctx.cr6.eq) goto loc_831449CC;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x83144968
	if (ctx.cr6.eq) goto loc_83144968;
	// ble cr6,0x8314495c
	if (!ctx.cr6.gt) goto loc_8314495C;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// bgt cr6,0x8314495c
	if (ctx.cr6.gt) goto loc_8314495C;
loc_83144934:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83144954
	if (ctx.cr0.eq) goto loc_83144954;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83143bf0
	ctx.lr = 0x83144948;
	sub_83143BF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// beq 0x83144958
	if (ctx.cr0.eq) goto loc_83144958;
loc_83144954:
	// li r11,3
	ctx.r11.s64 = 3;
loc_83144958:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8314495C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83144960:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
loc_83144968:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x8319b048
	ctx.lr = 0x83144980;
	sub_8319B048(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83144990
	if (!ctx.cr0.eq) goto loc_83144990;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83144958
	goto loc_83144958;
loc_83144990:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x8314499C;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831449b8
	if (ctx.cr0.eq) goto loc_831449B8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r29.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831449bc
	goto loc_831449BC;
loc_831449B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_831449BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// b 0x83144960
	goto loc_83144960;
loc_831449CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x831449D4;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x831449E4;
	sub_830D6C48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8319b320
	ctx.lr = 0x831449F0;
	sub_8319B320(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83144a10
	if (!ctx.cr0.eq) goto loc_83144A10;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_83144A04:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x83144b58
	goto loc_83144B58;
loc_83144A10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144A1C;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83144a40
	if (ctx.cr0.eq) goto loc_83144A40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83144a44
	goto loc_83144A44;
loc_83144A40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83144A44:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x83144a04
	goto loc_83144A04;
loc_83144A58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83144A60;
	sub_830D58E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x830d6c48
	ctx.lr = 0x83144A70;
	sub_830D6C48(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,264
	ctx.r28.s64 = ctx.r11.s64 + 264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830d8d28
	ctx.lr = 0x83144A84;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144b14
	if (!ctx.cr0.eq) goto loc_83144B14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// bl 0x830d8d28
	ctx.lr = 0x83144A98;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144b14
	if (!ctx.cr0.eq) goto loc_83144B14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// bl 0x830d8d28
	ctx.lr = 0x83144AAC;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144ad8
	if (!ctx.cr0.eq) goto loc_83144AD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// bl 0x830d8d28
	ctx.lr = 0x83144AC0;
	sub_830D8D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83144ad8
	if (!ctx.cr0.eq) goto loc_83144AD8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83144b50
	goto loc_83144B50;
loc_83144AD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144AE4;
	sub_830DD390(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83144b08
	if (ctx.cr0.eq) goto loc_83144B08;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r9,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r9.u8);
	// b 0x83144b0c
	goto loc_83144B0C;
loc_83144B08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83144B0C:
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// b 0x83144b4c
	goto loc_83144B4C;
loc_83144B14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144B20;
	sub_830DD390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x83144b44
	if (ctx.cr0.eq) goto loc_83144B44;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r29.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83144b48
	goto loc_83144B48;
loc_83144B44:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83144B48:
	// stb r29,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r29.u8);
loc_83144B4C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83144B50:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
loc_83144B58:
	// bl 0x831b3a50
	ctx.lr = 0x83144B5C;
	sub_831B3A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83144960
	goto loc_83144960;
}

__attribute__((alias("__imp__sub_83144B64"))) PPC_WEAK_FUNC(sub_83144B64);
PPC_FUNC_IMPL(__imp__sub_83144B64) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b4220
	ctx.lr = 0x83144B7C;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144B8C"))) PPC_WEAK_FUNC(sub_83144B8C);
PPC_FUNC_IMPL(__imp__sub_83144B8C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b4220
	ctx.lr = 0x83144BA4;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144BB4"))) PPC_WEAK_FUNC(sub_83144BB4);
PPC_FUNC_IMPL(__imp__sub_83144BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144BB8"))) PPC_WEAK_FUNC(sub_83144BB8);
PPC_FUNC_IMPL(__imp__sub_83144BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16464(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16464);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83144BC8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x830d60f8
	ctx.lr = 0x83144BEC;
	sub_830D60F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// bl 0x833a7320
	ctx.lr = 0x83144C04;
	sub_833A7320(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// addi r11,r11,14952
	ctx.r11.s64 = ctx.r11.s64 + 14952;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144c30
	if (ctx.cr0.eq) goto loc_83144C30;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a3b00
	ctx.lr = 0x83144C2C;
	sub_833A3B00(ctx, base);
	// b 0x83144c74
	goto loc_83144C74;
loc_83144C30:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d6af0
	ctx.lr = 0x83144C3C;
	sub_830D6AF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83144c64
	if (ctx.cr6.eq) goto loc_83144C64;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x83144C58;
	sub_831B3A50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
loc_83144C64:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a3b08
	ctx.lr = 0x83144C74;
	sub_833A3B08(ctx, base);
loc_83144C74:
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x83144dd4
	if (ctx.cr6.gt) {
		// ERROR 83144DD4
		return;
	}
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,15080
	ctx.r12.s64 = ctx.r12.s64 + 15080;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31980
	ctx.r12.s64 = -2095841280;
	// nop 
	// addi r12,r12,19628
	ctx.r12.s64 = ctx.r12.s64 + 19628;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83144BC0"))) PPC_WEAK_FUNC(sub_83144BC0);
PPC_FUNC_IMPL(__imp__sub_83144BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83144BC8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x830d60f8
	ctx.lr = 0x83144BEC;
	sub_830D60F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// bl 0x833a7320
	ctx.lr = 0x83144C04;
	sub_833A7320(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// addi r11,r11,14952
	ctx.r11.s64 = ctx.r11.s64 + 14952;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144c30
	if (ctx.cr0.eq) goto loc_83144C30;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a3b00
	ctx.lr = 0x83144C2C;
	sub_833A3B00(ctx, base);
	// b 0x83144c74
	goto loc_83144C74;
loc_83144C30:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d6af0
	ctx.lr = 0x83144C3C;
	sub_830D6AF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83144c64
	if (ctx.cr6.eq) goto loc_83144C64;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
loc_83144C54:
	// bl 0x831b3a50
	ctx.lr = 0x83144C58;
	sub_831B3A50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83144C5C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
loc_83144C64:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833a3b08
	ctx.lr = 0x83144C74;
	sub_833A3B08(ctx, base);
loc_83144C74:
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x83144dd4
	if (ctx.cr6.gt) goto loc_83144DD4;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,15080
	ctx.r12.s64 = ctx.r12.s64 + 15080;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31980
	ctx.r12.s64 = -2095841280;
	// nop 
	// addi r12,r12,19628
	ctx.r12.s64 = ctx.r12.s64 + 19628;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) goto loc_83144DD4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_83144CC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// b 0x83144c54
	goto loc_83144C54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83144dd4
	if (ctx.cr6.lt) goto loc_83144DD4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83144d14
	if (ctx.cr6.lt) goto loc_83144D14;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x83144d14
	if (ctx.cr6.gt) goto loc_83144D14;
	// bl 0x833a7320
	ctx.lr = 0x83144D08;
	sub_833A7320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x83144dd4
	if (!ctx.cr6.eq) goto loc_83144DD4;
loc_83144D14:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// blt cr6,0x83144d34
	if (ctx.cr6.lt) goto loc_83144D34;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) goto loc_83144DD4;
loc_83144D34:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// blt cr6,0x83144d54
	if (ctx.cr6.lt) goto loc_83144D54;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) goto loc_83144DD4;
loc_83144D54:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83144d80
	if (ctx.cr6.gt) goto loc_83144D80;
	// bl 0x833a7320
	ctx.lr = 0x83144D74;
	sub_833A7320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x83144dd4
	if (!ctx.cr6.eq) goto loc_83144DD4;
loc_83144D80:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) goto loc_83144DD4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) goto loc_83144DD4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83144dd4
	if (!ctx.cr6.eq) goto loc_83144DD4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
loc_83144DD4:
	// bl 0x833a7320
	ctx.lr = 0x83144DD8;
	sub_833A7320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x83144df0
	if (!ctx.cr6.eq) goto loc_83144DF0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	goto loc_83144CC0;
loc_83144DF0:
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144e38
	if (ctx.cr0.eq) goto loc_83144E38;
loc_83144E00:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x83144e28
	if (ctx.cr6.eq) goto loc_83144E28;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x83144e28
	if (ctx.cr6.eq) goto loc_83144E28;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x83144e28
	if (ctx.cr6.eq) goto loc_83144E28;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x83144e40
	if (!ctx.cr6.eq) goto loc_83144E40;
loc_83144E28:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// bne 0x83144e00
	if (!ctx.cr0.eq) goto loc_83144E00;
loc_83144E38:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83144e4c
	goto loc_83144E4C;
loc_83144E40:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_83144E4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x83144E58;
	sub_831B3A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83144c5c
	goto loc_83144C5C;
}

__attribute__((alias("__imp__sub_83144CAC"))) PPC_WEAK_FUNC(sub_83144CAC);
PPC_FUNC_IMPL(__imp__sub_83144CAC) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) {
		// ERROR 83144DD4
		return;
	}
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// b 0x83144c54
	// ERROR 83144C54
	return;
}

__attribute__((alias("__imp__sub_83144CCC"))) PPC_WEAK_FUNC(sub_83144CCC);
PPC_FUNC_IMPL(__imp__sub_83144CCC) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83144dd4
	if (ctx.cr6.lt) {
		// ERROR 83144DD4
		return;
	}
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
}

__attribute__((alias("__imp__sub_83144CE4"))) PPC_WEAK_FUNC(sub_83144CE4);
PPC_FUNC_IMPL(__imp__sub_83144CE4) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83144d14
	if (ctx.cr6.lt) goto loc_83144D14;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x83144d14
	if (ctx.cr6.gt) goto loc_83144D14;
	// bl 0x833a7320
	ctx.lr = 0x83144D08;
	sub_833A7320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x83144dd4
	if (!ctx.cr6.eq) {
		// ERROR 83144DD4
		return;
	}
loc_83144D14:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
}

__attribute__((alias("__imp__sub_83144D20"))) PPC_WEAK_FUNC(sub_83144D20);
PPC_FUNC_IMPL(__imp__sub_83144D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// blt cr6,0x83144d34
	if (ctx.cr6.lt) goto loc_83144D34;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) {
		// ERROR 83144DD4
		return;
	}
loc_83144D34:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
}

__attribute__((alias("__imp__sub_83144D40"))) PPC_WEAK_FUNC(sub_83144D40);
PPC_FUNC_IMPL(__imp__sub_83144D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// blt cr6,0x83144d54
	if (ctx.cr6.lt) goto loc_83144D54;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) {
		// ERROR 83144DD4
		return;
	}
loc_83144D54:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
}

__attribute__((alias("__imp__sub_83144D60"))) PPC_WEAK_FUNC(sub_83144D60);
PPC_FUNC_IMPL(__imp__sub_83144D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83144d80
	if (ctx.cr6.gt) goto loc_83144D80;
	// bl 0x833a7320
	ctx.lr = 0x83144D74;
	sub_833A7320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x83144dd4
	if (!ctx.cr6.eq) {
		// ERROR 83144DD4
		return;
	}
loc_83144D80:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
}

__attribute__((alias("__imp__sub_83144D8C"))) PPC_WEAK_FUNC(sub_83144D8C);
PPC_FUNC_IMPL(__imp__sub_83144D8C) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) {
		// ERROR 83144DD4
		return;
	}
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
}

__attribute__((alias("__imp__sub_83144DA4"))) PPC_WEAK_FUNC(sub_83144DA4);
PPC_FUNC_IMPL(__imp__sub_83144DA4) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x83144dd4
	if (!ctx.cr6.gt) {
		// ERROR 83144DD4
		return;
	}
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
}

__attribute__((alias("__imp__sub_83144DBC"))) PPC_WEAK_FUNC(sub_83144DBC);
PPC_FUNC_IMPL(__imp__sub_83144DBC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83144dd4
	if (!ctx.cr6.eq) goto loc_83144DD4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
loc_83144DD4:
	// bl 0x833a7320
	ctx.lr = 0x83144DD8;
	sub_833A7320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x83144df0
	if (!ctx.cr6.eq) goto loc_83144DF0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x83144cc0
	// ERROR 83144CC0
	return;
loc_83144DF0:
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83144e38
	if (ctx.cr0.eq) goto loc_83144E38;
loc_83144E00:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x83144e28
	if (ctx.cr6.eq) goto loc_83144E28;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x83144e28
	if (ctx.cr6.eq) goto loc_83144E28;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x83144e28
	if (ctx.cr6.eq) goto loc_83144E28;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x83144e40
	if (!ctx.cr6.eq) goto loc_83144E40;
loc_83144E28:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// bne 0x83144e00
	if (!ctx.cr0.eq) goto loc_83144E00;
loc_83144E38:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83144e4c
	goto loc_83144E4C;
loc_83144E40:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_83144E4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b3a50
	ctx.lr = 0x83144E58;
	sub_831B3A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83144c5c
	// ERROR 83144C5C
	return;
}

__attribute__((alias("__imp__sub_83144E60"))) PPC_WEAK_FUNC(sub_83144E60);
PPC_FUNC_IMPL(__imp__sub_83144E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831b4220
	ctx.lr = 0x83144E78;
	sub_831B4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144E88"))) PPC_WEAK_FUNC(sub_83144E88);
PPC_FUNC_IMPL(__imp__sub_83144E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16628(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16628);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a4
	ctx.lr = 0x83144EA0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r5,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r5.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x83145104
	if (ctx.cr6.eq) {
		sub_83145104(ctx, base);
		return;
	}
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x83145044
	if (ctx.cr6.eq) {
		sub_83145044(ctx, base);
		return;
	}
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x83144f8c
	if (ctx.cr6.eq) {
		sub_83144F8C(ctx, base);
		return;
	}
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// ble cr6,0x831451a8
	if (!ctx.cr6.gt) {
		// ERROR 831451A8
		return;
	}
	// cmpwi cr6,r4,43
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 43, ctx.xer);
	// bgt cr6,0x831451a8
	if (ctx.cr6.gt) {
		// ERROR 831451A8
		return;
	}
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83144bc0
	ctx.lr = 0x83144EF8;
	sub_83144BC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831451a8
	if (ctx.cr0.eq) {
		// ERROR 831451A8
		return;
	}
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144F10;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83144f30
	if (ctx.cr6.eq) goto loc_83144F30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// b 0x83144f34
	goto loc_83144F34;
loc_83144F30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83144F34:
	// addi r11,r29,-31
	ctx.r11.s64 = ctx.r29.s64 + -31;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x831451a8
	if (ctx.cr6.gt) {
		// ERROR 831451A8
		return;
	}
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,15096
	ctx.r12.s64 = ctx.r12.s64 + 15096;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31980
	ctx.r12.s64 = -2095841280;
	// nop 
	// addi r12,r12,20328
	ctx.r12.s64 = ctx.r12.s64 + 20328;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83144E90"))) PPC_WEAK_FUNC(sub_83144E90);
PPC_FUNC_IMPL(__imp__sub_83144E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a4
	ctx.lr = 0x83144EA0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r5,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r5.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x83145104
	if (ctx.cr6.eq) goto loc_83145104;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x83145044
	if (ctx.cr6.eq) goto loc_83145044;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x83144f8c
	if (ctx.cr6.eq) goto loc_83144F8C;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// ble cr6,0x831451a8
	if (!ctx.cr6.gt) goto loc_831451A8;
	// cmpwi cr6,r4,43
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 43, ctx.xer);
	// bgt cr6,0x831451a8
	if (ctx.cr6.gt) goto loc_831451A8;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83144bc0
	ctx.lr = 0x83144EF8;
	sub_83144BC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831451a8
	if (ctx.cr0.eq) goto loc_831451A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144F10;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83144f30
	if (ctx.cr6.eq) goto loc_83144F30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// b 0x83144f34
	goto loc_83144F34;
loc_83144F30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83144F34:
	// addi r11,r29,-31
	ctx.r11.s64 = ctx.r29.s64 + -31;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x831451a8
	if (ctx.cr6.gt) goto loc_831451A8;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,15096
	ctx.r12.s64 = ctx.r12.s64 + 15096;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31980
	ctx.r12.s64 = -2095841280;
	// nop 
	// addi r12,r12,20328
	ctx.r12.s64 = ctx.r12.s64 + 20328;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x831451ac
	goto loc_831451AC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// b 0x831451ac
	goto loc_831451AC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// b 0x831451ac
	goto loc_831451AC;
loc_83144F8C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319c9a8
	ctx.lr = 0x83144F9C;
	sub_8319C9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144FAC;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83144fd4
	if (ctx.cr6.eq) goto loc_83144FD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83144fd8
	goto loc_83144FD8;
loc_83144FD4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83144FD8:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8314502c
	if (ctx.cr0.eq) goto loc_8314502C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lfd f0,22992(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22992);
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83145020
	if (ctx.cr6.lt) goto loc_83145020;
	// beq cr6,0x83145018
	if (ctx.cr6.eq) goto loc_83145018;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8314503c
	if (!ctx.cr6.lt) goto loc_8314503C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83145024
	goto loc_83145024;
loc_83145018:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83145024
	goto loc_83145024;
loc_83145020:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83145024:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x8314503c
	goto loc_8314503C;
loc_8314502C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lfd f0,104(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
loc_8314503C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x83145198
	goto loc_83145198;
loc_83145044:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8319c760
	ctx.lr = 0x83145054;
	sub_8319C760(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83145064;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8314508c
	if (ctx.cr6.eq) goto loc_8314508C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83145090
	goto loc_83145090;
loc_8314508C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83145090:
	// lbz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831450e4
	if (ctx.cr0.eq) goto loc_831450E4;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x831450d8
	if (ctx.cr6.lt) goto loc_831450D8;
	// beq cr6,0x831450d0
	if (ctx.cr6.eq) goto loc_831450D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x831450f8
	if (!ctx.cr6.lt) goto loc_831450F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x831450dc
	goto loc_831450DC;
loc_831450D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831450dc
	goto loc_831450DC;
loc_831450D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831450DC:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x831450f8
	goto loc_831450F8;
loc_831450E4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lfd f0,152(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_831450F8:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8319c7d0
	ctx.lr = 0x83145100;
	sub_8319C7D0(ctx, base);
	// b 0x8314519c
	goto loc_8314519C;
loc_83145104:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314511c
	if (ctx.cr0.eq) goto loc_8314511C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8319bb18
	ctx.lr = 0x83145118;
	sub_8319BB18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8314511C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8319c9a8
	ctx.lr = 0x8314512C;
	sub_8319C9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83145154
	if (ctx.cr0.eq) goto loc_83145154;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8319ca18
	ctx.lr = 0x8314514C;
	sub_8319CA18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831451a8
	goto loc_831451A8;
loc_83145154:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83145160;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83145188
	if (ctx.cr6.eq) goto loc_83145188;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8314518c
	goto loc_8314518C;
loc_83145188:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8314518C:
	// lfd f0,200(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 200);
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
loc_83145198:
	// bl 0x8319ca18
	ctx.lr = 0x8314519C;
	sub_8319CA18(ctx, base);
loc_8314519C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831451ac
	goto loc_831451AC;
loc_831451A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831451AC:
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83144F68"))) PPC_WEAK_FUNC(sub_83144F68);
PPC_FUNC_IMPL(__imp__sub_83144F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x831451ac
	// ERROR 831451AC
	return;
}

__attribute__((alias("__imp__sub_83144F74"))) PPC_WEAK_FUNC(sub_83144F74);
PPC_FUNC_IMPL(__imp__sub_83144F74) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// b 0x831451ac
	// ERROR 831451AC
	return;
}

__attribute__((alias("__imp__sub_83144F80"))) PPC_WEAK_FUNC(sub_83144F80);
PPC_FUNC_IMPL(__imp__sub_83144F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// b 0x831451ac
	// ERROR 831451AC
	return;
}

__attribute__((alias("__imp__sub_83144F8C"))) PPC_WEAK_FUNC(sub_83144F8C);
PPC_FUNC_IMPL(__imp__sub_83144F8C) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319c9a8
	ctx.lr = 0x83144F9C;
	sub_8319C9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83144FAC;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83144fd4
	if (ctx.cr6.eq) goto loc_83144FD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83144fd8
	goto loc_83144FD8;
loc_83144FD4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83144FD8:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8314502c
	if (ctx.cr0.eq) goto loc_8314502C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lfd f0,22992(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22992);
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83145020
	if (ctx.cr6.lt) goto loc_83145020;
	// beq cr6,0x83145018
	if (ctx.cr6.eq) goto loc_83145018;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8314503c
	if (!ctx.cr6.lt) goto loc_8314503C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83145024
	goto loc_83145024;
loc_83145018:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83145024
	goto loc_83145024;
loc_83145020:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83145024:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x8314503c
	goto loc_8314503C;
loc_8314502C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lfd f0,104(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
loc_8314503C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x83145198
	// ERROR 83145198
	return;
}

__attribute__((alias("__imp__sub_83145044"))) PPC_WEAK_FUNC(sub_83145044);
PPC_FUNC_IMPL(__imp__sub_83145044) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8319c760
	ctx.lr = 0x83145054;
	sub_8319C760(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83145064;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8314508c
	if (ctx.cr6.eq) goto loc_8314508C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83145090
	goto loc_83145090;
loc_8314508C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83145090:
	// lbz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831450e4
	if (ctx.cr0.eq) goto loc_831450E4;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lfs f0,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x831450d8
	if (ctx.cr6.lt) goto loc_831450D8;
	// beq cr6,0x831450d0
	if (ctx.cr6.eq) goto loc_831450D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x831450f8
	if (!ctx.cr6.lt) goto loc_831450F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x831450dc
	goto loc_831450DC;
loc_831450D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831450dc
	goto loc_831450DC;
loc_831450D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831450DC:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x831450f8
	goto loc_831450F8;
loc_831450E4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lfd f0,152(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_831450F8:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8319c7d0
	ctx.lr = 0x83145100;
	sub_8319C7D0(ctx, base);
	// b 0x8314519c
	// ERROR 8314519C
	return;
}

__attribute__((alias("__imp__sub_83145104"))) PPC_WEAK_FUNC(sub_83145104);
PPC_FUNC_IMPL(__imp__sub_83145104) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314511c
	if (ctx.cr0.eq) goto loc_8314511C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8319bb18
	ctx.lr = 0x83145118;
	sub_8319BB18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8314511C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8319c9a8
	ctx.lr = 0x8314512C;
	sub_8319C9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83145154
	if (ctx.cr0.eq) goto loc_83145154;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8319ca18
	ctx.lr = 0x8314514C;
	sub_8319CA18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831451a8
	goto loc_831451A8;
loc_83145154:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x830dd390
	ctx.lr = 0x83145160;
	sub_830DD390(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83145188
	if (ctx.cr6.eq) goto loc_83145188;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8314518c
	goto loc_8314518C;
loc_83145188:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8314518C:
	// lfd f0,200(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 200);
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8319ca18
	ctx.lr = 0x8314519C;
	sub_8319CA18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831451ac
	goto loc_831451AC;
loc_831451A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831451AC:
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831451B4"))) PPC_WEAK_FUNC(sub_831451B4);
PPC_FUNC_IMPL(__imp__sub_831451B4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16628(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16628);
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,20904
	ctx.r3.s64 = ctx.r3.s64 + 20904;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831451BC"))) PPC_WEAK_FUNC(sub_831451BC);
PPC_FUNC_IMPL(__imp__sub_831451BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,20904
	ctx.r3.s64 = ctx.r3.s64 + 20904;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831451E0"))) PPC_WEAK_FUNC(sub_831451E0);
PPC_FUNC_IMPL(__imp__sub_831451E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8319ca18
	ctx.lr = 0x831451F8;
	sub_8319CA18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145208"))) PPC_WEAK_FUNC(sub_83145208);
PPC_FUNC_IMPL(__imp__sub_83145208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8319c7d0
	ctx.lr = 0x83145220;
	sub_8319C7D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145230"))) PPC_WEAK_FUNC(sub_83145230);
PPC_FUNC_IMPL(__imp__sub_83145230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-288
	ctx.r31.s64 = ctx.r12.s64 + -288;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8319ca18
	ctx.lr = 0x83145248;
	sub_8319CA18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145258"))) PPC_WEAK_FUNC(sub_83145258);
PPC_FUNC_IMPL(__imp__sub_83145258) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r31,-4496(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8314528c
	if (ctx.cr6.eq) goto loc_8314528C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83143920
	ctx.lr = 0x83145284;
	sub_83143920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x8314528C;
	sub_830DD3E0(ctx, base);
loc_8314528C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4496(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4496, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831452AC"))) PPC_WEAK_FUNC(sub_831452AC);
PPC_FUNC_IMPL(__imp__sub_831452AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831452B0"))) PPC_WEAK_FUNC(sub_831452B0);
PPC_FUNC_IMPL(__imp__sub_831452B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16776(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16776);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830dd340
	ctx.lr = 0x831452D8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831452f8
	if (ctx.cr0.eq) goto loc_831452F8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r4,43
	ctx.r4.s64 = 43;
	// lwz r5,-5084(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83143888
	ctx.lr = 0x831452F4;
	sub_83143888(ctx, base);
	// b 0x831452fc
	goto loc_831452FC;
loc_831452F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831452FC:
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-4496(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4496, ctx.r3.u32);
	// beq cr6,0x831457f0
	if (ctx.cr6.eq) goto loc_831457F0;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,21080
	ctx.r4.s64 = ctx.r11.s64 + 21080;
	// addi r3,r10,-4480
	ctx.r3.s64 = ctx.r10.s64 + -4480;
	// bl 0x830ff598
	ctx.lr = 0x83145320;
	sub_830FF598(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16900
	ctx.r4.s64 = ctx.r10.s64 + 16900;
	// bl 0x8317aff8
	ctx.lr = 0x8314533C;
	sub_8317AFF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17008
	ctx.r4.s64 = ctx.r10.s64 + 17008;
	// bl 0x8317aff8
	ctx.lr = 0x83145358;
	sub_8317AFF8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16992
	ctx.r4.s64 = ctx.r10.s64 + 16992;
	// bl 0x8317aff8
	ctx.lr = 0x83145374;
	sub_8317AFF8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17516
	ctx.r4.s64 = ctx.r10.s64 + 17516;
	// bl 0x8317aff8
	ctx.lr = 0x83145390;
	sub_8317AFF8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17528
	ctx.r4.s64 = ctx.r10.s64 + 17528;
	// bl 0x8317aff8
	ctx.lr = 0x831453AC;
	sub_8317AFF8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17364
	ctx.r4.s64 = ctx.r10.s64 + 17364;
	// bl 0x8317aff8
	ctx.lr = 0x831453C8;
	sub_8317AFF8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17320
	ctx.r4.s64 = ctx.r10.s64 + 17320;
	// bl 0x8317aff8
	ctx.lr = 0x831453E4;
	sub_8317AFF8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17352
	ctx.r4.s64 = ctx.r10.s64 + 17352;
	// bl 0x8317aff8
	ctx.lr = 0x83145400;
	sub_8317AFF8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17340
	ctx.r4.s64 = ctx.r10.s64 + 17340;
	// bl 0x8317aff8
	ctx.lr = 0x8314541C;
	sub_8317AFF8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17444
	ctx.r4.s64 = ctx.r10.s64 + 17444;
	// bl 0x8317aff8
	ctx.lr = 0x83145438;
	sub_8317AFF8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17432
	ctx.r4.s64 = ctx.r10.s64 + 17432;
	// bl 0x8317aff8
	ctx.lr = 0x83145454;
	sub_8317AFF8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17412
	ctx.r4.s64 = ctx.r10.s64 + 17412;
	// bl 0x8317aff8
	ctx.lr = 0x83145470;
	sub_8317AFF8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17384
	ctx.r4.s64 = ctx.r10.s64 + 17384;
	// bl 0x8317aff8
	ctx.lr = 0x8314548C;
	sub_8317AFF8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17396
	ctx.r4.s64 = ctx.r10.s64 + 17396;
	// bl 0x8317aff8
	ctx.lr = 0x831454A8;
	sub_8317AFF8(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17496
	ctx.r4.s64 = ctx.r10.s64 + 17496;
	// bl 0x8317aff8
	ctx.lr = 0x831454C4;
	sub_8317AFF8(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17468
	ctx.r4.s64 = ctx.r10.s64 + 17468;
	// bl 0x8317aff8
	ctx.lr = 0x831454E0;
	sub_8317AFF8(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17572
	ctx.r4.s64 = ctx.r10.s64 + 17572;
	// bl 0x8317aff8
	ctx.lr = 0x831454FC;
	sub_8317AFF8(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17588
	ctx.r4.s64 = ctx.r10.s64 + 17588;
	// bl 0x8317aff8
	ctx.lr = 0x83145518;
	sub_8317AFF8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7072
	ctx.r4.s64 = ctx.r10.s64 + -7072;
	// bl 0x8317aff8
	ctx.lr = 0x83145534;
	sub_8317AFF8(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17600
	ctx.r4.s64 = ctx.r10.s64 + 17600;
	// bl 0x8317aff8
	ctx.lr = 0x83145550;
	sub_8317AFF8(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16916
	ctx.r4.s64 = ctx.r10.s64 + 16916;
	// bl 0x8317aff8
	ctx.lr = 0x8314556C;
	sub_8317AFF8(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16928
	ctx.r4.s64 = ctx.r10.s64 + 16928;
	// bl 0x8317aff8
	ctx.lr = 0x83145588;
	sub_8317AFF8(ctx, base);
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// li r11,22
	ctx.r11.s64 = 22;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7040
	ctx.r4.s64 = ctx.r10.s64 + -7040;
	// bl 0x8317aff8
	ctx.lr = 0x831455A4;
	sub_8317AFF8(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7024
	ctx.r4.s64 = ctx.r10.s64 + -7024;
	// bl 0x8317aff8
	ctx.lr = 0x831455C0;
	sub_8317AFF8(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16948
	ctx.r4.s64 = ctx.r10.s64 + 16948;
	// bl 0x8317aff8
	ctx.lr = 0x831455DC;
	sub_8317AFF8(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16960
	ctx.r4.s64 = ctx.r10.s64 + 16960;
	// bl 0x8317aff8
	ctx.lr = 0x831455F8;
	sub_8317AFF8(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7404
	ctx.r4.s64 = ctx.r10.s64 + -7404;
	// bl 0x8317aff8
	ctx.lr = 0x83145614;
	sub_8317AFF8(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7396
	ctx.r4.s64 = ctx.r10.s64 + -7396;
	// bl 0x8317aff8
	ctx.lr = 0x83145630;
	sub_8317AFF8(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7384
	ctx.r4.s64 = ctx.r10.s64 + -7384;
	// bl 0x8317aff8
	ctx.lr = 0x8314564C;
	sub_8317AFF8(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7732
	ctx.r4.s64 = ctx.r10.s64 + -7732;
	// bl 0x8317aff8
	ctx.lr = 0x83145668;
	sub_8317AFF8(ctx, base);
	// li r11,30
	ctx.r11.s64 = 30;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7716
	ctx.r4.s64 = ctx.r10.s64 + -7716;
	// bl 0x8317aff8
	ctx.lr = 0x83145684;
	sub_8317AFF8(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16976
	ctx.r4.s64 = ctx.r10.s64 + 16976;
	// bl 0x8317aff8
	ctx.lr = 0x831456A0;
	sub_8317AFF8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17024
	ctx.r4.s64 = ctx.r10.s64 + 17024;
	// bl 0x8317aff8
	ctx.lr = 0x831456BC;
	sub_8317AFF8(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17064
	ctx.r4.s64 = ctx.r10.s64 + 17064;
	// bl 0x8317aff8
	ctx.lr = 0x831456D8;
	sub_8317AFF8(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17096
	ctx.r4.s64 = ctx.r10.s64 + 17096;
	// bl 0x8317aff8
	ctx.lr = 0x831456F4;
	sub_8317AFF8(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17108
	ctx.r4.s64 = ctx.r10.s64 + 17108;
	// bl 0x8317aff8
	ctx.lr = 0x83145710;
	sub_8317AFF8(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17116
	ctx.r4.s64 = ctx.r10.s64 + 17116;
	// bl 0x8317aff8
	ctx.lr = 0x8314572C;
	sub_8317AFF8(ctx, base);
	// li r11,37
	ctx.r11.s64 = 37;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17128
	ctx.r4.s64 = ctx.r10.s64 + 17128;
	// bl 0x8317aff8
	ctx.lr = 0x83145748;
	sub_8317AFF8(ctx, base);
	// li r11,38
	ctx.r11.s64 = 38;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17140
	ctx.r4.s64 = ctx.r10.s64 + 17140;
	// bl 0x8317aff8
	ctx.lr = 0x83145764;
	sub_8317AFF8(ctx, base);
	// li r11,39
	ctx.r11.s64 = 39;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17180
	ctx.r4.s64 = ctx.r10.s64 + 17180;
	// bl 0x8317aff8
	ctx.lr = 0x83145780;
	sub_8317AFF8(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17208
	ctx.r4.s64 = ctx.r10.s64 + 17208;
	// bl 0x8317aff8
	ctx.lr = 0x8314579C;
	sub_8317AFF8(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17232
	ctx.r4.s64 = ctx.r10.s64 + 17232;
	// bl 0x8317aff8
	ctx.lr = 0x831457B8;
	sub_8317AFF8(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17260
	ctx.r4.s64 = ctx.r10.s64 + 17260;
	// bl 0x8317aff8
	ctx.lr = 0x831457D4;
	sub_8317AFF8(ctx, base);
	// li r11,43
	ctx.r11.s64 = 43;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17288
	ctx.r4.s64 = ctx.r10.s64 + 17288;
	// bl 0x8317aff8
	ctx.lr = 0x831457F0;
	sub_8317AFF8(ctx, base);
loc_831457F0:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_831452B8"))) PPC_WEAK_FUNC(sub_831452B8);
PPC_FUNC_IMPL(__imp__sub_831452B8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x830dd340
	ctx.lr = 0x831452D8;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831452f8
	if (ctx.cr0.eq) goto loc_831452F8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r4,43
	ctx.r4.s64 = 43;
	// lwz r5,-5084(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83143888
	ctx.lr = 0x831452F4;
	sub_83143888(ctx, base);
	// b 0x831452fc
	goto loc_831452FC;
loc_831452F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831452FC:
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-4496(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4496, ctx.r3.u32);
	// beq cr6,0x831457f0
	if (ctx.cr6.eq) goto loc_831457F0;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,21080
	ctx.r4.s64 = ctx.r11.s64 + 21080;
	// addi r3,r10,-4480
	ctx.r3.s64 = ctx.r10.s64 + -4480;
	// bl 0x830ff598
	ctx.lr = 0x83145320;
	sub_830FF598(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16900
	ctx.r4.s64 = ctx.r10.s64 + 16900;
	// bl 0x8317aff8
	ctx.lr = 0x8314533C;
	sub_8317AFF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17008
	ctx.r4.s64 = ctx.r10.s64 + 17008;
	// bl 0x8317aff8
	ctx.lr = 0x83145358;
	sub_8317AFF8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16992
	ctx.r4.s64 = ctx.r10.s64 + 16992;
	// bl 0x8317aff8
	ctx.lr = 0x83145374;
	sub_8317AFF8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17516
	ctx.r4.s64 = ctx.r10.s64 + 17516;
	// bl 0x8317aff8
	ctx.lr = 0x83145390;
	sub_8317AFF8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17528
	ctx.r4.s64 = ctx.r10.s64 + 17528;
	// bl 0x8317aff8
	ctx.lr = 0x831453AC;
	sub_8317AFF8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17364
	ctx.r4.s64 = ctx.r10.s64 + 17364;
	// bl 0x8317aff8
	ctx.lr = 0x831453C8;
	sub_8317AFF8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17320
	ctx.r4.s64 = ctx.r10.s64 + 17320;
	// bl 0x8317aff8
	ctx.lr = 0x831453E4;
	sub_8317AFF8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17352
	ctx.r4.s64 = ctx.r10.s64 + 17352;
	// bl 0x8317aff8
	ctx.lr = 0x83145400;
	sub_8317AFF8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17340
	ctx.r4.s64 = ctx.r10.s64 + 17340;
	// bl 0x8317aff8
	ctx.lr = 0x8314541C;
	sub_8317AFF8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17444
	ctx.r4.s64 = ctx.r10.s64 + 17444;
	// bl 0x8317aff8
	ctx.lr = 0x83145438;
	sub_8317AFF8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17432
	ctx.r4.s64 = ctx.r10.s64 + 17432;
	// bl 0x8317aff8
	ctx.lr = 0x83145454;
	sub_8317AFF8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17412
	ctx.r4.s64 = ctx.r10.s64 + 17412;
	// bl 0x8317aff8
	ctx.lr = 0x83145470;
	sub_8317AFF8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17384
	ctx.r4.s64 = ctx.r10.s64 + 17384;
	// bl 0x8317aff8
	ctx.lr = 0x8314548C;
	sub_8317AFF8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17396
	ctx.r4.s64 = ctx.r10.s64 + 17396;
	// bl 0x8317aff8
	ctx.lr = 0x831454A8;
	sub_8317AFF8(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17496
	ctx.r4.s64 = ctx.r10.s64 + 17496;
	// bl 0x8317aff8
	ctx.lr = 0x831454C4;
	sub_8317AFF8(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17468
	ctx.r4.s64 = ctx.r10.s64 + 17468;
	// bl 0x8317aff8
	ctx.lr = 0x831454E0;
	sub_8317AFF8(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17572
	ctx.r4.s64 = ctx.r10.s64 + 17572;
	// bl 0x8317aff8
	ctx.lr = 0x831454FC;
	sub_8317AFF8(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17588
	ctx.r4.s64 = ctx.r10.s64 + 17588;
	// bl 0x8317aff8
	ctx.lr = 0x83145518;
	sub_8317AFF8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7072
	ctx.r4.s64 = ctx.r10.s64 + -7072;
	// bl 0x8317aff8
	ctx.lr = 0x83145534;
	sub_8317AFF8(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17600
	ctx.r4.s64 = ctx.r10.s64 + 17600;
	// bl 0x8317aff8
	ctx.lr = 0x83145550;
	sub_8317AFF8(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16916
	ctx.r4.s64 = ctx.r10.s64 + 16916;
	// bl 0x8317aff8
	ctx.lr = 0x8314556C;
	sub_8317AFF8(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16928
	ctx.r4.s64 = ctx.r10.s64 + 16928;
	// bl 0x8317aff8
	ctx.lr = 0x83145588;
	sub_8317AFF8(ctx, base);
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// li r11,22
	ctx.r11.s64 = 22;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7040
	ctx.r4.s64 = ctx.r10.s64 + -7040;
	// bl 0x8317aff8
	ctx.lr = 0x831455A4;
	sub_8317AFF8(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7024
	ctx.r4.s64 = ctx.r10.s64 + -7024;
	// bl 0x8317aff8
	ctx.lr = 0x831455C0;
	sub_8317AFF8(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16948
	ctx.r4.s64 = ctx.r10.s64 + 16948;
	// bl 0x8317aff8
	ctx.lr = 0x831455DC;
	sub_8317AFF8(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16960
	ctx.r4.s64 = ctx.r10.s64 + 16960;
	// bl 0x8317aff8
	ctx.lr = 0x831455F8;
	sub_8317AFF8(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7404
	ctx.r4.s64 = ctx.r10.s64 + -7404;
	// bl 0x8317aff8
	ctx.lr = 0x83145614;
	sub_8317AFF8(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7396
	ctx.r4.s64 = ctx.r10.s64 + -7396;
	// bl 0x8317aff8
	ctx.lr = 0x83145630;
	sub_8317AFF8(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7384
	ctx.r4.s64 = ctx.r10.s64 + -7384;
	// bl 0x8317aff8
	ctx.lr = 0x8314564C;
	sub_8317AFF8(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7732
	ctx.r4.s64 = ctx.r10.s64 + -7732;
	// bl 0x8317aff8
	ctx.lr = 0x83145668;
	sub_8317AFF8(ctx, base);
	// li r11,30
	ctx.r11.s64 = 30;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-7716
	ctx.r4.s64 = ctx.r10.s64 + -7716;
	// bl 0x8317aff8
	ctx.lr = 0x83145684;
	sub_8317AFF8(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,16976
	ctx.r4.s64 = ctx.r10.s64 + 16976;
	// bl 0x8317aff8
	ctx.lr = 0x831456A0;
	sub_8317AFF8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17024
	ctx.r4.s64 = ctx.r10.s64 + 17024;
	// bl 0x8317aff8
	ctx.lr = 0x831456BC;
	sub_8317AFF8(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17064
	ctx.r4.s64 = ctx.r10.s64 + 17064;
	// bl 0x8317aff8
	ctx.lr = 0x831456D8;
	sub_8317AFF8(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17096
	ctx.r4.s64 = ctx.r10.s64 + 17096;
	// bl 0x8317aff8
	ctx.lr = 0x831456F4;
	sub_8317AFF8(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17108
	ctx.r4.s64 = ctx.r10.s64 + 17108;
	// bl 0x8317aff8
	ctx.lr = 0x83145710;
	sub_8317AFF8(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17116
	ctx.r4.s64 = ctx.r10.s64 + 17116;
	// bl 0x8317aff8
	ctx.lr = 0x8314572C;
	sub_8317AFF8(ctx, base);
	// li r11,37
	ctx.r11.s64 = 37;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17128
	ctx.r4.s64 = ctx.r10.s64 + 17128;
	// bl 0x8317aff8
	ctx.lr = 0x83145748;
	sub_8317AFF8(ctx, base);
	// li r11,38
	ctx.r11.s64 = 38;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17140
	ctx.r4.s64 = ctx.r10.s64 + 17140;
	// bl 0x8317aff8
	ctx.lr = 0x83145764;
	sub_8317AFF8(ctx, base);
	// li r11,39
	ctx.r11.s64 = 39;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17180
	ctx.r4.s64 = ctx.r10.s64 + 17180;
	// bl 0x8317aff8
	ctx.lr = 0x83145780;
	sub_8317AFF8(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17208
	ctx.r4.s64 = ctx.r10.s64 + 17208;
	// bl 0x8317aff8
	ctx.lr = 0x8314579C;
	sub_8317AFF8(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17232
	ctx.r4.s64 = ctx.r10.s64 + 17232;
	// bl 0x8317aff8
	ctx.lr = 0x831457B8;
	sub_8317AFF8(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17260
	ctx.r4.s64 = ctx.r10.s64 + 17260;
	// bl 0x8317aff8
	ctx.lr = 0x831457D4;
	sub_8317AFF8(ctx, base);
	// li r11,43
	ctx.r11.s64 = 43;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,17288
	ctx.r4.s64 = ctx.r10.s64 + 17288;
	// bl 0x8317aff8
	ctx.lr = 0x831457F0;
	sub_8317AFF8(ctx, base);
loc_831457F0:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83145808"))) PPC_WEAK_FUNC(sub_83145808);
PPC_FUNC_IMPL(__imp__sub_83145808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83145820;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145830"))) PPC_WEAK_FUNC(sub_83145830);
PPC_FUNC_IMPL(__imp__sub_83145830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83145838;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83145974
	if (ctx.cr6.eq) goto loc_83145974;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83145974
	if (ctx.cr0.eq) goto loc_83145974;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x831458a0
	if (!ctx.cr6.eq) goto loc_831458A0;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x83145880
	goto loc_83145880;
loc_8314587C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83145880:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8314587c
	if (!ctx.cr0.eq) goto loc_8314587C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// bl 0x830de8c8
	ctx.lr = 0x83145898;
	sub_830DE8C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83145974
	if (!ctx.cr0.eq) goto loc_83145974;
loc_831458A0:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x831458ec
	if (!ctx.cr6.eq) goto loc_831458EC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831458d8
	if (ctx.cr0.eq) goto loc_831458D8;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// b 0x831458c4
	goto loc_831458C4;
loc_831458C0:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831458C4:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831458c0
	if (!ctx.cr0.eq) goto loc_831458C0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// b 0x831458dc
	goto loc_831458DC;
loc_831458D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_831458DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830deb08
	ctx.lr = 0x831458E4;
	sub_830DEB08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83145974
	if (!ctx.cr0.eq) goto loc_83145974;
loc_831458EC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14776
	ctx.r11.s64 = ctx.r11.s64 + 14776;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83145958
	if (ctx.cr6.lt) goto loc_83145958;
	// beq cr6,0x83145940
	if (ctx.cr6.eq) goto loc_83145940;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83145920
	if (ctx.cr6.lt) goto loc_83145920;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x83145978
	goto loc_83145978;
loc_83145920:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831448f0
	ctx.lr = 0x8314593C;
	sub_831448F0(ctx, base);
	// b 0x83145980
	goto loc_83145980;
loc_83145940:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83144568
	ctx.lr = 0x83145954;
	sub_83144568(ctx, base);
	// b 0x83145980
	goto loc_83145980;
loc_83145958:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83144e90
	ctx.lr = 0x83145970;
	sub_83144E90(ctx, base);
	// b 0x83145980
	goto loc_83145980;
loc_83145974:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83145978:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83145980:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145988"))) PPC_WEAK_FUNC(sub_83145988);
PPC_FUNC_IMPL(__imp__sub_83145988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16840(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16840);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x830dd340
	ctx.lr = 0x831459AC;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831459d8
	if (ctx.cr0.eq) goto loc_831459D8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r5,r10,17664
	ctx.r5.s64 = ctx.r10.s64 + 17664;
	// addi r4,r9,192
	ctx.r4.s64 = ctx.r9.s64 + 192;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83148b08
	ctx.lr = 0x831459D4;
	sub_83148B08(ctx, base);
	// b 0x831459dc
	goto loc_831459DC;
loc_831459D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831459DC:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-4500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4500, ctx.r3.u32);
	// beq cr6,0x83145a00
	if (ctx.cr6.eq) goto loc_83145A00;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,14376
	ctx.r4.s64 = ctx.r11.s64 + 14376;
	// addi r3,r10,-4492
	ctx.r3.s64 = ctx.r10.s64 + -4492;
	// bl 0x830ff598
	ctx.lr = 0x83145A00;
	sub_830FF598(ctx, base);
loc_83145A00:
	// bl 0x831452b8
	ctx.lr = 0x83145A04;
	sub_831452B8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145990"))) PPC_WEAK_FUNC(sub_83145990);
PPC_FUNC_IMPL(__imp__sub_83145990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x830dd340
	ctx.lr = 0x831459AC;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831459d8
	if (ctx.cr0.eq) goto loc_831459D8;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r5,r10,17664
	ctx.r5.s64 = ctx.r10.s64 + 17664;
	// addi r4,r9,192
	ctx.r4.s64 = ctx.r9.s64 + 192;
	// lwz r6,-5084(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x83148b08
	ctx.lr = 0x831459D4;
	sub_83148B08(ctx, base);
	// b 0x831459dc
	goto loc_831459DC;
loc_831459D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831459DC:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-4500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4500, ctx.r3.u32);
	// beq cr6,0x83145a00
	if (ctx.cr6.eq) goto loc_83145A00;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,14376
	ctx.r4.s64 = ctx.r11.s64 + 14376;
	// addi r3,r10,-4492
	ctx.r3.s64 = ctx.r10.s64 + -4492;
	// bl 0x830ff598
	ctx.lr = 0x83145A00;
	sub_830FF598(ctx, base);
loc_83145A00:
	// bl 0x831452b8
	ctx.lr = 0x83145A04;
	sub_831452B8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145A18"))) PPC_WEAK_FUNC(sub_83145A18);
PPC_FUNC_IMPL(__imp__sub_83145A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83145A30;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145A40"))) PPC_WEAK_FUNC(sub_83145A40);
PPC_FUNC_IMPL(__imp__sub_83145A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16972(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16972);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x83145A58;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83145aa8
	if (!ctx.cr6.eq) goto loc_83145AA8;
	// bl 0x83143990
	ctx.lr = 0x83145A78;
	sub_83143990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83145A84;
	sub_830FCF80(ctx, base);
	// lwz r11,-4496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83145a9c
	if (!ctx.cr6.eq) goto loc_83145A9C;
	// bl 0x831452b8
	ctx.lr = 0x83145A94;
	sub_831452B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83145A9C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83145AA4;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
loc_83145AA8:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83178eb8
	ctx.lr = 0x83145AB4;
	sub_83178EB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83145ae0
	if (ctx.cr0.eq) {
		// ERROR 83145AE0
		return;
	}
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,-5084(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x831b52b0
	ctx.lr = 0x83145AD0;
	sub_831B52B0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83145ae4
	// ERROR 83145AE4
	return;
}

__attribute__((alias("__imp__sub_83145A48"))) PPC_WEAK_FUNC(sub_83145A48);
PPC_FUNC_IMPL(__imp__sub_83145A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01ac
	ctx.lr = 0x83145A58;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83145aa8
	if (!ctx.cr6.eq) goto loc_83145AA8;
	// bl 0x83143990
	ctx.lr = 0x83145A78;
	sub_83143990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcf80
	ctx.lr = 0x83145A84;
	sub_830FCF80(ctx, base);
	// lwz r11,-4496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83145a9c
	if (!ctx.cr6.eq) goto loc_83145A9C;
	// bl 0x831452b8
	ctx.lr = 0x83145A94;
	sub_831452B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83145A9C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83145AA4;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
loc_83145AA8:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83178eb8
	ctx.lr = 0x83145AB4;
	sub_83178EB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83145ae0
	if (ctx.cr0.eq) goto loc_83145AE0;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,-4496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4496);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,-5084(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x831b52b0
	ctx.lr = 0x83145AD0;
	sub_831B52B0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83145ae4
	goto loc_83145AE4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83145AE0;
	sub_830FCFB8(ctx, base);
loc_83145AE0:
	// li r3,44
	ctx.r3.s64 = 44;
loc_83145AE4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145AD8"))) PPC_WEAK_FUNC(sub_83145AD8);
PPC_FUNC_IMPL(__imp__sub_83145AD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83145AE0;
	sub_830FCFB8(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145AEC"))) PPC_WEAK_FUNC(sub_83145AEC);
PPC_FUNC_IMPL(__imp__sub_83145AEC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16972(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16972);
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833a7198
	ctx.lr = 0x83145B0C;
	sub_833A7198(ctx, base);
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,16972(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16972);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,23256
	ctx.r3.s64 = ctx.r3.s64 + 23256;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145AF4"))) PPC_WEAK_FUNC(sub_83145AF4);
PPC_FUNC_IMPL(__imp__sub_83145AF4) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833a7198
	ctx.lr = 0x83145B0C;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83145B14"))) PPC_WEAK_FUNC(sub_83145B14);
PPC_FUNC_IMPL(__imp__sub_83145B14) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31980
	ctx.r3.s64 = -2095841280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,23256
	ctx.r3.s64 = ctx.r3.s64 + 23256;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145B28"))) PPC_WEAK_FUNC(sub_83145B28);
PPC_FUNC_IMPL(__imp__sub_83145B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x83145B40;
	sub_830FCFB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145B50"))) PPC_WEAK_FUNC(sub_83145B50);
PPC_FUNC_IMPL(__imp__sub_83145B50) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x83145b94
	if (ctx.cr6.eq) goto loc_83145B94;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x83145b6c
	if (ctx.cr6.lt) goto loc_83145B6C;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x83145b94
	if (!ctx.cr6.gt) goto loc_83145B94;
loc_83145B6C:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x83145b7c
	if (ctx.cr6.lt) goto loc_83145B7C;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x83145b94
	if (!ctx.cr6.gt) goto loc_83145B94;
loc_83145B7C:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x83145b8c
	if (ctx.cr6.lt) goto loc_83145B8C;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// ble cr6,0x83145b94
	if (!ctx.cr6.gt) goto loc_83145B94;
loc_83145B8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83145B94:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145B9C"))) PPC_WEAK_FUNC(sub_83145B9C);
PPC_FUNC_IMPL(__imp__sub_83145B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145BA0"))) PPC_WEAK_FUNC(sub_83145BA0);
PPC_FUNC_IMPL(__imp__sub_83145BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83145BA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x83147878
	ctx.lr = 0x83145BF0;
	sub_83147878(ctx, base);
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x83145c70
	if (ctx.cr6.eq) goto loc_83145C70;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x83145c68
	if (ctx.cr6.eq) goto loc_83145C68;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x83145c60
	if (ctx.cr6.eq) goto loc_83145C60;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x83145c58
	if (ctx.cr6.eq) goto loc_83145C58;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x83145c44
	if (ctx.cr6.eq) goto loc_83145C44;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x83145c84
	if (!ctx.cr6.eq) goto loc_83145C84;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319f280
	ctx.lr = 0x83145C40;
	sub_8319F280(ctx, base);
	// b 0x83145c80
	goto loc_83145C80;
loc_83145C44:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319fc40
	ctx.lr = 0x83145C54;
	sub_8319FC40(ctx, base);
	// b 0x83145c80
	goto loc_83145C80;
loc_83145C58:
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x83145c74
	goto loc_83145C74;
loc_83145C60:
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x83145c74
	goto loc_83145C74;
loc_83145C68:
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x83145c74
	goto loc_83145C74;
loc_83145C70:
	// li r4,20
	ctx.r4.s64 = 20;
loc_83145C74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319fa48
	ctx.lr = 0x83145C80;
	sub_8319FA48(ctx, base);
loc_83145C80:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83145C84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145C90"))) PPC_WEAK_FUNC(sub_83145C90);
PPC_FUNC_IMPL(__imp__sub_83145C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83145C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r6,16
	ctx.r30.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bgt cr6,0x83145d34
	if (ctx.cr6.gt) goto loc_83145D34;
	// beq cr6,0x83145d10
	if (ctx.cr6.eq) goto loc_83145D10;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x83145cec
	if (ctx.cr6.eq) goto loc_83145CEC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// ble cr6,0x83145d9c
	if (!ctx.cr6.gt) goto loc_83145D9C;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// ble cr6,0x83145ce0
	if (!ctx.cr6.gt) goto loc_83145CE0;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x83145d9c
	if (!ctx.cr6.eq) goto loc_83145D9C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x83145d9c
	goto loc_83145D9C;
loc_83145CE0:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319f9a8
	ctx.lr = 0x83145CE8;
	sub_8319F9A8(ctx, base);
	// b 0x83145d9c
	goto loc_83145D9C;
loc_83145CEC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319f530
	ctx.lr = 0x83145D0C;
	sub_8319F530(ctx, base);
	// b 0x83145d9c
	goto loc_83145D9C;
loc_83145D10:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319f5d0
	ctx.lr = 0x83145D30;
	sub_8319F5D0(ctx, base);
	// b 0x83145d9c
	goto loc_83145D9C;
loc_83145D34:
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// beq cr6,0x83145d7c
	if (ctx.cr6.eq) goto loc_83145D7C;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x83145d70
	if (ctx.cr6.eq) goto loc_83145D70;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// bne cr6,0x83145d9c
	if (!ctx.cr6.eq) goto loc_83145D9C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319fb00
	ctx.lr = 0x83145D6C;
	sub_8319FB00(ctx, base);
	// b 0x83145d9c
	goto loc_83145D9C;
loc_83145D70:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319f498
	ctx.lr = 0x83145D78;
	sub_8319F498(ctx, base);
	// b 0x83145d9c
	goto loc_83145D9C;
loc_83145D7C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319fba0
	ctx.lr = 0x83145D9C;
	sub_8319FBA0(ctx, base);
loc_83145D9C:
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// beq cr6,0x83145da8
	if (ctx.cr6.eq) goto loc_83145DA8;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
loc_83145DA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145DB0"))) PPC_WEAK_FUNC(sub_83145DB0);
PPC_FUNC_IMPL(__imp__sub_83145DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83145DB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r28,44
	ctx.r3.s64 = ctx.r28.s64 + 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8319f718
	ctx.lr = 0x83145DF0;
	sub_8319F718(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83145e44
	if (!ctx.cr6.gt) goto loc_83145E44;
loc_83145E00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x83147878
	ctx.lr = 0x83145E2C;
	sub_83147878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831a0478
	ctx.lr = 0x83145E38;
	sub_831A0478(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x83145e00
	if (ctx.cr6.lt) goto loc_83145E00;
loc_83145E44:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145E50"))) PPC_WEAK_FUNC(sub_83145E50);
PPC_FUNC_IMPL(__imp__sub_83145E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83145E58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83145ed0
	if (!ctx.cr6.eq) goto loc_83145ED0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x83145ee8
	goto loc_83145EE8;
loc_83145ED0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83147878
	ctx.lr = 0x83145EE4;
	sub_83147878(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_83145EE8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83147878
	ctx.lr = 0x83145EFC;
	sub_83147878(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x83145f10
	if (!ctx.cr6.eq) goto loc_83145F10;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x83145f28
	goto loc_83145F28;
loc_83145F10:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83147878
	ctx.lr = 0x83145F24;
	sub_83147878(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_83145F28:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8319f338
	ctx.lr = 0x83145F40;
	sub_8319F338(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145F48"))) PPC_WEAK_FUNC(sub_83145F48);
PPC_FUNC_IMPL(__imp__sub_83145F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83145F50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83145fb0
	if (!ctx.cr0.eq) goto loc_83145FB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83147878
	ctx.lr = 0x83145FAC;
	sub_83147878(ctx, base);
	// b 0x8314609c
	goto loc_8314609C;
loc_83145FB0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r30,44
	ctx.r27.s64 = ctx.r30.s64 + 44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x83146030
	if (ctx.cr0.eq) goto loc_83146030;
	// bctrl 
	ctx.lr = 0x83145FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8319f670
	ctx.lr = 0x83145FE0;
	sub_8319F670(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83145FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83147878
	ctx.lr = 0x83146010;
	sub_83147878(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// neg r4,r3
	ctx.r4.s64 = -ctx.r3.s64;
	// b 0x83146090
	goto loc_83146090;
loc_83146030:
	// bctrl 
	ctx.lr = 0x83146034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// neg r4,r3
	ctx.r4.s64 = -ctx.r3.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8319f670
	ctx.lr = 0x83146044;
	sub_8319F670(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83147878
	ctx.lr = 0x83146074;
	sub_83147878(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314608C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83146090:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8319f670
	ctx.lr = 0x8314609C;
	sub_8319F670(ctx, base);
loc_8314609C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831460A4"))) PPC_WEAK_FUNC(sub_831460A4);
PPC_FUNC_IMPL(__imp__sub_831460A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831460A8"))) PPC_WEAK_FUNC(sub_831460A8);
PPC_FUNC_IMPL(__imp__sub_831460A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x831460B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831460D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bne 0x83146128
	if (!ctx.cr0.eq) goto loc_83146128;
	// addic. r30,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r30.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83146170
	if (ctx.cr0.lt) goto loc_83146170;
loc_831460EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83147878
	ctx.lr = 0x83146118;
	sub_83147878(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bge 0x831460ec
	if (!ctx.cr0.lt) goto loc_831460EC;
	// b 0x83146170
	goto loc_83146170;
loc_83146128:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83146170
	if (!ctx.cr6.gt) goto loc_83146170;
loc_83146134:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314614C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83147878
	ctx.lr = 0x83146160;
	sub_83147878(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x83146134
	if (ctx.cr6.lt) goto loc_83146134;
loc_83146170:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314617C"))) PPC_WEAK_FUNC(sub_8314617C);
PPC_FUNC_IMPL(__imp__sub_8314617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146180"))) PPC_WEAK_FUNC(sub_83146180);
PPC_FUNC_IMPL(__imp__sub_83146180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83146188;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831461B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831461D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831461E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt cr6,0x8314623c
	if (ctx.cr6.lt) goto loc_8314623C;
	// cmpw cr6,r22,r3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x83146228
	if (!ctx.cr6.eq) goto loc_83146228;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x83146344
	if (!ctx.cr6.gt) goto loc_83146344;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83146208:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83147878
	ctx.lr = 0x8314621C;
	sub_83147878(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83146208
	if (!ctx.cr0.eq) goto loc_83146208;
	// b 0x83146344
	goto loc_83146344;
loc_83146228:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x8314623c
	if (!ctx.cr6.gt) goto loc_8314623C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x831462a4
	if (!ctx.cr6.gt) goto loc_831462A4;
	// subf r3,r22,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r22.s64;
loc_8314623C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x831462a4
	if (!ctx.cr6.gt) goto loc_831462A4;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// addi r27,r29,44
	ctx.r27.s64 = ctx.r29.s64 + 44;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83146260:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8319f8f8
	ctx.lr = 0x8314626C;
	sub_8319F8F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// bl 0x83147878
	ctx.lr = 0x83146288;
	sub_83147878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323f230
	ctx.lr = 0x83146294;
	sub_8323F230(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bne 0x83146260
	if (!ctx.cr0.eq) goto loc_83146260;
	// b 0x83146314
	goto loc_83146314;
loc_831462A4:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x831462bc
	if (!ctx.cr6.eq) goto loc_831462BC;
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// bl 0x8319f860
	ctx.lr = 0x831462B8;
	sub_8319F860(ctx, base);
	// b 0x831462e8
	goto loc_831462E8;
loc_831462BC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831a0630
	ctx.lr = 0x831462C4;
	sub_831A0630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// bne 0x831462e0
	if (!ctx.cr0.eq) goto loc_831462E0;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x831462e4
	goto loc_831462E4;
loc_831462E0:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_831462E4:
	// bl 0x8319f7b8
	ctx.lr = 0x831462E8;
	sub_8319F7B8(ctx, base);
loc_831462E8:
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83147878
	ctx.lr = 0x83146304;
	sub_83147878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323f230
	ctx.lr = 0x83146310;
	sub_8323F230(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_83146314:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x83146340
	if (!ctx.cr6.gt) goto loc_83146340;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83146320:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83147878
	ctx.lr = 0x83146334;
	sub_83147878(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bne 0x83146320
	if (!ctx.cr0.eq) goto loc_83146320;
loc_83146340:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83146344:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314634C"))) PPC_WEAK_FUNC(sub_8314634C);
PPC_FUNC_IMPL(__imp__sub_8314634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146350"))) PPC_WEAK_FUNC(sub_83146350);
PPC_FUNC_IMPL(__imp__sub_83146350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83146358;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831463A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// andc r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831463C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x831485b0
	ctx.lr = 0x831463E0;
	sub_831485B0(ctx, base);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831463EC"))) PPC_WEAK_FUNC(sub_831463EC);
PPC_FUNC_IMPL(__imp__sub_831463EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831463F0"))) PPC_WEAK_FUNC(sub_831463F0);
PPC_FUNC_IMPL(__imp__sub_831463F0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x83146438
	if (!ctx.cr6.lt) goto loc_83146438;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r6,282
	ctx.r6.s64 = 282;
	// addi r4,r10,17244
	ctx.r4.s64 = ctx.r10.s64 + 17244;
	// li r5,109
	ctx.r5.s64 = 109;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5dc0
	ctx.lr = 0x83146428;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83146438;
	sub_833A7198(ctx, base);
loc_83146438:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146448"))) PPC_WEAK_FUNC(sub_83146448);
PPC_FUNC_IMPL(__imp__sub_83146448) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8314648c
	if (!ctx.cr6.eq) goto loc_8314648C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,282
	ctx.r6.s64 = 282;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// li r5,117
	ctx.r5.s64 = 117;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5dc0
	ctx.lr = 0x8314647C;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8314648C;
	sub_833A7198(ctx, base);
loc_8314648C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x831464b8
	if (ctx.cr6.lt) goto loc_831464B8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x831464b8
	if (!ctx.cr6.gt) goto loc_831464B8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831464B8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d56c0
	ctx.lr = 0x831464D4;
	sub_830D56C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// bl 0x833a7198
	ctx.lr = 0x831464E4;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_831464E4"))) PPC_WEAK_FUNC(sub_831464E4);
PPC_FUNC_IMPL(__imp__sub_831464E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831464E8"))) PPC_WEAK_FUNC(sub_831464E8);
PPC_FUNC_IMPL(__imp__sub_831464E8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8314652c
	if (!ctx.cr6.eq) goto loc_8314652C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,282
	ctx.r6.s64 = 282;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5dc0
	ctx.lr = 0x8314651C;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8314652C;
	sub_833A7198(ctx, base);
loc_8314652C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x83146558
	if (ctx.cr6.lt) goto loc_83146558;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x83146558
	if (!ctx.cr6.gt) goto loc_83146558;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83146558:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// li r5,131
	ctx.r5.s64 = 131;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d56c0
	ctx.lr = 0x83146574;
	sub_830D56C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// bl 0x833a7198
	ctx.lr = 0x83146584;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83146584"))) PPC_WEAK_FUNC(sub_83146584);
PPC_FUNC_IMPL(__imp__sub_83146584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146588"))) PPC_WEAK_FUNC(sub_83146588);
PPC_FUNC_IMPL(__imp__sub_83146588) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831465cc
	if (!ctx.cr6.eq) goto loc_831465CC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,282
	ctx.r6.s64 = 282;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// li r5,142
	ctx.r5.s64 = 142;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5dc0
	ctx.lr = 0x831465BC;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x831465CC;
	sub_833A7198(ctx, base);
loc_831465CC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x831465f8
	if (ctx.cr6.lt) goto loc_831465F8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x831465f8
	if (!ctx.cr6.gt) goto loc_831465F8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831465F8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// li r5,145
	ctx.r5.s64 = 145;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d56c0
	ctx.lr = 0x83146614;
	sub_830D56C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// bl 0x833a7198
	ctx.lr = 0x83146624;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83146624"))) PPC_WEAK_FUNC(sub_83146624);
PPC_FUNC_IMPL(__imp__sub_83146624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146628"))) PPC_WEAK_FUNC(sub_83146628);
PPC_FUNC_IMPL(__imp__sub_83146628) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8314666c
	if (!ctx.cr6.eq) goto loc_8314666C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,282
	ctx.r6.s64 = 282;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// li r5,153
	ctx.r5.s64 = 153;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5dc0
	ctx.lr = 0x8314665C;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8314666C;
	sub_833A7198(ctx, base);
loc_8314666C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x83146698
	if (ctx.cr6.lt) goto loc_83146698;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x83146698
	if (!ctx.cr6.gt) goto loc_83146698;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83146698:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r11,17244
	ctx.r4.s64 = ctx.r11.s64 + 17244;
	// li r5,156
	ctx.r5.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d56c0
	ctx.lr = 0x831466B4;
	sub_830D56C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28420
	ctx.r4.s64 = ctx.r11.s64 + -28420;
	// bl 0x833a7198
	ctx.lr = 0x831466C4;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_831466C4"))) PPC_WEAK_FUNC(sub_831466C4);
PPC_FUNC_IMPL(__imp__sub_831466C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831466C8"))) PPC_WEAK_FUNC(sub_831466C8);
PPC_FUNC_IMPL(__imp__sub_831466C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17312(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17312);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x831466D8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x830de230
	ctx.lr = 0x83146704;
	sub_830DE230(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,17288
	ctx.r11.s64 = ctx.r11.s64 + 17288;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830de690
	ctx.lr = 0x8314672C;
	sub_830DE690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831466D0"))) PPC_WEAK_FUNC(sub_831466D0);
PPC_FUNC_IMPL(__imp__sub_831466D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x831466D8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x830de230
	ctx.lr = 0x83146704;
	sub_830DE230(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,17288
	ctx.r11.s64 = ctx.r11.s64 + 17288;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830de690
	ctx.lr = 0x8314672C;
	sub_830DE690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146738"))) PPC_WEAK_FUNC(sub_83146738);
PPC_FUNC_IMPL(__imp__sub_83146738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x830de178
	ctx.lr = 0x83146750;
	sub_830DE178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146760"))) PPC_WEAK_FUNC(sub_83146760);
PPC_FUNC_IMPL(__imp__sub_83146760) {
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
	// bl 0x830de2a8
	ctx.lr = 0x83146778;
	sub_830DE2A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17288
	ctx.r11.s64 = ctx.r11.s64 + 17288;
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

__attribute__((alias("__imp__sub_8314679C"))) PPC_WEAK_FUNC(sub_8314679C);
PPC_FUNC_IMPL(__imp__sub_8314679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831467A0"))) PPC_WEAK_FUNC(sub_831467A0);
PPC_FUNC_IMPL(__imp__sub_831467A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,17288
	ctx.r11.s64 = ctx.r11.s64 + 17288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x830de178
	sub_830DE178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831467B0"))) PPC_WEAK_FUNC(sub_831467B0);
PPC_FUNC_IMPL(__imp__sub_831467B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17368(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17368);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x831467C0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x830dd390
	ctx.lr = 0x831467DC;
	sub_830DD390(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83146808
	if (ctx.cr0.eq) goto loc_83146808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de2a8
	ctx.lr = 0x831467F4;
	sub_830DE2A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,17288
	ctx.r11.s64 = ctx.r11.s64 + 17288;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8314680c
	goto loc_8314680C;
loc_83146808:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314680C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831467B8"))) PPC_WEAK_FUNC(sub_831467B8);
PPC_FUNC_IMPL(__imp__sub_831467B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x831467C0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x830dd390
	ctx.lr = 0x831467DC;
	sub_830DD390(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x83146808
	if (ctx.cr0.eq) goto loc_83146808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830de2a8
	ctx.lr = 0x831467F4;
	sub_830DE2A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,17288
	ctx.r11.s64 = ctx.r11.s64 + 17288;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8314680c
	goto loc_8314680C;
loc_83146808:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314680C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146814"))) PPC_WEAK_FUNC(sub_83146814);
PPC_FUNC_IMPL(__imp__sub_83146814) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83146834;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146844"))) PPC_WEAK_FUNC(sub_83146844);
PPC_FUNC_IMPL(__imp__sub_83146844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146848"))) PPC_WEAK_FUNC(sub_83146848);
PPC_FUNC_IMPL(__imp__sub_83146848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-4704
	ctx.r3.s64 = ctx.r11.s64 + -4704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146854"))) PPC_WEAK_FUNC(sub_83146854);
PPC_FUNC_IMPL(__imp__sub_83146854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146858"))) PPC_WEAK_FUNC(sub_83146858);
PPC_FUNC_IMPL(__imp__sub_83146858) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,17288
	ctx.r11.s64 = ctx.r11.s64 + 17288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x830de178
	ctx.lr = 0x83146884;
	sub_830DE178(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83146894
	if (ctx.cr0.eq) goto loc_83146894;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83146894;
	sub_830DD3E0(ctx, base);
loc_83146894:
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

__attribute__((alias("__imp__sub_831468B0"))) PPC_WEAK_FUNC(sub_831468B0);
PPC_FUNC_IMPL(__imp__sub_831468B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831468C0"))) PPC_WEAK_FUNC(sub_831468C0);
PPC_FUNC_IMPL(__imp__sub_831468C0) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83146948
	if (ctx.cr6.lt) goto loc_83146948;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// ori r9,r10,55296
	ctx.r9.u64 = ctx.r10.u64 | 55296;
	// ori r10,r7,56320
	ctx.r10.u64 = ctx.r7.u64 | 56320;
	// srawi r7,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 10;
	// clrlwi r8,r8,22
	ctx.r8.u64 = ctx.r8.u32 & 0x3FF;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sth r7,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r7.u16);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// blt cr6,0x8314692c
	if (ctx.cr6.lt) goto loc_8314692C;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r8,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 10;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// b 0x83146938
	goto loc_83146938;
loc_8314692C:
	// li r10,32
	ctx.r10.s64 = 32;
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
loc_83146938:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// b 0x831469a4
	goto loc_831469A4;
loc_83146948:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// sth r4,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r4.u16);
	// blt cr6,0x83146990
	if (ctx.cr6.lt) goto loc_83146990;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// srawi r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-10240
	ctx.r10.s64 = ctx.r10.s64 + -10240;
	// addi r11,r11,-9216
	ctx.r11.s64 = ctx.r11.s64 + -9216;
	// li r9,32
	ctx.r9.s64 = 32;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r9,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x831469a4
	goto loc_831469A4;
loc_83146990:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_831469A4:
	// bl 0x830d6790
	ctx.lr = 0x831469A8;
	sub_830D6790(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831469C4"))) PPC_WEAK_FUNC(sub_831469C4);
PPC_FUNC_IMPL(__imp__sub_831469C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831469C8"))) PPC_WEAK_FUNC(sub_831469C8);
PPC_FUNC_IMPL(__imp__sub_831469C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17424(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17424);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x831469D8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83146a90
	if (ctx.cr6.eq) goto loc_83146A90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83146a90
	if (!ctx.cr6.gt) goto loc_83146A90;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83146A6C:
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83146a6c
	if (ctx.cr6.lt) goto loc_83146A6C;
loc_83146A90:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83146acc
	if (ctx.cr6.eq) goto loc_83146ACC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83146AA4;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83146abc
	if (ctx.cr0.eq) goto loc_83146ABC;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x831a2358
	ctx.lr = 0x83146AB8;
	sub_831A2358(ctx, base);
	// b 0x83146ac0
	goto loc_83146AC0;
loc_83146ABC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83146AC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83146ACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831469D0"))) PPC_WEAK_FUNC(sub_831469D0);
PPC_FUNC_IMPL(__imp__sub_831469D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x831469D8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83146a90
	if (ctx.cr6.eq) goto loc_83146A90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83146a90
	if (!ctx.cr6.gt) goto loc_83146A90;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83146A6C:
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83146a6c
	if (ctx.cr6.lt) goto loc_83146A6C;
loc_83146A90:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83146acc
	if (ctx.cr6.eq) goto loc_83146ACC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83146AA4;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83146abc
	if (ctx.cr0.eq) goto loc_83146ABC;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x831a2358
	ctx.lr = 0x83146AB8;
	sub_831A2358(ctx, base);
	// b 0x83146ac0
	goto loc_83146AC0;
loc_83146ABC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83146AC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83146ACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146AD8"))) PPC_WEAK_FUNC(sub_83146AD8);
PPC_FUNC_IMPL(__imp__sub_83146AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83146AF0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146B00"))) PPC_WEAK_FUNC(sub_83146B00);
PPC_FUNC_IMPL(__imp__sub_83146B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17480(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17480);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83146B10;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// beq cr6,0x83146b70
	if (ctx.cr6.eq) goto loc_83146B70;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83146B70:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83146ba4
	if (ctx.cr0.eq) goto loc_83146BA4;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83146ba4
	if (ctx.cr6.eq) goto loc_83146BA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83146BA4:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83146c14
	if (ctx.cr6.eq) goto loc_83146C14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83146c14
	if (!ctx.cr6.gt) goto loc_83146C14;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83146BF0:
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83146bf0
	if (ctx.cr6.lt) goto loc_83146BF0;
loc_83146C14:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83146c50
	if (ctx.cr6.eq) goto loc_83146C50;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83146C28;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83146c40
	if (ctx.cr0.eq) goto loc_83146C40;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x831a2358
	ctx.lr = 0x83146C3C;
	sub_831A2358(ctx, base);
	// b 0x83146c44
	goto loc_83146C44;
loc_83146C40:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83146C44:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83146C50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146B08"))) PPC_WEAK_FUNC(sub_83146B08);
PPC_FUNC_IMPL(__imp__sub_83146B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83146B10;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// beq cr6,0x83146b70
	if (ctx.cr6.eq) goto loc_83146B70;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83146B70:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83146ba4
	if (ctx.cr0.eq) goto loc_83146BA4;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83146ba4
	if (ctx.cr6.eq) goto loc_83146BA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83146BA4:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83146c14
	if (ctx.cr6.eq) goto loc_83146C14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83146c14
	if (!ctx.cr6.gt) goto loc_83146C14;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83146BF0:
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83146bf0
	if (ctx.cr6.lt) goto loc_83146BF0;
loc_83146C14:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83146c50
	if (ctx.cr6.eq) goto loc_83146C50;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x830dd340
	ctx.lr = 0x83146C28;
	sub_830DD340(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83146c40
	if (ctx.cr0.eq) goto loc_83146C40;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x831a2358
	ctx.lr = 0x83146C3C;
	sub_831A2358(ctx, base);
	// b 0x83146c44
	goto loc_83146C44;
loc_83146C40:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83146C44:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83146C50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C5C"))) PPC_WEAK_FUNC(sub_83146C5C);
PPC_FUNC_IMPL(__imp__sub_83146C5C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83146C74;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146C84"))) PPC_WEAK_FUNC(sub_83146C84);
PPC_FUNC_IMPL(__imp__sub_83146C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C88"))) PPC_WEAK_FUNC(sub_83146C88);
PPC_FUNC_IMPL(__imp__sub_83146C88) {
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
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83146cbc
	if (ctx.cr6.eq) goto loc_83146CBC;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83146CBC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83146ce8
	if (ctx.cr0.eq) goto loc_83146CE8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83146ce8
	if (ctx.cr6.eq) goto loc_83146CE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83146CE8:
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

__attribute__((alias("__imp__sub_83146CFC"))) PPC_WEAK_FUNC(sub_83146CFC);
PPC_FUNC_IMPL(__imp__sub_83146CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146D00"))) PPC_WEAK_FUNC(sub_83146D00);
PPC_FUNC_IMPL(__imp__sub_83146D00) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// subf r10,r6,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// beq 0x83146d60
	if (ctx.cr0.eq) goto loc_83146D60;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83146d60
	if (ctx.cr6.eq) goto loc_83146D60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83146D60:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x83146db0
	if (ctx.cr6.eq) goto loc_83146DB0;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83146d94
	if (ctx.cr6.eq) goto loc_83146D94;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83146D94:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_83146DB0:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x83146de4
	if (!ctx.cr6.gt) goto loc_83146DE4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83146DC4:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83146dc4
	if (ctx.cr6.lt) goto loc_83146DC4;
loc_83146DE4:
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

__attribute__((alias("__imp__sub_83146DFC"))) PPC_WEAK_FUNC(sub_83146DFC);
PPC_FUNC_IMPL(__imp__sub_83146DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E00"))) PPC_WEAK_FUNC(sub_83146E00);
PPC_FUNC_IMPL(__imp__sub_83146E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r10,0,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFC00;
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83146e90
	if (!ctx.cr6.eq) goto loc_83146E90;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83146e88
	if (!ctx.cr6.lt) goto loc_83146E88;
	// extsh. r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83146e88
	if (!ctx.cr0.gt) goto loc_83146E88;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,0,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFC00;
	// cmplwi cr6,r10,56320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56320, ctx.xer);
	// bne cr6,0x83146e88
	if (!ctx.cr6.eq) goto loc_83146E88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addis r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -65536;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,10249
	ctx.r9.s64 = ctx.r9.s64 + 10249;
	// rlwinm r10,r9,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// b 0x83146ef4
	goto loc_83146EF4;
loc_83146E88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83146E90:
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// bne cr6,0x83146efc
	if (!ctx.cr6.eq) goto loc_83146EFC;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x83146e88
	if (ctx.cr0.lt) goto loc_83146E88;
	// extsh. r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x83146e88
	if (ctx.cr0.gt) goto loc_83146E88;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// rlwinm r10,r10,0,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFC00;
	// cmplwi cr6,r10,55296
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55296, ctx.xer);
	// bne cr6,0x83146e88
	if (!ctx.cr6.eq) goto loc_83146E88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addi r11,r11,10249
	ctx.r11.s64 = ctx.r11.s64 + 10249;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
loc_83146EF4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_83146EFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146F04"))) PPC_WEAK_FUNC(sub_83146F04);
PPC_FUNC_IMPL(__imp__sub_83146F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146F08"))) PPC_WEAK_FUNC(sub_83146F08);
PPC_FUNC_IMPL(__imp__sub_83146F08) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,17084
	ctx.r31.s64 = ctx.r11.s64 + 17084;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319dbf8
	ctx.lr = 0x83146F34;
	sub_8319DBF8(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-4456(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4456, ctx.r3.u32);
	// bne 0x83146f80
	if (!ctx.cr0.eq) goto loc_83146F80;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,17528
	ctx.r4.s64 = ctx.r11.s64 + 17528;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,293
	ctx.r6.s64 = 293;
	// li r5,930
	ctx.r5.s64 = 930;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8311e9c0
	ctx.lr = 0x83146F70;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x83146F80;
	sub_833A7198(ctx, base);
loc_83146F80:
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,26800
	ctx.r4.s64 = ctx.r11.s64 + 26800;
	// addi r3,r10,-4452
	ctx.r3.s64 = ctx.r10.s64 + -4452;
	// bl 0x830ff598
	ctx.lr = 0x83146F94;
	sub_830FF598(ctx, base);
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

__attribute__((alias("__imp__sub_83146FAC"))) PPC_WEAK_FUNC(sub_83146FAC);
PPC_FUNC_IMPL(__imp__sub_83146FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146FB0"))) PPC_WEAK_FUNC(sub_83146FB0);
PPC_FUNC_IMPL(__imp__sub_83146FB0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bgt cr6,0x8314701c
	if (ctx.cr6.gt) goto loc_8314701C;
	// beq cr6,0x83147014
	if (ctx.cr6.eq) goto loc_83147014;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x8314700c
	if (ctx.cr6.eq) goto loc_8314700C;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// beq cr6,0x83147004
	if (ctx.cr6.eq) goto loc_83147004;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// beq cr6,0x83146ffc
	if (ctx.cr6.eq) goto loc_83146FFC;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x83146ff4
	if (ctx.cr6.eq) goto loc_83146FF4;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83146FF4:
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
loc_83146FFC:
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
loc_83147004:
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
loc_8314700C:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
loc_83147014:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8314701C:
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x83147054
	if (ctx.cr6.eq) goto loc_83147054;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x8314704c
	if (ctx.cr6.eq) goto loc_8314704C;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// beq cr6,0x83147044
	if (ctx.cr6.eq) goto loc_83147044;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_83147044:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_8314704C:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_83147054:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314705C"))) PPC_WEAK_FUNC(sub_8314705C);
PPC_FUNC_IMPL(__imp__sub_8314705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147060"))) PPC_WEAK_FUNC(sub_83147060);
PPC_FUNC_IMPL(__imp__sub_83147060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83147068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// extsh. r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt 0x8314708c
	if (ctx.cr0.gt) goto loc_8314708C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8314708C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83147118
	if (!ctx.cr6.lt) goto loc_83147118;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83147118
	if (ctx.cr6.lt) goto loc_83147118;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83146e00
	ctx.lr = 0x831470BC;
	sub_83146E00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147118
	if (ctx.cr0.eq) goto loc_83147118;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831470e4
	if (ctx.cr0.eq) goto loc_831470E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831468c0
	ctx.lr = 0x831470DC;
	sub_831468C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x831470f4
	goto loc_831470F4;
loc_831470E4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831470F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147118
	if (ctx.cr0.eq) goto loc_83147118;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8314710c
	if (!ctx.cr6.gt) goto loc_8314710C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8314710C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314711c
	goto loc_8314711C;
loc_83147118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314711C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147124"))) PPC_WEAK_FUNC(sub_83147124);
PPC_FUNC_IMPL(__imp__sub_83147124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147128"))) PPC_WEAK_FUNC(sub_83147128);
PPC_FUNC_IMPL(__imp__sub_83147128) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// extsh. r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x83147154
	if (ctx.cr0.gt) goto loc_83147154;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83147154:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83147234
	if (!ctx.cr6.lt) goto loc_83147234;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83147234
	if (ctx.cr6.lt) goto loc_83147234;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83146e00
	ctx.lr = 0x83147180;
	sub_83146E00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147234
	if (ctx.cr0.eq) goto loc_83147234;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83147210
	if (!ctx.cr0.eq) goto loc_83147210;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x831471dc
	if (!ctx.cr6.gt) goto loc_831471DC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x831471c8
	if (ctx.cr6.eq) goto loc_831471C8;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x831471c8
	if (ctx.cr6.eq) goto loc_831471C8;
	// cmplwi cr6,r11,8232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8232, ctx.xer);
	// beq cr6,0x831471c8
	if (ctx.cr6.eq) goto loc_831471C8;
	// cmplwi cr6,r11,8233
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8233, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x831471cc
	if (!ctx.cr6.eq) goto loc_831471CC;
loc_831471C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831471CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83147234
	if (!ctx.cr0.eq) goto loc_83147234;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x83147218
	if (ctx.cr6.gt) goto loc_83147218;
loc_831471DC:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83147204
	if (ctx.cr6.eq) goto loc_83147204;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83147204
	if (ctx.cr6.eq) goto loc_83147204;
	// cmplwi cr6,r11,8232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8232, ctx.xer);
	// beq cr6,0x83147204
	if (ctx.cr6.eq) goto loc_83147204;
	// cmplwi cr6,r11,8233
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8233, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83147208
	if (!ctx.cr6.eq) goto loc_83147208;
loc_83147204:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83147208:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147234
	if (ctx.cr0.eq) goto loc_83147234;
loc_83147210:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x83147224
	if (!ctx.cr6.gt) goto loc_83147224;
loc_83147218:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x83147228
	goto loc_83147228;
loc_83147224:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83147228:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83147238
	goto loc_83147238;
loc_83147234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83147238:
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

__attribute__((alias("__imp__sub_8314724C"))) PPC_WEAK_FUNC(sub_8314724C);
PPC_FUNC_IMPL(__imp__sub_8314724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147250"))) PPC_WEAK_FUNC(sub_83147250);
PPC_FUNC_IMPL(__imp__sub_83147250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83147258;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// extsh. r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt 0x83147280
	if (ctx.cr0.gt) goto loc_83147280;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83147280:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83147308
	if (!ctx.cr6.lt) goto loc_83147308;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83147308
	if (ctx.cr6.lt) goto loc_83147308;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83146e00
	ctx.lr = 0x831472B0;
	sub_83146E00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147308
	if (ctx.cr0.eq) goto loc_83147308;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831472CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831472dc
	if (ctx.cr0.eq) goto loc_831472DC;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x831a1bd8
	ctx.lr = 0x831472DC;
	sub_831A1BD8(ctx, base);
loc_831472DC:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831a1fb8
	ctx.lr = 0x831472E4;
	sub_831A1FB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147308
	if (ctx.cr0.eq) goto loc_83147308;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x831472fc
	if (!ctx.cr6.gt) goto loc_831472FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831472FC:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314730c
	goto loc_8314730C;
loc_83147308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314730C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147314"))) PPC_WEAK_FUNC(sub_83147314);
PPC_FUNC_IMPL(__imp__sub_83147314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147318"))) PPC_WEAK_FUNC(sub_83147318);
PPC_FUNC_IMPL(__imp__sub_83147318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83147320;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x83147418
	if (!ctx.cr6.gt) goto loc_83147418;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83147418
	if (!ctx.cr6.lt) goto loc_83147418;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x83146448
	ctx.lr = 0x83147358;
	sub_83146448(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83147410
	if (ctx.cr0.lt) goto loc_83147410;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x831464e8
	ctx.lr = 0x8314736C;
	sub_831464E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83147410
	if (ctx.cr0.lt) goto loc_83147410;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x83146448
	ctx.lr = 0x83147380;
	sub_83146448(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x831464e8
	ctx.lr = 0x83147390;
	sub_831464E8(ctx, base);
	// extsh. r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// subf r31,r29,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r29.s64;
	// ble 0x831473a4
	if (!ctx.cr0.gt) goto loc_831473A4;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x831473ac
	goto loc_831473AC;
loc_831473A4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_831473AC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x83147410
	if (ctx.cr6.lt) goto loc_83147410;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// beq 0x831473dc
	if (ctx.cr0.eq) goto loc_831473DC;
	// bl 0x830d68e0
	ctx.lr = 0x831473D8;
	sub_830D68E0(ctx, base);
	// b 0x831473e0
	goto loc_831473E0;
loc_831473DC:
	// bl 0x830d6880
	ctx.lr = 0x831473E0;
	sub_830D6880(ctx, base);
loc_831473E0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147410
	if (ctx.cr0.eq) goto loc_83147410;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x831473fc
	if (!ctx.cr6.gt) goto loc_831473FC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x83147400
	goto loc_83147400;
loc_831473FC:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_83147400:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83147408:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
loc_83147410:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83147408
	goto loc_83147408;
loc_83147418:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r6,290
	ctx.r6.s64 = 290;
	// addi r4,r11,17528
	ctx.r4.s64 = ctx.r11.s64 + 17528;
	// li r5,1316
	ctx.r5.s64 = 1316;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5a30
	ctx.lr = 0x83147434;
	sub_830D5A30(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28580
	ctx.r4.s64 = ctx.r11.s64 + -28580;
	// bl 0x833a7198
	ctx.lr = 0x83147444;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83147444"))) PPC_WEAK_FUNC(sub_83147444);
PPC_FUNC_IMPL(__imp__sub_83147444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147448"))) PPC_WEAK_FUNC(sub_83147448);
PPC_FUNC_IMPL(__imp__sub_83147448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83147450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83147494
	if (ctx.cr6.eq) goto loc_83147494;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83147494
	if (ctx.cr0.eq) goto loc_83147494;
	// lhz r9,2(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// b 0x83147480
	goto loc_83147480;
loc_8314747C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83147480:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8314747c
	if (!ctx.cr0.eq) goto loc_8314747C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// b 0x83147498
	goto loc_83147498;
loc_83147494:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83147498:
	// extsh. r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x831474a8
	if (!ctx.cr0.gt) goto loc_831474A8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x831474b0
	goto loc_831474B0;
loc_831474A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_831474B0:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x831474c8
	if (!ctx.cr6.lt) goto loc_831474C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314750c
	goto loc_8314750C;
loc_831474C8:
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// beq 0x831474e4
	if (ctx.cr0.eq) goto loc_831474E4;
	// bl 0x830d68e0
	ctx.lr = 0x831474E0;
	sub_830D68E0(ctx, base);
	// b 0x831474e8
	goto loc_831474E8;
loc_831474E4:
	// bl 0x830d6880
	ctx.lr = 0x831474E8;
	sub_830D6880(ctx, base);
loc_831474E8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314750c
	if (ctx.cr0.eq) goto loc_8314750C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83147504
	if (!ctx.cr6.gt) goto loc_83147504;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x83147508
	goto loc_83147508;
loc_83147504:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_83147508:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8314750C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147514"))) PPC_WEAK_FUNC(sub_83147514);
PPC_FUNC_IMPL(__imp__sub_83147514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147518"))) PPC_WEAK_FUNC(sub_83147518);
PPC_FUNC_IMPL(__imp__sub_83147518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a019c
	ctx.lr = 0x83147520;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314754C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ble 0x83147564
	if (!ctx.cr0.gt) goto loc_83147564;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83146448
	ctx.lr = 0x83147560;
	sub_83146448(ctx, base);
	// b 0x8314756c
	goto loc_8314756C;
loc_83147564:
	// neg r4,r30
	ctx.r4.s64 = -ctx.r30.s64;
	// bl 0x831464e8
	ctx.lr = 0x8314756C;
	sub_831464E8(ctx, base);
loc_8314756C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ble cr6,0x831475bc
	if (!ctx.cr6.gt) goto loc_831475BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83146588
	ctx.lr = 0x83147588;
	sub_83146588(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831485b0
	ctx.lr = 0x831475A0;
	sub_831485B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x831475f8
	if (!ctx.cr0.lt) goto loc_831475F8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83146588
	ctx.lr = 0x831475B8;
	sub_83146588(ctx, base);
	// b 0x831475f8
	goto loc_831475F8;
loc_831475BC:
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83146628
	ctx.lr = 0x831475C8;
	sub_83146628(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831485b0
	ctx.lr = 0x831475E0;
	sub_831485B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x831475f8
	if (!ctx.cr0.lt) goto loc_831475F8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83146628
	ctx.lr = 0x831475F8;
	sub_83146628(ctx, base);
loc_831475F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01ec
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147604"))) PPC_WEAK_FUNC(sub_83147604);
PPC_FUNC_IMPL(__imp__sub_83147604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147608"))) PPC_WEAK_FUNC(sub_83147608);
PPC_FUNC_IMPL(__imp__sub_83147608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17640);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83147618;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83147648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r10,-5084(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// li r22,-1
	ctx.r22.s64 = -1;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// beq 0x83147734
	if (ctx.cr0.eq) goto loc_83147734;
loc_8314768C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x831469d0
	ctx.lr = 0x83147698;
	sub_831469D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831476B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x831485b0
	ctx.lr = 0x831476C8;
	sub_831485B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83147700
	if (ctx.cr0.lt) goto loc_83147700;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83147700
	if (ctx.cr6.gt) goto loc_83147700;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x83147700
	if (!ctx.cr6.gt) goto loc_83147700;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// bl 0x83146b08
	ctx.lr = 0x831476F4;
	sub_83146B08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83147718
	if (ctx.cr6.eq) goto loc_83147718;
loc_83147700:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83146c88
	ctx.lr = 0x83147708;
	sub_83146C88(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8314768c
	if (ctx.cr6.lt) goto loc_8314768C;
	// b 0x83147720
	goto loc_83147720;
loc_83147718:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83146c88
	ctx.lr = 0x83147720;
	sub_83146C88(ctx, base);
loc_83147720:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x83147734
	if (ctx.cr6.eq) goto loc_83147734;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83146b08
	ctx.lr = 0x83147734;
	sub_83146B08(ctx, base);
loc_83147734:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83146c88
	ctx.lr = 0x8314773C;
	sub_83146C88(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147610"))) PPC_WEAK_FUNC(sub_83147610);
PPC_FUNC_IMPL(__imp__sub_83147610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0190
	ctx.lr = 0x83147618;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83147648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r10,-5084(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5084);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// li r22,-1
	ctx.r22.s64 = -1;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// beq 0x83147734
	if (ctx.cr0.eq) goto loc_83147734;
loc_8314768C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x831469d0
	ctx.lr = 0x83147698;
	sub_831469D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831476B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x831485b0
	ctx.lr = 0x831476C8;
	sub_831485B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x83147700
	if (ctx.cr0.lt) goto loc_83147700;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83147700
	if (ctx.cr6.gt) goto loc_83147700;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x83147700
	if (!ctx.cr6.gt) goto loc_83147700;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// bl 0x83146b08
	ctx.lr = 0x831476F4;
	sub_83146B08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83147718
	if (ctx.cr6.eq) goto loc_83147718;
loc_83147700:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83146c88
	ctx.lr = 0x83147708;
	sub_83146C88(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8314768c
	if (ctx.cr6.lt) goto loc_8314768C;
	// b 0x83147720
	goto loc_83147720;
loc_83147718:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83146c88
	ctx.lr = 0x83147720;
	sub_83146C88(ctx, base);
loc_83147720:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x83147734
	if (ctx.cr6.eq) goto loc_83147734;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83146b08
	ctx.lr = 0x83147734;
	sub_83146B08(ctx, base);
loc_83147734:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83146c88
	ctx.lr = 0x8314773C;
	sub_83146C88(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x833a01e0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147748"))) PPC_WEAK_FUNC(sub_83147748);
PPC_FUNC_IMPL(__imp__sub_83147748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83146c88
	ctx.lr = 0x83147760;
	sub_83146C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147770"))) PPC_WEAK_FUNC(sub_83147770);
PPC_FUNC_IMPL(__imp__sub_83147770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83146c88
	ctx.lr = 0x83147788;
	sub_83146C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147798"))) PPC_WEAK_FUNC(sub_83147798);
PPC_FUNC_IMPL(__imp__sub_83147798) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x831477bc
	if (!ctx.cr6.eq) goto loc_831477BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314782c
	goto loc_8314782C;
loc_831477BC:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831477f0
	if (ctx.cr0.eq) goto loc_831477F0;
	// lhz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// b 0x831477dc
	goto loc_831477DC;
loc_831477D8:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831477DC:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831477d8
	if (!ctx.cr0.eq) goto loc_831477D8;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// b 0x831477f4
	goto loc_831477F4;
loc_831477F0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_831477F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x83147828
	if (!ctx.cr6.gt) goto loc_83147828;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_83147804:
	// lhz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// bl 0x83146fb0
	ctx.lr = 0x8314780C;
	sub_83146FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8314783c
	if (ctx.cr0.eq) goto loc_8314783C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x83147804
	if (ctx.cr6.lt) goto loc_83147804;
loc_83147828:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_8314782C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8314783C:
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,17528
	ctx.r4.s64 = ctx.r9.s64 + 17528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,291
	ctx.r6.s64 = 291;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1443
	ctx.r5.s64 = 1443;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831466d0
	ctx.lr = 0x83147868;
	sub_831466D0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27212
	ctx.r4.s64 = ctx.r11.s64 + -27212;
	// bl 0x833a7198
	ctx.lr = 0x83147878;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83147878"))) PPC_WEAK_FUNC(sub_83147878);
PPC_FUNC_IMPL(__imp__sub_83147878) {
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
	// lhz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 26, ctx.xer);
	// bgt cr6,0x83147910
	if (ctx.cr6.gt) goto loc_83147910;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,17184
	ctx.r12.s64 = ctx.r12.s64 + 17184;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31980
	ctx.r12.s64 = -2095841280;
	// nop 
	// addi r12,r12,30908
	ctx.r12.s64 = ctx.r12.s64 + 30908;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x83145c90
	ctx.lr = 0x831478C4;
	sub_83145C90(ctx, base);
loc_831478C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// bl 0x831460a8
	ctx.lr = 0x831478D8;
	sub_831460A8(ctx, base);
	// b 0x831478c4
	goto loc_831478C4;
	// bl 0x83145db0
	ctx.lr = 0x831478E0;
	sub_83145DB0(ctx, base);
	// b 0x831478c4
	goto loc_831478C4;
	// bl 0x83146180
	ctx.lr = 0x831478E8;
	sub_83146180(ctx, base);
	// b 0x831478c4
	goto loc_831478C4;
	// bl 0x83145f48
	ctx.lr = 0x831478F0;
	sub_83145F48(ctx, base);
	// b 0x831478c4
	goto loc_831478C4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_831478F8:
	// bl 0x83145ba0
	ctx.lr = 0x831478FC;
	sub_83145BA0(ctx, base);
	// b 0x831478c4
	goto loc_831478C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x831478f8
	goto loc_831478F8;
	// bl 0x83145e50
	ctx.lr = 0x8314790C;
	sub_83145E50(ctx, base);
	// b 0x831478c4
	goto loc_831478C4;
loc_83147910:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r6,292
	ctx.r6.s64 = 292;
	// addi r4,r11,17528
	ctx.r4.s64 = ctx.r11.s64 + 17528;
	// li r5,1507
	ctx.r5.s64 = 1507;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d5dc0
	ctx.lr = 0x8314792C;
	sub_830D5DC0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x8314793C;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_8314793C"))) PPC_WEAK_FUNC(sub_8314793C);
PPC_FUNC_IMPL(__imp__sub_8314793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147940"))) PPC_WEAK_FUNC(sub_83147940);
PPC_FUNC_IMPL(__imp__sub_83147940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83147948;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83147a04
	if (!ctx.cr0.eq) goto loc_83147A04;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831479f4
	if (ctx.cr0.eq) goto loc_831479F4;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4456(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x831479d8
	if (!ctx.cr6.eq) goto loc_831479D8;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,17084
	ctx.r31.s64 = ctx.r11.s64 + 17084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319dbf8
	ctx.lr = 0x8314798C;
	sub_8319DBF8(ctx, base);
	// stw r3,-4456(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4456, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x831479d8
	if (!ctx.cr0.eq) goto loc_831479D8;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,17528
	ctx.r4.s64 = ctx.r10.s64 + 17528;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,293
	ctx.r6.s64 = 293;
	// li r5,1692
	ctx.r5.s64 = 1692;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8311e9c0
	ctx.lr = 0x831479C8;
	sub_8311E9C0(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x833a7198
	ctx.lr = 0x831479D8;
	sub_833A7198(ctx, base);
loc_831479D8:
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x831a1fb8
	ctx.lr = 0x831479E0;
	sub_831A1FB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x83147a3c
	goto loc_83147A3C;
loc_831479F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83145b50
	ctx.lr = 0x831479FC;
	sub_83145B50(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// b 0x83147a3c
	goto loc_83147A3C;
loc_83147A04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831a23b0
	ctx.lr = 0x83147A0C;
	sub_831A23B0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bgt cr6,0x83147a4c
	if (ctx.cr6.gt) goto loc_83147A4C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x83147a44
	if (!ctx.cr6.lt) goto loc_83147A44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83147a74
	if (!ctx.cr6.gt) goto loc_83147A74;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x83147a44
	if (!ctx.cr6.gt) goto loc_83147A44;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x83147a74
	if (ctx.cr6.gt) goto loc_83147A74;
loc_83147A38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83147A3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_83147A44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83147a3c
	goto loc_83147A3C;
loc_83147A4C:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x83147a60
	if (ctx.cr6.eq) goto loc_83147A60;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x83147a38
	if (ctx.cr6.eq) goto loc_83147A38;
	// b 0x83147a74
	goto loc_83147A74;
loc_83147A60:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x83147a38
	if (ctx.cr6.lt) goto loc_83147A38;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x83147a38
	if (ctx.cr6.gt) goto loc_83147A38;
loc_83147A74:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83147a3c
	goto loc_83147A3C;
}

__attribute__((alias("__imp__sub_83147A7C"))) PPC_WEAK_FUNC(sub_83147A7C);
PPC_FUNC_IMPL(__imp__sub_83147A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147A80"))) PPC_WEAK_FUNC(sub_83147A80);
PPC_FUNC_IMPL(__imp__sub_83147A80) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83147AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83147AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83147ae4
	if (ctx.cr6.eq) goto loc_83147AE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319edc0
	ctx.lr = 0x83147ADC;
	sub_8319EDC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83147AE4;
	sub_830DD3E0(ctx, base);
loc_83147AE4:
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83147b00
	if (ctx.cr6.eq) goto loc_83147B00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319f228
	ctx.lr = 0x83147AF8;
	sub_8319F228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83147B00;
	sub_830DD3E0(ctx, base);
loc_83147B00:
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

__attribute__((alias("__imp__sub_83147B18"))) PPC_WEAK_FUNC(sub_83147B18);
PPC_FUNC_IMPL(__imp__sub_83147B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a4
	ctx.lr = 0x83147B20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r7,-1
	ctx.r31.s64 = ctx.r7.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x83147b58
	if (ctx.cr6.lt) goto loc_83147B58;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x83147b58
	if (!ctx.cr6.lt) goto loc_83147B58;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x83147940
	ctx.lr = 0x83147B54;
	sub_83147940(ctx, base);
	// b 0x83147b5c
	goto loc_83147B5C;
loc_83147B58:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83147B5C:
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83147ba0
	if (!ctx.cr0.eq) goto loc_83147BA0;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83147B6C:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x83147b94
	if (ctx.cr6.lt) goto loc_83147B94;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x83147b94
	if (!ctx.cr6.lt) goto loc_83147B94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x83147940
	ctx.lr = 0x83147B90;
	sub_83147940(ctx, base);
	// b 0x83147b98
	goto loc_83147B98;
loc_83147B94:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83147B98:
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147b6c
	if (ctx.cr0.eq) goto loc_83147B6C;
loc_83147BA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147BA8"))) PPC_WEAK_FUNC(sub_83147BA8);
PPC_FUNC_IMPL(__imp__sub_83147BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17728(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17728);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// bl 0x83147a80
	ctx.lr = 0x83147BD4;
	sub_83147A80(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x8319f228
	ctx.lr = 0x83147BDC;
	sub_8319F228(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83147BB0"))) PPC_WEAK_FUNC(sub_83147BB0);
PPC_FUNC_IMPL(__imp__sub_83147BB0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// bl 0x83147a80
	ctx.lr = 0x83147BD4;
	sub_83147A80(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x8319f228
	ctx.lr = 0x83147BDC;
	sub_8319F228(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_83147BF4"))) PPC_WEAK_FUNC(sub_83147BF4);
PPC_FUNC_IMPL(__imp__sub_83147BF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8319f228
	ctx.lr = 0x83147C10;
	sub_8319F228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147C20"))) PPC_WEAK_FUNC(sub_83147C20);
PPC_FUNC_IMPL(__imp__sub_83147C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r3,-5084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// b 0x83146f08
	sub_83146F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147C2C"))) PPC_WEAK_FUNC(sub_83147C2C);
PPC_FUNC_IMPL(__imp__sub_83147C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147C30"))) PPC_WEAK_FUNC(sub_83147C30);
PPC_FUNC_IMPL(__imp__sub_83147C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83147C38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// bgt cr6,0x83147df0
	if (ctx.cr6.gt) goto loc_83147DF0;
	// beq cr6,0x83147d84
	if (ctx.cr6.eq) goto loc_83147D84;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x83147ec8
	if (ctx.cr6.eq) goto loc_83147EC8;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x83147d0c
	if (ctx.cr6.eq) goto loc_83147D0C;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x83147c94
	if (ctx.cr6.eq) goto loc_83147C94;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x83147e90
	if (ctx.cr6.eq) goto loc_83147E90;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bne cr6,0x83147e84
	if (!ctx.cr6.eq) goto loc_83147E84;
loc_83147C80:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83147C84:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
loc_83147C88:
	// beq cr6,0x83147e84
	if (ctx.cr6.eq) goto loc_83147E84;
loc_83147C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83147e88
	goto loc_83147E88;
loc_83147C94:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83147c8c
	if (ctx.cr6.eq) goto loc_83147C8C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83147c8c
	if (ctx.cr6.eq) goto loc_83147C8C;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// blt cr6,0x83147cd8
	if (ctx.cr6.lt) goto loc_83147CD8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83147cd8
	if (!ctx.cr6.lt) goto loc_83147CD8;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83147940
	ctx.lr = 0x83147CD4;
	sub_83147940(ctx, base);
	// b 0x83147cdc
	goto loc_83147CDC;
loc_83147CD8:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83147CDC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x83147c8c
	if (!ctx.cr6.eq) goto loc_83147C8C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83147b18
	ctx.lr = 0x83147D00;
	sub_83147B18(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// b 0x83147c88
	goto loc_83147C88;
loc_83147D0C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83147c8c
	if (ctx.cr6.eq) goto loc_83147C8C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83147c8c
	if (ctx.cr6.eq) goto loc_83147C8C;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83147d50
	if (ctx.cr6.lt) goto loc_83147D50;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83147d50
	if (!ctx.cr6.lt) goto loc_83147D50;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83147940
	ctx.lr = 0x83147D4C;
	sub_83147940(ctx, base);
	// b 0x83147d54
	goto loc_83147D54;
loc_83147D50:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83147D54:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83147c8c
	if (!ctx.cr6.eq) goto loc_83147C8C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83147b18
	ctx.lr = 0x83147D78;
	sub_83147B18(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// b 0x83147c88
	goto loc_83147C88;
loc_83147D84:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83147e84
	if (ctx.cr6.eq) goto loc_83147E84;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83147dc0
	if (ctx.cr6.lt) goto loc_83147DC0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83147dc0
	if (!ctx.cr6.lt) goto loc_83147DC0;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83147940
	ctx.lr = 0x83147DBC;
	sub_83147940(ctx, base);
	// b 0x83147dc4
	goto loc_83147DC4;
loc_83147DC0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83147DC4:
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83147e84
	if (ctx.cr0.eq) goto loc_83147E84;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83147b18
	ctx.lr = 0x83147DE4;
	sub_83147B18(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// b 0x83147c88
	goto loc_83147C88;
loc_83147DF0:
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// beq cr6,0x83147ec8
	if (ctx.cr6.eq) goto loc_83147EC8;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x83147e90
	if (ctx.cr6.eq) goto loc_83147E90;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x83147e18
	if (ctx.cr6.eq) goto loc_83147E18;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bne cr6,0x83147e84
	if (!ctx.cr6.eq) goto loc_83147E84;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x83147c84
	goto loc_83147C84;
loc_83147E18:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83147c8c
	if (ctx.cr6.eq) goto loc_83147C8C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83147e54
	if (ctx.cr6.lt) goto loc_83147E54;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83147e54
	if (!ctx.cr6.lt) goto loc_83147E54;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83147940
	ctx.lr = 0x83147E50;
	sub_83147940(ctx, base);
	// b 0x83147e58
	goto loc_83147E58;
loc_83147E54:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83147E58:
	// clrlwi. r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83147c8c
	if (ctx.cr0.eq) goto loc_83147C8C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83147b18
	ctx.lr = 0x83147E78;
	sub_83147B18(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83147c8c
	if (ctx.cr6.eq) goto loc_83147C8C;
loc_83147E84:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83147E88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
loc_83147E90:
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x83147ea4
	if (!ctx.cr6.eq) goto loc_83147EA4;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147c80
	if (ctx.cr0.eq) goto loc_83147C80;
loc_83147EA4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83147e84
	if (ctx.cr6.eq) goto loc_83147E84;
	// ble cr6,0x83147c8c
	if (!ctx.cr6.gt) goto loc_83147C8C;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// b 0x83147ef8
	goto loc_83147EF8;
loc_83147EC8:
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x83147f2c
	if (!ctx.cr6.eq) goto loc_83147F2C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83147f2c
	if (ctx.cr0.eq) goto loc_83147F2C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83147e84
	if (ctx.cr6.eq) goto loc_83147E84;
	// bge cr6,0x83147c8c
	if (!ctx.cr6.lt) goto loc_83147C8C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_83147EF8:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83147f1c
	if (ctx.cr6.eq) goto loc_83147F1C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83147f1c
	if (ctx.cr6.eq) goto loc_83147F1C;
	// cmplwi cr6,r11,8232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8232, ctx.xer);
	// beq cr6,0x83147f1c
	if (ctx.cr6.eq) goto loc_83147F1C;
	// cmplwi cr6,r11,8233
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8233, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83147f20
	if (!ctx.cr6.eq) goto loc_83147F20;
loc_83147F1C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83147F20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83147e84
	if (!ctx.cr0.eq) goto loc_83147E84;
	// b 0x83147c8c
	goto loc_83147C8C;
loc_83147F2C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83147e84
	if (ctx.cr6.eq) goto loc_83147E84;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83147f80
	if (!ctx.cr6.eq) goto loc_83147F80;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83147f74
	if (ctx.cr6.eq) goto loc_83147F74;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83147f74
	if (ctx.cr6.eq) goto loc_83147F74;
	// cmplwi cr6,r11,8232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8232, ctx.xer);
	// beq cr6,0x83147f74
	if (ctx.cr6.eq) goto loc_83147F74;
	// cmplwi cr6,r11,8233
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8233, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83147f78
	if (!ctx.cr6.eq) goto loc_83147F78;
loc_83147F74:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83147F78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83147e84
	if (!ctx.cr0.eq) goto loc_83147E84;
loc_83147F80:
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83147c8c
	if (!ctx.cr6.eq) goto loc_83147C8C;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x83147c8c
	if (!ctx.cr6.eq) goto loc_83147C8C;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// b 0x83147c88
	goto loc_83147C88;
}

__attribute__((alias("__imp__sub_83147FB0"))) PPC_WEAK_FUNC(sub_83147FB0);
PPC_FUNC_IMPL(__imp__sub_83147FB0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83147fe4
	if (!ctx.cr6.eq) goto loc_83147FE4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83147878
	ctx.lr = 0x83147FE0;
	sub_83147878(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_83147FE4:
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

__attribute__((alias("__imp__sub_83147FF8"))) PPC_WEAK_FUNC(sub_83147FF8);
PPC_FUNC_IMPL(__imp__sub_83147FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17800(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17800);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83148008;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// bl 0x83147fb0
	ctx.lr = 0x83148020;
	sub_83147FB0(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x831a0630
	ctx.lr = 0x83148028;
	sub_831A0630(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// bne 0x831480c0
	if (!ctx.cr0.eq) goto loc_831480C0;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831480c0
	if (!ctx.cr0.eq) goto loc_831480C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x8319e1f8
	ctx.lr = 0x83148054;
	sub_8319E1F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x831a0828
	ctx.lr = 0x8314806C;
	sub_831A0828(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r11,-21736(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -21736);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83148094
	if (!ctx.cr6.eq) goto loc_83148094;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
loc_83148094:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831480a8
	if (!ctx.cr6.eq) goto loc_831480A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831a1a90
	ctx.lr = 0x831480A8;
	sub_831A1A90(ctx, base);
loc_831480A8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831480c0
	if (ctx.cr0.eq) goto loc_831480C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x831a1bd8
	ctx.lr = 0x831480C0;
	sub_831A1BD8(ctx, base);
loc_831480C0:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83148230
	if (ctx.cr6.eq) goto loc_83148230;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83148230
	if (!ctx.cr6.eq) goto loc_83148230;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// beq cr6,0x831480f8
	if (ctx.cr6.eq) goto loc_831480F8;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x83148230
	if (!ctx.cr6.eq) goto loc_83148230;
loc_831480F8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148230
	if (!ctx.cr0.eq) goto loc_83148230;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x83148154
	if (!ctx.cr6.eq) goto loc_83148154;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bctrl 
	ctx.lr = 0x83148148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83148150;
	sub_830D58E8(ctx, base);
	// b 0x83148198
	goto loc_83148198;
loc_83148154:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blt cr6,0x831481a0
	if (ctx.cr6.lt) goto loc_831481A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314818C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831a23c8
	ctx.lr = 0x83148198;
	sub_831A23C8(ctx, base);
loc_83148198:
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// b 0x831481f0
	goto loc_831481F0;
loc_831481A0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831481B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831481CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r28,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r28.u16);
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831481EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_831481F0:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x831481FC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148224
	if (ctx.cr0.eq) goto loc_83148224;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8319f140
	ctx.lr = 0x83148220;
	sub_8319F140(ctx, base);
	// b 0x83148228
	goto loc_83148228;
loc_83148224:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83148228:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// b 0x83148358
	goto loc_83148358;
loc_83148230:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r4,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148358
	if (!ctx.cr0.eq) goto loc_83148358;
	// rlwinm. r11,r4,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148358
	if (!ctx.cr0.eq) goto loc_83148358;
	// rlwinm. r11,r4,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148358
	if (!ctx.cr0.eq) goto loc_83148358;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x831a0ce8
	ctx.lr = 0x8314825C;
	sub_831A0CE8(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314827C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8314828c
	if (!ctx.cr6.eq) goto loc_8314828C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x831482b0
	goto loc_831482B0;
loc_8314828C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831482A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830d58e8
	ctx.lr = 0x831482AC;
	sub_830D58E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_831482B0:
	// stw r4,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83148310
	if (ctx.cr6.eq) goto loc_83148310;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831482ec
	if (ctx.cr0.eq) goto loc_831482EC;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x831482d8
	goto loc_831482D8;
loc_831482D4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831482D8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831482d4
	if (!ctx.cr0.eq) goto loc_831482D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x831482f0
	goto loc_831482F0;
loc_831482EC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831482F0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x83148310
	if (!ctx.cr6.lt) goto loc_83148310;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314830C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
loc_83148310:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83148358
	if (ctx.cr6.eq) goto loc_83148358;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x83148328;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148350
	if (ctx.cr0.eq) goto loc_83148350;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8319f140
	ctx.lr = 0x8314834C;
	sub_8319F140(ctx, base);
	// b 0x83148354
	goto loc_83148354;
loc_83148350:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83148354:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_83148358:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83148000"))) PPC_WEAK_FUNC(sub_83148000);
PPC_FUNC_IMPL(__imp__sub_83148000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x83148008;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// bl 0x83147fb0
	ctx.lr = 0x83148020;
	sub_83147FB0(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x831a0630
	ctx.lr = 0x83148028;
	sub_831A0630(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// bne 0x831480c0
	if (!ctx.cr0.eq) goto loc_831480C0;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831480c0
	if (!ctx.cr0.eq) goto loc_831480C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x8319e1f8
	ctx.lr = 0x83148054;
	sub_8319E1F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x831a0828
	ctx.lr = 0x8314806C;
	sub_831A0828(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r11,-21736(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -21736);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83148094
	if (!ctx.cr6.eq) goto loc_83148094;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
loc_83148094:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831480a8
	if (!ctx.cr6.eq) goto loc_831480A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831a1a90
	ctx.lr = 0x831480A8;
	sub_831A1A90(ctx, base);
loc_831480A8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831480c0
	if (ctx.cr0.eq) goto loc_831480C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x831a1bd8
	ctx.lr = 0x831480C0;
	sub_831A1BD8(ctx, base);
loc_831480C0:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83148230
	if (ctx.cr6.eq) goto loc_83148230;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83148230
	if (!ctx.cr6.eq) goto loc_83148230;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// beq cr6,0x831480f8
	if (ctx.cr6.eq) goto loc_831480F8;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x83148230
	if (!ctx.cr6.eq) goto loc_83148230;
loc_831480F8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148230
	if (!ctx.cr0.eq) goto loc_83148230;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x83148154
	if (!ctx.cr6.eq) goto loc_83148154;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bctrl 
	ctx.lr = 0x83148148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830d58e8
	ctx.lr = 0x83148150;
	sub_830D58E8(ctx, base);
	// b 0x83148198
	goto loc_83148198;
loc_83148154:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blt cr6,0x831481a0
	if (ctx.cr6.lt) goto loc_831481A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314818C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831a23c8
	ctx.lr = 0x83148198;
	sub_831A23C8(ctx, base);
loc_83148198:
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// b 0x831481f0
	goto loc_831481F0;
loc_831481A0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831481B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831481CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r28,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r28.u16);
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831481EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_831481F0:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x831481FC;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148224
	if (ctx.cr0.eq) goto loc_83148224;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8319f140
	ctx.lr = 0x83148220;
	sub_8319F140(ctx, base);
	// b 0x83148228
	goto loc_83148228;
loc_83148224:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83148228:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// b 0x83148358
	goto loc_83148358;
loc_83148230:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r4,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148358
	if (!ctx.cr0.eq) goto loc_83148358;
	// rlwinm. r11,r4,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148358
	if (!ctx.cr0.eq) goto loc_83148358;
	// rlwinm. r11,r4,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148358
	if (!ctx.cr0.eq) goto loc_83148358;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x831a0ce8
	ctx.lr = 0x8314825C;
	sub_831A0CE8(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314827C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8314828c
	if (!ctx.cr6.eq) goto loc_8314828C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x831482b0
	goto loc_831482B0;
loc_8314828C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831482A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830d58e8
	ctx.lr = 0x831482AC;
	sub_830D58E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_831482B0:
	// stw r4,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83148310
	if (ctx.cr6.eq) goto loc_83148310;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831482ec
	if (ctx.cr0.eq) goto loc_831482EC;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x831482d8
	goto loc_831482D8;
loc_831482D4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_831482D8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x831482d4
	if (!ctx.cr0.eq) goto loc_831482D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x831482f0
	goto loc_831482F0;
loc_831482EC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831482F0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x83148310
	if (!ctx.cr6.lt) goto loc_83148310;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314830C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
loc_83148310:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83148358
	if (ctx.cr6.eq) goto loc_83148358;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x83148328;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148350
	if (ctx.cr0.eq) goto loc_83148350;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8319f140
	ctx.lr = 0x8314834C;
	sub_8319F140(ctx, base);
	// b 0x83148354
	goto loc_83148354;
loc_83148350:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83148354:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_83148358:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83148360"))) PPC_WEAK_FUNC(sub_83148360);
PPC_FUNC_IMPL(__imp__sub_83148360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83148380;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148390"))) PPC_WEAK_FUNC(sub_83148390);
PPC_FUNC_IMPL(__imp__sub_83148390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831483B0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831483C0"))) PPC_WEAK_FUNC(sub_831483C0);
PPC_FUNC_IMPL(__imp__sub_831483C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,17920(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17920);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x831483D0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x831483F4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148410
	if (ctx.cr0.eq) goto loc_83148410;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x8319dc48
	ctx.lr = 0x83148408;
	sub_8319DC48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83148414
	goto loc_83148414;
loc_83148410:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83148414:
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83147798
	ctx.lr = 0x83148424;
	sub_83147798(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830d58e8
	ctx.lr = 0x83148434;
	sub_830D58E8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148474
	if (ctx.cr0.eq) goto loc_83148474;
	// li r3,52
	ctx.r3.s64 = 52;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x83148450;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148468
	if (ctx.cr0.eq) goto loc_83148468;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831a59d8
	ctx.lr = 0x83148464;
	sub_831A59D8(ctx, base);
	// b 0x8314846c
	goto loc_8314846C;
loc_83148468:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314846C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831484a0
	goto loc_831484A0;
loc_83148474:
	// li r3,52
	ctx.r3.s64 = 52;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x83148480;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148498
	if (ctx.cr0.eq) goto loc_83148498;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831a25f8
	ctx.lr = 0x83148494;
	sub_831A25F8(ctx, base);
	// b 0x8314849c
	goto loc_8314849C;
loc_83148498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314849C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_831484A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831484b0
	if (ctx.cr6.eq) goto loc_831484B0;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_831484B0:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x831a57c8
	ctx.lr = 0x831484C4;
	sub_831A57C8(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x83148000
	ctx.lr = 0x831484E0;
	sub_83148000(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x831484EC;
	sub_8312C778(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831483C8"))) PPC_WEAK_FUNC(sub_831483C8);
PPC_FUNC_IMPL(__imp__sub_831483C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a8
	ctx.lr = 0x831483D0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x831483F4;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148410
	if (ctx.cr0.eq) goto loc_83148410;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x8319dc48
	ctx.lr = 0x83148408;
	sub_8319DC48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83148414
	goto loc_83148414;
loc_83148410:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83148414:
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83147798
	ctx.lr = 0x83148424;
	sub_83147798(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830d58e8
	ctx.lr = 0x83148434;
	sub_830D58E8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148474
	if (ctx.cr0.eq) goto loc_83148474;
	// li r3,52
	ctx.r3.s64 = 52;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x83148450;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148468
	if (ctx.cr0.eq) goto loc_83148468;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831a59d8
	ctx.lr = 0x83148464;
	sub_831A59D8(ctx, base);
	// b 0x8314846c
	goto loc_8314846C;
loc_83148468:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314846C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831484a0
	goto loc_831484A0;
loc_83148474:
	// li r3,52
	ctx.r3.s64 = 52;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x83148480;
	sub_830DD390(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148498
	if (ctx.cr0.eq) goto loc_83148498;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831a25f8
	ctx.lr = 0x83148494;
	sub_831A25F8(ctx, base);
	// b 0x8314849c
	goto loc_8314849C;
loc_83148498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314849C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_831484A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831484b0
	if (ctx.cr6.eq) goto loc_831484B0;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_831484B0:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x831a57c8
	ctx.lr = 0x831484C4;
	sub_831A57C8(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x83148000
	ctx.lr = 0x831484E0;
	sub_83148000(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312c778
	ctx.lr = 0x831484EC;
	sub_8312C778(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x833a01f8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831484F4"))) PPC_WEAK_FUNC(sub_831484F4);
PPC_FUNC_IMPL(__imp__sub_831484F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83148514;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148524"))) PPC_WEAK_FUNC(sub_83148524);
PPC_FUNC_IMPL(__imp__sub_83148524) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83148544;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148554"))) PPC_WEAK_FUNC(sub_83148554);
PPC_FUNC_IMPL(__imp__sub_83148554) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x830dd3e0
	ctx.lr = 0x83148574;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148584"))) PPC_WEAK_FUNC(sub_83148584);
PPC_FUNC_IMPL(__imp__sub_83148584) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830f4658
	ctx.lr = 0x8314859C;
	sub_830F4658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831485AC"))) PPC_WEAK_FUNC(sub_831485AC);
PPC_FUNC_IMPL(__imp__sub_831485AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831485B0"))) PPC_WEAK_FUNC(sub_831485B0);
PPC_FUNC_IMPL(__imp__sub_831485B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x831485B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// rlwinm r25,r11,31,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq cr6,0x8314867c
	if (ctx.cr6.eq) goto loc_8314867C;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_831485E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x831486ec
	if (ctx.cr6.gt) goto loc_831486EC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x831486ec
	if (ctx.cr6.lt) goto loc_831486EC;
	// lha r11,8(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 8));
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x83148674
	if (ctx.cr6.gt) goto loc_83148674;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,17216
	ctx.r12.s64 = ctx.r12.s64 + 17216;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// nop 
	// addi r12,r12,-31180
	ctx.r12.s64 = ctx.r12.s64 + -31180;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x83147060
	ctx.lr = 0x83148664;
	sub_83147060(ctx, base);
loc_83148664:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831486ec
	if (ctx.cr0.eq) goto loc_831486EC;
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_83148670:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_83148674:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831485e8
	if (!ctx.cr6.eq) goto loc_831485E8;
loc_8314867C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x831486f0
	goto loc_831486F0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83147128
	ctx.lr = 0x83148698;
	sub_83147128(ctx, base);
	// b 0x83148664
	goto loc_83148664;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83147250
	ctx.lr = 0x831486B8;
	sub_83147250(ctx, base);
	// b 0x83148664
	goto loc_83148664;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831486D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83147c30
	ctx.lr = 0x831486E4;
	sub_83147C30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83148670
	if (!ctx.cr0.eq) goto loc_83148670;
loc_831486EC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831486F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314870C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x83147318
	ctx.lr = 0x83148728;
	sub_83147318(ctx, base);
	// b 0x83148664
	goto loc_83148664;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x83147448
	ctx.lr = 0x8314875C;
	sub_83147448(ctx, base);
	// b 0x83148664
	goto loc_83148664;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x831487a4
	if (ctx.cr0.lt) goto loc_831487A4;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x831487a0
	if (ctx.cr6.lt) goto loc_831487A0;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x831487a0
	if (!ctx.cr6.eq) goto loc_831487A0;
	// stwx r24,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r24.u32);
	// b 0x83148670
	goto loc_83148670;
loc_831487A0:
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
loc_831487A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831487B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x831485b0
	ctx.lr = 0x831487D0;
	sub_831485B0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x831487e4
	if (ctx.cr6.lt) goto loc_831487E4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u32);
loc_831487E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x831486f0
	if (!ctx.cr6.lt) goto loc_831486F0;
	// b 0x83148670
	goto loc_83148670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x831485b0
	ctx.lr = 0x8314881C;
	sub_831485B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831486f0
	if (!ctx.cr0.lt) goto loc_831486F0;
	// b 0x83148670
	goto loc_83148670;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148840;
	sub_831485B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831486f0
	if (!ctx.cr0.lt) goto loc_831486F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x83148a10
	goto loc_83148A10;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83148670
	if (ctx.cr6.eq) goto loc_83148670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83148670
	if (ctx.cr0.eq) goto loc_83148670;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83147518
	ctx.lr = 0x83148894;
	sub_83147518(ctx, base);
	// b 0x831486f0
	goto loc_831486F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831488AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
loc_831488B0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x831488C4;
	sub_831485B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831486ec
	if (ctx.cr0.lt) goto loc_831486EC;
	// b 0x83148670
	goto loc_83148670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831488E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
loc_831488E8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x831488FC;
	sub_831485B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831486ec
	if (!ctx.cr0.lt) goto loc_831486EC;
	// b 0x83148670
	goto loc_83148670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314891C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// b 0x831488b0
	goto loc_831488B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// b 0x831488e8
	goto loc_831488E8;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x83148978
	if (!ctx.cr6.eq) goto loc_83148978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8314895C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148974;
	sub_831485B0(ctx, base);
	// b 0x83148990
	goto loc_83148990;
loc_83148978:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83146350
	ctx.lr = 0x83148990;
	sub_83146350(ctx, base);
loc_83148990:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x831486f0
	if (ctx.cr6.lt) goto loc_831486F0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// b 0x83148670
	goto loc_83148670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831489B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x831486ec
	if (!ctx.cr6.lt) goto loc_831486EC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83148a40
	ctx.lr = 0x831489DC;
	sub_83148A40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x831489f4
	if (ctx.cr0.eq) goto loc_831489F4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x83148a14
	goto loc_83148A14;
loc_831489F4:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148670
	if (ctx.cr0.eq) goto loc_83148670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_83148A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83148A14:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83148674
	goto loc_83148674;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83147610
	ctx.lr = 0x83148A3C;
	sub_83147610(ctx, base);
	// b 0x831486f0
	goto loc_831486F0;
}

__attribute__((alias("__imp__sub_83148A40"))) PPC_WEAK_FUNC(sub_83148A40);
PPC_FUNC_IMPL(__imp__sub_83148A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x83148A48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x83148ab0
	if (!ctx.cr0.gt) goto loc_83148AB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x83146448
	ctx.lr = 0x83148A88;
	sub_83146448(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83148aa8
	if (ctx.cr0.lt) goto loc_83148AA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x831464e8
	ctx.lr = 0x83148A9C;
	sub_831464E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge 0x83148af0
	if (!ctx.cr0.lt) goto loc_83148AF0;
loc_83148AA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83148af0
	goto loc_83148AF0;
loc_83148AB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148ADC;
	sub_831485B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// adde r11,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_83148AF0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83148AFC"))) PPC_WEAK_FUNC(sub_83148AFC);
PPC_FUNC_IMPL(__imp__sub_83148AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148B00"))) PPC_WEAK_FUNC(sub_83148B00);
PPC_FUNC_IMPL(__imp__sub_83148B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,18092(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18092);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x83148B18;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stb r29,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r29.u8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// bl 0x8319f3e8
	ctx.lr = 0x83148B74;
	sub_8319F3E8(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// addi r11,r11,31360
	ctx.r11.s64 = ctx.r11.s64 + 31360;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831483c8
	ctx.lr = 0x83148B9C;
	sub_831483C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83148B08"))) PPC_WEAK_FUNC(sub_83148B08);
PPC_FUNC_IMPL(__imp__sub_83148B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x833a01a0
	ctx.lr = 0x83148B18;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stb r29,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r29.u8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// bl 0x8319f3e8
	ctx.lr = 0x83148B74;
	sub_8319F3E8(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// addi r11,r11,31360
	ctx.r11.s64 = ctx.r11.s64 + 31360;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831483c8
	ctx.lr = 0x83148B9C;
	sub_831483C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x833a01f0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83148BAC"))) PPC_WEAK_FUNC(sub_83148BAC);
PPC_FUNC_IMPL(__imp__sub_83148BAC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,18092(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18092);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// bl 0x833a7198
	ctx.lr = 0x83148BDC;
	sub_833A7198(ctx, base);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8319f228
	ctx.lr = 0x83148BF8;
	sub_8319F228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148BB4"))) PPC_WEAK_FUNC(sub_83148BB4);
PPC_FUNC_IMPL(__imp__sub_83148BB4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// bl 0x833a7198
	ctx.lr = 0x83148BDC;
	sub_833A7198(ctx, base);
}

__attribute__((alias("__imp__sub_83148BDC"))) PPC_WEAK_FUNC(sub_83148BDC);
PPC_FUNC_IMPL(__imp__sub_83148BDC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8319f228
	ctx.lr = 0x83148BF8;
	sub_8319F228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148C08"))) PPC_WEAK_FUNC(sub_83148C08);
PPC_FUNC_IMPL(__imp__sub_83148C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831b37e8
	ctx.lr = 0x83148C20;
	sub_831B37E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148C30"))) PPC_WEAK_FUNC(sub_83148C30);
PPC_FUNC_IMPL(__imp__sub_83148C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,18192(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18192);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83148C40;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r24,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r24.u8);
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// stw r24,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r24.u32);
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// stw r24,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r24.u32);
	// stw r24,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r24.u32);
	// stw r24,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r24.u32);
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83148cbc
	if (ctx.cr6.eq) goto loc_83148CBC;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83148cbc
	if (ctx.cr0.eq) goto loc_83148CBC;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x83148ca8
	goto loc_83148CA8;
loc_83148CA4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83148CA8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83148ca4
	if (!ctx.cr0.eq) goto loc_83148CA4;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// b 0x83148cc0
	goto loc_83148CC0;
loc_83148CBC:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_83148CC0:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83146d00
	ctx.lr = 0x83148CDC;
	sub_83146D00(ctx, base);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83148cf8
	if (ctx.cr6.eq) goto loc_83148CF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831a21b0
	ctx.lr = 0x83148CF4;
	sub_831A21B0(ctx, base);
	// b 0x83148d3c
	goto loc_83148D3C;
loc_83148CF8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83148d3c
	if (ctx.cr0.eq) goto loc_83148D3C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x83148D10;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148d28
	if (ctx.cr0.eq) goto loc_83148D28;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831a2120
	ctx.lr = 0x83148D24;
	sub_831A2120(ctx, base);
	// b 0x83148d2c
	goto loc_83148D2C;
loc_83148D28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_83148D2C:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831a21b0
	ctx.lr = 0x83148D38;
	sub_831A21B0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_83148D3C:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83148d68
	if (ctx.cr0.eq) goto loc_83148D68;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83148d68
	if (ctx.cr6.eq) goto loc_83148D68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83148D68:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// beq 0x83148dec
	if (ctx.cr0.eq) goto loc_83148DEC;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148D94;
	sub_831485B0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83148de4
	if (!ctx.cr6.eq) goto loc_83148DE4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83148dcc
	if (ctx.cr6.eq) goto loc_83148DCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83146588
	ctx.lr = 0x83148DBC;
	sub_83146588(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83146628
	ctx.lr = 0x83148DCC;
	sub_83146628(ctx, base);
loc_83148DCC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83148DD0:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83146c88
	ctx.lr = 0x83148DD8;
	sub_83146C88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
loc_83148DE4:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x83148dd0
	goto loc_83148DD0;
loc_83148DEC:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83148e48
	if (ctx.cr0.eq) goto loc_83148E48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8319edd0
	ctx.lr = 0x83148E0C;
	sub_8319EDD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83148e40
	if (ctx.cr0.lt) goto loc_83148E40;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83148e3c
	if (ctx.cr6.eq) goto loc_83148E3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83146588
	ctx.lr = 0x83148E2C;
	sub_83146588(ctx, base);
	// add r5,r26,r30
	ctx.r5.u64 = ctx.r26.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83146628
	ctx.lr = 0x83148E3C;
	sub_83146628(ctx, base);
loc_83148E3C:
	// b 0x83148dcc
	goto loc_83148DCC;
loc_83148E40:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x83148dd0
	goto loc_83148DD0;
loc_83148E48:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83148e74
	if (ctx.cr6.eq) goto loc_83148E74;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8319edd0
	ctx.lr = 0x83148E68;
	sub_8319EDD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83148e74
	if (!ctx.cr0.lt) goto loc_83148E74;
	// b 0x83148e40
	goto loc_83148E40;
loc_83148E74:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83148f80
	if (ctx.cr6.eq) goto loc_83148F80;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x83148f80
	if (!ctx.cr6.eq) goto loc_83148F80;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83148f80
	if (!ctx.cr0.eq) goto loc_83148F80;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148eec
	if (ctx.cr0.eq) goto loc_83148EEC;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148EE4;
	sub_831485B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x83149060
	goto loc_83149060;
loc_83148EEC:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x83149094
	if (ctx.cr6.gt) goto loc_83149094;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_83148F04:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83148f2c
	if (ctx.cr6.eq) goto loc_83148F2C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83148f2c
	if (ctx.cr6.eq) goto loc_83148F2C;
	// cmplwi cr6,r11,8232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8232, ctx.xer);
	// beq cr6,0x83148f2c
	if (ctx.cr6.eq) goto loc_83148F2C;
	// cmplwi cr6,r11,8233
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8233, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x83148f30
	if (!ctx.cr6.eq) goto loc_83148F30;
loc_83148F2C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83148F30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148f40
	if (ctx.cr0.eq) goto loc_83148F40;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83148f6c
	goto loc_83148F6C;
loc_83148F40:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148f68
	if (ctx.cr0.eq) goto loc_83148F68;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148F60;
	sub_831485B0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x83149068
	if (!ctx.cr0.lt) goto loc_83149068;
loc_83148F68:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_83148F6C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x83148f04
	if (!ctx.cr6.gt) goto loc_83148F04;
	// b 0x83149060
	goto loc_83149060;
loc_83148F80:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83149020
	if (ctx.cr6.eq) goto loc_83149020;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148fa8
	if (ctx.cr0.eq) goto loc_83148FA8;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x831a1bd8
	ctx.lr = 0x83148FA4;
	sub_831A1BD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83148FA8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x83149094
	if (ctx.cr6.gt) goto loc_83149094;
loc_83148FB8:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83146e00
	ctx.lr = 0x83148FCC;
	sub_83146E00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314905c
	if (ctx.cr0.eq) goto loc_8314905C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x831a1fb8
	ctx.lr = 0x83148FE0;
	sub_831A1FB8(ctx, base);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314900c
	if (ctx.cr0.eq) goto loc_8314900C;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x83149004;
	sub_831485B0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x83149068
	if (!ctx.cr0.lt) goto loc_83149068;
loc_8314900C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x83148fb8
	if (!ctx.cr6.gt) goto loc_83148FB8;
	// b 0x83149060
	goto loc_83149060;
loc_83149020:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x83149094
	if (ctx.cr6.gt) goto loc_83149094;
loc_8314902C:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x83149044;
	sub_831485B0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x83149068
	if (!ctx.cr0.lt) goto loc_83149068;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8314902c
	if (!ctx.cr6.gt) goto loc_8314902C;
	// b 0x83149060
	goto loc_83149060;
loc_8314905C:
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_83149060:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x83149094
	if (ctx.cr6.lt) goto loc_83149094;
loc_83149068:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83149090
	if (ctx.cr6.eq) goto loc_83149090;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83146588
	ctx.lr = 0x83149080;
	sub_83146588(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83146628
	ctx.lr = 0x83149090;
	sub_83146628(ctx, base);
loc_83149090:
	// b 0x83148dcc
	goto loc_83148DCC;
loc_83149094:
	// b 0x83148e40
	goto loc_83148E40;
}

__attribute__((alias("__imp__sub_83148C38"))) PPC_WEAK_FUNC(sub_83148C38);
PPC_FUNC_IMPL(__imp__sub_83148C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0198
	ctx.lr = 0x83148C40;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r24,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r24.u8);
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// stw r24,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r24.u32);
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// stw r24,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r24.u32);
	// stw r24,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r24.u32);
	// stw r24,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r24.u32);
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83148cbc
	if (ctx.cr6.eq) goto loc_83148CBC;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83148cbc
	if (ctx.cr0.eq) goto loc_83148CBC;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x83148ca8
	goto loc_83148CA8;
loc_83148CA4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83148CA8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83148ca4
	if (!ctx.cr0.eq) goto loc_83148CA4;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// b 0x83148cc0
	goto loc_83148CC0;
loc_83148CBC:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_83148CC0:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83146d00
	ctx.lr = 0x83148CDC;
	sub_83146D00(ctx, base);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83148cf8
	if (ctx.cr6.eq) goto loc_83148CF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831a21b0
	ctx.lr = 0x83148CF4;
	sub_831A21B0(ctx, base);
	// b 0x83148d3c
	goto loc_83148D3C;
loc_83148CF8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83148d3c
	if (ctx.cr0.eq) goto loc_83148D3C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x830dd390
	ctx.lr = 0x83148D10;
	sub_830DD390(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83148d28
	if (ctx.cr0.eq) goto loc_83148D28;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831a2120
	ctx.lr = 0x83148D24;
	sub_831A2120(ctx, base);
	// b 0x83148d2c
	goto loc_83148D2C;
loc_83148D28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_83148D2C:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831a21b0
	ctx.lr = 0x83148D38;
	sub_831A21B0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_83148D3C:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83148d68
	if (ctx.cr0.eq) goto loc_83148D68;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83148d68
	if (ctx.cr6.eq) goto loc_83148D68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83148D68:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// beq 0x83148dec
	if (ctx.cr0.eq) goto loc_83148DEC;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148D94;
	sub_831485B0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83148de4
	if (!ctx.cr6.eq) goto loc_83148DE4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83148dcc
	if (ctx.cr6.eq) goto loc_83148DCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83146588
	ctx.lr = 0x83148DBC;
	sub_83146588(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83146628
	ctx.lr = 0x83148DCC;
	sub_83146628(ctx, base);
loc_83148DCC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83148DD0:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83146c88
	ctx.lr = 0x83148DD8;
	sub_83146C88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x833a01e8
	__restgprlr_24(ctx, base);
	return;
loc_83148DE4:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x83148dd0
	goto loc_83148DD0;
loc_83148DEC:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83148e48
	if (ctx.cr0.eq) goto loc_83148E48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8319edd0
	ctx.lr = 0x83148E0C;
	sub_8319EDD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83148e40
	if (ctx.cr0.lt) goto loc_83148E40;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83148e3c
	if (ctx.cr6.eq) goto loc_83148E3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83146588
	ctx.lr = 0x83148E2C;
	sub_83146588(ctx, base);
	// add r5,r26,r30
	ctx.r5.u64 = ctx.r26.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83146628
	ctx.lr = 0x83148E3C;
	sub_83146628(ctx, base);
loc_83148E3C:
	// b 0x83148dcc
	goto loc_83148DCC;
loc_83148E40:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x83148dd0
	goto loc_83148DD0;
loc_83148E48:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83148e74
	if (ctx.cr6.eq) goto loc_83148E74;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8319edd0
	ctx.lr = 0x83148E68;
	sub_8319EDD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83148e74
	if (!ctx.cr0.lt) goto loc_83148E74;
	// b 0x83148e40
	goto loc_83148E40;
loc_83148E74:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83148f80
	if (ctx.cr6.eq) goto loc_83148F80;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x83148f80
	if (!ctx.cr6.eq) goto loc_83148F80;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83148EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83148f80
	if (!ctx.cr0.eq) goto loc_83148F80;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148eec
	if (ctx.cr0.eq) goto loc_83148EEC;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148EE4;
	sub_831485B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x83149060
	goto loc_83149060;
loc_83148EEC:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x83149094
	if (ctx.cr6.gt) goto loc_83149094;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_83148F04:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x83148f2c
	if (ctx.cr6.eq) goto loc_83148F2C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x83148f2c
	if (ctx.cr6.eq) goto loc_83148F2C;
	// cmplwi cr6,r11,8232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8232, ctx.xer);
	// beq cr6,0x83148f2c
	if (ctx.cr6.eq) goto loc_83148F2C;
	// cmplwi cr6,r11,8233
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8233, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x83148f30
	if (!ctx.cr6.eq) goto loc_83148F30;
loc_83148F2C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83148F30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148f40
	if (ctx.cr0.eq) goto loc_83148F40;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83148f6c
	goto loc_83148F6C;
loc_83148F40:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148f68
	if (ctx.cr0.eq) goto loc_83148F68;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x83148F60;
	sub_831485B0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x83149068
	if (!ctx.cr0.lt) goto loc_83149068;
loc_83148F68:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_83148F6C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x83148f04
	if (!ctx.cr6.gt) goto loc_83148F04;
	// b 0x83149060
	goto loc_83149060;
loc_83148F80:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83149020
	if (ctx.cr6.eq) goto loc_83149020;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83148fa8
	if (ctx.cr0.eq) goto loc_83148FA8;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x831a1bd8
	ctx.lr = 0x83148FA4;
	sub_831A1BD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83148FA8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x83149094
	if (ctx.cr6.gt) goto loc_83149094;
loc_83148FB8:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83146e00
	ctx.lr = 0x83148FCC;
	sub_83146E00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314905c
	if (ctx.cr0.eq) goto loc_8314905C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x831a1fb8
	ctx.lr = 0x83148FE0;
	sub_831A1FB8(ctx, base);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8314900c
	if (ctx.cr0.eq) goto loc_8314900C;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x83149004;
	sub_831485B0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x83149068
	if (!ctx.cr0.lt) goto loc_83149068;
loc_8314900C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x83148fb8
	if (!ctx.cr6.gt) goto loc_83148FB8;
	// b 0x83149060
	goto loc_83149060;
loc_83149020:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x83149094
	if (ctx.cr6.gt) goto loc_83149094;
loc_8314902C:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485b0
	ctx.lr = 0x83149044;
	sub_831485B0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x83149068
	if (!ctx.cr0.lt) goto loc_83149068;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8314902c
	if (!ctx.cr6.gt) goto loc_8314902C;
	// b 0x83149060
	goto loc_83149060;
loc_8314905C:
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_83149060:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x83149094
	if (ctx.cr6.lt) goto loc_83149094;
loc_83149068:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83149090
	if (ctx.cr6.eq) goto loc_83149090;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83146588
	ctx.lr = 0x83149080;
	sub_83146588(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83146628
	ctx.lr = 0x83149090;
	sub_83146628(ctx, base);
loc_83149090:
	// b 0x83148dcc
	goto loc_83148DCC;
loc_83149094:
	// b 0x83148e40
	goto loc_83148E40;
}

__attribute__((alias("__imp__sub_83149098"))) PPC_WEAK_FUNC(sub_83149098);
PPC_FUNC_IMPL(__imp__sub_83149098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83146c88
	ctx.lr = 0x831490B0;
	sub_83146C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831490C0"))) PPC_WEAK_FUNC(sub_831490C0);
PPC_FUNC_IMPL(__imp__sub_831490C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x830dd3e0
	ctx.lr = 0x831490E0;
	sub_830DD3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831490F0"))) PPC_WEAK_FUNC(sub_831490F0);
PPC_FUNC_IMPL(__imp__sub_831490F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8314912c
	if (ctx.cr6.eq) goto loc_8314912C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8314912c
	if (ctx.cr0.eq) goto loc_8314912C;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// b 0x83149118
	goto loc_83149118;
loc_83149114:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_83149118:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83149114
	if (!ctx.cr0.eq) goto loc_83149114;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// b 0x83149130
	goto loc_83149130;
loc_8314912C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_83149130:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83148c38
	sub_83148C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314913C"))) PPC_WEAK_FUNC(sub_8314913C);
PPC_FUNC_IMPL(__imp__sub_8314913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149140"))) PPC_WEAK_FUNC(sub_83149140);
PPC_FUNC_IMPL(__imp__sub_83149140) {
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
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r31,-4440(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4440);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83149174
	if (ctx.cr6.eq) goto loc_83149174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fcf30
	ctx.lr = 0x8314916C;
	sub_830FCF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd3e0
	ctx.lr = 0x83149174;
	sub_830DD3E0(ctx, base);
loc_83149174:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4440(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4440, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83149194"))) PPC_WEAK_FUNC(sub_83149194);
PPC_FUNC_IMPL(__imp__sub_83149194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149198"))) PPC_WEAK_FUNC(sub_83149198);
PPC_FUNC_IMPL(__imp__sub_83149198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,17952(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17952);
	// lwz r16,18392(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18392);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83149230
	if (!ctx.cr6.eq) goto loc_83149230;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x831491D8;
	sub_830FCF80(ctx, base);
	// lwz r11,-4440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83149224
	if (!ctx.cr6.eq) goto loc_83149224;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x831491EC;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83149208
	if (ctx.cr0.eq) goto loc_83149208;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x83149204;
	sub_830FCEF0(ctx, base);
	// b 0x8314920c
	goto loc_8314920C;
loc_83149208:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314920C:
	// stw r3,-4440(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4440, ctx.r3.u32);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,-28352
	ctx.r4.s64 = ctx.r11.s64 + -28352;
	// addi r3,r10,-4432
	ctx.r3.s64 = ctx.r10.s64 + -4432;
	// bl 0x830ff598
	ctx.lr = 0x83149224;
	sub_830FF598(ctx, base);
loc_83149224:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x8314922C;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4440);
loc_83149230:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_831491A0"))) PPC_WEAK_FUNC(sub_831491A0);
PPC_FUNC_IMPL(__imp__sub_831491A0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31827
	ctx.r30.s64 = -2085814272;
	// lwz r3,-4440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83149230
	if (!ctx.cr6.eq) goto loc_83149230;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,-5080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5080);
	// bl 0x830fcf80
	ctx.lr = 0x831491D8;
	sub_830FCF80(ctx, base);
	// lwz r11,-4440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83149224
	if (!ctx.cr6.eq) goto loc_83149224;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830dd340
	ctx.lr = 0x831491EC;
	sub_830DD340(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83149208
	if (ctx.cr0.eq) goto loc_83149208;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r4,-5084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5084);
	// bl 0x830fcef0
	ctx.lr = 0x83149204;
	sub_830FCEF0(ctx, base);
	// b 0x8314920c
	goto loc_8314920C;
loc_83149208:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314920C:
	// stw r3,-4440(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4440, ctx.r3.u32);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// addi r4,r11,-28352
	ctx.r4.s64 = ctx.r11.s64 + -28352;
	// addi r3,r10,-4432
	ctx.r3.s64 = ctx.r10.s64 + -4432;
	// bl 0x830ff598
	ctx.lr = 0x83149224;
	sub_830FF598(ctx, base);
loc_83149224:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fcfb8
	ctx.lr = 0x8314922C;
	sub_830FCFB8(ctx, base);
	// lwz r3,-4440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4440);
loc_83149230:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

