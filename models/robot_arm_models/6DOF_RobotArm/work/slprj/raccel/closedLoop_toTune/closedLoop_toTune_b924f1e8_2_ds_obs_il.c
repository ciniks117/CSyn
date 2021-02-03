#include "__cf_closedLoop_toTune.h"
#include "ne_ds.h"
#include "closedLoop_toTune_b924f1e8_2_ds_obs_il.h"
#include "closedLoop_toTune_b924f1e8_2_ds_sys_struct.h"
#include "closedLoop_toTune_b924f1e8_2_ds_externals.h"
#include "closedLoop_toTune_b924f1e8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_toTune_b924f1e8_2_ds_obs_il ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; boolean_T t0 [ 304 ] ; int32_T b ; static boolean_T _cg_const_1 [ 304 ]
= { true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , false , true , false
, true , true , true , true , true , true , true , true , true , true , true
, false , true , false , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
false , true , true , true , true , true , true , true , true , true , true ,
true , false , true , false , true , true , true , true , true , true , true
, true , true , true , true , false , true , false , true , true , true ,
true , true , true , true , true , true , true , true , false , true , false
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , true , false ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , false , true , true , true , true , true , false , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , false , true , true , true , true , true , false , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , false , true , true , true ,
true , true , false , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , false , true , true , true , true , true ,
false , true , true , true , true , true , true , true , true , true , true ,
true } ; ( void ) t1 ; out = t2 -> mOBS_IL ; for ( b = 0 ; b < 304 ; b ++ ) {
t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 304 ; b ++ ) { out . mX [
b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t2 ; return 0 ; }
