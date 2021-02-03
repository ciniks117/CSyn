#include "__cf_closedLoop_toTune.h"
#include "ne_ds.h"
#include "closedLoop_toTune_b924f1e8_2_ds_a.h"
#include "closedLoop_toTune_b924f1e8_2_ds_sys_struct.h"
#include "closedLoop_toTune_b924f1e8_2_ds_externals.h"
#include "closedLoop_toTune_b924f1e8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_toTune_b924f1e8_2_ds_a ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; ( void ) t1 ; out = t2 -> mA ; out . mX [ 0 ] = - 0.0 ; out . mX [ 1 ] = -
0.1 ; out . mX [ 2 ] = - 0.0 ; out . mX [ 3 ] = - 1.0 ; out . mX [ 4 ] = -
0.0 ; out . mX [ 5 ] = - 0.2 ; out . mX [ 6 ] = - 0.0 ; out . mX [ 7 ] = -
0.2 ; out . mX [ 8 ] = - 0.0 ; out . mX [ 9 ] = - 0.1 ; out . mX [ 10 ] = -
0.0 ; out . mX [ 11 ] = - 0.02 ; out . mX [ 12 ] = - 1.0 ; out . mX [ 13 ] =
- 1.0 ; out . mX [ 14 ] = - 1.0 ; out . mX [ 15 ] = - 1.0 ; out . mX [ 16 ] =
- 1.0 ; out . mX [ 17 ] = - 1.0 ; out . mX [ 18 ] = 1.0 ; out . mX [ 19 ] =
1.0 ; out . mX [ 20 ] = 1.0 ; out . mX [ 21 ] = 1.0 ; out . mX [ 22 ] = 1.0 ;
out . mX [ 23 ] = 1.0 ; out . mX [ 24 ] = - 0.2 ; out . mX [ 25 ] = - 0.2 ;
out . mX [ 26 ] = - 0.1 ; out . mX [ 27 ] = - 0.1 ; out . mX [ 28 ] = - 0.02
; out . mX [ 29 ] = - 1.0 ; out . mX [ 30 ] = 1.0 ; out . mX [ 31 ] = 0.0 ;
out . mX [ 32 ] = 1.0 ; out . mX [ 33 ] = 0.0 ; out . mX [ 34 ] = 1.0 ; out .
mX [ 35 ] = 0.0 ; out . mX [ 36 ] = 1.0 ; out . mX [ 37 ] = 0.0 ; out . mX [
38 ] = 1.0 ; out . mX [ 39 ] = 0.0 ; out . mX [ 40 ] = 1.0 ; out . mX [ 41 ]
= 0.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
