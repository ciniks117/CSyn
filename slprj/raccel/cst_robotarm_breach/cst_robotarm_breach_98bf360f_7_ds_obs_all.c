#include "ne_ds.h"
#include "cst_robotarm_breach_98bf360f_7_ds_obs_all.h"
#include "cst_robotarm_breach_98bf360f_7_ds_sys_struct.h"
#include "cst_robotarm_breach_98bf360f_7_ds_externals.h"
#include "cst_robotarm_breach_98bf360f_7_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_breach_98bf360f_7_ds_obs_all ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t5 , NeDsMethodOutput * t6 ) {
PmRealVector out ; real_T
x6_DOF_Robot_Arm_DC_Motors_Bicep_Interface_Ideal_Angular_Veloc1 ; real_T
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_DC_Motor_i ; real_T
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_Power_Amplifier_Contro1 ; real_T
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor2_Power_Amplifier_Contro1 ; real_T t0 [
146 ] ; real_T t2 ; int32_T b ; real_T U_idx_0 ; real_T U_idx_1 ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ;
real_T X_idx_0 ; real_T X_idx_1 ; real_T X_idx_6 ; real_T X_idx_7 ; real_T
X_idx_5 ; real_T X_idx_4 ; real_T X_idx_2 ; real_T X_idx_3 ; U_idx_0 = t5 ->
mU . mX [ 0 ] ; U_idx_1 = t5 -> mU . mX [ 1 ] ; U_idx_2 = t5 -> mU . mX [ 2 ]
; U_idx_3 = t5 -> mU . mX [ 3 ] ; U_idx_4 = t5 -> mU . mX [ 4 ] ; U_idx_5 =
t5 -> mU . mX [ 5 ] ; U_idx_6 = t5 -> mU . mX [ 6 ] ; X_idx_0 = t5 -> mX . mX
[ 0 ] ; X_idx_1 = t5 -> mX . mX [ 1 ] ; X_idx_2 = t5 -> mX . mX [ 2 ] ;
X_idx_3 = t5 -> mX . mX [ 3 ] ; X_idx_4 = t5 -> mX . mX [ 4 ] ; X_idx_5 = t5
-> mX . mX [ 5 ] ; X_idx_6 = t5 -> mX . mX [ 6 ] ; X_idx_7 = t5 -> mX . mX [
7 ] ; out = t6 -> mOBS_ALL ;
x6_DOF_Robot_Arm_DC_Motors_Bicep_Interface_Ideal_Angular_Veloc1 = ( ( (
X_idx_0 * 0.47777133790671145 + X_idx_1 * 0.47777133790671145 ) + X_idx_6 *
4.7777133790671148E-10 ) + X_idx_7 * 4.7777133790671148E-10 ) + U_idx_6 * -
1.8428682847588176 ; x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_DC_Motor_i = (
X_idx_0 * 0.99999999500061842 + X_idx_6 * 9.9999999500061846E-10 ) + U_idx_6
* - 4.7777133790671148E-10 ;
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_Power_Amplifier_Contro1 = X_idx_5 *
0.2 ; t2 = ( X_idx_1 * 0.99999999500061842 + X_idx_7 * 9.9999999500061846E-10
) + U_idx_6 * - 4.7777133790671148E-10 ;
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor2_Power_Amplifier_Contro1 = X_idx_4 *
0.2 ; t0 [ 0UL ] = 0.0 ; t0 [ 1UL ] = 0.0 ; t0 [ 2UL ] = U_idx_6 ; t0 [ 3UL ]
= U_idx_6 ; t0 [ 4UL ] =
x6_DOF_Robot_Arm_DC_Motors_Bicep_Interface_Ideal_Angular_Veloc1 ; t0 [ 5UL ]
= U_idx_6 ; t0 [ 6UL ] = U_idx_6 ; t0 [ 7UL ] = U_idx_6 ; t0 [ 8UL ] =
x6_DOF_Robot_Arm_DC_Motors_Bicep_Interface_Ideal_Angular_Veloc1 ; t0 [ 9UL ]
= x6_DOF_Robot_Arm_DC_Motors_Bicep_Interface_Ideal_Angular_Veloc1 ; t0 [ 10UL
] = 0.0 ; t0 [ 11UL ] = U_idx_6 ; t0 [ 12UL ] = 0.0 ; t0 [ 13UL ] = U_idx_6 ;
t0 [ 14UL ] = 0.0 ; t0 [ 15UL ] = 0.0 ; t0 [ 16UL ] = 0.0 ; t0 [ 17UL ] =
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_DC_Motor_i ; t0 [ 18UL ] = X_idx_0 ;
t0 [ 19UL ] = 0.0 ; t0 [ 20UL ] = X_idx_6 ; t0 [ 21UL ] = - (
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_DC_Motor_i *
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_DC_Motor_i * 0.0049993815260278305 )
/ - 1.0 * 1000.0 ; t0 [ 22UL ] = ( X_idx_0 * - 0.47777133790671145 + X_idx_6
* - 4.7777133790671148E-10 ) + U_idx_6 * 0.92143414237940879 ; t0 [ 23UL ] =
X_idx_6 ; t0 [ 24UL ] = 0.0 ; t0 [ 25UL ] = U_idx_6 ; t0 [ 26UL ] = 0.0 ; t0
[ 27UL ] = 0.0 ; t0 [ 28UL ] = 0.0 ; t0 [ 29UL ] = 0.0 ; t0 [ 30UL ] = 0.0 ;
t0 [ 31UL ] = 0.0 ; t0 [ 32UL ] = U_idx_0 ; t0 [ 33UL ] = X_idx_5 ; t0 [ 34UL
] = x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_Power_Amplifier_Contro1 ; t0 [
35UL ] = 0.0 ; t0 [ 36UL ] = 0.0 ; t0 [ 37UL ] = X_idx_5 ; t0 [ 38UL ] =
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_Power_Amplifier_Contro1 * 5.0 ; t0 [
39UL ] = 0.0 ; t0 [ 40UL ] = U_idx_1 ; t0 [ 41UL ] = X_idx_5 ; t0 [ 42UL ] =
0.0 ; t0 [ 43UL ] = U_idx_5 ; t0 [ 44UL ] = -
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_DC_Motor_i ; t0 [ 45UL ] = 0.0 ; t0 [
46UL ] = 0.0 ; t0 [ 47UL ] = 0.0 ; t0 [ 48UL ] = 0.0 ; t0 [ 49UL ] = 0.0 ; t0
[ 50UL ] = 0.0 ; t0 [ 51UL ] = X_idx_6 ; t0 [ 52UL ] = - (
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_DC_Motor_i *
x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor1_DC_Motor_i * 0.0001 ) / - 1.0 *
1000.0 ; t0 [ 53UL ] = X_idx_6 ; t0 [ 54UL ] = X_idx_2 ; t0 [ 55UL ] = 0.0 ;
t0 [ 56UL ] = 0.0 ; t0 [ 57UL ] = 0.0 ; t0 [ 58UL ] = U_idx_1 ; t0 [ 59UL ] =
U_idx_1 ; t0 [ 60UL ] = U_idx_1 ; t0 [ 61UL ] = U_idx_1 ; t0 [ 62UL ] = 0.0 ;
t0 [ 63UL ] = 0.0 ; t0 [ 64UL ] = 0.0 ; t0 [ 65UL ] = U_idx_0 ; t0 [ 66UL ] =
U_idx_0 ; t0 [ 67UL ] = U_idx_0 ; t0 [ 68UL ] = U_idx_0 ; t0 [ 69UL ] = 0.0 ;
t0 [ 70UL ] = 0.0 ; t0 [ 71UL ] = 0.0 ; t0 [ 72UL ] = U_idx_5 ; t0 [ 73UL ] =
U_idx_5 ; t0 [ 74UL ] = U_idx_5 ; t0 [ 75UL ] = U_idx_5 ; t0 [ 76UL ] =
X_idx_6 ; t0 [ 77UL ] = 0.0 ; t0 [ 78UL ] = U_idx_6 ; t0 [ 79UL ] = 0.0 ; t0
[ 80UL ] = U_idx_6 ; t0 [ 81UL ] = 0.0 ; t0 [ 82UL ] = 0.0 ; t0 [ 83UL ] =
0.0 ; t0 [ 84UL ] = t2 ; t0 [ 85UL ] = X_idx_1 ; t0 [ 86UL ] = 0.0 ; t0 [
87UL ] = X_idx_7 ; t0 [ 88UL ] = - ( t2 * t2 * 0.0049993815260278305 ) / -
1.0 * 1000.0 ; t0 [ 89UL ] = ( X_idx_1 * - 0.47777133790671145 + X_idx_7 * -
4.7777133790671148E-10 ) + U_idx_6 * 0.92143414237940879 ; t0 [ 90UL ] =
X_idx_7 ; t0 [ 91UL ] = 0.0 ; t0 [ 92UL ] = U_idx_6 ; t0 [ 93UL ] = 0.0 ; t0
[ 94UL ] = 0.0 ; t0 [ 95UL ] = 0.0 ; t0 [ 96UL ] = 0.0 ; t0 [ 97UL ] = 0.0 ;
t0 [ 98UL ] = 0.0 ; t0 [ 99UL ] = U_idx_2 ; t0 [ 100UL ] = X_idx_4 ; t0 [
101UL ] = x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor2_Power_Amplifier_Contro1 ;
t0 [ 102UL ] = 0.0 ; t0 [ 103UL ] = 0.0 ; t0 [ 104UL ] = X_idx_4 ; t0 [ 105UL
] = x6_DOF_Robot_Arm_DC_Motors_Bicep_Motor2_Power_Amplifier_Contro1 * 5.0 ;
t0 [ 106UL ] = 0.0 ; t0 [ 107UL ] = U_idx_4 ; t0 [ 108UL ] = X_idx_4 ; t0 [
109UL ] = 0.0 ; t0 [ 110UL ] = U_idx_3 ; t0 [ 111UL ] = - t2 ; t0 [ 112UL ] =
0.0 ; t0 [ 113UL ] = 0.0 ; t0 [ 114UL ] = 0.0 ; t0 [ 115UL ] = 0.0 ; t0 [
116UL ] = 0.0 ; t0 [ 117UL ] = 0.0 ; t0 [ 118UL ] = X_idx_7 ; t0 [ 119UL ] =
- ( t2 * t2 * 0.0001 ) / - 1.0 * 1000.0 ; t0 [ 120UL ] = X_idx_7 ; t0 [ 121UL
] = X_idx_3 ; t0 [ 122UL ] = 0.0 ; t0 [ 123UL ] = 0.0 ; t0 [ 124UL ] = 0.0 ;
t0 [ 125UL ] = U_idx_4 ; t0 [ 126UL ] = U_idx_4 ; t0 [ 127UL ] = U_idx_4 ; t0
[ 128UL ] = U_idx_4 ; t0 [ 129UL ] = 0.0 ; t0 [ 130UL ] = 0.0 ; t0 [ 131UL ]
= 0.0 ; t0 [ 132UL ] = U_idx_2 ; t0 [ 133UL ] = U_idx_2 ; t0 [ 134UL ] =
U_idx_2 ; t0 [ 135UL ] = U_idx_2 ; t0 [ 136UL ] = 0.0 ; t0 [ 137UL ] = 0.0 ;
t0 [ 138UL ] = 0.0 ; t0 [ 139UL ] = U_idx_3 ; t0 [ 140UL ] = U_idx_3 ; t0 [
141UL ] = U_idx_3 ; t0 [ 142UL ] = U_idx_3 ; t0 [ 143UL ] = X_idx_7 ; t0 [
144UL ] = 0.0 ; t0 [ 145UL ] = U_idx_6 ; for ( b = 0 ; b < 146 ; b ++ ) { out
. mX [ b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t6 ; return 0 ; }
