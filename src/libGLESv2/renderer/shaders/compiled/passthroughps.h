#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
//   fxc /Gec /nologo /E passthroughps /T ps_4_0_level_9_1 /Fh
//    compiled/passthroughps.h /Vn g_ps20_passthroughps /Qstrip_reflect
//    /Qstrip_debug Blit.ps
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// TEXCOORD                 0   xyzw        0     NONE  float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Target                0   xyzw        0   TARGET  float   xyzw
//
//
// Sampler/Resource to DX9 shader sampler mappings:
//
// Target Sampler Source Sampler  Source Resource
// -------------- --------------- ----------------
// s0             s0              t0               
//
//
// Level9 shader bytecode:
//
    ps_2_0
    dcl t0
    dcl_2d s0
    texld r0, t0, s0
    mov oC0, r0

// approximately 2 instruction slots used (1 texture, 1 arithmetic)
ps_4_0
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v0.xy
dcl_output o0.xyzw
sample o0.xyzw, v0.xyxx, t0.xyzw, s0
ret 
// Approximately 0 instruction slots used
#endif

const BYTE g_ps20_passthroughps[] =
{
     68,  88,  66,  67, 235, 113, 
    126,  12, 233, 162, 162,  12, 
    115,  74,  27, 112, 254,   9, 
     65, 132,   1,   0,   0,   0, 
    112,   1,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    156,   0,   0,   0,   8,   1, 
      0,   0,  60,   1,   0,   0, 
     65, 111, 110,  57, 100,   0, 
      0,   0, 100,   0,   0,   0, 
      0,   2, 255, 255,  60,   0, 
      0,   0,  40,   0,   0,   0, 
      0,   0,  40,   0,   0,   0, 
     40,   0,   0,   0,  40,   0, 
      1,   0,  36,   0,   0,   0, 
     40,   0,   0,   0,   0,   0, 
      0,   2, 255, 255,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 176,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      0,   8,  15, 160,  66,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 228, 176,   0,   8, 
    228, 160,   1,   0,   0,   2, 
      0,   8,  15, 128,   0,   0, 
    228, 128, 255, 255,   0,   0, 
     83,  72,  68,  82, 100,   0, 
      0,   0,  64,   0,   0,   0, 
     25,   0,   0,   0,  90,   0, 
      0,   3,   0,  96,  16,   0, 
      0,   0,   0,   0,  88,  24, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0,  98,  16,   0,   3, 
     50,  16,  16,   0,   0,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0,  69,   0,   0,   9, 
    242,  32,  16,   0,   0,   0, 
      0,   0,  70,  16,  16,   0, 
      0,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     73,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   3,   0,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0, 171, 171, 171,  79,  83, 
     71,  78,  44,   0,   0,   0, 
      1,   0,   0,   0,   8,   0, 
      0,   0,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  83,  86,  95,  84, 
     97, 114, 103, 101, 116,   0, 
    171, 171
};
