#include "ne_ds.h"
#include "cst_robotarm_original_6f156994_3_ds_zc.h"
#include "cst_robotarm_original_6f156994_3_ds_sys_struct.h"
#include "cst_robotarm_original_6f156994_3_ds_externals.h"
#include "cst_robotarm_original_6f156994_3_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_original_6f156994_3_ds_zc ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector
out ; real_T t1 ; real_T t2 ; real_T U_idx_1 ; real_T X_idx_2 ; real_T
U_idx_2 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_2 ; M_idx_0 = t4
-> mM . mX [ 0 ] ; M_idx_1 = t4 -> mM . mX [ 1 ] ; M_idx_2 = t4 -> mM . mX [
2 ] ; U_idx_1 = t4 -> mU . mX [ 1 ] ; U_idx_2 = t4 -> mU . mX [ 2 ] ; X_idx_2
= t4 -> mX . mX [ 2 ] ; out = t5 -> mZC ; if ( ( M_idx_0 == 0 ) && ( M_idx_1
== 0 ) && ( M_idx_2 == 0 ) ) { U_idx_2 -= 2.5 ; } else { U_idx_2 = 0.0 ; } if
( ( M_idx_0 == 0 ) && ( M_idx_1 == 0 ) && ( M_idx_2 == 0 ) ) { t1 = 5.0 -
X_idx_2 ; } else { t1 = 0.0 ; } if ( M_idx_0 == 0 ) { t2 = U_idx_1 - 2.5 ; }
else { t2 = 0.0 ; } out . mX [ 0 ] = U_idx_2 ; out . mX [ 1 ] = t1 ; out . mX
[ 2 ] = ( M_idx_0 == 0 ) && ( M_idx_1 == 0 ) ? - X_idx_2 : 0.0 ; out . mX [ 3
] = t2 ; out . mX [ 4 ] = ( real_T ) ( U_idx_1 > 2.5 ) ; ( void ) sys ; (
void ) t5 ; return 0 ; }
