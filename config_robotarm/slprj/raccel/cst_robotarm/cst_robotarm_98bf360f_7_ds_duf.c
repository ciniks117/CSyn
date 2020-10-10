#include "ne_ds.h"
#include "cst_robotarm_98bf360f_7_ds_duf.h"
#include "cst_robotarm_98bf360f_7_ds_sys_struct.h"
#include "cst_robotarm_98bf360f_7_ds_externals.h"
#include "cst_robotarm_98bf360f_7_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_98bf360f_7_ds_duf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t7 , NeDsMethodOutput * t8 ) { PmRealVector out ;
real_T intermediate_der2 ; real_T t1 ; real_T U_idx_0 ; real_T U_idx_2 ;
int32_T M_idx_0 ; int32_T M_idx_2 ; int32_T M_idx_1 ; int32_T M_idx_6 ;
M_idx_0 = t7 -> mM . mX [ 0 ] ; M_idx_1 = t7 -> mM . mX [ 1 ] ; M_idx_2 = t7
-> mM . mX [ 2 ] ; M_idx_6 = t7 -> mM . mX [ 6 ] ; U_idx_0 = t7 -> mU . mX [
0 ] ; U_idx_2 = t7 -> mU . mX [ 2 ] ; out = t8 -> mDUF ; if ( U_idx_0 <= 0.0
) { intermediate_der2 = 0.0 ; } else if ( U_idx_0 >= 5.0 ) {
intermediate_der2 = 0.0 ; } else { intermediate_der2 = 0.2 ; } if ( U_idx_2
<= 0.0 ) { U_idx_0 = 0.0 ; } else if ( U_idx_2 >= 5.0 ) { U_idx_0 = 0.0 ; }
else { U_idx_0 = 0.2 ; } if ( M_idx_0 != 0 ) { U_idx_2 = -
3.5832850343003364E-11 ; } else if ( M_idx_2 != 0 ) { U_idx_2 = -
3.5832850343003364E-11 ; } else { U_idx_2 = - 4.7777133790671149E-11 ; } if (
M_idx_1 != 0 ) { t1 = - 3.5832850343003364E-11 ; } else if ( M_idx_6 != 0 ) {
t1 = - 3.5832850343003364E-11 ; } else { t1 = - 4.7777133790671149E-11 ; }
out . mX [ 0 ] = - intermediate_der2 ; out . mX [ 1 ] = - U_idx_0 ; out . mX
[ 2 ] = U_idx_2 * 0.41666666666666663 ; out . mX [ 3 ] = t1 *
0.41666666666666663 ; ( void ) sys ; ( void ) t8 ; return 0 ; }
