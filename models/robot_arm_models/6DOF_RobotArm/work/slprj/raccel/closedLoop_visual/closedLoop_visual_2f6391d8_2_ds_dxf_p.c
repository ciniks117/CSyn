#include "__cf_closedLoop_visual.h"
#include "ne_ds.h"
#include "closedLoop_visual_2f6391d8_2_ds_dxf_p.h"
#include "closedLoop_visual_2f6391d8_2_ds_sys_struct.h"
#include "closedLoop_visual_2f6391d8_2_ds_externals.h"
#include "closedLoop_visual_2f6391d8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_visual_2f6391d8_2_ds_dxf_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mDXF_P ; out . mNumCol = 30ULL ; out .
mNumRow = 30ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 2 ; out . mJc [ 2 ]
= 4 ; out . mJc [ 3 ] = 6 ; out . mJc [ 4 ] = 8 ; out . mJc [ 5 ] = 10 ; out
. mJc [ 6 ] = 12 ; out . mJc [ 7 ] = 13 ; out . mJc [ 8 ] = 14 ; out . mJc [
9 ] = 15 ; out . mJc [ 10 ] = 16 ; out . mJc [ 11 ] = 17 ; out . mJc [ 12 ] =
18 ; out . mJc [ 13 ] = 18 ; out . mJc [ 14 ] = 18 ; out . mJc [ 15 ] = 18 ;
out . mJc [ 16 ] = 18 ; out . mJc [ 17 ] = 18 ; out . mJc [ 18 ] = 18 ; out .
mJc [ 19 ] = 18 ; out . mJc [ 20 ] = 18 ; out . mJc [ 21 ] = 18 ; out . mJc [
22 ] = 18 ; out . mJc [ 23 ] = 18 ; out . mJc [ 24 ] = 18 ; out . mJc [ 25 ]
= 20 ; out . mJc [ 26 ] = 22 ; out . mJc [ 27 ] = 24 ; out . mJc [ 28 ] = 26
; out . mJc [ 29 ] = 28 ; out . mJc [ 30 ] = 30 ; out . mIr [ 0 ] = 18 ; out
. mIr [ 1 ] = 19 ; out . mIr [ 2 ] = 20 ; out . mIr [ 3 ] = 21 ; out . mIr [
4 ] = 22 ; out . mIr [ 5 ] = 23 ; out . mIr [ 6 ] = 24 ; out . mIr [ 7 ] = 25
; out . mIr [ 8 ] = 26 ; out . mIr [ 9 ] = 27 ; out . mIr [ 10 ] = 28 ; out .
mIr [ 11 ] = 29 ; out . mIr [ 12 ] = 19 ; out . mIr [ 13 ] = 21 ; out . mIr [
14 ] = 23 ; out . mIr [ 15 ] = 25 ; out . mIr [ 16 ] = 27 ; out . mIr [ 17 ]
= 29 ; out . mIr [ 18 ] = 18 ; out . mIr [ 19 ] = 19 ; out . mIr [ 20 ] = 20
; out . mIr [ 21 ] = 21 ; out . mIr [ 22 ] = 22 ; out . mIr [ 23 ] = 23 ; out
. mIr [ 24 ] = 24 ; out . mIr [ 25 ] = 25 ; out . mIr [ 26 ] = 26 ; out . mIr
[ 27 ] = 27 ; out . mIr [ 28 ] = 28 ; out . mIr [ 29 ] = 29 ; ( void ) sys ;
( void ) t2 ; return 0 ; }
