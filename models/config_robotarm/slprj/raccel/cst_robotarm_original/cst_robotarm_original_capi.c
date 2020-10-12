#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "cst_robotarm_original_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "cst_robotarm_original.h"
#include "cst_robotarm_original_capi.h"
#include "cst_robotarm_original_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"cst_robotarm_original/Step1" ) , TARGET_STRING ( "tREF" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 0 , TARGET_STRING ( "cst_robotarm_original/Step2" ) ,
TARGET_STRING ( "bREF" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"cst_robotarm_original/Step3" ) , TARGET_STRING ( "fREF" ) , 0 , 0 , 0 , 0 ,
0 } , { 3 , 0 , TARGET_STRING ( "cst_robotarm_original/Step4" ) ,
TARGET_STRING ( "hREF" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"cst_robotarm_original/Step5" ) , TARGET_STRING ( "wREF" ) , 0 , 0 , 0 , 0 ,
0 } , { 5 , 0 , TARGET_STRING ( "cst_robotarm_original/Step6" ) ,
TARGET_STRING ( "gREF" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/Signal Conditioning/Sum" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/Abs" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/Gain" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/[0...5]" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/[0...5] " ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Derivative" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Gain" ) , TARGET_STRING ( "Ki2" )
, 0 , 0 , 0 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Gain1" ) , TARGET_STRING ( "Kp2" )
, 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Gain2" ) , TARGET_STRING ( "Kd2" )
, 0 , 0 , 0 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Integrator" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Sum" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Sum2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Derivative" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Gain" ) , TARGET_STRING ( "Ki3" )
, 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Gain1" ) , TARGET_STRING ( "Kp3"
) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Gain2" ) , TARGET_STRING ( "Kd3"
) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Integrator" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Sum" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Sum2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/Abs" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/Gain" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/[0...5]" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/[0...5] " ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 2 } , { 29 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/Abs" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/Gain" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/[0...5]" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/[0...5] " ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 2 } , { 33 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Derivative" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Gain" ) , TARGET_STRING ( "Ki6"
) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Gain1" ) , TARGET_STRING ( "Kp6"
) , 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Gain2" ) , TARGET_STRING ( "Kd6"
) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Integrator" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 38 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Sum2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/Abs" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/Gain" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/[0...5]" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/[0...5] " ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 2 } , { 44 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Derivative" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Gain" ) , TARGET_STRING ( "Ki5" ) ,
0 , 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Gain1" ) , TARGET_STRING ( "Kp5" )
, 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Gain2" ) , TARGET_STRING ( "Kd5" )
, 0 , 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Integrator" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Sum" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Sum2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/Abs" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/Gain" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/[0...5]" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/[0...5] " ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 2 } , { 55 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Derivative" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 56 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Gain" ) , TARGET_STRING (
"Ki1" ) , 0 , 0 , 0 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Gain1" ) , TARGET_STRING (
"Kp1" ) , 0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Gain2" ) , TARGET_STRING (
"Kd1" ) , 0 , 0 , 0 , 0 , 1 } , { 59 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Integrator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 60 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Sum" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Sum2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/Abs" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/Gain" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/[0...5]" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 65 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/[0...5] " ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 2 } , { 66 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Derivative" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 67 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Gain" ) , TARGET_STRING ( "Ki4" )
, 0 , 0 , 0 , 0 , 1 } , { 68 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Gain1" ) , TARGET_STRING ( "Kp4" )
, 0 , 0 , 0 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Gain2" ) , TARGET_STRING ( "Kd4" )
, 0 , 0 , 0 , 0 , 1 } , { 70 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Integrator" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 71 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Sum" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Sum2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 73 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 74 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 75 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 76 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_13_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 77 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_14_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 78 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_15_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 79 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_16_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 80 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_17_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 81 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_18_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 82 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_19_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 83 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 84 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_20_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 85 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_21_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 86 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 87 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 88 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 89 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 90 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 91 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 92 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INPUT_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 94 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 95 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 96 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 97 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 98 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 99 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 100 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 101 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 102 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 103 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 104 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 105 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 106 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 107 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_2_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 108 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_3_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 109 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_4_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 110 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_5_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 111 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_6_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 112 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/OUTPUT_7_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 113 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 114 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 115 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 116 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_4"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 117 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_5"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 118 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_6"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 119 , 0 , TARGET_STRING (
 "cst_robotarm_original/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Solver Configuration/EVAL_KEY/STATE_7"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 120 , TARGET_STRING (
"cst_robotarm_original/Step1" ) , TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , {
121 , TARGET_STRING ( "cst_robotarm_original/Step1" ) , TARGET_STRING (
"Before" ) , 0 , 0 , 0 } , { 122 , TARGET_STRING (
"cst_robotarm_original/Step1" ) , TARGET_STRING ( "After" ) , 0 , 0 , 0 } , {
123 , TARGET_STRING ( "cst_robotarm_original/Step2" ) , TARGET_STRING (
"Time" ) , 0 , 0 , 0 } , { 124 , TARGET_STRING (
"cst_robotarm_original/Step2" ) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 } ,
{ 125 , TARGET_STRING ( "cst_robotarm_original/Step2" ) , TARGET_STRING (
"After" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
"cst_robotarm_original/Step3" ) , TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , {
127 , TARGET_STRING ( "cst_robotarm_original/Step3" ) , TARGET_STRING (
"Before" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
"cst_robotarm_original/Step3" ) , TARGET_STRING ( "After" ) , 0 , 0 , 0 } , {
129 , TARGET_STRING ( "cst_robotarm_original/Step4" ) , TARGET_STRING (
"Time" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
"cst_robotarm_original/Step4" ) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 } ,
{ 131 , TARGET_STRING ( "cst_robotarm_original/Step4" ) , TARGET_STRING (
"After" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
"cst_robotarm_original/Step5" ) , TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , {
133 , TARGET_STRING ( "cst_robotarm_original/Step5" ) , TARGET_STRING (
"Before" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"cst_robotarm_original/Step5" ) , TARGET_STRING ( "After" ) , 0 , 0 , 0 } , {
135 , TARGET_STRING ( "cst_robotarm_original/Step6" ) , TARGET_STRING (
"Time" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
"cst_robotarm_original/Step6" ) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 } ,
{ 137 , TARGET_STRING ( "cst_robotarm_original/Step6" ) , TARGET_STRING (
"After" ) , 0 , 0 , 0 } , { 138 , TARGET_STRING (
"cst_robotarm_original/Controller/Break" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 139 , TARGET_STRING ( "cst_robotarm_original/Controller/Break1" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 140 , TARGET_STRING (
"cst_robotarm_original/Controller/Break2" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 141 , TARGET_STRING ( "cst_robotarm_original/Controller/Break3" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 142 , TARGET_STRING (
"cst_robotarm_original/Controller/Break4" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 143 , TARGET_STRING ( "cst_robotarm_original/Controller/Break5" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 144 , TARGET_STRING (
"cst_robotarm_original/Controller/Constant1" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 145 , TARGET_STRING (
"cst_robotarm_original/Controller/Signal Conditioning/IC" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 146 , TARGET_STRING (
"cst_robotarm_original/Controller/Signal Conditioning/Discrete Transfer Fcn"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 147 , TARGET_STRING (
"cst_robotarm_original/Controller/Signal Conditioning/Discrete Transfer Fcn1"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 148 , TARGET_STRING (
"cst_robotarm_original/Controller/Signal Conditioning/Discrete Transfer Fcn2"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 149 , TARGET_STRING (
"cst_robotarm_original/Controller/Signal Conditioning/Discrete Transfer Fcn3"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING (
"cst_robotarm_original/Controller/Signal Conditioning/Discrete Transfer Fcn4"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING (
"cst_robotarm_original/Controller/Signal Conditioning/Discrete Transfer Fcn5"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 152 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 153 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/[0...5]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 154 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/[0...5]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 155 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 156 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepCMD/[0...5] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 157 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 158 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Gain1" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 159 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Gain2" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 160 , TARGET_STRING (
"cst_robotarm_original/Controller/bicepPID/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 162 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Gain1" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 163 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Gain2" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 164 , TARGET_STRING (
"cst_robotarm_original/Controller/forearPID/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 165 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 166 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/[0...5]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 167 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/[0...5]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 168 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 169 , TARGET_STRING (
"cst_robotarm_original/Controller/forearmCMD/[0...5] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 170 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 171 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/[0...5]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 172 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/[0...5]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 173 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 174 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperCMD/[0...5] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 175 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 176 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 177 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 178 , TARGET_STRING (
"cst_robotarm_original/Controller/gripperPID/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 179 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 180 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/[0...5]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 181 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/[0...5]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 182 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 183 , TARGET_STRING (
"cst_robotarm_original/Controller/handCMD/[0...5] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 184 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 185 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Gain1" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 186 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Gain2" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 187 , TARGET_STRING (
"cst_robotarm_original/Controller/handPID/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 188 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 189 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/[0...5]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 190 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/[0...5]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 191 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 192 , TARGET_STRING (
"cst_robotarm_original/Controller/turntableCMD/[0...5] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 193 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 194 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 195 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 196 , TARGET_STRING (
"cst_robotarm_original/Controller/turntablePID/Integrator" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 197 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 198 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/[0...5]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 199 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/[0...5]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 200 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 201 , TARGET_STRING (
"cst_robotarm_original/Controller/wristCMD/[0...5] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 203 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Gain1" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Gain2" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
"cst_robotarm_original/Controller/wristPID/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 }
} ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 206 ,
TARGET_STRING ( "dFilt" ) , 0 , 6 , 0 } , { 207 , TARGET_STRING ( "nFilt" ) ,
0 , 6 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . dwxdtflowp , & rtB . gyd45yhrb0 ,
& rtB . hlvvjykzts , & rtB . lbmqmf13sh , & rtB . lxngnkv35z , & rtB .
a0dbecbscz , & rtB . ahmlb2tpsn , & rtB . lerd3i21nu , & rtB . fevlcvnz5r , &
rtB . mwza4ency5 , & rtB . kcogqti5lt , & rtB . miplivlyhr , & rtB .
gssxmsm1u4 , & rtB . gvzfoeok20 , & rtB . d30jnvmibe , & rtB . jad123dllm , &
rtB . pzzwd3lnfe , & rtB . ed0x1weluj , & rtB . hjapierqks , & rtB .
c5e4njud25 , & rtB . ek20cny3ez , & rtB . n0qv0hb2ss , & rtB . eua5qdpl0o , &
rtB . orrj54i1aj , & rtB . g2u01f0n1g , & rtB . nusef2vdyd , & rtB .
mjo0qmrl1w , & rtB . bbxkrfmvko , & rtB . fuycbxh103 , & rtB . icwlygycrj , &
rtB . gmoevf1lrx , & rtB . nhpl1zbtn1 , & rtB . ksi1jj2j2i , & rtB .
ksjphlyg4k , & rtB . okp4jvlpid , & rtB . mlg3v2vp41 , & rtB . juquj3cpm2 , &
rtB . bqsdzmrrnz , & rtB . m2b0x0ugtl , & rtB . apgokrv2pc , & rtB .
nc0gz0afr0 , & rtB . blkzncukfb , & rtB . kpvaut1f0z , & rtB . oopmuhnlga , &
rtB . grzgi3w44a , & rtB . i5sq4akk1c , & rtB . bvsjetcrto , & rtB .
k5pqt2ul41 , & rtB . gvve0qid0c , & rtB . dvaiasoovm , & rtB . n41mws5fmv , &
rtB . gq10553zct , & rtB . hcaj111zjs , & rtB . fnu1t3c25e , & rtB .
ndqjgxllq1 , & rtB . ew3qvg4htl , & rtB . mexhqthd1u , & rtB . beactzcnhg , &
rtB . iwabd3jvmn , & rtB . mgpqcthgau , & rtB . cmq4ia5e5i , & rtB .
fvblcfumvs , & rtB . i2btnrrmvd , & rtB . kiueaykv5e , & rtB . bj5rgp4q21 , &
rtB . drceecbam2 , & rtB . kbicccj23s , & rtB . lnwu3wlfhg , & rtB .
crn43in4pr , & rtB . lo0ojzlm13 , & rtB . igybt2peud , & rtB . pk4qwm0mut , &
rtB . c0jld3eln1 , & rtB . eppca1vjoc [ 0 ] , & rtB . ihc2fbedkz [ 0 ] , &
rtB . m5j42r4u0p [ 0 ] , & rtB . e5jutfqvzq [ 0 ] , & rtB . mz3s2zjmce [ 0 ]
, & rtB . d35bpuglcw [ 0 ] , & rtB . cqfxofdy2x [ 0 ] , & rtB . gsf1wnk0dh [
0 ] , & rtB . eho11whmzv [ 0 ] , & rtB . nwuia1pahi [ 0 ] , & rtB .
gl00bo33dy [ 0 ] , & rtB . o04jj02qiz [ 0 ] , & rtB . dqmw4fhx14 [ 0 ] , &
rtB . mqijg4lgem [ 0 ] , & rtB . ehret13uk4 [ 0 ] , & rtB . kkeqotz05a [ 0 ]
, & rtB . gh1rrww104 [ 0 ] , & rtB . malqpcsu2s [ 0 ] , & rtB . clmozh0gh4 [
0 ] , & rtB . oapizwvtjv [ 0 ] , & rtB . jen3dngjzc [ 0 ] , & rtB .
kfhppmeqms [ 0 ] , & rtB . b5fzixuwzk [ 0 ] , & rtB . mvicam42is [ 0 ] , &
rtB . ms1z3tsizg [ 0 ] , & rtB . hilglkudbg [ 0 ] , & rtB . fgvvgvfqb2 [ 0 ]
, & rtB . pb0sw1pbnm [ 0 ] , & rtB . aau4qscxqc [ 0 ] , & rtB . d4eu5sdm4t [
0 ] , & rtB . p52igst3gi [ 0 ] , & rtB . hb1gynnbug [ 0 ] , & rtB .
gktoanyk4z [ 0 ] , & rtB . aurpcbuhub , & rtB . hcffmyavz3 , & rtB .
opaiauq1gv , & rtB . mv2033hecj , & rtB . kurkqa5zwd , & rtB . gpydjo5krx [ 0
] , & rtB . amiwtetlxb , & rtB . ohur23ysum [ 0 ] , & rtB . ghf5k2qwns [ 0 ]
, & rtB . e3txp1wm1m [ 0 ] , & rtB . lbft5jvmo4 [ 0 ] , & rtB . awdmp3eigf [
0 ] , & rtB . m2jjwsrlbd [ 0 ] , & rtB . abgvchli2i [ 0 ] , & rtP .
Step1_Time , & rtP . Step1_Y0 , & rtP . Step1_YFinal , & rtP . Step2_Time , &
rtP . Step2_Y0 , & rtP . Step2_YFinal , & rtP . Step3_Time , & rtP . Step3_Y0
, & rtP . Step3_YFinal , & rtP . Step4_Time , & rtP . Step4_Y0 , & rtP .
Step4_YFinal , & rtP . Step5_Time , & rtP . Step5_Y0 , & rtP . Step5_YFinal ,
& rtP . Step6_Time , & rtP . Step6_Y0 , & rtP . Step6_YFinal , & rtP .
Break_Value , & rtP . Break1_Value , & rtP . Break2_Value , & rtP .
Break3_Value , & rtP . Break4_Value , & rtP . Break5_Value , & rtP .
Constant1_Value , & rtP . IC_Value , & rtP .
DiscreteTransferFcn_InitialStates , & rtP .
DiscreteTransferFcn1_InitialStates , & rtP .
DiscreteTransferFcn2_InitialStates , & rtP .
DiscreteTransferFcn3_InitialStates , & rtP .
DiscreteTransferFcn4_InitialStates , & rtP .
DiscreteTransferFcn5_InitialStates , & rtP . Gain_Gain_g2liatxyxw , & rtP .
u5_UpperSat_ayphnxvhak , & rtP . u5_LowerSat_ikcgllyxwz , & rtP .
u5_UpperSat_ddogfqhdjr , & rtP . u5_LowerSat_gld50iakmn , & rtP .
Gain_Gain_jbpo1nzc5b , & rtP . Gain1_Gain_kzkifunu2y , & rtP .
Gain2_Gain_cehduakigf , & rtP . Integrator_IC_ly0dldeo0z , & rtP .
Gain_Gain_bw45xj3upi , & rtP . Gain1_Gain_eje3bhamkx , & rtP .
Gain2_Gain_murtnwudat , & rtP . Integrator_IC_ebg1cxvyio , & rtP .
Gain_Gain_i4wlhlbj0o , & rtP . u5_UpperSat_jmie0uoskq , & rtP .
u5_LowerSat_frye4kwxrv , & rtP . u5_UpperSat_ilmzmabkef , & rtP .
u5_LowerSat_i23udsynjx , & rtP . Gain_Gain_f23n0pwvi0 , & rtP .
u5_UpperSat_iylwacoy4o , & rtP . u5_LowerSat_er1s3ovlcm , & rtP .
u5_UpperSat_jkdd0lirs0 , & rtP . u5_LowerSat_aqz04ismnb , & rtP .
Gain_Gain_fvfj1aitcg , & rtP . Gain1_Gain_am5x3mjqzc , & rtP .
Gain2_Gain_it3d3zrzjv , & rtP . Integrator_IC_llwx032bli , & rtP .
Gain_Gain_flo45vukkm , & rtP . u5_UpperSat_cb5dw4uucg , & rtP .
u5_LowerSat_m5m10l40lw , & rtP . u5_UpperSat_jbj1vhkzdu , & rtP .
u5_LowerSat_ogs21iohyx , & rtP . Gain_Gain_jkhmhhcb4y , & rtP .
Gain1_Gain_d1yaneumk3 , & rtP . Gain2_Gain_b1hf4hkty0 , & rtP .
Integrator_IC_l0arfvqiva , & rtP . Gain_Gain_jnwrxmpd2y , & rtP . u5_UpperSat
, & rtP . u5_LowerSat , & rtP . u5_UpperSat_bbllqa54th , & rtP .
u5_LowerSat_kcwxpitudz , & rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP .
Gain2_Gain , & rtP . Integrator_IC , & rtP . Gain_Gain_apzpwd2lcp , & rtP .
u5_UpperSat_hpv1lydza3 , & rtP . u5_LowerSat_aj1ncwmb4v , & rtP .
u5_UpperSat_bxht0cl33x , & rtP . u5_LowerSat_lva0v3mt5c , & rtP .
Gain_Gain_oktz1catcm , & rtP . Gain1_Gain_mqf5zikroh , & rtP .
Gain2_Gain_c3ooikad3b , & rtP . Integrator_IC_a0g2shfbse , & rtP . dFilt [ 0
] , & rtP . nFilt [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
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
real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 }
, } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [
1 ] , 2 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void
* ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } }
; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 120
, ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 86 ,
rtModelParameters , 2 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 2698101852U , 2922316287U , 2587534183U , 710481660U } , ( NULL ) , 0 , 0
} ; const rtwCAPI_ModelMappingStaticInfo *
cst_robotarm_original_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void cst_robotarm_original_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void cst_robotarm_original_host_InitializeDataMapInfo (
cst_robotarm_original_host_DataMapInfo_T * dataMap , const char * path ) {
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
