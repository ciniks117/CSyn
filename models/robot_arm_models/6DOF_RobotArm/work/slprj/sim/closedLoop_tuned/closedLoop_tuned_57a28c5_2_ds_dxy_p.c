#include "__cf_closedLoop_tuned.h"
#include "ne_ds.h"
#include "closedLoop_tuned_57a28c5_2_ds_dxy_p.h"
#include "closedLoop_tuned_57a28c5_2_ds_sys_struct.h"
#include "closedLoop_tuned_57a28c5_2_ds_externals.h"
#include "closedLoop_tuned_57a28c5_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_tuned_57a28c5_2_ds_dxy_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mDXY_P ; out . mNumCol = 30ULL ; out .
mNumRow = 19ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ]
= 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 5 ; out .
mJc [ 6 ] = 6 ; out . mJc [ 7 ] = 6 ; out . mJc [ 8 ] = 6 ; out . mJc [ 9 ] =
6 ; out . mJc [ 10 ] = 6 ; out . mJc [ 11 ] = 6 ; out . mJc [ 12 ] = 6 ; out
. mJc [ 13 ] = 7 ; out . mJc [ 14 ] = 8 ; out . mJc [ 15 ] = 9 ; out . mJc [
16 ] = 10 ; out . mJc [ 17 ] = 11 ; out . mJc [ 18 ] = 12 ; out . mJc [ 19 ]
= 14 ; out . mJc [ 20 ] = 16 ; out . mJc [ 21 ] = 18 ; out . mJc [ 22 ] = 20
; out . mJc [ 23 ] = 22 ; out . mJc [ 24 ] = 24 ; out . mJc [ 25 ] = 24 ; out
. mJc [ 26 ] = 24 ; out . mJc [ 27 ] = 24 ; out . mJc [ 28 ] = 24 ; out . mJc
[ 29 ] = 24 ; out . mJc [ 30 ] = 24 ; out . mIr [ 0 ] = 7 ; out . mIr [ 1 ] =
9 ; out . mIr [ 2 ] = 11 ; out . mIr [ 3 ] = 13 ; out . mIr [ 4 ] = 15 ; out
. mIr [ 5 ] = 17 ; out . mIr [ 6 ] = 18 ; out . mIr [ 7 ] = 18 ; out . mIr [
8 ] = 18 ; out . mIr [ 9 ] = 18 ; out . mIr [ 10 ] = 18 ; out . mIr [ 11 ] =
18 ; out . mIr [ 12 ] = 0 ; out . mIr [ 13 ] = 10 ; out . mIr [ 14 ] = 1 ;
out . mIr [ 15 ] = 12 ; out . mIr [ 16 ] = 2 ; out . mIr [ 17 ] = 14 ; out .
mIr [ 18 ] = 3 ; out . mIr [ 19 ] = 6 ; out . mIr [ 20 ] = 4 ; out . mIr [ 21
] = 16 ; out . mIr [ 22 ] = 5 ; out . mIr [ 23 ] = 8 ; ( void ) sys ; ( void
) t2 ; return 0 ; }
