#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "cst_robotarm_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "cst_robotarm.h"
#include "cst_robotarm_capi.h"
#include "cst_robotarm_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"cst_robotarm/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "cst_robotarm/Abs1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 2 , 0 , TARGET_STRING ( "cst_robotarm/Abs2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING ( "cst_robotarm/Abs3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"cst_robotarm/Abs4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0
, TARGET_STRING ( "cst_robotarm/Abs5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 6 , 0 , TARGET_STRING ( "cst_robotarm/Derivative" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"cst_robotarm/Derivative1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
8 , 0 , TARGET_STRING ( "cst_robotarm/Derivative2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING ( "cst_robotarm/Derivative3" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"cst_robotarm/Derivative4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
11 , 0 , TARGET_STRING ( "cst_robotarm/Derivative5" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING ( "cst_robotarm/Gd1" ) ,
TARGET_STRING ( "Kd1" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"cst_robotarm/Gd2" ) , TARGET_STRING ( "Kd2" ) , 0 , 0 , 0 , 0 , 0 } , { 14 ,
0 , TARGET_STRING ( "cst_robotarm/Gd3" ) , TARGET_STRING ( "Kd3" ) , 0 , 0 ,
0 , 0 , 0 } , { 15 , 0 , TARGET_STRING ( "cst_robotarm/Gd4" ) , TARGET_STRING
( "Kd4" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"cst_robotarm/Gd5" ) , TARGET_STRING ( "Kd5" ) , 0 , 0 , 0 , 0 , 0 } , { 17 ,
0 , TARGET_STRING ( "cst_robotarm/Gd6" ) , TARGET_STRING ( "Kd6" ) , 0 , 0 ,
0 , 0 , 0 } , { 18 , 0 , TARGET_STRING ( "cst_robotarm/Gi1" ) , TARGET_STRING
( "Ki1" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"cst_robotarm/Gi2" ) , TARGET_STRING ( "Ki2" ) , 0 , 0 , 0 , 0 , 0 } , { 20 ,
0 , TARGET_STRING ( "cst_robotarm/Gi3" ) , TARGET_STRING ( "Ki3" ) , 0 , 0 ,
0 , 0 , 0 } , { 21 , 0 , TARGET_STRING ( "cst_robotarm/Gi4" ) , TARGET_STRING
( "Ki4" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"cst_robotarm/Gi5" ) , TARGET_STRING ( "Ki5" ) , 0 , 0 , 0 , 0 , 0 } , { 23 ,
0 , TARGET_STRING ( "cst_robotarm/Gi6" ) , TARGET_STRING ( "Ki6" ) , 0 , 0 ,
0 , 0 , 0 } , { 24 , 0 , TARGET_STRING ( "cst_robotarm/Gp1" ) , TARGET_STRING
( "Kp1" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"cst_robotarm/Gp2" ) , TARGET_STRING ( "Kp2" ) , 0 , 0 , 0 , 0 , 0 } , { 26 ,
0 , TARGET_STRING ( "cst_robotarm/Gp3" ) , TARGET_STRING ( "Kp3" ) , 0 , 0 ,
0 , 0 , 0 } , { 27 , 0 , TARGET_STRING ( "cst_robotarm/Gp4" ) , TARGET_STRING
( "Kp4" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"cst_robotarm/Gp5" ) , TARGET_STRING ( "Kp5" ) , 0 , 0 , 0 , 0 , 0 } , { 29 ,
0 , TARGET_STRING ( "cst_robotarm/Gp6" ) , TARGET_STRING ( "Kp6" ) , 0 , 0 ,
0 , 0 , 0 } , { 30 , 0 , TARGET_STRING ( "cst_robotarm/R1" ) , TARGET_STRING
( "r1" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING ( "cst_robotarm/R2"
) , TARGET_STRING ( "r2" ) , 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"cst_robotarm/R3" ) , TARGET_STRING ( "r3" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0
, TARGET_STRING ( "cst_robotarm/R4" ) , TARGET_STRING ( "r4" ) , 0 , 0 , 0 ,
0 , 0 } , { 34 , 0 , TARGET_STRING ( "cst_robotarm/R5" ) , TARGET_STRING (
"r5" ) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING ( "cst_robotarm/R6" )
, TARGET_STRING ( "r6" ) , 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"cst_robotarm/Sp1" ) , TARGET_STRING ( "sp1" ) , 0 , 0 , 0 , 0 , 0 } , { 37 ,
0 , TARGET_STRING ( "cst_robotarm/Sp2" ) , TARGET_STRING ( "sp2" ) , 0 , 0 ,
0 , 0 , 0 } , { 38 , 0 , TARGET_STRING ( "cst_robotarm/Sp3" ) , TARGET_STRING
( "sp3" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"cst_robotarm/Sp4" ) , TARGET_STRING ( "sp4" ) , 0 , 0 , 0 , 0 , 0 } , { 40 ,
0 , TARGET_STRING ( "cst_robotarm/Sp5" ) , TARGET_STRING ( "sp5" ) , 0 , 0 ,
0 , 0 , 0 } , { 41 , 0 , TARGET_STRING ( "cst_robotarm/Sp6" ) , TARGET_STRING
( "sp6" ) , 0 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"cst_robotarm/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
43 , 0 , TARGET_STRING ( "cst_robotarm/Integrator1" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING ( "cst_robotarm/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"cst_robotarm/Integrator3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
46 , 0 , TARGET_STRING ( "cst_robotarm/Integrator4" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING ( "cst_robotarm/Integrator5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"cst_robotarm/D1" ) , TARGET_STRING ( "d1" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0
, TARGET_STRING ( "cst_robotarm/D2" ) , TARGET_STRING ( "d2" ) , 0 , 0 , 0 ,
0 , 0 } , { 50 , 0 , TARGET_STRING ( "cst_robotarm/D3" ) , TARGET_STRING (
"d3" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING ( "cst_robotarm/D4" )
, TARGET_STRING ( "d4" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"cst_robotarm/D5" ) , TARGET_STRING ( "d5" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0
, TARGET_STRING ( "cst_robotarm/D6" ) , TARGET_STRING ( "d6" ) , 0 , 0 , 0 ,
0 , 0 } , { 54 , 0 , TARGET_STRING ( "cst_robotarm/[0...5] " ) ,
TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
"cst_robotarm/[0...5] 1" ) , TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 56 , 0 , TARGET_STRING ( "cst_robotarm/[0...5] 2" ) , TARGET_STRING ( "brk"
) , 0 , 0 , 0 , 0 , 1 } , { 57 , 0 , TARGET_STRING ( "cst_robotarm/[0...5] 3"
) , TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 , 1 } , { 58 , 0 , TARGET_STRING
( "cst_robotarm/[0...5] 4" ) , TARGET_STRING ( "brk" ) , 0 , 0 , 0 , 0 , 1 }
, { 59 , 0 , TARGET_STRING ( "cst_robotarm/[0...5] 5" ) , TARGET_STRING (
"brk" ) , 0 , 0 , 0 , 0 , 1 } , { 60 , 0 , TARGET_STRING ( "cst_robotarm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
"cst_robotarm/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 62 , 0
, TARGET_STRING ( "cst_robotarm/Sum10" ) , TARGET_STRING ( "hCMD" ) , 0 , 0 ,
0 , 0 , 0 } , { 63 , 0 , TARGET_STRING ( "cst_robotarm/Sum11" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
"cst_robotarm/Sum12" ) , TARGET_STRING ( "gCMD" ) , 0 , 0 , 0 , 0 , 0 } , {
65 , 0 , TARGET_STRING ( "cst_robotarm/Sum13" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING ( "cst_robotarm/Sum14" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
"cst_robotarm/Sum15" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 68 ,
0 , TARGET_STRING ( "cst_robotarm/Sum16" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 69 , 0 , TARGET_STRING ( "cst_robotarm/Sum17" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"cst_robotarm/Sum18" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 71 ,
0 , TARGET_STRING ( "cst_robotarm/Sum2" ) , TARGET_STRING ( "tCMD" ) , 0 , 0
, 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING ( "cst_robotarm/Sum3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
"cst_robotarm/Sum4" ) , TARGET_STRING ( "bCMD" ) , 0 , 0 , 0 , 0 , 0 } , { 74
, 0 , TARGET_STRING ( "cst_robotarm/Sum5" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 75 , 0 , TARGET_STRING ( "cst_robotarm/Sum6" ) ,
TARGET_STRING ( "fCMD" ) , 0 , 0 , 0 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
"cst_robotarm/Sum7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 77 , 0
, TARGET_STRING ( "cst_robotarm/Sum8" ) , TARGET_STRING ( "wCMD" ) , 0 , 0 ,
0 , 0 , 0 } , { 78 , 0 , TARGET_STRING ( "cst_robotarm/Sum9" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 80 , 0 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn" ) , TARGET_STRING (
"tAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 81 , 0 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn1" ) , TARGET_STRING (
"bAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 82 , 0 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn2" ) , TARGET_STRING (
"fAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 83 , 0 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn3" ) , TARGET_STRING (
"wAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 84 , 0 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn4" ) , TARGET_STRING (
"hAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 85 , 0 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn5" ) , TARGET_STRING (
"gAngle" ) , 0 , 0 , 0 , 0 , 2 } , { 86 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_13_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_14_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_15_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_16_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_17_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_18_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_19_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_20_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_21_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_2_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_3_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 122 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_4_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_5_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 124 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_6_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 125 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_7_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_4"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_5"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 131 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_6"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
 "cst_robotarm/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_7"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 133 , TARGET_STRING ( "cst_robotarm/Break" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"cst_robotarm/Break1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 135 ,
TARGET_STRING ( "cst_robotarm/Break2" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 136 , TARGET_STRING ( "cst_robotarm/Break3" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 137 , TARGET_STRING ( "cst_robotarm/Break4" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 138 , TARGET_STRING (
"cst_robotarm/Break5" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 139 ,
TARGET_STRING ( "cst_robotarm/Constant1" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 140 , TARGET_STRING ( "cst_robotarm/Gd1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING ( "cst_robotarm/Gd2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 142 , TARGET_STRING (
"cst_robotarm/Gd3" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 143 ,
TARGET_STRING ( "cst_robotarm/Gd4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 144 , TARGET_STRING ( "cst_robotarm/Gd5" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 145 , TARGET_STRING ( "cst_robotarm/Gd6" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 146 , TARGET_STRING ( "cst_robotarm/Gi1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 147 , TARGET_STRING (
"cst_robotarm/Gi2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 148 ,
TARGET_STRING ( "cst_robotarm/Gi3" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 149 , TARGET_STRING ( "cst_robotarm/Gi4" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 150 , TARGET_STRING ( "cst_robotarm/Gi5" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING ( "cst_robotarm/Gi6" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 152 , TARGET_STRING (
"cst_robotarm/Gp1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 153 ,
TARGET_STRING ( "cst_robotarm/Gp2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 154 , TARGET_STRING ( "cst_robotarm/Gp3" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 155 , TARGET_STRING ( "cst_robotarm/Gp4" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 156 , TARGET_STRING ( "cst_robotarm/Gp5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 157 , TARGET_STRING (
"cst_robotarm/Gp6" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 158 ,
TARGET_STRING ( "cst_robotarm/R1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 159 , TARGET_STRING ( "cst_robotarm/R2" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 160 , TARGET_STRING ( "cst_robotarm/R3" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING ( "cst_robotarm/R4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 162 , TARGET_STRING (
"cst_robotarm/R5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 163 ,
TARGET_STRING ( "cst_robotarm/R6" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 164 , TARGET_STRING ( "cst_robotarm/Sp1" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 165 , TARGET_STRING ( "cst_robotarm/Sp2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 166 , TARGET_STRING ( "cst_robotarm/Sp3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 167 , TARGET_STRING (
"cst_robotarm/Sp4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 168 ,
TARGET_STRING ( "cst_robotarm/Sp5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 169 , TARGET_STRING ( "cst_robotarm/Sp6" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 170 , TARGET_STRING ( "cst_robotarm/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 171 , TARGET_STRING (
"cst_robotarm/Integrator1" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 ,
0 } , { 172 , TARGET_STRING ( "cst_robotarm/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 173 , TARGET_STRING (
"cst_robotarm/Integrator3" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 ,
0 } , { 174 , TARGET_STRING ( "cst_robotarm/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 175 , TARGET_STRING (
"cst_robotarm/Integrator5" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 ,
0 } , { 176 , TARGET_STRING ( "cst_robotarm/D1" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 177 , TARGET_STRING ( "cst_robotarm/D1" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 178 , TARGET_STRING (
"cst_robotarm/D2" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 179 ,
TARGET_STRING ( "cst_robotarm/D2" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0
, 0 } , { 180 , TARGET_STRING ( "cst_robotarm/D3" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 181 , TARGET_STRING ( "cst_robotarm/D3" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 182 , TARGET_STRING (
"cst_robotarm/D4" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 183 ,
TARGET_STRING ( "cst_robotarm/D4" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0
, 0 } , { 184 , TARGET_STRING ( "cst_robotarm/D5" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 185 , TARGET_STRING ( "cst_robotarm/D5" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 186 , TARGET_STRING (
"cst_robotarm/D6" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 187 ,
TARGET_STRING ( "cst_robotarm/D6" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0
, 0 } , { 188 , TARGET_STRING ( "cst_robotarm/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 189 , TARGET_STRING (
"cst_robotarm/[0...5] " ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , {
190 , TARGET_STRING ( "cst_robotarm/[0...5] 1" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 191 , TARGET_STRING (
"cst_robotarm/[0...5] 1" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , {
192 , TARGET_STRING ( "cst_robotarm/[0...5] 2" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 193 , TARGET_STRING (
"cst_robotarm/[0...5] 2" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , {
194 , TARGET_STRING ( "cst_robotarm/[0...5] 3" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 195 , TARGET_STRING (
"cst_robotarm/[0...5] 3" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , {
196 , TARGET_STRING ( "cst_robotarm/[0...5] 4" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 197 , TARGET_STRING (
"cst_robotarm/[0...5] 4" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , {
198 , TARGET_STRING ( "cst_robotarm/[0...5] 5" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 199 , TARGET_STRING (
"cst_robotarm/[0...5] 5" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , {
200 , TARGET_STRING ( "cst_robotarm/Signal Conditioning/IC" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 201 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn" ) , TARGET_STRING (
"InitialStates" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn1" ) , TARGET_STRING (
"InitialStates" ) , 0 , 0 , 0 } , { 203 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn2" ) , TARGET_STRING (
"InitialStates" ) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn3" ) , TARGET_STRING (
"InitialStates" ) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn4" ) , TARGET_STRING (
"InitialStates" ) , 0 , 0 , 0 } , { 206 , TARGET_STRING (
"cst_robotarm/Signal Conditioning/Discrete Transfer Fcn5" ) , TARGET_STRING (
"InitialStates" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 207 ,
TARGET_STRING ( "dFilt" ) , 0 , 6 , 0 } , { 208 , TARGET_STRING ( "nFilt" ) ,
0 , 6 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . fht4xkh1ev , & rtB . eh2hjsaicu ,
& rtB . oew5eo25ef , & rtB . bkvix0h45z , & rtB . ldiq5q5naa , & rtB .
ao5dn0t2uz , & rtB . nbg2no4kfn , & rtB . eqsuyearws , & rtB . aatxioghgk , &
rtB . fqne33prwc , & rtB . f1s03qmtvz , & rtB . on0z4zmhgg , & rtB .
polzbmpty5 , & rtB . bgkhkuq1uv , & rtB . hndwswnyoz , & rtB . dxfnpqbkcb , &
rtB . aj2xvlnbau , & rtB . dvrimdcswm , & rtB . bagwbwq1rt , & rtB .
oqprhwxbtn , & rtB . lozfekbxyk , & rtB . hfh4ccgrqw , & rtB . arsgpeonhl , &
rtB . n2cbzljwsr , & rtB . aayombost0 , & rtB . erfi1h50vk , & rtB .
j25zwoocn5 , & rtB . a3xwdirkee , & rtB . cz1ppk0zx1 , & rtB . m5tahxhn0f , &
rtB . lw1ku45fyz , & rtB . lmpujrulyo , & rtB . hw1ccwcgua , & rtB .
gue5wmwueg , & rtB . cyywu0nyp5 , & rtB . nzuj0tkyis , & rtB . hsnbhfvlji , &
rtB . fvsrxbfg4g , & rtB . dlc4zw50uu , & rtB . cx2pgcpxmh , & rtB .
imw2c4hmx0 , & rtB . kfizj0xxbp , & rtB . dqejxyzqpz , & rtB . no42p5lqd0 , &
rtB . buqdf1fc0l , & rtB . btorth4vln , & rtB . hs52pyeuw2 , & rtB .
gmslp1xfld , & rtB . m4nbz10psi , & rtB . k0jr3j5oxo , & rtB . iclarv42jt , &
rtB . n5av2fk0n2 , & rtB . b4uivev3hv , & rtB . ayfkra0odz , & rtB .
cg0peil0nn , & rtB . cjuzvphzfa , & rtB . hqhclugji4 , & rtB . bve50u2tic , &
rtB . ezre3gedwd , & rtB . bf4kcmzwgq , & rtB . ladvsqy4po , & rtB .
okawz4w12q , & rtB . dnyn3lbtrv , & rtB . asyj1ffrm5 , & rtB . onhuz22qes , &
rtB . hsvhvzaitf , & rtB . pfjse2trbp , & rtB . boum0gprkv , & rtB .
omps0qn1bp , & rtB . iktdwnifqy , & rtB . awwm15wr2b , & rtB . cavafntrgm , &
rtB . iztuma3owj , & rtB . eackyyj2tp , & rtB . p2n0iwadpz , & rtB .
i53xrhehpp , & rtB . hqaumiwlfi , & rtB . jk5baceso4 , & rtB . oaqctdd1z4 , &
rtB . mn03pjitnu , & rtB . grwuc0rtke , & rtB . fl2ljqidug , & rtB .
hsgnje4cmi , & rtB . gcyzeyasy2 , & rtB . ht4gnbs14o , & rtB . l5vvo0nd3q , &
rtB . cqr0wtwuy4 [ 0 ] , & rtB . mmtghsbk5w [ 0 ] , & rtB . dwr0nxvsbj [ 0 ]
, & rtB . got3v1adxi [ 0 ] , & rtB . ovfjzuhpy1 [ 0 ] , & rtB . dgpujci0nh [
0 ] , & rtB . go1xfp1pfe [ 0 ] , & rtB . oawdzxyk1g [ 0 ] , & rtB .
inipmccc32 [ 0 ] , & rtB . lkp0ijlter [ 0 ] , & rtB . kwsufxstz0 [ 0 ] , &
rtB . j2hdft1opa [ 0 ] , & rtB . c3sg5zcxif [ 0 ] , & rtB . o10dy052cl [ 0 ]
, & rtB . d432tayljp [ 0 ] , & rtB . pnxfeg3myh [ 0 ] , & rtB . e5djqxbatk [
0 ] , & rtB . hg55o3nyo3 [ 0 ] , & rtB . aalhpeekcz [ 0 ] , & rtB .
h2xuzybx31 [ 0 ] , & rtB . n2nhbhgaoj [ 0 ] , & rtB . pv1aefa4ak [ 0 ] , &
rtB . kdsjhcimkb [ 0 ] , & rtB . bezsqifqzd [ 0 ] , & rtB . myut2kekff [ 0 ]
, & rtB . gloyjgyfuk [ 0 ] , & rtB . ijej1daezt [ 0 ] , & rtB . j5gqirfivu [
0 ] , & rtB . ggdoah4lpg [ 0 ] , & rtB . oi2jfcurfm [ 0 ] , & rtB .
nny34gtevo [ 0 ] , & rtB . clw3kkg5lz [ 0 ] , & rtB . ji3vchq3tw [ 0 ] , &
rtB . neow0ggyvd , & rtB . gcaq34maq5 , & rtB . g0ribq2fff , & rtB .
bhsz3zdcal , & rtB . ccbyphkuvf , & rtB . e4jpommznb [ 0 ] , & rtB .
boj21qbs4q , & rtB . hefgnl12g0 [ 0 ] , & rtB . efla2tgklq [ 0 ] , & rtB .
edkd4wserg [ 0 ] , & rtB . krwjqqdwhs [ 0 ] , & rtB . an5wlueyqi [ 0 ] , &
rtB . kpuxbwdbqy [ 0 ] , & rtB . kvb4zpjzgq [ 0 ] , & rtP . Break_Value , &
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
0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 2 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 133 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 74 ,
rtModelParameters , 2 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3631493749U , 2582222913U , 3759986011U , 1457407973U } , ( NULL ) , 0 ,
0 } ; const rtwCAPI_ModelMappingStaticInfo * cst_robotarm_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void cst_robotarm_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void cst_robotarm_host_InitializeDataMapInfo (
cst_robotarm_host_DataMapInfo_T * dataMap , const char * path ) {
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
