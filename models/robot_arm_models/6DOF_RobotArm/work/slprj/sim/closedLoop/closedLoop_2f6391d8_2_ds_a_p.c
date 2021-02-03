#include "__cf_closedLoop.h"
#include "ne_ds.h"
#include "closedLoop_2f6391d8_2_ds_a_p.h"
#include "closedLoop_2f6391d8_2_ds_sys_struct.h"
#include "closedLoop_2f6391d8_2_ds_externals.h"
#include "closedLoop_2f6391d8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_2f6391d8_2_ds_a_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mA_P ; out . mNumCol = 30ULL ; out . mNumRow =
30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 2 ; out . mJc [ 2 ] = 4 ; out
. mJc [ 3 ] = 6 ; out . mJc [ 4 ] = 8 ; out . mJc [ 5 ] = 10 ; out . mJc [ 6
] = 12 ; out . mJc [ 7 ] = 13 ; out . mJc [ 8 ] = 14 ; out . mJc [ 9 ] = 15 ;
out . mJc [ 10 ] = 16 ; out . mJc [ 11 ] = 17 ; out . mJc [ 12 ] = 18 ; out .
mJc [ 13 ] = 19 ; out . mJc [ 14 ] = 20 ; out . mJc [ 15 ] = 21 ; out . mJc [
16 ] = 22 ; out . mJc [ 17 ] = 23 ; out . mJc [ 18 ] = 24 ; out . mJc [ 19 ]
= 25 ; out . mJc [ 20 ] = 26 ; out . mJc [ 21 ] = 27 ; out . mJc [ 22 ] = 28
; out . mJc [ 23 ] = 29 ; out . mJc [ 24 ] = 30 ; out . mJc [ 25 ] = 32 ; out
. mJc [ 26 ] = 34 ; out . mJc [ 27 ] = 36 ; out . mJc [ 28 ] = 38 ; out . mJc
[ 29 ] = 40 ; out . mJc [ 30 ] = 42 ; out . mIr [ 0 ] = 1 ; out . mIr [ 1 ] =
15 ; out . mIr [ 2 ] = 3 ; out . mIr [ 3 ] = 17 ; out . mIr [ 4 ] = 5 ; out .
mIr [ 5 ] = 12 ; out . mIr [ 6 ] = 7 ; out . mIr [ 7 ] = 13 ; out . mIr [ 8 ]
= 9 ; out . mIr [ 9 ] = 14 ; out . mIr [ 10 ] = 11 ; out . mIr [ 11 ] = 16 ;
out . mIr [ 12 ] = 0 ; out . mIr [ 13 ] = 2 ; out . mIr [ 14 ] = 4 ; out .
mIr [ 15 ] = 6 ; out . mIr [ 16 ] = 8 ; out . mIr [ 17 ] = 10 ; out . mIr [
18 ] = 18 ; out . mIr [ 19 ] = 20 ; out . mIr [ 20 ] = 22 ; out . mIr [ 21 ]
= 24 ; out . mIr [ 22 ] = 26 ; out . mIr [ 23 ] = 28 ; out . mIr [ 24 ] = 5 ;
out . mIr [ 25 ] = 7 ; out . mIr [ 26 ] = 9 ; out . mIr [ 27 ] = 1 ; out .
mIr [ 28 ] = 11 ; out . mIr [ 29 ] = 3 ; out . mIr [ 30 ] = 1 ; out . mIr [
31 ] = 19 ; out . mIr [ 32 ] = 3 ; out . mIr [ 33 ] = 21 ; out . mIr [ 34 ] =
5 ; out . mIr [ 35 ] = 23 ; out . mIr [ 36 ] = 7 ; out . mIr [ 37 ] = 25 ;
out . mIr [ 38 ] = 9 ; out . mIr [ 39 ] = 27 ; out . mIr [ 40 ] = 11 ; out .
mIr [ 41 ] = 29 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
