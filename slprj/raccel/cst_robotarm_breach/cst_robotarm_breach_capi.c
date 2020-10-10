#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "cst_robotarm_breach_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "cst_robotarm_breach.h"
#include "cst_robotarm_breach_capi.h"
#include "cst_robotarm_breach_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"cst_robotarm_breach/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
1 , 0 , TARGET_STRING ( "cst_robotarm_breach/Abs1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "cst_robotarm_breach/Abs2" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"cst_robotarm_breach/Abs3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
4 , 0 , TARGET_STRING ( "cst_robotarm_breach/Abs4" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING ( "cst_robotarm_breach/Abs5" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"cst_robotarm_breach/Derivative" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 7 , 0 , TARGET_STRING ( "cst_robotarm_breach/Derivative1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"cst_robotarm_breach/Derivative2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 9 , 0 , TARGET_STRING ( "cst_robotarm_breach/Derivative3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"cst_robotarm_breach/Derivative4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 11 , 0 , TARGET_STRING ( "cst_robotarm_breach/Derivative5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gd1" ) , TARGET_STRING ( "Kd1" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 13 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gd2" ) , TARGET_STRING (
"Kd2" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gd3" ) , TARGET_STRING ( "Kd3" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 15 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gd4" ) , TARGET_STRING (
"Kd4" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gd5" ) , TARGET_STRING ( "Kd5" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 17 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gd6" ) , TARGET_STRING (
"Kd6" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gi1" ) , TARGET_STRING ( "Ki1" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 19 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gi2" ) , TARGET_STRING (
"Ki2" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gi3" ) , TARGET_STRING ( "Ki3" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 21 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gi4" ) , TARGET_STRING (
"Ki4" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gi5" ) , TARGET_STRING ( "Ki5" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 23 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gi6" ) , TARGET_STRING (
"Ki6" ) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gp1" ) , TARGET_STRING ( "Kp1" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 25 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gp2" ) , TARGET_STRING (
"Kp2" ) , 0 , 0 , 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gp3" ) , TARGET_STRING ( "Kp3" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 27 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gp4" ) , TARGET_STRING (
"Kp4" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"cst_robotarm_breach/Gp5" ) , TARGET_STRING ( "Kp5" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 29 , 0 , TARGET_STRING ( "cst_robotarm_breach/Gp6" ) , TARGET_STRING (
"Kp6" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"cst_robotarm_breach/R1" ) , TARGET_STRING ( "r1" ) , 0 , 0 , 0 , 0 , 0 } , {
31 , 0 , TARGET_STRING ( "cst_robotarm_breach/R2" ) , TARGET_STRING ( "r2" )
, 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING ( "cst_robotarm_breach/R3" )
, TARGET_STRING ( "r3" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"cst_robotarm_breach/R4" ) , TARGET_STRING ( "r4" ) , 0 , 0 , 0 , 0 , 0 } , {
34 , 0 , TARGET_STRING ( "cst_robotarm_breach/R5" ) , TARGET_STRING ( "r5" )
, 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING ( "cst_robotarm_breach/R6" )
, TARGET_STRING ( "r6" ) , 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sp1" ) , TARGET_STRING ( "sp1" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 37 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sp2" ) , TARGET_STRING (
"sp2" ) , 0 , 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sp3" ) , TARGET_STRING ( "sp3" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 39 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sp4" ) , TARGET_STRING (
"sp4" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sp5" ) , TARGET_STRING ( "sp5" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 41 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sp6" ) , TARGET_STRING (
"sp6" ) , 0 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"cst_robotarm_breach/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 43 , 0 , TARGET_STRING ( "cst_robotarm_breach/Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"cst_robotarm_breach/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 45 , 0 , TARGET_STRING ( "cst_robotarm_breach/Integrator3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"cst_robotarm_breach/Integrator4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 47 , 0 , TARGET_STRING ( "cst_robotarm_breach/Integrator5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"cst_robotarm_breach/D1" ) , TARGET_STRING ( "d1" ) , 0 , 0 , 0 , 0 , 0 } , {
49 , 0 , TARGET_STRING ( "cst_robotarm_breach/D2" ) , TARGET_STRING ( "d2" )
, 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING ( "cst_robotarm_breach/D3" )
, TARGET_STRING ( "d3" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"cst_robotarm_breach/D4" ) , TARGET_STRING ( "d4" ) , 0 , 0 , 0 , 0 , 0 } , {
52 , 0 , TARGET_STRING ( "cst_robotarm_breach/D5" ) , TARGET_STRING ( "d5" )
, 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING ( "cst_robotarm_breach/D6" )
, TARGET_STRING ( "d6" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
"cst_robotarm_breach/[0...5] " ) , TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 ,
1 } , { 55 , 0 , TARGET_STRING ( "cst_robotarm_breach/[0...5] 1" ) ,
TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 , 1 } , { 56 , 0 , TARGET_STRING (
"cst_robotarm_breach/[0...5] 2" ) , TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 ,
1 } , { 57 , 0 , TARGET_STRING ( "cst_robotarm_breach/[0...5] 3" ) ,
TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
"cst_robotarm_breach/[0...5] 4" ) , TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 ,
1 } , { 59 , 0 , TARGET_STRING ( "cst_robotarm_breach/[0...5] 5" ) ,
TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 , 1 } , { 60 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
61 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum1" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum10" ) , TARGET_STRING ( "hCMD" ) , 0 , 0 , 0 , 0 , 0
} , { 63 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum11" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum12" ) , TARGET_STRING ( "gCMD" ) , 0 , 0 , 0 , 0 , 0
} , { 65 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum13" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum14" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 67 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum15" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum16" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 69 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum17" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum18" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 71 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum2" ) , TARGET_STRING (
"tCMD" ) , 0 , 0 , 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
73 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum4" ) , TARGET_STRING (
"bCMD" ) , 0 , 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
75 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum6" ) , TARGET_STRING (
"fCMD" ) , 0 , 0 , 0 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
77 , 0 , TARGET_STRING ( "cst_robotarm_breach/Sum8" ) , TARGET_STRING (
"wCMD" ) , 0 , 0 , 0 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
"cst_robotarm_breach/Sum9" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
79 , 0 , TARGET_STRING ( "cst_robotarm_breach/Signal Conditioning/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn" ) ,
TARGET_STRING ( "tAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 81 , 0 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn1" ) ,
TARGET_STRING ( "bAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 82 , 0 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn2" ) ,
TARGET_STRING ( "fAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 83 , 0 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn3" ) ,
TARGET_STRING ( "wAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 84 , 0 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn4" ) ,
TARGET_STRING ( "hAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 85 , 0 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn5" ) ,
TARGET_STRING ( "gAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 86 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_13_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_14_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_15_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_16_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_17_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_18_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_19_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_20_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_21_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_2_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_3_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 122 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_4_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_5_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 124 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_6_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 125 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_7_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_4"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_5"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 131 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_6"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
 "cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_7"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 133 , TARGET_STRING ( "cst_robotarm_breach/Break"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"cst_robotarm_breach/Break1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , {
135 , TARGET_STRING ( "cst_robotarm_breach/Break2" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
"cst_robotarm_breach/Break3" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , {
137 , TARGET_STRING ( "cst_robotarm_breach/Break4" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 138 , TARGET_STRING (
"cst_robotarm_breach/Break5" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , {
139 , TARGET_STRING ( "cst_robotarm_breach/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 140 , TARGET_STRING ( "cst_robotarm_breach/Gd1" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING (
"cst_robotarm_breach/Gd2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 142
, TARGET_STRING ( "cst_robotarm_breach/Gd3" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 143 , TARGET_STRING ( "cst_robotarm_breach/Gd4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 144 , TARGET_STRING (
"cst_robotarm_breach/Gd5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 145
, TARGET_STRING ( "cst_robotarm_breach/Gd6" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 146 , TARGET_STRING ( "cst_robotarm_breach/Gi1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 147 , TARGET_STRING (
"cst_robotarm_breach/Gi2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 148
, TARGET_STRING ( "cst_robotarm_breach/Gi3" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 149 , TARGET_STRING ( "cst_robotarm_breach/Gi4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING (
"cst_robotarm_breach/Gi5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 151
, TARGET_STRING ( "cst_robotarm_breach/Gi6" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 152 , TARGET_STRING ( "cst_robotarm_breach/Gp1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 153 , TARGET_STRING (
"cst_robotarm_breach/Gp2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 154
, TARGET_STRING ( "cst_robotarm_breach/Gp3" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 155 , TARGET_STRING ( "cst_robotarm_breach/Gp4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 156 , TARGET_STRING (
"cst_robotarm_breach/Gp5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 157
, TARGET_STRING ( "cst_robotarm_breach/Gp6" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 158 , TARGET_STRING ( "cst_robotarm_breach/R1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 159 , TARGET_STRING (
"cst_robotarm_breach/R2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 160 ,
TARGET_STRING ( "cst_robotarm_breach/R3" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 161 , TARGET_STRING ( "cst_robotarm_breach/R4" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 162 , TARGET_STRING ( "cst_robotarm_breach/R5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 163 , TARGET_STRING (
"cst_robotarm_breach/R6" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 164 ,
TARGET_STRING ( "cst_robotarm_breach/Sp1" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 165 , TARGET_STRING ( "cst_robotarm_breach/Sp2" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 166 , TARGET_STRING ( "cst_robotarm_breach/Sp3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 167 , TARGET_STRING (
"cst_robotarm_breach/Sp4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 168
, TARGET_STRING ( "cst_robotarm_breach/Sp5" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 169 , TARGET_STRING ( "cst_robotarm_breach/Sp6" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 170 , TARGET_STRING (
"cst_robotarm_breach/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0
, 0 , 0 } , { 171 , TARGET_STRING ( "cst_robotarm_breach/Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 172 , TARGET_STRING (
"cst_robotarm_breach/Integrator2" ) , TARGET_STRING ( "InitialCondition" ) ,
0 , 0 , 0 } , { 173 , TARGET_STRING ( "cst_robotarm_breach/Integrator3" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 174 , TARGET_STRING (
"cst_robotarm_breach/Integrator4" ) , TARGET_STRING ( "InitialCondition" ) ,
0 , 0 , 0 } , { 175 , TARGET_STRING ( "cst_robotarm_breach/Integrator5" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 176 , TARGET_STRING (
"cst_robotarm_breach/D1" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , {
177 , TARGET_STRING ( "cst_robotarm_breach/D1" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 178 , TARGET_STRING (
"cst_robotarm_breach/D2" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , {
179 , TARGET_STRING ( "cst_robotarm_breach/D2" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 180 , TARGET_STRING (
"cst_robotarm_breach/D3" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , {
181 , TARGET_STRING ( "cst_robotarm_breach/D3" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 182 , TARGET_STRING (
"cst_robotarm_breach/D4" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , {
183 , TARGET_STRING ( "cst_robotarm_breach/D4" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 184 , TARGET_STRING (
"cst_robotarm_breach/D5" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , {
185 , TARGET_STRING ( "cst_robotarm_breach/D5" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 186 , TARGET_STRING (
"cst_robotarm_breach/D6" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , {
187 , TARGET_STRING ( "cst_robotarm_breach/D6" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 188 , TARGET_STRING (
"cst_robotarm_breach/[0...5] " ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0
} , { 189 , TARGET_STRING ( "cst_robotarm_breach/[0...5] " ) , TARGET_STRING
( "LowerLimit" ) , 0 , 0 , 0 } , { 190 , TARGET_STRING (
"cst_robotarm_breach/[0...5] 1" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 ,
0 } , { 191 , TARGET_STRING ( "cst_robotarm_breach/[0...5] 1" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 192 , TARGET_STRING (
"cst_robotarm_breach/[0...5] 2" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 ,
0 } , { 193 , TARGET_STRING ( "cst_robotarm_breach/[0...5] 2" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 194 , TARGET_STRING (
"cst_robotarm_breach/[0...5] 3" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 ,
0 } , { 195 , TARGET_STRING ( "cst_robotarm_breach/[0...5] 3" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 196 , TARGET_STRING (
"cst_robotarm_breach/[0...5] 4" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 ,
0 } , { 197 , TARGET_STRING ( "cst_robotarm_breach/[0...5] 4" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 198 , TARGET_STRING (
"cst_robotarm_breach/[0...5] 5" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 ,
0 } , { 199 , TARGET_STRING ( "cst_robotarm_breach/[0...5] 5" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 200 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/IC" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 201 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn" ) ,
TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn1" ) ,
TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 203 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn2" ) ,
TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn3" ) ,
TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn4" ) ,
TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 206 , TARGET_STRING (
"cst_robotarm_breach/Signal Conditioning/Discrete Transfer Fcn5" ) ,
TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] =
{ { 207 , TARGET_STRING ( "dFilt" ) , 0 , 6 , 0 } , { 208 , TARGET_STRING (
"nFilt" ) , 0 , 6 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ncmezuqmmk , & rtB . cw0yilgxki ,
& rtB . i3zdseytux , & rtB . aqydko43rs , & rtB . cvhnksc212 , & rtB .
b11x1b5dds , & rtB . k0xhr3lmo2 , & rtB . daldi2mwjh , & rtB . jvcsgidigm , &
rtB . cd0jqvz3v1 , & rtB . nyfblsqmlt , & rtB . eq4gdqwc1e , & rtB .
lnddeflvkv , & rtB . atgk44qqef , & rtB . grmrgx0ato , & rtB . oiq4fammfn , &
rtB . che1xa0shi , & rtB . amm0am250j , & rtB . kyvfepmlch , & rtB .
mmfxcblztm , & rtB . php12pluqb , & rtB . ps1m5ri5j1 , & rtB . iz0c33tt3q , &
rtB . nqyjzjhqbz , & rtB . kzvnckcdot , & rtB . aidyoivzbo , & rtB .
otiyf2ict4 , & rtB . ebkbzp4ifa , & rtB . f5npikm4p2 , & rtB . hgdvmrnotw , &
rtB . jkyfhps0ke , & rtB . f4mz34xjdw , & rtB . b0nvbtvute , & rtB .
kwvtqc24nn , & rtB . bccvxfaqok , & rtB . i1zzbavhbp , & rtB . a4h4awrudh , &
rtB . fnevqel4sp , & rtB . hqug0gb1in , & rtB . ejgueusult , & rtB .
ltooszp1wf , & rtB . jgvdzme2mo , & rtB . h124qx1phd , & rtB . isqdcvco3p , &
rtB . gaax23jywc , & rtB . etclrumkes , & rtB . pwffmskdll , & rtB .
lqbtlsqcxh , & rtB . fllne2ej2o , & rtB . gc0ufezm40 , & rtB . pen2tlbuc2 , &
rtB . a52ganzccv , & rtB . oavnyz4xex , & rtB . kmphhlf0c0 , & rtB .
gudjnx4gli , & rtB . bxxre2130j , & rtB . kkv31bku2h , & rtB . i1gvwgou24 , &
rtB . kl5k5speeu , & rtB . ftcpietbbk , & rtB . ff0xl0o0on , & rtB .
fnwiftiak2 , & rtB . c1p1nl5zha , & rtB . puv1ifcb43 , & rtB . apuphxyrha , &
rtB . knyvewjxd3 , & rtB . bs4ylghjgz , & rtB . h0ga0ulw4o , & rtB .
iqi5uemowu , & rtB . ngc2vhkcvx , & rtB . ctvpv2ept2 , & rtB . cicsqsen0r , &
rtB . fwfn0fe1sh , & rtB . kfkj44nk3p , & rtB . ddsxiam50k , & rtB .
jihi4nct2b , & rtB . f2w1fqz5qt , & rtB . nji1qqccll , & rtB . fzulu4txkm , &
rtB . cxcsyd5d1c , & rtB . d4qhj2qvox , & rtB . jndeowmqg5 , & rtB .
ghuv4nrpe3 , & rtB . ljrewaf2lo , & rtB . jv05vc0wdl , & rtB . okyvttk103 , &
rtB . ptr4jxtzru [ 0 ] , & rtB . bkephdao5q [ 0 ] , & rtB . d1bzzxr1py [ 0 ]
, & rtB . e2oog2ldlk [ 0 ] , & rtB . moqztnnjfy [ 0 ] , & rtB . l3qlly0y24 [
0 ] , & rtB . pzylr3xzgl [ 0 ] , & rtB . mmt4jv2djd [ 0 ] , & rtB .
os31fqwjpr [ 0 ] , & rtB . ar342mtoyy [ 0 ] , & rtB . b0pjn0qe1a [ 0 ] , &
rtB . dycz5qe5i2 [ 0 ] , & rtB . fntgtrllob [ 0 ] , & rtB . cxyv2au2fy [ 0 ]
, & rtB . hbxx3xyytn [ 0 ] , & rtB . c4ncjpj4p3 [ 0 ] , & rtB . l5pujcrulu [
0 ] , & rtB . b2vobw2amc [ 0 ] , & rtB . aowtlt2xsx [ 0 ] , & rtB .
nedkaormew [ 0 ] , & rtB . fltnebkpfo [ 0 ] , & rtB . mevfua5fda [ 0 ] , &
rtB . ecbwmrxmul [ 0 ] , & rtB . nvp0xnvq03 [ 0 ] , & rtB . o1ldcw3ssi [ 0 ]
, & rtB . ase3lj3apj [ 0 ] , & rtB . l4n2e5pdle [ 0 ] , & rtB . nwltqugjxl [
0 ] , & rtB . gsxwzsrgs3 [ 0 ] , & rtB . jcohfzsgmt [ 0 ] , & rtB .
lgamsddxfw [ 0 ] , & rtB . amckjsk01h [ 0 ] , & rtB . n51jz3r5ms [ 0 ] , &
rtB . no5mc1kht1 , & rtB . gq0aoqqtfi , & rtB . bml3meflbj , & rtB .
oew42em5vf , & rtB . hiiihp2k0u , & rtB . dlgzaqgmhc [ 0 ] , & rtB .
fbkymqjw15 , & rtB . pfaxquxlh0 [ 0 ] , & rtB . myphwxfnds [ 0 ] , & rtB .
mzskvlpl4t [ 0 ] , & rtB . mzifsmwue2 [ 0 ] , & rtB . b4ms4hfc5c [ 0 ] , &
rtB . krcxplu3eq [ 0 ] , & rtB . puxn2q3jes [ 0 ] , & rtP . Break_Value , &
rtP . Break1_Value , & rtP . Break2_Value , & rtP . Break3_Value , & rtP .
Break4_Value , & rtP . Break5_Value , & rtP . Constant1_Value , & rtP .
Gd1_Gain , & rtP . Gd2_Gain , & rtP . Gd3_Gain , & rtP . Gd4_Gain , & rtP .
Gd5_Gain , & rtP . Gd6_Gain , & rtP . Gi1_Gain , & rtP . Gi2_Gain , & rtP .
Gi3_Gain , & rtP . Gi4_Gain , & rtP . Gi5_Gain , & rtP . Gi6_Gain , & rtP .
Gp1_Gain , & rtP . Gp2_Gain , & rtP . Gp3_Gain , & rtP . Gp4_Gain , & rtP .
Gp5_Gain , & rtP . Gp6_Gain , & rtP . R1_Gain , & rtP . R2_Gain , & rtP .
R3_Gain , & rtP . R4_Gain , & rtP . R5_Gain , & rtP . R6_Gain , & rtP .
Sp1_Gain , & rtP . Sp2_Gain , & rtP . Sp3_Gain , & rtP . Sp4_Gain , & rtP .
Sp5_Gain , & rtP . Sp6_Gain , & rtP . Integrator_IC , & rtP . Integrator1_IC
, & rtP . Integrator2_IC , & rtP . Integrator3_IC , & rtP . Integrator4_IC ,
& rtP . Integrator5_IC , & rtP . D1_UpperSat , & rtP . D1_LowerSat , & rtP .
D2_UpperSat , & rtP . D2_LowerSat , & rtP . D3_UpperSat , & rtP . D3_LowerSat
, & rtP . D4_UpperSat , & rtP . D4_LowerSat , & rtP . D5_UpperSat , & rtP .
D5_LowerSat , & rtP . D6_UpperSat , & rtP . D6_LowerSat , & rtP . u5_UpperSat
, & rtP . u5_LowerSat , & rtP . u51_UpperSat , & rtP . u51_LowerSat , & rtP .
u52_UpperSat , & rtP . u52_LowerSat , & rtP . u53_UpperSat , & rtP .
u53_LowerSat , & rtP . u54_UpperSat , & rtP . u54_LowerSat , & rtP .
u55_UpperSat , & rtP . u55_LowerSat , & rtP . IC_Value , & rtP .
DiscreteTransferFcn_InitialStates , & rtP .
DiscreteTransferFcn1_InitialStates , & rtP .
DiscreteTransferFcn2_InitialStates , & rtP .
DiscreteTransferFcn3_InitialStates , & rtP .
DiscreteTransferFcn4_InitialStates , & rtP .
DiscreteTransferFcn5_InitialStates , & rtP . dFilt [ 0 ] , & rtP . nFilt [ 0
] , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 1 , 1 , 4 , 1 , 12 , 1 , 9 , 1 , 29 , 1 , 18 , 1 , 1 , 2 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 , 0.1 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 }
, } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 1 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 133 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 74 ,
rtModelParameters , 2 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 2957884597U , 3543390542U , 126132786U , 3705451789U } , ( NULL ) , 0 , 0
} ; const rtwCAPI_ModelMappingStaticInfo *
cst_robotarm_breach_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void cst_robotarm_breach_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion
( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void cst_robotarm_breach_host_InitializeDataMapInfo (
cst_robotarm_breach_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
