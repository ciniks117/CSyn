#include "ne_ds.h"
#include "cst_robotarm_breach_98bf360f_4_ds_log.h"
#include "cst_robotarm_breach_98bf360f_4_ds_sys_struct.h"
#include "cst_robotarm_breach_98bf360f_4_ds_externals.h"
#include "cst_robotarm_breach_98bf360f_4_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_breach_98bf360f_4_ds_log ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t3 , NeDsMethodOutput * t4 ) { PmRealVector out
; real_T x6_DOF_Robot_Arm_DC_Motors_Gripper_Interface_Ideal_Angular_Vel1 ;
real_T x6_DOF_Robot_Arm_DC_Motors_Hand_Motor1_DC_Motor_i ; real_T t1 ; real_T
U_idx_0 ; real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T X_idx_0 ;
real_T X_idx_3 ; real_T X_idx_2 ; real_T X_idx_1 ; U_idx_0 = t3 -> mU . mX [
0 ] ; U_idx_1 = t3 -> mU . mX [ 1 ] ; U_idx_2 = t3 -> mU . mX [ 2 ] ; U_idx_3
= t3 -> mU . mX [ 3 ] ; X_idx_0 = t3 -> mX . mX [ 0 ] ; X_idx_1 = t3 -> mX .
mX [ 1 ] ; X_idx_2 = t3 -> mX . mX [ 2 ] ; X_idx_3 = t3 -> mX . mX [ 3 ] ;
out = t4 -> mLOG ;
x6_DOF_Robot_Arm_DC_Motors_Gripper_Interface_Ideal_Angular_Vel1 = ( X_idx_0 *
0.47777133790671145 + X_idx_3 * 4.7777133790671148E-10 ) + U_idx_3 * -
0.92143414237940879 ; x6_DOF_Robot_Arm_DC_Motors_Hand_Motor1_DC_Motor_i = (
X_idx_0 * 0.99999999500061842 + X_idx_3 * 9.9999999500061846E-10 ) + U_idx_3
* - 4.7777133790671148E-10 ; t1 = X_idx_2 * 0.2 ; out . mX [ 0 ] = 0.0 ; out
. mX [ 1 ] = 0.0 ; out . mX [ 2 ] = U_idx_3 ; out . mX [ 3 ] = U_idx_3 ; out
. mX [ 4 ] = x6_DOF_Robot_Arm_DC_Motors_Gripper_Interface_Ideal_Angular_Vel1
; out . mX [ 5 ] = U_idx_3 ; out . mX [ 6 ] = U_idx_3 ; out . mX [ 7 ] =
U_idx_3 ; out . mX [ 8 ] =
x6_DOF_Robot_Arm_DC_Motors_Gripper_Interface_Ideal_Angular_Vel1 ; out . mX [
9 ] = x6_DOF_Robot_Arm_DC_Motors_Gripper_Interface_Ideal_Angular_Vel1 ; out .
mX [ 10 ] = 0.0 ; out . mX [ 11 ] = U_idx_3 ; out . mX [ 12 ] = 0.0 ; out .
mX [ 13 ] = U_idx_3 ; out . mX [ 14 ] = 0.0 ; out . mX [ 15 ] = 0.0 ; out .
mX [ 16 ] = 0.0 ; out . mX [ 17 ] =
x6_DOF_Robot_Arm_DC_Motors_Hand_Motor1_DC_Motor_i ; out . mX [ 18 ] = X_idx_0
; out . mX [ 19 ] = 0.0 ; out . mX [ 20 ] = X_idx_3 ; out . mX [ 21 ] = - (
x6_DOF_Robot_Arm_DC_Motors_Hand_Motor1_DC_Motor_i *
x6_DOF_Robot_Arm_DC_Motors_Hand_Motor1_DC_Motor_i * 0.0049993815260278305 ) /
- 1.0 * 1000.0 ; out . mX [ 22 ] = -
x6_DOF_Robot_Arm_DC_Motors_Gripper_Interface_Ideal_Angular_Vel1 ; out . mX [
23 ] = X_idx_3 ; out . mX [ 24 ] = 0.0 ; out . mX [ 25 ] = U_idx_3 ; out . mX
[ 26 ] = 0.0 ; out . mX [ 27 ] = 0.0 ; out . mX [ 28 ] = 0.0 ; out . mX [ 29
] = 0.0 ; out . mX [ 30 ] = 0.0 ; out . mX [ 31 ] = 0.0 ; out . mX [ 32 ] =
U_idx_0 ; out . mX [ 33 ] = X_idx_2 ; out . mX [ 34 ] = t1 ; out . mX [ 35 ]
= 0.0 ; out . mX [ 36 ] = 0.0 ; out . mX [ 37 ] = X_idx_2 ; out . mX [ 38 ] =
t1 * 5.0 ; out . mX [ 39 ] = 0.0 ; out . mX [ 40 ] = U_idx_1 ; out . mX [ 41
] = X_idx_2 ; out . mX [ 42 ] = 0.0 ; out . mX [ 43 ] = U_idx_2 ; out . mX [
44 ] = - x6_DOF_Robot_Arm_DC_Motors_Hand_Motor1_DC_Motor_i ; out . mX [ 45 ]
= 0.0 ; out . mX [ 46 ] = 0.0 ; out . mX [ 47 ] = 0.0 ; out . mX [ 48 ] = 0.0
; out . mX [ 49 ] = 0.0 ; out . mX [ 50 ] = 0.0 ; out . mX [ 51 ] = X_idx_3 ;
out . mX [ 52 ] = - ( x6_DOF_Robot_Arm_DC_Motors_Hand_Motor1_DC_Motor_i *
x6_DOF_Robot_Arm_DC_Motors_Hand_Motor1_DC_Motor_i * 0.0001 ) / - 1.0 * 1000.0
; out . mX [ 53 ] = X_idx_3 ; out . mX [ 54 ] = X_idx_1 ; out . mX [ 55 ] =
0.0 ; out . mX [ 56 ] = 0.0 ; out . mX [ 57 ] = 0.0 ; out . mX [ 58 ] =
U_idx_1 ; out . mX [ 59 ] = U_idx_1 ; out . mX [ 60 ] = U_idx_1 ; out . mX [
61 ] = U_idx_1 ; out . mX [ 62 ] = 0.0 ; out . mX [ 63 ] = 0.0 ; out . mX [
64 ] = 0.0 ; out . mX [ 65 ] = U_idx_0 ; out . mX [ 66 ] = U_idx_0 ; out . mX
[ 67 ] = U_idx_0 ; out . mX [ 68 ] = U_idx_0 ; out . mX [ 69 ] = 0.0 ; out .
mX [ 70 ] = 0.0 ; out . mX [ 71 ] = 0.0 ; out . mX [ 72 ] = U_idx_2 ; out .
mX [ 73 ] = U_idx_2 ; out . mX [ 74 ] = U_idx_2 ; out . mX [ 75 ] = U_idx_2 ;
out . mX [ 76 ] = X_idx_3 ; out . mX [ 77 ] = 0.0 ; out . mX [ 78 ] = U_idx_3
; ( void ) sys ; ( void ) t4 ; return 0 ; }
