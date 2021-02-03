#include "__cf_closedLoop_tuned.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "closedLoop_tuned_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "closedLoop_tuned.h"
#include "closedLoop_tuned_capi.h"
#include "closedLoop_tuned_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 6 , 0 } , { "upperArmJointMotion" , 0 , - 1 } , { "foreArmJointMotion" , 0
, - 1 } , { "wristJointMotion" , 0 , - 1 } , { "gripperJointMotion" , 0 , - 1
} , { "rightFingerJointMotion" , 0 , - 1 } , { "leftFingerJointMotion" , 0 ,
- 1 } , { "" , 6 , 6 } } ; static const uint_T rtSigHierLoggingChildIdxs [ ]
= { 1 , 2 , 3 , 4 , 5 , 6 , 1 , 2 , 3 , 4 , 5 , 6 } ; static rtwCAPI_Signals
rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } }
; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 , 30 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_352542832_0"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 3 , 31 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_352542832_1"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 4 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 5 , - 1 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 6 , 32 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1386420896_0"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 7 , 33 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1386420896_1"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 8 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 9 , - 1 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 10 , 34 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1875063568_0"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 11 , 35 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_1875063568_1"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 12 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 13 , - 1 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 14 , 36 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3722702592_0"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 15 , 37 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3722702592_1"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 16 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 17 , - 1 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 18 , 38 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3766732464_0"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 19 , 39 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_3766732464_1"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 20 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 21 , - 1 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 22 , 40 ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_2804137056_0"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 23 , 41 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Simulink_PS_Converter.outputFiltered_2804137056_1"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 24 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 25 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 26 , 28
, TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1"
) , TARGET_STRING ( "closedLoop_tuned.outputFiltered_2245668774_0" ) ,
TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Solver\nConfiguration" ) , 0 ,
0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 27 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_11_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 28 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 29 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 30 , 29
, TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_12_1_1"
) , TARGET_STRING ( "closedLoop_tuned.outputFiltered_4279925958_0" ) ,
TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Solver\nConfiguration" ) , 0 ,
0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 31 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_1_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 32 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 33 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 34 , 24
, TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "closedLoop_tuned.outputFiltered_2294747066_0" ) ,
TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Solver\nConfiguration" ) , 0 ,
0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 35 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 36 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 37 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 38 , 25
, TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "closedLoop_tuned.outputFiltered_126351898_0" ) ,
TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Solver\nConfiguration" ) , 0 ,
0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 39 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_5_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 40 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 41 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 42 , 26
, TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "closedLoop_tuned.outputFiltered_2101848442_0" ) ,
TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Solver\nConfiguration" ) , 0 ,
0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 43 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_7_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 44 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 45 , -
1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 46 , 27
, TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1"
) , TARGET_STRING ( "closedLoop_tuned.outputFiltered_3262584603_0" ) ,
TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Solver\nConfiguration" ) , 0 ,
0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 47 , - 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/INTERNAL_9_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 48 , 0
, TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.Rz.q"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 49 , 1 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.Rz.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 50 , 2 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.q"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 51 , 3 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 52 , 4 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.Rz.q"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 53 , 5 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.Rz.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 54 , 6 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.q"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 55 , 7 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 56 , 8 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "closedLoop_tuned.Plant.Robot.Gripper.Left_Revolute_A.Rz.q" )
, TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Gripper/Left Revolute A" ) ,
0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 57 , 9 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "closedLoop_tuned.Plant.Robot.Gripper.Left_Revolute_A.Rz.w" )
, TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Gripper/Left Revolute A" ) ,
0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 58 , 10 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
"closedLoop_tuned.Plant.Robot.Gripper.Left_Finger_Revolute_A.Rz.q" ) ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Gripper/Left Finger Revolute  A" ) , 0 , 0 , 1
, 0 , 0 , 1 , - 1 , 0 } , { 59 , 11 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
"closedLoop_tuned.Plant.Robot.Gripper.Left_Finger_Revolute_A.Rz.w" ) ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Gripper/Left Finger Revolute  A" ) , 0 , 0 , 1
, 0 , 0 , 1 , - 1 , 0 } , { 60 , 12 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.q"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 61 , 13 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 62 , 14 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "closedLoop_tuned.Plant.Robot.Gripper.Right_Revolute_A.Rz.q"
) , TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Gripper/Right Revolute A" )
, 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 63 , 15 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "closedLoop_tuned.Plant.Robot.Gripper.Right_Revolute_A.Rz.w"
) , TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Gripper/Right Revolute A" )
, 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 64 , 16 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
"closedLoop_tuned.Plant.Robot.Gripper.Right_Finger_Revolute_A.Rz.q" ) ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Gripper/Right Finger Revolute A" ) , 0 , 0 , 1
, 0 , 0 , 1 , - 1 , 0 } , { 65 , 17 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
"closedLoop_tuned.Plant.Robot.Gripper.Right_Finger_Revolute_A.Rz.w" ) ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Gripper/Right Finger Revolute A" ) , 0 , 0 , 1
, 0 , 0 , 1 , - 1 , 0 } , { 66 , 18 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.q"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 67 , 19 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 68 , 20 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
"closedLoop_tuned.Plant.Robot.Gripper.Left_Finger_Revolute_B.Rz.q" ) ,
TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Gripper/Left Finger Revolute B"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 69 , 21 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
"closedLoop_tuned.Plant.Robot.Gripper.Left_Finger_Revolute_B.Rz.w" ) ,
TARGET_STRING ( "closedLoop_tuned/Plant/Robot/Gripper/Left Finger Revolute B"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 70 , 22 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
"closedLoop_tuned.Plant.Robot.Gripper.Right_Finger_Revolute_B.Rz.q" ) ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Gripper/Right Finger Revolute B" ) , 0 , 0 , 1
, 0 , 0 , 1 , - 1 , 0 } , { 71 , 23 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING (
"closedLoop_tuned.Plant.Robot.Gripper.Right_Finger_Revolute_B.Rz.w" ) ,
TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Gripper/Right Finger Revolute B" ) , 0 , 0 , 1
, 0 , 0 , 1 , - 1 , 0 } , { 72 , 42 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 73 , 43 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 74 , 44 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 75 , 45 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 76 , 46 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 77 , 47 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.private.w"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 78 , 48 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 79 , 49 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 80 , 50 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 81 , 51 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 82 , 52 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 83 , 53 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_ref"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 84 , 54 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 85 , 55 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 86 , 56 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 87 , 57 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 88 , 58 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 89 , 59 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.i"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 90 , 60 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 91 , 61 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 92 , 62 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Rot2Rev.Ideal_Angular_Velocity_Source.t"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position/Rot2Rev/Ideal Angular Velocity Source"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 93 , 63 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Rot2Rev.Ideal_Angular_Velocity_Source.t"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position1/Rot2Rev/Ideal Angular Velocity Source"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 94 , 64 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Rot2Rev.Ideal_Angular_Velocity_Source.t"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position2/Rot2Rev/Ideal Angular Velocity Source"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 95 , 65 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Rot2Rev.Ideal_Angular_Velocity_Source.t"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Robot/Torque Actuated Revolute Joint with Position3/Rot2Rev/Ideal Angular Velocity Source"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 96 , 66 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Fore_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 97 , 67 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Gripper_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 98 , 68 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Left_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 99 , 69 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Right_Finger_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 100 , 70 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Upper_Arm_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 101 , 71 , TARGET_STRING (
"closedLoop_tuned/Plant/Robot/Solver\nConfiguration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING (
 "closedLoop_tuned.Plant.Servomotors.Wrist_Servomotor.Uncontrolled_Servomotor.Servomotor.torque_elec"
) , TARGET_STRING (
 "closedLoop_tuned/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/Servomotor"
) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 102 , - 1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 103 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 104 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 105 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 106 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 107 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 108 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 109 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 110 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 111 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 112 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 113 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 114 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 115 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 116 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 117 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 118 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 119 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 120 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/filter/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 121 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/filter1/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 122 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/filter2/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 123 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/filter3/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 124 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/filter4/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 125 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Position Controller/filter5/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 126 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/filter/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 127 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/filter1/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 128 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/filter2/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 129 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/filter3/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 130 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/filter4/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 131 , -
1 , TARGET_STRING (
 "closedLoop_tuned/Controller/Servomotor Speed Controller/filter5/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void closedLoop_tuned_InitializeDataAddr ( void * dataAddr [ ] ,
pu40142whda * localX ) { dataAddr [ 0 ] = ( void * ) ( & d1slopnfj2d .
mfarqvu45m ) ; dataAddr [ 1 ] = ( void * ) ( & d1slopnfj2d . hylr2w3yna ) ;
dataAddr [ 2 ] = ( void * ) ( & localX -> bpmqwncjfj [ 0 ] ) ; dataAddr [ 3 ]
= ( void * ) ( & localX -> bpmqwncjfj [ 1 ] ) ; dataAddr [ 4 ] = ( void * ) (
& d1slopnfj2d . jrb1kz3zlg ) ; dataAddr [ 5 ] = ( void * ) ( & d1slopnfj2d .
fpo5oixhup ) ; dataAddr [ 6 ] = ( void * ) ( & localX -> nvdqtjs5r2 [ 0 ] ) ;
dataAddr [ 7 ] = ( void * ) ( & localX -> nvdqtjs5r2 [ 1 ] ) ; dataAddr [ 8 ]
= ( void * ) ( & d1slopnfj2d . koqgz4rjix ) ; dataAddr [ 9 ] = ( void * ) ( &
d1slopnfj2d . mymypzqmu0 ) ; dataAddr [ 10 ] = ( void * ) ( & localX ->
or3kmp553n [ 0 ] ) ; dataAddr [ 11 ] = ( void * ) ( & localX -> or3kmp553n [
1 ] ) ; dataAddr [ 12 ] = ( void * ) ( & d1slopnfj2d . d00cvtrow5 ) ;
dataAddr [ 13 ] = ( void * ) ( & d1slopnfj2d . iioyhpmu2z ) ; dataAddr [ 14 ]
= ( void * ) ( & localX -> aij4dkucqh [ 0 ] ) ; dataAddr [ 15 ] = ( void * )
( & localX -> aij4dkucqh [ 1 ] ) ; dataAddr [ 16 ] = ( void * ) ( &
d1slopnfj2d . d2ihml4pca ) ; dataAddr [ 17 ] = ( void * ) ( & d1slopnfj2d .
ohubyvobgd ) ; dataAddr [ 18 ] = ( void * ) ( & localX -> fpzb5mu1i2 [ 0 ] )
; dataAddr [ 19 ] = ( void * ) ( & localX -> fpzb5mu1i2 [ 1 ] ) ; dataAddr [
20 ] = ( void * ) ( & d1slopnfj2d . psdk3h03r4 ) ; dataAddr [ 21 ] = ( void *
) ( & d1slopnfj2d . pojlpslfax ) ; dataAddr [ 22 ] = ( void * ) ( & localX ->
mctmaipokl [ 0 ] ) ; dataAddr [ 23 ] = ( void * ) ( & localX -> mctmaipokl [
1 ] ) ; dataAddr [ 24 ] = ( void * ) ( & d1slopnfj2d . fljztst5wo ) ;
dataAddr [ 25 ] = ( void * ) ( & d1slopnfj2d . muit3a3q1x ) ; dataAddr [ 26 ]
= ( void * ) ( & localX -> gm135svjp2 ) ; dataAddr [ 27 ] = ( void * ) ( &
d1slopnfj2d . d1gzuqoj4q [ 0 ] ) ; dataAddr [ 28 ] = ( void * ) ( &
d1slopnfj2d . fyyyxyhfe2 ) ; dataAddr [ 29 ] = ( void * ) ( & d1slopnfj2d .
luoxgto34c ) ; dataAddr [ 30 ] = ( void * ) ( & localX -> nm2azj1trc ) ;
dataAddr [ 31 ] = ( void * ) ( & d1slopnfj2d . cmjntkjs5o [ 0 ] ) ; dataAddr
[ 32 ] = ( void * ) ( & d1slopnfj2d . owjdrnlrr5 ) ; dataAddr [ 33 ] = ( void
* ) ( & d1slopnfj2d . kt4uicyvx0 ) ; dataAddr [ 34 ] = ( void * ) ( & localX
-> nanyzdwn3h ) ; dataAddr [ 35 ] = ( void * ) ( & d1slopnfj2d . dwblx5h40t [
0 ] ) ; dataAddr [ 36 ] = ( void * ) ( & d1slopnfj2d . lsxjomeomv ) ;
dataAddr [ 37 ] = ( void * ) ( & d1slopnfj2d . kyfvye0kyh ) ; dataAddr [ 38 ]
= ( void * ) ( & localX -> fvut32tit4 ) ; dataAddr [ 39 ] = ( void * ) ( &
d1slopnfj2d . a4oaoqzmvb [ 0 ] ) ; dataAddr [ 40 ] = ( void * ) ( &
d1slopnfj2d . k5tezogtje ) ; dataAddr [ 41 ] = ( void * ) ( & d1slopnfj2d .
mtrpzv3ygn ) ; dataAddr [ 42 ] = ( void * ) ( & localX -> nu35g5ezne ) ;
dataAddr [ 43 ] = ( void * ) ( & d1slopnfj2d . f2edgntbzl [ 0 ] ) ; dataAddr
[ 44 ] = ( void * ) ( & d1slopnfj2d . c33z0kxz40 ) ; dataAddr [ 45 ] = ( void
* ) ( & d1slopnfj2d . czvkwuyek1 ) ; dataAddr [ 46 ] = ( void * ) ( & localX
-> n3zqzpztbu ) ; dataAddr [ 47 ] = ( void * ) ( & d1slopnfj2d . ml04raex0s [
0 ] ) ; dataAddr [ 48 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 0 ] ) ;
dataAddr [ 49 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 1 ] ) ; dataAddr [ 50
] = ( void * ) ( & localX -> lk3sdnwlk1 [ 2 ] ) ; dataAddr [ 51 ] = ( void *
) ( & localX -> lk3sdnwlk1 [ 3 ] ) ; dataAddr [ 52 ] = ( void * ) ( & localX
-> lk3sdnwlk1 [ 4 ] ) ; dataAddr [ 53 ] = ( void * ) ( & localX -> lk3sdnwlk1
[ 5 ] ) ; dataAddr [ 54 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 6 ] ) ;
dataAddr [ 55 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 7 ] ) ; dataAddr [ 56
] = ( void * ) ( & localX -> lk3sdnwlk1 [ 8 ] ) ; dataAddr [ 57 ] = ( void *
) ( & localX -> lk3sdnwlk1 [ 9 ] ) ; dataAddr [ 58 ] = ( void * ) ( & localX
-> lk3sdnwlk1 [ 10 ] ) ; dataAddr [ 59 ] = ( void * ) ( & localX ->
lk3sdnwlk1 [ 11 ] ) ; dataAddr [ 60 ] = ( void * ) ( & localX -> lk3sdnwlk1 [
12 ] ) ; dataAddr [ 61 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 13 ] ) ;
dataAddr [ 62 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 14 ] ) ; dataAddr [
63 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 15 ] ) ; dataAddr [ 64 ] = (
void * ) ( & localX -> lk3sdnwlk1 [ 16 ] ) ; dataAddr [ 65 ] = ( void * ) ( &
localX -> lk3sdnwlk1 [ 17 ] ) ; dataAddr [ 66 ] = ( void * ) ( & localX ->
lk3sdnwlk1 [ 18 ] ) ; dataAddr [ 67 ] = ( void * ) ( & localX -> lk3sdnwlk1 [
19 ] ) ; dataAddr [ 68 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 20 ] ) ;
dataAddr [ 69 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 21 ] ) ; dataAddr [
70 ] = ( void * ) ( & localX -> lk3sdnwlk1 [ 22 ] ) ; dataAddr [ 71 ] = (
void * ) ( & localX -> lk3sdnwlk1 [ 23 ] ) ; dataAddr [ 72 ] = ( void * ) ( &
localX -> kgvozz1pdk [ 0 ] ) ; dataAddr [ 73 ] = ( void * ) ( & localX ->
kgvozz1pdk [ 1 ] ) ; dataAddr [ 74 ] = ( void * ) ( & localX -> kgvozz1pdk [
2 ] ) ; dataAddr [ 75 ] = ( void * ) ( & localX -> kgvozz1pdk [ 3 ] ) ;
dataAddr [ 76 ] = ( void * ) ( & localX -> kgvozz1pdk [ 4 ] ) ; dataAddr [ 77
] = ( void * ) ( & localX -> kgvozz1pdk [ 5 ] ) ; dataAddr [ 78 ] = ( void *
) ( & localX -> kgvozz1pdk [ 6 ] ) ; dataAddr [ 79 ] = ( void * ) ( & localX
-> kgvozz1pdk [ 7 ] ) ; dataAddr [ 80 ] = ( void * ) ( & localX -> kgvozz1pdk
[ 8 ] ) ; dataAddr [ 81 ] = ( void * ) ( & localX -> kgvozz1pdk [ 9 ] ) ;
dataAddr [ 82 ] = ( void * ) ( & localX -> kgvozz1pdk [ 10 ] ) ; dataAddr [
83 ] = ( void * ) ( & localX -> kgvozz1pdk [ 11 ] ) ; dataAddr [ 84 ] = (
void * ) ( & localX -> kgvozz1pdk [ 12 ] ) ; dataAddr [ 85 ] = ( void * ) ( &
localX -> kgvozz1pdk [ 13 ] ) ; dataAddr [ 86 ] = ( void * ) ( & localX ->
kgvozz1pdk [ 14 ] ) ; dataAddr [ 87 ] = ( void * ) ( & localX -> kgvozz1pdk [
15 ] ) ; dataAddr [ 88 ] = ( void * ) ( & localX -> kgvozz1pdk [ 16 ] ) ;
dataAddr [ 89 ] = ( void * ) ( & localX -> kgvozz1pdk [ 17 ] ) ; dataAddr [
90 ] = ( void * ) ( & localX -> kgvozz1pdk [ 18 ] ) ; dataAddr [ 91 ] = (
void * ) ( & localX -> kgvozz1pdk [ 19 ] ) ; dataAddr [ 92 ] = ( void * ) ( &
localX -> kgvozz1pdk [ 20 ] ) ; dataAddr [ 93 ] = ( void * ) ( & localX ->
kgvozz1pdk [ 21 ] ) ; dataAddr [ 94 ] = ( void * ) ( & localX -> kgvozz1pdk [
22 ] ) ; dataAddr [ 95 ] = ( void * ) ( & localX -> kgvozz1pdk [ 23 ] ) ;
dataAddr [ 96 ] = ( void * ) ( & localX -> kgvozz1pdk [ 24 ] ) ; dataAddr [
97 ] = ( void * ) ( & localX -> kgvozz1pdk [ 25 ] ) ; dataAddr [ 98 ] = (
void * ) ( & localX -> kgvozz1pdk [ 26 ] ) ; dataAddr [ 99 ] = ( void * ) ( &
localX -> kgvozz1pdk [ 27 ] ) ; dataAddr [ 100 ] = ( void * ) ( & localX ->
kgvozz1pdk [ 28 ] ) ; dataAddr [ 101 ] = ( void * ) ( & localX -> kgvozz1pdk
[ 29 ] ) ; dataAddr [ 102 ] = ( void * ) ( & d1slopnfj2d . itkowzvhmy ) ;
dataAddr [ 103 ] = ( void * ) ( & d1slopnfj2d . e1nkcmfeef ) ; dataAddr [ 104
] = ( void * ) ( & d1slopnfj2d . dlusidt5mu ) ; dataAddr [ 105 ] = ( void * )
( & d1slopnfj2d . martnwreej ) ; dataAddr [ 106 ] = ( void * ) ( &
d1slopnfj2d . msarqtw0ej ) ; dataAddr [ 107 ] = ( void * ) ( & d1slopnfj2d .
ejngdjwvuh ) ; dataAddr [ 108 ] = ( void * ) ( & d1slopnfj2d . gohohcrj54 ) ;
dataAddr [ 109 ] = ( void * ) ( & d1slopnfj2d . lnboystaxq ) ; dataAddr [ 110
] = ( void * ) ( & d1slopnfj2d . jlvuwqbqtq ) ; dataAddr [ 111 ] = ( void * )
( & d1slopnfj2d . mdyqmzjrn0 ) ; dataAddr [ 112 ] = ( void * ) ( &
d1slopnfj2d . im3cksdclx ) ; dataAddr [ 113 ] = ( void * ) ( & d1slopnfj2d .
eat1taflmt ) ; dataAddr [ 114 ] = ( void * ) ( & d1slopnfj2d . lqn4y02ryj ) ;
dataAddr [ 115 ] = ( void * ) ( & d1slopnfj2d . lbcqusxymb ) ; dataAddr [ 116
] = ( void * ) ( & d1slopnfj2d . jhkfvfo11l ) ; dataAddr [ 117 ] = ( void * )
( & d1slopnfj2d . nx1wrktxq2 ) ; dataAddr [ 118 ] = ( void * ) ( &
d1slopnfj2d . a5avu4h2ix ) ; dataAddr [ 119 ] = ( void * ) ( & d1slopnfj2d .
hmmcsmj0xw ) ; dataAddr [ 120 ] = ( void * ) ( & d1slopnfj2d . h2azwddpsi ) ;
dataAddr [ 121 ] = ( void * ) ( & d1slopnfj2d . axiqwbld0q ) ; dataAddr [ 122
] = ( void * ) ( & d1slopnfj2d . dztpawf31l ) ; dataAddr [ 123 ] = ( void * )
( & d1slopnfj2d . kva2ijsjip ) ; dataAddr [ 124 ] = ( void * ) ( &
d1slopnfj2d . eicckovdtk ) ; dataAddr [ 125 ] = ( void * ) ( & d1slopnfj2d .
akyzgxh1sj ) ; dataAddr [ 126 ] = ( void * ) ( & d1slopnfj2d . aqhbkipuc1 ) ;
dataAddr [ 127 ] = ( void * ) ( & d1slopnfj2d . ftka134rfi ) ; dataAddr [ 128
] = ( void * ) ( & d1slopnfj2d . kc4smoweoa ) ; dataAddr [ 129 ] = ( void * )
( & d1slopnfj2d . mibsc4a2kt ) ; dataAddr [ 130 ] = ( void * ) ( &
d1slopnfj2d . lau0kxrr3b ) ; dataAddr [ 131 ] = ( void * ) ( & d1slopnfj2d .
ap5cqbvm1g ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void closedLoop_tuned_InitializeVarDimsAddr ( int32_T * vardimsAddr [
] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void closedLoop_tuned_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; loggingPtrs [ 15 ] = ( NULL ) ; loggingPtrs [
16 ] = ( NULL ) ; loggingPtrs [ 17 ] = ( NULL ) ; loggingPtrs [ 18 ] = ( NULL
) ; loggingPtrs [ 19 ] = ( NULL ) ; loggingPtrs [ 20 ] = ( NULL ) ;
loggingPtrs [ 21 ] = ( NULL ) ; loggingPtrs [ 22 ] = ( NULL ) ; loggingPtrs [
23 ] = ( NULL ) ; loggingPtrs [ 24 ] = ( NULL ) ; loggingPtrs [ 25 ] = ( NULL
) ; loggingPtrs [ 26 ] = ( NULL ) ; loggingPtrs [ 27 ] = ( NULL ) ;
loggingPtrs [ 28 ] = ( NULL ) ; loggingPtrs [ 29 ] = ( NULL ) ; loggingPtrs [
30 ] = ( NULL ) ; loggingPtrs [ 31 ] = ( NULL ) ; loggingPtrs [ 32 ] = ( NULL
) ; loggingPtrs [ 33 ] = ( NULL ) ; loggingPtrs [ 34 ] = ( NULL ) ;
loggingPtrs [ 35 ] = ( NULL ) ; loggingPtrs [ 36 ] = ( NULL ) ; loggingPtrs [
37 ] = ( NULL ) ; loggingPtrs [ 38 ] = ( NULL ) ; loggingPtrs [ 39 ] = ( NULL
) ; loggingPtrs [ 40 ] = ( NULL ) ; loggingPtrs [ 41 ] = ( NULL ) ;
loggingPtrs [ 42 ] = ( NULL ) ; loggingPtrs [ 43 ] = ( NULL ) ; loggingPtrs [
44 ] = ( NULL ) ; loggingPtrs [ 45 ] = ( NULL ) ; loggingPtrs [ 46 ] = ( NULL
) ; loggingPtrs [ 47 ] = ( NULL ) ; loggingPtrs [ 48 ] = ( NULL ) ;
loggingPtrs [ 49 ] = ( NULL ) ; loggingPtrs [ 50 ] = ( NULL ) ; loggingPtrs [
51 ] = ( NULL ) ; loggingPtrs [ 52 ] = ( NULL ) ; loggingPtrs [ 53 ] = ( NULL
) ; loggingPtrs [ 54 ] = ( NULL ) ; loggingPtrs [ 55 ] = ( NULL ) ;
loggingPtrs [ 56 ] = ( NULL ) ; loggingPtrs [ 57 ] = ( NULL ) ; loggingPtrs [
58 ] = ( NULL ) ; loggingPtrs [ 59 ] = ( NULL ) ; loggingPtrs [ 60 ] = ( NULL
) ; loggingPtrs [ 61 ] = ( NULL ) ; loggingPtrs [ 62 ] = ( NULL ) ;
loggingPtrs [ 63 ] = ( NULL ) ; loggingPtrs [ 64 ] = ( NULL ) ; loggingPtrs [
65 ] = ( NULL ) ; loggingPtrs [ 66 ] = ( NULL ) ; loggingPtrs [ 67 ] = ( NULL
) ; loggingPtrs [ 68 ] = ( NULL ) ; loggingPtrs [ 69 ] = ( NULL ) ;
loggingPtrs [ 70 ] = ( NULL ) ; loggingPtrs [ 71 ] = ( NULL ) ; loggingPtrs [
72 ] = ( NULL ) ; loggingPtrs [ 73 ] = ( NULL ) ; loggingPtrs [ 74 ] = ( NULL
) ; loggingPtrs [ 75 ] = ( NULL ) ; loggingPtrs [ 76 ] = ( NULL ) ;
loggingPtrs [ 77 ] = ( NULL ) ; loggingPtrs [ 78 ] = ( NULL ) ; loggingPtrs [
79 ] = ( NULL ) ; loggingPtrs [ 80 ] = ( NULL ) ; loggingPtrs [ 81 ] = ( NULL
) ; loggingPtrs [ 82 ] = ( NULL ) ; loggingPtrs [ 83 ] = ( NULL ) ;
loggingPtrs [ 84 ] = ( NULL ) ; loggingPtrs [ 85 ] = ( NULL ) ; loggingPtrs [
86 ] = ( NULL ) ; loggingPtrs [ 87 ] = ( NULL ) ; loggingPtrs [ 88 ] = ( NULL
) ; loggingPtrs [ 89 ] = ( NULL ) ; loggingPtrs [ 90 ] = ( NULL ) ;
loggingPtrs [ 91 ] = ( NULL ) ; loggingPtrs [ 92 ] = ( NULL ) ; loggingPtrs [
93 ] = ( NULL ) ; loggingPtrs [ 94 ] = ( NULL ) ; loggingPtrs [ 95 ] = ( NULL
) ; loggingPtrs [ 96 ] = ( NULL ) ; loggingPtrs [ 97 ] = ( NULL ) ;
loggingPtrs [ 98 ] = ( NULL ) ; loggingPtrs [ 99 ] = ( NULL ) ; loggingPtrs [
100 ] = ( NULL ) ; loggingPtrs [ 101 ] = ( NULL ) ; loggingPtrs [ 102 ] = (
NULL ) ; loggingPtrs [ 103 ] = ( NULL ) ; loggingPtrs [ 104 ] = ( NULL ) ;
loggingPtrs [ 105 ] = ( NULL ) ; loggingPtrs [ 106 ] = ( NULL ) ; loggingPtrs
[ 107 ] = ( NULL ) ; loggingPtrs [ 108 ] = ( NULL ) ; loggingPtrs [ 109 ] = (
NULL ) ; loggingPtrs [ 110 ] = ( NULL ) ; loggingPtrs [ 111 ] = ( NULL ) ;
loggingPtrs [ 112 ] = ( NULL ) ; loggingPtrs [ 113 ] = ( NULL ) ; loggingPtrs
[ 114 ] = ( NULL ) ; loggingPtrs [ 115 ] = ( NULL ) ; loggingPtrs [ 116 ] = (
NULL ) ; loggingPtrs [ 117 ] = ( NULL ) ; loggingPtrs [ 118 ] = ( NULL ) ;
loggingPtrs [ 119 ] = ( NULL ) ; loggingPtrs [ 120 ] = ( NULL ) ; loggingPtrs
[ 121 ] = ( NULL ) ; loggingPtrs [ 122 ] = ( NULL ) ; loggingPtrs [ 123 ] = (
NULL ) ; loggingPtrs [ 124 ] = ( NULL ) ; loggingPtrs [ 125 ] = ( NULL ) ;
loggingPtrs [ 126 ] = ( NULL ) ; loggingPtrs [ 127 ] = ( NULL ) ; loggingPtrs
[ 128 ] = ( NULL ) ; loggingPtrs [ 129 ] = ( NULL ) ; loggingPtrs [ 130 ] = (
NULL ) ; loggingPtrs [ 131 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 0 , 2 , 0 } , {
rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
, 2 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 0.0025 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 1 ,
0 } } ; static int_T rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , NULL , { 8 , rtSigHierLoggingInfo ,
rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates ,
132 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 197682579U , 4144230373U ,
665494689U , 3132277158U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * closedLoop_tuned_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void closedLoop_tuned_InitializeSystemRan ( nbzsdh3gog * const
hfoeutytij , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( hfoeutytij ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemTid [ 1 ] = lsbnhudl31 [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void closedLoop_tuned_InitializeDataMapInfo ( nbzsdh3gog * const hfoeutytij ,
pu40142whda * localX , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( hfoeutytij -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( hfoeutytij -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( hfoeutytij -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; closedLoop_tuned_InitializeDataAddr ( hfoeutytij ->
DataMapInfo . dataAddress , localX ) ; rtwCAPI_SetDataAddressMap ( hfoeutytij
-> DataMapInfo . mmi , hfoeutytij -> DataMapInfo . dataAddress ) ;
closedLoop_tuned_InitializeVarDimsAddr ( hfoeutytij -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( hfoeutytij -> DataMapInfo .
mmi , hfoeutytij -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
hfoeutytij -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
hfoeutytij -> DataMapInfo . mmi , ( NULL ) ) ;
closedLoop_tuned_InitializeLoggingFunctions ( hfoeutytij -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( hfoeutytij -> DataMapInfo . mmi ,
hfoeutytij -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
hfoeutytij -> DataMapInfo . mmi , & hfoeutytij -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( hfoeutytij -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( hfoeutytij -> DataMapInfo .
mmi , 0 ) ; closedLoop_tuned_InitializeSystemRan ( hfoeutytij , hfoeutytij ->
DataMapInfo . systemRan , hfoeutytij -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( hfoeutytij -> DataMapInfo . mmi ,
hfoeutytij -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( hfoeutytij
-> DataMapInfo . mmi , hfoeutytij -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( hfoeutytij -> DataMapInfo . mmi , & lsbnhudl31 [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void closedLoop_tuned_host_InitializeDataMapInfo (
closedLoop_tuned_host_DataMapInfo_T * dataMap , const char * path ) {
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
