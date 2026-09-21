#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83408394"))) PPC_WEAK_FUNC(sub_83408394);
PPC_FUNC_IMPL(__imp__sub_83408394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83408398"))) PPC_WEAK_FUNC(sub_83408398);
PPC_FUNC_IMPL(__imp__sub_83408398) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5792(r1)
	ea = -5792 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12384
	ctx.r4.s64 = ctx.r11.s64 + -12384;
	// bl 0x824886a0
	ctx.lr = 0x834083C8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// lwz r4,-29488(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29488);
	// bl 0x82e8fc28
	ctx.lr = 0x834083DC;
	sub_82E8FC28(ctx, base);
	// lis r9,-31844
	ctx.r9.s64 = -2086928384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,29912
	ctx.r31.s64 = ctx.r9.s64 + 29912;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,29912(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29912, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408400;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4344
	ctx.r3.s64 = ctx.r1.s64 + 4344;
	// bl 0x8259b670
	ctx.lr = 0x83408408;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12256
	ctx.r4.s64 = ctx.r11.s64 + -12256;
	// bl 0x824886a0
	ctx.lr = 0x8340841C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,-29476(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29476);
	// bl 0x82e8fc28
	ctx.lr = 0x83408430;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408450;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259b670
	ctx.lr = 0x83408458;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12128
	ctx.r4.s64 = ctx.r11.s64 + -12128;
	// bl 0x824886a0
	ctx.lr = 0x8340846C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// lwz r4,-29456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29456);
	// bl 0x82e8fc28
	ctx.lr = 0x83408480;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834084A0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3000
	ctx.r3.s64 = ctx.r1.s64 + 3000;
	// bl 0x8259b670
	ctx.lr = 0x834084A8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11976
	ctx.r4.s64 = ctx.r11.s64 + -11976;
	// bl 0x824886a0
	ctx.lr = 0x834084BC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,-29452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29452);
	// bl 0x82e8fc28
	ctx.lr = 0x834084D0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834084F0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8259b670
	ctx.lr = 0x834084F8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11824
	ctx.r4.s64 = ctx.r11.s64 + -11824;
	// bl 0x824886a0
	ctx.lr = 0x8340850C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5392
	ctx.r3.s64 = ctx.r1.s64 + 5392;
	// lwz r4,-29468(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29468);
	// bl 0x82e8fc28
	ctx.lr = 0x83408520;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408540;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5400
	ctx.r3.s64 = ctx.r1.s64 + 5400;
	// bl 0x8259b670
	ctx.lr = 0x83408548;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11696
	ctx.r4.s64 = ctx.r11.s64 + -11696;
	// bl 0x824886a0
	ctx.lr = 0x8340855C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,-29464(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29464);
	// bl 0x82e8fc28
	ctx.lr = 0x83408570;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408590;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x8259b670
	ctx.lr = 0x83408598;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11568
	ctx.r4.s64 = ctx.r11.s64 + -11568;
	// bl 0x824886a0
	ctx.lr = 0x834085AC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3088
	ctx.r3.s64 = ctx.r1.s64 + 3088;
	// lwz r4,-29460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29460);
	// bl 0x82e8fc28
	ctx.lr = 0x834085C0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834085E0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3096
	ctx.r3.s64 = ctx.r1.s64 + 3096;
	// bl 0x8259b670
	ctx.lr = 0x834085E8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11160
	ctx.r4.s64 = ctx.r11.s64 + -11160;
	// bl 0x824886a0
	ctx.lr = 0x834085FC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r4,-29432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29432);
	// bl 0x82e8fc28
	ctx.lr = 0x83408610;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408630;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x8259b670
	ctx.lr = 0x83408638;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11032
	ctx.r4.s64 = ctx.r11.s64 + -11032;
	// bl 0x824886a0
	ctx.lr = 0x8340864C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// lwz r4,-29420(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29420);
	// bl 0x82e8fc28
	ctx.lr = 0x83408660;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408680;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4440
	ctx.r3.s64 = ctx.r1.s64 + 4440;
	// bl 0x8259b670
	ctx.lr = 0x83408688;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10880
	ctx.r4.s64 = ctx.r11.s64 + -10880;
	// bl 0x824886a0
	ctx.lr = 0x8340869C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r4,-29416(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29416);
	// bl 0x82e8fc28
	ctx.lr = 0x834086B0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834086D0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x8259b670
	ctx.lr = 0x834086D8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10752
	ctx.r4.s64 = ctx.r11.s64 + -10752;
	// bl 0x824886a0
	ctx.lr = 0x834086EC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// lwz r4,-29412(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29412);
	// bl 0x82e8fc28
	ctx.lr = 0x83408700;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408720;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3192
	ctx.r3.s64 = ctx.r1.s64 + 3192;
	// bl 0x8259b670
	ctx.lr = 0x83408728;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10624
	ctx.r4.s64 = ctx.r11.s64 + -10624;
	// bl 0x824886a0
	ctx.lr = 0x8340873C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lwz r4,-29408(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29408);
	// bl 0x82e8fc28
	ctx.lr = 0x83408750;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408770;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x8259b670
	ctx.lr = 0x83408778;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10496
	ctx.r4.s64 = ctx.r11.s64 + -10496;
	// bl 0x824886a0
	ctx.lr = 0x8340878C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5104
	ctx.r3.s64 = ctx.r1.s64 + 5104;
	// lwz r4,-29388(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29388);
	// bl 0x82e8fc28
	ctx.lr = 0x834087A0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834087C0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5112
	ctx.r3.s64 = ctx.r1.s64 + 5112;
	// bl 0x8259b670
	ctx.lr = 0x834087C8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10240
	ctx.r4.s64 = ctx.r11.s64 + -10240;
	// bl 0x824886a0
	ctx.lr = 0x834087DC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lwz r4,-29380(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29380);
	// bl 0x82e8fc28
	ctx.lr = 0x834087F0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408810;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x8259b670
	ctx.lr = 0x83408818;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10112
	ctx.r4.s64 = ctx.r11.s64 + -10112;
	// bl 0x824886a0
	ctx.lr = 0x8340882C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// lwz r4,-29376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29376);
	// bl 0x82e8fc28
	ctx.lr = 0x83408840;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340885C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3288
	ctx.r3.s64 = ctx.r1.s64 + 3288;
	// bl 0x8259b670
	ctx.lr = 0x83408864;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26272
	ctx.r4.s64 = ctx.r11.s64 + -26272;
	// bl 0x824886a0
	ctx.lr = 0x83408878;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// lwz r4,-29368(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29368);
	// bl 0x82e8fc28
	ctx.lr = 0x8340888C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834088AC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x8259b670
	ctx.lr = 0x834088B4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9728
	ctx.r4.s64 = ctx.r11.s64 + -9728;
	// bl 0x824886a0
	ctx.lr = 0x834088C8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// lwz r4,-29364(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29364);
	// bl 0x82e8fc28
	ctx.lr = 0x834088DC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834088FC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4536
	ctx.r3.s64 = ctx.r1.s64 + 4536;
	// bl 0x8259b670
	ctx.lr = 0x83408904;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9600
	ctx.r4.s64 = ctx.r11.s64 + -9600;
	// bl 0x824886a0
	ctx.lr = 0x83408918;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// lwz r4,-29344(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29344);
	// bl 0x82e8fc28
	ctx.lr = 0x8340892C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340894C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// bl 0x8259b670
	ctx.lr = 0x83408954;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9472
	ctx.r4.s64 = ctx.r11.s64 + -9472;
	// bl 0x824886a0
	ctx.lr = 0x83408968;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// lwz r4,-29340(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29340);
	// bl 0x82e8fc28
	ctx.lr = 0x8340897C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340899C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3384
	ctx.r3.s64 = ctx.r1.s64 + 3384;
	// bl 0x8259b670
	ctx.lr = 0x834089A4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26144
	ctx.r4.s64 = ctx.r11.s64 + -26144;
	// bl 0x824886a0
	ctx.lr = 0x834089B8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// lwz r4,-29328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29328);
	// bl 0x82e8fc28
	ctx.lr = 0x834089CC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834089EC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x8259b670
	ctx.lr = 0x834089F4;
	sub_8259B670(ctx, base);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26016
	ctx.r4.s64 = ctx.r11.s64 + -26016;
	// bl 0x824886a0
	ctx.lr = 0x83408A08;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5584
	ctx.r3.s64 = ctx.r1.s64 + 5584;
	// lwz r4,-29324(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29324);
	// bl 0x82e8fc28
	ctx.lr = 0x83408A1C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408A3C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5592
	ctx.r3.s64 = ctx.r1.s64 + 5592;
	// bl 0x8259b670
	ctx.lr = 0x83408A44;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8960
	ctx.r4.s64 = ctx.r11.s64 + -8960;
	// bl 0x824886a0
	ctx.lr = 0x83408A58;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// lwz r4,-29312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29312);
	// bl 0x82e8fc28
	ctx.lr = 0x83408A6C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408A8C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1176
	ctx.r3.s64 = ctx.r1.s64 + 1176;
	// bl 0x8259b670
	ctx.lr = 0x83408A94;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11288
	ctx.r4.s64 = ctx.r11.s64 + -11288;
	// bl 0x824886a0
	ctx.lr = 0x83408AA8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// lwz r4,-29444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29444);
	// bl 0x82e8fc28
	ctx.lr = 0x83408ABC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r30.u32);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408ADC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3480
	ctx.r3.s64 = ctx.r1.s64 + 3480;
	// bl 0x8259b670
	ctx.lr = 0x83408AE4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25888
	ctx.r4.s64 = ctx.r11.s64 + -25888;
	// bl 0x824886a0
	ctx.lr = 0x83408AF8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// lwz r4,-29440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29440);
	// bl 0x82e8fc28
	ctx.lr = 0x83408B0C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r30.u32);
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408B2C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// bl 0x8259b670
	ctx.lr = 0x83408B34;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25760
	ctx.r4.s64 = ctx.r11.s64 + -25760;
	// bl 0x824886a0
	ctx.lr = 0x83408B48;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// lwz r4,-29240(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29240);
	// bl 0x82e8fc28
	ctx.lr = 0x83408B5C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,968
	ctx.r3.s64 = ctx.r31.s64 + 968;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r30.u32);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408B7C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4632
	ctx.r3.s64 = ctx.r1.s64 + 4632;
	// bl 0x8259b670
	ctx.lr = 0x83408B84;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8704
	ctx.r4.s64 = ctx.r11.s64 + -8704;
	// bl 0x824886a0
	ctx.lr = 0x83408B98;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// lwz r4,-29236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29236);
	// bl 0x82e8fc28
	ctx.lr = 0x83408BAC;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408BC8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1368
	ctx.r3.s64 = ctx.r1.s64 + 1368;
	// bl 0x8259b670
	ctx.lr = 0x83408BD0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8448
	ctx.r4.s64 = ctx.r11.s64 + -8448;
	// bl 0x824886a0
	ctx.lr = 0x83408BE4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// lwz r4,-29400(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29400);
	// bl 0x82e8fc28
	ctx.lr = 0x83408BF8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r30.u32);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408C18;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3576
	ctx.r3.s64 = ctx.r1.s64 + 3576;
	// bl 0x8259b670
	ctx.lr = 0x83408C20;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8576
	ctx.r4.s64 = ctx.r11.s64 + -8576;
	// bl 0x824886a0
	ctx.lr = 0x83408C34;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// lwz r4,-29396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29396);
	// bl 0x82e8fc28
	ctx.lr = 0x83408C48;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r30.u32);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408C68;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1464
	ctx.r3.s64 = ctx.r1.s64 + 1464;
	// bl 0x8259b670
	ctx.lr = 0x83408C70;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25632
	ctx.r4.s64 = ctx.r11.s64 + -25632;
	// bl 0x824886a0
	ctx.lr = 0x83408C84;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// lwz r4,-29232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29232);
	// bl 0x82e8fc28
	ctx.lr = 0x83408C98;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1128
	ctx.r3.s64 = ctx.r31.s64 + 1128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r30.u32);
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408CB8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5208
	ctx.r3.s64 = ctx.r1.s64 + 5208;
	// bl 0x8259b670
	ctx.lr = 0x83408CC0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25504
	ctx.r4.s64 = ctx.r11.s64 + -25504;
	// bl 0x824886a0
	ctx.lr = 0x83408CD4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// lwz r4,-29228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29228);
	// bl 0x82e8fc28
	ctx.lr = 0x83408CE8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1168
	ctx.r3.s64 = ctx.r31.s64 + 1168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408D08;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// bl 0x8259b670
	ctx.lr = 0x83408D10;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8192
	ctx.r4.s64 = ctx.r11.s64 + -8192;
	// bl 0x824886a0
	ctx.lr = 0x83408D24;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// lwz r4,-29288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29288);
	// bl 0x82e8fc28
	ctx.lr = 0x83408D38;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r30.u32);
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408D58;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3672
	ctx.r3.s64 = ctx.r1.s64 + 3672;
	// bl 0x8259b670
	ctx.lr = 0x83408D60;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8064
	ctx.r4.s64 = ctx.r11.s64 + -8064;
	// bl 0x824886a0
	ctx.lr = 0x83408D74;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// lwz r4,-29196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29196);
	// bl 0x82e8fc28
	ctx.lr = 0x83408D88;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r30.u32);
	// stw r11,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408DA8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// bl 0x8259b670
	ctx.lr = 0x83408DB0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// bl 0x824886a0
	ctx.lr = 0x83408DC4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// lwz r4,-29192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29192);
	// bl 0x82e8fc28
	ctx.lr = 0x83408DD8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1288
	ctx.r3.s64 = ctx.r31.s64 + 1288;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r30.u32);
	// stw r11,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408DF8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4728
	ctx.r3.s64 = ctx.r1.s64 + 4728;
	// bl 0x8259b670
	ctx.lr = 0x83408E00;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7808
	ctx.r4.s64 = ctx.r11.s64 + -7808;
	// bl 0x824886a0
	ctx.lr = 0x83408E14;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// lwz r4,-29188(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29188);
	// bl 0x82e8fc28
	ctx.lr = 0x83408E28;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1328
	ctx.r3.s64 = ctx.r31.s64 + 1328;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r30.u32);
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408E48;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1752
	ctx.r3.s64 = ctx.r1.s64 + 1752;
	// bl 0x8259b670
	ctx.lr = 0x83408E50;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25376
	ctx.r4.s64 = ctx.r11.s64 + -25376;
	// bl 0x824886a0
	ctx.lr = 0x83408E64;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// lwz r4,-29184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29184);
	// bl 0x82e8fc28
	ctx.lr = 0x83408E78;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r30.u32);
	// stw r11,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408E98;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3768
	ctx.r3.s64 = ctx.r1.s64 + 3768;
	// bl 0x8259b670
	ctx.lr = 0x83408EA0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7552
	ctx.r4.s64 = ctx.r11.s64 + -7552;
	// bl 0x824886a0
	ctx.lr = 0x83408EB4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// lwz r4,-29180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29180);
	// bl 0x82e8fc28
	ctx.lr = 0x83408EC8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408EE8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1848
	ctx.r3.s64 = ctx.r1.s64 + 1848;
	// bl 0x8259b670
	ctx.lr = 0x83408EF0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7424
	ctx.r4.s64 = ctx.r11.s64 + -7424;
	// bl 0x824886a0
	ctx.lr = 0x83408F04;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5488
	ctx.r3.s64 = ctx.r1.s64 + 5488;
	// lwz r4,-29176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29176);
	// bl 0x82e8fc28
	ctx.lr = 0x83408F18;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1448
	ctx.r3.s64 = ctx.r31.s64 + 1448;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408F34;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5496
	ctx.r3.s64 = ctx.r1.s64 + 5496;
	// bl 0x8259b670
	ctx.lr = 0x83408F3C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7016
	ctx.r4.s64 = ctx.r11.s64 + -7016;
	// bl 0x824886a0
	ctx.lr = 0x83408F50;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// lwz r4,-29160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29160);
	// bl 0x82e8fc28
	ctx.lr = 0x83408F64;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1488
	ctx.r3.s64 = ctx.r31.s64 + 1488;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408F84;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1944
	ctx.r3.s64 = ctx.r1.s64 + 1944;
	// bl 0x8259b670
	ctx.lr = 0x83408F8C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25248
	ctx.r4.s64 = ctx.r11.s64 + -25248;
	// bl 0x824886a0
	ctx.lr = 0x83408FA0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// lwz r4,-29156(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29156);
	// bl 0x82e8fc28
	ctx.lr = 0x83408FB4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1528
	ctx.r3.s64 = ctx.r31.s64 + 1528;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r30.u32);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83408FD4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3864
	ctx.r3.s64 = ctx.r1.s64 + 3864;
	// bl 0x8259b670
	ctx.lr = 0x83408FDC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6608
	ctx.r4.s64 = ctx.r11.s64 + -6608;
	// bl 0x824886a0
	ctx.lr = 0x83408FF0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// lwz r4,-29152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29152);
	// bl 0x82e8fc28
	ctx.lr = 0x83409004;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1568
	ctx.r3.s64 = ctx.r31.s64 + 1568;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409024;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2040
	ctx.r3.s64 = ctx.r1.s64 + 2040;
	// bl 0x8259b670
	ctx.lr = 0x8340902C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6480
	ctx.r4.s64 = ctx.r11.s64 + -6480;
	// bl 0x824886a0
	ctx.lr = 0x83409040;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// lwz r4,-29144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29144);
	// bl 0x82e8fc28
	ctx.lr = 0x83409054;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// addi r3,r31,1608
	ctx.r3.s64 = ctx.r31.s64 + 1608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409074;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4824
	ctx.r3.s64 = ctx.r1.s64 + 4824;
	// bl 0x8259b670
	ctx.lr = 0x8340907C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6352
	ctx.r4.s64 = ctx.r11.s64 + -6352;
	// bl 0x824886a0
	ctx.lr = 0x83409090;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// lwz r4,-29140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29140);
	// bl 0x82e8fc28
	ctx.lr = 0x834090A4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834090C4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2136
	ctx.r3.s64 = ctx.r1.s64 + 2136;
	// bl 0x8259b670
	ctx.lr = 0x834090CC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5944
	ctx.r4.s64 = ctx.r11.s64 + -5944;
	// bl 0x824886a0
	ctx.lr = 0x834090E0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// lwz r4,-29532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// bl 0x82e8fc28
	ctx.lr = 0x834090F4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1688
	ctx.r3.s64 = ctx.r31.s64 + 1688;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409114;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3960
	ctx.r3.s64 = ctx.r1.s64 + 3960;
	// bl 0x8259b670
	ctx.lr = 0x8340911C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25120
	ctx.r4.s64 = ctx.r11.s64 + -25120;
	// bl 0x824886a0
	ctx.lr = 0x83409130;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// lwz r4,-29528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29528);
	// bl 0x82e8fc28
	ctx.lr = 0x83409144;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1728
	ctx.r3.s64 = ctx.r31.s64 + 1728;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r30.u32);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409164;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2232
	ctx.r3.s64 = ctx.r1.s64 + 2232;
	// bl 0x8259b670
	ctx.lr = 0x8340916C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24992
	ctx.r4.s64 = ctx.r11.s64 + -24992;
	// bl 0x824886a0
	ctx.lr = 0x83409180;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5296
	ctx.r3.s64 = ctx.r1.s64 + 5296;
	// lwz r4,-29524(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29524);
	// bl 0x82e8fc28
	ctx.lr = 0x83409194;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r30.u32);
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834091B4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5304
	ctx.r3.s64 = ctx.r1.s64 + 5304;
	// bl 0x8259b670
	ctx.lr = 0x834091BC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24864
	ctx.r4.s64 = ctx.r11.s64 + -24864;
	// bl 0x824886a0
	ctx.lr = 0x834091D0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// lwz r4,-29520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29520);
	// bl 0x82e8fc28
	ctx.lr = 0x834091E4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r30.u32);
	// stw r11,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409204;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2328
	ctx.r3.s64 = ctx.r1.s64 + 2328;
	// bl 0x8259b670
	ctx.lr = 0x8340920C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24712
	ctx.r4.s64 = ctx.r11.s64 + -24712;
	// bl 0x824886a0
	ctx.lr = 0x83409220;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// lwz r4,-29516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29516);
	// bl 0x82e8fc28
	ctx.lr = 0x83409234;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1848
	ctx.r3.s64 = ctx.r31.s64 + 1848;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// stw r11,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409254;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4056
	ctx.r3.s64 = ctx.r1.s64 + 4056;
	// bl 0x8259b670
	ctx.lr = 0x8340925C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24544
	ctx.r4.s64 = ctx.r11.s64 + -24544;
	// bl 0x824886a0
	ctx.lr = 0x83409270;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// lwz r4,-29124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29124);
	// bl 0x82e8fc28
	ctx.lr = 0x83409284;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r30.u32);
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// stw r11,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x82d0bdd8
	ctx.lr = 0x834092A0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2424
	ctx.r3.s64 = ctx.r1.s64 + 2424;
	// bl 0x8259b670
	ctx.lr = 0x834092A8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// bl 0x824886a0
	ctx.lr = 0x834092BC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4912
	ctx.r3.s64 = ctx.r1.s64 + 4912;
	// lwz r4,-29512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29512);
	// bl 0x82e8fc28
	ctx.lr = 0x834092D0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,1928
	ctx.r3.s64 = ctx.r31.s64 + 1928;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r30.u32);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834092F0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4920
	ctx.r3.s64 = ctx.r1.s64 + 4920;
	// bl 0x8259b670
	ctx.lr = 0x834092F8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24240
	ctx.r4.s64 = ctx.r11.s64 + -24240;
	// bl 0x824886a0
	ctx.lr = 0x8340930C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// lwz r4,-29508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29508);
	// bl 0x82e8fc28
	ctx.lr = 0x83409320;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1968
	ctx.r3.s64 = ctx.r31.s64 + 1968;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r30.u32);
	// stw r11,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409340;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2520
	ctx.r3.s64 = ctx.r1.s64 + 2520;
	// bl 0x8259b670
	ctx.lr = 0x83409348;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4824
	ctx.r4.s64 = ctx.r11.s64 + -4824;
	// bl 0x824886a0
	ctx.lr = 0x8340935C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// lwz r4,-29504(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29504);
	// bl 0x82e8fc28
	ctx.lr = 0x83409370;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2008
	ctx.r3.s64 = ctx.r31.s64 + 2008;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r30.u32);
	// stw r11,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409390;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4152
	ctx.r3.s64 = ctx.r1.s64 + 4152;
	// bl 0x8259b670
	ctx.lr = 0x83409398;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24112
	ctx.r4.s64 = ctx.r11.s64 + -24112;
	// bl 0x824886a0
	ctx.lr = 0x834093AC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// lwz r4,-29500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29500);
	// bl 0x82e8fc28
	ctx.lr = 0x834093C0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2048
	ctx.r3.s64 = ctx.r31.s64 + 2048;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r30.u32);
	// stw r11,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834093E0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2616
	ctx.r3.s64 = ctx.r1.s64 + 2616;
	// bl 0x8259b670
	ctx.lr = 0x834093E8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23984
	ctx.r4.s64 = ctx.r11.s64 + -23984;
	// bl 0x824886a0
	ctx.lr = 0x834093FC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5680
	ctx.r3.s64 = ctx.r1.s64 + 5680;
	// lwz r4,-29496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29496);
	// bl 0x82e8fc28
	ctx.lr = 0x83409410;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,2088
	ctx.r3.s64 = ctx.r31.s64 + 2088;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r30.u32);
	// stw r11,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409430;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5688
	ctx.r3.s64 = ctx.r1.s64 + 5688;
	// bl 0x8259b670
	ctx.lr = 0x83409438;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23856
	ctx.r4.s64 = ctx.r11.s64 + -23856;
	// bl 0x824886a0
	ctx.lr = 0x8340944C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// lwz r4,-29492(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29492);
	// bl 0x82e8fc28
	ctx.lr = 0x83409460;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2128
	ctx.r3.s64 = ctx.r31.s64 + 2128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r30.u32);
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409480;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2712
	ctx.r3.s64 = ctx.r1.s64 + 2712;
	// bl 0x8259b670
	ctx.lr = 0x83409488;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23704
	ctx.r4.s64 = ctx.r11.s64 + -23704;
	// bl 0x824886a0
	ctx.lr = 0x8340949C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// lwz r4,-29120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29120);
	// bl 0x82e8fc28
	ctx.lr = 0x834094B0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r11,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834094D0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4248
	ctx.r3.s64 = ctx.r1.s64 + 4248;
	// bl 0x8259b670
	ctx.lr = 0x834094D8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23576
	ctx.r4.s64 = ctx.r11.s64 + -23576;
	// bl 0x824886a0
	ctx.lr = 0x834094EC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// lwz r4,-29428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29428);
	// bl 0x82e8fc28
	ctx.lr = 0x83409500;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2208
	ctx.r3.s64 = ctx.r31.s64 + 2208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r30.u32);
	// stw r11,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409520;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2808
	ctx.r3.s64 = ctx.r1.s64 + 2808;
	// bl 0x8259b670
	ctx.lr = 0x83409528;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
	// bl 0x824886a0
	ctx.lr = 0x8340953C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5008
	ctx.r3.s64 = ctx.r1.s64 + 5008;
	// lwz r4,-29116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29116);
	// bl 0x82e8fc28
	ctx.lr = 0x83409550;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,2248
	ctx.r3.s64 = ctx.r31.s64 + 2248;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r30.u32);
	// stw r11,2240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409570;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5016
	ctx.r3.s64 = ctx.r1.s64 + 5016;
	// bl 0x8259b670
	ctx.lr = 0x83409578;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23320
	ctx.r4.s64 = ctx.r11.s64 + -23320;
	// bl 0x824886a0
	ctx.lr = 0x8340958C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// lwz r4,-29212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29212);
	// bl 0x82e8fc28
	ctx.lr = 0x834095A0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2288
	ctx.r3.s64 = ctx.r31.s64 + 2288;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r30.u32);
	// stw r11,2280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834095C0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2904
	ctx.r3.s64 = ctx.r1.s64 + 2904;
	// bl 0x8259b670
	ctx.lr = 0x834095C8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23168
	ctx.r4.s64 = ctx.r11.s64 + -23168;
	// bl 0x824886a0
	ctx.lr = 0x834095DC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-29216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29216);
	// bl 0x82e8fc28
	ctx.lr = 0x834095F0;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,2328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// addi r3,r31,2328
	ctx.r3.s64 = ctx.r31.s64 + 2328;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,2320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2320, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340960C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x83409614;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23016
	ctx.r4.s64 = ctx.r11.s64 + -23016;
	// bl 0x824886a0
	ctx.lr = 0x83409628;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-29224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29224);
	// bl 0x82e8fc28
	ctx.lr = 0x8340963C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2368
	ctx.r3.s64 = ctx.r31.s64 + 2368;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2368, ctx.r30.u32);
	// stw r11,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340965C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x83409664;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22888
	ctx.r4.s64 = ctx.r11.s64 + -22888;
	// bl 0x824886a0
	ctx.lr = 0x83409678;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,-29220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29220);
	// bl 0x82e8fc28
	ctx.lr = 0x8340968C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2408
	ctx.r3.s64 = ctx.r31.s64 + 2408;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2408, ctx.r30.u32);
	// stw r11,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834096AC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8259b670
	ctx.lr = 0x834096B4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22736
	ctx.r4.s64 = ctx.r11.s64 + -22736;
	// bl 0x824886a0
	ctx.lr = 0x834096C8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,-29276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29276);
	// bl 0x82e8fc28
	ctx.lr = 0x834096DC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2448
	ctx.r3.s64 = ctx.r31.s64 + 2448;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r30.u32);
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834096FC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x8259b670
	ctx.lr = 0x83409704;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22608
	ctx.r4.s64 = ctx.r11.s64 + -22608;
	// bl 0x824886a0
	ctx.lr = 0x83409718;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,-29268(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29268);
	// bl 0x82e8fc28
	ctx.lr = 0x8340972C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2488
	ctx.r3.s64 = ctx.r31.s64 + 2488;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r30.u32);
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340974C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x8259b670
	ctx.lr = 0x83409754;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22480
	ctx.r4.s64 = ctx.r11.s64 + -22480;
	// bl 0x824886a0
	ctx.lr = 0x83409768;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r4,-29264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29264);
	// bl 0x82e8fc28
	ctx.lr = 0x8340977C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2528
	ctx.r3.s64 = ctx.r31.s64 + 2528;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r30.u32);
	// stw r11,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340979C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8259b670
	ctx.lr = 0x834097A4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22352
	ctx.r4.s64 = ctx.r11.s64 + -22352;
	// bl 0x824886a0
	ctx.lr = 0x834097B8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r4,-29260(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29260);
	// bl 0x82e8fc28
	ctx.lr = 0x834097CC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2568
	ctx.r3.s64 = ctx.r31.s64 + 2568;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r30.u32);
	// stw r11,2560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2560, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834097EC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x8259b670
	ctx.lr = 0x834097F4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22224
	ctx.r4.s64 = ctx.r11.s64 + -22224;
	// bl 0x824886a0
	ctx.lr = 0x83409808;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// lwz r4,-29272(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29272);
	// bl 0x82e8fc28
	ctx.lr = 0x8340981C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2608
	ctx.r3.s64 = ctx.r31.s64 + 2608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r30.u32);
	// stw r11,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340983C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x8259b670
	ctx.lr = 0x83409844;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22096
	ctx.r4.s64 = ctx.r11.s64 + -22096;
	// bl 0x824886a0
	ctx.lr = 0x83409858;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// lwz r4,-29112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29112);
	// bl 0x82e8fc28
	ctx.lr = 0x8340986C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2648
	ctx.r3.s64 = ctx.r31.s64 + 2648;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2648, ctx.r30.u32);
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340988C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x8259b670
	ctx.lr = 0x83409894;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21944
	ctx.r4.s64 = ctx.r11.s64 + -21944;
	// bl 0x824886a0
	ctx.lr = 0x834098A8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// lwz r4,-29108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29108);
	// bl 0x82e8fc28
	ctx.lr = 0x834098BC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2688
	ctx.r3.s64 = ctx.r31.s64 + 2688;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2688, ctx.r30.u32);
	// stw r11,2680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2680, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834098DC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x8259b670
	ctx.lr = 0x834098E4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21816
	ctx.r4.s64 = ctx.r11.s64 + -21816;
	// bl 0x824886a0
	ctx.lr = 0x834098F8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// lwz r4,-29284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29284);
	// bl 0x82e8fc28
	ctx.lr = 0x8340990C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2728
	ctx.r3.s64 = ctx.r31.s64 + 2728;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r30.u32);
	// stw r11,2720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2720, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340992C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// bl 0x8259b670
	ctx.lr = 0x83409934;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21688
	ctx.r4.s64 = ctx.r11.s64 + -21688;
	// bl 0x824886a0
	ctx.lr = 0x83409948;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// lwz r4,-29280(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29280);
	// bl 0x82e8fc28
	ctx.lr = 0x8340995C;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,2768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2768, ctx.r30.u32);
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409978;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// bl 0x8259b670
	ctx.lr = 0x83409980;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21560
	ctx.r4.s64 = ctx.r11.s64 + -21560;
	// bl 0x824886a0
	ctx.lr = 0x83409994;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// lwz r4,-29292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29292);
	// bl 0x82e8fc28
	ctx.lr = 0x834099A8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2808
	ctx.r3.s64 = ctx.r31.s64 + 2808;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2808, ctx.r30.u32);
	// stw r11,2800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2800, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834099C8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// bl 0x8259b670
	ctx.lr = 0x834099D0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21432
	ctx.r4.s64 = ctx.r11.s64 + -21432;
	// bl 0x824886a0
	ctx.lr = 0x834099E4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// lwz r4,-29104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29104);
	// bl 0x82e8fc28
	ctx.lr = 0x834099F8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2848
	ctx.r3.s64 = ctx.r31.s64 + 2848;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r30.u32);
	// stw r11,2840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2840, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409A18;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// bl 0x8259b670
	ctx.lr = 0x83409A20;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21264
	ctx.r4.s64 = ctx.r11.s64 + -21264;
	// bl 0x824886a0
	ctx.lr = 0x83409A34;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// lwz r4,-29100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29100);
	// bl 0x82e8fc28
	ctx.lr = 0x83409A48;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2888
	ctx.r3.s64 = ctx.r31.s64 + 2888;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2888, ctx.r30.u32);
	// stw r11,2880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2880, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409A68;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// bl 0x8259b670
	ctx.lr = 0x83409A70;
	sub_8259B670(ctx, base);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21136
	ctx.r4.s64 = ctx.r11.s64 + -21136;
	// bl 0x824886a0
	ctx.lr = 0x83409A84;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// lwz r4,-29296(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29296);
	// bl 0x82e8fc28
	ctx.lr = 0x83409A98;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2928
	ctx.r3.s64 = ctx.r31.s64 + 2928;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2928, ctx.r30.u32);
	// stw r11,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409AB8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1512
	ctx.r3.s64 = ctx.r1.s64 + 1512;
	// bl 0x8259b670
	ctx.lr = 0x83409AC0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20984
	ctx.r4.s64 = ctx.r11.s64 + -20984;
	// bl 0x824886a0
	ctx.lr = 0x83409AD4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// lwz r4,-29436(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29436);
	// bl 0x82e8fc28
	ctx.lr = 0x83409AE8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,2968
	ctx.r3.s64 = ctx.r31.s64 + 2968;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r30.u32);
	// stw r11,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409B08;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1608
	ctx.r3.s64 = ctx.r1.s64 + 1608;
	// bl 0x8259b670
	ctx.lr = 0x83409B10;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20832
	ctx.r4.s64 = ctx.r11.s64 + -20832;
	// bl 0x824886a0
	ctx.lr = 0x83409B24;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// lwz r4,-29096(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29096);
	// bl 0x82e8fc28
	ctx.lr = 0x83409B38;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3008
	ctx.r3.s64 = ctx.r31.s64 + 3008;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r30.u32);
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409B58;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1704
	ctx.r3.s64 = ctx.r1.s64 + 1704;
	// bl 0x8259b670
	ctx.lr = 0x83409B60;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20680
	ctx.r4.s64 = ctx.r11.s64 + -20680;
	// bl 0x824886a0
	ctx.lr = 0x83409B74;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// lwz r4,-29252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29252);
	// bl 0x82e8fc28
	ctx.lr = 0x83409B88;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3048
	ctx.r3.s64 = ctx.r31.s64 + 3048;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r30.u32);
	// stw r11,3040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3040, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409BA8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1800
	ctx.r3.s64 = ctx.r1.s64 + 1800;
	// bl 0x8259b670
	ctx.lr = 0x83409BB0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20552
	ctx.r4.s64 = ctx.r11.s64 + -20552;
	// bl 0x824886a0
	ctx.lr = 0x83409BC4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// lwz r4,-29360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29360);
	// bl 0x82e8fc28
	ctx.lr = 0x83409BD8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3088
	ctx.r3.s64 = ctx.r31.s64 + 3088;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r30.u32);
	// stw r11,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409BF8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1896
	ctx.r3.s64 = ctx.r1.s64 + 1896;
	// bl 0x8259b670
	ctx.lr = 0x83409C00;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20424
	ctx.r4.s64 = ctx.r11.s64 + -20424;
	// bl 0x824886a0
	ctx.lr = 0x83409C14;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// lwz r4,-29424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29424);
	// bl 0x82e8fc28
	ctx.lr = 0x83409C28;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3128
	ctx.r3.s64 = ctx.r31.s64 + 3128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r30.u32);
	// stw r11,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409C48;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1992
	ctx.r3.s64 = ctx.r1.s64 + 1992;
	// bl 0x8259b670
	ctx.lr = 0x83409C50;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20296
	ctx.r4.s64 = ctx.r11.s64 + -20296;
	// bl 0x824886a0
	ctx.lr = 0x83409C64;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// lwz r4,-29404(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29404);
	// bl 0x82e8fc28
	ctx.lr = 0x83409C78;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3168
	ctx.r3.s64 = ctx.r31.s64 + 3168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3168, ctx.r30.u32);
	// stw r11,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409C98;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2088
	ctx.r3.s64 = ctx.r1.s64 + 2088;
	// bl 0x8259b670
	ctx.lr = 0x83409CA0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20144
	ctx.r4.s64 = ctx.r11.s64 + -20144;
	// bl 0x824886a0
	ctx.lr = 0x83409CB4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// lwz r4,-29092(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29092);
	// bl 0x82e8fc28
	ctx.lr = 0x83409CC8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3208
	ctx.r3.s64 = ctx.r31.s64 + 3208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// stw r11,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409CE8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2184
	ctx.r3.s64 = ctx.r1.s64 + 2184;
	// bl 0x8259b670
	ctx.lr = 0x83409CF0;
	sub_8259B670(ctx, base);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20016
	ctx.r4.s64 = ctx.r11.s64 + -20016;
	// bl 0x824886a0
	ctx.lr = 0x83409D04;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// lwz r4,-29256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29256);
	// bl 0x82e8fc28
	ctx.lr = 0x83409D18;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3248
	ctx.r3.s64 = ctx.r31.s64 + 3248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r30.u32);
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409D38;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2280
	ctx.r3.s64 = ctx.r1.s64 + 2280;
	// bl 0x8259b670
	ctx.lr = 0x83409D40;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19888
	ctx.r4.s64 = ctx.r11.s64 + -19888;
	// bl 0x824886a0
	ctx.lr = 0x83409D54;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2368
	ctx.r3.s64 = ctx.r1.s64 + 2368;
	// lwz r4,-29088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29088);
	// bl 0x82e8fc28
	ctx.lr = 0x83409D68;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3288
	ctx.r3.s64 = ctx.r31.s64 + 3288;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r30.u32);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409D88;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2376
	ctx.r3.s64 = ctx.r1.s64 + 2376;
	// bl 0x8259b670
	ctx.lr = 0x83409D90;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19760
	ctx.r4.s64 = ctx.r11.s64 + -19760;
	// bl 0x824886a0
	ctx.lr = 0x83409DA4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// lwz r4,-29084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29084);
	// bl 0x82e8fc28
	ctx.lr = 0x83409DB8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r30.u32);
	// stw r11,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409DD8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2472
	ctx.r3.s64 = ctx.r1.s64 + 2472;
	// bl 0x8259b670
	ctx.lr = 0x83409DE0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19632
	ctx.r4.s64 = ctx.r11.s64 + -19632;
	// bl 0x824886a0
	ctx.lr = 0x83409DF4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2560
	ctx.r3.s64 = ctx.r1.s64 + 2560;
	// lwz r4,-29080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29080);
	// bl 0x82e8fc28
	ctx.lr = 0x83409E08;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3368
	ctx.r3.s64 = ctx.r31.s64 + 3368;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r30.u32);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409E28;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2568
	ctx.r3.s64 = ctx.r1.s64 + 2568;
	// bl 0x8259b670
	ctx.lr = 0x83409E30;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19504
	ctx.r4.s64 = ctx.r11.s64 + -19504;
	// bl 0x824886a0
	ctx.lr = 0x83409E44;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2656
	ctx.r3.s64 = ctx.r1.s64 + 2656;
	// lwz r4,-29384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29384);
	// bl 0x82e8fc28
	ctx.lr = 0x83409E58;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3408
	ctx.r3.s64 = ctx.r31.s64 + 3408;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r30.u32);
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409E78;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2664
	ctx.r3.s64 = ctx.r1.s64 + 2664;
	// bl 0x8259b670
	ctx.lr = 0x83409E80;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26272
	ctx.r4.s64 = ctx.r11.s64 + -26272;
	// bl 0x824886a0
	ctx.lr = 0x83409E94;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2752
	ctx.r3.s64 = ctx.r1.s64 + 2752;
	// lwz r4,-29372(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29372);
	// bl 0x82e8fc28
	ctx.lr = 0x83409EA8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3448
	ctx.r3.s64 = ctx.r31.s64 + 3448;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3448, ctx.r30.u32);
	// stw r11,3440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3440, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409EC8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2760
	ctx.r3.s64 = ctx.r1.s64 + 2760;
	// bl 0x8259b670
	ctx.lr = 0x83409ED0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19376
	ctx.r4.s64 = ctx.r11.s64 + -19376;
	// bl 0x824886a0
	ctx.lr = 0x83409EE4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2848
	ctx.r3.s64 = ctx.r1.s64 + 2848;
	// lwz r4,-29352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29352);
	// bl 0x82e8fc28
	ctx.lr = 0x83409EF8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3488
	ctx.r3.s64 = ctx.r31.s64 + 3488;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r30.u32);
	// stw r11,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409F18;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2856
	ctx.r3.s64 = ctx.r1.s64 + 2856;
	// bl 0x8259b670
	ctx.lr = 0x83409F20;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19248
	ctx.r4.s64 = ctx.r11.s64 + -19248;
	// bl 0x824886a0
	ctx.lr = 0x83409F34;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2944
	ctx.r3.s64 = ctx.r1.s64 + 2944;
	// lwz r4,-29348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29348);
	// bl 0x82e8fc28
	ctx.lr = 0x83409F48;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3528
	ctx.r3.s64 = ctx.r31.s64 + 3528;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r30.u32);
	// stw r11,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409F68;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,2952
	ctx.r3.s64 = ctx.r1.s64 + 2952;
	// bl 0x8259b670
	ctx.lr = 0x83409F70;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19120
	ctx.r4.s64 = ctx.r11.s64 + -19120;
	// bl 0x824886a0
	ctx.lr = 0x83409F84;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,-29076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29076);
	// addi r3,r1,3040
	ctx.r3.s64 = ctx.r1.s64 + 3040;
	// bl 0x82e8fc28
	ctx.lr = 0x83409F98;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3568
	ctx.r3.s64 = ctx.r31.s64 + 3568;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3568, ctx.r30.u32);
	// stw r11,3560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3560, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83409FB8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3048
	ctx.r3.s64 = ctx.r1.s64 + 3048;
	// bl 0x8259b670
	ctx.lr = 0x83409FC0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18992
	ctx.r4.s64 = ctx.r11.s64 + -18992;
	// bl 0x824886a0
	ctx.lr = 0x83409FD4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3136
	ctx.r3.s64 = ctx.r1.s64 + 3136;
	// lwz r4,-29072(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29072);
	// bl 0x82e8fc28
	ctx.lr = 0x83409FE8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3608
	ctx.r3.s64 = ctx.r31.s64 + 3608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3608, ctx.r30.u32);
	// stw r11,3600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3600, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A008;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3144
	ctx.r3.s64 = ctx.r1.s64 + 3144;
	// bl 0x8259b670
	ctx.lr = 0x8340A010;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18864
	ctx.r4.s64 = ctx.r11.s64 + -18864;
	// bl 0x824886a0
	ctx.lr = 0x8340A024;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// lwz r4,-29068(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29068);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A038;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3648
	ctx.r3.s64 = ctx.r31.s64 + 3648;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3648, ctx.r30.u32);
	// stw r11,3640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3640, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A058;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3240
	ctx.r3.s64 = ctx.r1.s64 + 3240;
	// bl 0x8259b670
	ctx.lr = 0x8340A060;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,944
	ctx.r4.s64 = ctx.r11.s64 + 944;
	// bl 0x824886a0
	ctx.lr = 0x8340A074;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3328
	ctx.r3.s64 = ctx.r1.s64 + 3328;
	// lwz r4,-29064(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29064);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A088;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3688
	ctx.r3.s64 = ctx.r31.s64 + 3688;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3688, ctx.r30.u32);
	// stw r11,3680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3680, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A0A8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3336
	ctx.r3.s64 = ctx.r1.s64 + 3336;
	// bl 0x8259b670
	ctx.lr = 0x8340A0B0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18736
	ctx.r4.s64 = ctx.r11.s64 + -18736;
	// bl 0x824886a0
	ctx.lr = 0x8340A0C4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3424
	ctx.r3.s64 = ctx.r1.s64 + 3424;
	// lwz r4,-29060(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29060);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A0D8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3728
	ctx.r3.s64 = ctx.r31.s64 + 3728;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3728, ctx.r30.u32);
	// stw r11,3720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3720, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A0F8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3432
	ctx.r3.s64 = ctx.r1.s64 + 3432;
	// bl 0x8259b670
	ctx.lr = 0x8340A100;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18608
	ctx.r4.s64 = ctx.r11.s64 + -18608;
	// bl 0x824886a0
	ctx.lr = 0x8340A114;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3520
	ctx.r3.s64 = ctx.r1.s64 + 3520;
	// lwz r4,-29332(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29332);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A128;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3768
	ctx.r3.s64 = ctx.r31.s64 + 3768;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3768, ctx.r30.u32);
	// stw r11,3760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3760, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A148;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3528
	ctx.r3.s64 = ctx.r1.s64 + 3528;
	// bl 0x8259b670
	ctx.lr = 0x8340A150;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18480
	ctx.r4.s64 = ctx.r11.s64 + -18480;
	// bl 0x824886a0
	ctx.lr = 0x8340A164;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3616
	ctx.r3.s64 = ctx.r1.s64 + 3616;
	// lwz r4,-29056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29056);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A178;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,3808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3808, ctx.r30.u32);
	// addi r3,r31,3808
	ctx.r3.s64 = ctx.r31.s64 + 3808;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A194;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3624
	ctx.r3.s64 = ctx.r1.s64 + 3624;
	// bl 0x8259b670
	ctx.lr = 0x8340A19C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18352
	ctx.r4.s64 = ctx.r11.s64 + -18352;
	// bl 0x824886a0
	ctx.lr = 0x8340A1B0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3712
	ctx.r3.s64 = ctx.r1.s64 + 3712;
	// lwz r4,-29052(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29052);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A1C4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3848
	ctx.r3.s64 = ctx.r31.s64 + 3848;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3848, ctx.r30.u32);
	// stw r11,3840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3840, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A1E4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3720
	ctx.r3.s64 = ctx.r1.s64 + 3720;
	// bl 0x8259b670
	ctx.lr = 0x8340A1EC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18224
	ctx.r4.s64 = ctx.r11.s64 + -18224;
	// bl 0x824886a0
	ctx.lr = 0x8340A200;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3808
	ctx.r3.s64 = ctx.r1.s64 + 3808;
	// lwz r4,-29048(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29048);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A214;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3888
	ctx.r3.s64 = ctx.r31.s64 + 3888;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3888, ctx.r30.u32);
	// stw r11,3880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3880, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A234;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3816
	ctx.r3.s64 = ctx.r1.s64 + 3816;
	// bl 0x8259b670
	ctx.lr = 0x8340A23C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18096
	ctx.r4.s64 = ctx.r11.s64 + -18096;
	// bl 0x824886a0
	ctx.lr = 0x8340A250;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,3904
	ctx.r3.s64 = ctx.r1.s64 + 3904;
	// lwz r4,-29044(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29044);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A264;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3928
	ctx.r3.s64 = ctx.r31.s64 + 3928;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r30.u32);
	// stw r11,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A284;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,3912
	ctx.r3.s64 = ctx.r1.s64 + 3912;
	// bl 0x8259b670
	ctx.lr = 0x8340A28C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17968
	ctx.r4.s64 = ctx.r11.s64 + -17968;
	// bl 0x824886a0
	ctx.lr = 0x8340A2A0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4000
	ctx.r3.s64 = ctx.r1.s64 + 4000;
	// lwz r4,-29040(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29040);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A2B4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,3968
	ctx.r3.s64 = ctx.r31.s64 + 3968;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,3968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3968, ctx.r30.u32);
	// stw r11,3960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3960, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A2D4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4008
	ctx.r3.s64 = ctx.r1.s64 + 4008;
	// bl 0x8259b670
	ctx.lr = 0x8340A2DC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17840
	ctx.r4.s64 = ctx.r11.s64 + -17840;
	// bl 0x824886a0
	ctx.lr = 0x8340A2F0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4096
	ctx.r3.s64 = ctx.r1.s64 + 4096;
	// lwz r4,-29320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A304;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4008
	ctx.r3.s64 = ctx.r31.s64 + 4008;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4008, ctx.r30.u32);
	// stw r11,4000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4000, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A324;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4104
	ctx.r3.s64 = ctx.r1.s64 + 4104;
	// bl 0x8259b670
	ctx.lr = 0x8340A32C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17712
	ctx.r4.s64 = ctx.r11.s64 + -17712;
	// bl 0x824886a0
	ctx.lr = 0x8340A340;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4192
	ctx.r3.s64 = ctx.r1.s64 + 4192;
	// lwz r4,-29316(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29316);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A354;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4048
	ctx.r3.s64 = ctx.r31.s64 + 4048;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4048, ctx.r30.u32);
	// stw r11,4040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4040, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A374;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4200
	ctx.r3.s64 = ctx.r1.s64 + 4200;
	// bl 0x8259b670
	ctx.lr = 0x8340A37C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26272
	ctx.r4.s64 = ctx.r11.s64 + -26272;
	// bl 0x824886a0
	ctx.lr = 0x8340A390;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4288
	ctx.r3.s64 = ctx.r1.s64 + 4288;
	// lwz r4,-29448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29448);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A3A4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4088
	ctx.r3.s64 = ctx.r31.s64 + 4088;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4088, ctx.r30.u32);
	// stw r11,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A3C4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4296
	ctx.r3.s64 = ctx.r1.s64 + 4296;
	// bl 0x8259b670
	ctx.lr = 0x8340A3CC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17584
	ctx.r4.s64 = ctx.r11.s64 + -17584;
	// bl 0x824886a0
	ctx.lr = 0x8340A3E0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4384
	ctx.r3.s64 = ctx.r1.s64 + 4384;
	// lwz r4,-29028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29028);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A3F4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4128
	ctx.r3.s64 = ctx.r31.s64 + 4128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4128, ctx.r30.u32);
	// stw r11,4120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A414;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4392
	ctx.r3.s64 = ctx.r1.s64 + 4392;
	// bl 0x8259b670
	ctx.lr = 0x8340A41C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17456
	ctx.r4.s64 = ctx.r11.s64 + -17456;
	// bl 0x824886a0
	ctx.lr = 0x8340A430;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4480
	ctx.r3.s64 = ctx.r1.s64 + 4480;
	// lwz r4,-29000(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29000);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A444;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4168
	ctx.r3.s64 = ctx.r31.s64 + 4168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4168, ctx.r30.u32);
	// stw r11,4160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A464;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4488
	ctx.r3.s64 = ctx.r1.s64 + 4488;
	// bl 0x8259b670
	ctx.lr = 0x8340A46C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17328
	ctx.r4.s64 = ctx.r11.s64 + -17328;
	// bl 0x824886a0
	ctx.lr = 0x8340A480;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4576
	ctx.r3.s64 = ctx.r1.s64 + 4576;
	// lwz r4,-28996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28996);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A494;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,4208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4208, ctx.r30.u32);
	// addi r3,r31,4208
	ctx.r3.s64 = ctx.r31.s64 + 4208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,4200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A4B4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4584
	ctx.r3.s64 = ctx.r1.s64 + 4584;
	// bl 0x8259b670
	ctx.lr = 0x8340A4BC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17200
	ctx.r4.s64 = ctx.r11.s64 + -17200;
	// bl 0x824886a0
	ctx.lr = 0x8340A4D0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4672
	ctx.r3.s64 = ctx.r1.s64 + 4672;
	// lwz r4,-28992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28992);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A4E4;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4248, ctx.r30.u32);
	// addi r3,r31,4248
	ctx.r3.s64 = ctx.r31.s64 + 4248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,4240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A500;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4680
	ctx.r3.s64 = ctx.r1.s64 + 4680;
	// bl 0x8259b670
	ctx.lr = 0x8340A508;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17072
	ctx.r4.s64 = ctx.r11.s64 + -17072;
	// bl 0x824886a0
	ctx.lr = 0x8340A51C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4768
	ctx.r3.s64 = ctx.r1.s64 + 4768;
	// lwz r4,-28988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28988);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A530;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4288
	ctx.r3.s64 = ctx.r31.s64 + 4288;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4288, ctx.r30.u32);
	// stw r11,4280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A550;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4776
	ctx.r3.s64 = ctx.r1.s64 + 4776;
	// bl 0x8259b670
	ctx.lr = 0x8340A558;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16944
	ctx.r4.s64 = ctx.r11.s64 + -16944;
	// bl 0x824886a0
	ctx.lr = 0x8340A56C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4864
	ctx.r3.s64 = ctx.r1.s64 + 4864;
	// lwz r4,-28984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28984);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A580;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4328
	ctx.r3.s64 = ctx.r31.s64 + 4328;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4328, ctx.r30.u32);
	// stw r11,4320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4320, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A5A0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4872
	ctx.r3.s64 = ctx.r1.s64 + 4872;
	// bl 0x8259b670
	ctx.lr = 0x8340A5A8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16816
	ctx.r4.s64 = ctx.r11.s64 + -16816;
	// bl 0x824886a0
	ctx.lr = 0x8340A5BC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,4960
	ctx.r3.s64 = ctx.r1.s64 + 4960;
	// lwz r4,-28980(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28980);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A5D0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r31,4368
	ctx.r3.s64 = ctx.r31.s64 + 4368;
	// stw r30,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r30.u32);
	// stw r11,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A5F0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,4968
	ctx.r3.s64 = ctx.r1.s64 + 4968;
	// bl 0x8259b670
	ctx.lr = 0x8340A5F8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16688
	ctx.r4.s64 = ctx.r11.s64 + -16688;
	// bl 0x824886a0
	ctx.lr = 0x8340A60C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5056
	ctx.r3.s64 = ctx.r1.s64 + 5056;
	// lwz r4,-28976(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28976);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A620;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4408
	ctx.r3.s64 = ctx.r31.s64 + 4408;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r30.u32);
	// stw r11,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A640;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5064
	ctx.r3.s64 = ctx.r1.s64 + 5064;
	// bl 0x8259b670
	ctx.lr = 0x8340A648;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16560
	ctx.r4.s64 = ctx.r11.s64 + -16560;
	// bl 0x824886a0
	ctx.lr = 0x8340A65C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5152
	ctx.r3.s64 = ctx.r1.s64 + 5152;
	// lwz r4,-28968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28968);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A670;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4448
	ctx.r3.s64 = ctx.r31.s64 + 4448;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4448, ctx.r30.u32);
	// stw r11,4440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4440, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A690;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5160
	ctx.r3.s64 = ctx.r1.s64 + 5160;
	// bl 0x8259b670
	ctx.lr = 0x8340A698;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16432
	ctx.r4.s64 = ctx.r11.s64 + -16432;
	// bl 0x824886a0
	ctx.lr = 0x8340A6AC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5248
	ctx.r3.s64 = ctx.r1.s64 + 5248;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28964);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A6C0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4488
	ctx.r3.s64 = ctx.r31.s64 + 4488;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r30.u32);
	// stw r11,4480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4480, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A6E0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5256
	ctx.r3.s64 = ctx.r1.s64 + 5256;
	// bl 0x8259b670
	ctx.lr = 0x8340A6E8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16304
	ctx.r4.s64 = ctx.r11.s64 + -16304;
	// bl 0x824886a0
	ctx.lr = 0x8340A6FC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5344
	ctx.r3.s64 = ctx.r1.s64 + 5344;
	// lwz r4,-28960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A710;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,4528
	ctx.r3.s64 = ctx.r31.s64 + 4528;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r30.u32);
	// stw r11,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A730;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5352
	ctx.r3.s64 = ctx.r1.s64 + 5352;
	// bl 0x8259b670
	ctx.lr = 0x8340A738;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16176
	ctx.r4.s64 = ctx.r11.s64 + -16176;
	// bl 0x824886a0
	ctx.lr = 0x8340A74C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5440
	ctx.r3.s64 = ctx.r1.s64 + 5440;
	// lwz r4,-28956(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28956);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A760;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4568
	ctx.r3.s64 = ctx.r31.s64 + 4568;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4568, ctx.r30.u32);
	// stw r11,4560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4560, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A780;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5448
	ctx.r3.s64 = ctx.r1.s64 + 5448;
	// bl 0x8259b670
	ctx.lr = 0x8340A788;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2352
	ctx.r4.s64 = ctx.r11.s64 + 2352;
	// bl 0x824886a0
	ctx.lr = 0x8340A79C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5536
	ctx.r3.s64 = ctx.r1.s64 + 5536;
	// lwz r4,-29024(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29024);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A7B0;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4608
	ctx.r3.s64 = ctx.r31.s64 + 4608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r30.u32);
	// stw r11,4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4600, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A7D0;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5544
	ctx.r3.s64 = ctx.r1.s64 + 5544;
	// bl 0x8259b670
	ctx.lr = 0x8340A7D8;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2480
	ctx.r4.s64 = ctx.r11.s64 + 2480;
	// bl 0x824886a0
	ctx.lr = 0x8340A7EC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,5632
	ctx.r3.s64 = ctx.r1.s64 + 5632;
	// lwz r4,-29020(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29020);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A800;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4648
	ctx.r3.s64 = ctx.r31.s64 + 4648;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4648, ctx.r30.u32);
	// stw r11,4640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4640, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A820;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5640
	ctx.r3.s64 = ctx.r1.s64 + 5640;
	// bl 0x8259b670
	ctx.lr = 0x8340A828;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,5728
	ctx.r3.s64 = ctx.r1.s64 + 5728;
	// bl 0x82e8fc28
	ctx.lr = 0x8340A83C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,4688
	ctx.r3.s64 = ctx.r31.s64 + 4688;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,4688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4688, ctx.r30.u32);
	// stw r11,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A858;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,5736
	ctx.r3.s64 = ctx.r1.s64 + 5736;
	// bl 0x8259b670
	ctx.lr = 0x8340A860;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13320
	ctx.r3.s64 = ctx.r11.s64 + -13320;
	// bl 0x833a1ff8
	ctx.lr = 0x8340A86C;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,5792
	ctx.r1.s64 = ctx.r1.s64 + 5792;
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

