#include "__cf_closedLoop.h"
#include "ne_ds.h"
#include "closedLoop_2f6391d8_2_ds_tdxy_p.h"
#include "closedLoop_2f6391d8_2_ds_sys_struct.h"
#include "closedLoop_2f6391d8_2_ds_externals.h"
#include "closedLoop_2f6391d8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_2f6391d8_2_ds_tdxy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mTDXY_P ; out . mNumCol = 30ULL ; out . mNumRow =
18ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out
. mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 5 ; out . mJc [ 6 ]
= 6 ; out . mJc [ 7 ] = 6 ; out . mJc [ 8 ] = 6 ; out . mJc [ 9 ] = 6 ; out .
mJc [ 10 ] = 6 ; out . mJc [ 11 ] = 6 ; out . mJc [ 12 ] = 6 ; out . mJc [ 13
] = 6 ; out . mJc [ 14 ] = 6 ; out . mJc [ 15 ] = 6 ; out . mJc [ 16 ] = 6 ;
out . mJc [ 17 ] = 6 ; out . mJc [ 18 ] = 6 ; out . mJc [ 19 ] = 8 ; out .
mJc [ 20 ] = 10 ; out . mJc [ 21 ] = 12 ; out . mJc [ 22 ] = 14 ; out . mJc [
23 ] = 16 ; out . mJc [ 24 ] = 18 ; out . mJc [ 25 ] = 18 ; out . mJc [ 26 ]
= 18 ; out . mJc [ 27 ] = 18 ; out . mJc [ 28 ] = 18 ; out . mJc [ 29 ] = 18
; out . mJc [ 30 ] = 18 ; out . mIr [ 0 ] = 7 ; out . mIr [ 1 ] = 9 ; out .
mIr [ 2 ] = 11 ; out . mIr [ 3 ] = 13 ; out . mIr [ 4 ] = 15 ; out . mIr [ 5
] = 17 ; out . mIr [ 6 ] = 0 ; out . mIr [ 7 ] = 10 ; out . mIr [ 8 ] = 1 ;
out . mIr [ 9 ] = 12 ; out . mIr [ 10 ] = 2 ; out . mIr [ 11 ] = 14 ; out .
mIr [ 12 ] = 3 ; out . mIr [ 13 ] = 6 ; out . mIr [ 14 ] = 4 ; out . mIr [ 15
] = 16 ; out . mIr [ 16 ] = 5 ; out . mIr [ 17 ] = 8 ; ( void ) sys ; ( void
) t2 ; return 0 ; }
