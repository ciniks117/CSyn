#include "__cf_closedLoop.h"
#include "ne_ds.h"
#include "closedLoop_2f6391d8_2_ds_y.h"
#include "closedLoop_2f6391d8_2_ds_sys_struct.h"
#include "closedLoop_2f6391d8_2_ds_externals.h"
#include "closedLoop_2f6391d8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_2f6391d8_2_ds_y ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T X_idx_18 ; real_T X_idx_19 ; real_T X_idx_20 ; real_T X_idx_21 ;
real_T X_idx_22 ; real_T X_idx_23 ; real_T X_idx_0 ; real_T X_idx_1 ; real_T
X_idx_2 ; real_T X_idx_3 ; real_T X_idx_4 ; real_T X_idx_5 ; X_idx_0 = t1 ->
mX . mX [ 0 ] ; X_idx_1 = t1 -> mX . mX [ 1 ] ; X_idx_2 = t1 -> mX . mX [ 2 ]
; X_idx_3 = t1 -> mX . mX [ 3 ] ; X_idx_4 = t1 -> mX . mX [ 4 ] ; X_idx_5 =
t1 -> mX . mX [ 5 ] ; X_idx_18 = t1 -> mX . mX [ 18 ] ; X_idx_19 = t1 -> mX .
mX [ 19 ] ; X_idx_20 = t1 -> mX . mX [ 20 ] ; X_idx_21 = t1 -> mX . mX [ 21 ]
; X_idx_22 = t1 -> mX . mX [ 22 ] ; X_idx_23 = t1 -> mX . mX [ 23 ] ; out =
t2 -> mY ; out . mX [ 0 ] = X_idx_18 ; out . mX [ 1 ] = X_idx_19 ; out . mX [
2 ] = X_idx_20 ; out . mX [ 3 ] = X_idx_21 ; out . mX [ 4 ] = X_idx_22 ; out
. mX [ 5 ] = X_idx_23 ; out . mX [ 6 ] = X_idx_21 ; out . mX [ 7 ] = X_idx_0
; out . mX [ 8 ] = X_idx_23 ; out . mX [ 9 ] = X_idx_1 ; out . mX [ 10 ] =
X_idx_18 ; out . mX [ 11 ] = X_idx_2 ; out . mX [ 12 ] = X_idx_19 ; out . mX
[ 13 ] = X_idx_3 ; out . mX [ 14 ] = X_idx_20 ; out . mX [ 15 ] = X_idx_4 ;
out . mX [ 16 ] = X_idx_22 ; out . mX [ 17 ] = X_idx_5 ; ( void ) sys ; (
void ) t2 ; return 0 ; }