__attribute__((alias("__imp__sub_8340A884"))) PPC_WEAK_FUNC(sub_8340A884);
PPC_FUNC_IMPL(__imp__sub_8340A884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340A888"))) PPC_WEAK_FUNC(sub_8340A888);
PPC_FUNC_IMPL(__imp__sub_8340A888) {
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
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17792
	ctx.r4.s64 = ctx.r11.s64 + -17792;
	// bl 0x824886a0
	ctx.lr = 0x8340A8B4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// lwz r4,-20956(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20956);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A8C8;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-30816
	ctx.r31.s64 = ctx.r9.s64 + -30816;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-30816(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30816, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A8EC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// bl 0x8259b670
	ctx.lr = 0x8340A8F4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17664
	ctx.r4.s64 = ctx.r11.s64 + -17664;
	// bl 0x824886a0
	ctx.lr = 0x8340A908;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// lwz r4,-20948(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20948);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A91C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A93C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x8259b670
	ctx.lr = 0x8340A944;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26480
	ctx.r4.s64 = ctx.r11.s64 + 26480;
	// bl 0x824886a0
	ctx.lr = 0x8340A958;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,-21060(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21060);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A96C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A98C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8259b670
	ctx.lr = 0x8340A994;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x824886a0
	ctx.lr = 0x8340A9A8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// lwz r4,-21056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21056);
	// bl 0x82e8fc28
	ctx.lr = 0x8340A9BC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340A9DC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// bl 0x8259b670
	ctx.lr = 0x8340A9E4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26736
	ctx.r4.s64 = ctx.r11.s64 + 26736;
	// bl 0x824886a0
	ctx.lr = 0x8340A9F8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,-21052(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21052);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AA0C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AA2C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x8259b670
	ctx.lr = 0x8340AA34;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x824886a0
	ctx.lr = 0x8340AA48;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// lwz r4,-21048(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21048);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AA5C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AA7C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x8259b670
	ctx.lr = 0x8340AA84;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26992
	ctx.r4.s64 = ctx.r11.s64 + 26992;
	// bl 0x824886a0
	ctx.lr = 0x8340AA98;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,-21044(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21044);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AAAC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AACC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x8259b670
	ctx.lr = 0x8340AAD4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27120
	ctx.r4.s64 = ctx.r11.s64 + 27120;
	// bl 0x824886a0
	ctx.lr = 0x8340AAE8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// lwz r4,-20944(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20944);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AAFC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AB1C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// bl 0x8259b670
	ctx.lr = 0x8340AB24;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17536
	ctx.r4.s64 = ctx.r11.s64 + -17536;
	// bl 0x824886a0
	ctx.lr = 0x8340AB38;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r4,-21040(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21040);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AB4C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AB6C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8259b670
	ctx.lr = 0x8340AB74;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17408
	ctx.r4.s64 = ctx.r11.s64 + -17408;
	// bl 0x824886a0
	ctx.lr = 0x8340AB88;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// lwz r4,-21028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21028);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AB9C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340ABBC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// bl 0x8259b670
	ctx.lr = 0x8340ABC4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27504
	ctx.r4.s64 = ctx.r11.s64 + 27504;
	// bl 0x824886a0
	ctx.lr = 0x8340ABD8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r4,-21024(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21024);
	// bl 0x82e8fc28
	ctx.lr = 0x8340ABEC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AC0C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x8259b670
	ctx.lr = 0x8340AC14;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27632
	ctx.r4.s64 = ctx.r11.s64 + 27632;
	// bl 0x824886a0
	ctx.lr = 0x8340AC28;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// lwz r4,-21016(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21016);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AC3C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AC5C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// bl 0x8259b670
	ctx.lr = 0x8340AC64;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27760
	ctx.r4.s64 = ctx.r11.s64 + 27760;
	// bl 0x824886a0
	ctx.lr = 0x8340AC78;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// lwz r4,-21012(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21012);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AC8C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340ACAC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x8259b670
	ctx.lr = 0x8340ACB4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27888
	ctx.r4.s64 = ctx.r11.s64 + 27888;
	// bl 0x824886a0
	ctx.lr = 0x8340ACC8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-21008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21008);
	// bl 0x82e8fc28
	ctx.lr = 0x8340ACDC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340ACFC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x8340AD04;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28016
	ctx.r4.s64 = ctx.r11.s64 + 28016;
	// bl 0x824886a0
	ctx.lr = 0x8340AD18;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-21004(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21004);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AD2C;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AD48;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x8340AD50;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28144
	ctx.r4.s64 = ctx.r11.s64 + 28144;
	// bl 0x824886a0
	ctx.lr = 0x8340AD64;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,-21000(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21000);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AD78;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AD98;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259b670
	ctx.lr = 0x8340ADA0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28272
	ctx.r4.s64 = ctx.r11.s64 + 28272;
	// bl 0x824886a0
	ctx.lr = 0x8340ADB4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,-20996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20996);
	// bl 0x82e8fc28
	ctx.lr = 0x8340ADC8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340ADE8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8259b670
	ctx.lr = 0x8340ADF0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28400
	ctx.r4.s64 = ctx.r11.s64 + 28400;
	// bl 0x824886a0
	ctx.lr = 0x8340AE04;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,-20992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20992);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AE18;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AE38;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x8259b670
	ctx.lr = 0x8340AE40;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28528
	ctx.r4.s64 = ctx.r11.s64 + 28528;
	// bl 0x824886a0
	ctx.lr = 0x8340AE54;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r4,-20988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20988);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AE68;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AE88;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x8259b670
	ctx.lr = 0x8340AE90;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28912
	ctx.r4.s64 = ctx.r11.s64 + 28912;
	// bl 0x824886a0
	ctx.lr = 0x8340AEA4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r4,-20976(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AEB8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AED8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x8259b670
	ctx.lr = 0x8340AEE0;
	sub_8259B670(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29040
	ctx.r4.s64 = ctx.r11.s64 + 29040;
	// bl 0x824886a0
	ctx.lr = 0x8340AEF4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lwz r4,-20972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20972);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AF08;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AF28;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x8259b670
	ctx.lr = 0x8340AF30;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29168
	ctx.r4.s64 = ctx.r11.s64 + 29168;
	// bl 0x824886a0
	ctx.lr = 0x8340AF44;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lwz r4,-20964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20964);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AF58;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AF78;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x8259b670
	ctx.lr = 0x8340AF80;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29296
	ctx.r4.s64 = ctx.r11.s64 + 29296;
	// bl 0x824886a0
	ctx.lr = 0x8340AF94;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// lwz r4,-20924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20924);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AFA8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r30.u32);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340AFC8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x8259b670
	ctx.lr = 0x8340AFD0;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17280
	ctx.r4.s64 = ctx.r11.s64 + -17280;
	// bl 0x824886a0
	ctx.lr = 0x8340AFE4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// lwz r4,-20960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20960);
	// bl 0x82e8fc28
	ctx.lr = 0x8340AFF8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r30.u32);
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340B018;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// bl 0x8259b670
	ctx.lr = 0x8340B020;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27248
	ctx.r4.s64 = ctx.r11.s64 + 27248;
	// bl 0x824886a0
	ctx.lr = 0x8340B034;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// lwz r4,-21036(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21036);
	// bl 0x82e8fc28
	ctx.lr = 0x8340B048;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,968
	ctx.r3.s64 = ctx.r31.s64 + 968;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r30.u32);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340B068;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x8259b670
	ctx.lr = 0x8340B070;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29552
	ctx.r4.s64 = ctx.r11.s64 + 29552;
	// bl 0x824886a0
	ctx.lr = 0x8340B084;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// lwz r4,-20940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20940);
	// bl 0x82e8fc28
	ctx.lr = 0x8340B098;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340B0B4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1176
	ctx.r3.s64 = ctx.r1.s64 + 1176;
	// bl 0x8259b670
	ctx.lr = 0x8340B0BC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29680
	ctx.r4.s64 = ctx.r11.s64 + 29680;
	// bl 0x824886a0
	ctx.lr = 0x8340B0D0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// lwz r4,-20936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20936);
	// bl 0x82e8fc28
	ctx.lr = 0x8340B0E4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r30.u32);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340B104;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// bl 0x8259b670
	ctx.lr = 0x8340B10C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28784
	ctx.r4.s64 = ctx.r11.s64 + 28784;
	// bl 0x824886a0
	ctx.lr = 0x8340B120;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// lwz r4,-20980(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20980);
	// bl 0x82e8fc28
	ctx.lr = 0x8340B134;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r30.u32);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340B154;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1368
	ctx.r3.s64 = ctx.r1.s64 + 1368;
	// bl 0x8259b670
	ctx.lr = 0x8340B15C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82e8fc28
	ctx.lr = 0x8340B170;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r31,1128
	ctx.r3.s64 = ctx.r31.s64 + 1128;
	// stw r30,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r30.u32);
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340B18C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,1464
	ctx.r3.s64 = ctx.r1.s64 + 1464;
	// bl 0x8259b670
	ctx.lr = 0x8340B194;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13240
	ctx.r3.s64 = ctx.r11.s64 + -13240;
	// bl 0x833a1ff8
	ctx.lr = 0x8340B1A0;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
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

