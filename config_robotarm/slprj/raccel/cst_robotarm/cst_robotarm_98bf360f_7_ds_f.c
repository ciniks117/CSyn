#include "ne_ds.h"
#include "cst_robotarm_98bf360f_7_ds_f.h"
#include "cst_robotarm_98bf360f_7_ds_sys_struct.h"
#include "cst_robotarm_98bf360f_7_ds_externals.h"
#include "cst_robotarm_98bf360f_7_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_98bf360f_7_ds_f ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t7 , NeDsMethodOutput * t8 ) { PmRealVector out ;
real_T intrm_sf_mf_1 ; real_T intrm_sf_mf_14 ; real_T U_idx_0 ; real_T
U_idx_2 ; real_T X_idx_4 ; real_T X_idx_5 ; real_T X_idx_0 ; real_T X_idx_6 ;
real_T U_idx_6 ; real_T X_idx_1 ; real_T X_idx_7 ; int32_T M_idx_5 ; int32_T
M_idx_9 ; int32_T M_idx_0 ; real_T X_idx_2 ; int32_T M_idx_1 ; real_T X_idx_3
; int32_T M_idx_2 ; int32_T M_idx_3 ; int32_T M_idx_4 ; int32_T M_idx_6 ;
int32_T M_idx_7 ; int32_T M_idx_8 ; M_idx_0 = t7 -> mM . mX [ 0 ] ; M_idx_1 =
t7 -> mM . mX [ 1 ] ; M_idx_2 = t7 -> mM . mX [ 2 ] ; M_idx_3 = t7 -> mM . mX
[ 3 ] ; M_idx_4 = t7 -> mM . mX [ 4 ] ; M_idx_5 = t7 -> mM . mX [ 5 ] ;
M_idx_6 = t7 -> mM . mX [ 6 ] ; M_idx_7 = t7 -> mM . mX [ 7 ] ; M_idx_8 = t7
-> mM . mX [ 8 ] ; M_idx_9 = t7 -> mM . mX [ 9 ] ; U_idx_0 = t7 -> mU . mX [
0 ] ; U_idx_2 = t7 -> mU . mX [ 2 ] ; U_idx_6 = t7 -> mU . mX [ 6 ] ; X_idx_0
= t7 -> mX . mX [ 0 ] ; X_idx_1 = t7 -> mX . mX [ 1 ] ; X_idx_2 = t7 -> mX .
mX [ 2 ] ; X_idx_3 = t7 -> mX . mX [ 3 ] ; X_idx_4 = t7 -> mX . mX [ 4 ] ;
X_idx_5 = t7 -> mX . mX [ 5 ] ; X_idx_6 = t7 -> mX . mX [ 6 ] ; X_idx_7 = t7
-> mX . mX [ 7 ] ; out = t8 -> mF ; if ( U_idx_0 <= 0.0 ) { intrm_sf_mf_1 =
0.0 ; } else if ( U_idx_0 >= 5.0 ) { intrm_sf_mf_1 = 1.0 ; } else {
intrm_sf_mf_1 = U_idx_0 / 5.0 ; } if ( U_idx_2 <= 0.0 ) { intrm_sf_mf_14 =
0.0 ; } else if ( U_idx_2 >= 5.0 ) { intrm_sf_mf_14 = 1.0 ; } else {
intrm_sf_mf_14 = U_idx_2 / 5.0 ; } U_idx_2 = ( X_idx_0 * 0.99999999500061842
+ X_idx_6 * 9.9999999500061846E-10 ) + U_idx_6 * - 4.7777133790671148E-10 ;
U_idx_6 = ( X_idx_1 * 0.99999999500061842 + X_idx_7 * 9.9999999500061846E-10
) + U_idx_6 * - 4.7777133790671148E-10 ; U_idx_0 = M_idx_5 != 0 ? - 1.0 : 1.0
; X_idx_1 = M_idx_9 != 0 ? - 1.0 : 1.0 ; if ( M_idx_0 != 0 ) { X_idx_2 = - (
X_idx_2 * - 1591.5494309189535 ) ; } else { X_idx_2 = - 0.0 ; } if ( M_idx_1
!= 0 ) { X_idx_0 = - ( X_idx_3 * - 1591.5494309189535 ) ; } else { X_idx_0 =
- 0.0 ; } if ( M_idx_0 != 0 ) { U_idx_2 = X_idx_6 - U_idx_2 * -
0.075000000000000011 ; } else if ( M_idx_2 != 0 ) { U_idx_2 = X_idx_6 -
U_idx_2 * - 0.075000000000000011 ; } else if ( M_idx_3 != 0 ) { U_idx_2 =
X_idx_6 - U_idx_2 * - 0.1 ; } else if ( M_idx_4 != 0 ) { U_idx_2 = X_idx_6 -
( U_idx_2 * - 0.1 + X_idx_5 * U_idx_0 * 12.0 / 5.0 ) ; } else { U_idx_2 =
X_idx_6 - ( U_idx_0 * 12.0 + U_idx_2 * - 0.1 ) ; } if ( M_idx_1 != 0 ) {
U_idx_0 = X_idx_7 - U_idx_6 * - 0.075000000000000011 ; } else if ( M_idx_6 !=
0 ) { U_idx_0 = X_idx_7 - U_idx_6 * - 0.075000000000000011 ; } else if (
M_idx_7 != 0 ) { U_idx_0 = X_idx_7 - U_idx_6 * - 0.1 ; } else if ( M_idx_8 !=
0 ) { U_idx_0 = X_idx_7 - ( U_idx_6 * - 0.1 + X_idx_4 * X_idx_1 * 12.0 / 5.0
) ; } else { U_idx_0 = X_idx_7 - ( X_idx_1 * 12.0 + U_idx_6 * - 0.1 ) ; } out
. mX [ 0 ] = - 0.0 ; out . mX [ 1 ] = - X_idx_2 ; out . mX [ 2 ] = - 0.0 ;
out . mX [ 3 ] = - X_idx_0 ; out . mX [ 4 ] = - intrm_sf_mf_1 ; out . mX [ 5
] = U_idx_2 / 2.4000000000000004 ; out . mX [ 6 ] = - intrm_sf_mf_14 ; out .
mX [ 7 ] = U_idx_0 / 2.4000000000000004 ; ( void ) sys ; ( void ) t8 ; return
0 ; }
