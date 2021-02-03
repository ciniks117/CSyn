#include "__cf_closedLoop.h"
#include "ne_ds.h"
#include "closedLoop_2f6391d8_2_ds_m_p.h"
#include "closedLoop_2f6391d8_2_ds_sys_struct.h"
#include "closedLoop_2f6391d8_2_ds_externals.h"
#include "closedLoop_2f6391d8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_2f6391d8_2_ds_m_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mM_P ; out . mNumCol = 30ULL ; out . mNumRow =
30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out
. mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 5 ; out . mJc [ 6 ]
= 6 ; out . mJc [ 7 ] = 7 ; out . mJc [ 8 ] = 8 ; out . mJc [ 9 ] = 9 ; out .
mJc [ 10 ] = 10 ; out . mJc [ 11 ] = 11 ; out . mJc [ 12 ] = 12 ; out . mJc [
13 ] = 12 ; out . mJc [ 14 ] = 12 ; out . mJc [ 15 ] = 12 ; out . mJc [ 16 ]
= 12 ; out . mJc [ 17 ] = 12 ; out . mJc [ 18 ] = 12 ; out . mJc [ 19 ] = 12
; out . mJc [ 20 ] = 12 ; out . mJc [ 21 ] = 12 ; out . mJc [ 22 ] = 12 ; out
. mJc [ 23 ] = 12 ; out . mJc [ 24 ] = 12 ; out . mJc [ 25 ] = 12 ; out . mJc
[ 26 ] = 12 ; out . mJc [ 27 ] = 12 ; out . mJc [ 28 ] = 12 ; out . mJc [ 29
] = 12 ; out . mJc [ 30 ] = 12 ; out . mIr [ 0 ] = 1 ; out . mIr [ 1 ] = 3 ;
out . mIr [ 2 ] = 5 ; out . mIr [ 3 ] = 7 ; out . mIr [ 4 ] = 9 ; out . mIr [
5 ] = 11 ; out . mIr [ 6 ] = 0 ; out . mIr [ 7 ] = 2 ; out . mIr [ 8 ] = 4 ;
out . mIr [ 9 ] = 6 ; out . mIr [ 10 ] = 8 ; out . mIr [ 11 ] = 10 ; ( void )
sys ; ( void ) t2 ; return 0 ; }