__attribute__((alias("__imp__sub_8340B1B8"))) PPC_WEAK_FUNC(sub_8340B1B8);
PPC_FUNC_IMPL(__imp__sub_8340B1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,20488
	ctx.r4.s64 = ctx.r11.s64 + 20488;
	// addi r3,r10,-29656
	ctx.r3.s64 = ctx.r10.s64 + -29656;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8340B1CC"))) PPC_WEAK_FUNC(sub_8340B1CC);
PPC_FUNC_IMPL(__imp__sub_8340B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340B1D0"))) PPC_WEAK_FUNC(sub_8340B1D0);
PPC_FUNC_IMPL(__imp__sub_8340B1D0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-6176
	ctx.r4.s64 = ctx.r11.s64 + -6176;
	// addi r3,r10,-29648
	ctx.r3.s64 = ctx.r10.s64 + -29648;
	// bl 0x82e02670
	ctx.lr = 0x8340B1F0;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13160
	ctx.r3.s64 = ctx.r11.s64 + -13160;
	// bl 0x833a1ff8
	ctx.lr = 0x8340B1FC;
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

__attribute__((alias("__imp__sub_8340B20C"))) PPC_WEAK_FUNC(sub_8340B20C);
PPC_FUNC_IMPL(__imp__sub_8340B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340B210"))) PPC_WEAK_FUNC(sub_8340B210);
PPC_FUNC_IMPL(__imp__sub_8340B210) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-6148
	ctx.r4.s64 = ctx.r11.s64 + -6148;
	// addi r3,r10,-29644
	ctx.r3.s64 = ctx.r10.s64 + -29644;
	// bl 0x82e02670
	ctx.lr = 0x8340B230;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13144
	ctx.r3.s64 = ctx.r11.s64 + -13144;
	// bl 0x833a1ff8
	ctx.lr = 0x8340B23C;
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

__attribute__((alias("__imp__sub_8340B24C"))) PPC_WEAK_FUNC(sub_8340B24C);
PPC_FUNC_IMPL(__imp__sub_8340B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340B250"))) PPC_WEAK_FUNC(sub_8340B250);
PPC_FUNC_IMPL(__imp__sub_8340B250) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-6120
	ctx.r4.s64 = ctx.r11.s64 + -6120;
	// addi r3,r10,-29640
	ctx.r3.s64 = ctx.r10.s64 + -29640;
	// bl 0x82e02670
	ctx.lr = 0x8340B270;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13128
	ctx.r3.s64 = ctx.r11.s64 + -13128;
	// bl 0x833a1ff8
	ctx.lr = 0x8340B27C;
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

__attribute__((alias("__imp__sub_8340B28C"))) PPC_WEAK_FUNC(sub_8340B28C);
PPC_FUNC_IMPL(__imp__sub_8340B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340B290"))) PPC_WEAK_FUNC(sub_8340B290);
PPC_FUNC_IMPL(__imp__sub_8340B290) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-6088
	ctx.r4.s64 = ctx.r11.s64 + -6088;
	// addi r3,r10,-29636
	ctx.r3.s64 = ctx.r10.s64 + -29636;
	// bl 0x82e02670
	ctx.lr = 0x8340B2B0;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// bl 0x833a1ff8
	ctx.lr = 0x8340B2BC;
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

__attribute__((alias("__imp__sub_8340B2CC"))) PPC_WEAK_FUNC(sub_8340B2CC);
PPC_FUNC_IMPL(__imp__sub_8340B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340B2D0"))) PPC_WEAK_FUNC(sub_8340B2D0);
PPC_FUNC_IMPL(__imp__sub_8340B2D0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-6056
	ctx.r4.s64 = ctx.r11.s64 + -6056;
	// addi r3,r10,-29632
	ctx.r3.s64 = ctx.r10.s64 + -29632;
	// bl 0x82e02670
	ctx.lr = 0x8340B2F0;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// bl 0x833a1ff8
	ctx.lr = 0x8340B2FC;
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

__attribute__((alias("__imp__sub_8340B30C"))) PPC_WEAK_FUNC(sub_8340B30C);
PPC_FUNC_IMPL(__imp__sub_8340B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340B310"))) PPC_WEAK_FUNC(sub_8340B310);
PPC_FUNC_IMPL(__imp__sub_8340B310) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-6028
	ctx.r4.s64 = ctx.r11.s64 + -6028;
	// addi r3,r10,-29628
	ctx.r3.s64 = ctx.r10.s64 + -29628;
	// bl 0x82e02670
	ctx.lr = 0x8340B330;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13080
	ctx.r3.s64 = ctx.r11.s64 + -13080;
	// bl 0x833a1ff8
	ctx.lr = 0x8340B33C;
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

__attribute__((alias("__imp__sub_8340B34C"))) PPC_WEAK_FUNC(sub_8340B34C);
PPC_FUNC_IMPL(__imp__sub_8340B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340B350"))) PPC_WEAK_FUNC(sub_8340B350);
PPC_FUNC_IMPL(__imp__sub_8340B350) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-6000
	ctx.r4.s64 = ctx.r11.s64 + -6000;
	// addi r3,r10,-29624
	ctx.r3.s64 = ctx.r10.s64 + -29624;
	// bl 0x82e02670
	ctx.lr = 0x8340B370;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-13064
	ctx.r3.s64 = ctx.r11.s64 + -13064;
	// bl 0x833a1ff8
	ctx.lr = 0x8340B37C;
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

__attribute__((alias("__imp__sub_8340B38C"))) PPC_WEAK_FUNC(sub_8340B38C);
PPC_FUNC_IMPL(__imp__sub_8340B38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340B390"))) PPC_WEAK_FUNC(sub_8340B390);
PPC_FUNC_IMPL(__imp__sub_8340B390) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,25920
	ctx.r31.s64 = ctx.r10.s64 + 25920;
	// lwz r11,26280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26280);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,25920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25920, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B3BC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340B3C4;
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

__attribute__((alias("__imp__sub_8340B3D8"))) PPC_WEAK_FUNC(sub_8340B3D8);
PPC_FUNC_IMPL(__imp__sub_8340B3D8) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,26256
	ctx.r31.s64 = ctx.r10.s64 + 26256;
	// lwz r11,26280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26280);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,26256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26256, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B404;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340B40C;
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

__attribute__((alias("__imp__sub_8340B420"))) PPC_WEAK_FUNC(sub_8340B420);
PPC_FUNC_IMPL(__imp__sub_8340B420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01a0
	ctx.lr = 0x8340B428;
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,26864
	ctx.r31.s64 = ctx.r10.s64 + 26864;
	// lwz r11,25868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25868);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,26864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26864, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B454;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340B45C;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r10,-3988
	ctx.r30.s64 = ctx.r10.s64 + -3988;
	// lfs f30,24284(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stfs f29,56(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26052(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26052);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B4B8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340B4C0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f30,112(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// addi r10,r10,-4004
	ctx.r10.s64 = ctx.r10.s64 + -4004;
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lfs f0,6632(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6632);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lwz r11,25872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25872);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B508;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340B510;
	sub_82E0BE78(ctx, base);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f30,160(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f0,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lwz r11,5788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5788);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B554;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x8340B55C;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f30,208(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// addi r10,r10,-4024
	ctx.r10.s64 = ctx.r10.s64 + -4024;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26048);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B59C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x8340B5A4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r29,r11,-4048
	ctx.r29.s64 = ctx.r11.s64 + -4048;
	// stfs f30,256(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// lwz r11,25924(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25924);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B5E8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x8340B5F0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,304(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// stb r9,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r9.u8);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,25928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25928);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B62C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x8340B634;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r10,r11,-4072
	ctx.r10.s64 = ctx.r11.s64 + -4072;
	// stfs f30,352(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stb r9,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r9.u8);
	// lwz r11,25888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25888);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B674;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x8340B67C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,400(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r10,-4088
	ctx.r29.s64 = ctx.r10.s64 + -4088;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stb r9,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r9.u8);
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,25896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25896);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B6C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x8340B6C8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,448(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4108
	ctx.r10.s64 = ctx.r10.s64 + -4108;
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stb r9,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r9.u8);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// lwz r11,25900(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25900);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B708;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e0be78
	ctx.lr = 0x8340B710;
	sub_82E0BE78(ctx, base);
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stfs f29,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,496(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r29,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r29.u32);
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// lwz r11,25908(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25908);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r11.u8);
	// bl 0x82e0be78
	ctx.lr = 0x8340B74C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// bl 0x82e0be78
	ctx.lr = 0x8340B754;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,544(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r10,-4124
	ctx.r29.s64 = ctx.r10.s64 + -4124;
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stb r9,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r9.u8);
	// stw r29,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r29.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26968);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B798;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82e0be78
	ctx.lr = 0x8340B7A0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,592(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r28,r10,-4140
	ctx.r28.s64 = ctx.r10.s64 + -4140;
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f31,600(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stb r9,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r9.u8);
	// stw r28,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r28.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26972);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B7E4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x82e0be78
	ctx.lr = 0x8340B7EC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// addi r27,r11,-4160
	ctx.r27.s64 = ctx.r11.s64 + -4160;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// stfs f29,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// lwz r11,26984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26984);
	// stfs f30,640(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stfs f31,644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stw r27,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r27.u32);
	// stfs f31,648(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stb r9,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r9.u8);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B830;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82e0be78
	ctx.lr = 0x8340B838;
	sub_82E0BE78(ctx, base);
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stfs f29,680(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,688(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// addi r26,r9,-4180
	ctx.r26.s64 = ctx.r9.s64 + -4180;
	// stfs f31,692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// lwz r8,26988(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26988);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r26.u32);
	// stb r9,700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 700, ctx.r9.u8);
	// stw r8,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r8.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B87C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// bl 0x82e0be78
	ctx.lr = 0x8340B884;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,736(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// stfs f31,740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// stfs f31,744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stw r28,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r28.u32);
	// stb r9,748(r31)
	PPC_STORE_U8(ctx.r31.u32 + 748, ctx.r9.u8);
	// addi r3,r31,752
	ctx.r3.s64 = ctx.r31.s64 + 752;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26960);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B8C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x82e0be78
	ctx.lr = 0x8340B8C8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,776(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,784(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// stfs f31,788(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// stfs f31,792(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// stw r29,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r29.u32);
	// stb r9,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r9.u8);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26964(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26964);
	// stw r11,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B904;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x82e0be78
	ctx.lr = 0x8340B90C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,824(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,832(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// stfs f31,836(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// stfs f31,840(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// stw r26,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r26.u32);
	// stb r9,844(r31)
	PPC_STORE_U8(ctx.r31.u32 + 844, ctx.r9.u8);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,26976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26976);
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B948;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x82e0be78
	ctx.lr = 0x8340B950;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,880(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// stfs f31,884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f31,888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// stw r27,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r27.u32);
	// stb r9,892(r31)
	PPC_STORE_U8(ctx.r31.u32 + 892, ctx.r9.u8);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,26980(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26980);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B98C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x82e0be78
	ctx.lr = 0x8340B994;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,920(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,928(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4196
	ctx.r10.s64 = ctx.r10.s64 + -4196;
	// stfs f31,932(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// stfs f31,936(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// stb r9,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r9.u8);
	// stw r10,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r10.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// lwz r11,26620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26620);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340B9D4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// bl 0x82e0be78
	ctx.lr = 0x8340B9DC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,968(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,976(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4212
	ctx.r10.s64 = ctx.r10.s64 + -4212;
	// stfs f31,980(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// stfs f31,984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// stb r9,988(r31)
	PPC_STORE_U8(ctx.r31.u32 + 988, ctx.r9.u8);
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// lwz r11,6168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6168);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BA1C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x82e0be78
	ctx.lr = 0x8340BA24;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// stfs f29,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// addi r10,r11,-4232
	ctx.r10.s64 = ctx.r11.s64 + -4232;
	// stfs f30,1024(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,1028(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,1032(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// stw r10,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r10.u32);
	// stb r9,1036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1036, ctx.r9.u8);
	// lwz r11,6172(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6172);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BA64;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// bl 0x82e0be78
	ctx.lr = 0x8340BA6C;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1064(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// stfs f30,1072(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// addi r10,r10,-4252
	ctx.r10.s64 = ctx.r10.s64 + -4252;
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6176(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6176);
	// stfs f31,1076(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// stfs f31,1080(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// stw r10,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r10.u32);
	// stb r9,1084(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1084, ctx.r9.u8);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BAAC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1096
	ctx.r3.s64 = ctx.r31.s64 + 1096;
	// bl 0x82e0be78
	ctx.lr = 0x8340BAB4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1120(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4276
	ctx.r10.s64 = ctx.r10.s64 + -4276;
	// stfs f31,1124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stfs f31,1128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// stb r9,1132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1132, ctx.r9.u8);
	// stw r10,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r10.u32);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// lwz r11,6180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6180);
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BAF4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1144
	ctx.r3.s64 = ctx.r31.s64 + 1144;
	// bl 0x82e0be78
	ctx.lr = 0x8340BAFC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1160, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1168(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1168, temp.u32);
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r10,-4296
	ctx.r29.s64 = ctx.r10.s64 + -4296;
	// stfs f31,1172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1172, temp.u32);
	// stfs f31,1176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// stb r9,1180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1180, ctx.r9.u8);
	// stw r29,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r29.u32);
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26648);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BB40;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1192
	ctx.r3.s64 = ctx.r31.s64 + 1192;
	// bl 0x82e0be78
	ctx.lr = 0x8340BB48;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1208, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1216(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1216, temp.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// stfs f31,1220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f31,1224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// stw r29,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r29.u32);
	// stb r9,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r9.u8);
	// addi r3,r31,1232
	ctx.r3.s64 = ctx.r31.s64 + 1232;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26652);
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BB84;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1240
	ctx.r3.s64 = ctx.r31.s64 + 1240;
	// bl 0x82e0be78
	ctx.lr = 0x8340BB8C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1264(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stw r11,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// stfs f31,1268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stw r29,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r29.u32);
	// stb r9,1276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1276, ctx.r9.u8);
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26656);
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BBC8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1288
	ctx.r3.s64 = ctx.r31.s64 + 1288;
	// bl 0x82e0be78
	ctx.lr = 0x8340BBD0;
	sub_82E0BE78(ctx, base);
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// stfs f29,1304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1312(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stfs f31,1316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stw r11,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r8,-4316
	ctx.r29.s64 = ctx.r8.s64 + -4316;
	// stfs f31,1320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// lwz r11,26660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26660);
	// addi r3,r31,1328
	ctx.r3.s64 = ctx.r31.s64 + 1328;
	// stb r9,1324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1324, ctx.r9.u8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r29.u32);
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BC14;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1336
	ctx.r3.s64 = ctx.r31.s64 + 1336;
	// bl 0x82e0be78
	ctx.lr = 0x8340BC1C;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// stfs f29,1352(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// stw r11,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,1360(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// stw r29,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r29.u32);
	// stb r11,1372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1372, ctx.r11.u8);
	// stfs f31,1364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1364, temp.u32);
	// stfs f31,1368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26664(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26664);
	// stw r11,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BC58;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1384
	ctx.r3.s64 = ctx.r31.s64 + 1384;
	// bl 0x82e0be78
	ctx.lr = 0x8340BC60;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1400, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1408(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4336
	ctx.r10.s64 = ctx.r10.s64 + -4336;
	// stfs f31,1412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// stfs f31,1416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stb r9,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r9.u8);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// lwz r11,26668(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26668);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BCA0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x82e0be78
	ctx.lr = 0x8340BCA8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1448(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1456(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1456, temp.u32);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r10,-4348
	ctx.r29.s64 = ctx.r10.s64 + -4348;
	// stfs f31,1460(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1460, temp.u32);
	// stfs f31,1464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1464, temp.u32);
	// stb r9,1468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1468, ctx.r9.u8);
	// stw r29,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r29.u32);
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,25968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25968);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BCEC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// bl 0x82e0be78
	ctx.lr = 0x8340BCF4;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1496(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1496, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f30,1504(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stfs f31,1508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// lwz r11,25972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25972);
	// stfs f31,1512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stw r29,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r29.u32);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// stb r9,1516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1516, ctx.r9.u8);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BD30;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1528
	ctx.r3.s64 = ctx.r31.s64 + 1528;
	// bl 0x82e0be78
	ctx.lr = 0x8340BD38;
	sub_82E0BE78(ctx, base);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1544(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1552(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r10,-4364
	ctx.r29.s64 = ctx.r10.s64 + -4364;
	// stfs f31,1556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// stfs f31,1560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// stb r9,1564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1564, ctx.r9.u8);
	// stw r29,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r29.u32);
	// addi r3,r31,1568
	ctx.r3.s64 = ctx.r31.s64 + 1568;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,5868(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5868);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BD7C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// bl 0x82e0be78
	ctx.lr = 0x8340BD84;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1592(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1600(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// stfs f31,1604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// stfs f31,1608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// stw r29,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r29.u32);
	// stb r9,1612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1612, ctx.r9.u8);
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,25932(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25932);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BDC0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// bl 0x82e0be78
	ctx.lr = 0x8340BDC8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1640(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1648(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// stfs f31,1652(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1652, temp.u32);
	// stfs f31,1656(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1656, temp.u32);
	// stw r29,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r29.u32);
	// stb r9,1660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1660, ctx.r9.u8);
	// addi r3,r31,1664
	ctx.r3.s64 = ctx.r31.s64 + 1664;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,25936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25936);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BE04;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1672
	ctx.r3.s64 = ctx.r31.s64 + 1672;
	// bl 0x82e0be78
	ctx.lr = 0x8340BE0C;
	sub_82E0BE78(ctx, base);
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1688(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1688, temp.u32);
	// stfs f30,1696(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stw r29,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r29.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// stfs f31,1700(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// stb r11,1708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1708, ctx.r11.u8);
	// stfs f31,1704(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// addi r3,r31,1712
	ctx.r3.s64 = ctx.r31.s64 + 1712;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,25944(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25944);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BE44;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1720
	ctx.r3.s64 = ctx.r31.s64 + 1720;
	// bl 0x82e0be78
	ctx.lr = 0x8340BE4C;
	sub_82E0BE78(ctx, base);
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// addi r28,r9,-4380
	ctx.r28.s64 = ctx.r9.s64 + -4380;
	// lwz r11,25956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25956);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,1736(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1736, temp.u32);
	// stw r28,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r28.u32);
	// stfs f30,1744(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1744, temp.u32);
	// stb r9,1756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1756, ctx.r9.u8);
	// stfs f31,1748(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1748, temp.u32);
	// addi r3,r31,1760
	ctx.r3.s64 = ctx.r31.s64 + 1760;
	// stfs f31,1752(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1752, temp.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BE90;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// bl 0x82e0be78
	ctx.lr = 0x8340BE98;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1784(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1792(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1792, temp.u32);
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
	// stfs f31,1796(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1796, temp.u32);
	// stfs f31,1800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// stw r28,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r28.u32);
	// stb r9,1804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1804, ctx.r9.u8);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,25960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25960);
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BED4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1816
	ctx.r3.s64 = ctx.r31.s64 + 1816;
	// bl 0x82e0be78
	ctx.lr = 0x8340BEDC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1832(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1832, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1840(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
	// stw r11,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r11.u32);
	// stfs f31,1844(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
	// stfs f31,1848(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1848, temp.u32);
	// stw r29,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r29.u32);
	// stb r9,1852(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1852, ctx.r9.u8);
	// addi r3,r31,1856
	ctx.r3.s64 = ctx.r31.s64 + 1856;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,25948(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25948);
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BF18;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// bl 0x82e0be78
	ctx.lr = 0x8340BF20;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1880(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1880, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1888(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1888, temp.u32);
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r10,-4392
	ctx.r29.s64 = ctx.r10.s64 + -4392;
	// stfs f31,1892(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// stfs f31,1896(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// stb r9,1900(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1900, ctx.r9.u8);
	// stw r29,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r29.u32);
	// addi r3,r31,1904
	ctx.r3.s64 = ctx.r31.s64 + 1904;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,25940(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25940);
	// stw r11,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BF64;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1912
	ctx.r3.s64 = ctx.r31.s64 + 1912;
	// bl 0x82e0be78
	ctx.lr = 0x8340BF6C;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,1928(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1928, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1936(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// addi r10,r10,-4412
	ctx.r10.s64 = ctx.r10.s64 + -4412;
	// stfs f31,1940(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1940, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// stw r10,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r10.u32);
	// stb r9,1948(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1948, ctx.r9.u8);
	// lwz r11,25988(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25988);
	// stfs f31,1944(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1944, temp.u32);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// addi r3,r31,1952
	ctx.r3.s64 = ctx.r31.s64 + 1952;
	// bl 0x82e0be78
	ctx.lr = 0x8340BFAC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1960
	ctx.r3.s64 = ctx.r31.s64 + 1960;
	// bl 0x82e0be78
	ctx.lr = 0x8340BFB4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1976(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1984(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1984, temp.u32);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r28,r10,-4436
	ctx.r28.s64 = ctx.r10.s64 + -4436;
	// stfs f31,1988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1988, temp.u32);
	// stfs f31,1992(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1992, temp.u32);
	// stb r9,1996(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1996, ctx.r9.u8);
	// stw r28,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r28.u32);
	// addi r3,r31,2000
	ctx.r3.s64 = ctx.r31.s64 + 2000;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,6128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6128);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340BFF8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2008
	ctx.r3.s64 = ctx.r31.s64 + 2008;
	// bl 0x82e0be78
	ctx.lr = 0x8340C000;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2024(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2024, temp.u32);
	// addi r27,r10,-4468
	ctx.r27.s64 = ctx.r10.s64 + -4468;
	// stfs f30,2032(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// stw r11,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r11.u32);
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stfs f31,2036(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2036, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,2040(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
	// stw r27,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r27.u32);
	// addi r3,r31,2048
	ctx.r3.s64 = ctx.r31.s64 + 2048;
	// stb r11,2044(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2044, ctx.r11.u8);
	// lwz r11,26256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26256);
	// stw r11,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C044;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2056
	ctx.r3.s64 = ctx.r31.s64 + 2056;
	// bl 0x82e0be78
	ctx.lr = 0x8340C04C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2072(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2072, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2080(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2080, temp.u32);
	// stw r11,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r26,r10,-4496
	ctx.r26.s64 = ctx.r10.s64 + -4496;
	// stfs f31,2084(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2084, temp.u32);
	// stfs f31,2088(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2088, temp.u32);
	// stb r9,2092(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2092, ctx.r9.u8);
	// stw r26,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r26.u32);
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,26260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26260);
	// stw r11,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C090;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2104
	ctx.r3.s64 = ctx.r31.s64 + 2104;
	// bl 0x82e0be78
	ctx.lr = 0x8340C098;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2120, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2128(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2128, temp.u32);
	// stw r11,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// stfs f31,2132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2132, temp.u32);
	// stfs f31,2136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// stw r27,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r27.u32);
	// stb r9,2140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2140, ctx.r9.u8);
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,26264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26264);
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C0D4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2152
	ctx.r3.s64 = ctx.r31.s64 + 2152;
	// bl 0x82e0be78
	ctx.lr = 0x8340C0DC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2168, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2176(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2176, temp.u32);
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
	// stfs f31,2180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2180, temp.u32);
	// lwz r11,26268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26268);
	// stfs f31,2184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2184, temp.u32);
	// stw r27,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r27.u32);
	// addi r3,r31,2192
	ctx.r3.s64 = ctx.r31.s64 + 2192;
	// stb r9,2188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2188, ctx.r9.u8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r11,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C118;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2200
	ctx.r3.s64 = ctx.r31.s64 + 2200;
	// bl 0x82e0be78
	ctx.lr = 0x8340C120;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2216, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2224(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2224, temp.u32);
	// stw r11,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r11.u32);
	// stfs f31,2228(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2228, temp.u32);
	// stfs f31,2232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2232, temp.u32);
	// stw r28,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r28.u32);
	// stb r9,2236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2236, ctx.r9.u8);
	// addi r3,r31,2240
	ctx.r3.s64 = ctx.r31.s64 + 2240;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26272);
	// stw r11,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C15C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2248
	ctx.r3.s64 = ctx.r31.s64 + 2248;
	// bl 0x82e0be78
	ctx.lr = 0x8340C164;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2264(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2264, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2272(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2272, temp.u32);
	// stw r11,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r11.u32);
	// stfs f31,2276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2276, temp.u32);
	// stfs f31,2280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2280, temp.u32);
	// stw r28,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r28.u32);
	// stb r9,2284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2284, ctx.r9.u8);
	// addi r3,r31,2288
	ctx.r3.s64 = ctx.r31.s64 + 2288;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26276(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26276);
	// stw r11,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C1A0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2296
	ctx.r3.s64 = ctx.r31.s64 + 2296;
	// bl 0x82e0be78
	ctx.lr = 0x8340C1A8;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,2312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2312, temp.u32);
	// addi r11,r11,-4516
	ctx.r11.s64 = ctx.r11.s64 + -4516;
	// stfs f30,2320(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2320, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,2324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2324, temp.u32);
	// stw r11,2308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2308, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,2328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2328, temp.u32);
	// stw r10,2316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2316, ctx.r10.u32);
	// stb r9,2332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2332, ctx.r9.u8);
	// addi r3,r31,2336
	ctx.r3.s64 = ctx.r31.s64 + 2336;
	// lwz r11,26424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26424);
	// stw r11,2304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2304, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C1E8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2344
	ctx.r3.s64 = ctx.r31.s64 + 2344;
	// bl 0x82e0be78
	ctx.lr = 0x8340C1F0;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// stfs f29,2360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2360, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,2368(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2368, temp.u32);
	// addi r10,r10,-4536
	ctx.r10.s64 = ctx.r10.s64 + -4536;
	// stfs f31,2372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2372, temp.u32);
	// stw r11,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r11.u32);
	// stfs f31,2376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2376, temp.u32);
	// stb r11,2380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2380, ctx.r11.u8);
	// addi r3,r31,2384
	ctx.r3.s64 = ctx.r31.s64 + 2384;
	// stw r10,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r10.u32);
	// lwz r11,26596(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26596);
	// stw r11,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C22C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2392
	ctx.r3.s64 = ctx.r31.s64 + 2392;
	// bl 0x82e0be78
	ctx.lr = 0x8340C234;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2408(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2408, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2416(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2416, temp.u32);
	// stw r11,2412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2412, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4560
	ctx.r10.s64 = ctx.r10.s64 + -4560;
	// stfs f31,2420(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2420, temp.u32);
	// stfs f31,2424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2424, temp.u32);
	// stb r9,2428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2428, ctx.r9.u8);
	// stw r10,2404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2404, ctx.r10.u32);
	// addi r3,r31,2432
	ctx.r3.s64 = ctx.r31.s64 + 2432;
	// lwz r11,26076(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26076);
	// stw r11,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C274;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2440
	ctx.r3.s64 = ctx.r31.s64 + 2440;
	// bl 0x82e0be78
	ctx.lr = 0x8340C27C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2456(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2464(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2464, temp.u32);
	// stw r11,2460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2460, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r28,r10,-4576
	ctx.r28.s64 = ctx.r10.s64 + -4576;
	// stfs f31,2468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2468, temp.u32);
	// stfs f31,2472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// stb r9,2476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2476, ctx.r9.u8);
	// stw r28,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r28.u32);
	// addi r3,r31,2480
	ctx.r3.s64 = ctx.r31.s64 + 2480;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26352);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C2C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2488
	ctx.r3.s64 = ctx.r31.s64 + 2488;
	// bl 0x82e0be78
	ctx.lr = 0x8340C2C8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2504(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2504, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2512(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2512, temp.u32);
	// stw r11,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r10,-4596
	ctx.r27.s64 = ctx.r10.s64 + -4596;
	// stfs f31,2516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2516, temp.u32);
	// stfs f31,2520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2520, temp.u32);
	// stb r9,2524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2524, ctx.r9.u8);
	// stw r27,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r27.u32);
	// addi r3,r31,2528
	ctx.r3.s64 = ctx.r31.s64 + 2528;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,26356(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26356);
	// stw r11,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C30C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82e0be78
	ctx.lr = 0x8340C314;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2552, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2560(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// stw r11,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4612
	ctx.r10.s64 = ctx.r10.s64 + -4612;
	// stfs f31,2564(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2564, temp.u32);
	// stfs f31,2568(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2568, temp.u32);
	// stb r9,2572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2572, ctx.r9.u8);
	// stw r10,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r10.u32);
	// addi r3,r31,2576
	ctx.r3.s64 = ctx.r31.s64 + 2576;
	// lwz r11,26360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26360);
	// stw r11,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C354;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2584
	ctx.r3.s64 = ctx.r31.s64 + 2584;
	// bl 0x82e0be78
	ctx.lr = 0x8340C35C;
	sub_82E0BE78(ctx, base);
	// stfs f29,2600(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2600, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26364(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26364);
	// stfs f30,2608(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2608, temp.u32);
	// stfs f31,2612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2612, temp.u32);
	// stw r28,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r28.u32);
	// stfs f31,2616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2616, temp.u32);
	// stb r9,2620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2620, ctx.r9.u8);
	// addi r3,r31,2624
	ctx.r3.s64 = ctx.r31.s64 + 2624;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C398;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2632
	ctx.r3.s64 = ctx.r31.s64 + 2632;
	// bl 0x82e0be78
	ctx.lr = 0x8340C3A0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2648(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2648, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2656(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2656, temp.u32);
	// stw r11,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
	// stfs f31,2660(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2660, temp.u32);
	// stfs f31,2664(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2664, temp.u32);
	// stw r27,2644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2644, ctx.r27.u32);
	// stb r9,2668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2668, ctx.r9.u8);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,26368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26368);
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C3DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2680
	ctx.r3.s64 = ctx.r31.s64 + 2680;
	// bl 0x82e0be78
	ctx.lr = 0x8340C3E4;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// stfs f29,2696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2696, temp.u32);
	// stw r11,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f30,2704(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2704, temp.u32);
	// stb r11,2716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2716, ctx.r11.u8);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f31,2712(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2712, temp.u32);
	// addi r3,r31,2720
	ctx.r3.s64 = ctx.r31.s64 + 2720;
	// addi r10,r10,-4628
	ctx.r10.s64 = ctx.r10.s64 + -4628;
	// lfs f0,472(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,2692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2692, ctx.r10.u32);
	// stfs f0,2708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2708, temp.u32);
	// lwz r11,26372(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26372);
	// stw r11,2688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2688, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C42C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2728
	ctx.r3.s64 = ctx.r31.s64 + 2728;
	// bl 0x82e0be78
	ctx.lr = 0x8340C434;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stfs f29,2744(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2744, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,2752(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2752, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,2756(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2756, temp.u32);
	// stfs f31,2760(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2760, temp.u32);
	// stw r26,2740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2740, ctx.r26.u32);
	// stw r10,2748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2748, ctx.r10.u32);
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// stb r9,2764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2764, ctx.r9.u8);
	// lwz r11,26376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26376);
	// stw r11,2736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2736, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C470;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2776
	ctx.r3.s64 = ctx.r31.s64 + 2776;
	// bl 0x82e0be78
	ctx.lr = 0x8340C478;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,2792(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2792, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,2800(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2800, temp.u32);
	// addi r10,r10,-4648
	ctx.r10.s64 = ctx.r10.s64 + -4648;
	// stfs f31,2804(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2804, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r11.u32);
	// stfs f31,2808(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2808, temp.u32);
	// stw r10,2788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2788, ctx.r10.u32);
	// stb r9,2812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2812, ctx.r9.u8);
	// lwz r11,26380(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26380);
	// stw r11,2784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2784, ctx.r11.u32);
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// bl 0x82e0be78
	ctx.lr = 0x8340C4B8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2824
	ctx.r3.s64 = ctx.r31.s64 + 2824;
	// bl 0x82e0be78
	ctx.lr = 0x8340C4C0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2840(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2840, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2848(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2848, temp.u32);
	// stw r11,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4672
	ctx.r10.s64 = ctx.r10.s64 + -4672;
	// stfs f31,2852(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2852, temp.u32);
	// stfs f31,2856(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2856, temp.u32);
	// stb r9,2860(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2860, ctx.r9.u8);
	// stw r10,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r10.u32);
	// addi r3,r31,2864
	ctx.r3.s64 = ctx.r31.s64 + 2864;
	// lwz r11,26384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26384);
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C500;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2872
	ctx.r3.s64 = ctx.r31.s64 + 2872;
	// bl 0x82e0be78
	ctx.lr = 0x8340C508;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,2888(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2888, temp.u32);
	// addi r10,r11,-4688
	ctx.r10.s64 = ctx.r11.s64 + -4688;
	// stfs f30,2896(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2896, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,2900(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2900, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,2904(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2904, temp.u32);
	// stw r11,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r11.u32);
	// addi r3,r31,2912
	ctx.r3.s64 = ctx.r31.s64 + 2912;
	// stw r10,2884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2884, ctx.r10.u32);
	// stb r9,2908(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2908, ctx.r9.u8);
	// lwz r11,26388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26388);
	// stw r11,2880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2880, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C548;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2920
	ctx.r3.s64 = ctx.r31.s64 + 2920;
	// bl 0x82e0be78
	ctx.lr = 0x8340C550;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2936(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2936, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2944(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2944, temp.u32);
	// stw r11,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4704
	ctx.r10.s64 = ctx.r10.s64 + -4704;
	// stfs f31,2948(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2948, temp.u32);
	// stfs f31,2952(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2952, temp.u32);
	// stb r9,2956(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2956, ctx.r9.u8);
	// stw r10,2932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2932, ctx.r10.u32);
	// addi r3,r31,2960
	ctx.r3.s64 = ctx.r31.s64 + 2960;
	// lwz r11,26392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26392);
	// stw r11,2928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2928, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C590;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2968
	ctx.r3.s64 = ctx.r31.s64 + 2968;
	// bl 0x82e0be78
	ctx.lr = 0x8340C598;
	sub_82E0BE78(ctx, base);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2984(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2984, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2992(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2992, temp.u32);
	// stw r11,2988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2988, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4720
	ctx.r10.s64 = ctx.r10.s64 + -4720;
	// stfs f31,2996(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2996, temp.u32);
	// stfs f31,3000(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3000, temp.u32);
	// stb r9,3004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3004, ctx.r9.u8);
	// stw r10,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r10.u32);
	// addi r3,r31,3008
	ctx.r3.s64 = ctx.r31.s64 + 3008;
	// lwz r11,5864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5864);
	// stw r11,2976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2976, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C5D8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3016
	ctx.r3.s64 = ctx.r31.s64 + 3016;
	// bl 0x82e0be78
	ctx.lr = 0x8340C5E0;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,10064(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10064);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31886
	ctx.r9.s64 = -2089680896;
	// stw r11,3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3036, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,3040(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3040, temp.u32);
	// addi r10,r10,-4736
	ctx.r10.s64 = ctx.r10.s64 + -4736;
	// stfs f31,3044(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3044, temp.u32);
	// stb r11,3052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3052, ctx.r11.u8);
	// stfs f0,3032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3032, temp.u32);
	// stfs f31,3048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3048, temp.u32);
	// stw r10,3028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3028, ctx.r10.u32);
	// lwz r11,5876(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5876);
	// addi r3,r31,3056
	ctx.r3.s64 = ctx.r31.s64 + 3056;
	// stw r11,3024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3024, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C628;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3064
	ctx.r3.s64 = ctx.r31.s64 + 3064;
	// bl 0x82e0be78
	ctx.lr = 0x8340C630;
	sub_82E0BE78(ctx, base);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,3088(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3088, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,3092(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3092, temp.u32);
	// stw r11,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r11.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,3096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3096, temp.u32);
	// addi r10,r10,-4752
	ctx.r10.s64 = ctx.r10.s64 + -4752;
	// stb r9,3100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3100, ctx.r9.u8);
	// addi r3,r31,3104
	ctx.r3.s64 = ctx.r31.s64 + 3104;
	// lfs f0,20356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20356);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r10.u32);
	// stfs f0,3080(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3080, temp.u32);
	// lwz r11,5880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5880);
	// stw r11,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C678;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3112
	ctx.r3.s64 = ctx.r31.s64 + 3112;
	// bl 0x82e0be78
	ctx.lr = 0x8340C680;
	sub_82E0BE78(ctx, base);
	// lis r8,-31886
	ctx.r8.s64 = -2089680896;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3128, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3136(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3136, temp.u32);
	// stw r11,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r11.u32);
	// stfs f31,3140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3140, temp.u32);
	// stfs f31,3144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3144, temp.u32);
	// stw r29,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r29.u32);
	// stb r9,3148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3148, ctx.r9.u8);
	// addi r3,r31,3152
	ctx.r3.s64 = ctx.r31.s64 + 3152;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,5884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5884);
	// stw r11,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C6BC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3160
	ctx.r3.s64 = ctx.r31.s64 + 3160;
	// bl 0x82e0be78
	ctx.lr = 0x8340C6C4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3176, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3184(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3184, temp.u32);
	// stw r11,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4772
	ctx.r10.s64 = ctx.r10.s64 + -4772;
	// stfs f31,3188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3188, temp.u32);
	// stfs f31,3192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3192, temp.u32);
	// stb r9,3196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3196, ctx.r9.u8);
	// stw r10,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r10.u32);
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// lwz r11,26396(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26396);
	// stw r11,3168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3168, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C704;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3208
	ctx.r3.s64 = ctx.r31.s64 + 3208;
	// bl 0x82e0be78
	ctx.lr = 0x8340C70C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,3224(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3224, temp.u32);
	// addi r11,r11,-4792
	ctx.r11.s64 = ctx.r11.s64 + -4792;
	// stfs f30,3232(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3232, temp.u32);
	// stfs f31,3236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3236, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26400);
	// stfs f31,3240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3240, temp.u32);
	// stw r10,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r10.u32);
	// stb r9,3244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3244, ctx.r9.u8);
	// addi r3,r31,3248
	ctx.r3.s64 = ctx.r31.s64 + 3248;
	// stw r11,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C74C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x82e0be78
	ctx.lr = 0x8340C754;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3272, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3280(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// stw r11,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4816
	ctx.r10.s64 = ctx.r10.s64 + -4816;
	// stfs f31,3284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// stfs f31,3288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// stb r9,3292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3292, ctx.r9.u8);
	// stw r10,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r10.u32);
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// lwz r11,26404(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26404);
	// stw r11,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C794;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3304
	ctx.r3.s64 = ctx.r31.s64 + 3304;
	// bl 0x82e0be78
	ctx.lr = 0x8340C79C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3328(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4840
	ctx.r10.s64 = ctx.r10.s64 + -4840;
	// stfs f31,3332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// stfs f31,3336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3336, temp.u32);
	// stb r9,3340(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3340, ctx.r9.u8);
	// stw r10,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r10.u32);
	// addi r3,r31,3344
	ctx.r3.s64 = ctx.r31.s64 + 3344;
	// lwz r11,26408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26408);
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C7DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3352
	ctx.r3.s64 = ctx.r31.s64 + 3352;
	// bl 0x82e0be78
	ctx.lr = 0x8340C7E4;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// stfs f29,3368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3368, temp.u32);
	// stw r11,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3376(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3376, temp.u32);
	// stb r11,3388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3388, ctx.r11.u8);
	// stfs f31,3380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3380, temp.u32);
	// addi r10,r10,-4864
	ctx.r10.s64 = ctx.r10.s64 + -4864;
	// stfs f31,3384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3384, temp.u32);
	// addi r3,r31,3392
	ctx.r3.s64 = ctx.r31.s64 + 3392;
	// stw r10,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r10.u32);
	// lwz r11,26412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26412);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C824;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3400
	ctx.r3.s64 = ctx.r31.s64 + 3400;
	// bl 0x82e0be78
	ctx.lr = 0x8340C82C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3416(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3416, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3424(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3424, temp.u32);
	// stw r11,3420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3420, ctx.r11.u32);
	// stfs f31,3428(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3428, temp.u32);
	// stfs f31,3432(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3432, temp.u32);
	// stw r30,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r30.u32);
	// stb r9,3436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3436, ctx.r9.u8);
	// addi r3,r31,3440
	ctx.r3.s64 = ctx.r31.s64 + 3440;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,27132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27132);
	// stw r11,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C868;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3448
	ctx.r3.s64 = ctx.r31.s64 + 3448;
	// bl 0x82e0be78
	ctx.lr = 0x8340C870;
	sub_82E0BE78(ctx, base);
	// stfs f29,3464(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3464, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,3472(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// stw r11,3468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3468, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27136);
	// addi r10,r10,-4884
	ctx.r10.s64 = ctx.r10.s64 + -4884;
	// stfs f31,3480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3480, temp.u32);
	// stb r9,3484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3484, ctx.r9.u8);
	// stw r10,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r10.u32);
	// addi r3,r31,3488
	ctx.r3.s64 = ctx.r31.s64 + 3488;
	// stw r11,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C8B0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3496
	ctx.r3.s64 = ctx.r31.s64 + 3496;
	// bl 0x82e0be78
	ctx.lr = 0x8340C8B8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3512, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3520(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3520, temp.u32);
	// stw r11,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4904
	ctx.r10.s64 = ctx.r10.s64 + -4904;
	// stfs f31,3524(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3524, temp.u32);
	// stfs f31,3528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3528, temp.u32);
	// stb r9,3532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3532, ctx.r9.u8);
	// stw r10,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r10.u32);
	// addi r3,r31,3536
	ctx.r3.s64 = ctx.r31.s64 + 3536;
	// lwz r11,27144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27144);
	// stw r11,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C8F8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3544
	ctx.r3.s64 = ctx.r31.s64 + 3544;
	// bl 0x82e0be78
	ctx.lr = 0x8340C900;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,3560(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3560, temp.u32);
	// addi r10,r11,-4924
	ctx.r10.s64 = ctx.r11.s64 + -4924;
	// stfs f30,3568(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3568, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,3572(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3572, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,3576(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3576, temp.u32);
	// stw r11,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r11.u32);
	// addi r3,r31,3584
	ctx.r3.s64 = ctx.r31.s64 + 3584;
	// stw r10,3556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3556, ctx.r10.u32);
	// stb r9,3580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3580, ctx.r9.u8);
	// lwz r11,27140(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27140);
	// stw r11,3552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3552, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C940;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3592
	ctx.r3.s64 = ctx.r31.s64 + 3592;
	// bl 0x82e0be78
	ctx.lr = 0x8340C948;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3608(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3608, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3616(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3616, temp.u32);
	// stw r11,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4944
	ctx.r10.s64 = ctx.r10.s64 + -4944;
	// stfs f31,3620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3620, temp.u32);
	// stfs f31,3624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3624, temp.u32);
	// stb r9,3628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3628, ctx.r9.u8);
	// stw r10,3604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3604, ctx.r10.u32);
	// addi r3,r31,3632
	ctx.r3.s64 = ctx.r31.s64 + 3632;
	// lwz r11,26416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26416);
	// stw r11,3600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3600, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340C988;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3640
	ctx.r3.s64 = ctx.r31.s64 + 3640;
	// bl 0x82e0be78
	ctx.lr = 0x8340C990;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,3656(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// addi r11,r11,-4968
	ctx.r11.s64 = ctx.r11.s64 + -4968;
	// stfs f30,3664(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3664, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,3668(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3668, temp.u32);
	// stw r11,3652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3652, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,3660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3660, ctx.r10.u32);
	// lwz r11,26420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26420);
	// stfs f31,3672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3672, temp.u32);
	// stb r9,3676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3676, ctx.r9.u8);
	// stw r11,3648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3648, ctx.r11.u32);
	// addi r3,r31,3680
	ctx.r3.s64 = ctx.r31.s64 + 3680;
	// bl 0x82e0be78
	ctx.lr = 0x8340C9D0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3688
	ctx.r3.s64 = ctx.r31.s64 + 3688;
	// bl 0x82e0be78
	ctx.lr = 0x8340C9D8;
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

__attribute__((alias("__imp__sub_8340C9EC"))) PPC_WEAK_FUNC(sub_8340C9EC);
PPC_FUNC_IMPL(__imp__sub_8340C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340C9F0"))) PPC_WEAK_FUNC(sub_8340C9F0);
PPC_FUNC_IMPL(__imp__sub_8340C9F0) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,30560
	ctx.r31.s64 = ctx.r10.s64 + 30560;
	// lwz r11,26080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26080);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,30560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30560, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CA28;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340CA30;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-3952
	ctx.r10.s64 = ctx.r10.s64 + -3952;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26100);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CA88;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340CA90;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3972
	ctx.r10.s64 = ctx.r10.s64 + -3972;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26120);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CAD0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340CAD8;
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

__attribute__((alias("__imp__sub_8340CAF8"))) PPC_WEAK_FUNC(sub_8340CAF8);
PPC_FUNC_IMPL(__imp__sub_8340CAF8) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,30704
	ctx.r31.s64 = ctx.r10.s64 + 30704;
	// lwz r11,26084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26084);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,30704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30704, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CB30;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340CB38;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-3916
	ctx.r10.s64 = ctx.r10.s64 + -3916;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26104);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CB90;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340CB98;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3936
	ctx.r10.s64 = ctx.r10.s64 + -3936;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26124);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CBD8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340CBE0;
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

__attribute__((alias("__imp__sub_8340CC00"))) PPC_WEAK_FUNC(sub_8340CC00);
PPC_FUNC_IMPL(__imp__sub_8340CC00) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,30848
	ctx.r31.s64 = ctx.r10.s64 + 30848;
	// lwz r11,26088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26088);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,30848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30848, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CC38;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340CC40;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-3880
	ctx.r10.s64 = ctx.r10.s64 + -3880;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26108);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CC98;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340CCA0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3900
	ctx.r10.s64 = ctx.r10.s64 + -3900;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26128);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CCE0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340CCE8;
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

__attribute__((alias("__imp__sub_8340CD08"))) PPC_WEAK_FUNC(sub_8340CD08);
PPC_FUNC_IMPL(__imp__sub_8340CD08) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,30992
	ctx.r31.s64 = ctx.r10.s64 + 30992;
	// lwz r11,26092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26092);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,30992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30992, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CD40;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340CD48;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-3844
	ctx.r10.s64 = ctx.r10.s64 + -3844;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26112);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CDA0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340CDA8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3864
	ctx.r10.s64 = ctx.r10.s64 + -3864;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26132);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CDE8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340CDF0;
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

__attribute__((alias("__imp__sub_8340CE10"))) PPC_WEAK_FUNC(sub_8340CE10);
PPC_FUNC_IMPL(__imp__sub_8340CE10) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,31136
	ctx.r31.s64 = ctx.r10.s64 + 31136;
	// lwz r11,26096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26096);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,31136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31136, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CE48;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340CE50;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-3808
	ctx.r10.s64 = ctx.r10.s64 + -3808;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26116(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26116);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CEA8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340CEB0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3828
	ctx.r10.s64 = ctx.r10.s64 + -3828;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26136);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CEF0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340CEF8;
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

__attribute__((alias("__imp__sub_8340CF18"))) PPC_WEAK_FUNC(sub_8340CF18);
PPC_FUNC_IMPL(__imp__sub_8340CF18) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,31280
	ctx.r31.s64 = ctx.r10.s64 + 31280;
	// lwz r11,25868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25868);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,31280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31280, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CF54;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340CF5C;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f30,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r10,-3988
	ctx.r30.s64 = ctx.r10.s64 + -3988;
	// lfs f29,24284(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,27084(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27084);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340CFB8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340CFC0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3712
	ctx.r10.s64 = ctx.r10.s64 + -3712;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,25884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25884);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D000;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340D008;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,27088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D044;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x8340D04C;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// lwz r11,26280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26280);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D088;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x8340D090;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-3728
	ctx.r11.s64 = ctx.r11.s64 + -3728;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lwz r11,27092(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27092);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D0D0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x8340D0D8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3752
	ctx.r10.s64 = ctx.r10.s64 + -3752;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stb r9,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r9.u8);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// lwz r11,27096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27096);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D118;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x8340D120;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// addi r10,r10,-3772
	ctx.r10.s64 = ctx.r10.s64 + -3772;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// lwz r11,27100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27100);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D160;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x8340D168;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,400(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3792
	ctx.r10.s64 = ctx.r10.s64 + -3792;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stb r9,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r9.u8);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r11,27104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27104);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D1A8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x8340D1B0;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4364
	ctx.r10.s64 = ctx.r10.s64 + -4364;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27108);
	// stfs f30,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f29,448(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stb r9,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r9.u8);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D1F0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e0be78
	ctx.lr = 0x8340D1F8;
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

__attribute__((alias("__imp__sub_8340D21C"))) PPC_WEAK_FUNC(sub_8340D21C);
PPC_FUNC_IMPL(__imp__sub_8340D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340D220"))) PPC_WEAK_FUNC(sub_8340D220);
PPC_FUNC_IMPL(__imp__sub_8340D220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x8340D228;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x833a18f0
	ctx.lr = 0x8340D230;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// addi r31,r10,32320
	ctx.r31.s64 = ctx.r10.s64 + 32320;
	// lwz r11,25868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25868);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,32320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32320, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D250;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340D258;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r10,-2144
	ctx.r30.s64 = ctx.r10.s64 + -2144;
	// lfs f30,24284(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stfs f29,56(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26052(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26052);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D2B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340D2BC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f30,112(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// addi r10,r10,-2160
	ctx.r10.s64 = ctx.r10.s64 + -2160;
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lfs f0,6632(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6632);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lwz r11,25872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25872);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D304;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340D30C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f30,160(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f27,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f27.f64 = double(temp.f32);
	// stfs f27,168(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lwz r11,17716(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17716);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D350;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x8340D358;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stfs f29,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// addi r29,r11,-2176
	ctx.r29.s64 = ctx.r11.s64 + -2176;
	// stfs f30,208(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25884);
	// lfs f0,12220(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D3A4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x8340D3AC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-2192
	ctx.r11.s64 = ctx.r11.s64 + -2192;
	// stfs f30,256(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lwz r11,25900(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25900);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D3EC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x8340D3F4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,304(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2208
	ctx.r10.s64 = ctx.r10.s64 + -2208;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stb r9,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r9.u8);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// lwz r11,25908(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25908);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D434;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x8340D43C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,352(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2232
	ctx.r10.s64 = ctx.r10.s64 + -2232;
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stb r9,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r9.u8);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// lwz r11,25924(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25924);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D47C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x8340D484;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// addi r28,r10,-2248
	ctx.r28.s64 = ctx.r10.s64 + -2248;
	// stfs f30,400(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r28,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stb r9,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r9.u8);
	// lwz r11,26968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26968);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D4C8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x8340D4D0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,448(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r10,-2264
	ctx.r27.s64 = ctx.r10.s64 + -2264;
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stb r9,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r9.u8);
	// stw r27,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r27.u32);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,26972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26972);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D514;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e0be78
	ctx.lr = 0x8340D51C;
	sub_82E0BE78(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f30,496(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stw r28,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r28.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stb r9,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r9.u8);
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26984);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D558;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// bl 0x82e0be78
	ctx.lr = 0x8340D560;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,544(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stw r27,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r27.u32);
	// stb r9,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r9.u8);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,26988(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26988);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D59C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82e0be78
	ctx.lr = 0x8340D5A4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,592(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f31,600(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stw r27,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r27.u32);
	// stb r9,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r9.u8);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,26960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26960);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D5E0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x82e0be78
	ctx.lr = 0x8340D5E8;
	sub_82E0BE78(ctx, base);
	// stfs f29,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stfs f30,640(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// stfs f31,644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// lwz r11,26964(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26964);
	// stfs f31,648(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stw r28,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r28.u32);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// stb r9,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r9.u8);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D624;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82e0be78
	ctx.lr = 0x8340D62C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,680(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,688(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// stfs f31,692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// stfs f31,696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r27,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r27.u32);
	// stb r9,700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 700, ctx.r9.u8);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,26976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26976);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D668;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// bl 0x82e0be78
	ctx.lr = 0x8340D670;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,736(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// stfs f31,740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// stfs f31,744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stw r28,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r28.u32);
	// stb r9,748(r31)
	PPC_STORE_U8(ctx.r31.u32 + 748, ctx.r9.u8);
	// addi r3,r31,752
	ctx.r3.s64 = ctx.r31.s64 + 752;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26980(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26980);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D6AC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x82e0be78
	ctx.lr = 0x8340D6B4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,776(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,784(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r28,r10,-2280
	ctx.r28.s64 = ctx.r10.s64 + -2280;
	// stfs f31,788(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// stfs f31,792(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// stb r9,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r9.u8);
	// stw r28,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r28.u32);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,25932(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25932);
	// stw r11,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D6F8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x82e0be78
	ctx.lr = 0x8340D700;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,824(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,832(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// stfs f31,836(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// stfs f31,840(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// stw r28,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r28.u32);
	// stb r9,844(r31)
	PPC_STORE_U8(ctx.r31.u32 + 844, ctx.r9.u8);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,25936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25936);
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D73C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x82e0be78
	ctx.lr = 0x8340D744;
	sub_82E0BE78(ctx, base);
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// stfs f29,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,880(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stfs f31,884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r8,-2292
	ctx.r27.s64 = ctx.r8.s64 + -2292;
	// stfs f31,888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// lwz r11,25940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25940);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// stb r9,892(r31)
	PPC_STORE_U8(ctx.r31.u32 + 892, ctx.r9.u8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r27.u32);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D788;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x82e0be78
	ctx.lr = 0x8340D790;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,920(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,928(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r26,r10,-2308
	ctx.r26.s64 = ctx.r10.s64 + -2308;
	// stfs f31,932(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// stfs f31,936(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// stb r9,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r9.u8);
	// stw r26,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r26.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,25944(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25944);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D7D4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// bl 0x82e0be78
	ctx.lr = 0x8340D7DC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,968(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,976(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2324
	ctx.r10.s64 = ctx.r10.s64 + -2324;
	// stfs f31,980(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// stfs f31,984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// stb r9,988(r31)
	PPC_STORE_U8(ctx.r31.u32 + 988, ctx.r9.u8);
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// lwz r11,25948(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25948);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D81C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x82e0be78
	ctx.lr = 0x8340D824;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1024(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r25,r10,-2340
	ctx.r25.s64 = ctx.r10.s64 + -2340;
	// stfs f31,1028(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// stfs f31,1032(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// stb r9,1036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1036, ctx.r9.u8);
	// stw r25,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r25.u32);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,25956(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25956);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D868;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// bl 0x82e0be78
	ctx.lr = 0x8340D870;
	sub_82E0BE78(ctx, base);
	// stfs f29,1064(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// stfs f30,1072(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// stfs f31,1076(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// lwz r11,25960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25960);
	// stfs f31,1080(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// stw r25,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r25.u32);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// stb r9,1084(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1084, ctx.r9.u8);
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D8AC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1096
	ctx.r3.s64 = ctx.r31.s64 + 1096;
	// bl 0x82e0be78
	ctx.lr = 0x8340D8B4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1120(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// stfs f31,1124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stfs f31,1128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// stw r25,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r25.u32);
	// stb r9,1132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1132, ctx.r9.u8);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,25964(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25964);
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D8F0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1144
	ctx.r3.s64 = ctx.r31.s64 + 1144;
	// bl 0x82e0be78
	ctx.lr = 0x8340D8F8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1160, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1168(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1168, temp.u32);
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r24,r10,-2352
	ctx.r24.s64 = ctx.r10.s64 + -2352;
	// stfs f31,1172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1172, temp.u32);
	// stfs f31,1176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// stb r9,1180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1180, ctx.r9.u8);
	// stw r24,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r24.u32);
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,25968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25968);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D93C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1192
	ctx.r3.s64 = ctx.r31.s64 + 1192;
	// bl 0x82e0be78
	ctx.lr = 0x8340D944;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1208, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1216(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1216, temp.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// stfs f31,1220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f31,1224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// stw r24,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r24.u32);
	// stb r9,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r9.u8);
	// addi r3,r31,1232
	ctx.r3.s64 = ctx.r31.s64 + 1232;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,25972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25972);
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D980;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1240
	ctx.r3.s64 = ctx.r31.s64 + 1240;
	// bl 0x82e0be78
	ctx.lr = 0x8340D988;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1264(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stw r11,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2368
	ctx.r10.s64 = ctx.r10.s64 + -2368;
	// stfs f31,1268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stb r9,1276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1276, ctx.r9.u8);
	// stw r10,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r10.u32);
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// lwz r11,17804(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17804);
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340D9C8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1288
	ctx.r3.s64 = ctx.r31.s64 + 1288;
	// bl 0x82e0be78
	ctx.lr = 0x8340D9D0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stfs f31,1316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stw r11,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r11.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,1320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// addi r10,r10,-2384
	ctx.r10.s64 = ctx.r10.s64 + -2384;
	// stb r9,1324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1324, ctx.r9.u8);
	// addi r3,r31,1328
	ctx.r3.s64 = ctx.r31.s64 + 1328;
	// lfs f28,10064(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10064);
	ctx.f28.f64 = double(temp.f32);
	// stw r10,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r10.u32);
	// stfs f28,1304(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// lwz r11,17808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17808);
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DA18;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1336
	ctx.r3.s64 = ctx.r31.s64 + 1336;
	// bl 0x82e0be78
	ctx.lr = 0x8340DA20;
	sub_82E0BE78(ctx, base);
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stfs f30,1360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,1364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1364, temp.u32);
	// addi r10,r11,-2400
	ctx.r10.s64 = ctx.r11.s64 + -2400;
	// stfs f31,1368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,17812(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17812);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r11.u32);
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// lfs f26,20356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20356);
	ctx.f26.f64 = double(temp.f32);
	// stw r10,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r10.u32);
	// stfs f26,1352(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// stb r9,1372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1372, ctx.r9.u8);
	// stw r8,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r8.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DA68;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1384
	ctx.r3.s64 = ctx.r31.s64 + 1384;
	// bl 0x82e0be78
	ctx.lr = 0x8340DA70;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1400, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1408(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2416
	ctx.r10.s64 = ctx.r10.s64 + -2416;
	// stfs f31,1412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// stfs f31,1416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stb r9,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r9.u8);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// lwz r11,17816(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17816);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DAB0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x82e0be78
	ctx.lr = 0x8340DAB8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1448(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1456(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1456, temp.u32);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2436
	ctx.r10.s64 = ctx.r10.s64 + -2436;
	// stfs f31,1460(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1460, temp.u32);
	// stfs f31,1464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1464, temp.u32);
	// stb r9,1468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1468, ctx.r9.u8);
	// stw r10,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r10.u32);
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// lwz r11,17820(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17820);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DAF8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// bl 0x82e0be78
	ctx.lr = 0x8340DB00;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-2460
	ctx.r10.s64 = ctx.r10.s64 + -2460;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// stfs f29,1496(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1496, temp.u32);
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// stfs f30,1504(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stb r9,1516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1516, ctx.r9.u8);
	// stfs f31,1508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// stfs f31,1512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// lwz r11,17824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17824);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DB40;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1528
	ctx.r3.s64 = ctx.r31.s64 + 1528;
	// bl 0x82e0be78
	ctx.lr = 0x8340DB48;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1544(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1552(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2480
	ctx.r10.s64 = ctx.r10.s64 + -2480;
	// stfs f31,1556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// stfs f31,1560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// stb r9,1564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1564, ctx.r9.u8);
	// stw r10,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r10.u32);
	// addi r3,r31,1568
	ctx.r3.s64 = ctx.r31.s64 + 1568;
	// lwz r11,17828(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17828);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DB88;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// bl 0x82e0be78
	ctx.lr = 0x8340DB90;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1592(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1600(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2500
	ctx.r10.s64 = ctx.r10.s64 + -2500;
	// stfs f31,1604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// stfs f31,1608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// stb r9,1612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1612, ctx.r9.u8);
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// lwz r11,17832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17832);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DBD0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// bl 0x82e0be78
	ctx.lr = 0x8340DBD8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1640(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1648(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r24,r10,-2516
	ctx.r24.s64 = ctx.r10.s64 + -2516;
	// stfs f31,1652(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1652, temp.u32);
	// stfs f31,1656(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1656, temp.u32);
	// stb r9,1660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1660, ctx.r9.u8);
	// stw r24,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r24.u32);
	// addi r3,r31,1664
	ctx.r3.s64 = ctx.r31.s64 + 1664;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,17836(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17836);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DC1C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1672
	ctx.r3.s64 = ctx.r31.s64 + 1672;
	// bl 0x82e0be78
	ctx.lr = 0x8340DC24;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1688(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1688, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1696(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// stfs f27,1700(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// stfs f31,1704(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r24,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r24.u32);
	// stb r9,1708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1708, ctx.r9.u8);
	// lwz r11,17840(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17840);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// addi r3,r31,1712
	ctx.r3.s64 = ctx.r31.s64 + 1712;
	// bl 0x82e0be78
	ctx.lr = 0x8340DC60;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1720
	ctx.r3.s64 = ctx.r31.s64 + 1720;
	// bl 0x82e0be78
	ctx.lr = 0x8340DC68;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f26,1736(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1736, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1744(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1744, temp.u32);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r24,r10,-2536
	ctx.r24.s64 = ctx.r10.s64 + -2536;
	// stfs f31,1748(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1748, temp.u32);
	// stfs f31,1752(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1752, temp.u32);
	// stb r9,1756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1756, ctx.r9.u8);
	// stw r24,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r24.u32);
	// addi r3,r31,1760
	ctx.r3.s64 = ctx.r31.s64 + 1760;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,25988(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25988);
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DCAC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// bl 0x82e0be78
	ctx.lr = 0x8340DCB4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1784(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stfs f30,1792(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1792, temp.u32);
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,1800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// addi r10,r10,-2556
	ctx.r10.s64 = ctx.r10.s64 + -2556;
	// stb r9,1804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1804, ctx.r9.u8);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// lfs f0,-8064(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8064);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r10.u32);
	// stfs f0,1796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1796, temp.u32);
	// lwz r11,25992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25992);
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DCFC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1816
	ctx.r3.s64 = ctx.r31.s64 + 1816;
	// bl 0x82e0be78
	ctx.lr = 0x8340DD04;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1832(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1832, temp.u32);
	// addi r23,r10,-2572
	ctx.r23.s64 = ctx.r10.s64 + -2572;
	// stfs f30,1840(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
	// stw r11,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r11.u32);
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stfs f31,1848(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1848, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r23,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r23.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r11,1852(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1852, ctx.r11.u8);
	// addi r3,r31,1856
	ctx.r3.s64 = ctx.r31.s64 + 1856;
	// lfs f27,-4128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4128);
	ctx.f27.f64 = double(temp.f32);
	// stfs f27,1844(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
	// lwz r11,26012(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26012);
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DD50;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// bl 0x82e0be78
	ctx.lr = 0x8340DD58;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1880(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1880, temp.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f27,1888(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1888, temp.u32);
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,1896(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r23,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r23.u32);
	// addi r3,r31,1904
	ctx.r3.s64 = ctx.r31.s64 + 1904;
	// stb r9,1900(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1900, ctx.r9.u8);
	// lfs f0,-19060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// lwz r11,26016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26016);
	// stw r11,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DD9C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1912
	ctx.r3.s64 = ctx.r31.s64 + 1912;
	// bl 0x82e0be78
	ctx.lr = 0x8340DDA4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,1928(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1928, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1936(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// stfs f31,1940(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1940, temp.u32);
	// stfs f31,1944(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1944, temp.u32);
	// stw r23,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r23.u32);
	// stb r9,1948(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1948, ctx.r9.u8);
	// addi r3,r31,1952
	ctx.r3.s64 = ctx.r31.s64 + 1952;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,26020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26020);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DDE0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1960
	ctx.r3.s64 = ctx.r31.s64 + 1960;
	// bl 0x82e0be78
	ctx.lr = 0x8340DDE8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,1976(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,1984(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1984, temp.u32);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r22,r10,-2596
	ctx.r22.s64 = ctx.r10.s64 + -2596;
	// stfs f31,1988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1988, temp.u32);
	// stfs f31,1992(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1992, temp.u32);
	// stb r9,1996(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1996, ctx.r9.u8);
	// stw r22,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r22.u32);
	// addi r3,r31,2000
	ctx.r3.s64 = ctx.r31.s64 + 2000;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r11,26432(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26432);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DE2C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2008
	ctx.r3.s64 = ctx.r31.s64 + 2008;
	// bl 0x82e0be78
	ctx.lr = 0x8340DE34;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2024(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2024, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2032(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// stw r11,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r11.u32);
	// stfs f31,2036(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2036, temp.u32);
	// stfs f31,2040(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
	// stw r22,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r22.u32);
	// stb r9,2044(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2044, ctx.r9.u8);
	// addi r3,r31,2048
	ctx.r3.s64 = ctx.r31.s64 + 2048;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r11,26436(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26436);
	// stw r11,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DE70;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2056
	ctx.r3.s64 = ctx.r31.s64 + 2056;
	// bl 0x82e0be78
	ctx.lr = 0x8340DE78;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2072(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2072, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2080(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2080, temp.u32);
	// stw r11,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r11.u32);
	// stfs f31,2084(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2084, temp.u32);
	// stfs f31,2088(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2088, temp.u32);
	// stw r24,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r24.u32);
	// stb r9,2092(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2092, ctx.r9.u8);
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,26620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26620);
	// stw r11,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DEB4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2104
	ctx.r3.s64 = ctx.r31.s64 + 2104;
	// bl 0x82e0be78
	ctx.lr = 0x8340DEBC;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2120, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f30,2128(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2128, temp.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stfs f31,2132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2132, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// lwz r11,26628(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26628);
	// stfs f31,2136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// stw r25,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r25.u32);
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// stb r9,2140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2140, ctx.r9.u8);
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DEF8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2152
	ctx.r3.s64 = ctx.r31.s64 + 2152;
	// bl 0x82e0be78
	ctx.lr = 0x8340DF00;
	sub_82E0BE78(ctx, base);
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2168, temp.u32);
	// stfs f30,2176(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2176, temp.u32);
	// stw r28,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r28.u32);
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
	// stfs f31,2180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2180, temp.u32);
	// stb r11,2188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2188, ctx.r11.u8);
	// stfs f31,2184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2184, temp.u32);
	// addi r3,r31,2192
	ctx.r3.s64 = ctx.r31.s64 + 2192;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,25952(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25952);
	// stw r11,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DF38;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2200
	ctx.r3.s64 = ctx.r31.s64 + 2200;
	// bl 0x82e0be78
	ctx.lr = 0x8340DF40;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2216, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2224(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2224, temp.u32);
	// stw r11,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r21,r10,-2616
	ctx.r21.s64 = ctx.r10.s64 + -2616;
	// stfs f31,2228(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2228, temp.u32);
	// stfs f31,2232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2232, temp.u32);
	// stb r9,2236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2236, ctx.r9.u8);
	// stw r21,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r21.u32);
	// addi r3,r31,2240
	ctx.r3.s64 = ctx.r31.s64 + 2240;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r11,26648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26648);
	// stw r11,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DF84;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2248
	ctx.r3.s64 = ctx.r31.s64 + 2248;
	// bl 0x82e0be78
	ctx.lr = 0x8340DF8C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2264(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2264, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2272(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2272, temp.u32);
	// stw r11,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r11.u32);
	// stfs f31,2276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2276, temp.u32);
	// stfs f31,2280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2280, temp.u32);
	// stw r21,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r21.u32);
	// stb r9,2284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2284, ctx.r9.u8);
	// addi r3,r31,2288
	ctx.r3.s64 = ctx.r31.s64 + 2288;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r11,26652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26652);
	// stw r11,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340DFC8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2296
	ctx.r3.s64 = ctx.r31.s64 + 2296;
	// bl 0x82e0be78
	ctx.lr = 0x8340DFD0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stfs f29,2312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2312, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,2320(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2320, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,2324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2324, temp.u32);
	// stfs f31,2328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2328, temp.u32);
	// stw r21,2308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2308, ctx.r21.u32);
	// stw r10,2316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2316, ctx.r10.u32);
	// addi r3,r31,2336
	ctx.r3.s64 = ctx.r31.s64 + 2336;
	// stb r9,2332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2332, ctx.r9.u8);
	// lwz r11,26656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26656);
	// stw r11,2304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2304, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E00C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2344
	ctx.r3.s64 = ctx.r31.s64 + 2344;
	// bl 0x82e0be78
	ctx.lr = 0x8340E014;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// addi r10,r11,-2636
	ctx.r10.s64 = ctx.r11.s64 + -2636;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2360, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2368(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2368, temp.u32);
	// stw r11,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r11.u32);
	// stfs f31,2372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2372, temp.u32);
	// lwz r11,26660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26660);
	// stfs f31,2376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2376, temp.u32);
	// stw r10,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r10.u32);
	// addi r3,r31,2384
	ctx.r3.s64 = ctx.r31.s64 + 2384;
	// stb r9,2380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2380, ctx.r9.u8);
	// stw r11,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E054;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2392
	ctx.r3.s64 = ctx.r31.s64 + 2392;
	// bl 0x82e0be78
	ctx.lr = 0x8340E05C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2408(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2408, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2416(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2416, temp.u32);
	// stw r11,2412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2412, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r21,r10,-2656
	ctx.r21.s64 = ctx.r10.s64 + -2656;
	// stfs f31,2420(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2420, temp.u32);
	// stfs f31,2424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2424, temp.u32);
	// stb r9,2428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2428, ctx.r9.u8);
	// stw r21,2404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2404, ctx.r21.u32);
	// addi r3,r31,2432
	ctx.r3.s64 = ctx.r31.s64 + 2432;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r11,26664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26664);
	// stw r11,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E0A0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2440
	ctx.r3.s64 = ctx.r31.s64 + 2440;
	// bl 0x82e0be78
	ctx.lr = 0x8340E0A8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2456(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2464(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2464, temp.u32);
	// stw r11,2460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2460, ctx.r11.u32);
	// stfs f31,2468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2468, temp.u32);
	// stfs f31,2472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// stw r21,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r21.u32);
	// stb r9,2476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2476, ctx.r9.u8);
	// addi r3,r31,2480
	ctx.r3.s64 = ctx.r31.s64 + 2480;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r11,26668(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26668);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E0E4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2488
	ctx.r3.s64 = ctx.r31.s64 + 2488;
	// bl 0x82e0be78
	ctx.lr = 0x8340E0EC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2504(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2504, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2512(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2512, temp.u32);
	// stw r11,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2672
	ctx.r10.s64 = ctx.r10.s64 + -2672;
	// stfs f31,2516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2516, temp.u32);
	// stfs f31,2520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2520, temp.u32);
	// stb r9,2524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2524, ctx.r9.u8);
	// stw r10,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r10.u32);
	// addi r3,r31,2528
	ctx.r3.s64 = ctx.r31.s64 + 2528;
	// lwz r11,17884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17884);
	// stw r11,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E12C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82e0be78
	ctx.lr = 0x8340E134;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// stfs f30,2560(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,2564(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2564, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// lfs f27,8960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8960);
	ctx.f27.f64 = double(temp.f32);
	// addi r10,r10,-2688
	ctx.r10.s64 = ctx.r10.s64 + -2688;
	// stfs f27,2552(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2552, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17888);
	// stfs f31,2568(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2568, temp.u32);
	// stw r10,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r10.u32);
	// stb r9,2572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2572, ctx.r9.u8);
	// addi r3,r31,2576
	ctx.r3.s64 = ctx.r31.s64 + 2576;
	// stw r11,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E17C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2584
	ctx.r3.s64 = ctx.r31.s64 + 2584;
	// bl 0x82e0be78
	ctx.lr = 0x8340E184;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2600(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2600, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2608(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2608, temp.u32);
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// stfs f31,2612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2612, temp.u32);
	// stfs f31,2616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2616, temp.u32);
	// stw r29,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r29.u32);
	// stb r9,2620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2620, ctx.r9.u8);
	// addi r3,r31,2624
	ctx.r3.s64 = ctx.r31.s64 + 2624;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26308);
	// stw r11,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E1C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2632
	ctx.r3.s64 = ctx.r31.s64 + 2632;
	// bl 0x82e0be78
	ctx.lr = 0x8340E1C8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f28,2648(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2648, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,2656(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2656, temp.u32);
	// stw r11,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
	// stfs f31,2660(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2660, temp.u32);
	// stfs f31,2664(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2664, temp.u32);
	// stw r24,2644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2644, ctx.r24.u32);
	// stb r9,2668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2668, ctx.r9.u8);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r11,26008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26008);
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E204;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2680
	ctx.r3.s64 = ctx.r31.s64 + 2680;
	// bl 0x82e0be78
	ctx.lr = 0x8340E20C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,2696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2696, temp.u32);
	// addi r10,r11,-2708
	ctx.r10.s64 = ctx.r11.s64 + -2708;
	// stfs f30,2704(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2704, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,2708(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2708, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,2712(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2712, temp.u32);
	// stw r11,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r11.u32);
	// addi r3,r31,2720
	ctx.r3.s64 = ctx.r31.s64 + 2720;
	// stw r10,2692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2692, ctx.r10.u32);
	// stb r9,2716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2716, ctx.r9.u8);
	// lwz r11,26024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26024);
	// stw r11,2688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2688, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E24C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2728
	ctx.r3.s64 = ctx.r31.s64 + 2728;
	// bl 0x82e0be78
	ctx.lr = 0x8340E254;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,2744(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2744, temp.u32);
	// addi r11,r11,-2732
	ctx.r11.s64 = ctx.r11.s64 + -2732;
	// stfs f30,2752(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2752, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,2756(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2756, temp.u32);
	// stw r11,2740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2740, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,2760(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2760, temp.u32);
	// stw r10,2748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2748, ctx.r10.u32);
	// stb r9,2764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2764, ctx.r9.u8);
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// lwz r11,26028(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26028);
	// stw r11,2736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2736, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E294;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2776
	ctx.r3.s64 = ctx.r31.s64 + 2776;
	// bl 0x82e0be78
	ctx.lr = 0x8340E29C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r11.u32);
	// addi r10,r10,-2752
	ctx.r10.s64 = ctx.r10.s64 + -2752;
	// lwz r11,26032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26032);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,2792(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2792, temp.u32);
	// stw r10,2788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2788, ctx.r10.u32);
	// stfs f30,2800(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2800, temp.u32);
	// stb r9,2812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2812, ctx.r9.u8);
	// stfs f31,2804(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2804, temp.u32);
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// stfs f31,2808(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2808, temp.u32);
	// stw r11,2784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2784, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E2DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2824
	ctx.r3.s64 = ctx.r31.s64 + 2824;
	// bl 0x82e0be78
	ctx.lr = 0x8340E2E4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2840(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2840, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2848(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2848, temp.u32);
	// stw r11,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2772
	ctx.r10.s64 = ctx.r10.s64 + -2772;
	// stfs f31,2852(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2852, temp.u32);
	// stfs f31,2856(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2856, temp.u32);
	// stb r9,2860(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2860, ctx.r9.u8);
	// stw r10,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r10.u32);
	// addi r3,r31,2864
	ctx.r3.s64 = ctx.r31.s64 + 2864;
	// lwz r11,26036(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26036);
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E324;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2872
	ctx.r3.s64 = ctx.r31.s64 + 2872;
	// bl 0x82e0be78
	ctx.lr = 0x8340E32C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,2888(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2888, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2896(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2896, temp.u32);
	// stw r11,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2792
	ctx.r10.s64 = ctx.r10.s64 + -2792;
	// stfs f31,2900(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2900, temp.u32);
	// stfs f31,2904(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2904, temp.u32);
	// stb r9,2908(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2908, ctx.r9.u8);
	// stw r10,2884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2884, ctx.r10.u32);
	// addi r3,r31,2912
	ctx.r3.s64 = ctx.r31.s64 + 2912;
	// lwz r11,26040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26040);
	// stw r11,2880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2880, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E36C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2920
	ctx.r3.s64 = ctx.r31.s64 + 2920;
	// bl 0x82e0be78
	ctx.lr = 0x8340E374;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,2936(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2936, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,2944(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2944, temp.u32);
	// stw r11,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2816
	ctx.r10.s64 = ctx.r10.s64 + -2816;
	// stfs f31,2948(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2948, temp.u32);
	// stfs f31,2952(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2952, temp.u32);
	// stb r9,2956(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2956, ctx.r9.u8);
	// stw r10,2932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2932, ctx.r10.u32);
	// addi r3,r31,2960
	ctx.r3.s64 = ctx.r31.s64 + 2960;
	// lwz r11,26076(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26076);
	// stw r11,2928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2928, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E3B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,2968
	ctx.r3.s64 = ctx.r31.s64 + 2968;
	// bl 0x82e0be78
	ctx.lr = 0x8340E3BC;
	sub_82E0BE78(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f30,2992(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2992, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,2996(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2996, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,2988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2988, ctx.r11.u32);
	// lfs f26,-1896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1896);
	ctx.f26.f64 = double(temp.f32);
	// addi r10,r10,-2832
	ctx.r10.s64 = ctx.r10.s64 + -2832;
	// stfs f26,2984(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2984, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26060(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26060);
	// stfs f31,3000(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3000, temp.u32);
	// stw r10,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r10.u32);
	// stb r9,3004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3004, ctx.r9.u8);
	// addi r3,r31,3008
	ctx.r3.s64 = ctx.r31.s64 + 3008;
	// stw r11,2976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2976, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E404;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3016
	ctx.r3.s64 = ctx.r31.s64 + 3016;
	// bl 0x82e0be78
	ctx.lr = 0x8340E40C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,3032(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3032, temp.u32);
	// addi r10,r11,-2852
	ctx.r10.s64 = ctx.r11.s64 + -2852;
	// stfs f30,3040(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3040, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,3044(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3044, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,3048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3048, temp.u32);
	// stw r11,3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3036, ctx.r11.u32);
	// addi r3,r31,3056
	ctx.r3.s64 = ctx.r31.s64 + 3056;
	// stw r10,3028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3028, ctx.r10.u32);
	// stb r9,3052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3052, ctx.r9.u8);
	// lwz r11,26064(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26064);
	// stw r11,3024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3024, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E44C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3064
	ctx.r3.s64 = ctx.r31.s64 + 3064;
	// bl 0x82e0be78
	ctx.lr = 0x8340E454;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3080(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3080, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3088(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3088, temp.u32);
	// stw r11,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2872
	ctx.r10.s64 = ctx.r10.s64 + -2872;
	// stfs f31,3092(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3092, temp.u32);
	// stfs f31,3096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3096, temp.u32);
	// stb r9,3100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3100, ctx.r9.u8);
	// stw r10,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r10.u32);
	// addi r3,r31,3104
	ctx.r3.s64 = ctx.r31.s64 + 3104;
	// lwz r11,26068(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26068);
	// stw r11,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E494;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3112
	ctx.r3.s64 = ctx.r31.s64 + 3112;
	// bl 0x82e0be78
	ctx.lr = 0x8340E49C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3128, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3136(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3136, temp.u32);
	// stw r11,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2896
	ctx.r10.s64 = ctx.r10.s64 + -2896;
	// stfs f31,3140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3140, temp.u32);
	// stfs f31,3144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3144, temp.u32);
	// stb r9,3148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3148, ctx.r9.u8);
	// stw r10,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r10.u32);
	// addi r3,r31,3152
	ctx.r3.s64 = ctx.r31.s64 + 3152;
	// lwz r11,26072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26072);
	// stw r11,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E4DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3160
	ctx.r3.s64 = ctx.r31.s64 + 3160;
	// bl 0x82e0be78
	ctx.lr = 0x8340E4E4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f28,3176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3176, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3184(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3184, temp.u32);
	// stw r11,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2920
	ctx.r10.s64 = ctx.r10.s64 + -2920;
	// stfs f31,3188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3188, temp.u32);
	// stfs f31,3192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3192, temp.u32);
	// stb r9,3196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3196, ctx.r9.u8);
	// stw r10,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r10.u32);
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// lwz r11,26172(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26172);
	// stw r11,3168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3168, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E524;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3208
	ctx.r3.s64 = ctx.r31.s64 + 3208;
	// bl 0x82e0be78
	ctx.lr = 0x8340E52C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f28,3224(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3224, temp.u32);
	// addi r11,r11,-2944
	ctx.r11.s64 = ctx.r11.s64 + -2944;
	// stfs f30,3232(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3232, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,3236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3236, temp.u32);
	// stw r11,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,3240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3240, temp.u32);
	// stw r10,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r10.u32);
	// lwz r11,26176(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26176);
	// addi r3,r31,3248
	ctx.r3.s64 = ctx.r31.s64 + 3248;
	// stb r9,3244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3244, ctx.r9.u8);
	// stw r11,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E56C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x82e0be78
	ctx.lr = 0x8340E574;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3272, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3280(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// stw r11,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r11.u32);
	// stfs f31,3284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// stfs f31,3288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// stw r27,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r27.u32);
	// stb r9,3292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3292, ctx.r9.u8);
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,17896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17896);
	// stw r11,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E5B0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3304
	ctx.r3.s64 = ctx.r31.s64 + 3304;
	// bl 0x82e0be78
	ctx.lr = 0x8340E5B8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3328(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// stfs f31,3332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// stfs f31,3336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3336, temp.u32);
	// stw r26,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r26.u32);
	// stb r9,3340(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3340, ctx.r9.u8);
	// addi r3,r31,3344
	ctx.r3.s64 = ctx.r31.s64 + 3344;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,17900(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17900);
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E5F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3352
	ctx.r3.s64 = ctx.r31.s64 + 3352;
	// bl 0x82e0be78
	ctx.lr = 0x8340E5FC;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// stfs f29,3368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3368, temp.u32);
	// stw r11,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,3376(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3376, temp.u32);
	// stw r25,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r25.u32);
	// stb r11,3388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3388, ctx.r11.u8);
	// stfs f31,3380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3380, temp.u32);
	// stfs f31,3384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3384, temp.u32);
	// addi r3,r31,3392
	ctx.r3.s64 = ctx.r31.s64 + 3392;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,17904(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17904);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E638;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3400
	ctx.r3.s64 = ctx.r31.s64 + 3400;
	// bl 0x82e0be78
	ctx.lr = 0x8340E640;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3416(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3416, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3424(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3424, temp.u32);
	// stw r11,3420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3420, ctx.r11.u32);
	// stfs f31,3428(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3428, temp.u32);
	// stfs f31,3432(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3432, temp.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r27.u32);
	// addi r3,r31,3440
	ctx.r3.s64 = ctx.r31.s64 + 3440;
	// stb r9,3436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3436, ctx.r9.u8);
	// lwz r11,17908(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17908);
	// stw r11,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E67C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3448
	ctx.r3.s64 = ctx.r31.s64 + 3448;
	// bl 0x82e0be78
	ctx.lr = 0x8340E684;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3464(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3464, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3472(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stw r11,3468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3468, ctx.r11.u32);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// stfs f31,3480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3480, temp.u32);
	// stw r26,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r26.u32);
	// stb r9,3484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3484, ctx.r9.u8);
	// addi r3,r31,3488
	ctx.r3.s64 = ctx.r31.s64 + 3488;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,17912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17912);
	// stw r11,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E6C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3496
	ctx.r3.s64 = ctx.r31.s64 + 3496;
	// bl 0x82e0be78
	ctx.lr = 0x8340E6C8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3512, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3520(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3520, temp.u32);
	// stw r11,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r11.u32);
	// stfs f31,3524(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3524, temp.u32);
	// stfs f31,3528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3528, temp.u32);
	// stw r25,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r25.u32);
	// stb r9,3532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3532, ctx.r9.u8);
	// addi r3,r31,3536
	ctx.r3.s64 = ctx.r31.s64 + 3536;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,17916(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17916);
	// stw r11,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E704;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3544
	ctx.r3.s64 = ctx.r31.s64 + 3544;
	// bl 0x82e0be78
	ctx.lr = 0x8340E70C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3560(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3560, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3568(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3568, temp.u32);
	// stw r11,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r11.u32);
	// stfs f31,3572(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3572, temp.u32);
	// stfs f31,3576(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3576, temp.u32);
	// stw r30,3556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3556, ctx.r30.u32);
	// stb r9,3580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3580, ctx.r9.u8);
	// addi r3,r31,3584
	ctx.r3.s64 = ctx.r31.s64 + 3584;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,17920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17920);
	// stw r11,3552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3552, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E748;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3592
	ctx.r3.s64 = ctx.r31.s64 + 3592;
	// bl 0x82e0be78
	ctx.lr = 0x8340E750;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3608(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3608, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3616(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3616, temp.u32);
	// stw r11,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r11.u32);
	// stfs f31,3620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3620, temp.u32);
	// stfs f31,3624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3624, temp.u32);
	// stw r30,3604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3604, ctx.r30.u32);
	// stb r9,3628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3628, ctx.r9.u8);
	// addi r3,r31,3632
	ctx.r3.s64 = ctx.r31.s64 + 3632;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,17932(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17932);
	// stw r11,3600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3600, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E78C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3640
	ctx.r3.s64 = ctx.r31.s64 + 3640;
	// bl 0x82e0be78
	ctx.lr = 0x8340E794;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// stfs f29,3656(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// addi r11,r11,-2964
	ctx.r11.s64 = ctx.r11.s64 + -2964;
	// stfs f30,3664(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3664, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,3652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3652, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18052(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18052);
	// stfs f31,3668(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3668, temp.u32);
	// stw r10,3660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3660, ctx.r10.u32);
	// stfs f31,3672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3672, temp.u32);
	// stb r9,3676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3676, ctx.r9.u8);
	// stw r11,3648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3648, ctx.r11.u32);
	// addi r3,r31,3680
	ctx.r3.s64 = ctx.r31.s64 + 3680;
	// bl 0x82e0be78
	ctx.lr = 0x8340E7D4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3688
	ctx.r3.s64 = ctx.r31.s64 + 3688;
	// bl 0x82e0be78
	ctx.lr = 0x8340E7DC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3704(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3704, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3712(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3712, temp.u32);
	// stw r11,3708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3708, ctx.r11.u32);
	// stfs f31,3716(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3716, temp.u32);
	// stfs f31,3720(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3720, temp.u32);
	// stw r23,3700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3700, ctx.r23.u32);
	// stb r9,3724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3724, ctx.r9.u8);
	// addi r3,r31,3728
	ctx.r3.s64 = ctx.r31.s64 + 3728;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,26224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26224);
	// stw r11,3696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3696, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E818;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3736
	ctx.r3.s64 = ctx.r31.s64 + 3736;
	// bl 0x82e0be78
	ctx.lr = 0x8340E820;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3752(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3752, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3760(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3760, temp.u32);
	// stw r11,3756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3756, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2980
	ctx.r10.s64 = ctx.r10.s64 + -2980;
	// stfs f31,3764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3764, temp.u32);
	// stfs f31,3768(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3768, temp.u32);
	// stb r9,3772(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3772, ctx.r9.u8);
	// stw r10,3748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3748, ctx.r10.u32);
	// addi r3,r31,3776
	ctx.r3.s64 = ctx.r31.s64 + 3776;
	// lwz r11,26240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26240);
	// stw r11,3744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3744, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E860;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3784
	ctx.r3.s64 = ctx.r31.s64 + 3784;
	// bl 0x82e0be78
	ctx.lr = 0x8340E868;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3800(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3800, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3808(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3808, temp.u32);
	// stw r11,3804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3804, ctx.r11.u32);
	// stfs f31,3812(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3812, temp.u32);
	// stfs f31,3816(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3816, temp.u32);
	// stw r28,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r28.u32);
	// stb r9,3820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3820, ctx.r9.u8);
	// addi r3,r31,3824
	ctx.r3.s64 = ctx.r31.s64 + 3824;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26272);
	// stw r11,3792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3792, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E8A4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3832
	ctx.r3.s64 = ctx.r31.s64 + 3832;
	// bl 0x82e0be78
	ctx.lr = 0x8340E8AC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3848(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3848, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,3856(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3856, temp.u32);
	// stw r11,3852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3852, ctx.r11.u32);
	// stfs f31,3860(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3860, temp.u32);
	// stfs f31,3864(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3864, temp.u32);
	// stw r28,3844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3844, ctx.r28.u32);
	// stb r9,3868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3868, ctx.r9.u8);
	// addi r3,r31,3872
	ctx.r3.s64 = ctx.r31.s64 + 3872;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,26276(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26276);
	// stw r11,3840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3840, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E8E8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3880
	ctx.r3.s64 = ctx.r31.s64 + 3880;
	// bl 0x82e0be78
	ctx.lr = 0x8340E8F0;
	sub_82E0BE78(ctx, base);
	// stfs f29,3896(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3896, temp.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,3904(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3904, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,3908(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3908, temp.u32);
	// stw r11,3900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3900, ctx.r11.u32);
	// stfs f31,3912(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3912, temp.u32);
	// lwz r11,26288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26288);
	// addi r3,r31,3920
	ctx.r3.s64 = ctx.r31.s64 + 3920;
	// stw r22,3892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3892, ctx.r22.u32);
	// stb r9,3916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3916, ctx.r9.u8);
	// stw r11,3888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3888, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E92C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3928
	ctx.r3.s64 = ctx.r31.s64 + 3928;
	// bl 0x82e0be78
	ctx.lr = 0x8340E934;
	sub_82E0BE78(ctx, base);
	// lis r8,-31887
	ctx.r8.s64 = -2089746432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,3944(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3944, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,3952(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3952, temp.u32);
	// stw r11,3948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3948, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3004
	ctx.r10.s64 = ctx.r10.s64 + -3004;
	// stfs f31,3956(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3956, temp.u32);
	// stfs f31,3960(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3960, temp.u32);
	// stb r9,3964(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3964, ctx.r9.u8);
	// stw r10,3940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3940, ctx.r10.u32);
	// addi r3,r31,3968
	ctx.r3.s64 = ctx.r31.s64 + 3968;
	// lwz r11,18132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18132);
	// stw r11,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E974;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,3976
	ctx.r3.s64 = ctx.r31.s64 + 3976;
	// bl 0x82e0be78
	ctx.lr = 0x8340E97C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,3992(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3992, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4000(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4000, temp.u32);
	// stw r11,3996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3996, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3020
	ctx.r10.s64 = ctx.r10.s64 + -3020;
	// stfs f31,4004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4004, temp.u32);
	// stfs f31,4008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4008, temp.u32);
	// stb r9,4012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4012, ctx.r9.u8);
	// stw r10,3988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3988, ctx.r10.u32);
	// addi r3,r31,4016
	ctx.r3.s64 = ctx.r31.s64 + 4016;
	// lwz r11,26352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26352);
	// stw r11,3984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3984, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340E9BC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4024
	ctx.r3.s64 = ctx.r31.s64 + 4024;
	// bl 0x82e0be78
	ctx.lr = 0x8340E9C4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,4040(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4040, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4048(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4048, temp.u32);
	// stw r11,4044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4044, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3040
	ctx.r10.s64 = ctx.r10.s64 + -3040;
	// stfs f31,4052(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4052, temp.u32);
	// stfs f31,4056(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4056, temp.u32);
	// stb r9,4060(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4060, ctx.r9.u8);
	// stw r10,4036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4036, ctx.r10.u32);
	// addi r3,r31,4064
	ctx.r3.s64 = ctx.r31.s64 + 4064;
	// lwz r11,26356(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26356);
	// stw r11,4032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4032, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EA04;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4072
	ctx.r3.s64 = ctx.r31.s64 + 4072;
	// bl 0x82e0be78
	ctx.lr = 0x8340EA0C;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,4088(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4088, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,4096(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4096, temp.u32);
	// addi r10,r10,-3056
	ctx.r10.s64 = ctx.r10.s64 + -3056;
	// stfs f31,4100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4100, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4092, ctx.r11.u32);
	// stfs f31,4104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4104, temp.u32);
	// stw r10,4084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4084, ctx.r10.u32);
	// stb r9,4108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4108, ctx.r9.u8);
	// lwz r11,26360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26360);
	// stw r11,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r11.u32);
	// addi r3,r31,4112
	ctx.r3.s64 = ctx.r31.s64 + 4112;
	// bl 0x82e0be78
	ctx.lr = 0x8340EA4C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4120
	ctx.r3.s64 = ctx.r31.s64 + 4120;
	// bl 0x82e0be78
	ctx.lr = 0x8340EA54;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,4136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4136, temp.u32);
	// addi r11,r11,-3072
	ctx.r11.s64 = ctx.r11.s64 + -3072;
	// stfs f30,4144(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4144, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,4148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4148, temp.u32);
	// stw r11,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,4152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4152, temp.u32);
	// stw r10,4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4140, ctx.r10.u32);
	// stb r9,4156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4156, ctx.r9.u8);
	// addi r3,r31,4160
	ctx.r3.s64 = ctx.r31.s64 + 4160;
	// lwz r11,26364(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26364);
	// stw r11,4128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4128, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EA94;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4168
	ctx.r3.s64 = ctx.r31.s64 + 4168;
	// bl 0x82e0be78
	ctx.lr = 0x8340EA9C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,4184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4184, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4192(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4192, temp.u32);
	// stw r11,4188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4188, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r10,-3088
	ctx.r29.s64 = ctx.r10.s64 + -3088;
	// stfs f31,4196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4196, temp.u32);
	// stfs f31,4200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4200, temp.u32);
	// stb r9,4204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4204, ctx.r9.u8);
	// stw r29,4180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4180, ctx.r29.u32);
	// addi r3,r31,4208
	ctx.r3.s64 = ctx.r31.s64 + 4208;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26368);
	// stw r11,4176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4176, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EAE0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4216
	ctx.r3.s64 = ctx.r31.s64 + 4216;
	// bl 0x82e0be78
	ctx.lr = 0x8340EAE8;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,4232(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4232, temp.u32);
	// addi r10,r11,-3104
	ctx.r10.s64 = ctx.r11.s64 + -3104;
	// stfs f30,4240(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4240, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,4248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4248, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r10,4228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4228, ctx.r10.u32);
	// stw r11,4236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4236, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,4256
	ctx.r3.s64 = ctx.r31.s64 + 4256;
	// stb r9,4252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4252, ctx.r9.u8);
	// lfs f0,472(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4244, temp.u32);
	// lwz r11,26372(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26372);
	// stw r11,4224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4224, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EB30;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4264
	ctx.r3.s64 = ctx.r31.s64 + 4264;
	// bl 0x82e0be78
	ctx.lr = 0x8340EB38;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,4280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4280, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4288(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4288, temp.u32);
	// stw r11,4284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4284, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3132
	ctx.r10.s64 = ctx.r10.s64 + -3132;
	// stfs f31,4292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4292, temp.u32);
	// stfs f31,4296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4296, temp.u32);
	// stb r9,4300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4300, ctx.r9.u8);
	// stw r10,4276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4276, ctx.r10.u32);
	// addi r3,r31,4304
	ctx.r3.s64 = ctx.r31.s64 + 4304;
	// lwz r11,26376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26376);
	// stw r11,4272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4272, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EB78;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4312
	ctx.r3.s64 = ctx.r31.s64 + 4312;
	// bl 0x82e0be78
	ctx.lr = 0x8340EB80;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,4328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4328, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4336(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4336, temp.u32);
	// stw r11,4332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4332, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26380(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26380);
	// addi r10,r10,-3152
	ctx.r10.s64 = ctx.r10.s64 + -3152;
	// stfs f31,4340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4340, temp.u32);
	// stb r9,4348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4348, ctx.r9.u8);
	// stfs f31,4344(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4344, temp.u32);
	// stw r10,4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4324, ctx.r10.u32);
	// addi r3,r31,4352
	ctx.r3.s64 = ctx.r31.s64 + 4352;
	// stw r11,4320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4320, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EBC0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4360
	ctx.r3.s64 = ctx.r31.s64 + 4360;
	// bl 0x82e0be78
	ctx.lr = 0x8340EBC8;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// stfs f29,4376(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4376, temp.u32);
	// addi r11,r11,-3176
	ctx.r11.s64 = ctx.r11.s64 + -3176;
	// stfs f30,4384(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4384, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,4388(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4388, temp.u32);
	// stw r11,4372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4372, ctx.r11.u32);
	// stfs f31,4392(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4392, temp.u32);
	// stw r10,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r10.u32);
	// addi r3,r31,4400
	ctx.r3.s64 = ctx.r31.s64 + 4400;
	// lwz r11,26384(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26384);
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4396, ctx.r11.u8);
	// bl 0x82e0be78
	ctx.lr = 0x8340EC08;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4408
	ctx.r3.s64 = ctx.r31.s64 + 4408;
	// bl 0x82e0be78
	ctx.lr = 0x8340EC10;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,4424(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4424, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4432(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4432, temp.u32);
	// stw r11,4428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4428, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3196
	ctx.r10.s64 = ctx.r10.s64 + -3196;
	// stfs f31,4436(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4436, temp.u32);
	// stfs f31,4440(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4440, temp.u32);
	// stb r9,4444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4444, ctx.r9.u8);
	// stw r10,4420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4420, ctx.r10.u32);
	// addi r3,r31,4448
	ctx.r3.s64 = ctx.r31.s64 + 4448;
	// lwz r11,26388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26388);
	// stw r11,4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4416, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EC50;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4456
	ctx.r3.s64 = ctx.r31.s64 + 4456;
	// bl 0x82e0be78
	ctx.lr = 0x8340EC58;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,4472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4472, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,4480(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4480, temp.u32);
	// stw r11,4476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4476, ctx.r11.u32);
	// stfs f31,4484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4484, temp.u32);
	// stfs f31,4488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4488, temp.u32);
	// stw r29,4468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4468, ctx.r29.u32);
	// stb r9,4492(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4492, ctx.r9.u8);
	// addi r3,r31,4496
	ctx.r3.s64 = ctx.r31.s64 + 4496;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,26392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26392);
	// stw r11,4464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4464, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EC94;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4504
	ctx.r3.s64 = ctx.r31.s64 + 4504;
	// bl 0x82e0be78
	ctx.lr = 0x8340EC9C;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f26,4520(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4520, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,4528(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4528, temp.u32);
	// addi r10,r10,-3216
	ctx.r10.s64 = ctx.r10.s64 + -3216;
	// stfs f31,4532(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4532, temp.u32);
	// stw r11,4524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4524, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r10.u32);
	// lwz r11,26396(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26396);
	// stfs f31,4536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4536, temp.u32);
	// stb r9,4540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4540, ctx.r9.u8);
	// stw r11,4512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4512, ctx.r11.u32);
	// addi r3,r31,4544
	ctx.r3.s64 = ctx.r31.s64 + 4544;
	// bl 0x82e0be78
	ctx.lr = 0x8340ECDC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4552
	ctx.r3.s64 = ctx.r31.s64 + 4552;
	// bl 0x82e0be78
	ctx.lr = 0x8340ECE4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f29,4568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4568, temp.u32);
	// addi r10,r11,-3236
	ctx.r10.s64 = ctx.r11.s64 + -3236;
	// stfs f30,4576(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4576, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,4580(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4580, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,4584(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4584, temp.u32);
	// stw r11,4572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4572, ctx.r11.u32);
	// addi r3,r31,4592
	ctx.r3.s64 = ctx.r31.s64 + 4592;
	// stw r10,4564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4564, ctx.r10.u32);
	// stb r9,4588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4588, ctx.r9.u8);
	// lwz r11,26400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26400);
	// stw r11,4560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4560, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340ED24;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4600
	ctx.r3.s64 = ctx.r31.s64 + 4600;
	// bl 0x82e0be78
	ctx.lr = 0x8340ED2C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,4616(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4616, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4624(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4624, temp.u32);
	// stw r11,4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4620, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3260
	ctx.r10.s64 = ctx.r10.s64 + -3260;
	// stfs f31,4628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4628, temp.u32);
	// stfs f31,4632(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4632, temp.u32);
	// stb r9,4636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4636, ctx.r9.u8);
	// stw r10,4612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4612, ctx.r10.u32);
	// addi r3,r31,4640
	ctx.r3.s64 = ctx.r31.s64 + 4640;
	// lwz r11,26404(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26404);
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340ED6C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4648
	ctx.r3.s64 = ctx.r31.s64 + 4648;
	// bl 0x82e0be78
	ctx.lr = 0x8340ED74;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,4664(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4664, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4672(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4672, temp.u32);
	// stw r11,4668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4668, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3284
	ctx.r10.s64 = ctx.r10.s64 + -3284;
	// stfs f31,4676(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4676, temp.u32);
	// stfs f31,4680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4680, temp.u32);
	// stb r9,4684(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4684, ctx.r9.u8);
	// stw r10,4660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4660, ctx.r10.u32);
	// addi r3,r31,4688
	ctx.r3.s64 = ctx.r31.s64 + 4688;
	// lwz r11,26408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26408);
	// stw r11,4656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4656, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EDB4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4696
	ctx.r3.s64 = ctx.r31.s64 + 4696;
	// bl 0x82e0be78
	ctx.lr = 0x8340EDBC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,4712(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4712, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,4720(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4720, temp.u32);
	// stw r11,4716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4716, ctx.r11.u32);
	// stfs f31,4724(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4724, temp.u32);
	// stfs f31,4728(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4728, temp.u32);
	// stw r30,4708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4708, ctx.r30.u32);
	// stb r9,4732(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4732, ctx.r9.u8);
	// addi r3,r31,4736
	ctx.r3.s64 = ctx.r31.s64 + 4736;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,26472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26472);
	// stw r11,4704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4704, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EDF8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4744
	ctx.r3.s64 = ctx.r31.s64 + 4744;
	// bl 0x82e0be78
	ctx.lr = 0x8340EE00;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r11.u32);
	// addi r10,r10,-3296
	ctx.r10.s64 = ctx.r10.s64 + -3296;
	// lwz r11,26476(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26476);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f27,4760(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4760, temp.u32);
	// stw r10,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r10.u32);
	// stfs f30,4768(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4768, temp.u32);
	// stb r9,4780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4780, ctx.r9.u8);
	// stfs f31,4772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4772, temp.u32);
	// addi r3,r31,4784
	ctx.r3.s64 = ctx.r31.s64 + 4784;
	// stfs f31,4776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4776, temp.u32);
	// stw r11,4752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4752, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EE40;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4792
	ctx.r3.s64 = ctx.r31.s64 + 4792;
	// bl 0x82e0be78
	ctx.lr = 0x8340EE48;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,4808(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4808, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,4816(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
	// stw r11,4812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4812, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-3316
	ctx.r10.s64 = ctx.r10.s64 + -3316;
	// stfs f31,4820(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4820, temp.u32);
	// stfs f31,4824(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4824, temp.u32);
	// stb r9,4828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4828, ctx.r9.u8);
	// stw r10,4804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4804, ctx.r10.u32);
	// addi r3,r31,4832
	ctx.r3.s64 = ctx.r31.s64 + 4832;
	// lwz r11,26572(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26572);
	// stw r11,4800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4800, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EE88;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,4840
	ctx.r3.s64 = ctx.r31.s64 + 4840;
	// bl 0x82e0be78
	ctx.lr = 0x8340EE90;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x833a193c
	ctx.lr = 0x8340EE9C;
	__restfpr_26(ctx, base);
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8340EEA0"))) PPC_WEAK_FUNC(sub_8340EEA0);
PPC_FUNC_IMPL(__imp__sub_8340EEA0) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// addi r31,r10,-28368
	ctx.r31.s64 = ctx.r10.s64 + -28368;
	// lwz r11,26080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26080);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,-28368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28368, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EED8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340EEE0;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-2092
	ctx.r10.s64 = ctx.r10.s64 + -2092;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26100);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EF38;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340EF40;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2112
	ctx.r10.s64 = ctx.r10.s64 + -2112;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26120);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EF80;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340EF88;
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

__attribute__((alias("__imp__sub_8340EFA8"))) PPC_WEAK_FUNC(sub_8340EFA8);
PPC_FUNC_IMPL(__imp__sub_8340EFA8) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// addi r31,r10,-28224
	ctx.r31.s64 = ctx.r10.s64 + -28224;
	// lwz r11,26084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26084);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,-28224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28224, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340EFE0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340EFE8;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-2056
	ctx.r10.s64 = ctx.r10.s64 + -2056;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26104);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F040;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340F048;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2076
	ctx.r10.s64 = ctx.r10.s64 + -2076;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26124);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F088;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340F090;
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

__attribute__((alias("__imp__sub_8340F0B0"))) PPC_WEAK_FUNC(sub_8340F0B0);
PPC_FUNC_IMPL(__imp__sub_8340F0B0) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// addi r31,r10,-28080
	ctx.r31.s64 = ctx.r10.s64 + -28080;
	// lwz r11,26088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26088);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,-28080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28080, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F0E8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340F0F0;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-2020
	ctx.r10.s64 = ctx.r10.s64 + -2020;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26108);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F148;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340F150;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2040
	ctx.r10.s64 = ctx.r10.s64 + -2040;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26128);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F190;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340F198;
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

__attribute__((alias("__imp__sub_8340F1B8"))) PPC_WEAK_FUNC(sub_8340F1B8);
PPC_FUNC_IMPL(__imp__sub_8340F1B8) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// addi r31,r10,-27936
	ctx.r31.s64 = ctx.r10.s64 + -27936;
	// lwz r11,26092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26092);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,-27936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27936, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F1F0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340F1F8;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-1984
	ctx.r10.s64 = ctx.r10.s64 + -1984;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26112);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F250;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340F258;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2004
	ctx.r10.s64 = ctx.r10.s64 + -2004;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26132);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F298;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340F2A0;
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

__attribute__((alias("__imp__sub_8340F2C0"))) PPC_WEAK_FUNC(sub_8340F2C0);
PPC_FUNC_IMPL(__imp__sub_8340F2C0) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// addi r31,r10,-27792
	ctx.r31.s64 = ctx.r10.s64 + -27792;
	// lwz r11,26096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26096);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,-27792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27792, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F2F8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340F300;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-1948
	ctx.r10.s64 = ctx.r10.s64 + -1948;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,26116(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26116);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F358;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340F360;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1968
	ctx.r10.s64 = ctx.r10.s64 + -1968;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,26136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26136);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F3A0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340F3A8;
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

__attribute__((alias("__imp__sub_8340F3C8"))) PPC_WEAK_FUNC(sub_8340F3C8);
PPC_FUNC_IMPL(__imp__sub_8340F3C8) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// addi r31,r10,-27648
	ctx.r31.s64 = ctx.r10.s64 + -27648;
	// lwz r11,25868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25868);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,-27648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27648, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F404;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8340F40C;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f30,12452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r10,-2144
	ctx.r30.s64 = ctx.r10.s64 + -2144;
	// lfs f29,24284(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,27084(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27084);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F468;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8340F470;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2176
	ctx.r10.s64 = ctx.r10.s64 + -2176;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,25884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25884);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F4B0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8340F4B8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,27088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F4F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x8340F4FC;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// lwz r11,26280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26280);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F538;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x8340F540;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-1764
	ctx.r11.s64 = ctx.r11.s64 + -1764;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lwz r11,27092(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27092);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F580;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x8340F588;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1788
	ctx.r10.s64 = ctx.r10.s64 + -1788;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stb r9,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r9.u8);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// lwz r11,27096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27096);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F5C8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x8340F5D0;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31888
	ctx.r9.s64 = -2089811968;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// addi r10,r10,-1808
	ctx.r10.s64 = ctx.r10.s64 + -1808;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// lwz r11,27100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27100);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F610;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x8340F618;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,400(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1828
	ctx.r10.s64 = ctx.r10.s64 + -1828;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stb r9,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r9.u8);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r11,27104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27104);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F658;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x8340F660;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-1852
	ctx.r10.s64 = ctx.r10.s64 + -1852;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27112);
	// stfs f30,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f29,448(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stb r9,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r9.u8);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F6A0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e0be78
	ctx.lr = 0x8340F6A8;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stfs f30,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// addi r11,r11,-1880
	ctx.r11.s64 = ctx.r11.s64 + -1880;
	// stfs f29,496(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// stb r9,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r9.u8);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// lwz r11,27116(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27116);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F6E8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// bl 0x82e0be78
	ctx.lr = 0x8340F6F0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,544(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1896
	ctx.r10.s64 = ctx.r10.s64 + -1896;
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stb r9,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r9.u8);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// lwz r11,27120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27120);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F730;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82e0be78
	ctx.lr = 0x8340F738;
	sub_82E0BE78(ctx, base);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f29,592(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1916
	ctx.r10.s64 = ctx.r10.s64 + -1916;
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f31,600(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stb r9,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r9.u8);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// lwz r11,27124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27124);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F778;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x82e0be78
	ctx.lr = 0x8340F780;
	sub_82E0BE78(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// addi r10,r10,-1932
	ctx.r10.s64 = ctx.r10.s64 + -1932;
	// stfs f29,640(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stfs f31,648(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// lis r8,-31888
	ctx.r8.s64 = -2089811968;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
	// stb r9,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r9.u8);
	// lwz r11,27128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27128);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8340F7C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82e0be78
	ctx.lr = 0x8340F7C8;
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

__attribute__((alias("__imp__sub_8340F7EC"))) PPC_WEAK_FUNC(sub_8340F7EC);
PPC_FUNC_IMPL(__imp__sub_8340F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340F7F0"))) PPC_WEAK_FUNC(sub_8340F7F0);
PPC_FUNC_IMPL(__imp__sub_8340F7F0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9664
	ctx.r4.s64 = ctx.r11.s64 + 9664;
	// bl 0x824886a0
	ctx.lr = 0x8340F81C;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,-14264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14264);
	// bl 0x82e8fc28
	ctx.lr = 0x8340F830;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-29144
	ctx.r31.s64 = ctx.r9.s64 + -29144;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-29144(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29144, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340F854;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259b670
	ctx.lr = 0x8340F85C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21056
	ctx.r4.s64 = ctx.r11.s64 + 21056;
	// bl 0x824886a0
	ctx.lr = 0x8340F870;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-14248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14248);
	// bl 0x82e8fc28
	ctx.lr = 0x8340F884;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340F8A4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x8340F8AC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22880
	ctx.r4.s64 = ctx.r11.s64 + 22880;
	// bl 0x824886a0
	ctx.lr = 0x8340F8C0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-14252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14252);
	// bl 0x82e8fc28
	ctx.lr = 0x8340F8D4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340F8F4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x8340F8FC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82e8fc28
	ctx.lr = 0x8340F910;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340F928;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8259b670
	ctx.lr = 0x8340F930;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12792
	ctx.r3.s64 = ctx.r11.s64 + -12792;
	// bl 0x833a1ff8
	ctx.lr = 0x8340F93C;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

__attribute__((alias("__imp__sub_8340F954"))) PPC_WEAK_FUNC(sub_8340F954);
PPC_FUNC_IMPL(__imp__sub_8340F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340F958"))) PPC_WEAK_FUNC(sub_8340F958);
PPC_FUNC_IMPL(__imp__sub_8340F958) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9792
	ctx.r4.s64 = ctx.r11.s64 + 9792;
	// bl 0x824886a0
	ctx.lr = 0x8340F984;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,-14264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14264);
	// bl 0x82e8fc28
	ctx.lr = 0x8340F998;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-28984
	ctx.r31.s64 = ctx.r9.s64 + -28984;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-28984(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28984, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340F9BC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259b670
	ctx.lr = 0x8340F9C4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21056
	ctx.r4.s64 = ctx.r11.s64 + 21056;
	// bl 0x824886a0
	ctx.lr = 0x8340F9D8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-14248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14248);
	// bl 0x82e8fc28
	ctx.lr = 0x8340F9EC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FA0C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x8340FA14;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29440
	ctx.r4.s64 = ctx.r11.s64 + 29440;
	// bl 0x824886a0
	ctx.lr = 0x8340FA28;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-14252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14252);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FA3C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FA5C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x8340FA64;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82e8fc28
	ctx.lr = 0x8340FA78;
	sub_82E8FC28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FA90;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8259b670
	ctx.lr = 0x8340FA98;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// bl 0x833a1ff8
	ctx.lr = 0x8340FAA4;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

__attribute__((alias("__imp__sub_8340FABC"))) PPC_WEAK_FUNC(sub_8340FABC);
PPC_FUNC_IMPL(__imp__sub_8340FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340FAC0"))) PPC_WEAK_FUNC(sub_8340FAC0);
PPC_FUNC_IMPL(__imp__sub_8340FAC0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3024
	ctx.r4.s64 = ctx.r11.s64 + 3024;
	// bl 0x824886a0
	ctx.lr = 0x8340FAEC;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,-14204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14204);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FB00;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-28824
	ctx.r31.s64 = ctx.r9.s64 + -28824;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-28824(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28824, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FB24;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8259b670
	ctx.lr = 0x8340FB2C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20848
	ctx.r4.s64 = ctx.r11.s64 + 20848;
	// bl 0x824886a0
	ctx.lr = 0x8340FB40;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-14140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14140);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FB54;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FB74;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x8340FB7C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20976
	ctx.r4.s64 = ctx.r11.s64 + 20976;
	// bl 0x824886a0
	ctx.lr = 0x8340FB90;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-14136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14136);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FBA4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FBC4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x8340FBCC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5072
	ctx.r4.s64 = ctx.r11.s64 + 5072;
	// bl 0x824886a0
	ctx.lr = 0x8340FBE0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,-14108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14108);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FBF4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FC14;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259b670
	ctx.lr = 0x8340FC1C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82e8fc28
	ctx.lr = 0x8340FC30;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FC4C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8259b670
	ctx.lr = 0x8340FC54;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// bl 0x833a1ff8
	ctx.lr = 0x8340FC60;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_8340FC78"))) PPC_WEAK_FUNC(sub_8340FC78);
PPC_FUNC_IMPL(__imp__sub_8340FC78) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24280
	ctx.r4.s64 = ctx.r11.s64 + 24280;
	// bl 0x824886a0
	ctx.lr = 0x8340FCA4;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-13452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13452);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FCB8;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-28624
	ctx.r31.s64 = ctx.r9.s64 + -28624;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-28624(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28624, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FCDC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x8340FCE4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e8fc28
	ctx.lr = 0x8340FCF8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FD18;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x8340FD20;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12552
	ctx.r3.s64 = ctx.r11.s64 + -12552;
	// bl 0x833a1ff8
	ctx.lr = 0x8340FD2C;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8340FD44"))) PPC_WEAK_FUNC(sub_8340FD44);
PPC_FUNC_IMPL(__imp__sub_8340FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340FD48"))) PPC_WEAK_FUNC(sub_8340FD48);
PPC_FUNC_IMPL(__imp__sub_8340FD48) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24408
	ctx.r4.s64 = ctx.r11.s64 + 24408;
	// bl 0x824886a0
	ctx.lr = 0x8340FD74;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-13452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13452);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FD88;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-28544
	ctx.r31.s64 = ctx.r9.s64 + -28544;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-28544(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28544, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FDAC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x8340FDB4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e8fc28
	ctx.lr = 0x8340FDC8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FDE8;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x8340FDF0;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12632
	ctx.r3.s64 = ctx.r11.s64 + -12632;
	// bl 0x833a1ff8
	ctx.lr = 0x8340FDFC;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8340FE14"))) PPC_WEAK_FUNC(sub_8340FE14);
PPC_FUNC_IMPL(__imp__sub_8340FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8340FE18"))) PPC_WEAK_FUNC(sub_8340FE18);
PPC_FUNC_IMPL(__imp__sub_8340FE18) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5944
	ctx.r4.s64 = ctx.r11.s64 + -5944;
	// bl 0x824886a0
	ctx.lr = 0x8340FE44;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r4,-29532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FE58;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-28464
	ctx.r31.s64 = ctx.r9.s64 + -28464;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-28464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28464, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FE7C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8259b670
	ctx.lr = 0x8340FE84;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22976
	ctx.r4.s64 = ctx.r11.s64 + -22976;
	// bl 0x824886a0
	ctx.lr = 0x8340FE98;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,-29528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29528);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FEAC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FECC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x8259b670
	ctx.lr = 0x8340FED4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22848
	ctx.r4.s64 = ctx.r11.s64 + -22848;
	// bl 0x824886a0
	ctx.lr = 0x8340FEE8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,-29524(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29524);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FEFC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FF1C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8259b670
	ctx.lr = 0x8340FF24;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22720
	ctx.r4.s64 = ctx.r11.s64 + -22720;
	// bl 0x824886a0
	ctx.lr = 0x8340FF38;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r4,-18948(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18948);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FF4C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FF6C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x8259b670
	ctx.lr = 0x8340FF74;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22592
	ctx.r4.s64 = ctx.r11.s64 + -22592;
	// bl 0x824886a0
	ctx.lr = 0x8340FF88;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,-18944(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FF9C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8340FFBC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x8259b670
	ctx.lr = 0x8340FFC4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22464
	ctx.r4.s64 = ctx.r11.s64 + -22464;
	// bl 0x824886a0
	ctx.lr = 0x8340FFD8;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-18940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18940);
	// bl 0x82e8fc28
	ctx.lr = 0x8340FFEC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341000C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x83410014;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22336
	ctx.r4.s64 = ctx.r11.s64 + -22336;
	// bl 0x824886a0
	ctx.lr = 0x83410028;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-18936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18936);
	// bl 0x82e8fc28
	ctx.lr = 0x8341003C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341005C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x83410064;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22208
	ctx.r4.s64 = ctx.r11.s64 + -22208;
	// bl 0x824886a0
	ctx.lr = 0x83410078;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,-29384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29384);
	// bl 0x82e8fc28
	ctx.lr = 0x8341008C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834100AC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259b670
	ctx.lr = 0x834100B4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22080
	ctx.r4.s64 = ctx.r11.s64 + -22080;
	// bl 0x824886a0
	ctx.lr = 0x834100C8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,-29372(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29372);
	// bl 0x82e8fc28
	ctx.lr = 0x834100DC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834100FC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8259b670
	ctx.lr = 0x83410104;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21952
	ctx.r4.s64 = ctx.r11.s64 + -21952;
	// bl 0x824886a0
	ctx.lr = 0x83410118;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,-29416(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29416);
	// bl 0x82e8fc28
	ctx.lr = 0x8341012C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341014C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x8259b670
	ctx.lr = 0x83410154;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10752
	ctx.r4.s64 = ctx.r11.s64 + -10752;
	// bl 0x824886a0
	ctx.lr = 0x83410168;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r4,-29412(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29412);
	// bl 0x82e8fc28
	ctx.lr = 0x8341017C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341019C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x8259b670
	ctx.lr = 0x834101A4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21800
	ctx.r4.s64 = ctx.r11.s64 + -21800;
	// bl 0x824886a0
	ctx.lr = 0x834101B8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r4,-29404(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29404);
	// bl 0x82e8fc28
	ctx.lr = 0x834101CC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834101EC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x8259b670
	ctx.lr = 0x834101F4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82e8fc28
	ctx.lr = 0x83410208;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83410224;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x8259b670
	ctx.lr = 0x8341022C;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// bl 0x833a1ff8
	ctx.lr = 0x83410238;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
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

__attribute__((alias("__imp__sub_83410250"))) PPC_WEAK_FUNC(sub_83410250);
PPC_FUNC_IMPL(__imp__sub_83410250) {
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
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21648
	ctx.r4.s64 = ctx.r11.s64 + -21648;
	// bl 0x824886a0
	ctx.lr = 0x8341027C;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,-18928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18928);
	// bl 0x82e8fc28
	ctx.lr = 0x83410290;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-27944
	ctx.r31.s64 = ctx.r9.s64 + -27944;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-27944(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27944, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834102B4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x8259b670
	ctx.lr = 0x834102BC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21520
	ctx.r4.s64 = ctx.r11.s64 + -21520;
	// bl 0x824886a0
	ctx.lr = 0x834102D0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,-29412(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29412);
	// bl 0x82e8fc28
	ctx.lr = 0x834102E4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83410304;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x8259b670
	ctx.lr = 0x8341030C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21392
	ctx.r4.s64 = ctx.r11.s64 + -21392;
	// bl 0x824886a0
	ctx.lr = 0x83410320;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,-18932(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18932);
	// bl 0x82e8fc28
	ctx.lr = 0x83410334;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83410354;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8259b670
	ctx.lr = 0x8341035C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21264
	ctx.r4.s64 = ctx.r11.s64 + -21264;
	// bl 0x824886a0
	ctx.lr = 0x83410370;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-18952(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18952);
	// bl 0x82e8fc28
	ctx.lr = 0x83410384;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834103A4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x834103AC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21136
	ctx.r4.s64 = ctx.r11.s64 + -21136;
	// bl 0x824886a0
	ctx.lr = 0x834103C0;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-18948(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18948);
	// bl 0x82e8fc28
	ctx.lr = 0x834103D4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834103F4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x834103FC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22592
	ctx.r4.s64 = ctx.r11.s64 + -22592;
	// bl 0x824886a0
	ctx.lr = 0x83410410;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,-18944(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	// bl 0x82e8fc28
	ctx.lr = 0x83410424;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83410444;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259b670
	ctx.lr = 0x8341044C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21008
	ctx.r4.s64 = ctx.r11.s64 + -21008;
	// bl 0x824886a0
	ctx.lr = 0x83410460;
	sub_824886A0(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,-18940(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18940);
	// bl 0x82e8fc28
	ctx.lr = 0x83410474;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x83410494;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8259b670
	ctx.lr = 0x8341049C;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20880
	ctx.r4.s64 = ctx.r11.s64 + -20880;
	// bl 0x824886a0
	ctx.lr = 0x834104B0;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,-29416(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29416);
	// bl 0x82e8fc28
	ctx.lr = 0x834104C4;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834104E4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x8259b670
	ctx.lr = 0x834104EC;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82e8fc28
	ctx.lr = 0x83410500;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341051C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x8259b670
	ctx.lr = 0x83410524;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12472
	ctx.r3.s64 = ctx.r11.s64 + -12472;
	// bl 0x833a1ff8
	ctx.lr = 0x83410530;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
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

__attribute__((alias("__imp__sub_83410548"))) PPC_WEAK_FUNC(sub_83410548);
PPC_FUNC_IMPL(__imp__sub_83410548) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7704
	ctx.r4.s64 = ctx.r11.s64 + -7704;
	// bl 0x824886a0
	ctx.lr = 0x83410574;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,-20956(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20956);
	// bl 0x82e8fc28
	ctx.lr = 0x83410588;
	sub_82E8FC28(ctx, base);
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r31,r9,-27584
	ctx.r31.s64 = ctx.r9.s64 + -27584;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,-27584(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27584, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834105AC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8259b670
	ctx.lr = 0x834105B4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26736
	ctx.r4.s64 = ctx.r11.s64 + 26736;
	// bl 0x824886a0
	ctx.lr = 0x834105C8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,-21052(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21052);
	// bl 0x82e8fc28
	ctx.lr = 0x834105DC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834105FC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259b670
	ctx.lr = 0x83410604;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x824886a0
	ctx.lr = 0x83410618;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,-21056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21056);
	// bl 0x82e8fc28
	ctx.lr = 0x8341062C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341064C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x8259b670
	ctx.lr = 0x83410654;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27376
	ctx.r4.s64 = ctx.r11.s64 + 27376;
	// bl 0x824886a0
	ctx.lr = 0x83410668;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-21028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21028);
	// bl 0x82e8fc28
	ctx.lr = 0x8341067C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341069C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8259b670
	ctx.lr = 0x834106A4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7576
	ctx.r4.s64 = ctx.r11.s64 + -7576;
	// bl 0x824886a0
	ctx.lr = 0x834106B8;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-20928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20928);
	// bl 0x82e8fc28
	ctx.lr = 0x834106CC;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834106EC;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259b670
	ctx.lr = 0x834106F4;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28784
	ctx.r4.s64 = ctx.r11.s64 + 28784;
	// bl 0x824886a0
	ctx.lr = 0x83410708;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,-20980(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20980);
	// bl 0x82e8fc28
	ctx.lr = 0x8341071C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341073C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8259b670
	ctx.lr = 0x83410744;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7448
	ctx.r4.s64 = ctx.r11.s64 + -7448;
	// bl 0x824886a0
	ctx.lr = 0x83410758;
	sub_824886A0(ctx, base);
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,-20968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20968);
	// bl 0x82e8fc28
	ctx.lr = 0x8341076C;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x8341078C;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x8259b670
	ctx.lr = 0x83410794;
	sub_8259B670(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82e8fc28
	ctx.lr = 0x834107A8;
	sub_82E8FC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x82d0bdd8
	ctx.lr = 0x834107C4;
	sub_82D0BDD8(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x8259b670
	ctx.lr = 0x834107CC;
	sub_8259B670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12312
	ctx.r3.s64 = ctx.r11.s64 + -12312;
	// bl 0x833a1ff8
	ctx.lr = 0x834107D8;
	sub_833A1FF8(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
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

__attribute__((alias("__imp__sub_834107F0"))) PPC_WEAK_FUNC(sub_834107F0);
PPC_FUNC_IMPL(__imp__sub_834107F0) {
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
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r31,r11,-17728
	ctx.r31.s64 = ctx.r11.s64 + -17728;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x8341081C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83410824;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,19812
	ctx.r11.s64 = ctx.r11.s64 + 19812;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,2608
	ctx.r10.s64 = ctx.r10.s64 + 2608;
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
	ctx.lr = 0x8341087C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x83410884;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,2312
	ctx.r11.s64 = ctx.r11.s64 + 2312;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,2584
	ctx.r10.s64 = ctx.r10.s64 + 2584;
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
	ctx.lr = 0x834108C4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x834108CC;
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

__attribute__((alias("__imp__sub_834108EC"))) PPC_WEAK_FUNC(sub_834108EC);
PPC_FUNC_IMPL(__imp__sub_834108EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834108F0"))) PPC_WEAK_FUNC(sub_834108F0);
PPC_FUNC_IMPL(__imp__sub_834108F0) {
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
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// addi r31,r11,-17544
	ctx.r31.s64 = ctx.r11.s64 + -17544;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x83410910;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83410918;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f13,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-23492
	ctx.r11.s64 = ctx.r11.s64 + -23492;
	// lfs f12,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,3008
	ctx.r10.s64 = ctx.r10.s64 + 3008;
	// li r9,0
	ctx.r9.s64 = 0;
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
	ctx.lr = 0x83410970;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x83410978;
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

__attribute__((alias("__imp__sub_8341098C"))) PPC_WEAK_FUNC(sub_8341098C);
PPC_FUNC_IMPL(__imp__sub_8341098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83410990"))) PPC_WEAK_FUNC(sub_83410990);
PPC_FUNC_IMPL(__imp__sub_83410990) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-27088
	ctx.r31.s64 = ctx.r10.s64 + -27088;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x834109C0;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-12216
	ctx.r3.s64 = ctx.r10.s64 + -12216;
	// bl 0x833a1ff8
	ctx.lr = 0x834109D4;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_834109E8"))) PPC_WEAK_FUNC(sub_834109E8);
PPC_FUNC_IMPL(__imp__sub_834109E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-27032
	ctx.r31.s64 = ctx.r10.s64 + -27032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410A18;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-12152
	ctx.r3.s64 = ctx.r10.s64 + -12152;
	// bl 0x833a1ff8
	ctx.lr = 0x83410A2C;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410A40"))) PPC_WEAK_FUNC(sub_83410A40);
PPC_FUNC_IMPL(__imp__sub_83410A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,6604
	ctx.r10.s64 = ctx.r10.s64 + 6604;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r9,r9,-11276
	ctx.r9.s64 = ctx.r9.s64 + -11276;
	// addi r8,r8,16380
	ctx.r8.s64 = ctx.r8.s64 + 16380;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-26992
	ctx.r11.s64 = ctx.r11.s64 + -26992;
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
	// vrlimi128 v63,v61,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 3));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83410A90"))) PPC_WEAK_FUNC(sub_83410A90);
PPC_FUNC_IMPL(__imp__sub_83410A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,6604
	ctx.r10.s64 = ctx.r10.s64 + 6604;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,-11276
	ctx.r9.s64 = ctx.r9.s64 + -11276;
	// addi r8,r8,-17024
	ctx.r8.s64 = ctx.r8.s64 + -17024;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-26976
	ctx.r11.s64 = ctx.r11.s64 + -26976;
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
	// vrlimi128 v63,v61,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 3));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83410AE0"))) PPC_WEAK_FUNC(sub_83410AE0);
PPC_FUNC_IMPL(__imp__sub_83410AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,6604
	ctx.r10.s64 = ctx.r10.s64 + 6604;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r9,r9,-11276
	ctx.r9.s64 = ctx.r9.s64 + -11276;
	// addi r8,r8,16428
	ctx.r8.s64 = ctx.r8.s64 + 16428;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-26960
	ctx.r11.s64 = ctx.r11.s64 + -26960;
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
	// vrlimi128 v63,v61,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 3));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83410B30"))) PPC_WEAK_FUNC(sub_83410B30);
PPC_FUNC_IMPL(__imp__sub_83410B30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26932
	ctx.r31.s64 = ctx.r10.s64 + -26932;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410B60;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-12056
	ctx.r3.s64 = ctx.r10.s64 + -12056;
	// bl 0x833a1ff8
	ctx.lr = 0x83410B74;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410B88"))) PPC_WEAK_FUNC(sub_83410B88);
PPC_FUNC_IMPL(__imp__sub_83410B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12088
	ctx.r3.s64 = ctx.r11.s64 + -12088;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83410B94"))) PPC_WEAK_FUNC(sub_83410B94);
PPC_FUNC_IMPL(__imp__sub_83410B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83410B98"))) PPC_WEAK_FUNC(sub_83410B98);
PPC_FUNC_IMPL(__imp__sub_83410B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83410BA4"))) PPC_WEAK_FUNC(sub_83410BA4);
PPC_FUNC_IMPL(__imp__sub_83410BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83410BA8"))) PPC_WEAK_FUNC(sub_83410BA8);
PPC_FUNC_IMPL(__imp__sub_83410BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,16404
	ctx.r11.s64 = ctx.r11.s64 + 16404;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r10,-4128
	ctx.r10.s64 = ctx.r10.s64 + -4128;
	// addi r9,r9,-4120
	ctx.r9.s64 = ctx.r9.s64 + -4120;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r8,-26832
	ctx.r11.s64 = ctx.r8.s64 + -26832;
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
	// vrlimi128 v63,v60,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 3));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83410BF0"))) PPC_WEAK_FUNC(sub_83410BF0);
PPC_FUNC_IMPL(__imp__sub_83410BF0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26800
	ctx.r31.s64 = ctx.r10.s64 + -26800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410C20;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-11992
	ctx.r3.s64 = ctx.r10.s64 + -11992;
	// bl 0x833a1ff8
	ctx.lr = 0x83410C34;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410C48"))) PPC_WEAK_FUNC(sub_83410C48);
PPC_FUNC_IMPL(__imp__sub_83410C48) {
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
	// bl 0x829fcd48
	ctx.lr = 0x83410C58;
	sub_829FCD48(ctx, base);
	// bl 0x829fd1b8
	ctx.lr = 0x83410C5C;
	sub_829FD1B8(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-11928
	ctx.r3.s64 = ctx.r11.s64 + -11928;
	// bl 0x833a1ff8
	ctx.lr = 0x83410C68;
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

__attribute__((alias("__imp__sub_83410C78"))) PPC_WEAK_FUNC(sub_83410C78);
PPC_FUNC_IMPL(__imp__sub_83410C78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26604
	ctx.r31.s64 = ctx.r10.s64 + -26604;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410CA8;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-11888
	ctx.r3.s64 = ctx.r10.s64 + -11888;
	// bl 0x833a1ff8
	ctx.lr = 0x83410CBC;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410CD0"))) PPC_WEAK_FUNC(sub_83410CD0);
PPC_FUNC_IMPL(__imp__sub_83410CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-18060
	ctx.r11.s64 = ctx.r11.s64 + -18060;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,-4188
	ctx.r9.s64 = ctx.r9.s64 + -4188;
	// addi r8,r8,1480
	ctx.r8.s64 = ctx.r8.s64 + 1480;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-26560
	ctx.r11.s64 = ctx.r11.s64 + -26560;
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
	// vrlimi128 v63,v61,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 3));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83410D20"))) PPC_WEAK_FUNC(sub_83410D20);
PPC_FUNC_IMPL(__imp__sub_83410D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,-4124
	ctx.r10.s64 = ctx.r10.s64 + -4124;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-26544
	ctx.r9.s64 = ctx.r9.s64 + -26544;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v61,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 3));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83410D5C"))) PPC_WEAK_FUNC(sub_83410D5C);
PPC_FUNC_IMPL(__imp__sub_83410D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83410D60"))) PPC_WEAK_FUNC(sub_83410D60);
PPC_FUNC_IMPL(__imp__sub_83410D60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26520
	ctx.r31.s64 = ctx.r10.s64 + -26520;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410D90;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-11824
	ctx.r3.s64 = ctx.r10.s64 + -11824;
	// bl 0x833a1ff8
	ctx.lr = 0x83410DA4;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410DB8"))) PPC_WEAK_FUNC(sub_83410DB8);
PPC_FUNC_IMPL(__imp__sub_83410DB8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26464
	ctx.r31.s64 = ctx.r10.s64 + -26464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410DE8;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-11760
	ctx.r3.s64 = ctx.r10.s64 + -11760;
	// bl 0x833a1ff8
	ctx.lr = 0x83410DFC;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410E10"))) PPC_WEAK_FUNC(sub_83410E10);
PPC_FUNC_IMPL(__imp__sub_83410E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-9180
	ctx.r11.s64 = ctx.r11.s64 + -9180;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r9,24284
	ctx.r9.s64 = ctx.r9.s64 + 24284;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r8,-26416
	ctx.r11.s64 = ctx.r8.s64 + -26416;
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

__attribute__((alias("__imp__sub_83410E58"))) PPC_WEAK_FUNC(sub_83410E58);
PPC_FUNC_IMPL(__imp__sub_83410E58) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26384
	ctx.r31.s64 = ctx.r10.s64 + -26384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410E88;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-11696
	ctx.r3.s64 = ctx.r10.s64 + -11696;
	// bl 0x833a1ff8
	ctx.lr = 0x83410E9C;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410EB0"))) PPC_WEAK_FUNC(sub_83410EB0);
PPC_FUNC_IMPL(__imp__sub_83410EB0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26344
	ctx.r31.s64 = ctx.r10.s64 + -26344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410EE0;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-11632
	ctx.r3.s64 = ctx.r10.s64 + -11632;
	// bl 0x833a1ff8
	ctx.lr = 0x83410EF4;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410F08"))) PPC_WEAK_FUNC(sub_83410F08);
PPC_FUNC_IMPL(__imp__sub_83410F08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26304
	ctx.r31.s64 = ctx.r10.s64 + -26304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410F38;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-11568
	ctx.r3.s64 = ctx.r10.s64 + -11568;
	// bl 0x833a1ff8
	ctx.lr = 0x83410F4C;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410F60"))) PPC_WEAK_FUNC(sub_83410F60);
PPC_FUNC_IMPL(__imp__sub_83410F60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-26252
	ctx.r31.s64 = ctx.r10.s64 + -26252;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825ecd58
	ctx.lr = 0x83410F90;
	sub_825ECD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-11504
	ctx.r3.s64 = ctx.r10.s64 + -11504;
	// bl 0x833a1ff8
	ctx.lr = 0x83410FA4;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83410FB8"))) PPC_WEAK_FUNC(sub_83410FB8);
PPC_FUNC_IMPL(__imp__sub_83410FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-18508
	ctx.r11.s64 = ctx.r11.s64 + -18508;
	// addi r10,r10,-8064
	ctx.r10.s64 = ctx.r10.s64 + -8064;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-26208
	ctx.r11.s64 = ctx.r8.s64 + -26208;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83411004"))) PPC_WEAK_FUNC(sub_83411004);
PPC_FUNC_IMPL(__imp__sub_83411004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411008"))) PPC_WEAK_FUNC(sub_83411008);
PPC_FUNC_IMPL(__imp__sub_83411008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,29916
	ctx.r4.s64 = ctx.r11.s64 + 29916;
	// addi r3,r10,-26192
	ctx.r3.s64 = ctx.r10.s64 + -26192;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341101C"))) PPC_WEAK_FUNC(sub_8341101C);
PPC_FUNC_IMPL(__imp__sub_8341101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411020"))) PPC_WEAK_FUNC(sub_83411020);
PPC_FUNC_IMPL(__imp__sub_83411020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-26172
	ctx.r3.s64 = ctx.r11.s64 + -26172;
	// b 0x82ea0ce8
	sub_82EA0CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411030"))) PPC_WEAK_FUNC(sub_83411030);
PPC_FUNC_IMPL(__imp__sub_83411030) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r11,-26108
	ctx.r31.s64 = ctx.r11.s64 + -26108;
	// addi r4,r10,16372
	ctx.r4.s64 = ctx.r10.s64 + 16372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x83411058;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,16360
	ctx.r4.s64 = ctx.r11.s64 + 16360;
	// bl 0x82e02670
	ctx.lr = 0x83411068;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82e02670
	ctx.lr = 0x83411078;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,16336
	ctx.r4.s64 = ctx.r11.s64 + 16336;
	// bl 0x82e02670
	ctx.lr = 0x83411088;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,16324
	ctx.r4.s64 = ctx.r11.s64 + 16324;
	// bl 0x82e02670
	ctx.lr = 0x83411098;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,16312
	ctx.r4.s64 = ctx.r11.s64 + 16312;
	// bl 0x82e02670
	ctx.lr = 0x834110A8;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,16300
	ctx.r4.s64 = ctx.r11.s64 + 16300;
	// bl 0x82e02670
	ctx.lr = 0x834110B8;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,16288
	ctx.r4.s64 = ctx.r11.s64 + 16288;
	// bl 0x82e02670
	ctx.lr = 0x834110C8;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r11,16276
	ctx.r4.s64 = ctx.r11.s64 + 16276;
	// bl 0x82e02670
	ctx.lr = 0x834110D8;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r11,16264
	ctx.r4.s64 = ctx.r11.s64 + 16264;
	// bl 0x82e02670
	ctx.lr = 0x834110E8;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,16252
	ctx.r4.s64 = ctx.r11.s64 + 16252;
	// bl 0x82e02670
	ctx.lr = 0x834110F8;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// bl 0x833a1ff8
	ctx.lr = 0x83411104;
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

__attribute__((alias("__imp__sub_83411118"))) PPC_WEAK_FUNC(sub_83411118);
PPC_FUNC_IMPL(__imp__sub_83411118) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r11,-26064
	ctx.r31.s64 = ctx.r11.s64 + -26064;
	// addi r4,r10,16444
	ctx.r4.s64 = ctx.r10.s64 + 16444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x83411140;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,16440
	ctx.r4.s64 = ctx.r11.s64 + 16440;
	// bl 0x82e02670
	ctx.lr = 0x83411150;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,16432
	ctx.r4.s64 = ctx.r11.s64 + 16432;
	// bl 0x82e02670
	ctx.lr = 0x83411160;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,16424
	ctx.r4.s64 = ctx.r11.s64 + 16424;
	// bl 0x82e02670
	ctx.lr = 0x83411170;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,16416
	ctx.r4.s64 = ctx.r11.s64 + 16416;
	// bl 0x82e02670
	ctx.lr = 0x83411180;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,16408
	ctx.r4.s64 = ctx.r11.s64 + 16408;
	// bl 0x82e02670
	ctx.lr = 0x83411190;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,16400
	ctx.r4.s64 = ctx.r11.s64 + 16400;
	// bl 0x82e02670
	ctx.lr = 0x834111A0;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,16392
	ctx.r4.s64 = ctx.r11.s64 + 16392;
	// bl 0x82e02670
	ctx.lr = 0x834111B0;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r11,16384
	ctx.r4.s64 = ctx.r11.s64 + 16384;
	// bl 0x82e02670
	ctx.lr = 0x834111C0;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// bl 0x833a1ff8
	ctx.lr = 0x834111CC;
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

__attribute__((alias("__imp__sub_834111E0"))) PPC_WEAK_FUNC(sub_834111E0);
PPC_FUNC_IMPL(__imp__sub_834111E0) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r11,-26028
	ctx.r31.s64 = ctx.r11.s64 + -26028;
	// addi r4,r10,16476
	ctx.r4.s64 = ctx.r10.s64 + 16476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x83411208;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,16464
	ctx.r4.s64 = ctx.r11.s64 + 16464;
	// bl 0x82e02670
	ctx.lr = 0x83411218;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,16452
	ctx.r4.s64 = ctx.r11.s64 + 16452;
	// bl 0x82e02670
	ctx.lr = 0x83411228;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-11184
	ctx.r3.s64 = ctx.r11.s64 + -11184;
	// bl 0x833a1ff8
	ctx.lr = 0x83411234;
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

__attribute__((alias("__imp__sub_83411248"))) PPC_WEAK_FUNC(sub_83411248);
PPC_FUNC_IMPL(__imp__sub_83411248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16572
	ctx.r4.s64 = ctx.r11.s64 + 16572;
	// addi r3,r10,-26014
	ctx.r3.s64 = ctx.r10.s64 + -26014;
	// b 0x82a06df0
	sub_82A06DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341125C"))) PPC_WEAK_FUNC(sub_8341125C);
PPC_FUNC_IMPL(__imp__sub_8341125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411260"))) PPC_WEAK_FUNC(sub_83411260);
PPC_FUNC_IMPL(__imp__sub_83411260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16612
	ctx.r4.s64 = ctx.r11.s64 + 16612;
	// addi r3,r10,-26013
	ctx.r3.s64 = ctx.r10.s64 + -26013;
	// b 0x82a07088
	sub_82A07088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411274"))) PPC_WEAK_FUNC(sub_83411274);
PPC_FUNC_IMPL(__imp__sub_83411274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411278"))) PPC_WEAK_FUNC(sub_83411278);
PPC_FUNC_IMPL(__imp__sub_83411278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16908
	ctx.r4.s64 = ctx.r11.s64 + 16908;
	// addi r3,r10,-26012
	ctx.r3.s64 = ctx.r10.s64 + -26012;
	// b 0x82a08090
	sub_82A08090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341128C"))) PPC_WEAK_FUNC(sub_8341128C);
PPC_FUNC_IMPL(__imp__sub_8341128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411290"))) PPC_WEAK_FUNC(sub_83411290);
PPC_FUNC_IMPL(__imp__sub_83411290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-5052
	ctx.r4.s64 = ctx.r11.s64 + -5052;
	// addi r3,r10,-26011
	ctx.r3.s64 = ctx.r10.s64 + -26011;
	// b 0x82a08118
	sub_82A08118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834112A4"))) PPC_WEAK_FUNC(sub_834112A4);
PPC_FUNC_IMPL(__imp__sub_834112A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834112A8"))) PPC_WEAK_FUNC(sub_834112A8);
PPC_FUNC_IMPL(__imp__sub_834112A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16916
	ctx.r4.s64 = ctx.r11.s64 + 16916;
	// addi r3,r10,-26010
	ctx.r3.s64 = ctx.r10.s64 + -26010;
	// b 0x82a081a0
	sub_82A081A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834112BC"))) PPC_WEAK_FUNC(sub_834112BC);
PPC_FUNC_IMPL(__imp__sub_834112BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834112C0"))) PPC_WEAK_FUNC(sub_834112C0);
PPC_FUNC_IMPL(__imp__sub_834112C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,5856
	ctx.r4.s64 = ctx.r11.s64 + 5856;
	// addi r3,r10,-26009
	ctx.r3.s64 = ctx.r10.s64 + -26009;
	// b 0x82a08228
	sub_82A08228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834112D4"))) PPC_WEAK_FUNC(sub_834112D4);
PPC_FUNC_IMPL(__imp__sub_834112D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834112D8"))) PPC_WEAK_FUNC(sub_834112D8);
PPC_FUNC_IMPL(__imp__sub_834112D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16928
	ctx.r4.s64 = ctx.r11.s64 + 16928;
	// addi r3,r10,-26008
	ctx.r3.s64 = ctx.r10.s64 + -26008;
	// b 0x82a082b0
	sub_82A082B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834112EC"))) PPC_WEAK_FUNC(sub_834112EC);
PPC_FUNC_IMPL(__imp__sub_834112EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834112F0"))) PPC_WEAK_FUNC(sub_834112F0);
PPC_FUNC_IMPL(__imp__sub_834112F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16940
	ctx.r4.s64 = ctx.r11.s64 + 16940;
	// addi r3,r10,-26007
	ctx.r3.s64 = ctx.r10.s64 + -26007;
	// b 0x82a08338
	sub_82A08338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411304"))) PPC_WEAK_FUNC(sub_83411304);
PPC_FUNC_IMPL(__imp__sub_83411304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411308"))) PPC_WEAK_FUNC(sub_83411308);
PPC_FUNC_IMPL(__imp__sub_83411308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16948
	ctx.r4.s64 = ctx.r11.s64 + 16948;
	// addi r3,r10,-26006
	ctx.r3.s64 = ctx.r10.s64 + -26006;
	// b 0x82a083c0
	sub_82A083C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341131C"))) PPC_WEAK_FUNC(sub_8341131C);
PPC_FUNC_IMPL(__imp__sub_8341131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411320"))) PPC_WEAK_FUNC(sub_83411320);
PPC_FUNC_IMPL(__imp__sub_83411320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16956
	ctx.r4.s64 = ctx.r11.s64 + 16956;
	// addi r3,r10,-26005
	ctx.r3.s64 = ctx.r10.s64 + -26005;
	// b 0x82a08448
	sub_82A08448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411334"))) PPC_WEAK_FUNC(sub_83411334);
PPC_FUNC_IMPL(__imp__sub_83411334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411338"))) PPC_WEAK_FUNC(sub_83411338);
PPC_FUNC_IMPL(__imp__sub_83411338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-26912
	ctx.r4.s64 = ctx.r11.s64 + -26912;
	// addi r3,r10,-26004
	ctx.r3.s64 = ctx.r10.s64 + -26004;
	// b 0x82a084d0
	sub_82A084D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341134C"))) PPC_WEAK_FUNC(sub_8341134C);
PPC_FUNC_IMPL(__imp__sub_8341134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411350"))) PPC_WEAK_FUNC(sub_83411350);
PPC_FUNC_IMPL(__imp__sub_83411350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,17020
	ctx.r4.s64 = ctx.r11.s64 + 17020;
	// addi r3,r10,-26003
	ctx.r3.s64 = ctx.r10.s64 + -26003;
	// b 0x82a08d10
	sub_82A08D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411364"))) PPC_WEAK_FUNC(sub_83411364);
PPC_FUNC_IMPL(__imp__sub_83411364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411368"))) PPC_WEAK_FUNC(sub_83411368);
PPC_FUNC_IMPL(__imp__sub_83411368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,17064
	ctx.r4.s64 = ctx.r11.s64 + 17064;
	// addi r3,r10,-26000
	ctx.r3.s64 = ctx.r10.s64 + -26000;
	// b 0x82a09130
	sub_82A09130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341137C"))) PPC_WEAK_FUNC(sub_8341137C);
PPC_FUNC_IMPL(__imp__sub_8341137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411380"))) PPC_WEAK_FUNC(sub_83411380);
PPC_FUNC_IMPL(__imp__sub_83411380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,576
	ctx.r4.s64 = ctx.r11.s64 + 576;
	// addi r3,r10,-25999
	ctx.r3.s64 = ctx.r10.s64 + -25999;
	// b 0x82a09bc0
	sub_82A09BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411394"))) PPC_WEAK_FUNC(sub_83411394);
PPC_FUNC_IMPL(__imp__sub_83411394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411398"))) PPC_WEAK_FUNC(sub_83411398);
PPC_FUNC_IMPL(__imp__sub_83411398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,17156
	ctx.r4.s64 = ctx.r11.s64 + 17156;
	// addi r3,r10,-25998
	ctx.r3.s64 = ctx.r10.s64 + -25998;
	// b 0x82a09c48
	sub_82A09C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834113AC"))) PPC_WEAK_FUNC(sub_834113AC);
PPC_FUNC_IMPL(__imp__sub_834113AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834113B0"))) PPC_WEAK_FUNC(sub_834113B0);
PPC_FUNC_IMPL(__imp__sub_834113B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,17204
	ctx.r4.s64 = ctx.r11.s64 + 17204;
	// addi r3,r10,-25995
	ctx.r3.s64 = ctx.r10.s64 + -25995;
	// b 0x82a0a3a0
	sub_82A0A3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834113C4"))) PPC_WEAK_FUNC(sub_834113C4);
PPC_FUNC_IMPL(__imp__sub_834113C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834113C8"))) PPC_WEAK_FUNC(sub_834113C8);
PPC_FUNC_IMPL(__imp__sub_834113C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,17256
	ctx.r4.s64 = ctx.r11.s64 + 17256;
	// addi r3,r10,-25992
	ctx.r3.s64 = ctx.r10.s64 + -25992;
	// b 0x82a0a738
	sub_82A0A738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834113DC"))) PPC_WEAK_FUNC(sub_834113DC);
PPC_FUNC_IMPL(__imp__sub_834113DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834113E0"))) PPC_WEAK_FUNC(sub_834113E0);
PPC_FUNC_IMPL(__imp__sub_834113E0) {
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
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,3652
	ctx.r4.s64 = ctx.r11.s64 + 3652;
	// addi r3,r10,-24152
	ctx.r3.s64 = ctx.r10.s64 + -24152;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e07c38
	ctx.lr = 0x83411404;
	sub_82E07C38(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-11024
	ctx.r3.s64 = ctx.r11.s64 + -11024;
	// bl 0x833a1ff8
	ctx.lr = 0x83411410;
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

__attribute__((alias("__imp__sub_83411420"))) PPC_WEAK_FUNC(sub_83411420);
PPC_FUNC_IMPL(__imp__sub_83411420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,31848
	ctx.r11.s64 = ctx.r11.s64 + 31848;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-24064
	ctx.r9.s64 = ctx.r9.s64 + -24064;
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

__attribute__((alias("__imp__sub_83411460"))) PPC_WEAK_FUNC(sub_83411460);
PPC_FUNC_IMPL(__imp__sub_83411460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,-24048
	ctx.r10.s64 = ctx.r10.s64 + -24048;
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

__attribute__((alias("__imp__sub_8341148C"))) PPC_WEAK_FUNC(sub_8341148C);
PPC_FUNC_IMPL(__imp__sub_8341148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411490"))) PPC_WEAK_FUNC(sub_83411490);
PPC_FUNC_IMPL(__imp__sub_83411490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// lwz r11,-29960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29960);
	// stw r11,-24072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834114A4"))) PPC_WEAK_FUNC(sub_834114A4);
PPC_FUNC_IMPL(__imp__sub_834114A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834114A8"))) PPC_WEAK_FUNC(sub_834114A8);
PPC_FUNC_IMPL(__imp__sub_834114A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10976
	ctx.r3.s64 = ctx.r11.s64 + -10976;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834114B4"))) PPC_WEAK_FUNC(sub_834114B4);
PPC_FUNC_IMPL(__imp__sub_834114B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834114B8"))) PPC_WEAK_FUNC(sub_834114B8);
PPC_FUNC_IMPL(__imp__sub_834114B8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r11,-23984
	ctx.r31.s64 = ctx.r11.s64 + -23984;
	// addi r4,r10,17248
	ctx.r4.s64 = ctx.r10.s64 + 17248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x834114E0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-30876
	ctx.r4.s64 = ctx.r11.s64 + -30876;
	// bl 0x82e02670
	ctx.lr = 0x834114F0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-30884
	ctx.r4.s64 = ctx.r11.s64 + -30884;
	// bl 0x82e02670
	ctx.lr = 0x83411500;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-30892
	ctx.r4.s64 = ctx.r11.s64 + -30892;
	// bl 0x82e02670
	ctx.lr = 0x83411510;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,-30900
	ctx.r4.s64 = ctx.r11.s64 + -30900;
	// bl 0x82e02670
	ctx.lr = 0x83411520;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,-30908
	ctx.r4.s64 = ctx.r11.s64 + -30908;
	// bl 0x82e02670
	ctx.lr = 0x83411530;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-30916
	ctx.r4.s64 = ctx.r11.s64 + -30916;
	// bl 0x82e02670
	ctx.lr = 0x83411540;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,-30924
	ctx.r4.s64 = ctx.r11.s64 + -30924;
	// bl 0x82e02670
	ctx.lr = 0x83411550;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r11,-30932
	ctx.r4.s64 = ctx.r11.s64 + -30932;
	// bl 0x82e02670
	ctx.lr = 0x83411560;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r11,-30940
	ctx.r4.s64 = ctx.r11.s64 + -30940;
	// bl 0x82e02670
	ctx.lr = 0x83411570;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,-30948
	ctx.r4.s64 = ctx.r11.s64 + -30948;
	// bl 0x82e02670
	ctx.lr = 0x83411580;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r4,r11,-30956
	ctx.r4.s64 = ctx.r11.s64 + -30956;
	// bl 0x82e02670
	ctx.lr = 0x83411590;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r11,-30964
	ctx.r4.s64 = ctx.r11.s64 + -30964;
	// bl 0x82e02670
	ctx.lr = 0x834115A0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r4,r11,-30972
	ctx.r4.s64 = ctx.r11.s64 + -30972;
	// bl 0x82e02670
	ctx.lr = 0x834115B0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r4,r11,-30980
	ctx.r4.s64 = ctx.r11.s64 + -30980;
	// bl 0x82e02670
	ctx.lr = 0x834115C0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r4,r11,-30988
	ctx.r4.s64 = ctx.r11.s64 + -30988;
	// bl 0x82e02670
	ctx.lr = 0x834115D0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r11,-30996
	ctx.r4.s64 = ctx.r11.s64 + -30996;
	// bl 0x82e02670
	ctx.lr = 0x834115E0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r11,-31004
	ctx.r4.s64 = ctx.r11.s64 + -31004;
	// bl 0x82e02670
	ctx.lr = 0x834115F0;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r11,-25344
	ctx.r4.s64 = ctx.r11.s64 + -25344;
	// bl 0x82e02670
	ctx.lr = 0x83411600;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// addi r4,r11,-17600
	ctx.r4.s64 = ctx.r11.s64 + -17600;
	// bl 0x82e02670
	ctx.lr = 0x83411610;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-17604
	ctx.r4.s64 = ctx.r11.s64 + -17604;
	// bl 0x82e02670
	ctx.lr = 0x83411620;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,-21672
	ctx.r4.s64 = ctx.r11.s64 + -21672;
	// bl 0x82e02670
	ctx.lr = 0x83411630;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r4,r11,-17608
	ctx.r4.s64 = ctx.r11.s64 + -17608;
	// bl 0x82e02670
	ctx.lr = 0x83411640;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r4,r11,-17612
	ctx.r4.s64 = ctx.r11.s64 + -17612;
	// bl 0x82e02670
	ctx.lr = 0x83411650;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-17616
	ctx.r4.s64 = ctx.r11.s64 + -17616;
	// bl 0x82e02670
	ctx.lr = 0x83411660;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r11,-17620
	ctx.r4.s64 = ctx.r11.s64 + -17620;
	// bl 0x82e02670
	ctx.lr = 0x83411670;
	sub_82E02670(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r11,-24984
	ctx.r4.s64 = ctx.r11.s64 + -24984;
	// bl 0x82e02670
	ctx.lr = 0x83411680;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r4,r11,-31012
	ctx.r4.s64 = ctx.r11.s64 + -31012;
	// bl 0x82e02670
	ctx.lr = 0x83411690;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-31020
	ctx.r4.s64 = ctx.r11.s64 + -31020;
	// bl 0x82e02670
	ctx.lr = 0x834116A0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// addi r4,r11,-31028
	ctx.r4.s64 = ctx.r11.s64 + -31028;
	// bl 0x82e02670
	ctx.lr = 0x834116B0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r4,r11,-31036
	ctx.r4.s64 = ctx.r11.s64 + -31036;
	// bl 0x82e02670
	ctx.lr = 0x834116C0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r4,r11,-31044
	ctx.r4.s64 = ctx.r11.s64 + -31044;
	// bl 0x82e02670
	ctx.lr = 0x834116D0;
	sub_82E02670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,18904
	ctx.r4.s64 = ctx.r11.s64 + 18904;
	// bl 0x82e02670
	ctx.lr = 0x834116E0;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// bl 0x833a1ff8
	ctx.lr = 0x834116EC;
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

__attribute__((alias("__imp__sub_83411700"))) PPC_WEAK_FUNC(sub_83411700);
PPC_FUNC_IMPL(__imp__sub_83411700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,-23824
	ctx.r10.s64 = ctx.r10.s64 + -23824;
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

__attribute__((alias("__imp__sub_8341172C"))) PPC_WEAK_FUNC(sub_8341172C);
PPC_FUNC_IMPL(__imp__sub_8341172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411730"))) PPC_WEAK_FUNC(sub_83411730);
PPC_FUNC_IMPL(__imp__sub_83411730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30356
	ctx.r4.s64 = ctx.r11.s64 + -30356;
	// addi r3,r10,-23808
	ctx.r3.s64 = ctx.r10.s64 + -23808;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411744"))) PPC_WEAK_FUNC(sub_83411744);
PPC_FUNC_IMPL(__imp__sub_83411744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411748"))) PPC_WEAK_FUNC(sub_83411748);
PPC_FUNC_IMPL(__imp__sub_83411748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30348
	ctx.r4.s64 = ctx.r11.s64 + -30348;
	// addi r3,r10,-23804
	ctx.r3.s64 = ctx.r10.s64 + -23804;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341175C"))) PPC_WEAK_FUNC(sub_8341175C);
PPC_FUNC_IMPL(__imp__sub_8341175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411760"))) PPC_WEAK_FUNC(sub_83411760);
PPC_FUNC_IMPL(__imp__sub_83411760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30336
	ctx.r4.s64 = ctx.r11.s64 + -30336;
	// addi r3,r10,-23800
	ctx.r3.s64 = ctx.r10.s64 + -23800;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411774"))) PPC_WEAK_FUNC(sub_83411774);
PPC_FUNC_IMPL(__imp__sub_83411774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411778"))) PPC_WEAK_FUNC(sub_83411778);
PPC_FUNC_IMPL(__imp__sub_83411778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30320
	ctx.r4.s64 = ctx.r11.s64 + -30320;
	// addi r3,r10,-23796
	ctx.r3.s64 = ctx.r10.s64 + -23796;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341178C"))) PPC_WEAK_FUNC(sub_8341178C);
PPC_FUNC_IMPL(__imp__sub_8341178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411790"))) PPC_WEAK_FUNC(sub_83411790);
PPC_FUNC_IMPL(__imp__sub_83411790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30304
	ctx.r4.s64 = ctx.r11.s64 + -30304;
	// addi r3,r10,-23792
	ctx.r3.s64 = ctx.r10.s64 + -23792;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834117A4"))) PPC_WEAK_FUNC(sub_834117A4);
PPC_FUNC_IMPL(__imp__sub_834117A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834117A8"))) PPC_WEAK_FUNC(sub_834117A8);
PPC_FUNC_IMPL(__imp__sub_834117A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30284
	ctx.r4.s64 = ctx.r11.s64 + -30284;
	// addi r3,r10,-23788
	ctx.r3.s64 = ctx.r10.s64 + -23788;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834117BC"))) PPC_WEAK_FUNC(sub_834117BC);
PPC_FUNC_IMPL(__imp__sub_834117BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834117C0"))) PPC_WEAK_FUNC(sub_834117C0);
PPC_FUNC_IMPL(__imp__sub_834117C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30268
	ctx.r4.s64 = ctx.r11.s64 + -30268;
	// addi r3,r10,-23784
	ctx.r3.s64 = ctx.r10.s64 + -23784;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834117D4"))) PPC_WEAK_FUNC(sub_834117D4);
PPC_FUNC_IMPL(__imp__sub_834117D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834117D8"))) PPC_WEAK_FUNC(sub_834117D8);
PPC_FUNC_IMPL(__imp__sub_834117D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,4492
	ctx.r4.s64 = ctx.r11.s64 + 4492;
	// addi r3,r10,-23780
	ctx.r3.s64 = ctx.r10.s64 + -23780;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834117EC"))) PPC_WEAK_FUNC(sub_834117EC);
PPC_FUNC_IMPL(__imp__sub_834117EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834117F0"))) PPC_WEAK_FUNC(sub_834117F0);
PPC_FUNC_IMPL(__imp__sub_834117F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30256
	ctx.r4.s64 = ctx.r11.s64 + -30256;
	// addi r3,r10,-23776
	ctx.r3.s64 = ctx.r10.s64 + -23776;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411804"))) PPC_WEAK_FUNC(sub_83411804);
PPC_FUNC_IMPL(__imp__sub_83411804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411808"))) PPC_WEAK_FUNC(sub_83411808);
PPC_FUNC_IMPL(__imp__sub_83411808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,18252
	ctx.r4.s64 = ctx.r11.s64 + 18252;
	// addi r3,r10,-23772
	ctx.r3.s64 = ctx.r10.s64 + -23772;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341181C"))) PPC_WEAK_FUNC(sub_8341181C);
PPC_FUNC_IMPL(__imp__sub_8341181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411820"))) PPC_WEAK_FUNC(sub_83411820);
PPC_FUNC_IMPL(__imp__sub_83411820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30248
	ctx.r4.s64 = ctx.r11.s64 + -30248;
	// addi r3,r10,-23768
	ctx.r3.s64 = ctx.r10.s64 + -23768;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411834"))) PPC_WEAK_FUNC(sub_83411834);
PPC_FUNC_IMPL(__imp__sub_83411834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411838"))) PPC_WEAK_FUNC(sub_83411838);
PPC_FUNC_IMPL(__imp__sub_83411838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30668
	ctx.r4.s64 = ctx.r11.s64 + -30668;
	// addi r3,r10,-23764
	ctx.r3.s64 = ctx.r10.s64 + -23764;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341184C"))) PPC_WEAK_FUNC(sub_8341184C);
PPC_FUNC_IMPL(__imp__sub_8341184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411850"))) PPC_WEAK_FUNC(sub_83411850);
PPC_FUNC_IMPL(__imp__sub_83411850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30244
	ctx.r4.s64 = ctx.r11.s64 + -30244;
	// addi r3,r10,-23760
	ctx.r3.s64 = ctx.r10.s64 + -23760;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411864"))) PPC_WEAK_FUNC(sub_83411864);
PPC_FUNC_IMPL(__imp__sub_83411864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411868"))) PPC_WEAK_FUNC(sub_83411868);
PPC_FUNC_IMPL(__imp__sub_83411868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30236
	ctx.r4.s64 = ctx.r11.s64 + -30236;
	// addi r3,r10,-23756
	ctx.r3.s64 = ctx.r10.s64 + -23756;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341187C"))) PPC_WEAK_FUNC(sub_8341187C);
PPC_FUNC_IMPL(__imp__sub_8341187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411880"))) PPC_WEAK_FUNC(sub_83411880);
PPC_FUNC_IMPL(__imp__sub_83411880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,20216
	ctx.r4.s64 = ctx.r11.s64 + 20216;
	// addi r3,r10,-23752
	ctx.r3.s64 = ctx.r10.s64 + -23752;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411894"))) PPC_WEAK_FUNC(sub_83411894);
PPC_FUNC_IMPL(__imp__sub_83411894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411898"))) PPC_WEAK_FUNC(sub_83411898);
PPC_FUNC_IMPL(__imp__sub_83411898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30228
	ctx.r4.s64 = ctx.r11.s64 + -30228;
	// addi r3,r10,-23748
	ctx.r3.s64 = ctx.r10.s64 + -23748;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834118AC"))) PPC_WEAK_FUNC(sub_834118AC);
PPC_FUNC_IMPL(__imp__sub_834118AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834118B0"))) PPC_WEAK_FUNC(sub_834118B0);
PPC_FUNC_IMPL(__imp__sub_834118B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30220
	ctx.r4.s64 = ctx.r11.s64 + -30220;
	// addi r3,r10,-23744
	ctx.r3.s64 = ctx.r10.s64 + -23744;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834118C4"))) PPC_WEAK_FUNC(sub_834118C4);
PPC_FUNC_IMPL(__imp__sub_834118C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834118C8"))) PPC_WEAK_FUNC(sub_834118C8);
PPC_FUNC_IMPL(__imp__sub_834118C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30212
	ctx.r4.s64 = ctx.r11.s64 + -30212;
	// addi r3,r10,-23740
	ctx.r3.s64 = ctx.r10.s64 + -23740;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834118DC"))) PPC_WEAK_FUNC(sub_834118DC);
PPC_FUNC_IMPL(__imp__sub_834118DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834118E0"))) PPC_WEAK_FUNC(sub_834118E0);
PPC_FUNC_IMPL(__imp__sub_834118E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30196
	ctx.r4.s64 = ctx.r11.s64 + -30196;
	// addi r3,r10,-23736
	ctx.r3.s64 = ctx.r10.s64 + -23736;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834118F4"))) PPC_WEAK_FUNC(sub_834118F4);
PPC_FUNC_IMPL(__imp__sub_834118F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834118F8"))) PPC_WEAK_FUNC(sub_834118F8);
PPC_FUNC_IMPL(__imp__sub_834118F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30176
	ctx.r4.s64 = ctx.r11.s64 + -30176;
	// addi r3,r10,-23732
	ctx.r3.s64 = ctx.r10.s64 + -23732;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341190C"))) PPC_WEAK_FUNC(sub_8341190C);
PPC_FUNC_IMPL(__imp__sub_8341190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411910"))) PPC_WEAK_FUNC(sub_83411910);
PPC_FUNC_IMPL(__imp__sub_83411910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30164
	ctx.r4.s64 = ctx.r11.s64 + -30164;
	// addi r3,r10,-23728
	ctx.r3.s64 = ctx.r10.s64 + -23728;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411924"))) PPC_WEAK_FUNC(sub_83411924);
PPC_FUNC_IMPL(__imp__sub_83411924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411928"))) PPC_WEAK_FUNC(sub_83411928);
PPC_FUNC_IMPL(__imp__sub_83411928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30152
	ctx.r4.s64 = ctx.r11.s64 + -30152;
	// addi r3,r10,-23724
	ctx.r3.s64 = ctx.r10.s64 + -23724;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341193C"))) PPC_WEAK_FUNC(sub_8341193C);
PPC_FUNC_IMPL(__imp__sub_8341193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411940"))) PPC_WEAK_FUNC(sub_83411940);
PPC_FUNC_IMPL(__imp__sub_83411940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30140
	ctx.r4.s64 = ctx.r11.s64 + -30140;
	// addi r3,r10,-23720
	ctx.r3.s64 = ctx.r10.s64 + -23720;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411954"))) PPC_WEAK_FUNC(sub_83411954);
PPC_FUNC_IMPL(__imp__sub_83411954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411958"))) PPC_WEAK_FUNC(sub_83411958);
PPC_FUNC_IMPL(__imp__sub_83411958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30116
	ctx.r4.s64 = ctx.r11.s64 + -30116;
	// addi r3,r10,-23716
	ctx.r3.s64 = ctx.r10.s64 + -23716;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341196C"))) PPC_WEAK_FUNC(sub_8341196C);
PPC_FUNC_IMPL(__imp__sub_8341196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411970"))) PPC_WEAK_FUNC(sub_83411970);
PPC_FUNC_IMPL(__imp__sub_83411970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30096
	ctx.r4.s64 = ctx.r11.s64 + -30096;
	// addi r3,r10,-23712
	ctx.r3.s64 = ctx.r10.s64 + -23712;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411984"))) PPC_WEAK_FUNC(sub_83411984);
PPC_FUNC_IMPL(__imp__sub_83411984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411988"))) PPC_WEAK_FUNC(sub_83411988);
PPC_FUNC_IMPL(__imp__sub_83411988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30076
	ctx.r4.s64 = ctx.r11.s64 + -30076;
	// addi r3,r10,-23708
	ctx.r3.s64 = ctx.r10.s64 + -23708;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8341199C"))) PPC_WEAK_FUNC(sub_8341199C);
PPC_FUNC_IMPL(__imp__sub_8341199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834119A0"))) PPC_WEAK_FUNC(sub_834119A0);
PPC_FUNC_IMPL(__imp__sub_834119A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30064
	ctx.r4.s64 = ctx.r11.s64 + -30064;
	// addi r3,r10,-23704
	ctx.r3.s64 = ctx.r10.s64 + -23704;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834119B4"))) PPC_WEAK_FUNC(sub_834119B4);
PPC_FUNC_IMPL(__imp__sub_834119B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834119B8"))) PPC_WEAK_FUNC(sub_834119B8);
PPC_FUNC_IMPL(__imp__sub_834119B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,15956
	ctx.r4.s64 = ctx.r11.s64 + 15956;
	// addi r3,r10,-23700
	ctx.r3.s64 = ctx.r10.s64 + -23700;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834119CC"))) PPC_WEAK_FUNC(sub_834119CC);
PPC_FUNC_IMPL(__imp__sub_834119CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834119D0"))) PPC_WEAK_FUNC(sub_834119D0);
PPC_FUNC_IMPL(__imp__sub_834119D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30060
	ctx.r4.s64 = ctx.r11.s64 + -30060;
	// addi r3,r10,-23696
	ctx.r3.s64 = ctx.r10.s64 + -23696;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834119E4"))) PPC_WEAK_FUNC(sub_834119E4);
PPC_FUNC_IMPL(__imp__sub_834119E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834119E8"))) PPC_WEAK_FUNC(sub_834119E8);
PPC_FUNC_IMPL(__imp__sub_834119E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30056
	ctx.r4.s64 = ctx.r11.s64 + -30056;
	// addi r3,r10,-23692
	ctx.r3.s64 = ctx.r10.s64 + -23692;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834119FC"))) PPC_WEAK_FUNC(sub_834119FC);
PPC_FUNC_IMPL(__imp__sub_834119FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411A00"))) PPC_WEAK_FUNC(sub_83411A00);
PPC_FUNC_IMPL(__imp__sub_83411A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30052
	ctx.r4.s64 = ctx.r11.s64 + -30052;
	// addi r3,r10,-23688
	ctx.r3.s64 = ctx.r10.s64 + -23688;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411A14"))) PPC_WEAK_FUNC(sub_83411A14);
PPC_FUNC_IMPL(__imp__sub_83411A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411A18"))) PPC_WEAK_FUNC(sub_83411A18);
PPC_FUNC_IMPL(__imp__sub_83411A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30048
	ctx.r4.s64 = ctx.r11.s64 + -30048;
	// addi r3,r10,-23684
	ctx.r3.s64 = ctx.r10.s64 + -23684;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411A2C"))) PPC_WEAK_FUNC(sub_83411A2C);
PPC_FUNC_IMPL(__imp__sub_83411A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411A30"))) PPC_WEAK_FUNC(sub_83411A30);
PPC_FUNC_IMPL(__imp__sub_83411A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30044
	ctx.r4.s64 = ctx.r11.s64 + -30044;
	// addi r3,r10,-23680
	ctx.r3.s64 = ctx.r10.s64 + -23680;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411A44"))) PPC_WEAK_FUNC(sub_83411A44);
PPC_FUNC_IMPL(__imp__sub_83411A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411A48"))) PPC_WEAK_FUNC(sub_83411A48);
PPC_FUNC_IMPL(__imp__sub_83411A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30028
	ctx.r4.s64 = ctx.r11.s64 + -30028;
	// addi r3,r10,-23676
	ctx.r3.s64 = ctx.r10.s64 + -23676;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411A5C"))) PPC_WEAK_FUNC(sub_83411A5C);
PPC_FUNC_IMPL(__imp__sub_83411A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411A60"))) PPC_WEAK_FUNC(sub_83411A60);
PPC_FUNC_IMPL(__imp__sub_83411A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30016
	ctx.r4.s64 = ctx.r11.s64 + -30016;
	// addi r3,r10,-23672
	ctx.r3.s64 = ctx.r10.s64 + -23672;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411A74"))) PPC_WEAK_FUNC(sub_83411A74);
PPC_FUNC_IMPL(__imp__sub_83411A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411A78"))) PPC_WEAK_FUNC(sub_83411A78);
PPC_FUNC_IMPL(__imp__sub_83411A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30000
	ctx.r4.s64 = ctx.r11.s64 + -30000;
	// addi r3,r10,-23668
	ctx.r3.s64 = ctx.r10.s64 + -23668;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411A8C"))) PPC_WEAK_FUNC(sub_83411A8C);
PPC_FUNC_IMPL(__imp__sub_83411A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411A90"))) PPC_WEAK_FUNC(sub_83411A90);
PPC_FUNC_IMPL(__imp__sub_83411A90) {
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
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// addi r3,r10,-23620
	ctx.r3.s64 = ctx.r10.s64 + -23620;
	// bl 0x82e02670
	ctx.lr = 0x83411AB0;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// bl 0x833a1ff8
	ctx.lr = 0x83411ABC;
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

__attribute__((alias("__imp__sub_83411ACC"))) PPC_WEAK_FUNC(sub_83411ACC);
PPC_FUNC_IMPL(__imp__sub_83411ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411AD0"))) PPC_WEAK_FUNC(sub_83411AD0);
PPC_FUNC_IMPL(__imp__sub_83411AD0) {
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
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,18588
	ctx.r4.s64 = ctx.r11.s64 + 18588;
	// addi r3,r10,-23616
	ctx.r3.s64 = ctx.r10.s64 + -23616;
	// bl 0x82e02670
	ctx.lr = 0x83411AF0;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// bl 0x833a1ff8
	ctx.lr = 0x83411AFC;
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

__attribute__((alias("__imp__sub_83411B0C"))) PPC_WEAK_FUNC(sub_83411B0C);
PPC_FUNC_IMPL(__imp__sub_83411B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411B10"))) PPC_WEAK_FUNC(sub_83411B10);
PPC_FUNC_IMPL(__imp__sub_83411B10) {
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
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,18600
	ctx.r4.s64 = ctx.r11.s64 + 18600;
	// addi r3,r10,-23612
	ctx.r3.s64 = ctx.r10.s64 + -23612;
	// bl 0x82e02670
	ctx.lr = 0x83411B30;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10832
	ctx.r3.s64 = ctx.r11.s64 + -10832;
	// bl 0x833a1ff8
	ctx.lr = 0x83411B3C;
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

__attribute__((alias("__imp__sub_83411B4C"))) PPC_WEAK_FUNC(sub_83411B4C);
PPC_FUNC_IMPL(__imp__sub_83411B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411B50"))) PPC_WEAK_FUNC(sub_83411B50);
PPC_FUNC_IMPL(__imp__sub_83411B50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x83411B58;
	__savegprlr_21(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r22,-31884
	ctx.r22.s64 = -2089549824;
	// addi r24,r11,-29976
	ctx.r24.s64 = ctx.r11.s64 + -29976;
	// addi r21,r22,-29496
	ctx.r21.s64 = ctx.r22.s64 + -29496;
	// lwz r23,-29976(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29976);
	// lwz r11,-68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -68);
	// lwz r10,-64(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -64);
	// lwz r9,-60(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + -60);
	// lwz r8,-56(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + -56);
	// lwz r7,-52(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + -52);
	// lwz r6,-48(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + -48);
	// lwz r5,-44(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -44);
	// lwz r4,-40(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -40);
	// lwz r3,-36(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -36);
	// lwz r31,-32(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32);
	// lwz r30,-28(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28);
	// lwz r29,-24(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24);
	// lwz r28,-20(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -20);
	// lwz r27,-16(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// lwz r26,-12(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + -12);
	// lwz r25,-8(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// lwz r24,-4(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// stw r11,-29496(r22)
	PPC_STORE_U32(ctx.r22.u32 + -29496, ctx.r11.u32);
	// stw r10,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r10.u32);
	// stw r9,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r9.u32);
	// stw r8,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r8.u32);
	// stw r7,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r7.u32);
	// stw r6,60(r21)
	PPC_STORE_U32(ctx.r21.u32 + 60, ctx.r6.u32);
	// stw r5,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r5.u32);
	// stw r4,84(r21)
	PPC_STORE_U32(ctx.r21.u32 + 84, ctx.r4.u32);
	// stw r3,96(r21)
	PPC_STORE_U32(ctx.r21.u32 + 96, ctx.r3.u32);
	// stw r31,108(r21)
	PPC_STORE_U32(ctx.r21.u32 + 108, ctx.r31.u32);
	// stw r30,120(r21)
	PPC_STORE_U32(ctx.r21.u32 + 120, ctx.r30.u32);
	// stw r29,132(r21)
	PPC_STORE_U32(ctx.r21.u32 + 132, ctx.r29.u32);
	// stw r28,144(r21)
	PPC_STORE_U32(ctx.r21.u32 + 144, ctx.r28.u32);
	// stw r27,156(r21)
	PPC_STORE_U32(ctx.r21.u32 + 156, ctx.r27.u32);
	// stw r26,168(r21)
	PPC_STORE_U32(ctx.r21.u32 + 168, ctx.r26.u32);
	// stw r25,180(r21)
	PPC_STORE_U32(ctx.r21.u32 + 180, ctx.r25.u32);
	// stw r24,192(r21)
	PPC_STORE_U32(ctx.r21.u32 + 192, ctx.r24.u32);
	// stw r23,204(r21)
	PPC_STORE_U32(ctx.r21.u32 + 204, ctx.r23.u32);
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83411BFC"))) PPC_WEAK_FUNC(sub_83411BFC);
PPC_FUNC_IMPL(__imp__sub_83411BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411C00"))) PPC_WEAK_FUNC(sub_83411C00);
PPC_FUNC_IMPL(__imp__sub_83411C00) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a2d238
	ctx.lr = 0x83411C1C;
	sub_82A2D238(ctx, base);
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r31,r10,-23432
	ctx.r31.s64 = ctx.r10.s64 + -23432;
	// stw r11,-23432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23432, ctx.r11.u32);
	// bl 0x82a2d238
	ctx.lr = 0x83411C38;
	sub_82A2D238(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82a2d238
	ctx.lr = 0x83411C48;
	sub_82A2D238(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a2d238
	ctx.lr = 0x83411C58;
	sub_82A2D238(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a2d238
	ctx.lr = 0x83411C68;
	sub_82A2D238(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82a2d238
	ctx.lr = 0x83411C78;
	sub_82A2D238(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82a2d238
	ctx.lr = 0x83411C88;
	sub_82A2D238(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82a2d238
	ctx.lr = 0x83411C98;
	sub_82A2D238(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a2d238
	ctx.lr = 0x83411CA8;
	sub_82A2D238(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82a2d238
	ctx.lr = 0x83411CB8;
	sub_82A2D238(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82a2d238
	ctx.lr = 0x83411CC8;
	sub_82A2D238(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82a2d238
	ctx.lr = 0x83411CD8;
	sub_82A2D238(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82a2d238
	ctx.lr = 0x83411CE8;
	sub_82A2D238(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82a2d238
	ctx.lr = 0x83411CF8;
	sub_82A2D238(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82a2d238
	ctx.lr = 0x83411D08;
	sub_82A2D238(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82a2d238
	ctx.lr = 0x83411D18;
	sub_82A2D238(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82a2d238
	ctx.lr = 0x83411D28;
	sub_82A2D238(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82a2d238
	ctx.lr = 0x83411D38;
	sub_82A2D238(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83411D50"))) PPC_WEAK_FUNC(sub_83411D50);
PPC_FUNC_IMPL(__imp__sub_83411D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,21456
	ctx.r10.s64 = ctx.r10.s64 + 21456;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-1372
	ctx.r11.s64 = ctx.r8.s64 + -1372;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// vrlimi128 v61,v58,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 57), 4));
	// addi r11,r10,-23344
	ctx.r11.s64 = ctx.r10.s64 + -23344;
	// addi r10,r8,-1380
	ctx.r10.s64 = ctx.r8.s64 + -1380;
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// addi r9,r9,10064
	ctx.r9.s64 = ctx.r9.s64 + 10064;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r8,r8,-9356
	ctx.r8.s64 = ctx.r8.s64 + -9356;
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r7,r7,-1376
	ctx.r7.s64 = ctx.r7.s64 + -1376;
	// addi r6,r6,-1896
	ctx.r6.s64 = ctx.r6.s64 + -1896;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r3,-9180
	ctx.r9.s64 = ctx.r3.s64 + -9180;
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v62,v58,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 57), 4));
	// li r8,64
	ctx.r8.s64 = 64;
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// li r3,48
	ctx.r3.s64 = 48;
	// vor128 v63,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// addi r10,r10,13352
	ctx.r10.s64 = ctx.r10.s64 + 13352;
	// li r31,80
	ctx.r31.s64 = 80;
	// vor128 v60,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vor128 v62,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// vrlimi128 v62,v60,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v59,v60,4,3
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 4));
	// vrlimi128 v62,v58,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 57), 4));
	// vrlimi128 v61,v60,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 4));
	// vor128 v63,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v59,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vor128 v62,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v63,v59,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 78), 2));
	// vrlimi128 v62,v59,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 78), 2));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v60,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 4));
	// vrlimi128 v63,v59,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 78), 2));
	// stvx128 v63,r11,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83411E78"))) PPC_WEAK_FUNC(sub_83411E78);
PPC_FUNC_IMPL(__imp__sub_83411E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,19300
	ctx.r11.s64 = ctx.r11.s64 + 19300;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// addi r8,r8,-19144
	ctx.r8.s64 = ctx.r8.s64 + -19144;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-23248
	ctx.r11.s64 = ctx.r11.s64 + -23248;
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

__attribute__((alias("__imp__sub_83411EC8"))) PPC_WEAK_FUNC(sub_83411EC8);
PPC_FUNC_IMPL(__imp__sub_83411EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,-23232
	ctx.r10.s64 = ctx.r10.s64 + -23232;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 3));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83411EF4"))) PPC_WEAK_FUNC(sub_83411EF4);
PPC_FUNC_IMPL(__imp__sub_83411EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83411EF8"))) PPC_WEAK_FUNC(sub_83411EF8);
PPC_FUNC_IMPL(__imp__sub_83411EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,15792(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 15792);
	ctx.f1.f64 = double(temp.f32);
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v60,v62,2,2
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e9fd98
	ctx.lr = 0x83411F60;
	sub_82E9FD98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,13304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13304);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e9fd98
	ctx.lr = 0x83411F78;
	sub_82E9FD98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee9688
	ctx.lr = 0x83411F88;
	sub_82EE9688(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// addi r9,r11,-23216
	ctx.r9.s64 = ctx.r11.s64 + -23216;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-10800
	ctx.r3.s64 = ctx.r10.s64 + -10800;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-23216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -23216, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bl 0x833a1ff8
	ctx.lr = 0x83411FBC;
	sub_833A1FF8(ctx, base);
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

__attribute__((alias("__imp__sub_83411FD0"))) PPC_WEAK_FUNC(sub_83411FD0);
PPC_FUNC_IMPL(__imp__sub_83411FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-9180
	ctx.r11.s64 = ctx.r11.s64 + -9180;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-23120
	ctx.r9.s64 = ctx.r9.s64 + -23120;
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

__attribute__((alias("__imp__sub_83412010"))) PPC_WEAK_FUNC(sub_83412010);
PPC_FUNC_IMPL(__imp__sub_83412010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-9180
	ctx.r11.s64 = ctx.r11.s64 + -9180;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-23104
	ctx.r9.s64 = ctx.r9.s64 + -23104;
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

__attribute__((alias("__imp__sub_83412050"))) PPC_WEAK_FUNC(sub_83412050);
PPC_FUNC_IMPL(__imp__sub_83412050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-9144
	ctx.r11.s64 = ctx.r11.s64 + -9144;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-23088
	ctx.r9.s64 = ctx.r9.s64 + -23088;
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

__attribute__((alias("__imp__sub_83412090"))) PPC_WEAK_FUNC(sub_83412090);
PPC_FUNC_IMPL(__imp__sub_83412090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,4796
	ctx.r11.s64 = ctx.r11.s64 + 4796;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-23072
	ctx.r9.s64 = ctx.r9.s64 + -23072;
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

__attribute__((alias("__imp__sub_834120D0"))) PPC_WEAK_FUNC(sub_834120D0);
PPC_FUNC_IMPL(__imp__sub_834120D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,21108
	ctx.r11.s64 = ctx.r11.s64 + 21108;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-23056
	ctx.r9.s64 = ctx.r9.s64 + -23056;
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

__attribute__((alias("__imp__sub_83412110"))) PPC_WEAK_FUNC(sub_83412110);
PPC_FUNC_IMPL(__imp__sub_83412110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,21108
	ctx.r11.s64 = ctx.r11.s64 + 21108;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-23040
	ctx.r9.s64 = ctx.r9.s64 + -23040;
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

__attribute__((alias("__imp__sub_83412150"))) PPC_WEAK_FUNC(sub_83412150);
PPC_FUNC_IMPL(__imp__sub_83412150) {
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
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-23024
	ctx.r9.s64 = ctx.r9.s64 + -23024;
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

__attribute__((alias("__imp__sub_83412190"))) PPC_WEAK_FUNC(sub_83412190);
PPC_FUNC_IMPL(__imp__sub_83412190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-9168
	ctx.r11.s64 = ctx.r11.s64 + -9168;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-23008
	ctx.r9.s64 = ctx.r9.s64 + -23008;
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
	// vrlimi128 v63,v60,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 3));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834121D0"))) PPC_WEAK_FUNC(sub_834121D0);
PPC_FUNC_IMPL(__imp__sub_834121D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,-22992
	ctx.r10.s64 = ctx.r10.s64 + -22992;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 3));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834121FC"))) PPC_WEAK_FUNC(sub_834121FC);
PPC_FUNC_IMPL(__imp__sub_834121FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412200"))) PPC_WEAK_FUNC(sub_83412200);
PPC_FUNC_IMPL(__imp__sub_83412200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,-22976
	ctx.r10.s64 = ctx.r10.s64 + -22976;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v62,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 3));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8341222C"))) PPC_WEAK_FUNC(sub_8341222C);
PPC_FUNC_IMPL(__imp__sub_8341222C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412230"))) PPC_WEAK_FUNC(sub_83412230);
PPC_FUNC_IMPL(__imp__sub_83412230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,-4128
	ctx.r10.s64 = ctx.r10.s64 + -4128;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-22960
	ctx.r9.s64 = ctx.r9.s64 + -22960;
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

__attribute__((alias("__imp__sub_83412270"))) PPC_WEAK_FUNC(sub_83412270);
PPC_FUNC_IMPL(__imp__sub_83412270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-4212
	ctx.r11.s64 = ctx.r11.s64 + -4212;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r9,r9,8960
	ctx.r9.s64 = ctx.r9.s64 + 8960;
	// addi r8,r8,-9180
	ctx.r8.s64 = ctx.r8.s64 + -9180;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-22944
	ctx.r11.s64 = ctx.r11.s64 + -22944;
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
	// vrlimi128 v63,v61,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 3));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834122C0"))) PPC_WEAK_FUNC(sub_834122C0);
PPC_FUNC_IMPL(__imp__sub_834122C0) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,-20764
	ctx.r31.s64 = ctx.r11.s64 + -20764;
	// addi r4,r10,-4760
	ctx.r4.s64 = ctx.r10.s64 + -4760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x834122E8;
	sub_82E02670(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x82e02670
	ctx.lr = 0x834122F8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,7836
	ctx.r4.s64 = ctx.r11.s64 + 7836;
	// bl 0x82e02670
	ctx.lr = 0x83412308;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,7828
	ctx.r4.s64 = ctx.r11.s64 + 7828;
	// bl 0x82e02670
	ctx.lr = 0x83412318;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,7816
	ctx.r4.s64 = ctx.r11.s64 + 7816;
	// bl 0x82e02670
	ctx.lr = 0x83412328;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,7800
	ctx.r4.s64 = ctx.r11.s64 + 7800;
	// bl 0x82e02670
	ctx.lr = 0x83412338;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,7792
	ctx.r4.s64 = ctx.r11.s64 + 7792;
	// bl 0x82e02670
	ctx.lr = 0x83412348;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,7776
	ctx.r4.s64 = ctx.r11.s64 + 7776;
	// bl 0x82e02670
	ctx.lr = 0x83412358;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r11,7764
	ctx.r4.s64 = ctx.r11.s64 + 7764;
	// bl 0x82e02670
	ctx.lr = 0x83412368;
	sub_82E02670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r11,-23256
	ctx.r4.s64 = ctx.r11.s64 + -23256;
	// bl 0x82e02670
	ctx.lr = 0x83412378;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,7756
	ctx.r4.s64 = ctx.r11.s64 + 7756;
	// bl 0x82e02670
	ctx.lr = 0x83412388;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r4,r11,7744
	ctx.r4.s64 = ctx.r11.s64 + 7744;
	// bl 0x82e02670
	ctx.lr = 0x83412398;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r11,7728
	ctx.r4.s64 = ctx.r11.s64 + 7728;
	// bl 0x82e02670
	ctx.lr = 0x834123A8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r4,r11,7716
	ctx.r4.s64 = ctx.r11.s64 + 7716;
	// bl 0x82e02670
	ctx.lr = 0x834123B8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r4,r11,7700
	ctx.r4.s64 = ctx.r11.s64 + 7700;
	// bl 0x82e02670
	ctx.lr = 0x834123C8;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10792
	ctx.r3.s64 = ctx.r11.s64 + -10792;
	// bl 0x833a1ff8
	ctx.lr = 0x834123D4;
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

__attribute__((alias("__imp__sub_834123E8"))) PPC_WEAK_FUNC(sub_834123E8);
PPC_FUNC_IMPL(__imp__sub_834123E8) {
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,-20704
	ctx.r31.s64 = ctx.r11.s64 + -20704;
	// addi r4,r10,-4760
	ctx.r4.s64 = ctx.r10.s64 + -4760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x83412410;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,7912
	ctx.r4.s64 = ctx.r11.s64 + 7912;
	// bl 0x82e02670
	ctx.lr = 0x83412420;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,7904
	ctx.r4.s64 = ctx.r11.s64 + 7904;
	// bl 0x82e02670
	ctx.lr = 0x83412430;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
	// bl 0x82e02670
	ctx.lr = 0x83412440;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,7888
	ctx.r4.s64 = ctx.r11.s64 + 7888;
	// bl 0x82e02670
	ctx.lr = 0x83412450;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,-15112
	ctx.r4.s64 = ctx.r11.s64 + -15112;
	// bl 0x82e02670
	ctx.lr = 0x83412460;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-15292
	ctx.r4.s64 = ctx.r11.s64 + -15292;
	// bl 0x82e02670
	ctx.lr = 0x83412470;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,-15168
	ctx.r4.s64 = ctx.r11.s64 + -15168;
	// bl 0x82e02670
	ctx.lr = 0x83412480;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r11,7880
	ctx.r4.s64 = ctx.r11.s64 + 7880;
	// bl 0x82e02670
	ctx.lr = 0x83412490;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r11,7864
	ctx.r4.s64 = ctx.r11.s64 + 7864;
	// bl 0x82e02670
	ctx.lr = 0x834124A0;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,7848
	ctx.r4.s64 = ctx.r11.s64 + 7848;
	// bl 0x82e02670
	ctx.lr = 0x834124B0;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10712
	ctx.r3.s64 = ctx.r11.s64 + -10712;
	// bl 0x833a1ff8
	ctx.lr = 0x834124BC;
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

__attribute__((alias("__imp__sub_834124D0"))) PPC_WEAK_FUNC(sub_834124D0);
PPC_FUNC_IMPL(__imp__sub_834124D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,-4128
	ctx.r10.s64 = ctx.r10.s64 + -4128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// addi r9,r9,13192
	ctx.r9.s64 = ctx.r9.s64 + 13192;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-20496
	ctx.r11.s64 = ctx.r8.s64 + -20496;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83412518"))) PPC_WEAK_FUNC(sub_83412518);
PPC_FUNC_IMPL(__imp__sub_83412518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,23100
	ctx.r11.s64 = ctx.r11.s64 + 23100;
	// addi r10,r10,-1372
	ctx.r10.s64 = ctx.r10.s64 + -1372;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// addi r8,r8,-19136
	ctx.r8.s64 = ctx.r8.s64 + -19136;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-20480
	ctx.r11.s64 = ctx.r11.s64 + -20480;
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

__attribute__((alias("__imp__sub_83412568"))) PPC_WEAK_FUNC(sub_83412568);
PPC_FUNC_IMPL(__imp__sub_83412568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,7652
	ctx.r10.s64 = ctx.r10.s64 + 7652;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r9,r9,8960
	ctx.r9.s64 = ctx.r9.s64 + 8960;
	// addi r8,r8,23104
	ctx.r8.s64 = ctx.r8.s64 + 23104;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-20464
	ctx.r11.s64 = ctx.r11.s64 + -20464;
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
	// vrlimi128 v63,v61,3,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 3));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834125B8"))) PPC_WEAK_FUNC(sub_834125B8);
PPC_FUNC_IMPL(__imp__sub_834125B8) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r30,r11,10360
	ctx.r30.s64 = ctx.r11.s64 + 10360;
	// addi r31,r10,10432
	ctx.r31.s64 = ctx.r10.s64 + 10432;
	// lwz r11,10360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10360);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,10432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10432, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834125F8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83412600;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24648
	ctx.r10.s64 = ctx.r10.s64 + 24648;
	// lfs f30,12452(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412654;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8341265C;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24628
	ctx.r10.s64 = ctx.r10.s64 + 24628;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412698;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x834126A0;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24608
	ctx.r10.s64 = ctx.r10.s64 + 24608;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834126DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x834126E4;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24588
	ctx.r10.s64 = ctx.r10.s64 + 24588;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412720;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x83412728;
	sub_82E0BE78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,24568
	ctx.r11.s64 = ctx.r11.s64 + 24568;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412764;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x8341276C;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24552
	ctx.r10.s64 = ctx.r10.s64 + 24552;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stb r9,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r9.u8);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834127A8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x834127B0;
	sub_82E0BE78(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r10,r10,24536
	ctx.r10.s64 = ctx.r10.s64 + 24536;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834127E8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x834127F0;
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

__attribute__((alias("__imp__sub_83412814"))) PPC_WEAK_FUNC(sub_83412814);
PPC_FUNC_IMPL(__imp__sub_83412814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412818"))) PPC_WEAK_FUNC(sub_83412818);
PPC_FUNC_IMPL(__imp__sub_83412818) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r30,r11,10360
	ctx.r30.s64 = ctx.r11.s64 + 10360;
	// addi r31,r10,10816
	ctx.r31.s64 = ctx.r10.s64 + 10816;
	// lwz r11,10360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10360);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,10816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10816, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412858;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83412860;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24792
	ctx.r10.s64 = ctx.r10.s64 + 24792;
	// lfs f30,12452(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834128B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x834128BC;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24772
	ctx.r10.s64 = ctx.r10.s64 + 24772;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834128F8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x83412900;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24752
	ctx.r10.s64 = ctx.r10.s64 + 24752;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8341293C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x83412944;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24732
	ctx.r10.s64 = ctx.r10.s64 + 24732;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412980;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x83412988;
	sub_82E0BE78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,24712
	ctx.r11.s64 = ctx.r11.s64 + 24712;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834129C4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x834129CC;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,24696
	ctx.r10.s64 = ctx.r10.s64 + 24696;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stb r9,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r9.u8);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412A08;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x83412A10;
	sub_82E0BE78(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r10,r10,24680
	ctx.r10.s64 = ctx.r10.s64 + 24680;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412A48;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x83412A50;
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

__attribute__((alias("__imp__sub_83412A74"))) PPC_WEAK_FUNC(sub_83412A74);
PPC_FUNC_IMPL(__imp__sub_83412A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412A78"))) PPC_WEAK_FUNC(sub_83412A78);
PPC_FUNC_IMPL(__imp__sub_83412A78) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r3,-31884
	ctx.r3.s64 = -2089549824;
	// addi r4,r11,10360
	ctx.r4.s64 = ctx.r11.s64 + 10360;
	// addi r31,r3,11200
	ctx.r31.s64 = ctx.r3.s64 + 11200;
	// lwz r9,10360(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10360);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,11200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11200, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83412ADC"))) PPC_WEAK_FUNC(sub_83412ADC);
PPC_FUNC_IMPL(__imp__sub_83412ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412AE0"))) PPC_WEAK_FUNC(sub_83412AE0);
PPC_FUNC_IMPL(__imp__sub_83412AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,4804
	ctx.r10.s64 = ctx.r10.s64 + 4804;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-20384
	ctx.r11.s64 = ctx.r8.s64 + -20384;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v60,v63,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83412B2C"))) PPC_WEAK_FUNC(sub_83412B2C);
PPC_FUNC_IMPL(__imp__sub_83412B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412B30"))) PPC_WEAK_FUNC(sub_83412B30);
PPC_FUNC_IMPL(__imp__sub_83412B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10456
	ctx.r3.s64 = ctx.r11.s64 + -10456;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83412B3C"))) PPC_WEAK_FUNC(sub_83412B3C);
PPC_FUNC_IMPL(__imp__sub_83412B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412B40"))) PPC_WEAK_FUNC(sub_83412B40);
PPC_FUNC_IMPL(__imp__sub_83412B40) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-20260
	ctx.r3.s64 = ctx.r11.s64 + -20260;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824a5f08
	ctx.lr = 0x83412B60;
	sub_824A5F08(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// bl 0x833a1ff8
	ctx.lr = 0x83412B6C;
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

__attribute__((alias("__imp__sub_83412B7C"))) PPC_WEAK_FUNC(sub_83412B7C);
PPC_FUNC_IMPL(__imp__sub_83412B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412B80"))) PPC_WEAK_FUNC(sub_83412B80);
PPC_FUNC_IMPL(__imp__sub_83412B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-10360
	ctx.r3.s64 = ctx.r11.s64 + -10360;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83412B8C"))) PPC_WEAK_FUNC(sub_83412B8C);
PPC_FUNC_IMPL(__imp__sub_83412B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412B90"))) PPC_WEAK_FUNC(sub_83412B90);
PPC_FUNC_IMPL(__imp__sub_83412B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-9180
	ctx.r11.s64 = ctx.r11.s64 + -9180;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r9,-9356
	ctx.r9.s64 = ctx.r9.s64 + -9356;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-20184
	ctx.r3.s64 = ctx.r10.s64 + -20184;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v62,v60,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v62,v60,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ea0d40
	ctx.lr = 0x83412C0C;
	sub_82EA0D40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83412C1C"))) PPC_WEAK_FUNC(sub_83412C1C);
PPC_FUNC_IMPL(__imp__sub_83412C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83412C20"))) PPC_WEAK_FUNC(sub_83412C20);
PPC_FUNC_IMPL(__imp__sub_83412C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// lfs f0,8288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12652);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-19940(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -19940, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83412C40"))) PPC_WEAK_FUNC(sub_83412C40);
PPC_FUNC_IMPL(__imp__sub_83412C40) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// addi r31,r10,30472
	ctx.r31.s64 = ctx.r10.s64 + 30472;
	// lwz r11,-24856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24856);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,30472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30472, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412C78;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83412C80;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-24328
	ctx.r10.s64 = ctx.r10.s64 + -24328;
	// lfs f30,12452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,-24852(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24852);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412CD8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x83412CE0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24344
	ctx.r10.s64 = ctx.r10.s64 + -24344;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,-24848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24848);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412D20;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x83412D28;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24360
	ctx.r10.s64 = ctx.r10.s64 + -24360;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// lwz r11,-24836(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24836);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412D68;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x83412D70;
	sub_82E0BE78(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r10,r10,-24376
	ctx.r10.s64 = ctx.r10.s64 + -24376;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// lwz r11,-24840(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24840);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412DB0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x83412DB8;
	sub_82E0BE78(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-24396
	ctx.r11.s64 = ctx.r11.s64 + -24396;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lwz r11,-24832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24832);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412DF8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x83412E00;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24416
	ctx.r10.s64 = ctx.r10.s64 + -24416;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stb r9,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r9.u8);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// lwz r11,-24828(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24828);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412E40;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x83412E48;
	sub_82E0BE78(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// addi r10,r10,-24436
	ctx.r10.s64 = ctx.r10.s64 + -24436;
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// lwz r11,-24824(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24824);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412E84;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x83412E8C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,400(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24456
	ctx.r10.s64 = ctx.r10.s64 + -24456;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stb r9,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r9.u8);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r11,-24820(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24820);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412ECC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x83412ED4;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r11,-24816(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24816);
	// addi r10,r10,-24472
	ctx.r10.s64 = ctx.r10.s64 + -24472;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f29,448(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stb r9,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r9.u8);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412F14;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e0be78
	ctx.lr = 0x83412F1C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// stfs f30,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// addi r11,r11,-24492
	ctx.r11.s64 = ctx.r11.s64 + -24492;
	// stfs f29,496(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// stb r10,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r10.u8);
	// lwz r11,-24812(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24812);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412F58;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// bl 0x82e0be78
	ctx.lr = 0x83412F60;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,544(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24512
	ctx.r10.s64 = ctx.r10.s64 + -24512;
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stb r9,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r9.u8);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// lwz r11,-24808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24808);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412FA0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82e0be78
	ctx.lr = 0x83412FA8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,592(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24528
	ctx.r10.s64 = ctx.r10.s64 + -24528;
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f31,600(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stb r9,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r9.u8);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// lwz r11,-24804(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24804);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83412FE8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x82e0be78
	ctx.lr = 0x83412FF0;
	sub_82E0BE78(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// stfs f30,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,640(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// addi r10,r10,-24548
	ctx.r10.s64 = ctx.r10.s64 + -24548;
	// stfs f31,644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// stfs f31,648(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
	// stb r9,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r9.u8);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// lwz r11,-24800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24800);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83413030;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82e0be78
	ctx.lr = 0x83413038;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// stfs f30,680(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,688(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stb r11,700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 700, ctx.r11.u8);
	// stfs f31,692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// addi r10,r10,-24560
	ctx.r10.s64 = ctx.r10.s64 + -24560;
	// stfs f31,696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// stw r10,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r10.u32);
	// lwz r11,-24796(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24796);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83413078;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// bl 0x82e0be78
	ctx.lr = 0x83413080;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,736(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24580
	ctx.r10.s64 = ctx.r10.s64 + -24580;
	// stfs f31,740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// stfs f31,744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stb r9,748(r31)
	PPC_STORE_U8(ctx.r31.u32 + 748, ctx.r9.u8);
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// addi r3,r31,752
	ctx.r3.s64 = ctx.r31.s64 + 752;
	// lwz r11,-24792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24792);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834130C0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x82e0be78
	ctx.lr = 0x834130C8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,776(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,784(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24596
	ctx.r10.s64 = ctx.r10.s64 + -24596;
	// stfs f31,788(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// stfs f31,792(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// stb r9,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r9.u8);
	// stw r10,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r10.u32);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// lwz r11,-24788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24788);
	// stw r11,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83413108;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x82e0be78
	ctx.lr = 0x83413110;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,824(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,832(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24612
	ctx.r10.s64 = ctx.r10.s64 + -24612;
	// stfs f31,836(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// stfs f31,840(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// stb r9,844(r31)
	PPC_STORE_U8(ctx.r31.u32 + 844, ctx.r9.u8);
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// lwz r11,-24784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24784);
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83413150;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x82e0be78
	ctx.lr = 0x83413158;
	sub_82E0BE78(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// addi r10,r10,-24624
	ctx.r10.s64 = ctx.r10.s64 + -24624;
	// lwz r11,-24780(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24780);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// stfs f29,880(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stb r9,892(r31)
	PPC_STORE_U8(ctx.r31.u32 + 892, ctx.r9.u8);
	// stfs f31,884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// stfs f31,888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83413198;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x82e0be78
	ctx.lr = 0x834131A0;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,920(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,928(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24644
	ctx.r10.s64 = ctx.r10.s64 + -24644;
	// stfs f31,932(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// stfs f31,936(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// stb r9,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r9.u8);
	// stw r10,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r10.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// lwz r11,-24776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24776);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834131E0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// bl 0x82e0be78
	ctx.lr = 0x834131E8;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,968(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,976(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24656
	ctx.r10.s64 = ctx.r10.s64 + -24656;
	// stfs f31,980(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// stfs f31,984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// stb r9,988(r31)
	PPC_STORE_U8(ctx.r31.u32 + 988, ctx.r9.u8);
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// lwz r11,-24772(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24772);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83413228;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x82e0be78
	ctx.lr = 0x83413230;
	sub_82E0BE78(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1024(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// stfs f31,1028(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// stb r11,1036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1036, ctx.r11.u8);
	// addi r10,r10,-24676
	ctx.r10.s64 = ctx.r10.s64 + -24676;
	// stfs f31,1032(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// stw r10,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r10.u32);
	// lwz r11,-24768(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24768);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8341326C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// bl 0x82e0be78
	ctx.lr = 0x83413274;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1064(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1072(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24688
	ctx.r10.s64 = ctx.r10.s64 + -24688;
	// stfs f31,1076(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// stfs f31,1080(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// stb r9,1084(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1084, ctx.r9.u8);
	// stw r10,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r10.u32);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// lwz r11,-24764(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24764);
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834132B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1096
	ctx.r3.s64 = ctx.r31.s64 + 1096;
	// bl 0x82e0be78
	ctx.lr = 0x834132BC;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,1112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1120(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24704
	ctx.r10.s64 = ctx.r10.s64 + -24704;
	// stfs f31,1124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stfs f31,1128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// stb r9,1132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1132, ctx.r9.u8);
	// stw r10,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r10.u32);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// lwz r11,-24760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24760);
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834132FC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1144
	ctx.r3.s64 = ctx.r31.s64 + 1144;
	// bl 0x82e0be78
	ctx.lr = 0x83413304;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1160, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1168(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1168, temp.u32);
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24716
	ctx.r10.s64 = ctx.r10.s64 + -24716;
	// stfs f31,1172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1172, temp.u32);
	// stfs f31,1176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// stb r9,1180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1180, ctx.r9.u8);
	// stw r10,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r10.u32);
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// lwz r11,-24756(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83413344;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1192
	ctx.r3.s64 = ctx.r31.s64 + 1192;
	// bl 0x82e0be78
	ctx.lr = 0x8341334C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,1208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1208, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1216(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1216, temp.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24736
	ctx.r10.s64 = ctx.r10.s64 + -24736;
	// stfs f31,1220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f31,1224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// stb r9,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r9.u8);
	// stw r10,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r10.u32);
	// addi r3,r31,1232
	ctx.r3.s64 = ctx.r31.s64 + 1232;
	// lwz r11,-24752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24752);
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x8341338C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1240
	ctx.r3.s64 = ctx.r31.s64 + 1240;
	// bl 0x82e0be78
	ctx.lr = 0x83413394;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1264(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stw r11,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24748
	ctx.r10.s64 = ctx.r10.s64 + -24748;
	// stfs f31,1268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stb r9,1276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1276, ctx.r9.u8);
	// stw r10,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r10.u32);
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// lwz r11,-24744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24744);
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834133D4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1288
	ctx.r3.s64 = ctx.r31.s64 + 1288;
	// bl 0x82e0be78
	ctx.lr = 0x834133DC;
	sub_82E0BE78(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r11.u32);
	// addi r10,r10,-24760
	ctx.r10.s64 = ctx.r10.s64 + -24760;
	// lwz r11,-24740(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24740);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,1304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// stfs f29,1312(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// stw r10,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r10.u32);
	// stfs f31,1316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stb r9,1324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1324, ctx.r9.u8);
	// stfs f31,1320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
	// addi r3,r31,1328
	ctx.r3.s64 = ctx.r31.s64 + 1328;
	// bl 0x82e0be78
	ctx.lr = 0x8341341C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1336
	ctx.r3.s64 = ctx.r31.s64 + 1336;
	// bl 0x82e0be78
	ctx.lr = 0x83413424;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// stfs f30,1352(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// stw r11,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1360(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// stb r11,1372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1372, ctx.r11.u8);
	// stfs f31,1364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1364, temp.u32);
	// addi r10,r10,-24772
	ctx.r10.s64 = ctx.r10.s64 + -24772;
	// stfs f31,1368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// stw r10,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r10.u32);
	// lwz r11,-24736(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24736);
	// stw r11,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83413464;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1384
	ctx.r3.s64 = ctx.r31.s64 + 1384;
	// bl 0x82e0be78
	ctx.lr = 0x8341346C;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1400, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1408(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24792
	ctx.r10.s64 = ctx.r10.s64 + -24792;
	// stfs f31,1412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// stfs f31,1416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stb r9,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r9.u8);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// lwz r11,-24732(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24732);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834134AC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x82e0be78
	ctx.lr = 0x834134B4;
	sub_82E0BE78(ctx, base);
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1448(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stfs f29,1456(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1456, temp.u32);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24808
	ctx.r10.s64 = ctx.r10.s64 + -24808;
	// stfs f31,1460(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1460, temp.u32);
	// stfs f31,1464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1464, temp.u32);
	// stb r9,1468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1468, ctx.r9.u8);
	// stw r10,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r10.u32);
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// lwz r11,-24728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24728);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834134F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// bl 0x82e0be78
	ctx.lr = 0x834134FC;
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

__attribute__((alias("__imp__sub_8341351C"))) PPC_WEAK_FUNC(sub_8341351C);
PPC_FUNC_IMPL(__imp__sub_8341351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

