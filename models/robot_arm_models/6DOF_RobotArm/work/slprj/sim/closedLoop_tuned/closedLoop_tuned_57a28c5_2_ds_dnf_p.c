#include "__cf_closedLoop_tuned.h"
#include "ne_ds.h"
#include "closedLoop_tuned_57a28c5_2_ds_dnf_p.h"
#include "closedLoop_tuned_57a28c5_2_ds_sys_struct.h"
#include "closedLoop_tuned_57a28c5_2_ds_externals.h"
#include "closedLoop_tuned_57a28c5_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_tuned_57a28c5_2_ds_dnf_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mDNF_P ; out . mNumCol = 54ULL ; out .
mNumRow = 30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ]
= 0 ; out . mJc [ 3 ] = 1 ; out . mJc [ 4 ] = 1 ; out . mJc [ 5 ] = 2 ; out .
mJc [ 6 ] = 2 ; out . mJc [ 7 ] = 3 ; out . mJc [ 8 ] = 3 ; out . mJc [ 9 ] =
3 ; out . mJc [ 10 ] = 4 ; out . mJc [ 11 ] = 4 ; out . mJc [ 12 ] = 4 ; out
. mJc [ 13 ] = 4 ; out . mJc [ 14 ] = 4 ; out . mJc [ 15 ] = 5 ; out . mJc [
16 ] = 5 ; out . mJc [ 17 ] = 6 ; out . mJc [ 18 ] = 6 ; out . mJc [ 19 ] = 6
; out . mJc [ 20 ] = 6 ; out . mJc [ 21 ] = 6 ; out . mJc [ 22 ] = 6 ; out .
mJc [ 23 ] = 6 ; out . mJc [ 24 ] = 6 ; out . mJc [ 25 ] = 6 ; out . mJc [ 26
] = 6 ; out . mJc [ 27 ] = 6 ; out . mJc [ 28 ] = 6 ; out . mJc [ 29 ] = 6 ;
out . mJc [ 30 ] = 6 ; out . mJc [ 31 ] = 6 ; out . mJc [ 32 ] = 6 ; out .
mJc [ 33 ] = 6 ; out . mJc [ 34 ] = 6 ; out . mJc [ 35 ] = 6 ; out . mJc [ 36
] = 6 ; out . mJc [ 37 ] = 6 ; out . mJc [ 38 ] = 6 ; out . mJc [ 39 ] = 6 ;
out . mJc [ 40 ] = 6 ; out . mJc [ 41 ] = 6 ; out . mJc [ 42 ] = 6 ; out .
mJc [ 43 ] = 6 ; out . mJc [ 44 ] = 6 ; out . mJc [ 45 ] = 6 ; out . mJc [ 46
] = 6 ; out . mJc [ 47 ] = 6 ; out . mJc [ 48 ] = 6 ; out . mJc [ 49 ] = 6 ;
out . mJc [ 50 ] = 6 ; out . mJc [ 51 ] = 6 ; out . mJc [ 52 ] = 6 ; out .
mJc [ 53 ] = 6 ; out . mJc [ 54 ] = 6 ; out . mIr [ 0 ] = 24 ; out . mIr [ 1
] = 22 ; out . mIr [ 2 ] = 18 ; out . mIr [ 3 ] = 20 ; out . mIr [ 4 ] = 28 ;
out . mIr [ 5 ] = 26 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
