#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8343114C"))) PPC_WEAK_FUNC(sub_8343114C);
PPC_FUNC_IMPL(__imp__sub_8343114C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431150"))) PPC_WEAK_FUNC(sub_83431150);
PPC_FUNC_IMPL(__imp__sub_83431150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,31828
	ctx.r4.s64 = ctx.r11.s64 + 31828;
	// addi r3,r10,-11840
	ctx.r3.s64 = ctx.r10.s64 + -11840;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83431164"))) PPC_WEAK_FUNC(sub_83431164);
PPC_FUNC_IMPL(__imp__sub_83431164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431168"))) PPC_WEAK_FUNC(sub_83431168);
PPC_FUNC_IMPL(__imp__sub_83431168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83431170;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31880
	ctx.r30.s64 = -2089287680;
	// lis r10,-31880
	ctx.r10.s64 = -2089287680;
	// addi r29,r30,21584
	ctx.r29.s64 = ctx.r30.s64 + 21584;
	// addi r31,r10,21632
	ctx.r31.s64 = ctx.r10.s64 + 21632;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r11,-24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// stw r11,21632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21632, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834311A0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x834311A8;
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-31860
	ctx.r10.s64 = ctx.r10.s64 + -31860;
	// lfs f29,12452(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12452);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,24284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24284);
	ctx.f30.f64 = double(temp.f32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lfs f31,2780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2780);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f29,56(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,-20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834311FC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x83431204;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f29,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-31880
	ctx.r10.s64 = ctx.r10.s64 + -31880;
	// stfs f30,112(r31)
	temp.f32 = float(ctx.f30.f64);
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
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431240;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x83431248;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f29,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-31896
	ctx.r10.s64 = ctx.r10.s64 + -31896;
	// stfs f30,160(r31)
	temp.f32 = float(ctx.f30.f64);
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
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431284;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x8343128C;
	sub_82E0BE78(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// addi r10,r10,-31912
	ctx.r10.s64 = ctx.r10.s64 + -31912;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lfs f0,10064(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10064);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x834312D0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x834312D8;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f29,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-31928
	ctx.r11.s64 = ctx.r11.s64 + -31928;
	// stfs f30,256(r31)
	temp.f32 = float(ctx.f30.f64);
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
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431314;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x8343131C;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f29,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-31944
	ctx.r10.s64 = ctx.r10.s64 + -31944;
	// stfs f30,304(r31)
	temp.f32 = float(ctx.f30.f64);
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
	// lwz r11,21584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21584);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431358;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x83431360;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83431374"))) PPC_WEAK_FUNC(sub_83431374);
PPC_FUNC_IMPL(__imp__sub_83431374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431378"))) PPC_WEAK_FUNC(sub_83431378);
PPC_FUNC_IMPL(__imp__sub_83431378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,276
	ctx.r4.s64 = ctx.r11.s64 + 276;
	// addi r3,r10,-11832
	ctx.r3.s64 = ctx.r10.s64 + -11832;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343138C"))) PPC_WEAK_FUNC(sub_8343138C);
PPC_FUNC_IMPL(__imp__sub_8343138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431390"))) PPC_WEAK_FUNC(sub_83431390);
PPC_FUNC_IMPL(__imp__sub_83431390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16836
	ctx.r4.s64 = ctx.r11.s64 + 16836;
	// addi r3,r10,-11828
	ctx.r3.s64 = ctx.r10.s64 + -11828;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834313A4"))) PPC_WEAK_FUNC(sub_834313A4);
PPC_FUNC_IMPL(__imp__sub_834313A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834313A8"))) PPC_WEAK_FUNC(sub_834313A8);
PPC_FUNC_IMPL(__imp__sub_834313A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,14504
	ctx.r4.s64 = ctx.r11.s64 + 14504;
	// addi r3,r10,-11824
	ctx.r3.s64 = ctx.r10.s64 + -11824;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834313BC"))) PPC_WEAK_FUNC(sub_834313BC);
PPC_FUNC_IMPL(__imp__sub_834313BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834313C0"))) PPC_WEAK_FUNC(sub_834313C0);
PPC_FUNC_IMPL(__imp__sub_834313C0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-11820
	ctx.r31.s64 = ctx.r11.s64 + -11820;
	// addi r4,r10,16944
	ctx.r4.s64 = ctx.r10.s64 + 16944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x834313E8;
	sub_82E02670(ctx, base);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-25280
	ctx.r11.s64 = ctx.r11.s64 + -25280;
	// addi r4,r10,21064
	ctx.r4.s64 = ctx.r10.s64 + 21064;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82e02670
	ctx.lr = 0x83431404;
	sub_82E02670(ctx, base);
	// lis r11,-32050
	ctx.r11.s64 = -2100428800;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,28056
	ctx.r11.s64 = ctx.r11.s64 + 28056;
	// addi r4,r10,-2724
	ctx.r4.s64 = ctx.r10.s64 + -2724;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82e02670
	ctx.lr = 0x83431420;
	sub_82E02670(ctx, base);
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// lis r10,-31895
	ctx.r10.s64 = -2090270720;
	// addi r11,r11,-1904
	ctx.r11.s64 = ctx.r11.s64 + -1904;
	// addi r3,r10,-6600
	ctx.r3.s64 = ctx.r10.s64 + -6600;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x833a1ff8
	ctx.lr = 0x83431438;
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

__attribute__((alias("__imp__sub_8343144C"))) PPC_WEAK_FUNC(sub_8343144C);
PPC_FUNC_IMPL(__imp__sub_8343144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431450"))) PPC_WEAK_FUNC(sub_83431450);
PPC_FUNC_IMPL(__imp__sub_83431450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343145C"))) PPC_WEAK_FUNC(sub_8343145C);
PPC_FUNC_IMPL(__imp__sub_8343145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431460"))) PPC_WEAK_FUNC(sub_83431460);
PPC_FUNC_IMPL(__imp__sub_83431460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-30004
	ctx.r4.s64 = ctx.r11.s64 + -30004;
	// addi r3,r10,-11776
	ctx.r3.s64 = ctx.r10.s64 + -11776;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83431474"))) PPC_WEAK_FUNC(sub_83431474);
PPC_FUNC_IMPL(__imp__sub_83431474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431478"))) PPC_WEAK_FUNC(sub_83431478);
PPC_FUNC_IMPL(__imp__sub_83431478) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x83431480;
	__savegprlr_14(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r27,-31843
	ctx.r27.s64 = -2086862848;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r31,-32247
	ctx.r31.s64 = -2113339392;
	// lwz r11,21704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21704);
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r11,-11760(r27)
	PPC_STORE_U32(ctx.r27.u32 + -11760, ctx.r11.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lwz r11,21940(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 21940);
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// lwz r4,21752(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21752);
	// lis r25,-32247
	ctx.r25.s64 = -2113339392;
	// lwz r3,21808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21808);
	// lis r24,-32247
	ctx.r24.s64 = -2113339392;
	// lwz r31,21796(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21796);
	// lis r23,-32247
	ctx.r23.s64 = -2113339392;
	// lwz r30,21800(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21800);
	// lis r22,-32247
	ctx.r22.s64 = -2113339392;
	// lwz r10,21692(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21692);
	// lis r21,-32247
	ctx.r21.s64 = -2113339392;
	// lwz r9,21696(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21696);
	// lis r20,-32247
	ctx.r20.s64 = -2113339392;
	// lwz r8,21700(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21700);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lwz r7,21756(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21756);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lwz r29,21804(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21804);
	// addi r19,r27,-11760
	ctx.r19.s64 = ctx.r27.s64 + -11760;
	// lwz r28,21864(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21864);
	// lwz r27,21852(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21852);
	// lis r18,-32247
	ctx.r18.s64 = -2113339392;
	// lwz r26,21856(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21856);
	// lis r17,-32247
	ctx.r17.s64 = -2113339392;
	// lwz r25,21860(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21860);
	// lis r16,-32247
	ctx.r16.s64 = -2113339392;
	// lwz r24,21944(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21944);
	// lis r15,-32247
	ctx.r15.s64 = -2113339392;
	// lwz r6,21744(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21744);
	// lis r14,-32247
	ctx.r14.s64 = -2113339392;
	// lwz r5,21748(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21748);
	// lwz r23,21932(r21)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r21.u32 + 21932);
	// lis r21,-32247
	ctx.r21.s64 = -2113339392;
	// lwz r22,21936(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 21936);
	// lis r20,-32247
	ctx.r20.s64 = -2113339392;
	// stw r10,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r10.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r9.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r8.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r7,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r7.u32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// stw r11,76(r19)
	PPC_STORE_U32(ctx.r19.u32 + 76, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r6,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r6.u32);
	// stw r5,24(r19)
	PPC_STORE_U32(ctx.r19.u32 + 24, ctx.r5.u32);
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r9,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r9.u32);
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// stw r7,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// lwz r11,22016(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22016);
	// lwz r10,22004(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 22004);
	// lwz r9,22008(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 22008);
	// lwz r8,22012(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 22012);
	// lwz r7,22064(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 22064);
	// lwz r6,22052(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22052);
	// lwz r5,22056(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 22056);
	// stw r4,28(r19)
	PPC_STORE_U32(ctx.r19.u32 + 28, ctx.r4.u32);
	// stw r3,32(r19)
	PPC_STORE_U32(ctx.r19.u32 + 32, ctx.r3.u32);
	// stw r31,36(r19)
	PPC_STORE_U32(ctx.r19.u32 + 36, ctx.r31.u32);
	// stw r30,40(r19)
	PPC_STORE_U32(ctx.r19.u32 + 40, ctx.r30.u32);
	// stw r29,44(r19)
	PPC_STORE_U32(ctx.r19.u32 + 44, ctx.r29.u32);
	// stw r28,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r28.u32);
	// stw r27,52(r19)
	PPC_STORE_U32(ctx.r19.u32 + 52, ctx.r27.u32);
	// lwz r21,-176(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// stw r26,56(r19)
	PPC_STORE_U32(ctx.r19.u32 + 56, ctx.r26.u32);
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// stw r25,60(r19)
	PPC_STORE_U32(ctx.r19.u32 + 60, ctx.r25.u32);
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// lis r25,-32247
	ctx.r25.s64 = -2113339392;
	// stw r24,64(r19)
	PPC_STORE_U32(ctx.r19.u32 + 64, ctx.r24.u32);
	// stw r23,68(r19)
	PPC_STORE_U32(ctx.r19.u32 + 68, ctx.r23.u32);
	// lwz r4,22060(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 22060);
	// lwz r21,-172(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r28,22164(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22164);
	// lwz r27,22152(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22152);
	// lwz r26,22156(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22156);
	// lwz r25,22160(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22160);
	// lwz r3,22112(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 22112);
	// lwz r21,-168(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r22,72(r19)
	PPC_STORE_U32(ctx.r19.u32 + 72, ctx.r22.u32);
	// stw r11,80(r19)
	PPC_STORE_U32(ctx.r19.u32 + 80, ctx.r11.u32);
	// stw r10,84(r19)
	PPC_STORE_U32(ctx.r19.u32 + 84, ctx.r10.u32);
	// stw r9,88(r19)
	PPC_STORE_U32(ctx.r19.u32 + 88, ctx.r9.u32);
	// lwz r31,22100(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 22100);
	// lwz r21,-164(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r8,92(r19)
	PPC_STORE_U32(ctx.r19.u32 + 92, ctx.r8.u32);
	// stw r7,96(r19)
	PPC_STORE_U32(ctx.r19.u32 + 96, ctx.r7.u32);
	// stw r6,100(r19)
	PPC_STORE_U32(ctx.r19.u32 + 100, ctx.r6.u32);
	// stw r5,104(r19)
	PPC_STORE_U32(ctx.r19.u32 + 104, ctx.r5.u32);
	// lwz r30,22104(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 22104);
	// lwz r21,-160(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// stw r4,108(r19)
	PPC_STORE_U32(ctx.r19.u32 + 108, ctx.r4.u32);
	// stw r3,112(r19)
	PPC_STORE_U32(ctx.r19.u32 + 112, ctx.r3.u32);
	// stw r31,116(r19)
	PPC_STORE_U32(ctx.r19.u32 + 116, ctx.r31.u32);
	// stw r30,120(r19)
	PPC_STORE_U32(ctx.r19.u32 + 120, ctx.r30.u32);
	// lwz r29,22108(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 22108);
	// stw r28,128(r19)
	PPC_STORE_U32(ctx.r19.u32 + 128, ctx.r28.u32);
	// stw r27,132(r19)
	PPC_STORE_U32(ctx.r19.u32 + 132, ctx.r27.u32);
	// stw r26,136(r19)
	PPC_STORE_U32(ctx.r19.u32 + 136, ctx.r26.u32);
	// stw r25,140(r19)
	PPC_STORE_U32(ctx.r19.u32 + 140, ctx.r25.u32);
	// stw r29,124(r19)
	PPC_STORE_U32(ctx.r19.u32 + 124, ctx.r29.u32);
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83431664"))) PPC_WEAK_FUNC(sub_83431664);
PPC_FUNC_IMPL(__imp__sub_83431664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431668"))) PPC_WEAK_FUNC(sub_83431668);
PPC_FUNC_IMPL(__imp__sub_83431668) {
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
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// addi r31,r11,31336
	ctx.r31.s64 = ctx.r11.s64 + 31336;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x83431694;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8343169C;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-22132
	ctx.r11.s64 = ctx.r11.s64 + -22132;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-22044
	ctx.r10.s64 = ctx.r10.s64 + -22044;
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
	ctx.lr = 0x834316F4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x834316FC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-22480
	ctx.r11.s64 = ctx.r11.s64 + -22480;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-22064
	ctx.r10.s64 = ctx.r10.s64 + -22064;
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
	ctx.lr = 0x8343173C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x83431744;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,-22116
	ctx.r11.s64 = ctx.r11.s64 + -22116;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-22076
	ctx.r10.s64 = ctx.r10.s64 + -22076;
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
	ctx.lr = 0x83431784;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x8343178C;
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

__attribute__((alias("__imp__sub_834317AC"))) PPC_WEAK_FUNC(sub_834317AC);
PPC_FUNC_IMPL(__imp__sub_834317AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834317B0"))) PPC_WEAK_FUNC(sub_834317B0);
PPC_FUNC_IMPL(__imp__sub_834317B0) {
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
	// lis r11,-31880
	ctx.r11.s64 = -2089287680;
	// addi r31,r11,31528
	ctx.r31.s64 = ctx.r11.s64 + 31528;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x834317D0;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x834317D8;
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

__attribute__((alias("__imp__sub_834317EC"))) PPC_WEAK_FUNC(sub_834317EC);
PPC_FUNC_IMPL(__imp__sub_834317EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834317F0"))) PPC_WEAK_FUNC(sub_834317F0);
PPC_FUNC_IMPL(__imp__sub_834317F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,4804
	ctx.r11.s64 = ctx.r11.s64 + 4804;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-11584
	ctx.r9.s64 = ctx.r9.s64 + -11584;
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

__attribute__((alias("__imp__sub_83431830"))) PPC_WEAK_FUNC(sub_83431830);
PPC_FUNC_IMPL(__imp__sub_83431830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,12452
	ctx.r11.s64 = ctx.r11.s64 + 12452;
	// addi r10,r10,8960
	ctx.r10.s64 = ctx.r10.s64 + 8960;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// addi r9,r9,-9180
	ctx.r9.s64 = ctx.r9.s64 + -9180;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-11568
	ctx.r11.s64 = ctx.r8.s64 + -11568;
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

__attribute__((alias("__imp__sub_83431878"))) PPC_WEAK_FUNC(sub_83431878);
PPC_FUNC_IMPL(__imp__sub_83431878) {
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
	// addi r9,r9,-11552
	ctx.r9.s64 = ctx.r9.s64 + -11552;
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

__attribute__((alias("__imp__sub_834318AC"))) PPC_WEAK_FUNC(sub_834318AC);
PPC_FUNC_IMPL(__imp__sub_834318AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834318B0"))) PPC_WEAK_FUNC(sub_834318B0);
PPC_FUNC_IMPL(__imp__sub_834318B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r10,-9180
	ctx.r10.s64 = ctx.r10.s64 + -9180;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r8,-11552
	ctx.r11.s64 = ctx.r8.s64 + -11552;
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// addi r10,r10,-11536
	ctx.r10.s64 = ctx.r10.s64 + -11536;
	// vrlimi128 v60,v59,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 57), 4));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v62,v60,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83431908"))) PPC_WEAK_FUNC(sub_83431908);
PPC_FUNC_IMPL(__imp__sub_83431908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,-9180
	ctx.r10.s64 = ctx.r10.s64 + -9180;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-11520
	ctx.r11.s64 = ctx.r8.s64 + -11520;
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

__attribute__((alias("__imp__sub_83431954"))) PPC_WEAK_FUNC(sub_83431954);
PPC_FUNC_IMPL(__imp__sub_83431954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431958"))) PPC_WEAK_FUNC(sub_83431958);
PPC_FUNC_IMPL(__imp__sub_83431958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// lis r7,-31879
	ctx.r7.s64 = -2089222144;
	// addi r9,r11,-32356
	ctx.r9.s64 = ctx.r11.s64 + -32356;
	// addi r6,r7,-32336
	ctx.r6.s64 = ctx.r7.s64 + -32336;
	// lwz r8,-32356(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32356);
	// lwz r11,-12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r11,-32336(r7)
	PPC_STORE_U32(ctx.r7.u32 + -32336, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r9,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8343198C"))) PPC_WEAK_FUNC(sub_8343198C);
PPC_FUNC_IMPL(__imp__sub_8343198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431990"))) PPC_WEAK_FUNC(sub_83431990);
PPC_FUNC_IMPL(__imp__sub_83431990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,8960
	ctx.r11.s64 = ctx.r11.s64 + 8960;
	// addi r10,r10,24284
	ctx.r10.s64 = ctx.r10.s64 + 24284;
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
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r11,r11,-11488
	ctx.r11.s64 = ctx.r11.s64 + -11488;
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

__attribute__((alias("__imp__sub_834319E0"))) PPC_WEAK_FUNC(sub_834319E0);
PPC_FUNC_IMPL(__imp__sub_834319E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x834319E8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31879
	ctx.r30.s64 = -2089222144;
	// lis r10,-31879
	ctx.r10.s64 = -2089222144;
	// addi r29,r30,-29496
	ctx.r29.s64 = ctx.r30.s64 + -29496;
	// addi r31,r10,-29480
	ctx.r31.s64 = ctx.r10.s64 + -29480;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stw r11,-29480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29480, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431A18;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83431A20;
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17556
	ctx.r10.s64 = ctx.r10.s64 + -17556;
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
	// lwz r11,-29496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29496);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431A74;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x83431A7C;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17584
	ctx.r10.s64 = ctx.r10.s64 + -17584;
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
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431AB8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x83431AC0;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17612
	ctx.r10.s64 = ctx.r10.s64 + -17612;
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
	// lwz r11,-29496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29496);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431AFC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x83431B04;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17640
	ctx.r10.s64 = ctx.r10.s64 + -17640;
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
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431B40;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x83431B48;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-17668
	ctx.r11.s64 = ctx.r11.s64 + -17668;
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
	// lwz r11,-29496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29496);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431B84;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x83431B8C;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83431BA0"))) PPC_WEAK_FUNC(sub_83431BA0);
PPC_FUNC_IMPL(__imp__sub_83431BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a01ac
	ctx.lr = 0x83431BA8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31879
	ctx.r30.s64 = -2089222144;
	// lis r10,-31879
	ctx.r10.s64 = -2089222144;
	// addi r29,r30,-29496
	ctx.r29.s64 = ctx.r30.s64 + -29496;
	// addi r31,r10,-29192
	ctx.r31.s64 = ctx.r10.s64 + -29192;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// stw r11,-29192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431BD8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83431BE0;
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17304
	ctx.r10.s64 = ctx.r10.s64 + -17304;
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
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431C34;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x83431C3C;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17332
	ctx.r10.s64 = ctx.r10.s64 + -17332;
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
	// lwz r11,-29496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29496);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431C78;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x83431C80;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17360
	ctx.r10.s64 = ctx.r10.s64 + -17360;
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
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431CBC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x83431CC4;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17388
	ctx.r10.s64 = ctx.r10.s64 + -17388;
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
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431D00;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x83431D08;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-17416
	ctx.r11.s64 = ctx.r11.s64 + -17416;
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
	// lwz r11,-29496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29496);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431D44;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x83431D4C;
	sub_82E0BE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17444
	ctx.r10.s64 = ctx.r10.s64 + -17444;
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
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431D88;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x83431D90;
	sub_82E0BE78(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r10,r10,-17472
	ctx.r10.s64 = ctx.r10.s64 + -17472;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431DCC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x83431DD4;
	sub_82E0BE78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-17500
	ctx.r10.s64 = ctx.r10.s64 + -17500;
	// stfs f29,400(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stb r9,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r9.u8);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r11,-29496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29496);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x82e0be78
	ctx.lr = 0x83431E10;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x83431E18;
	sub_82E0BE78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x833a01fc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83431E2C"))) PPC_WEAK_FUNC(sub_83431E2C);
PPC_FUNC_IMPL(__imp__sub_83431E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431E30"))) PPC_WEAK_FUNC(sub_83431E30);
PPC_FUNC_IMPL(__imp__sub_83431E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-1896
	ctx.r11.s64 = ctx.r11.s64 + -1896;
	// addi r10,r10,-4124
	ctx.r10.s64 = ctx.r10.s64 + -4124;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-11472
	ctx.r11.s64 = ctx.r8.s64 + -11472;
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

__attribute__((alias("__imp__sub_83431E7C"))) PPC_WEAK_FUNC(sub_83431E7C);
PPC_FUNC_IMPL(__imp__sub_83431E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431E80"))) PPC_WEAK_FUNC(sub_83431E80);
PPC_FUNC_IMPL(__imp__sub_83431E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// lis r7,-31879
	ctx.r7.s64 = -2089222144;
	// addi r8,r11,-28512
	ctx.r8.s64 = ctx.r11.s64 + -28512;
	// addi r6,r7,-28376
	ctx.r6.s64 = ctx.r7.s64 + -28376;
	// lwz r11,-28512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28512);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,-28376(r7)
	PPC_STORE_U32(ctx.r7.u32 + -28376, ctx.r11.u32);
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// stw r9,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// stw r8,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83431EB4"))) PPC_WEAK_FUNC(sub_83431EB4);
PPC_FUNC_IMPL(__imp__sub_83431EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431EB8"))) PPC_WEAK_FUNC(sub_83431EB8);
PPC_FUNC_IMPL(__imp__sub_83431EB8) {
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
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// addi r31,r11,-27896
	ctx.r31.s64 = ctx.r11.s64 + -27896;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x83431ED8;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83431EE0;
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

__attribute__((alias("__imp__sub_83431EF4"))) PPC_WEAK_FUNC(sub_83431EF4);
PPC_FUNC_IMPL(__imp__sub_83431EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83431EF8"))) PPC_WEAK_FUNC(sub_83431EF8);
PPC_FUNC_IMPL(__imp__sub_83431EF8) {
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
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// addi r31,r11,-22816
	ctx.r31.s64 = ctx.r11.s64 + -22816;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x83431F24;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83431F2C;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-10612
	ctx.r11.s64 = ctx.r11.s64 + -10612;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-10184
	ctx.r10.s64 = ctx.r10.s64 + -10184;
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
	ctx.lr = 0x83431F84;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x83431F8C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-10688
	ctx.r11.s64 = ctx.r11.s64 + -10688;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-10204
	ctx.r10.s64 = ctx.r10.s64 + -10204;
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
	ctx.lr = 0x83431FCC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x83431FD4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,-10704
	ctx.r11.s64 = ctx.r11.s64 + -10704;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-10224
	ctx.r10.s64 = ctx.r10.s64 + -10224;
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
	ctx.lr = 0x83432014;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x8343201C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-10776
	ctx.r11.s64 = ctx.r11.s64 + -10776;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// addi r10,r10,-10236
	ctx.r10.s64 = ctx.r10.s64 + -10236;
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
	ctx.lr = 0x8343205C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x83432064;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-10836
	ctx.r11.s64 = ctx.r11.s64 + -10836;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// addi r10,r10,-10248
	ctx.r10.s64 = ctx.r10.s64 + -10248;
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
	ctx.lr = 0x834320A4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x834320AC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r11,r11,-10848
	ctx.r11.s64 = ctx.r11.s64 + -10848;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// addi r10,r10,-10260
	ctx.r10.s64 = ctx.r10.s64 + -10260;
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
	ctx.lr = 0x834320EC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x834320F4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r11,r11,-10596
	ctx.r11.s64 = ctx.r11.s64 + -10596;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// addi r10,r10,-10276
	ctx.r10.s64 = ctx.r10.s64 + -10276;
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
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
	ctx.lr = 0x83432134;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x8343213C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// addi r11,r11,-10724
	ctx.r11.s64 = ctx.r11.s64 + -10724;
	// stfs f29,400(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// addi r10,r10,-10300
	ctx.r10.s64 = ctx.r10.s64 + -10300;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stb r8,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x8343217C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x83432184;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-10744
	ctx.r11.s64 = ctx.r11.s64 + -10744;
	// addi r10,r10,-10324
	ctx.r10.s64 = ctx.r10.s64 + -10324;
	// li r9,0
	ctx.r9.s64 = 0;
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
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
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
	ctx.lr = 0x834321C4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e0be78
	ctx.lr = 0x834321CC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// addi r11,r11,-10764
	ctx.r11.s64 = ctx.r11.s64 + -10764;
	// stfs f29,496(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// addi r10,r10,-10348
	ctx.r10.s64 = ctx.r10.s64 + -10348;
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r10,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r10.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// stw r9,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r9.u32);
	// stb r8,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x8343220C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// bl 0x82e0be78
	ctx.lr = 0x83432214;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// addi r11,r11,-10864
	ctx.r11.s64 = ctx.r11.s64 + -10864;
	// stfs f29,544(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// addi r10,r10,-10368
	ctx.r10.s64 = ctx.r10.s64 + -10368;
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stb r9,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r9.u8);
	// bl 0x82e0be78
	ctx.lr = 0x83432254;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82e0be78
	ctx.lr = 0x8343225C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// addi r11,r11,-10880
	ctx.r11.s64 = ctx.r11.s64 + -10880;
	// stfs f29,592(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// addi r10,r10,-10388
	ctx.r10.s64 = ctx.r10.s64 + -10388;
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,600(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// stw r9,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// stb r8,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x8343229C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x82e0be78
	ctx.lr = 0x834322A4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// addi r11,r11,-10896
	ctx.r11.s64 = ctx.r11.s64 + -10896;
	// stfs f29,640(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// addi r10,r10,-10408
	ctx.r10.s64 = ctx.r10.s64 + -10408;
	// stfs f31,644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,648(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// stw r9,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r9.u32);
	// stb r8,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x834322E4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82e0be78
	ctx.lr = 0x834322EC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,680(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// addi r11,r11,-10580
	ctx.r11.s64 = ctx.r11.s64 + -10580;
	// stfs f29,688(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// addi r10,r10,-10424
	ctx.r10.s64 = ctx.r10.s64 + -10424;
	// stfs f31,692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r10,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r10.u32);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// stw r9,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r9.u32);
	// stb r8,700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 700, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x8343232C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// bl 0x82e0be78
	ctx.lr = 0x83432334;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// addi r11,r11,-10632
	ctx.r11.s64 = ctx.r11.s64 + -10632;
	// stfs f29,736(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// addi r10,r10,-10448
	ctx.r10.s64 = ctx.r10.s64 + -10448;
	// stfs f31,744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// addi r3,r31,752
	ctx.r3.s64 = ctx.r31.s64 + 752;
	// stw r9,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r9.u32);
	// stb r8,748(r31)
	PPC_STORE_U8(ctx.r31.u32 + 748, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x83432374;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x82e0be78
	ctx.lr = 0x8343237C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,776(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// addi r11,r11,-10652
	ctx.r11.s64 = ctx.r11.s64 + -10652;
	// stfs f29,784(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// addi r10,r10,-10472
	ctx.r10.s64 = ctx.r10.s64 + -10472;
	// stfs f31,788(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,792(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r11.u32);
	// stw r10,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r10.u32);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// stw r9,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r9.u32);
	// stb r8,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x834323BC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x82e0be78
	ctx.lr = 0x834323C4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,824(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// addi r11,r11,-10672
	ctx.r11.s64 = ctx.r11.s64 + -10672;
	// stfs f29,832(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// addi r10,r10,-10496
	ctx.r10.s64 = ctx.r10.s64 + -10496;
	// stfs f31,836(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,840(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// stw r9,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r9.u32);
	// stb r8,844(r31)
	PPC_STORE_U8(ctx.r31.u32 + 844, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x83432404;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x82e0be78
	ctx.lr = 0x8343240C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// addi r11,r11,-10792
	ctx.r11.s64 = ctx.r11.s64 + -10792;
	// addi r10,r10,-10516
	ctx.r10.s64 = ctx.r10.s64 + -10516;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,880(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// stfs f31,884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stw r9,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r9.u32);
	// stfs f31,888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// stb r11,892(r31)
	PPC_STORE_U8(ctx.r31.u32 + 892, ctx.r11.u8);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x82e0be78
	ctx.lr = 0x8343244C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x82e0be78
	ctx.lr = 0x83432454;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,920(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// addi r11,r11,-10808
	ctx.r11.s64 = ctx.r11.s64 + -10808;
	// stfs f29,928(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// addi r10,r10,-10536
	ctx.r10.s64 = ctx.r10.s64 + -10536;
	// stfs f31,932(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,936(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// stw r10,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r10.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// stw r9,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r9.u32);
	// stb r8,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x83432494;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// bl 0x82e0be78
	ctx.lr = 0x8343249C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,968(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// addi r11,r11,-10824
	ctx.r11.s64 = ctx.r11.s64 + -10824;
	// stfs f29,976(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// addi r10,r10,-10556
	ctx.r10.s64 = ctx.r10.s64 + -10556;
	// stfs f31,980(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// stw r9,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r9.u32);
	// stb r8,988(r31)
	PPC_STORE_U8(ctx.r31.u32 + 988, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x834324DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x82e0be78
	ctx.lr = 0x834324E4;
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

__attribute__((alias("__imp__sub_83432504"))) PPC_WEAK_FUNC(sub_83432504);
PPC_FUNC_IMPL(__imp__sub_83432504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432508"))) PPC_WEAK_FUNC(sub_83432508);
PPC_FUNC_IMPL(__imp__sub_83432508) {
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
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// addi r31,r11,-21032
	ctx.r31.s64 = ctx.r11.s64 + -21032;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x83432534;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x8343253C;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-9488
	ctx.r11.s64 = ctx.r11.s64 + -9488;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-8856
	ctx.r10.s64 = ctx.r10.s64 + -8856;
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
	ctx.lr = 0x83432594;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x8343259C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-9480
	ctx.r11.s64 = ctx.r11.s64 + -9480;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-8872
	ctx.r10.s64 = ctx.r10.s64 + -8872;
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
	ctx.lr = 0x834325DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x834325E4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,-29036
	ctx.r11.s64 = ctx.r11.s64 + -29036;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-8884
	ctx.r10.s64 = ctx.r10.s64 + -8884;
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
	ctx.lr = 0x83432624;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x8343262C;
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

__attribute__((alias("__imp__sub_8343264C"))) PPC_WEAK_FUNC(sub_8343264C);
PPC_FUNC_IMPL(__imp__sub_8343264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432650"))) PPC_WEAK_FUNC(sub_83432650);
PPC_FUNC_IMPL(__imp__sub_83432650) {
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
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// addi r31,r11,-19728
	ctx.r31.s64 = ctx.r11.s64 + -19728;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x8343267C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83432684;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-25324
	ctx.r11.s64 = ctx.r11.s64 + -25324;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-6476
	ctx.r10.s64 = ctx.r10.s64 + -6476;
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
	ctx.lr = 0x834326DC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x834326E4;
	sub_82E0BE78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,7788
	ctx.r11.s64 = ctx.r11.s64 + 7788;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-6492
	ctx.r10.s64 = ctx.r10.s64 + -6492;
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
	ctx.lr = 0x83432724;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x8343272C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,-15116
	ctx.r11.s64 = ctx.r11.s64 + -15116;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-6768
	ctx.r10.s64 = ctx.r10.s64 + -6768;
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
	ctx.lr = 0x8343276C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x83432774;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r11,r11,-8728
	ctx.r11.s64 = ctx.r11.s64 + -8728;
	// stfs f29,208(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// addi r10,r10,-6788
	ctx.r10.s64 = ctx.r10.s64 + -6788;
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
	ctx.lr = 0x834327B4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82e0be78
	ctx.lr = 0x834327BC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r11,-8736
	ctx.r11.s64 = ctx.r11.s64 + -8736;
	// stfs f29,256(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// addi r10,r10,-6508
	ctx.r10.s64 = ctx.r10.s64 + -6508;
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
	ctx.lr = 0x834327FC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82e0be78
	ctx.lr = 0x83432804;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r11,r11,-8748
	ctx.r11.s64 = ctx.r11.s64 + -8748;
	// stfs f29,304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// addi r10,r10,-6532
	ctx.r10.s64 = ctx.r10.s64 + -6532;
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
	ctx.lr = 0x83432844;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82e0be78
	ctx.lr = 0x8343284C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r11,r11,-8756
	ctx.r11.s64 = ctx.r11.s64 + -8756;
	// stfs f29,352(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// addi r10,r10,-6552
	ctx.r10.s64 = ctx.r10.s64 + -6552;
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
	ctx.lr = 0x8343288C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e0be78
	ctx.lr = 0x83432894;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// addi r11,r11,-8772
	ctx.r11.s64 = ctx.r11.s64 + -8772;
	// stfs f29,400(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// addi r10,r10,-6576
	ctx.r10.s64 = ctx.r10.s64 + -6576;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stb r8,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x834328D4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82e0be78
	ctx.lr = 0x834328DC;
	sub_82E0BE78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,16836
	ctx.r11.s64 = ctx.r11.s64 + 16836;
	// addi r10,r10,-6592
	ctx.r10.s64 = ctx.r10.s64 + -6592;
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
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
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
	ctx.lr = 0x8343291C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82e0be78
	ctx.lr = 0x83432924;
	sub_82E0BE78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// addi r11,r11,16844
	ctx.r11.s64 = ctx.r11.s64 + 16844;
	// stfs f29,496(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// addi r10,r10,-6612
	ctx.r10.s64 = ctx.r10.s64 + -6612;
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r10,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r10.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// stw r9,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r9.u32);
	// stb r8,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r8.u8);
	// bl 0x82e0be78
	ctx.lr = 0x83432964;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// bl 0x82e0be78
	ctx.lr = 0x8343296C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// addi r11,r11,-8784
	ctx.r11.s64 = ctx.r11.s64 + -8784;
	// stfs f29,544(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// addi r10,r10,-6628
	ctx.r10.s64 = ctx.r10.s64 + -6628;
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stb r9,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r9.u8);
	// bl 0x82e0be78
	ctx.lr = 0x834329AC;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82e0be78
	ctx.lr = 0x834329B4;
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

__attribute__((alias("__imp__sub_834329D4"))) PPC_WEAK_FUNC(sub_834329D4);
PPC_FUNC_IMPL(__imp__sub_834329D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834329D8"))) PPC_WEAK_FUNC(sub_834329D8);
PPC_FUNC_IMPL(__imp__sub_834329D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,19900
	ctx.r4.s64 = ctx.r11.s64 + 19900;
	// addi r3,r10,-11328
	ctx.r3.s64 = ctx.r10.s64 + -11328;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834329EC"))) PPC_WEAK_FUNC(sub_834329EC);
PPC_FUNC_IMPL(__imp__sub_834329EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834329F0"))) PPC_WEAK_FUNC(sub_834329F0);
PPC_FUNC_IMPL(__imp__sub_834329F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,16836
	ctx.r4.s64 = ctx.r11.s64 + 16836;
	// addi r3,r10,-11324
	ctx.r3.s64 = ctx.r10.s64 + -11324;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83432A04"))) PPC_WEAK_FUNC(sub_83432A04);
PPC_FUNC_IMPL(__imp__sub_83432A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432A08"))) PPC_WEAK_FUNC(sub_83432A08);
PPC_FUNC_IMPL(__imp__sub_83432A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-31992
	ctx.r4.s64 = ctx.r11.s64 + -31992;
	// addi r3,r10,-11320
	ctx.r3.s64 = ctx.r10.s64 + -11320;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83432A1C"))) PPC_WEAK_FUNC(sub_83432A1C);
PPC_FUNC_IMPL(__imp__sub_83432A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432A20"))) PPC_WEAK_FUNC(sub_83432A20);
PPC_FUNC_IMPL(__imp__sub_83432A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r4,r11,-10284
	ctx.r4.s64 = ctx.r11.s64 + -10284;
	// addi r3,r10,-11316
	ctx.r3.s64 = ctx.r10.s64 + -11316;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83432A34"))) PPC_WEAK_FUNC(sub_83432A34);
PPC_FUNC_IMPL(__imp__sub_83432A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432A38"))) PPC_WEAK_FUNC(sub_83432A38);
PPC_FUNC_IMPL(__imp__sub_83432A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// lwz r11,22088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22088);
	// addi r7,r8,-11296
	ctx.r7.s64 = ctx.r8.s64 + -11296;
	// lwz r10,22092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22092);
	// lwz r9,22116(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22116);
	// stw r11,-11296(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11296, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83432A68"))) PPC_WEAK_FUNC(sub_83432A68);
PPC_FUNC_IMPL(__imp__sub_83432A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// addi r10,r10,6488
	ctx.r10.s64 = ctx.r10.s64 + 6488;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// addi r9,r9,12452
	ctx.r9.s64 = ctx.r9.s64 + 12452;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,-11312
	ctx.r11.s64 = ctx.r8.s64 + -11312;
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

__attribute__((alias("__imp__sub_83432AB4"))) PPC_WEAK_FUNC(sub_83432AB4);
PPC_FUNC_IMPL(__imp__sub_83432AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432AB8"))) PPC_WEAK_FUNC(sub_83432AB8);
PPC_FUNC_IMPL(__imp__sub_83432AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// lis r4,-31879
	ctx.r4.s64 = -2089222144;
	// addi r6,r11,-17600
	ctx.r6.s64 = ctx.r11.s64 + -17600;
	// addi r3,r4,-17568
	ctx.r3.s64 = ctx.r4.s64 + -17568;
	// lwz r5,-17600(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17600);
	// lwz r11,-24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24);
	// lwz r10,-20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20);
	// lwz r9,-16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16);
	// lwz r8,-12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	// lwz r7,-8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// lwz r6,-4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// stw r11,-17568(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17568, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83432B04"))) PPC_WEAK_FUNC(sub_83432B04);
PPC_FUNC_IMPL(__imp__sub_83432B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432B08"))) PPC_WEAK_FUNC(sub_83432B08);
PPC_FUNC_IMPL(__imp__sub_83432B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r9,r9,-11280
	ctx.r9.s64 = ctx.r9.s64 + -11280;
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

__attribute__((alias("__imp__sub_83432B48"))) PPC_WEAK_FUNC(sub_83432B48);
PPC_FUNC_IMPL(__imp__sub_83432B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r9,-4124
	ctx.r9.s64 = ctx.r9.s64 + -4124;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r8,-11264
	ctx.r11.s64 = ctx.r8.s64 + -11264;
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

__attribute__((alias("__imp__sub_83432B90"))) PPC_WEAK_FUNC(sub_83432B90);
PPC_FUNC_IMPL(__imp__sub_83432B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r9,-4212
	ctx.r9.s64 = ctx.r9.s64 + -4212;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r8,-11248
	ctx.r11.s64 = ctx.r8.s64 + -11248;
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

__attribute__((alias("__imp__sub_83432BD8"))) PPC_WEAK_FUNC(sub_83432BD8);
PPC_FUNC_IMPL(__imp__sub_83432BD8) {
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
	// lfd f1,-18912(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18912);
	// bl 0x833a02c0
	ctx.lr = 0x83432BF0;
	sub_833A02C0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r9,-4284
	ctx.r9.s64 = ctx.r9.s64 + -4284;
	// lfs f0,-4212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4212);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// lis r7,-31843
	ctx.r7.s64 = -2086862848;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r7,-11232
	ctx.r10.s64 = ctx.r7.s64 + -11232;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v60,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 4));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83432C5C"))) PPC_WEAK_FUNC(sub_83432C5C);
PPC_FUNC_IMPL(__imp__sub_83432C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432C60"))) PPC_WEAK_FUNC(sub_83432C60);
PPC_FUNC_IMPL(__imp__sub_83432C60) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31843
	ctx.r10.s64 = -2086862848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-11248
	ctx.r4.s64 = ctx.r10.s64 + -11248;
	// lfs f1,8960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8960);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ee8728
	ctx.lr = 0x83432C84;
	sub_82EE8728(ctx, base);
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-11216
	ctx.r11.s64 = ctx.r11.s64 + -11216;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83432CA8"))) PPC_WEAK_FUNC(sub_83432CA8);
PPC_FUNC_IMPL(__imp__sub_83432CA8) {
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
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// addi r31,r11,-14576
	ctx.r31.s64 = ctx.r11.s64 + -14576;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e0be78
	ctx.lr = 0x83432CD4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82e0be78
	ctx.lr = 0x83432CDC;
	sub_82E0BE78(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f30,12452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12452);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,-29656
	ctx.r11.s64 = ctx.r11.s64 + -29656;
	// lfs f29,24284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24284);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
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
	ctx.lr = 0x83432D34;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82e0be78
	ctx.lr = 0x83432D3C;
	sub_82E0BE78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// stfs f29,112(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r10,r10,-1612
	ctx.r10.s64 = ctx.r10.s64 + -1612;
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
	ctx.lr = 0x83432D7C;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e0be78
	ctx.lr = 0x83432D84;
	sub_82E0BE78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r11,r11,-2700
	ctx.r11.s64 = ctx.r11.s64 + -2700;
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,-1628
	ctx.r10.s64 = ctx.r10.s64 + -1628;
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
	ctx.lr = 0x83432DC4;
	sub_82E0BE78(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82e0be78
	ctx.lr = 0x83432DCC;
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

__attribute__((alias("__imp__sub_83432DEC"))) PPC_WEAK_FUNC(sub_83432DEC);
PPC_FUNC_IMPL(__imp__sub_83432DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432DF0"))) PPC_WEAK_FUNC(sub_83432DF0);
PPC_FUNC_IMPL(__imp__sub_83432DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-31843
	ctx.r8.s64 = -2086862848;
	// lwz r11,21784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21784);
	// addi r7,r8,-11192
	ctx.r7.s64 = ctx.r8.s64 + -11192;
	// lwz r10,21788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21788);
	// lwz r9,21792(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21792);
	// stw r11,-11192(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11192, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83432E20"))) PPC_WEAK_FUNC(sub_83432E20);
PPC_FUNC_IMPL(__imp__sub_83432E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-31843
	ctx.r9.s64 = -2086862848;
	// addi r8,r9,-11180
	ctx.r8.s64 = ctx.r9.s64 + -11180;
	// lwz r11,21812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21812);
	// lwz r10,21816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21816);
	// stw r11,-11180(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11180, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83432E44"))) PPC_WEAK_FUNC(sub_83432E44);
PPC_FUNC_IMPL(__imp__sub_83432E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432E48"))) PPC_WEAK_FUNC(sub_83432E48);
PPC_FUNC_IMPL(__imp__sub_83432E48) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a018c
	ctx.lr = 0x83432E50;
	__savegprlr_21(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lwz r11,21968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21968);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lwz r10,22124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22124);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lwz r9,22076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22076);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lwz r8,21656(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21656);
	// lis r31,-32247
	ctx.r31.s64 = -2113339392;
	// lwz r7,21652(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21652);
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// lwz r6,21972(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21972);
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// lwz r5,21828(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 21828);
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lwz r4,21892(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 21892);
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// lwz r3,22028(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22028);
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// lwz r31,21832(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21832);
	// lis r25,-32247
	ctx.r25.s64 = -2113339392;
	// lwz r30,21896(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21896);
	// lis r24,-32247
	ctx.r24.s64 = -2113339392;
	// lwz r29,22032(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22032);
	// lis r23,-32247
	ctx.r23.s64 = -2113339392;
	// lwz r28,22140(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22140);
	// lis r22,-31843
	ctx.r22.s64 = -2086862848;
	// lwz r27,21720(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21720);
	// lwz r26,21768(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21768);
	// addi r21,r22,-11168
	ctx.r21.s64 = ctx.r22.s64 + -11168;
	// lwz r25,22136(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22136);
	// lwz r24,21716(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21716);
	// lwz r23,21772(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21772);
	// stw r11,-11168(r22)
	PPC_STORE_U32(ctx.r22.u32 + -11168, ctx.r11.u32);
	// stw r10,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// stw r9,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r9.u32);
	// stw r8,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r8.u32);
	// stw r7,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r7.u32);
	// stw r6,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r6.u32);
	// stw r5,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r5.u32);
	// stw r4,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r4.u32);
	// stw r3,32(r21)
	PPC_STORE_U32(ctx.r21.u32 + 32, ctx.r3.u32);
	// stw r31,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r31.u32);
	// stw r30,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r30.u32);
	// stw r29,44(r21)
	PPC_STORE_U32(ctx.r21.u32 + 44, ctx.r29.u32);
	// stw r28,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r28.u32);
	// stw r27,52(r21)
	PPC_STORE_U32(ctx.r21.u32 + 52, ctx.r27.u32);
	// stw r26,56(r21)
	PPC_STORE_U32(ctx.r21.u32 + 56, ctx.r26.u32);
	// stw r25,60(r21)
	PPC_STORE_U32(ctx.r21.u32 + 60, ctx.r25.u32);
	// stw r24,64(r21)
	PPC_STORE_U32(ctx.r21.u32 + 64, ctx.r24.u32);
	// stw r23,68(r21)
	PPC_STORE_U32(ctx.r21.u32 + 68, ctx.r23.u32);
	// b 0x833a01dc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83432F34"))) PPC_WEAK_FUNC(sub_83432F34);
PPC_FUNC_IMPL(__imp__sub_83432F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83432F38"))) PPC_WEAK_FUNC(sub_83432F38);
PPC_FUNC_IMPL(__imp__sub_83432F38) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lwz r11,22080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22080);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lwz r10,21660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21660);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lwz r9,21976(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21976);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lwz r8,21836(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21836);
	// lis r31,-31879
	ctx.r31.s64 = -2089222144;
	// lwz r7,21900(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21900);
	// lwz r6,22036(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22036);
	// addi r31,r31,-9824
	ctx.r31.s64 = ctx.r31.s64 + -9824;
	// lwz r5,22144(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22144);
	// lwz r4,21724(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 21724);
	// lwz r3,21776(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21776);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83432FB8"))) PPC_WEAK_FUNC(sub_83432FB8);
PPC_FUNC_IMPL(__imp__sub_83432FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x833a0170
	ctx.lr = 0x83432FC0;
	__savegprlr_14(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
	// addi r9,r9,-4212
	ctx.r9.s64 = ctx.r9.s64 + -4212;
	// lvlx128 v56,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,18284
	ctx.r8.s64 = ctx.r8.s64 + 18284;
	// vor128 v63,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lis r11,-31879
	ctx.r11.s64 = -2089222144;
	// vor128 v62,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,-10688
	ctx.r11.s64 = ctx.r11.s64 + -10688;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v55,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// addi r9,r7,2864
	ctx.r9.s64 = ctx.r7.s64 + 2864;
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// vor128 v61,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v54,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r8,r8,2860
	ctx.r8.s64 = ctx.r8.s64 + 2860;
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// addi r7,r7,2856
	ctx.r7.s64 = ctx.r7.s64 + 2856;
	// vor128 v62,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// vor128 v60,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// li r5,48
	ctx.r5.s64 = 48;
	// vrlimi128 v63,v54,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// addi r4,r4,4796
	ctx.r4.s64 = ctx.r4.s64 + 4796;
	// vrlimi128 v62,v54,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// addi r3,r3,-13632
	ctx.r3.s64 = ctx.r3.s64 + -13632;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r31,64
	ctx.r31.s64 = 64;
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,2852
	ctx.r6.s64 = ctx.r6.s64 + 2852;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,4152
	ctx.r10.s64 = ctx.r10.s64 + 4152;
	// lvlx128 v58,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v58,v62,4,3
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vrlimi128 v59,v55,4,3
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// vor128 v62,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// addi r9,r9,2848
	ctx.r9.s64 = ctx.r9.s64 + 2848;
	// addi r8,r8,2844
	ctx.r8.s64 = ctx.r8.s64 + 2844;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// vrlimi128 v62,v59,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 78), 2));
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// addi r7,r7,2840
	ctx.r7.s64 = ctx.r7.s64 + 2840;
	// addi r30,r30,21848
	ctx.r30.s64 = ctx.r30.s64 + 21848;
	// addi r29,r29,4168
	ctx.r29.s64 = ctx.r29.s64 + 4168;
	// stvx128 v62,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,96
	ctx.r5.s64 = 96;
	// lvlx128 v58,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v59,v55,4,3
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vrlimi128 v62,v58,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 57), 4));
	// li r6,112
	ctx.r6.s64 = 112;
	// vrlimi128 v62,v59,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 78), 2));
	// stvx128 v62,r11,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v57,v62,4,3
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vrlimi128 v59,v55,4,3
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vor128 v62,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vrlimi128 v62,v59,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 78), 2));
	// stvx128 v62,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r4,2836
	ctx.r10.s64 = ctx.r4.s64 + 2836;
	// vrlimi128 v61,v62,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r8,144
	ctx.r8.s64 = 144;
	// vor128 v57,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// addi r7,r7,-22380
	ctx.r7.s64 = ctx.r7.s64 + -22380;
	// vor128 v59,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// vor128 v53,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v62,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// addi r9,r9,2832
	ctx.r9.s64 = ctx.r9.s64 + 2832;
	// vor128 v61,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// addi r5,r5,-9176
	ctx.r5.s64 = ctx.r5.s64 + -9176;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// vrlimi128 v62,v54,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r3,2828
	ctx.r3.s64 = ctx.r3.s64 + 2828;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// li r28,208
	ctx.r28.s64 = 208;
	// stvx128 v62,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lvlx128 v52,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r30,192
	ctx.r30.s64 = 192;
	// lvlx128 v62,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r6,8548
	ctx.r6.s64 = ctx.r6.s64 + 8548;
	// lvlx128 v51,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v51,v62,4,3
	simde_mm_store_ps(ctx.v51.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vrlimi128 v52,v55,4,3
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// vor128 v62,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// addi r31,r31,19636
	ctx.r31.s64 = ctx.r31.s64 + 19636;
	// addi r10,r10,-9180
	ctx.r10.s64 = ctx.r10.s64 + -9180;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// li r26,256
	ctx.r26.s64 = 256;
	// vrlimi128 v62,v52,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 78), 2));
	// addi r29,r29,8960
	ctx.r29.s64 = ctx.r29.s64 + 8960;
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// lis r23,-32242
	ctx.r23.s64 = -2113011712;
	// addi r27,r27,4164
	ctx.r27.s64 = ctx.r27.s64 + 4164;
	// stvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvlx128 v51,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lvlx128 v52,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// lvlx128 v50,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v51,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 57), 4));
	// vrlimi128 v50,v55,4,3
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// vrlimi128 v62,v50,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 78), 2));
	// addi r8,r8,6636
	ctx.r8.s64 = ctx.r8.s64 + 6636;
	// addi r9,r9,-9168
	ctx.r9.s64 = ctx.r9.s64 + -9168;
	// vrlimi128 v57,v52,4,3
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 57), 4));
	// addi r7,r7,2820
	ctx.r7.s64 = ctx.r7.s64 + 2820;
	// li r25,240
	ctx.r25.s64 = 240;
	// stvx128 v62,r11,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,304
	ctx.r24.s64 = 304;
	// lvlx128 v49,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r22,288
	ctx.r22.s64 = 288;
	// lvlx128 v50,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v62,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vrlimi128 v49,v62,4,3
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// addi r10,r23,2824
	ctx.r10.s64 = ctx.r23.s64 + 2824;
	// vrlimi128 v50,v55,4,3
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vor128 v62,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v49,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v62,v50,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 78), 2));
	// vrlimi128 v49,v54,2,2
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// stvx128 v62,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v62,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vor128 v62,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v60,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vrlimi128 v62,v54,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// stvx128 v62,r11,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v50,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v50,v55,4,3
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// stvx128 v60,r11,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v61,v50,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 78), 2));
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// vor128 v52,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// addi r6,r6,2816
	ctx.r6.s64 = ctx.r6.s64 + 2816;
	// vrlimi128 v57,v54,2,2
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// li r5,336
	ctx.r5.s64 = 336;
	// stvx128 v61,r11,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-4192
	ctx.r3.s64 = ctx.r3.s64 + -4192;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lvlx128 v50,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lvlx128 v49,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v59,v49,4,3
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 57), 4));
	// vrlimi128 v50,v61,4,3
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// addi r4,r4,-4124
	ctx.r4.s64 = ctx.r4.s64 + -4124;
	// vor128 v48,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// li r9,352
	ctx.r9.s64 = 352;
	// vor128 v60,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// addi r8,r7,2812
	ctx.r8.s64 = ctx.r7.s64 + 2812;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vor128 v61,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// vrlimi128 v48,v55,4,3
	simde_mm_store_ps(ctx.v48.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// addi r7,r7,4800
	ctx.r7.s64 = ctx.r7.s64 + 4800;
	// vrlimi128 v60,v54,2,2
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// addi r31,r31,2808
	ctx.r31.s64 = ctx.r31.s64 + 2808;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r21,-32242
	ctx.r21.s64 = -2113011712;
	// vrlimi128 v61,v48,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 78), 2));
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// stvx128 v60,r11,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// stvx128 v61,r11,r22
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r14,-32249
	ctx.r14.s64 = -2113470464;
	// lvlx128 v50,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r23,-19136
	ctx.r24.s64 = ctx.r23.s64 + -19136;
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v55,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vrlimi128 v61,v50,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 57), 4));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r23,r21,2804
	ctx.r23.s64 = ctx.r21.s64 + 2804;
	// addi r30,r30,2800
	ctx.r30.s64 = ctx.r30.s64 + 2800;
	// addi r29,r29,-21804
	ctx.r29.s64 = ctx.r29.s64 + -21804;
	// vrlimi128 v61,v60,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// addi r28,r28,7476
	ctx.r28.s64 = ctx.r28.s64 + 7476;
	// addi r26,r26,2796
	ctx.r26.s64 = ctx.r26.s64 + 2796;
	// addi r25,r25,2792
	ctx.r25.s64 = ctx.r25.s64 + 2792;
	// li r22,384
	ctx.r22.s64 = 384;
	// stvx128 v61,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r21,400
	ctx.r21.s64 = 400;
	// lvlx128 v48,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r20,448
	ctx.r20.s64 = 448;
	// lvlx128 v61,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vrlimi128 v48,v49,4,3
	simde_mm_store_ps(ctx.v48.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 57), 4));
	// li r19,432
	ctx.r19.s64 = 432;
	// vrlimi128 v60,v55,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// li r18,496
	ctx.r18.s64 = 496;
	// vrlimi128 v52,v61,4,3
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// li r17,480
	ctx.r17.s64 = 480;
	// li r16,544
	ctx.r16.s64 = 544;
	// vor128 v61,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// li r15,528
	ctx.r15.s64 = 528;
	// vor128 v49,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// addi r10,r10,2788
	ctx.r10.s64 = ctx.r10.s64 + 2788;
	// vrlimi128 v61,v49,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 2));
	// stvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lvlx128 v48,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r14,8556
	ctx.r8.s64 = ctx.r14.s64 + 8556;
	// lvlx128 v47,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v47,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v47.f32), 57), 4));
	// vrlimi128 v48,v55,4,3
	simde_mm_store_ps(ctx.v48.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vor128 v47,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vrlimi128 v60,v48,2,2
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 78), 2));
	// addi r9,r9,2784
	ctx.r9.s64 = ctx.r9.s64 + 2784;
	// vor128 v43,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vor128 v58,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// lis r14,-32242
	ctx.r14.s64 = -2113011712;
	// addi r7,r7,6480
	ctx.r7.s64 = ctx.r7.s64 + 6480;
	// vor128 v46,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// stvx128 v60,r11,r22
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r31,-32252
	ctx.r31.s64 = -2113667072;
	// lvlx128 v60,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v60,4,3
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 4));
	// vor128 v60,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// li r30,576
	ctx.r30.s64 = 576;
	// vrlimi128 v47,v51,4,3
	simde_mm_store_ps(ctx.v47.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 57), 4));
	// addi r31,r31,-31568
	ctx.r31.s64 = ctx.r31.s64 + -31568;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// vor128 v45,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// vrlimi128 v60,v49,2,2
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 2));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// vor128 v44,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// stvx128 v60,r11,r21
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,-6216
	ctx.r6.s64 = ctx.r6.s64 + -6216;
	// lvlx128 v53,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r5,13252
	ctx.r5.s64 = ctx.r5.s64 + 13252;
	// lvlx128 v60,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r4,20356
	ctx.r4.s64 = ctx.r4.s64 + 20356;
	// lvlx128 v52,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v52,v60,4,3
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 4));
	// vrlimi128 v53,v55,4,3
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// stvx128 v57,r11,r20
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v60,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// addi r20,r14,2780
	ctx.r20.s64 = ctx.r14.s64 + 2780;
	// li r14,720
	ctx.r14.s64 = 720;
	// addi r3,r3,-16440
	ctx.r3.s64 = ctx.r3.s64 + -16440;
	// stw r14,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r14.u32);
	// li r31,592
	ctx.r31.s64 = 592;
	// vrlimi128 v60,v53,2,2
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 78), 2));
	// li r21,624
	ctx.r21.s64 = 624;
	// li r26,640
	ctx.r26.s64 = 640;
	// li r29,688
	ctx.r29.s64 = 688;
	// li r28,672
	ctx.r28.s64 = 672;
	// stvx128 v60,r11,r19
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r27,14788
	ctx.r27.s64 = ctx.r27.s64 + 14788;
	// lvlx128 v57,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r14,736
	ctx.r14.s64 = 736;
	// lvlx128 v60,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v50,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 57), 4));
	// stvx128 v61,r11,r18
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r18.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v61,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vrlimi128 v57,v55,4,3
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// addi r22,r22,2776
	ctx.r22.s64 = ctx.r22.s64 + 2776;
	// vrlimi128 v61,v57,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 78), 2));
	// stvx128 v61,r11,r17
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v55,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vrlimi128 v59,v61,2,2
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v62,r11,r16
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r11,r15
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v59,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,2772
	ctx.r10.s64 = ctx.r10.s64 + 2772;
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v55,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vor128 v60,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v61,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// vrlimi128 v62,v60,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// li r8,784
	ctx.r8.s64 = 784;
	// stvx128 v62,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v46,v61,4,3
	simde_mm_store_ps(ctx.v46.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vor128 v62,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vrlimi128 v43,v61,4,3
	simde_mm_store_ps(ctx.v43.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v62,v60,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// vor128 v61,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// li r7,768
	ctx.r7.s64 = 768;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// addi r9,r9,2768
	ctx.r9.s64 = ctx.r9.s64 + 2768;
	// stvx128 v62,r11,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r25,2764
	ctx.r31.s64 = ctx.r25.s64 + 2764;
	// lvlx128 v60,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r30,2760
	ctx.r30.s64 = ctx.r30.s64 + 2760;
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v45,v62,4,3
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vrlimi128 v60,v55,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// vor128 v62,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// li r6,816
	ctx.r6.s64 = 816;
	// addi r5,r5,-5676
	ctx.r5.s64 = ctx.r5.s64 + -5676;
	// li r25,832
	ctx.r25.s64 = 832;
	// vrlimi128 v62,v60,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v62,r11,r21
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v44,v62,4,3
	simde_mm_store_ps(ctx.v44.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// vor128 v62,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// lwz r4,-160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// vrlimi128 v62,v54,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// stvx128 v62,r11,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v62,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v55,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vrlimi128 v58,v60,2,2
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v60,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v58,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 57), 4));
	// vrlimi128 v60,v55,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// lwz r4,-156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// vrlimi128 v63,v60,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v63,r11,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vrlimi128 v63,v54,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// lvlx128 v60,r0,r22
	temp.u32 = ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v55,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vrlimi128 v61,v60,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// stvx128 v61,r11,r14
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r14.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v55,4,3
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vrlimi128 v62,v61,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v55,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// lvlx128 v61,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v61,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v56,v63,4,3
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// vor128 v63,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vrlimi128 v63,v54,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 2));
	// stvx128 v63,r11,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x833a01c0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834335D0"))) PPC_WEAK_FUNC(sub_834335D0);
PPC_FUNC_IMPL(__imp__sub_834335D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834335DC"))) PPC_WEAK_FUNC(sub_834335DC);
PPC_FUNC_IMPL(__imp__sub_834335DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834335E0"))) PPC_WEAK_FUNC(sub_834335E0);
PPC_FUNC_IMPL(__imp__sub_834335E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6352
	ctx.r3.s64 = ctx.r11.s64 + -6352;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834335EC"))) PPC_WEAK_FUNC(sub_834335EC);
PPC_FUNC_IMPL(__imp__sub_834335EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834335F0"))) PPC_WEAK_FUNC(sub_834335F0);
PPC_FUNC_IMPL(__imp__sub_834335F0) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,-3240
	ctx.r31.s64 = ctx.r11.s64 + -3240;
	// addi r4,r10,5460
	ctx.r4.s64 = ctx.r10.s64 + 5460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e02670
	ctx.lr = 0x83433618;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,5452
	ctx.r4.s64 = ctx.r11.s64 + 5452;
	// bl 0x82e02670
	ctx.lr = 0x83433628;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,5444
	ctx.r4.s64 = ctx.r11.s64 + 5444;
	// bl 0x82e02670
	ctx.lr = 0x83433638;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,5436
	ctx.r4.s64 = ctx.r11.s64 + 5436;
	// bl 0x82e02670
	ctx.lr = 0x83433648;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,-25440
	ctx.r4.s64 = ctx.r11.s64 + -25440;
	// bl 0x82e02670
	ctx.lr = 0x83433658;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,5428
	ctx.r4.s64 = ctx.r11.s64 + 5428;
	// bl 0x82e02670
	ctx.lr = 0x83433668;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,5420
	ctx.r4.s64 = ctx.r11.s64 + 5420;
	// bl 0x82e02670
	ctx.lr = 0x83433678;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,5412
	ctx.r4.s64 = ctx.r11.s64 + 5412;
	// bl 0x82e02670
	ctx.lr = 0x83433688;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r11,5404
	ctx.r4.s64 = ctx.r11.s64 + 5404;
	// bl 0x82e02670
	ctx.lr = 0x83433698;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r11,5396
	ctx.r4.s64 = ctx.r11.s64 + 5396;
	// bl 0x82e02670
	ctx.lr = 0x834336A8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,5388
	ctx.r4.s64 = ctx.r11.s64 + 5388;
	// bl 0x82e02670
	ctx.lr = 0x834336B8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r4,r11,5380
	ctx.r4.s64 = ctx.r11.s64 + 5380;
	// bl 0x82e02670
	ctx.lr = 0x834336C8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r11,5372
	ctx.r4.s64 = ctx.r11.s64 + 5372;
	// bl 0x82e02670
	ctx.lr = 0x834336D8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r4,r11,5364
	ctx.r4.s64 = ctx.r11.s64 + 5364;
	// bl 0x82e02670
	ctx.lr = 0x834336E8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r4,r11,5356
	ctx.r4.s64 = ctx.r11.s64 + 5356;
	// bl 0x82e02670
	ctx.lr = 0x834336F8;
	sub_82E02670(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r4,r11,-14052
	ctx.r4.s64 = ctx.r11.s64 + -14052;
	// bl 0x82e02670
	ctx.lr = 0x83433708;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r11,5348
	ctx.r4.s64 = ctx.r11.s64 + 5348;
	// bl 0x82e02670
	ctx.lr = 0x83433718;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r11,5188
	ctx.r4.s64 = ctx.r11.s64 + 5188;
	// bl 0x82e02670
	ctx.lr = 0x83433728;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r11,5180
	ctx.r4.s64 = ctx.r11.s64 + 5180;
	// bl 0x82e02670
	ctx.lr = 0x83433738;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// addi r4,r11,5340
	ctx.r4.s64 = ctx.r11.s64 + 5340;
	// bl 0x82e02670
	ctx.lr = 0x83433748;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,5172
	ctx.r4.s64 = ctx.r11.s64 + 5172;
	// bl 0x82e02670
	ctx.lr = 0x83433758;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,5164
	ctx.r4.s64 = ctx.r11.s64 + 5164;
	// bl 0x82e02670
	ctx.lr = 0x83433768;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r4,r11,5196
	ctx.r4.s64 = ctx.r11.s64 + 5196;
	// bl 0x82e02670
	ctx.lr = 0x83433778;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r4,r11,5332
	ctx.r4.s64 = ctx.r11.s64 + 5332;
	// bl 0x82e02670
	ctx.lr = 0x83433788;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,5324
	ctx.r4.s64 = ctx.r11.s64 + 5324;
	// bl 0x82e02670
	ctx.lr = 0x83433798;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r11,5316
	ctx.r4.s64 = ctx.r11.s64 + 5316;
	// bl 0x82e02670
	ctx.lr = 0x834337A8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r11,5308
	ctx.r4.s64 = ctx.r11.s64 + 5308;
	// bl 0x82e02670
	ctx.lr = 0x834337B8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r4,r11,5300
	ctx.r4.s64 = ctx.r11.s64 + 5300;
	// bl 0x82e02670
	ctx.lr = 0x834337C8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,5292
	ctx.r4.s64 = ctx.r11.s64 + 5292;
	// bl 0x82e02670
	ctx.lr = 0x834337D8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// addi r4,r11,5284
	ctx.r4.s64 = ctx.r11.s64 + 5284;
	// bl 0x82e02670
	ctx.lr = 0x834337E8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r4,r11,5276
	ctx.r4.s64 = ctx.r11.s64 + 5276;
	// bl 0x82e02670
	ctx.lr = 0x834337F8;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r4,r11,5268
	ctx.r4.s64 = ctx.r11.s64 + 5268;
	// bl 0x82e02670
	ctx.lr = 0x83433808;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r11,5260
	ctx.r4.s64 = ctx.r11.s64 + 5260;
	// bl 0x82e02670
	ctx.lr = 0x83433818;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// addi r4,r11,5252
	ctx.r4.s64 = ctx.r11.s64 + 5252;
	// bl 0x82e02670
	ctx.lr = 0x83433828;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// addi r4,r11,5244
	ctx.r4.s64 = ctx.r11.s64 + 5244;
	// bl 0x82e02670
	ctx.lr = 0x83433838;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// addi r4,r11,5236
	ctx.r4.s64 = ctx.r11.s64 + 5236;
	// bl 0x82e02670
	ctx.lr = 0x83433848;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,5228
	ctx.r4.s64 = ctx.r11.s64 + 5228;
	// bl 0x82e02670
	ctx.lr = 0x83433858;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r4,r11,5220
	ctx.r4.s64 = ctx.r11.s64 + 5220;
	// bl 0x82e02670
	ctx.lr = 0x83433868;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r4,r11,5212
	ctx.r4.s64 = ctx.r11.s64 + 5212;
	// bl 0x82e02670
	ctx.lr = 0x83433878;
	sub_82E02670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// addi r4,r11,5204
	ctx.r4.s64 = ctx.r11.s64 + 5204;
	// bl 0x82e02670
	ctx.lr = 0x83433888;
	sub_82E02670(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// bl 0x833a1ff8
	ctx.lr = 0x83433894;
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

__attribute__((alias("__imp__sub_834338A8"))) PPC_WEAK_FUNC(sub_834338A8);
PPC_FUNC_IMPL(__imp__sub_834338A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-31879
	ctx.r8.s64 = -2089222144;
	// lis r7,-31879
	ctx.r7.s64 = -2089222144;
	// lfs f13,6564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6564);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,-3060
	ctx.r11.s64 = ctx.r8.s64 + -3060;
	// lfs f0,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,-3040
	ctx.r10.s64 = ctx.r7.s64 + -3040;
	// lfs f12,6568(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6568);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,-3060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f13,-3040(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + -3040, temp.u32);
	// fsubs f11,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f11,24(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f13,40(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f12,44(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stfs f12,64(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83433914"))) PPC_WEAK_FUNC(sub_83433914);
PPC_FUNC_IMPL(__imp__sub_83433914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433918"))) PPC_WEAK_FUNC(sub_83433918);
PPC_FUNC_IMPL(__imp__sub_83433918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,17672
	ctx.r4.s64 = ctx.r11.s64 + 17672;
	// addi r3,r10,-3072
	ctx.r3.s64 = ctx.r10.s64 + -3072;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343392C"))) PPC_WEAK_FUNC(sub_8343392C);
PPC_FUNC_IMPL(__imp__sub_8343392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433930"))) PPC_WEAK_FUNC(sub_83433930);
PPC_FUNC_IMPL(__imp__sub_83433930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,17668
	ctx.r4.s64 = ctx.r11.s64 + 17668;
	// addi r3,r10,-3068
	ctx.r3.s64 = ctx.r10.s64 + -3068;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433944"))) PPC_WEAK_FUNC(sub_83433944);
PPC_FUNC_IMPL(__imp__sub_83433944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433948"))) PPC_WEAK_FUNC(sub_83433948);
PPC_FUNC_IMPL(__imp__sub_83433948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6256
	ctx.r3.s64 = ctx.r11.s64 + -6256;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433954"))) PPC_WEAK_FUNC(sub_83433954);
PPC_FUNC_IMPL(__imp__sub_83433954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433958"))) PPC_WEAK_FUNC(sub_83433958);
PPC_FUNC_IMPL(__imp__sub_83433958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-28944
	ctx.r11.s64 = ctx.r11.s64 + -28944;
	// lis r9,-31879
	ctx.r9.s64 = -2089222144;
	// addi r9,r9,4224
	ctx.r9.s64 = ctx.r9.s64 + 4224;
	// lfs f0,-12580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12580);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834339EC"))) PPC_WEAK_FUNC(sub_834339EC);
PPC_FUNC_IMPL(__imp__sub_834339EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834339F0"))) PPC_WEAK_FUNC(sub_834339F0);
PPC_FUNC_IMPL(__imp__sub_834339F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-28896
	ctx.r11.s64 = ctx.r11.s64 + -28896;
	// lis r9,-31879
	ctx.r9.s64 = -2089222144;
	// addi r9,r9,4272
	ctx.r9.s64 = ctx.r9.s64 + 4272;
	// lfs f0,-12580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12580);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83433A84"))) PPC_WEAK_FUNC(sub_83433A84);
PPC_FUNC_IMPL(__imp__sub_83433A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433A88"))) PPC_WEAK_FUNC(sub_83433A88);
PPC_FUNC_IMPL(__imp__sub_83433A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-28944
	ctx.r11.s64 = ctx.r11.s64 + -28944;
	// lis r9,-31879
	ctx.r9.s64 = -2089222144;
	// addi r9,r9,4320
	ctx.r9.s64 = ctx.r9.s64 + 4320;
	// lfs f0,8684(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83433B1C"))) PPC_WEAK_FUNC(sub_83433B1C);
PPC_FUNC_IMPL(__imp__sub_83433B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433B20"))) PPC_WEAK_FUNC(sub_83433B20);
PPC_FUNC_IMPL(__imp__sub_83433B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-28896
	ctx.r11.s64 = ctx.r11.s64 + -28896;
	// lis r9,-31879
	ctx.r9.s64 = -2089222144;
	// addi r9,r9,4368
	ctx.r9.s64 = ctx.r9.s64 + 4368;
	// lfs f0,8684(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83433BB4"))) PPC_WEAK_FUNC(sub_83433BB4);
PPC_FUNC_IMPL(__imp__sub_83433BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433BB8"))) PPC_WEAK_FUNC(sub_83433BB8);
PPC_FUNC_IMPL(__imp__sub_83433BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,2656
	ctx.r3.s64 = ctx.r11.s64 + 2656;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x833a2b30
	sub_833A2B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433BCC"))) PPC_WEAK_FUNC(sub_83433BCC);
PPC_FUNC_IMPL(__imp__sub_83433BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433BD0"))) PPC_WEAK_FUNC(sub_83433BD0);
PPC_FUNC_IMPL(__imp__sub_83433BD0) {
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
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// addi r11,r11,-24980
	ctx.r11.s64 = ctx.r11.s64 + -24980;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8368fda4
	ctx.lr = 0x83433BEC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6224
	ctx.r3.s64 = ctx.r11.s64 + -6224;
	// bl 0x833a1ff8
	ctx.lr = 0x83433BF8;
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

__attribute__((alias("__imp__sub_83433C08"))) PPC_WEAK_FUNC(sub_83433C08);
PPC_FUNC_IMPL(__imp__sub_83433C08) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,2864
	ctx.r3.s64 = ctx.r11.s64 + 2864;
	// bl 0x82dfffb8
	ctx.lr = 0x83433C20;
	sub_82DFFFB8(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6200
	ctx.r3.s64 = ctx.r11.s64 + -6200;
	// bl 0x833a1ff8
	ctx.lr = 0x83433C2C;
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

__attribute__((alias("__imp__sub_83433C3C"))) PPC_WEAK_FUNC(sub_83433C3C);
PPC_FUNC_IMPL(__imp__sub_83433C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433C40"))) PPC_WEAK_FUNC(sub_83433C40);
PPC_FUNC_IMPL(__imp__sub_83433C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433C4C"))) PPC_WEAK_FUNC(sub_83433C4C);
PPC_FUNC_IMPL(__imp__sub_83433C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433C50"))) PPC_WEAK_FUNC(sub_83433C50);
PPC_FUNC_IMPL(__imp__sub_83433C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6184
	ctx.r3.s64 = ctx.r11.s64 + -6184;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433C5C"))) PPC_WEAK_FUNC(sub_83433C5C);
PPC_FUNC_IMPL(__imp__sub_83433C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433C60"))) PPC_WEAK_FUNC(sub_83433C60);
PPC_FUNC_IMPL(__imp__sub_83433C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6088
	ctx.r3.s64 = ctx.r11.s64 + -6088;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433C6C"))) PPC_WEAK_FUNC(sub_83433C6C);
PPC_FUNC_IMPL(__imp__sub_83433C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433C70"))) PPC_WEAK_FUNC(sub_83433C70);
PPC_FUNC_IMPL(__imp__sub_83433C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6064
	ctx.r3.s64 = ctx.r11.s64 + -6064;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433C7C"))) PPC_WEAK_FUNC(sub_83433C7C);
PPC_FUNC_IMPL(__imp__sub_83433C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433C80"))) PPC_WEAK_FUNC(sub_83433C80);
PPC_FUNC_IMPL(__imp__sub_83433C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6040
	ctx.r3.s64 = ctx.r11.s64 + -6040;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433C8C"))) PPC_WEAK_FUNC(sub_83433C8C);
PPC_FUNC_IMPL(__imp__sub_83433C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433C90"))) PPC_WEAK_FUNC(sub_83433C90);
PPC_FUNC_IMPL(__imp__sub_83433C90) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3040
	ctx.r3.s64 = ctx.r11.s64 + 3040;
	// bl 0x82dfffb8
	ctx.lr = 0x83433CA8;
	sub_82DFFFB8(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6016
	ctx.r3.s64 = ctx.r11.s64 + -6016;
	// bl 0x833a1ff8
	ctx.lr = 0x83433CB4;
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

__attribute__((alias("__imp__sub_83433CC4"))) PPC_WEAK_FUNC(sub_83433CC4);
PPC_FUNC_IMPL(__imp__sub_83433CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433CC8"))) PPC_WEAK_FUNC(sub_83433CC8);
PPC_FUNC_IMPL(__imp__sub_83433CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-6000
	ctx.r3.s64 = ctx.r11.s64 + -6000;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433CD4"))) PPC_WEAK_FUNC(sub_83433CD4);
PPC_FUNC_IMPL(__imp__sub_83433CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433CD8"))) PPC_WEAK_FUNC(sub_83433CD8);
PPC_FUNC_IMPL(__imp__sub_83433CD8) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3524
	ctx.r3.s64 = ctx.r11.s64 + 3524;
	// bl 0x82e01a68
	ctx.lr = 0x83433CF0;
	sub_82E01A68(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-5968
	ctx.r3.s64 = ctx.r11.s64 + -5968;
	// bl 0x833a1ff8
	ctx.lr = 0x83433CFC;
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

__attribute__((alias("__imp__sub_83433D0C"))) PPC_WEAK_FUNC(sub_83433D0C);
PPC_FUNC_IMPL(__imp__sub_83433D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433D10"))) PPC_WEAK_FUNC(sub_83433D10);
PPC_FUNC_IMPL(__imp__sub_83433D10) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r3,r11,3528
	ctx.r3.s64 = ctx.r11.s64 + 3528;
	// bl 0x82e01a68
	ctx.lr = 0x83433D28;
	sub_82E01A68(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// bl 0x833a1ff8
	ctx.lr = 0x83433D34;
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

__attribute__((alias("__imp__sub_83433D44"))) PPC_WEAK_FUNC(sub_83433D44);
PPC_FUNC_IMPL(__imp__sub_83433D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433D48"))) PPC_WEAK_FUNC(sub_83433D48);
PPC_FUNC_IMPL(__imp__sub_83433D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-5840
	ctx.r3.s64 = ctx.r11.s64 + -5840;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433D54"))) PPC_WEAK_FUNC(sub_83433D54);
PPC_FUNC_IMPL(__imp__sub_83433D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433D58"))) PPC_WEAK_FUNC(sub_83433D58);
PPC_FUNC_IMPL(__imp__sub_83433D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-5808
	ctx.r3.s64 = ctx.r11.s64 + -5808;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433D64"))) PPC_WEAK_FUNC(sub_83433D64);
PPC_FUNC_IMPL(__imp__sub_83433D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433D68"))) PPC_WEAK_FUNC(sub_83433D68);
PPC_FUNC_IMPL(__imp__sub_83433D68) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,6620
	ctx.r11.s64 = ctx.r11.s64 + 6620;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824db2f8
	ctx.lr = 0x83433D98;
	sub_824DB2F8(ctx, base);
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-5776
	ctx.r3.s64 = ctx.r11.s64 + -5776;
	// bl 0x833a1ff8
	ctx.lr = 0x83433DA4;
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

__attribute__((alias("__imp__sub_83433DB4"))) PPC_WEAK_FUNC(sub_83433DB4);
PPC_FUNC_IMPL(__imp__sub_83433DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433DB8"))) PPC_WEAK_FUNC(sub_83433DB8);
PPC_FUNC_IMPL(__imp__sub_83433DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// addi r3,r10,6828
	ctx.r3.s64 = ctx.r10.s64 + 6828;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433DCC"))) PPC_WEAK_FUNC(sub_83433DCC);
PPC_FUNC_IMPL(__imp__sub_83433DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433DD0"))) PPC_WEAK_FUNC(sub_83433DD0);
PPC_FUNC_IMPL(__imp__sub_83433DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// addi r3,r10,6832
	ctx.r3.s64 = ctx.r10.s64 + 6832;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433DE4"))) PPC_WEAK_FUNC(sub_83433DE4);
PPC_FUNC_IMPL(__imp__sub_83433DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433DE8"))) PPC_WEAK_FUNC(sub_83433DE8);
PPC_FUNC_IMPL(__imp__sub_83433DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18660
	ctx.r4.s64 = ctx.r11.s64 + 18660;
	// addi r3,r10,6836
	ctx.r3.s64 = ctx.r10.s64 + 6836;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433DFC"))) PPC_WEAK_FUNC(sub_83433DFC);
PPC_FUNC_IMPL(__imp__sub_83433DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433E00"))) PPC_WEAK_FUNC(sub_83433E00);
PPC_FUNC_IMPL(__imp__sub_83433E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18640
	ctx.r4.s64 = ctx.r11.s64 + 18640;
	// addi r3,r10,6840
	ctx.r3.s64 = ctx.r10.s64 + 6840;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433E14"))) PPC_WEAK_FUNC(sub_83433E14);
PPC_FUNC_IMPL(__imp__sub_83433E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433E18"))) PPC_WEAK_FUNC(sub_83433E18);
PPC_FUNC_IMPL(__imp__sub_83433E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// addi r3,r10,6844
	ctx.r3.s64 = ctx.r10.s64 + 6844;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433E2C"))) PPC_WEAK_FUNC(sub_83433E2C);
PPC_FUNC_IMPL(__imp__sub_83433E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433E30"))) PPC_WEAK_FUNC(sub_83433E30);
PPC_FUNC_IMPL(__imp__sub_83433E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18616
	ctx.r4.s64 = ctx.r11.s64 + 18616;
	// addi r3,r10,6848
	ctx.r3.s64 = ctx.r10.s64 + 6848;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433E44"))) PPC_WEAK_FUNC(sub_83433E44);
PPC_FUNC_IMPL(__imp__sub_83433E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433E48"))) PPC_WEAK_FUNC(sub_83433E48);
PPC_FUNC_IMPL(__imp__sub_83433E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,29916
	ctx.r4.s64 = ctx.r11.s64 + 29916;
	// addi r3,r10,6852
	ctx.r3.s64 = ctx.r10.s64 + 6852;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433E5C"))) PPC_WEAK_FUNC(sub_83433E5C);
PPC_FUNC_IMPL(__imp__sub_83433E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433E60"))) PPC_WEAK_FUNC(sub_83433E60);
PPC_FUNC_IMPL(__imp__sub_83433E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,21160
	ctx.r4.s64 = ctx.r11.s64 + 21160;
	// addi r3,r10,6856
	ctx.r3.s64 = ctx.r10.s64 + 6856;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433E74"))) PPC_WEAK_FUNC(sub_83433E74);
PPC_FUNC_IMPL(__imp__sub_83433E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433E78"))) PPC_WEAK_FUNC(sub_83433E78);
PPC_FUNC_IMPL(__imp__sub_83433E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// addi r3,r10,6880
	ctx.r3.s64 = ctx.r10.s64 + 6880;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433E8C"))) PPC_WEAK_FUNC(sub_83433E8C);
PPC_FUNC_IMPL(__imp__sub_83433E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433E90"))) PPC_WEAK_FUNC(sub_83433E90);
PPC_FUNC_IMPL(__imp__sub_83433E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,29916
	ctx.r4.s64 = ctx.r11.s64 + 29916;
	// addi r3,r10,6884
	ctx.r3.s64 = ctx.r10.s64 + 6884;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433EA4"))) PPC_WEAK_FUNC(sub_83433EA4);
PPC_FUNC_IMPL(__imp__sub_83433EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433EA8"))) PPC_WEAK_FUNC(sub_83433EA8);
PPC_FUNC_IMPL(__imp__sub_83433EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// addi r3,r10,6900
	ctx.r3.s64 = ctx.r10.s64 + 6900;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433EBC"))) PPC_WEAK_FUNC(sub_83433EBC);
PPC_FUNC_IMPL(__imp__sub_83433EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433EC0"))) PPC_WEAK_FUNC(sub_83433EC0);
PPC_FUNC_IMPL(__imp__sub_83433EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// addi r3,r10,6904
	ctx.r3.s64 = ctx.r10.s64 + 6904;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433ED4"))) PPC_WEAK_FUNC(sub_83433ED4);
PPC_FUNC_IMPL(__imp__sub_83433ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433ED8"))) PPC_WEAK_FUNC(sub_83433ED8);
PPC_FUNC_IMPL(__imp__sub_83433ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18660
	ctx.r4.s64 = ctx.r11.s64 + 18660;
	// addi r3,r10,6908
	ctx.r3.s64 = ctx.r10.s64 + 6908;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433EEC"))) PPC_WEAK_FUNC(sub_83433EEC);
PPC_FUNC_IMPL(__imp__sub_83433EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433EF0"))) PPC_WEAK_FUNC(sub_83433EF0);
PPC_FUNC_IMPL(__imp__sub_83433EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,24924
	ctx.r4.s64 = ctx.r11.s64 + 24924;
	// addi r3,r10,6912
	ctx.r3.s64 = ctx.r10.s64 + 6912;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433F04"))) PPC_WEAK_FUNC(sub_83433F04);
PPC_FUNC_IMPL(__imp__sub_83433F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433F08"))) PPC_WEAK_FUNC(sub_83433F08);
PPC_FUNC_IMPL(__imp__sub_83433F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,24936
	ctx.r4.s64 = ctx.r11.s64 + 24936;
	// addi r3,r10,6916
	ctx.r3.s64 = ctx.r10.s64 + 6916;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433F1C"))) PPC_WEAK_FUNC(sub_83433F1C);
PPC_FUNC_IMPL(__imp__sub_83433F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433F20"))) PPC_WEAK_FUNC(sub_83433F20);
PPC_FUNC_IMPL(__imp__sub_83433F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,24952
	ctx.r4.s64 = ctx.r11.s64 + 24952;
	// addi r3,r10,6920
	ctx.r3.s64 = ctx.r10.s64 + 6920;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433F34"))) PPC_WEAK_FUNC(sub_83433F34);
PPC_FUNC_IMPL(__imp__sub_83433F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433F38"))) PPC_WEAK_FUNC(sub_83433F38);
PPC_FUNC_IMPL(__imp__sub_83433F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// addi r3,r10,6924
	ctx.r3.s64 = ctx.r10.s64 + 6924;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433F4C"))) PPC_WEAK_FUNC(sub_83433F4C);
PPC_FUNC_IMPL(__imp__sub_83433F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433F50"))) PPC_WEAK_FUNC(sub_83433F50);
PPC_FUNC_IMPL(__imp__sub_83433F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,-2600
	ctx.r4.s64 = ctx.r11.s64 + -2600;
	// addi r3,r10,6928
	ctx.r3.s64 = ctx.r10.s64 + 6928;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433F64"))) PPC_WEAK_FUNC(sub_83433F64);
PPC_FUNC_IMPL(__imp__sub_83433F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433F68"))) PPC_WEAK_FUNC(sub_83433F68);
PPC_FUNC_IMPL(__imp__sub_83433F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28404
	ctx.r4.s64 = ctx.r11.s64 + 28404;
	// addi r3,r10,6932
	ctx.r3.s64 = ctx.r10.s64 + 6932;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433F7C"))) PPC_WEAK_FUNC(sub_83433F7C);
PPC_FUNC_IMPL(__imp__sub_83433F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433F80"))) PPC_WEAK_FUNC(sub_83433F80);
PPC_FUNC_IMPL(__imp__sub_83433F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31708
	ctx.r4.s64 = ctx.r11.s64 + 31708;
	// addi r3,r10,6936
	ctx.r3.s64 = ctx.r10.s64 + 6936;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433F94"))) PPC_WEAK_FUNC(sub_83433F94);
PPC_FUNC_IMPL(__imp__sub_83433F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433F98"))) PPC_WEAK_FUNC(sub_83433F98);
PPC_FUNC_IMPL(__imp__sub_83433F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,1508
	ctx.r4.s64 = ctx.r11.s64 + 1508;
	// addi r3,r10,6940
	ctx.r3.s64 = ctx.r10.s64 + 6940;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433FAC"))) PPC_WEAK_FUNC(sub_83433FAC);
PPC_FUNC_IMPL(__imp__sub_83433FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433FB0"))) PPC_WEAK_FUNC(sub_83433FB0);
PPC_FUNC_IMPL(__imp__sub_83433FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31696
	ctx.r4.s64 = ctx.r11.s64 + 31696;
	// addi r3,r10,6944
	ctx.r3.s64 = ctx.r10.s64 + 6944;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433FC4"))) PPC_WEAK_FUNC(sub_83433FC4);
PPC_FUNC_IMPL(__imp__sub_83433FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433FC8"))) PPC_WEAK_FUNC(sub_83433FC8);
PPC_FUNC_IMPL(__imp__sub_83433FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31676
	ctx.r4.s64 = ctx.r11.s64 + 31676;
	// addi r3,r10,6948
	ctx.r3.s64 = ctx.r10.s64 + 6948;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433FDC"))) PPC_WEAK_FUNC(sub_83433FDC);
PPC_FUNC_IMPL(__imp__sub_83433FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433FE0"))) PPC_WEAK_FUNC(sub_83433FE0);
PPC_FUNC_IMPL(__imp__sub_83433FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31636
	ctx.r4.s64 = ctx.r11.s64 + 31636;
	// addi r3,r10,6952
	ctx.r3.s64 = ctx.r10.s64 + 6952;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83433FF4"))) PPC_WEAK_FUNC(sub_83433FF4);
PPC_FUNC_IMPL(__imp__sub_83433FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83433FF8"))) PPC_WEAK_FUNC(sub_83433FF8);
PPC_FUNC_IMPL(__imp__sub_83433FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-5712
	ctx.r3.s64 = ctx.r11.s64 + -5712;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434004"))) PPC_WEAK_FUNC(sub_83434004);
PPC_FUNC_IMPL(__imp__sub_83434004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434008"))) PPC_WEAK_FUNC(sub_83434008);
PPC_FUNC_IMPL(__imp__sub_83434008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28404
	ctx.r4.s64 = ctx.r11.s64 + 28404;
	// addi r3,r10,6996
	ctx.r3.s64 = ctx.r10.s64 + 6996;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343401C"))) PPC_WEAK_FUNC(sub_8343401C);
PPC_FUNC_IMPL(__imp__sub_8343401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434020"))) PPC_WEAK_FUNC(sub_83434020);
PPC_FUNC_IMPL(__imp__sub_83434020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31708
	ctx.r4.s64 = ctx.r11.s64 + 31708;
	// addi r3,r10,7000
	ctx.r3.s64 = ctx.r10.s64 + 7000;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434034"))) PPC_WEAK_FUNC(sub_83434034);
PPC_FUNC_IMPL(__imp__sub_83434034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434038"))) PPC_WEAK_FUNC(sub_83434038);
PPC_FUNC_IMPL(__imp__sub_83434038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,1508
	ctx.r4.s64 = ctx.r11.s64 + 1508;
	// addi r3,r10,7004
	ctx.r3.s64 = ctx.r10.s64 + 7004;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343404C"))) PPC_WEAK_FUNC(sub_8343404C);
PPC_FUNC_IMPL(__imp__sub_8343404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434050"))) PPC_WEAK_FUNC(sub_83434050);
PPC_FUNC_IMPL(__imp__sub_83434050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31696
	ctx.r4.s64 = ctx.r11.s64 + 31696;
	// addi r3,r10,7008
	ctx.r3.s64 = ctx.r10.s64 + 7008;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434064"))) PPC_WEAK_FUNC(sub_83434064);
PPC_FUNC_IMPL(__imp__sub_83434064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434068"))) PPC_WEAK_FUNC(sub_83434068);
PPC_FUNC_IMPL(__imp__sub_83434068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31676
	ctx.r4.s64 = ctx.r11.s64 + 31676;
	// addi r3,r10,7012
	ctx.r3.s64 = ctx.r10.s64 + 7012;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343407C"))) PPC_WEAK_FUNC(sub_8343407C);
PPC_FUNC_IMPL(__imp__sub_8343407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434080"))) PPC_WEAK_FUNC(sub_83434080);
PPC_FUNC_IMPL(__imp__sub_83434080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31636
	ctx.r4.s64 = ctx.r11.s64 + 31636;
	// addi r3,r10,7016
	ctx.r3.s64 = ctx.r10.s64 + 7016;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434094"))) PPC_WEAK_FUNC(sub_83434094);
PPC_FUNC_IMPL(__imp__sub_83434094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434098"))) PPC_WEAK_FUNC(sub_83434098);
PPC_FUNC_IMPL(__imp__sub_83434098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// addi r3,r10,7372
	ctx.r3.s64 = ctx.r10.s64 + 7372;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834340AC"))) PPC_WEAK_FUNC(sub_834340AC);
PPC_FUNC_IMPL(__imp__sub_834340AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834340B0"))) PPC_WEAK_FUNC(sub_834340B0);
PPC_FUNC_IMPL(__imp__sub_834340B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// addi r3,r10,7376
	ctx.r3.s64 = ctx.r10.s64 + 7376;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834340C4"))) PPC_WEAK_FUNC(sub_834340C4);
PPC_FUNC_IMPL(__imp__sub_834340C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834340C8"))) PPC_WEAK_FUNC(sub_834340C8);
PPC_FUNC_IMPL(__imp__sub_834340C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18660
	ctx.r4.s64 = ctx.r11.s64 + 18660;
	// addi r3,r10,7380
	ctx.r3.s64 = ctx.r10.s64 + 7380;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834340DC"))) PPC_WEAK_FUNC(sub_834340DC);
PPC_FUNC_IMPL(__imp__sub_834340DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834340E0"))) PPC_WEAK_FUNC(sub_834340E0);
PPC_FUNC_IMPL(__imp__sub_834340E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18640
	ctx.r4.s64 = ctx.r11.s64 + 18640;
	// addi r3,r10,7384
	ctx.r3.s64 = ctx.r10.s64 + 7384;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834340F4"))) PPC_WEAK_FUNC(sub_834340F4);
PPC_FUNC_IMPL(__imp__sub_834340F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834340F8"))) PPC_WEAK_FUNC(sub_834340F8);
PPC_FUNC_IMPL(__imp__sub_834340F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// addi r3,r10,7388
	ctx.r3.s64 = ctx.r10.s64 + 7388;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343410C"))) PPC_WEAK_FUNC(sub_8343410C);
PPC_FUNC_IMPL(__imp__sub_8343410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434110"))) PPC_WEAK_FUNC(sub_83434110);
PPC_FUNC_IMPL(__imp__sub_83434110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18616
	ctx.r4.s64 = ctx.r11.s64 + 18616;
	// addi r3,r10,7392
	ctx.r3.s64 = ctx.r10.s64 + 7392;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434124"))) PPC_WEAK_FUNC(sub_83434124);
PPC_FUNC_IMPL(__imp__sub_83434124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434128"))) PPC_WEAK_FUNC(sub_83434128);
PPC_FUNC_IMPL(__imp__sub_83434128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,29916
	ctx.r4.s64 = ctx.r11.s64 + 29916;
	// addi r3,r10,7396
	ctx.r3.s64 = ctx.r10.s64 + 7396;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343413C"))) PPC_WEAK_FUNC(sub_8343413C);
PPC_FUNC_IMPL(__imp__sub_8343413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434140"))) PPC_WEAK_FUNC(sub_83434140);
PPC_FUNC_IMPL(__imp__sub_83434140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// addi r3,r10,7400
	ctx.r3.s64 = ctx.r10.s64 + 7400;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434154"))) PPC_WEAK_FUNC(sub_83434154);
PPC_FUNC_IMPL(__imp__sub_83434154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434158"))) PPC_WEAK_FUNC(sub_83434158);
PPC_FUNC_IMPL(__imp__sub_83434158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// addi r3,r10,7404
	ctx.r3.s64 = ctx.r10.s64 + 7404;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343416C"))) PPC_WEAK_FUNC(sub_8343416C);
PPC_FUNC_IMPL(__imp__sub_8343416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434170"))) PPC_WEAK_FUNC(sub_83434170);
PPC_FUNC_IMPL(__imp__sub_83434170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,18660
	ctx.r4.s64 = ctx.r11.s64 + 18660;
	// addi r3,r10,7408
	ctx.r3.s64 = ctx.r10.s64 + 7408;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434184"))) PPC_WEAK_FUNC(sub_83434184);
PPC_FUNC_IMPL(__imp__sub_83434184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434188"))) PPC_WEAK_FUNC(sub_83434188);
PPC_FUNC_IMPL(__imp__sub_83434188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,29916
	ctx.r4.s64 = ctx.r11.s64 + 29916;
	// addi r3,r10,7412
	ctx.r3.s64 = ctx.r10.s64 + 7412;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343419C"))) PPC_WEAK_FUNC(sub_8343419C);
PPC_FUNC_IMPL(__imp__sub_8343419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834341A0"))) PPC_WEAK_FUNC(sub_834341A0);
PPC_FUNC_IMPL(__imp__sub_834341A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31895
	ctx.r11.s64 = -2090270720;
	// addi r3,r11,-5616
	ctx.r3.s64 = ctx.r11.s64 + -5616;
	// b 0x833a1ff8
	sub_833A1FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834341AC"))) PPC_WEAK_FUNC(sub_834341AC);
PPC_FUNC_IMPL(__imp__sub_834341AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834341B0"))) PPC_WEAK_FUNC(sub_834341B0);
PPC_FUNC_IMPL(__imp__sub_834341B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,29916
	ctx.r4.s64 = ctx.r11.s64 + 29916;
	// addi r3,r10,7452
	ctx.r3.s64 = ctx.r10.s64 + 7452;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834341C4"))) PPC_WEAK_FUNC(sub_834341C4);
PPC_FUNC_IMPL(__imp__sub_834341C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834341C8"))) PPC_WEAK_FUNC(sub_834341C8);
PPC_FUNC_IMPL(__imp__sub_834341C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,21160
	ctx.r4.s64 = ctx.r11.s64 + 21160;
	// addi r3,r10,7456
	ctx.r3.s64 = ctx.r10.s64 + 7456;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834341DC"))) PPC_WEAK_FUNC(sub_834341DC);
PPC_FUNC_IMPL(__imp__sub_834341DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834341E0"))) PPC_WEAK_FUNC(sub_834341E0);
PPC_FUNC_IMPL(__imp__sub_834341E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28404
	ctx.r4.s64 = ctx.r11.s64 + 28404;
	// addi r3,r10,7460
	ctx.r3.s64 = ctx.r10.s64 + 7460;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834341F4"))) PPC_WEAK_FUNC(sub_834341F4);
PPC_FUNC_IMPL(__imp__sub_834341F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834341F8"))) PPC_WEAK_FUNC(sub_834341F8);
PPC_FUNC_IMPL(__imp__sub_834341F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31708
	ctx.r4.s64 = ctx.r11.s64 + 31708;
	// addi r3,r10,7464
	ctx.r3.s64 = ctx.r10.s64 + 7464;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343420C"))) PPC_WEAK_FUNC(sub_8343420C);
PPC_FUNC_IMPL(__imp__sub_8343420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434210"))) PPC_WEAK_FUNC(sub_83434210);
PPC_FUNC_IMPL(__imp__sub_83434210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,1508
	ctx.r4.s64 = ctx.r11.s64 + 1508;
	// addi r3,r10,7468
	ctx.r3.s64 = ctx.r10.s64 + 7468;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434224"))) PPC_WEAK_FUNC(sub_83434224);
PPC_FUNC_IMPL(__imp__sub_83434224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434228"))) PPC_WEAK_FUNC(sub_83434228);
PPC_FUNC_IMPL(__imp__sub_83434228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31696
	ctx.r4.s64 = ctx.r11.s64 + 31696;
	// addi r3,r10,7472
	ctx.r3.s64 = ctx.r10.s64 + 7472;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343423C"))) PPC_WEAK_FUNC(sub_8343423C);
PPC_FUNC_IMPL(__imp__sub_8343423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434240"))) PPC_WEAK_FUNC(sub_83434240);
PPC_FUNC_IMPL(__imp__sub_83434240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31676
	ctx.r4.s64 = ctx.r11.s64 + 31676;
	// addi r3,r10,7476
	ctx.r3.s64 = ctx.r10.s64 + 7476;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434254"))) PPC_WEAK_FUNC(sub_83434254);
PPC_FUNC_IMPL(__imp__sub_83434254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434258"))) PPC_WEAK_FUNC(sub_83434258);
PPC_FUNC_IMPL(__imp__sub_83434258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,31636
	ctx.r4.s64 = ctx.r11.s64 + 31636;
	// addi r3,r10,7480
	ctx.r3.s64 = ctx.r10.s64 + 7480;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343426C"))) PPC_WEAK_FUNC(sub_8343426C);
PPC_FUNC_IMPL(__imp__sub_8343426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434270"))) PPC_WEAK_FUNC(sub_83434270);
PPC_FUNC_IMPL(__imp__sub_83434270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28552
	ctx.r4.s64 = ctx.r11.s64 + 28552;
	// addi r3,r10,7596
	ctx.r3.s64 = ctx.r10.s64 + 7596;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434284"))) PPC_WEAK_FUNC(sub_83434284);
PPC_FUNC_IMPL(__imp__sub_83434284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434288"))) PPC_WEAK_FUNC(sub_83434288);
PPC_FUNC_IMPL(__imp__sub_83434288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28564
	ctx.r4.s64 = ctx.r11.s64 + 28564;
	// addi r3,r10,7600
	ctx.r3.s64 = ctx.r10.s64 + 7600;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343429C"))) PPC_WEAK_FUNC(sub_8343429C);
PPC_FUNC_IMPL(__imp__sub_8343429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834342A0"))) PPC_WEAK_FUNC(sub_834342A0);
PPC_FUNC_IMPL(__imp__sub_834342A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// addi r3,r10,7604
	ctx.r3.s64 = ctx.r10.s64 + 7604;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834342B4"))) PPC_WEAK_FUNC(sub_834342B4);
PPC_FUNC_IMPL(__imp__sub_834342B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834342B8"))) PPC_WEAK_FUNC(sub_834342B8);
PPC_FUNC_IMPL(__imp__sub_834342B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28588
	ctx.r4.s64 = ctx.r11.s64 + 28588;
	// addi r3,r10,7608
	ctx.r3.s64 = ctx.r10.s64 + 7608;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834342CC"))) PPC_WEAK_FUNC(sub_834342CC);
PPC_FUNC_IMPL(__imp__sub_834342CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834342D0"))) PPC_WEAK_FUNC(sub_834342D0);
PPC_FUNC_IMPL(__imp__sub_834342D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28600
	ctx.r4.s64 = ctx.r11.s64 + 28600;
	// addi r3,r10,7612
	ctx.r3.s64 = ctx.r10.s64 + 7612;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834342E4"))) PPC_WEAK_FUNC(sub_834342E4);
PPC_FUNC_IMPL(__imp__sub_834342E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834342E8"))) PPC_WEAK_FUNC(sub_834342E8);
PPC_FUNC_IMPL(__imp__sub_834342E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28612
	ctx.r4.s64 = ctx.r11.s64 + 28612;
	// addi r3,r10,7616
	ctx.r3.s64 = ctx.r10.s64 + 7616;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834342FC"))) PPC_WEAK_FUNC(sub_834342FC);
PPC_FUNC_IMPL(__imp__sub_834342FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434300"))) PPC_WEAK_FUNC(sub_83434300);
PPC_FUNC_IMPL(__imp__sub_83434300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28624
	ctx.r4.s64 = ctx.r11.s64 + 28624;
	// addi r3,r10,7620
	ctx.r3.s64 = ctx.r10.s64 + 7620;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434314"))) PPC_WEAK_FUNC(sub_83434314);
PPC_FUNC_IMPL(__imp__sub_83434314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434318"))) PPC_WEAK_FUNC(sub_83434318);
PPC_FUNC_IMPL(__imp__sub_83434318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28636
	ctx.r4.s64 = ctx.r11.s64 + 28636;
	// addi r3,r10,7624
	ctx.r3.s64 = ctx.r10.s64 + 7624;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343432C"))) PPC_WEAK_FUNC(sub_8343432C);
PPC_FUNC_IMPL(__imp__sub_8343432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434330"))) PPC_WEAK_FUNC(sub_83434330);
PPC_FUNC_IMPL(__imp__sub_83434330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28648
	ctx.r4.s64 = ctx.r11.s64 + 28648;
	// addi r3,r10,7628
	ctx.r3.s64 = ctx.r10.s64 + 7628;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434344"))) PPC_WEAK_FUNC(sub_83434344);
PPC_FUNC_IMPL(__imp__sub_83434344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434348"))) PPC_WEAK_FUNC(sub_83434348);
PPC_FUNC_IMPL(__imp__sub_83434348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28660
	ctx.r4.s64 = ctx.r11.s64 + 28660;
	// addi r3,r10,7632
	ctx.r3.s64 = ctx.r10.s64 + 7632;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343435C"))) PPC_WEAK_FUNC(sub_8343435C);
PPC_FUNC_IMPL(__imp__sub_8343435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434360"))) PPC_WEAK_FUNC(sub_83434360);
PPC_FUNC_IMPL(__imp__sub_83434360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28672
	ctx.r4.s64 = ctx.r11.s64 + 28672;
	// addi r3,r10,7636
	ctx.r3.s64 = ctx.r10.s64 + 7636;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83434374"))) PPC_WEAK_FUNC(sub_83434374);
PPC_FUNC_IMPL(__imp__sub_83434374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434378"))) PPC_WEAK_FUNC(sub_83434378);
PPC_FUNC_IMPL(__imp__sub_83434378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28684
	ctx.r4.s64 = ctx.r11.s64 + 28684;
	// addi r3,r10,7640
	ctx.r3.s64 = ctx.r10.s64 + 7640;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8343438C"))) PPC_WEAK_FUNC(sub_8343438C);
PPC_FUNC_IMPL(__imp__sub_8343438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83434390"))) PPC_WEAK_FUNC(sub_83434390);
PPC_FUNC_IMPL(__imp__sub_83434390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28696
	ctx.r4.s64 = ctx.r11.s64 + 28696;
	// addi r3,r10,7644
	ctx.r3.s64 = ctx.r10.s64 + 7644;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834343A4"))) PPC_WEAK_FUNC(sub_834343A4);
PPC_FUNC_IMPL(__imp__sub_834343A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834343A8"))) PPC_WEAK_FUNC(sub_834343A8);
PPC_FUNC_IMPL(__imp__sub_834343A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31842
	ctx.r10.s64 = -2086797312;
	// addi r4,r11,28708
	ctx.r4.s64 = ctx.r11.s64 + 28708;
	// addi r3,r10,7648
	ctx.r3.s64 = ctx.r10.s64 + 7648;
	// b 0x82e038b0
	sub_82E038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834343BC"))) PPC_WEAK_FUNC(sub_834343BC);
PPC_FUNC_IMPL(__imp__sub_834343BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

