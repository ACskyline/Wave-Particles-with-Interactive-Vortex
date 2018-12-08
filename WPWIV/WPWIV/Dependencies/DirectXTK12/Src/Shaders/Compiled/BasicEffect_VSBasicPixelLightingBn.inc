#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0     NONE   float   xyzw
// NORMAL                   0   xyz         1     NONE   float   xyz 
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// TEXCOORD                 0   xyzw        0     NONE   float   xyzw
// TEXCOORD                 1   xyz         1     NONE   float   xyz 
// COLOR                    0   xyzw        2     NONE   float   xyzw
// SV_Position              0   xyzw        3      POS   float   xyzw
//
vs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[26], immediateIndexed
dcl_input v0.xyzw
dcl_input v1.xyz
dcl_output o0.xyzw
dcl_output o1.xyz
dcl_output o2.xyzw
dcl_output_siv o3.xyzw, position
dcl_temps 2
dp4 o0.x, v0.xyzw, cb0[15].xyzw
dp4 o0.y, v0.xyzw, cb0[16].xyzw
dp4 o0.z, v0.xyzw, cb0[17].xyzw
dp4_sat o0.w, v0.xyzw, cb0[14].xyzw
mad r0.xyz, v1.xyzx, l(2.000000, 2.000000, 2.000000, 0.000000), l(-1.000000, -1.000000, -1.000000, 0.000000)
dp3 r1.x, r0.xyzx, cb0[19].xyzx
dp3 r1.y, r0.xyzx, cb0[20].xyzx
dp3 r1.z, r0.xyzx, cb0[21].xyzx
dp3 r0.x, r1.xyzx, r1.xyzx
rsq r0.x, r0.x
mul o1.xyz, r0.xxxx, r1.xyzx
mov o2.xyz, l(1.000000,1.000000,1.000000,0)
mov o2.w, cb0[0].w
dp4 o3.x, v0.xyzw, cb0[22].xyzw
dp4 o3.y, v0.xyzw, cb0[23].xyzw
dp4 o3.z, v0.xyzw, cb0[24].xyzw
dp4 o3.w, v0.xyzw, cb0[25].xyzw
ret 
// Approximately 0 instruction slots used
#endif

const BYTE BasicEffect_VSBasicPixelLightingBn[] =
{
     68,  88,  66,  67,  93, 207, 
    195,  85, 100, 238,  18,  30, 
     14,  60,   4, 221, 113, 160, 
    196, 154,   1,   0,   0,   0, 
    224,   3,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    132,   0,   0,   0,  16,   1, 
      0,   0, 172,   3,   0,   0, 
     73,  83,  71,  78,  76,   0, 
      0,   0,   2,   0,   0,   0, 
      8,   0,   0,   0,  56,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,  15,   0,   0,  68,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      7,   7,   0,   0,  83,  86, 
     95,  80, 111, 115, 105, 116, 
    105, 111, 110,   0,  78,  79, 
     82,  77,  65,  76,   0, 171, 
     79,  83,  71,  78, 132,   0, 
      0,   0,   4,   0,   0,   0, 
      8,   0,   0,   0, 104,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0, 104,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      7,   8,   0,   0, 113,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
     15,   0,   0,   0, 119,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
     15,   0,   0,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0,  67,  79,  76,  79,  82, 
      0,  83,  86,  95,  80, 111, 
    115, 105, 116, 105, 111, 110, 
      0, 171,  83,  72,  69,  88, 
    148,   2,   0,   0,  80,   0, 
      1,   0, 165,   0,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,  26,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   0,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 101,   0,   0,   3, 
    114,  32,  16,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   2,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
    104,   0,   0,   2,   2,   0, 
      0,   0,  17,   0,   0,   8, 
     18,  32,  16,   0,   0,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  17,   0, 
      0,   8,  34,  32,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  16,   0,   0,   0, 
     17,   0,   0,   8,  66,  32, 
     16,   0,   0,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  17,   0, 
      0,   0,  17,  32,   0,   8, 
    130,  32,  16,   0,   0,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     14,   0,   0,   0,  50,   0, 
      0,  15, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,  64,   0,   0,   0,  64, 
      0,   0,   0,  64,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128, 191,   0,   0, 
    128, 191,   0,   0, 128, 191, 
      0,   0,   0,   0,  16,   0, 
      0,   8,  18,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  19,   0,   0,   0, 
     16,   0,   0,   8,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,  20,   0, 
      0,   0,  16,   0,   0,   8, 
     66,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
     21,   0,   0,   0,  16,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  68,   0,   0,   5, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,  32,  16,   0, 
      1,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  54,   0,   0,   8, 
    114,  32,  16,   0,   2,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,  54,   0, 
      0,   6, 130,  32,  16,   0, 
      2,   0,   0,   0,  58, 128, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  17,   0, 
      0,   8,  18,  32,  16,   0, 
      3,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  22,   0,   0,   0, 
     17,   0,   0,   8,  34,  32, 
     16,   0,   3,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  23,   0, 
      0,   0,  17,   0,   0,   8, 
     66,  32,  16,   0,   3,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     24,   0,   0,   0,  17,   0, 
      0,   8, 130,  32,  16,   0, 
      3,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  25,   0,   0,   0, 
     62,   0,   0,   1,  82,  84, 
     83,  48,  44,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  24,   0,   0,   0, 
      0,   0,   0,   0,  44,   0, 
      0,   0,  29,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,  36,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};