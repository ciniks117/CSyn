#include "ne_ds.h"
#include "cst_robotarm_original_6f156994_4_ds_obs_il.h"
#include "cst_robotarm_original_6f156994_4_ds_sys_struct.h"
#include "cst_robotarm_original_6f156994_4_ds_externals.h"
#include "cst_robotarm_original_6f156994_4_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T cst_robotarm_original_6f156994_4_ds_obs_il ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmBoolVector out ; ( void ) t1 ; out = t2 -> mOBS_IL ; out . mX [ 0 ] = true
; out . mX [ 1 ] = true ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ;
out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ;
out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ;
out . mX [ 10 ] = true ; out . mX [ 11 ] = false ; out . mX [ 12 ] = true ;
out . mX [ 13 ] = false ; out . mX [ 14 ] = true ; out . mX [ 15 ] = true ;
out . mX [ 16 ] = true ; out . mX [ 17 ] = false ; out . mX [ 18 ] = true ;
out . mX [ 19 ] = true ; out . mX [ 20 ] = true ; out . mX [ 21 ] = false ;
out . mX [ 22 ] = false ; out . mX [ 23 ] = true ; out . mX [ 24 ] = true ;
out . mX [ 25 ] = false ; out . mX [ 26 ] = true ; out . mX [ 27 ] = true ;
out . mX [ 28 ] = true ; out . mX [ 29 ] = true ; out . mX [ 30 ] = true ;
out . mX [ 31 ] = true ; out . mX [ 32 ] = false ; out . mX [ 33 ] = true ;
out . mX [ 34 ] = true ; out . mX [ 35 ] = true ; out . mX [ 36 ] = true ;
out . mX [ 37 ] = true ; out . mX [ 38 ] = true ; out . mX [ 39 ] = true ;
out . mX [ 40 ] = false ; out . mX [ 41 ] = true ; out . mX [ 42 ] = true ;
out . mX [ 43 ] = false ; out . mX [ 44 ] = false ; out . mX [ 45 ] = true ;
out . mX [ 46 ] = true ; out . mX [ 47 ] = true ; out . mX [ 48 ] = true ;
out . mX [ 49 ] = true ; out . mX [ 50 ] = true ; out . mX [ 51 ] = true ;
out . mX [ 52 ] = false ; out . mX [ 53 ] = true ; out . mX [ 54 ] = true ;
out . mX [ 55 ] = true ; out . mX [ 56 ] = true ; out . mX [ 57 ] = true ;
out . mX [ 58 ] = false ; out . mX [ 59 ] = false ; out . mX [ 60 ] = false ;
out . mX [ 61 ] = false ; out . mX [ 62 ] = true ; out . mX [ 63 ] = true ;
out . mX [ 64 ] = true ; out . mX [ 65 ] = false ; out . mX [ 66 ] = false ;
out . mX [ 67 ] = false ; out . mX [ 68 ] = false ; out . mX [ 69 ] = true ;
out . mX [ 70 ] = true ; out . mX [ 71 ] = true ; out . mX [ 72 ] = false ;
out . mX [ 73 ] = false ; out . mX [ 74 ] = false ; out . mX [ 75 ] = false ;
out . mX [ 76 ] = true ; out . mX [ 77 ] = true ; out . mX [ 78 ] = false ; (
void ) sys ; ( void ) t2 ; return 0 ; }
