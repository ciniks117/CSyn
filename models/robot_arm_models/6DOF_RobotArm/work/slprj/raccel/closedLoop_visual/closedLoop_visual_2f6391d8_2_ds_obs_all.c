#include "__cf_closedLoop_visual.h"
#include "ne_ds.h"
#include "closedLoop_visual_2f6391d8_2_ds_obs_all.h"
#include "closedLoop_visual_2f6391d8_2_ds_sys_struct.h"
#include "closedLoop_visual_2f6391d8_2_ds_externals.h"
#include "closedLoop_visual_2f6391d8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_visual_2f6391d8_2_ds_obs_all ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t7 , NeDsMethodOutput * t8 ) { PmRealVector
out ; real_T Plant_Robot_FA_R_w ; real_T Plant_Robot_Gripper_LFA_R_w ; real_T
Plant_Robot_Gripper_RFA_R_w ; real_T
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; real_T
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; real_T t0 [
304 ] ; int32_T b ; real_T X_idx_12 ; real_T X_idx_13 ; real_T X_idx_14 ;
real_T X_idx_15 ; real_T X_idx_16 ; real_T X_idx_17 ; real_T X_idx_0 ; real_T
X_idx_1 ; real_T X_idx_2 ; real_T X_idx_3 ; real_T X_idx_4 ; real_T X_idx_5 ;
real_T U_idx_0 ; real_T X_idx_18 ; real_T U_idx_1 ; real_T X_idx_19 ; real_T
U_idx_2 ; real_T X_idx_20 ; real_T U_idx_3 ; real_T X_idx_21 ; real_T U_idx_4
; real_T X_idx_22 ; real_T U_idx_5 ; real_T X_idx_23 ; real_T U_idx_6 ;
real_T X_idx_24 ; real_T X_idx_6 ; real_T U_idx_7 ; real_T X_idx_25 ; real_T
X_idx_7 ; real_T U_idx_8 ; real_T X_idx_26 ; real_T X_idx_8 ; real_T U_idx_9
; real_T X_idx_27 ; real_T X_idx_9 ; real_T U_idx_10 ; real_T X_idx_28 ;
real_T X_idx_10 ; real_T U_idx_11 ; real_T X_idx_29 ; real_T X_idx_11 ;
U_idx_0 = t7 -> mU . mX [ 0 ] ; U_idx_1 = t7 -> mU . mX [ 1 ] ; U_idx_2 = t7
-> mU . mX [ 2 ] ; U_idx_3 = t7 -> mU . mX [ 3 ] ; U_idx_4 = t7 -> mU . mX [
4 ] ; U_idx_5 = t7 -> mU . mX [ 5 ] ; U_idx_6 = t7 -> mU . mX [ 6 ] ; U_idx_7
= t7 -> mU . mX [ 7 ] ; U_idx_8 = t7 -> mU . mX [ 8 ] ; U_idx_9 = t7 -> mU .
mX [ 9 ] ; U_idx_10 = t7 -> mU . mX [ 10 ] ; U_idx_11 = t7 -> mU . mX [ 11 ]
; X_idx_0 = t7 -> mX . mX [ 0 ] ; X_idx_1 = t7 -> mX . mX [ 1 ] ; X_idx_2 =
t7 -> mX . mX [ 2 ] ; X_idx_3 = t7 -> mX . mX [ 3 ] ; X_idx_4 = t7 -> mX . mX
[ 4 ] ; X_idx_5 = t7 -> mX . mX [ 5 ] ; X_idx_6 = t7 -> mX . mX [ 6 ] ;
X_idx_7 = t7 -> mX . mX [ 7 ] ; X_idx_8 = t7 -> mX . mX [ 8 ] ; X_idx_9 = t7
-> mX . mX [ 9 ] ; X_idx_10 = t7 -> mX . mX [ 10 ] ; X_idx_11 = t7 -> mX . mX
[ 11 ] ; X_idx_12 = t7 -> mX . mX [ 12 ] ; X_idx_13 = t7 -> mX . mX [ 13 ] ;
X_idx_14 = t7 -> mX . mX [ 14 ] ; X_idx_15 = t7 -> mX . mX [ 15 ] ; X_idx_16
= t7 -> mX . mX [ 16 ] ; X_idx_17 = t7 -> mX . mX [ 17 ] ; X_idx_18 = t7 ->
mX . mX [ 18 ] ; X_idx_19 = t7 -> mX . mX [ 19 ] ; X_idx_20 = t7 -> mX . mX [
20 ] ; X_idx_21 = t7 -> mX . mX [ 21 ] ; X_idx_22 = t7 -> mX . mX [ 22 ] ;
X_idx_23 = t7 -> mX . mX [ 23 ] ; X_idx_24 = t7 -> mX . mX [ 24 ] ; X_idx_25
= t7 -> mX . mX [ 25 ] ; X_idx_26 = t7 -> mX . mX [ 26 ] ; X_idx_27 = t7 ->
mX . mX [ 27 ] ; X_idx_28 = t7 -> mX . mX [ 28 ] ; X_idx_29 = t7 -> mX . mX [
29 ] ; out = t8 -> mOBS_ALL ; Plant_Robot_FA_R_w = X_idx_0 * 0.1 ;
Plant_Robot_Gripper_LFA_R_w = X_idx_2 * 0.2 ; Plant_Robot_Gripper_RFA_R_w =
X_idx_3 * 0.2 ; Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w
= X_idx_4 * 0.1 ;
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w = X_idx_5 *
0.02 ; t0 [ 0ULL ] = ( ( ( ( - X_idx_12 + - X_idx_13 ) + - X_idx_14 ) + -
X_idx_15 ) + - X_idx_16 ) + - X_idx_17 ; t0 [ 1ULL ] = 0.0 ; t0 [ 2ULL ] =
12.0 ; t0 [ 3ULL ] = 12.0 ; t0 [ 4ULL ] = 0.0 ; t0 [ 5ULL ] = 0.0 ; t0 [ 6ULL
] = 0.0 ; t0 [ 7ULL ] = Plant_Robot_FA_R_w ; t0 [ 8ULL ] = X_idx_1 ; t0 [
9ULL ] = Plant_Robot_Gripper_LFA_R_w ; t0 [ 10ULL ] = 0.0 ; t0 [ 11ULL ] =
0.0 ; t0 [ 12ULL ] = Plant_Robot_Gripper_RFA_R_w ; t0 [ 13ULL ] = 0.0 ; t0 [
14ULL ] = Plant_Robot_Gripper_LFA_R_w ; t0 [ 15ULL ] = 0.0 ; t0 [ 16ULL ] =
0.0 ; t0 [ 17ULL ] = Plant_Robot_Gripper_LFA_R_w ; t0 [ 18ULL ] = U_idx_0 ;
t0 [ 19ULL ] = X_idx_18 ; t0 [ 20ULL ] = U_idx_0 ; t0 [ 21ULL ] = 0.0 ; t0 [
22ULL ] = 0.0 ; t0 [ 23ULL ] = X_idx_18 ; t0 [ 24ULL ] = X_idx_18 ; t0 [
25ULL ] = 0.0 ; t0 [ 26ULL ] = Plant_Robot_Gripper_LFA_R_w ; t0 [ 27ULL ] =
0.0 ; t0 [ 28ULL ] = Plant_Robot_Gripper_RFA_R_w ; t0 [ 29ULL ] = 0.0 ; t0 [
30ULL ] = 0.0 ; t0 [ 31ULL ] = Plant_Robot_Gripper_RFA_R_w ; t0 [ 32ULL ] =
U_idx_1 ; t0 [ 33ULL ] = X_idx_19 ; t0 [ 34ULL ] = U_idx_1 ; t0 [ 35ULL ] =
0.0 ; t0 [ 36ULL ] = 0.0 ; t0 [ 37ULL ] = X_idx_19 ; t0 [ 38ULL ] = X_idx_19
; t0 [ 39ULL ] = 0.0 ; t0 [ 40ULL ] = Plant_Robot_Gripper_RFA_R_w ; t0 [
41ULL ] = Plant_Robot_Gripper_LFA_R_w ; t0 [ 42ULL ] = 0.0 ; t0 [ 43ULL ] =
0.0 ; t0 [ 44ULL ] = 0.0 ; t0 [ 45ULL ] = Plant_Robot_Gripper_RFA_R_w ; t0 [
46ULL ] = 0.0 ; t0 [ 47ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 48ULL ] =
0.0 ; t0 [ 49ULL ] = 0.0 ; t0 [ 50ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 51ULL ] =
U_idx_2 ; t0 [ 52ULL ] = X_idx_20 ; t0 [ 53ULL ] = U_idx_2 ; t0 [ 54ULL ] =
0.0 ; t0 [ 55ULL ] = 0.0 ; t0 [ 56ULL ] = X_idx_20 ; t0 [ 57ULL ] = X_idx_20
; t0 [ 58ULL ] = 0.0 ; t0 [ 59ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 60ULL ] =
0.0 ; t0 [ 61ULL ] = Plant_Robot_FA_R_w ; t0 [ 62ULL ] = 0.0 ; t0 [ 63ULL ] =
0.0 ; t0 [ 64ULL ] = Plant_Robot_FA_R_w ; t0 [ 65ULL ] = U_idx_3 ; t0 [ 66ULL
] = X_idx_21 ; t0 [ 67ULL ] = U_idx_3 ; t0 [ 68ULL ] = 0.0 ; t0 [ 69ULL ] =
0.0 ; t0 [ 70ULL ] = X_idx_21 ; t0 [ 71ULL ] = X_idx_21 ; t0 [ 72ULL ] = 0.0
; t0 [ 73ULL ] = Plant_Robot_FA_R_w ; t0 [ 74ULL ] = 0.0 ; t0 [ 75ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 76ULL ]
= 0.0 ; t0 [ 77ULL ] = 0.0 ; t0 [ 78ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 79ULL ]
= U_idx_4 ; t0 [ 80ULL ] = X_idx_22 ; t0 [ 81ULL ] = U_idx_4 ; t0 [ 82ULL ] =
0.0 ; t0 [ 83ULL ] = 0.0 ; t0 [ 84ULL ] = X_idx_22 ; t0 [ 85ULL ] = X_idx_22
; t0 [ 86ULL ] = 0.0 ; t0 [ 87ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 88ULL ]
= 0.0 ; t0 [ 89ULL ] = X_idx_1 ; t0 [ 90ULL ] = 0.0 ; t0 [ 91ULL ] = 0.0 ; t0
[ 92ULL ] = X_idx_1 ; t0 [ 93ULL ] = U_idx_5 ; t0 [ 94ULL ] = X_idx_23 ; t0 [
95ULL ] = U_idx_5 ; t0 [ 96ULL ] = 0.0 ; t0 [ 97ULL ] = 0.0 ; t0 [ 98ULL ] =
X_idx_23 ; t0 [ 99ULL ] = X_idx_23 ; t0 [ 100ULL ] = 0.0 ; t0 [ 101ULL ] =
X_idx_1 ; t0 [ 102ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 103ULL ]
= Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 104ULL
] = 0.0 ; t0 [ 105ULL ] = Plant_Robot_FA_R_w ; t0 [ 106ULL ] = 0.0 ; t0 [
107ULL ] = Plant_Robot_FA_R_w ; t0 [ 108ULL ] = 0.0 ; t0 [ 109ULL ] =
Plant_Robot_FA_R_w ; t0 [ 110ULL ] = Plant_Robot_FA_R_w * 10.0 ; t0 [ 111ULL
] = X_idx_21 * 0.1 ; t0 [ 112ULL ] = - X_idx_21 ; t0 [ 113ULL ] =
Plant_Robot_FA_R_w ; t0 [ 114ULL ] = Plant_Robot_FA_R_w ; t0 [ 115ULL ] =
X_idx_21 ; t0 [ 116ULL ] = X_idx_21 ; t0 [ 117ULL ] = 0.0 ; t0 [ 118ULL ] =
Plant_Robot_FA_R_w ; t0 [ 119ULL ] = X_idx_0 ; t0 [ 120ULL ] =
Plant_Robot_FA_R_w * 10.0 ; t0 [ 121ULL ] = U_idx_6 ; t0 [ 122ULL ] = 0.0 ;
t0 [ 123ULL ] = 12.0 ; t0 [ 124ULL ] = 0.0 ; t0 [ 125ULL ] = 0.0 ; t0 [
126ULL ] = X_idx_12 ; t0 [ 127ULL ] = 0.0 ; t0 [ 128ULL ] = X_idx_21 * - 0.1
; t0 [ 129ULL ] = X_idx_24 ; t0 [ 130ULL ] = X_idx_6 ; t0 [ 131ULL ] = 12.0 ;
t0 [ 132ULL ] = X_idx_0 * 9.5492965855137211 ; t0 [ 133ULL ] = 12.0 ; t0 [
134ULL ] = 0.0 ; t0 [ 135ULL ] = 12.0 ; t0 [ 136ULL ] = 0.0 ; t0 [ 137ULL ] =
X_idx_1 ; t0 [ 138ULL ] = 0.0 ; t0 [ 139ULL ] = X_idx_1 ; t0 [ 140ULL ] = 0.0
; t0 [ 141ULL ] = X_idx_1 ; t0 [ 142ULL ] = X_idx_1 ; t0 [ 143ULL ] =
X_idx_23 ; t0 [ 144ULL ] = - X_idx_23 ; t0 [ 145ULL ] = X_idx_1 ; t0 [ 146ULL
] = X_idx_1 ; t0 [ 147ULL ] = X_idx_23 ; t0 [ 148ULL ] = X_idx_23 ; t0 [
149ULL ] = 0.0 ; t0 [ 150ULL ] = X_idx_1 ; t0 [ 151ULL ] = X_idx_1 ; t0 [
152ULL ] = X_idx_1 ; t0 [ 153ULL ] = U_idx_7 ; t0 [ 154ULL ] = 0.0 ; t0 [
155ULL ] = 12.0 ; t0 [ 156ULL ] = 0.0 ; t0 [ 157ULL ] = 0.0 ; t0 [ 158ULL ] =
X_idx_13 ; t0 [ 159ULL ] = 0.0 ; t0 [ 160ULL ] = - X_idx_23 ; t0 [ 161ULL ] =
X_idx_25 ; t0 [ 162ULL ] = X_idx_7 ; t0 [ 163ULL ] = 12.0 ; t0 [ 164ULL ] =
X_idx_1 * 9.5492965855137211 ; t0 [ 165ULL ] = 12.0 ; t0 [ 166ULL ] = 0.0 ;
t0 [ 167ULL ] = 12.0 ; t0 [ 168ULL ] = 0.0 ; t0 [ 169ULL ] =
Plant_Robot_Gripper_LFA_R_w ; t0 [ 170ULL ] = 0.0 ; t0 [ 171ULL ] =
Plant_Robot_Gripper_LFA_R_w ; t0 [ 172ULL ] = 0.0 ; t0 [ 173ULL ] =
Plant_Robot_Gripper_LFA_R_w ; t0 [ 174ULL ] = Plant_Robot_Gripper_LFA_R_w *
5.0 ; t0 [ 175ULL ] = X_idx_18 * 0.2 ; t0 [ 176ULL ] = - X_idx_18 ; t0 [
177ULL ] = Plant_Robot_Gripper_LFA_R_w ; t0 [ 178ULL ] =
Plant_Robot_Gripper_LFA_R_w ; t0 [ 179ULL ] = X_idx_18 ; t0 [ 180ULL ] =
X_idx_18 ; t0 [ 181ULL ] = 0.0 ; t0 [ 182ULL ] = Plant_Robot_Gripper_LFA_R_w
; t0 [ 183ULL ] = X_idx_2 ; t0 [ 184ULL ] = Plant_Robot_Gripper_LFA_R_w * 5.0
; t0 [ 185ULL ] = U_idx_8 ; t0 [ 186ULL ] = 0.0 ; t0 [ 187ULL ] = 12.0 ; t0 [
188ULL ] = 0.0 ; t0 [ 189ULL ] = 0.0 ; t0 [ 190ULL ] = X_idx_14 ; t0 [ 191ULL
] = 0.0 ; t0 [ 192ULL ] = X_idx_18 * - 0.2 ; t0 [ 193ULL ] = X_idx_26 ; t0 [
194ULL ] = X_idx_8 ; t0 [ 195ULL ] = 12.0 ; t0 [ 196ULL ] = X_idx_2 *
9.5492965855137211 ; t0 [ 197ULL ] = 12.0 ; t0 [ 198ULL ] = 0.0 ; t0 [ 199ULL
] = 12.0 ; t0 [ 200ULL ] = 0.0 ; t0 [ 201ULL ] = 0.0 ; t0 [ 202ULL ] = 0.0 ;
t0 [ 203ULL ] = 0.0 ; t0 [ 204ULL ] = 0.0 ; t0 [ 205ULL ] = 0.0 ; t0 [ 206ULL
] = Plant_Robot_Gripper_RFA_R_w ; t0 [ 207ULL ] = 0.0 ; t0 [ 208ULL ] =
Plant_Robot_Gripper_RFA_R_w ; t0 [ 209ULL ] = 0.0 ; t0 [ 210ULL ] =
Plant_Robot_Gripper_RFA_R_w ; t0 [ 211ULL ] = Plant_Robot_Gripper_RFA_R_w *
5.0 ; t0 [ 212ULL ] = X_idx_19 * 0.2 ; t0 [ 213ULL ] = - X_idx_19 ; t0 [
214ULL ] = Plant_Robot_Gripper_RFA_R_w ; t0 [ 215ULL ] =
Plant_Robot_Gripper_RFA_R_w ; t0 [ 216ULL ] = X_idx_19 ; t0 [ 217ULL ] =
X_idx_19 ; t0 [ 218ULL ] = 0.0 ; t0 [ 219ULL ] = Plant_Robot_Gripper_RFA_R_w
; t0 [ 220ULL ] = X_idx_3 ; t0 [ 221ULL ] = Plant_Robot_Gripper_RFA_R_w * 5.0
; t0 [ 222ULL ] = U_idx_9 ; t0 [ 223ULL ] = 0.0 ; t0 [ 224ULL ] = 12.0 ; t0 [
225ULL ] = 0.0 ; t0 [ 226ULL ] = 0.0 ; t0 [ 227ULL ] = X_idx_15 ; t0 [ 228ULL
] = 0.0 ; t0 [ 229ULL ] = X_idx_19 * - 0.2 ; t0 [ 230ULL ] = X_idx_27 ; t0 [
231ULL ] = X_idx_9 ; t0 [ 232ULL ] = 12.0 ; t0 [ 233ULL ] = X_idx_3 *
9.5492965855137211 ; t0 [ 234ULL ] = 12.0 ; t0 [ 235ULL ] = 0.0 ; t0 [ 236ULL
] = 12.0 ; t0 [ 237ULL ] = 0.0 ; t0 [ 238ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 239ULL ]
= 0.0 ; t0 [ 240ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 241ULL ]
= 0.0 ; t0 [ 242ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 243ULL ]
= Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w * 10.0 ; t0 [
244ULL ] = X_idx_20 * 0.1 ; t0 [ 245ULL ] = - X_idx_20 ; t0 [ 246ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 247ULL ]
= Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 248ULL
] = X_idx_20 ; t0 [ 249ULL ] = X_idx_20 ; t0 [ 250ULL ] = 0.0 ; t0 [ 251ULL ]
= Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w ; t0 [ 252ULL
] = X_idx_4 ; t0 [ 253ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position_R_w * 10.0 ; t0 [
254ULL ] = U_idx_10 ; t0 [ 255ULL ] = 0.0 ; t0 [ 256ULL ] = 12.0 ; t0 [
257ULL ] = 0.0 ; t0 [ 258ULL ] = 0.0 ; t0 [ 259ULL ] = X_idx_16 ; t0 [ 260ULL
] = 0.0 ; t0 [ 261ULL ] = X_idx_20 * - 0.1 ; t0 [ 262ULL ] = X_idx_28 ; t0 [
263ULL ] = X_idx_10 ; t0 [ 264ULL ] = 12.0 ; t0 [ 265ULL ] = X_idx_4 *
9.5492965855137211 ; t0 [ 266ULL ] = 12.0 ; t0 [ 267ULL ] = 0.0 ; t0 [ 268ULL
] = 12.0 ; t0 [ 269ULL ] = 0.0 ; t0 [ 270ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 271ULL ]
= 0.0 ; t0 [ 272ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 273ULL ]
= 0.0 ; t0 [ 274ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 275ULL ]
= Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w * 50.0 ; t0 [
276ULL ] = X_idx_22 * 0.02 ; t0 [ 277ULL ] = - X_idx_22 ; t0 [ 278ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 279ULL ]
= Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 280ULL
] = X_idx_22 ; t0 [ 281ULL ] = X_idx_22 ; t0 [ 282ULL ] = 0.0 ; t0 [ 283ULL ]
= Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w ; t0 [ 284ULL
] = X_idx_5 ; t0 [ 285ULL ] =
Plant_Robot_Torque_Actuated_Revolute_Joint_with_Position2_R_w * 50.0 ; t0 [
286ULL ] = U_idx_11 ; t0 [ 287ULL ] = 0.0 ; t0 [ 288ULL ] = 12.0 ; t0 [
289ULL ] = 0.0 ; t0 [ 290ULL ] = 0.0 ; t0 [ 291ULL ] = X_idx_17 ; t0 [ 292ULL
] = 0.0 ; t0 [ 293ULL ] = X_idx_22 * - 0.02 ; t0 [ 294ULL ] = X_idx_29 ; t0 [
295ULL ] = X_idx_11 ; t0 [ 296ULL ] = 12.0 ; t0 [ 297ULL ] = X_idx_5 *
9.5492965855137211 ; t0 [ 298ULL ] = 12.0 ; t0 [ 299ULL ] = 0.0 ; t0 [ 300ULL
] = 12.0 ; t0 [ 301ULL ] = 0.0 ; t0 [ 302ULL ] = 12.0 ; t0 [ 303ULL ] = 0.0 ;
for ( b = 0 ; b < 304 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) sys ;
( void ) t8 ; return 0 ; }
