#include "ne_ds.h"
#include "cst_robotarm_98bf360f_7_ds_obs_exp.h"
#include "cst_robotarm_98bf360f_7_ds_sys_struct.h"
#include "cst_robotarm_98bf360f_7_ds_externals.h"
#include "cst_robotarm_98bf360f_7_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_98bf360f_7_ds_obs_exp ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; real_T t0 [ 146 ] ; int32_T b ; static real_T _cg_const_1 [ 146 ] = { 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 } ; ( void ) t1 ; out = t2 -> mOBS_EXP ; for ( b = 0 ; b < 146 ; b
++ ) { t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 146 ; b ++ ) { out
. mX [ b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t2 ; return 0 ; }
