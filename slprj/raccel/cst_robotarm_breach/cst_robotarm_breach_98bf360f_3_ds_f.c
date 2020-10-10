#include "ne_ds.h"
#include "cst_robotarm_breach_98bf360f_3_ds_f.h"
#include "cst_robotarm_breach_98bf360f_3_ds_sys_struct.h"
#include "cst_robotarm_breach_98bf360f_3_ds_externals.h"
#include "cst_robotarm_breach_98bf360f_3_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_breach_98bf360f_3_ds_f ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out
; real_T intrm_sf_mf_1 ; real_T U_idx_0 ; real_T X_idx_2 ; real_T X_idx_0 ;
real_T X_idx_3 ; real_T U_idx_3 ; int32_T M_idx_4 ; int32_T M_idx_0 ; real_T
X_idx_1 ; int32_T M_idx_1 ; int32_T M_idx_2 ; int32_T M_idx_3 ; M_idx_0 = t4
-> mM . mX [ 0 ] ; M_idx_1 = t4 -> mM . mX [ 1 ] ; M_idx_2 = t4 -> mM . mX [
2 ] ; M_idx_3 = t4 -> mM . mX [ 3 ] ; M_idx_4 = t4 -> mM . mX [ 4 ] ; U_idx_0
= t4 -> mU . mX [ 0 ] ; U_idx_3 = t4 -> mU . mX [ 3 ] ; X_idx_0 = t4 -> mX .
mX [ 0 ] ; X_idx_1 = t4 -> mX . mX [ 1 ] ; X_idx_2 = t4 -> mX . mX [ 2 ] ;
X_idx_3 = t4 -> mX . mX [ 3 ] ; out = t5 -> mF ; if ( U_idx_0 <= 0.0 ) {
intrm_sf_mf_1 = 0.0 ; } else if ( U_idx_0 >= 5.0 ) { intrm_sf_mf_1 = 1.0 ; }
else { intrm_sf_mf_1 = U_idx_0 / 5.0 ; } U_idx_0 = ( X_idx_0 *
0.99999999500061842 + X_idx_3 * 9.9999999500061846E-10 ) + U_idx_3 * -
4.7777133790671148E-10 ; U_idx_3 = M_idx_4 != 0 ? - 1.0 : 1.0 ; if ( M_idx_0
!= 0 ) { X_idx_0 = - ( X_idx_1 * - 1591.5494309189535 ) ; } else { X_idx_0 =
- 0.0 ; } if ( M_idx_0 != 0 ) { U_idx_0 = X_idx_3 - U_idx_0 * -
0.075000000000000011 ; } else if ( M_idx_1 != 0 ) { U_idx_0 = X_idx_3 -
U_idx_0 * - 0.075000000000000011 ; } else if ( M_idx_2 != 0 ) { U_idx_0 =
X_idx_3 - U_idx_0 * - 0.1 ; } else if ( M_idx_3 != 0 ) { U_idx_0 = X_idx_3 -
( U_idx_0 * - 0.1 + X_idx_2 * U_idx_3 * 12.0 / 5.0 ) ; } else { U_idx_0 =
X_idx_3 - ( U_idx_3 * 12.0 + U_idx_0 * - 0.1 ) ; } out . mX [ 0 ] = - 0.0 ;
out . mX [ 1 ] = - X_idx_0 ; out . mX [ 2 ] = - intrm_sf_mf_1 ; out . mX [ 3
] = U_idx_0 / 2.4000000000000004 ; ( void ) sys ; ( void ) t5 ; return 0 ; }
