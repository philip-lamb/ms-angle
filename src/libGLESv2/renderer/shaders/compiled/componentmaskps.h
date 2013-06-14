#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
//   fxc /Gec /nologo /E componentmaskps /T ps_4_0_level_9_1 /Fh
//    compiled/componentmaskps.h /Vn g_ps20_componentmaskps /Qstrip_reflect
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
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c0         cb0             0         1  ( FLT, FLT, FLT, FLT)
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
    mul r1.xyz, r0, c0.x
    mad r1.w, r0.w, c0.z, c0.w
    mov oC0, r1

// approximately 4 instruction slots used (1 texture, 3 arithmetic)
ps_4_0
dcl_constantbuffer cb0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v0.xy
dcl_output o0.xyzw
dcl_temps 1
sample r0.xyzw, v0.xyxx, t0.xyzw, s0
mul o0.xyz, r0.xyzx, cb0[0].xxxx
mad o0.w, r0.w, cb0[0].z, cb0[0].w
ret 
// Approximately 0 instruction slots used
#endif

const BYTE g_ps20_componentmaskps[] =
{
     68,  88,  66,  67,  21, 112, 
    122, 127,  24, 146,  15, 191, 
    142,  37,  10,   3, 146,  61, 
    192, 159,   1,   0,   0,   0, 
      4,   2,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    204,   0,   0,   0, 156,   1, 
      0,   0, 208,   1,   0,   0, 
     65, 111, 110,  57, 148,   0, 
      0,   0, 148,   0,   0,   0, 
      0,   2, 255, 255,  96,   0, 
      0,   0,  52,   0,   0,   0, 
      1,   0,  40,   0,   0,   0, 
     52,   0,   0,   0,  52,   0, 
      1,   0,  36,   0,   0,   0, 
     52,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   2, 255, 255,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 176,  31,   0, 
      0,   2,   0,   0,   0, 144, 
      0,   8,  15, 160,  66,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 228, 176,   0,   8, 
    228, 160,   5,   0,   0,   3, 
      1,   0,   7, 128,   0,   0, 
    228, 128,   0,   0,   0, 160, 
      4,   0,   0,   4,   1,   0, 
      8, 128,   0,   0, 255, 128, 
      0,   0, 170, 160,   0,   0, 
    255, 160,   1,   0,   0,   2, 
      0,   8,  15, 128,   1,   0, 
    228, 128, 255, 255,   0,   0, 
     83,  72,  68,  82, 200,   0, 
      0,   0,  64,   0,   0,   0, 
     50,   0,   0,   0,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   0,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    104,   0,   0,   2,   1,   0, 
      0,   0,  69,   0,   0,   9, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  16,  16,   0, 
      0,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,  32,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,   6, 128, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  11, 130,  32,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     58, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  73,  83, 
     71,  78,  44,   0,   0,   0, 
      1,   0,   0,   0,   8,   0, 
      0,   0,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   3, 
      0,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171
};
