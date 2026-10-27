// NativeXRenderer for Sonic Generations: the D3D entry points of this executable, one line each.
//
// Included from sonic_generations_nxr.cpp after <native_x_renderer/hooks.h>, compiled into the
// executable. A line is:
//
//   NATIVE_X_RENDERER_HOOK(<address without 0x>, <call from native_x_renderer/calls.inc>)
//
// The calls a game can report are listed in native_x_renderer/include/native_x_renderer/calls.inc;
// hook the ones this executable has, with the evidence in docs/native-x-renderer-sonic-generations.md.
// A game that commits inline draws itself hooks BeginVertices/BeginIndexedVertices and EndVertices too.
//
// This file is empty on purpose: an address that is guessed here would make the renderer read the
// wrong device and draw garbage, and a wrong hook is harder to notice than a missing one. The scan in
// docs/native-x-renderer-sonic-generations.md names the candidates; the trace and the observer
// (native_x_renderer/docs/integrating-a-game.md, step 3) confirm them before they are written here.
//
// Example of the shape the lines take, from the game that was mapped first (NativeXRenderer's own
// documentation, POTCAWE); the addresses are POTCAWE's and are not Sonic Generations':
//
//   NATIVE_X_RENDERER_HOOK(824AC3C0, DrawIndexedVertices)
//   NATIVE_X_RENDERER_HOOK(822B58B0, Swap)
//   NATIVE_X_RENDERER_HOOK(822B5D58, Present)
//
// Sonic Generations candidates, from tools/nxr/scan.py (packets built, not yet confirmed):
//
//   draws          sub_82DC85F0 (561 insns, flushes constants, DRAW_INDX_2 @0x82DC8C5C)
//                  sub_82DBE9A0 (fetch constant 0, DRAW_INDX_2), sub_82DB1048 (DRAW_INDX),
//                  sub_82DAF7E0 / sub_82DAF938 / sub_82DB2458 / sub_82DBA1A8 (DRAW_INDX_2)
//   small draws    sub_82DA6F60 / sub_82DA7468 / sub_82DA7A48 / sub_82DA7E60: 2 or 4 vertices, one
//                  fetch constant, SET_BIN_MASK_LO and EVENT_WRITE — the shape of a resolve or a copy
//   tiling         sub_82DAAE90, sub_82DAC270, sub_82DB5400 (SET_BIN_MASK_LO/HI + select)
//   queries        sub_82DF3E18 (VIZ_QUERY)
//   context/swap   sub_82F069A8 (DRAW_INDX_BIN + EVENT_WRITE_SHD + WAIT_REG_MEM), sub_83344890
//                  (CONTEXT_UPDATE)
