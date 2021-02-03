#include "__cf_closedLoop_visual.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "closedLoop_visual_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "closedLoop_visual.h"
#include "closedLoop_visual_capi.h"
#include "closedLoop_visual_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition1" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition10" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition11" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition12" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition13" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition14" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition15" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition16" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition17" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition3" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition4" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition5" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition6" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition7" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition8" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionIn/Rate Transition9" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionOut/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionOut/Zero-Order Hold1" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionOut/Zero-Order Hold2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionOut/Zero-Order Hold3" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionOut/Zero-Order Hold4" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"closedLoop_visual/RateTransitionOut/Zero-Order Hold5" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"closedLoop_visual/Trajectories/FromWs" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 1 } , { 25 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain10" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain12" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain13" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain15" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain16" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain9" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Gain" ) , TARGET_STRING ( "UAq" ) , 0 , 0 , 0
, 0 , 1 } , { 38 , 0 , TARGET_STRING ( "closedLoop_visual/Plant/Robot/Gain1"
) , TARGET_STRING ( "FAq" ) , 0 , 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING
( "closedLoop_visual/Plant/Robot/Gain2" ) , TARGET_STRING ( "WAq" ) , 0 , 0 ,
0 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Gain3" ) , TARGET_STRING ( "GAq" ) , 0 , 0 , 0
, 0 , 1 } , { 41 , 0 , TARGET_STRING ( "closedLoop_visual/Plant/Robot/Gain4"
) , TARGET_STRING ( "RFAq" ) , 0 , 0 , 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING
( "closedLoop_visual/Plant/Robot/Gain5" ) , TARGET_STRING ( "LFAq" ) , 0 , 0
, 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain" ) , TARGET_STRING ( "UMw" ) , 0 ,
0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain1" ) , TARGET_STRING ( "FMw" ) , 0 ,
0 , 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain11" ) , TARGET_STRING ( "GMw" ) , 0
, 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain14" ) , TARGET_STRING ( "RFMw" ) , 0
, 0 , 0 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain17" ) , TARGET_STRING ( "LFMw" ) , 0
, 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain8" ) , TARGET_STRING ( "WMw" ) , 0 ,
0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 98 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter1/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 99 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter10/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 100 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter11/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 101 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter2/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 102 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter3/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 103 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter4/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 104 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter5/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 105 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter6/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 106 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter7/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 107 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter8/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 108 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter9/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 109 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 110 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 111 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 112 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 113 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 114 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 115 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 116 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 117 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 118 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 119 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 120 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 121 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 122 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 123 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 124 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 125 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 126 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 127 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 128 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/OUTPUT_2_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 129 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 130 , 0 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Solver Configuration/EVAL_KEY/STATE_2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 1 } , { 131 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 133 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 135 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 136 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 138 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 139 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 140 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 141 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 142 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 143 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 144 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 145 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 146 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 149 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 153 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 154 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 155 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 156 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 157 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 158 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 159 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 160 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 161 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 162 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 163 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 164 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 165 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 166 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 167 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 168 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 169 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 170 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 171 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 172 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 173 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 174 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 175 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Avoid Divide by Zero"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 176 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 177 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 178 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 179 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 180 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 181 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 182 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 183 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 184 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 185 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 186 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 187 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 188 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 189 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 190 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Sum/Sum_PID/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 191 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 192 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 193 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 194 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 195 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 196 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 197 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 198 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 199 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 200 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 201 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 202 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Sum/Sum_PID/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 203 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 204 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 205 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 206 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 207 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 208 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 209 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 210 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 211 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 212 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 213 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 214 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Sum/Sum_PID/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 215 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 216 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 217 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 218 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 219 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 220 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 221 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 222 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 223 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 224 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 225 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 226 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Sum/Sum_PID/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 227 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 228 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 229 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 230 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 231 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 232 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 233 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 234 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 235 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 236 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 237 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 238 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Sum/Sum_PID/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 239 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 240 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 241 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 242 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 243 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 244 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 245 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 246 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 247 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 248 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 249 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 250 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Sum/Sum_PID/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 251 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 252 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 253 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 254 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 255 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 256 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 257 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/PID Controller/Sum/Sum_PI/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 258 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 259 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 260 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 261 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 262 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 263 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 264 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/PID Controller/Sum/Sum_PI/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 265 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 266 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 267 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 268 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 269 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 270 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 271 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/PID Controller/Sum/Sum_PI/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 272 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 273 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 274 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 275 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 276 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 277 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 278 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/PID Controller/Sum/Sum_PI/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 279 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 280 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 281 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 282 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 283 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 284 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 285 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/PID Controller/Sum/Sum_PI/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 286 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 287 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 288 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 289 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 290 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 291 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 292 , 0 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/PID Controller/Sum/Sum_PI/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 293 , 0 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 294 , 0 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 295 , 0 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 296 , 0 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 297 , 0 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 298 , 0 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 299 , TARGET_STRING (
"closedLoop_visual/Trajectories/FromWs" ) , TARGET_STRING ( "Time0" ) , 0 , 8
, 0 } , { 300 , TARGET_STRING ( "closedLoop_visual/Trajectories/FromWs" ) ,
TARGET_STRING ( "Data0" ) , 0 , 9 , 0 } , { 301 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 302 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 303 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control"
) , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 304 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control"
) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 305 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 306 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control"
) , TARGET_STRING ( "sat" ) , 0 , 0 , 0 } , { 307 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 308 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 309 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control"
) , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 310 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control"
) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 311 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 312 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control"
) , TARGET_STRING ( "sat" ) , 0 , 0 , 0 } , { 313 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 314 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 315 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control"
) , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 316 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control"
) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 317 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 318 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control"
) , TARGET_STRING ( "sat" ) , 0 , 0 , 0 } , { 319 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 320 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 321 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control"
) , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 322 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control"
) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 323 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 324 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control"
) , TARGET_STRING ( "sat" ) , 0 , 0 , 0 } , { 325 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 326 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 327 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control"
) , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 328 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control"
) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 329 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 330 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control"
) , TARGET_STRING ( "sat" ) , 0 , 0 , 0 } , { 331 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 332 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 333 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control"
) , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 334 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control"
) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 335 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 336 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control"
) , TARGET_STRING ( "sat" ) , 0 , 0 , 0 } , { 337 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 338 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 339 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 340 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 341 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 342 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 343 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 344 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 345 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 346 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 347 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 348 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 349 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 350 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 351 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 352 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 353 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control"
) , TARGET_STRING ( "Ki" ) , 0 , 0 , 0 } , { 354 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control"
) , TARGET_STRING ( "tc" ) , 0 , 0 , 0 } , { 355 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain10" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 356 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain12" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 357 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain13" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 358 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain15" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 359 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain16" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 360 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 361 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 362 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 363 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 364 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain6" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 365 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain7" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 366 , TARGET_STRING (
"closedLoop_visual/Controller/Servomotor Speed Controller/Gain9" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 367 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0
} , { 368 , TARGET_STRING ( "closedLoop_visual/Plant/Robot/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 369 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 370 , TARGET_STRING ( "closedLoop_visual/Plant/Robot/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 371 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/Gain4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 372 , TARGET_STRING ( "closedLoop_visual/Plant/Robot/Gain5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 373 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 374 , TARGET_STRING ( "closedLoop_visual/Plant/Servomotors/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 375 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain11" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 376 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain14" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 377 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain17" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 378 , TARGET_STRING (
"closedLoop_visual/Plant/Servomotors/Gain8" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 379 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 380 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 381 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 382 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 383 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 384 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 385 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 386 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 387 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 388 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 389 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 390 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 391 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 392 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 393 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 394 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 395 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 396 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller"
) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 397 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 398 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 399 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 400 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 401 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 402 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 403 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 404 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 405 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 406 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 407 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)"
) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 408 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 409 ,
TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 410 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter1/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 411 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter10/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 412 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter11/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 413 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter2/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 414 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter3/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 415 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter4/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 416 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter5/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 417 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter6/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 418 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter7/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 419 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter8/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 420 , TARGET_STRING (
"closedLoop_visual/Plant/Robot/PS-Simulink Converter9/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 421 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 422 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 423 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 424 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 425 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 426 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 427 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 428 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/FA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 429 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 430 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 431 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 432 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 433 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 434 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 435 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 436 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/GA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 437 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 438 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 439 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 440 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 441 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 442 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 443 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 444 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/LFA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 445 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 446 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 447 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 448 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 449 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 450 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 451 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 452 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/RFA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 453 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 454 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 455 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 456 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 457 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 458 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 459 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 460 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/UA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 461 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 462 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 463 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 464 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 465 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 466 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 467 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 468 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Position Controller/WA Discrete Position control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 469 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 470 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 471 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 472 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 473 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 474 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 475 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/FA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 476 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 477 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 478 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 479 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 480 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 481 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 482 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/GA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 483 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 484 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 485 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 486 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 487 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 488 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 489 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/LFA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 490 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 491 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 492 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 493 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 494 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 495 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 496 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/RFA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 497 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 498 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 499 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 500 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 501 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 502 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 503 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/UA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 504 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 505 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 506 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 507 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 508 ,
TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 509 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 510 , TARGET_STRING (
 "closedLoop_visual/Controller/Servomotor Speed Controller/WA Discrete Speed control/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 511 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Fore Arm Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 512 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Gripper Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 513 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Left Finger Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 514 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Right Finger Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 515 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Upper Arm Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 516 , TARGET_STRING (
 "closedLoop_visual/Plant/Servomotors/Wrist Servomotor/Uncontrolled Servomotor/PS-Simulink Converter2/EVAL_KEY/GAIN"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { {
0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ntghirwfvx , & rtB . mobqz3bh01 ,
& rtB . gorad2wziy , & rtB . lsz5cnktz4 , & rtB . edkl4fqdos , & rtB .
beojsagteu , & rtB . ie35z2hdow , & rtB . hgyzugskjl , & rtB . j1zo0zth2q , &
rtB . hssorlwf4h , & rtB . odv3pfsoo3 , & rtB . ibjatfeerz , & rtB .
etk2wovvbv , & rtB . e0qjdcsht3 , & rtB . czblalftv1 , & rtB . hyv235hdhv , &
rtB . bjzkus33nv , & rtB . j31fpylddv , & rtB . ine3qiqxwe , & rtB .
hdabgtjkhh , & rtB . eww2mhxkm5 , & rtB . k2vziqgdpi , & rtB . a2py0rn10b , &
rtB . pr04rv033g , & rtB . gtcchxvpps [ 0 ] , & rtB . krr2znhfx3 , & rtB .
jhdz2gcqsm , & rtB . msgq0a2jq0 , & rtB . m4vz0qylqm , & rtB . nv1qketu4s , &
rtB . dvianjcb3b , & rtB . j0ofeidlq4 , & rtB . m34tv4o2q4 , & rtB .
flgkpytalf , & rtB . k3jckrrgpv , & rtB . ipiz0wbr2t , & rtB . lmb4eckheu , &
rtB . gq3rvdqlb4 , & rtB . otwgtai0e3 , & rtB . jittjyrdyi , & rtB .
ohmgnj5xqj , & rtB . ovijgdd4i5 , & rtB . h1qge1ihq1 , & rtB . pigztqhtgk , &
rtB . exs0n10ysv , & rtB . pbzaxgmwaq , & rtB . f2os4pvb41 , & rtB .
o4ftyptaai , & rtB . nlxpxyr5sf , & rtB . guwewsy53e , & rtB . gl1ivij0yb , &
rtB . g0juyqsq32 , & rtB . p5uqm4tulo , & rtB . fvd32u41b3 , & rtB .
izk2jsqvak , & rtB . cqcbggfyin , & rtB . idgel3ts4j , & rtB . hskakeq1mj , &
rtB . fre4yqpfef , & rtB . ezl0agc1ub , & rtB . nflabcywl5 , & rtB .
f3xrqr2bqr , & rtB . blfe1jeuhj , & rtB . isgcnkp2g3 , & rtB . cpbkgwmthj , &
rtB . kqtmnjsgam , & rtB . kqypmuwfo0 , & rtB . owvvmkpxl0 , & rtB .
i2u0a1gwhd , & rtB . pjofez22sm , & rtB . f1ob31k1pi , & rtB . p0evwnfym1 , &
rtB . naknctmcqx , & rtB . exgkqo5cql , & rtB . l5v4lpwsc3 , & rtB .
hnqricx3sj , & rtB . g2qbpw1u2y , & rtB . p4m03lz4zh , & rtB . kw3ti0ac3i , &
rtB . ffs2yfpdwl , & rtB . n1srrzcvqf , & rtB . d0vaq03wni , & rtB .
dsfn4nqkol , & rtB . csjc4ym4ir , & rtB . ptmdq2mkgh , & rtB . ethxpaa4c3 , &
rtB . b24hv4z2vs , & rtB . kecojrxdhq , & rtB . iqrs4lvoq4 , & rtB .
ejhwcpty3j , & rtB . jl3dzj4kme , & rtB . psrgd4ccsi , & rtB . frpc4jznjz , &
rtB . fzxyftd4i0 , & rtB . mczuwr2djk , & rtB . lh4ky3tqcp , & rtB .
dp4vbgasuh , & rtB . iu2q3ztt2v , & rtB . dfpgvlkj2f , & rtB . cf4a24iltw , &
rtB . mfkdageusw , & rtB . amp02sxfjh , & rtB . nj2pffpsiu , & rtB .
ajv0ck2p0k , & rtB . iue0dcvznk , & rtB . klh5xjdddk , & rtB . nove0333w1 , &
rtB . jst1wdleti , & rtB . l4cp2r2na2 , & rtB . adplijeiu3 [ 0 ] , & rtB .
fkmyqachua [ 0 ] , & rtB . jhnfskyafx [ 0 ] , & rtB . j132ytumpt [ 0 ] , &
rtB . aya0m3v3i0 [ 0 ] , & rtB . jkh24e405z [ 0 ] , & rtB . e3jijk5hzs [ 0 ]
, & rtB . dvzsxsm21d [ 0 ] , & rtB . kbokax0jy0 [ 0 ] , & rtB . acli4c4thv [
0 ] , & rtB . lv3dk0vxjj [ 0 ] , & rtB . knzgt5pcsx [ 0 ] , & rtB .
fixkmettoc [ 0 ] , & rtB . orzbfuvelk [ 0 ] , & rtB . asixhrrsif [ 0 ] , &
rtB . cvgkgbsato [ 0 ] , & rtB . poqyqx1ybu [ 0 ] , & rtB . nfrqasfoje [ 0 ]
, & rtB . j3nnkf33ca [ 0 ] , & rtB . ngr0xxfpft [ 0 ] , & rtB . pk3fe41ded [
0 ] , & rtB . lhnhzraedi [ 0 ] , & rtB . oetqfd0pi1 , & rtB . ifmseoanq0 , &
rtB . gmdx0gmqhr [ 0 ] , & rtB . g4zpnhujpe , & rtB . cauosez44j , & rtB .
jn5rmd4dvo , & rtB . appycrz0rp [ 0 ] , & rtB . gkqcyjdn00 , & rtB .
bbphhn30rs , & rtB . hongxggq3i , & rtB . fve542by3u [ 0 ] , & rtB .
lbccudm3ny , & rtB . hp3kdyuspp , & rtB . oxnawm14z4 , & rtB . nnvhvklxhr [ 0
] , & rtB . gubbkenzxe , & rtB . cxtkjg3ys4 , & rtB . k5jw43vz3d , & rtB .
gqeml2pouw [ 0 ] , & rtB . hj0hmqrh4a , & rtB . ifhcacyg4u , & rtB .
o2nuwl00sr , & rtB . cck1e03vkh [ 0 ] , & rtB . h4e0tjjx5q , & rtB .
pzhditorrc , & rtB . kc4hjl50id , & rtB . prvuto05ws [ 0 ] , & rtB .
gmfp3wn4he , & rtB . bncp344e40 , & rtB . j2gvd10ake , & rtB . kpt0des132 [ 0
] , & rtB . amzvbarht0 , & rtB . kginuwp13t , & rtB . dzlk0ptzql , & rtB .
i2nhy303vy [ 0 ] , & rtB . knf0jcww13 , & rtB . fsrf3gmnjy , & rtB .
lxtwqrxqs3 , & rtB . fv50yqfc3m [ 0 ] , & rtB . g4q0iyarn1 , & rtB .
oldoahijz0 , & rtB . mn5trbnavt , & rtB . cel0300ljr [ 0 ] , & rtB .
hag3nww5j4 , & rtB . be0sk5wt1c , & rtB . a5kxdqcvdg , & rtB . nqspu5lpuf [ 0
] , & rtB . hqu3j44etp , & rtB . jdslzqjqun , & rtB . j1dprpcdq2 , & rtB .
gbzealeak2 , & rtB . hangcs5e4q , & rtB . hcxw2v1h5q , & rtB . hxcesrcaxs , &
rtB . jn3qzzjeuq , & rtB . a2nda0rlib , & rtB . lqhzivpz11 , & rtB .
j5dyuksjnm , & rtB . erkqnit1wv , & rtB . bplef3dxnq , & rtB . phkrya1ay3 , &
rtB . jnbqjzgywz , & rtB . alj4dpbhob , & rtB . m3jycwj4xz , & rtB .
hsggggwtm5 , & rtB . c202fqhyxc , & rtB . c4dmfd3ngi , & rtB . hbedvtrsnp , &
rtB . fvzicuhi4u , & rtB . m1ps3yqjbz , & rtB . kl45z53n04 , & rtB .
h4sewwbs22 , & rtB . oom55hkhas , & rtB . biteowggfb , & rtB . kgov5zqwtr , &
rtB . cirtybmflb , & rtB . mop4zig5wo , & rtB . e3utpjlh4a , & rtB .
f2pnpawcdm , & rtB . oijqqlxvyg , & rtB . psg2d3ulvi , & rtB . o4k3u44nl4 , &
rtB . cta4ely3va , & rtB . j21fe4hamr , & rtB . ffarlqqvec , & rtB .
lszg3ivcf1 , & rtB . ot5fmesjqg , & rtB . agyiw10lae , & rtB . lusldgarmx , &
rtB . fh55jet01v , & rtB . ddcumew3cn , & rtB . fau1h3urp2 , & rtB .
miypggsa3e , & rtB . hbhijaspkp , & rtB . m1hwo11cjm , & rtB . fsrrzmku3j , &
rtB . jzdyk043zo , & rtB . es4yz3gayy , & rtB . bgbmzzakwx , & rtB .
o1uizp3fbz , & rtB . j2pimpbea4 , & rtB . d0ncuxtedw , & rtB . fcted5fdfb , &
rtB . n3k1jwldyd , & rtB . hu2rgr3hfe , & rtB . gglnc0muns , & rtB .
krtkmxdgt1 , & rtB . lb0m24ncij , & rtB . jj1lgxwadp , & rtB . k5wlkglx5b , &
rtB . ct3vjnkgwf , & rtB . hccdqvuxr4 , & rtB . o4oomwxpja , & rtB .
hhfq3iwysd , & rtB . iuontvn31z , & rtB . cugbbnxpbn , & rtB . oued3wu2st , &
rtB . bydx0yzmcq , & rtB . ft1d2ngzg4 , & rtB . jstshn3squ , & rtB .
f3gocd01pz , & rtB . mfi0a5ivzy , & rtB . ejomoi4p0y , & rtB . a02mtaqnbs , &
rtB . n4fa3h5blc , & rtB . kqgaourgku , & rtB . bjlw0updzr , & rtB .
gog2qbskx2 , & rtB . bxem2yp0nx , & rtB . bca4tdsxvy , & rtB . ivzbvvwgbn , &
rtB . eahexcxwyu , & rtB . hj4ejv1dkh , & rtB . b10kyicgqg , & rtB .
l3pf5coce3 , & rtB . df1ow2uit1 , & rtB . p2eczjfkkm , & rtB . dd5ie0ajbq , &
rtB . f2pglahcji , & rtB . c22z5c25yo , & rtB . efupo3v3dn , & rtB .
kqpqdscv03 , & rtB . kdn0iimvo0 , & rtB . htdxbjpvte , & rtB . oo510d4zw4 , &
rtB . nngijcbhxp , & rtB . psbnb2qkaq , & rtB . oho1nr4zyb , & rtB .
lbqadsyant , & rtB . ljydzqytvi , & rtB . boniifyd0i , & rtB . iuvcixaj1u , &
rtB . acifvashpf , & rtB . g5jcddbtus , & rtB . a12fn3eish , & rtB .
jqeseokzby , & rtB . hjfvmptswk , & rtB . dkr2klyqik , & rtB . bx0hsvyjif , &
rtB . aag31ygyq2 , & rtB . hg0p25ayja , & rtB . obj4q050ww , & rtB .
ng11s4vjyc , & rtB . k04c00gsa1 , & rtB . n55lwtabvy , & rtB . nqru1gad04 , &
rtB . k3y4oqcihk , & rtB . lspzt2bsxt , & rtP . FromWs_Time0 [ 0 ] , & rtP .
FromWs_Data0 [ 0 ] , & rtP . FADiscretePositioncontrol_Kp , & rtP .
FADiscretePositioncontrol_Ki , & rtP . FADiscretePositioncontrol_Kd , & rtP .
FADiscretePositioncontrol_N , & rtP . FADiscretePositioncontrol_tc , & rtP .
FADiscretePositioncontrol_sat , & rtP . GADiscretePositioncontrol_Kp , & rtP
. GADiscretePositioncontrol_Ki , & rtP . GADiscretePositioncontrol_Kd , & rtP
. GADiscretePositioncontrol_N , & rtP . GADiscretePositioncontrol_tc , & rtP
. GADiscretePositioncontrol_sat , & rtP . LFADiscretePositioncontrol_Kp , &
rtP . LFADiscretePositioncontrol_Ki , & rtP . LFADiscretePositioncontrol_Kd ,
& rtP . LFADiscretePositioncontrol_N , & rtP . LFADiscretePositioncontrol_tc
, & rtP . LFADiscretePositioncontrol_sat , & rtP .
RFADiscretePositioncontrol_Kp , & rtP . RFADiscretePositioncontrol_Ki , & rtP
. RFADiscretePositioncontrol_Kd , & rtP . RFADiscretePositioncontrol_N , &
rtP . RFADiscretePositioncontrol_tc , & rtP . RFADiscretePositioncontrol_sat
, & rtP . UADiscretePositioncontrol_Kp , & rtP . UADiscretePositioncontrol_Ki
, & rtP . UADiscretePositioncontrol_Kd , & rtP . UADiscretePositioncontrol_N
, & rtP . UADiscretePositioncontrol_tc , & rtP .
UADiscretePositioncontrol_sat , & rtP . WADiscretePositioncontrol_Kp , & rtP
. WADiscretePositioncontrol_Ki , & rtP . WADiscretePositioncontrol_Kd , & rtP
. WADiscretePositioncontrol_N , & rtP . WADiscretePositioncontrol_tc , & rtP
. WADiscretePositioncontrol_sat , & rtP . FADiscreteSpeedcontrol_Kp , & rtP .
FADiscreteSpeedcontrol_Ki , & rtP . FADiscreteSpeedcontrol_tc , & rtP .
GADiscreteSpeedcontrol_Kp , & rtP . GADiscreteSpeedcontrol_Ki , & rtP .
GADiscreteSpeedcontrol_tc , & rtP . LFADiscreteSpeedcontrol_Kp , & rtP .
LFADiscreteSpeedcontrol_Ki , & rtP . LFADiscreteSpeedcontrol_tc , & rtP .
RFADiscreteSpeedcontrol_Kp , & rtP . RFADiscreteSpeedcontrol_Ki , & rtP .
RFADiscreteSpeedcontrol_tc , & rtP . UADiscreteSpeedcontrol_Kp , & rtP .
UADiscreteSpeedcontrol_Ki , & rtP . UADiscreteSpeedcontrol_tc , & rtP .
WADiscreteSpeedcontrol_Kp , & rtP . WADiscreteSpeedcontrol_Ki , & rtP .
WADiscreteSpeedcontrol_tc , & rtP . Gain10_Gain , & rtP . Gain12_Gain , & rtP
. Gain13_Gain , & rtP . Gain15_Gain , & rtP . Gain16_Gain , & rtP .
Gain2_Gain_lgcuhly1ij , & rtP . Gain3_Gain_ddianwy5uo , & rtP .
Gain4_Gain_debj45fomz , & rtP . Gain5_Gain_bdpfd5cloc , & rtP . Gain6_Gain ,
& rtP . Gain7_Gain , & rtP . Gain9_Gain , & rtP . Gain_Gain , & rtP .
Gain1_Gain , & rtP . Gain2_Gain , & rtP . Gain3_Gain , & rtP . Gain4_Gain , &
rtP . Gain5_Gain , & rtP . Gain_Gain_a3lqnjnaie , & rtP .
Gain1_Gain_kv2drkc1jq , & rtP . Gain11_Gain , & rtP . Gain14_Gain , & rtP .
Gain17_Gain , & rtP . Gain8_Gain , & rtP .
LowPassFilterDiscreteorContinuous_K , & rtP .
PIDController_InitialConditionForIntegrator , & rtP .
PIDController_InitialConditionForFilter , & rtP .
LowPassFilterDiscreteorContinuous_K_dblmcrutuw , & rtP .
PIDController_InitialConditionForIntegrator_ber5p0pasi , & rtP .
PIDController_InitialConditionForFilter_bijcxd3biq , & rtP .
LowPassFilterDiscreteorContinuous_K_cgk1ez4ty3 , & rtP .
PIDController_InitialConditionForIntegrator_iybb1ixf51 , & rtP .
PIDController_InitialConditionForFilter_l1xa4emaot , & rtP .
LowPassFilterDiscreteorContinuous_K_kyey52ep50 , & rtP .
PIDController_InitialConditionForIntegrator_ityg02255r , & rtP .
PIDController_InitialConditionForFilter_mhpnjmh103 , & rtP .
LowPassFilterDiscreteorContinuous_K_paeb1p5zo1 , & rtP .
PIDController_InitialConditionForIntegrator_bvowefbi1b , & rtP .
PIDController_InitialConditionForFilter_bdfusxafxj , & rtP .
LowPassFilterDiscreteorContinuous_K_fbdarspjyq , & rtP .
PIDController_InitialConditionForIntegrator_fu11ifn3yb , & rtP .
PIDController_InitialConditionForFilter_gqvtejr1kb , & rtP .
LowPassFilterDiscreteorContinuous_K_gk1e3ckbus , & rtP .
PIDController_InitialConditionForIntegrator_hthxsrdqok , & rtP .
LowPassFilterDiscreteorContinuous_K_azyftkzlmk , & rtP .
PIDController_InitialConditionForIntegrator_eumty3ptkf , & rtP .
LowPassFilterDiscreteorContinuous_K_i2ua0qelre , & rtP .
PIDController_InitialConditionForIntegrator_lucwcnhkok , & rtP .
LowPassFilterDiscreteorContinuous_K_jcls4yejjf , & rtP .
PIDController_InitialConditionForIntegrator_ijjwn33l3l , & rtP .
LowPassFilterDiscreteorContinuous_K_i0guetzbzf , & rtP .
PIDController_InitialConditionForIntegrator_hhj2q0e3gi , & rtP .
LowPassFilterDiscreteorContinuous_K_kbnahp4pbf , & rtP .
PIDController_InitialConditionForIntegrator_al35d1opha , & rtP .
GAIN_Gain_ih3mthbt50 , & rtP . GAIN_Gain_gipujhulkf , & rtP .
GAIN_Gain_iurldfivlm , & rtP . GAIN_Gain_cegszobnvd , & rtP .
GAIN_Gain_a3e3501pqa , & rtP . GAIN_Gain_d2bdwaaa5x , & rtP .
GAIN_Gain_fa3mxd0pxv , & rtP . GAIN_Gain_cbggud5v1h , & rtP . GAIN_Gain , &
rtP . GAIN_Gain_ghcgkbkv3x , & rtP . GAIN_Gain_bkr1j0bd3l , & rtP .
GAIN_Gain_lksnrktixr , & rtP . Constant_Value , & rtP . Integrator_gainval ,
& rtP . Integrator_UpperSat , & rtP . Integrator_LowerSat , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP . Filter_gainval ,
& rtP . Integrator_gainval_evxnoheart , & rtP . Constant_Value_lrixhn0dkj , &
rtP . Integrator_gainval_ixv0i24q4y , & rtP . Integrator_UpperSat_czguogaom1
, & rtP . Integrator_LowerSat_fhhrbnlssc , & rtP .
Saturation_UpperSat_b1wm32nmrw , & rtP . Saturation_LowerSat_kngpvfh4ls , &
rtP . Filter_gainval_m3bozatxx4 , & rtP . Integrator_gainval_phjczhiptn , &
rtP . Constant_Value_angmd05wja , & rtP . Integrator_gainval_lgbng1p1od , &
rtP . Integrator_UpperSat_jilgocqigo , & rtP . Integrator_LowerSat_meej1knsfc
, & rtP . Saturation_UpperSat_pkgoxl0lrf , & rtP .
Saturation_LowerSat_ndevo5xjvz , & rtP . Filter_gainval_dcpihimpte , & rtP .
Integrator_gainval_fxz21rvcq2 , & rtP . Constant_Value_fdkwrdxtu1 , & rtP .
Integrator_gainval_e4yvg5h4je , & rtP . Integrator_UpperSat_k3htidczg5 , &
rtP . Integrator_LowerSat_ieq4zg3egn , & rtP . Saturation_UpperSat_h1n4bbj4rg
, & rtP . Saturation_LowerSat_pnxjdliiid , & rtP . Filter_gainval_czxjn1rlbf
, & rtP . Integrator_gainval_bfghpclnjy , & rtP . Constant_Value_gt3vzcqmtv ,
& rtP . Integrator_gainval_hw1oy5wzvu , & rtP .
Integrator_UpperSat_pm2laakorw , & rtP . Integrator_LowerSat_dap2gqqil4 , &
rtP . Saturation_UpperSat_j0pkmjhttf , & rtP . Saturation_LowerSat_nciqxysdzy
, & rtP . Filter_gainval_hd00yas04n , & rtP . Integrator_gainval_lyxhkmrez3 ,
& rtP . Constant_Value_lseib3tlc0 , & rtP . Integrator_gainval_fgcdlddvaj , &
rtP . Integrator_UpperSat_kos2lis5jd , & rtP . Integrator_LowerSat_gvexo5zn1g
, & rtP . Saturation_UpperSat_bfekxvwt24 , & rtP .
Saturation_LowerSat_ixkztlf2ug , & rtP . Filter_gainval_jvx230nbth , & rtP .
Integrator_gainval_dfjgw4u3hp , & rtP . Constant_Value_gpr0azxf2n , & rtP .
Integrator_gainval_ax1qbi1zsf , & rtP . Integrator_UpperSat_pxoupp3bpy , &
rtP . Integrator_LowerSat_dxi0sl14if , & rtP . Saturation_UpperSat_ljcmvdtzmp
, & rtP . Saturation_LowerSat_bpwoq1jyyj , & rtP .
Integrator_gainval_jh4ek35yra , & rtP . Constant_Value_j0d24bmf2w , & rtP .
Integrator_gainval_ilq14saqfb , & rtP . Integrator_UpperSat_dyf31exjbb , &
rtP . Integrator_LowerSat_kf5ksuxrmw , & rtP . Saturation_UpperSat_ku4zfj1mgj
, & rtP . Saturation_LowerSat_piqabk5uwl , & rtP .
Integrator_gainval_ozrhkkjmsl , & rtP . Constant_Value_pqdzo2a0cn , & rtP .
Integrator_gainval_o1pkdugrbd , & rtP . Integrator_UpperSat_ft3uzmj1ph , &
rtP . Integrator_LowerSat_cfjq315toj , & rtP . Saturation_UpperSat_k12phj5ehi
, & rtP . Saturation_LowerSat_ffce0ibflx , & rtP .
Integrator_gainval_ivhv4zygdd , & rtP . Constant_Value_btw4atao4i , & rtP .
Integrator_gainval_majrlzonqu , & rtP . Integrator_UpperSat_icgexzc3ek , &
rtP . Integrator_LowerSat_enhsd21rzi , & rtP . Saturation_UpperSat_ptlwne5dr3
, & rtP . Saturation_LowerSat_bhgwypt52q , & rtP .
Integrator_gainval_ly3ytcugg3 , & rtP . Constant_Value_abhuanbusd , & rtP .
Integrator_gainval_ie3iqjywto , & rtP . Integrator_UpperSat_dh4d4fmkz3 , &
rtP . Integrator_LowerSat_fyi041pxta , & rtP . Saturation_UpperSat_ormg3rfkdo
, & rtP . Saturation_LowerSat_muwyyeshhe , & rtP .
Integrator_gainval_ai021icgbp , & rtP . Constant_Value_exlhnub3yd , & rtP .
Integrator_gainval_faaohscdc3 , & rtP . Integrator_UpperSat_kidwxza1it , &
rtP . Integrator_LowerSat_g5j2kqgd1m , & rtP . Saturation_UpperSat_bj2nuqdj2t
, & rtP . Saturation_LowerSat_frbmey0f5g , & rtP .
Integrator_gainval_agnx1rsywz , & rtP . GAIN_Gain_lu5wfgtmm3 , & rtP .
GAIN_Gain_esl4ijmu4b , & rtP . GAIN_Gain_n5wmkwmtp0 , & rtP .
GAIN_Gain_ngbovfpstx , & rtP . GAIN_Gain_lycms1qu4d , & rtP .
GAIN_Gain_ocgf55rpfm , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL )
} ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 6 , 1 , 4 , 1 , 12 , 1 , 18 , 1
, 24 , 1 , 36 , 1 , 2 , 1 , 20 , 1 , 120 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0025 , 0.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 }
, } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [
1 ] , 1 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void
* ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 299 , ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 218 , rtModelParameters , 0 }
, { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 2932799438U
, 4130175437U , 1242794333U , 3298442912U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * closedLoop_visual_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void closedLoop_visual_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void closedLoop_visual_host_InitializeDataMapInfo (
closedLoop_visual_host_DataMapInfo_T * dataMap , const char * path ) {
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
