#include "ne_ds.h"
#include "cst_robotarm_breach_98bf360f_7_ds_obs_il.h"
#include "cst_robotarm_breach_98bf360f_7_ds_sys_struct.h"
#include "cst_robotarm_breach_98bf360f_7_ds_externals.h"
#include "cst_robotarm_breach_98bf360f_7_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_breach_98bf360f_7_ds_obs_il ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmBoolVector out ; boolean_T t0 [ 146 ] ; int32_T b ; static boolean_T
_cg_const_1 [ 146 ] = { true , true , false , false , false , false , false ,
false , false , false , true , false , true , false , true , true , true ,
false , true , true , true , false , false , true , true , false , true ,
true , true , true , true , true , false , true , true , true , true , true ,
true , true , false , true , true , false , false , true , true , true , true
, true , true , true , false , true , true , true , true , true , false ,
false , false , false , true , true , true , false , false , false , false ,
true , true , true , false , false , false , false , true , true , false ,
true , false , true , true , true , false , true , true , true , false ,
false , true , true , false , true , true , true , true , true , true , false
, true , true , true , true , true , true , true , false , true , true ,
false , false , true , true , true , true , true , true , true , false , true
, true , true , true , true , false , false , false , false , true , true ,
true , false , false , false , false , true , true , true , false , false ,
false , false , true , true , false } ; ( void ) t1 ; out = t2 -> mOBS_IL ;
for ( b = 0 ; b < 146 ; b ++ ) { t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0
; b < 146 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t2
; return 0 ; }
