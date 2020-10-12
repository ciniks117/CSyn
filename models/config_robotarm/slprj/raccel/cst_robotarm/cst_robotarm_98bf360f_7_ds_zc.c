#include "ne_ds.h"
#include "cst_robotarm_98bf360f_7_ds_zc.h"
#include "cst_robotarm_98bf360f_7_ds_sys_struct.h"
#include "cst_robotarm_98bf360f_7_ds_externals.h"
#include "cst_robotarm_98bf360f_7_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_98bf360f_7_ds_zc ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t7 , NeDsMethodOutput * t8 ) { PmRealVector out ;
real_T t0 ; real_T t1 ; real_T t2 ; real_T t5 ; real_T U_idx_1 ; real_T
X_idx_4 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T X_idx_5 ; real_T U_idx_5 ;
int32_T M_idx_0 ; int32_T M_idx_2 ; int32_T M_idx_3 ; int32_T M_idx_1 ;
int32_T M_idx_6 ; int32_T M_idx_7 ; M_idx_0 = t7 -> mM . mX [ 0 ] ; M_idx_1 =
t7 -> mM . mX [ 1 ] ; M_idx_2 = t7 -> mM . mX [ 2 ] ; M_idx_3 = t7 -> mM . mX
[ 3 ] ; M_idx_6 = t7 -> mM . mX [ 6 ] ; M_idx_7 = t7 -> mM . mX [ 7 ] ;
U_idx_1 = t7 -> mU . mX [ 1 ] ; U_idx_3 = t7 -> mU . mX [ 3 ] ; U_idx_4 = t7
-> mU . mX [ 4 ] ; U_idx_5 = t7 -> mU . mX [ 5 ] ; X_idx_4 = t7 -> mX . mX [
4 ] ; X_idx_5 = t7 -> mX . mX [ 5 ] ; out = t8 -> mZC ; if ( ( M_idx_0 == 0 )
&& ( M_idx_2 == 0 ) && ( M_idx_3 == 0 ) ) { t0 = U_idx_5 - 2.5 ; } else { t0
= 0.0 ; } if ( M_idx_0 == 0 ) { t1 = U_idx_1 - 2.5 ; } else { t1 = 0.0 ; } if
( ( M_idx_0 == 0 ) && ( M_idx_2 == 0 ) && ( M_idx_3 == 0 ) ) { t2 = 5.0 -
X_idx_5 ; } else { t2 = 0.0 ; } if ( ( M_idx_1 == 0 ) && ( M_idx_6 == 0 ) &&
( M_idx_7 == 0 ) ) { U_idx_5 = U_idx_3 - 2.5 ; } else { U_idx_5 = 0.0 ; } if
( M_idx_1 == 0 ) { U_idx_3 = U_idx_4 - 2.5 ; } else { U_idx_3 = 0.0 ; } if (
( M_idx_1 == 0 ) && ( M_idx_6 == 0 ) && ( M_idx_7 == 0 ) ) { t5 = 5.0 -
X_idx_4 ; } else { t5 = 0.0 ; } out . mX [ 0 ] = t0 ; out . mX [ 1 ] = (
real_T ) ( U_idx_1 > 2.5 ) ; out . mX [ 2 ] = t1 ; out . mX [ 3 ] = ( M_idx_0
== 0 ) && ( M_idx_2 == 0 ) ? - X_idx_5 : 0.0 ; out . mX [ 4 ] = t2 ; out . mX
[ 5 ] = U_idx_5 ; out . mX [ 6 ] = ( real_T ) ( U_idx_4 > 2.5 ) ; out . mX [
7 ] = U_idx_3 ; out . mX [ 8 ] = ( M_idx_1 == 0 ) && ( M_idx_6 == 0 ) ? -
X_idx_4 : 0.0 ; out . mX [ 9 ] = t5 ; ( void ) sys ; ( void ) t8 ; return 0 ;
}
