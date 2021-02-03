#include "__cf_closedLoop_visual.h"
#include "ne_ds.h"
#include "closedLoop_visual_2f6391d8_2_ds_mode.h"
#include "closedLoop_visual_2f6391d8_2_ds_sys_struct.h"
#include "closedLoop_visual_2f6391d8_2_ds_externals.h"
#include "closedLoop_visual_2f6391d8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_visual_2f6391d8_2_ds_mode ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t49 , NeDsMethodOutput * t50 ) { PmIntVector out
; real_T nonscalar0 [ 7 ] ; real_T nonscalar2 [ 7 ] ; real_T nonscalar3 [ 7 ]
; real_T nonscalar1 [ 7 ] ; real_T intrm_sf_mf_13 ; real_T intrm_sf_mf_18 ;
real_T intrm_sf_mf_23 ; boolean_T t23 [ 2 ] ; real_T t30 [ 1 ] ; ETTS0 efOut
; size_t _in1ivar ; real_T b_efOut [ 1 ] ; ETTS0 c_efOut ; real_T d_efOut [ 1
] ; ETTS0 e_efOut ; real_T f_efOut [ 1 ] ; ETTS0 g_efOut ; real_T h_efOut [ 1
] ; ETTS0 i_efOut ; real_T j_efOut [ 1 ] ; ETTS0 k_efOut ; real_T l_efOut [ 1
] ; real_T X_idx_8 ; real_T X_idx_2 ; real_T X_idx_9 ; real_T X_idx_3 ;
real_T X_idx_10 ; real_T X_idx_4 ; real_T X_idx_11 ; real_T X_idx_5 ; real_T
X_idx_6 ; real_T X_idx_0 ; real_T X_idx_7 ; real_T X_idx_1 ; X_idx_0 = t49 ->
mX . mX [ 0 ] ; X_idx_1 = t49 -> mX . mX [ 1 ] ; X_idx_2 = t49 -> mX . mX [ 2
] ; X_idx_3 = t49 -> mX . mX [ 3 ] ; X_idx_4 = t49 -> mX . mX [ 4 ] ; X_idx_5
= t49 -> mX . mX [ 5 ] ; X_idx_6 = t49 -> mX . mX [ 6 ] ; X_idx_7 = t49 -> mX
. mX [ 7 ] ; X_idx_8 = t49 -> mX . mX [ 8 ] ; X_idx_9 = t49 -> mX . mX [ 9 ]
; X_idx_10 = t49 -> mX . mX [ 10 ] ; X_idx_11 = t49 -> mX . mX [ 11 ] ; out =
t50 -> mMODE ; nonscalar0 [ 0 ] = - 523.59877559829886 ; nonscalar0 [ 1 ] = -
518.36278784231581 ; nonscalar0 [ 2 ] = - 513.12680008633288 ; nonscalar0 [ 3
] = - 0.0 ; nonscalar0 [ 4 ] = 513.12680008633288 ; nonscalar0 [ 5 ] =
518.36278784231581 ; nonscalar0 [ 6 ] = 523.59877559829886 ; nonscalar2 [ 0 ]
= 0.0 ; nonscalar2 [ 1 ] = 1.9 ; nonscalar2 [ 2 ] = 1.9 ; nonscalar2 [ 3 ] =
1.9 ; nonscalar2 [ 4 ] = 1.9 ; nonscalar2 [ 5 ] = 1.9 ; nonscalar2 [ 6 ] =
0.0 ; nonscalar3 [ 0 ] = 0.0 ; nonscalar3 [ 1 ] = 7.0 ; nonscalar3 [ 2 ] =
7.0 ; nonscalar3 [ 3 ] = 7.0 ; nonscalar3 [ 4 ] = 7.0 ; nonscalar3 [ 5 ] =
7.0 ; nonscalar3 [ 6 ] = 0.0 ; nonscalar1 [ 0 ] = 0.0 ; nonscalar1 [ 1 ] =
4.0 ; nonscalar1 [ 2 ] = 4.0 ; nonscalar1 [ 3 ] = 4.0 ; nonscalar1 [ 4 ] =
4.0 ; nonscalar1 [ 5 ] = 4.0 ; nonscalar1 [ 6 ] = 0.0 ; if ( X_idx_8 > 0.0 )
{ intrm_sf_mf_13 = 1.0 ; } else { intrm_sf_mf_13 = X_idx_8 < 0.0 ? - 1.0 :
0.0 ; } t30 [ 0ULL ] = intrm_sf_mf_13 * X_idx_2 ; t23 [ 0ULL ] = (
intrm_sf_mf_13 * X_idx_2 < - 523.59877559829886 ) ; t23 [ 1ULL ] = (
intrm_sf_mf_13 * X_idx_2 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & efOut . mField0 , ( void * ) &
efOut . mField1 , ( void * ) & efOut . mField2 , ( void * ) & efOut . mField3
, ( void * ) nonscalar0 , ( void * ) t30 , ( void * ) t23 , ( void * ) &
_in1ivar ) ; t23 [ 0ULL ] = ( intrm_sf_mf_13 * X_idx_2 < - 523.59877559829886
) ; t23 [ 1ULL ] = ( intrm_sf_mf_13 * X_idx_2 <= 523.59877559829886 ) ;
_in1ivar = 7ULL ; tlu2_1d_linear_nearest_value ( ( void * ) & b_efOut , (
void * ) efOut . mField0 , ( void * ) efOut . mField1 , ( void * ) efOut .
mField2 , ( void * ) efOut . mField3 , ( void * ) nonscalar2 , ( void * ) t23
, ( void * ) & _in1ivar ) ; if ( X_idx_9 > 0.0 ) { intrm_sf_mf_18 = 1.0 ; }
else { intrm_sf_mf_18 = X_idx_9 < 0.0 ? - 1.0 : 0.0 ; } t30 [ 0ULL ] =
intrm_sf_mf_18 * X_idx_3 ; t23 [ 0ULL ] = ( intrm_sf_mf_18 * X_idx_3 < -
523.59877559829886 ) ; t23 [ 1ULL ] = ( intrm_sf_mf_18 * X_idx_3 <=
523.59877559829886 ) ; _in1ivar = 7ULL ; tlu2_linear_nearest_prelookup ( (
void * ) & c_efOut . mField0 , ( void * ) & c_efOut . mField1 , ( void * ) &
c_efOut . mField2 , ( void * ) & c_efOut . mField3 , ( void * ) nonscalar0 ,
( void * ) t30 , ( void * ) t23 , ( void * ) & _in1ivar ) ; t23 [ 0ULL ] = (
intrm_sf_mf_18 * X_idx_3 < - 523.59877559829886 ) ; t23 [ 1ULL ] = (
intrm_sf_mf_18 * X_idx_3 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_1d_linear_nearest_value ( ( void * ) & d_efOut , ( void * ) c_efOut .
mField0 , ( void * ) c_efOut . mField1 , ( void * ) c_efOut . mField2 , (
void * ) c_efOut . mField3 , ( void * ) nonscalar2 , ( void * ) t23 , ( void
* ) & _in1ivar ) ; if ( X_idx_10 > 0.0 ) { intrm_sf_mf_23 = 1.0 ; } else {
intrm_sf_mf_23 = X_idx_10 < 0.0 ? - 1.0 : 0.0 ; } t30 [ 0ULL ] =
intrm_sf_mf_23 * X_idx_4 ; t23 [ 0ULL ] = ( intrm_sf_mf_23 * X_idx_4 < -
523.59877559829886 ) ; t23 [ 1ULL ] = ( intrm_sf_mf_23 * X_idx_4 <=
523.59877559829886 ) ; _in1ivar = 7ULL ; tlu2_linear_nearest_prelookup ( (
void * ) & e_efOut . mField0 , ( void * ) & e_efOut . mField1 , ( void * ) &
e_efOut . mField2 , ( void * ) & e_efOut . mField3 , ( void * ) nonscalar0 ,
( void * ) t30 , ( void * ) t23 , ( void * ) & _in1ivar ) ; t23 [ 0ULL ] = (
intrm_sf_mf_23 * X_idx_4 < - 523.59877559829886 ) ; t23 [ 1ULL ] = (
intrm_sf_mf_23 * X_idx_4 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_1d_linear_nearest_value ( ( void * ) & f_efOut , ( void * ) e_efOut .
mField0 , ( void * ) e_efOut . mField1 , ( void * ) e_efOut . mField2 , (
void * ) e_efOut . mField3 , ( void * ) nonscalar3 , ( void * ) t23 , ( void
* ) & _in1ivar ) ; if ( X_idx_11 > 0.0 ) { X_idx_4 = 1.0 ; } else { X_idx_4 =
X_idx_11 < 0.0 ? - 1.0 : 0.0 ; } t30 [ 0ULL ] = X_idx_4 * X_idx_5 ; t23 [
0ULL ] = ( X_idx_4 * X_idx_5 < - 523.59877559829886 ) ; t23 [ 1ULL ] = (
X_idx_4 * X_idx_5 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & g_efOut . mField0 , ( void * ) &
g_efOut . mField1 , ( void * ) & g_efOut . mField2 , ( void * ) & g_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t30 , ( void * ) t23 , ( void *
) & _in1ivar ) ; t23 [ 0ULL ] = ( X_idx_4 * X_idx_5 < - 523.59877559829886 )
; t23 [ 1ULL ] = ( X_idx_4 * X_idx_5 <= 523.59877559829886 ) ; _in1ivar =
7ULL ; tlu2_1d_linear_nearest_value ( ( void * ) & h_efOut , ( void * )
g_efOut . mField0 , ( void * ) g_efOut . mField1 , ( void * ) g_efOut .
mField2 , ( void * ) g_efOut . mField3 , ( void * ) nonscalar1 , ( void * )
t23 , ( void * ) & _in1ivar ) ; if ( X_idx_6 > 0.0 ) { X_idx_3 = 1.0 ; } else
{ X_idx_3 = X_idx_6 < 0.0 ? - 1.0 : 0.0 ; } t30 [ 0ULL ] = X_idx_3 * X_idx_0
; t23 [ 0ULL ] = ( X_idx_3 * X_idx_0 < - 523.59877559829886 ) ; t23 [ 1ULL ]
= ( X_idx_3 * X_idx_0 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & i_efOut . mField0 , ( void * ) &
i_efOut . mField1 , ( void * ) & i_efOut . mField2 , ( void * ) & i_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t30 , ( void * ) t23 , ( void *
) & _in1ivar ) ; t23 [ 0ULL ] = ( X_idx_3 * X_idx_0 < - 523.59877559829886 )
; t23 [ 1ULL ] = ( X_idx_3 * X_idx_0 <= 523.59877559829886 ) ; _in1ivar =
7ULL ; tlu2_1d_linear_nearest_value ( ( void * ) & j_efOut , ( void * )
i_efOut . mField0 , ( void * ) i_efOut . mField1 , ( void * ) i_efOut .
mField2 , ( void * ) i_efOut . mField3 , ( void * ) nonscalar1 , ( void * )
t23 , ( void * ) & _in1ivar ) ; if ( X_idx_7 > 0.0 ) { X_idx_2 = 1.0 ; } else
{ X_idx_2 = X_idx_7 < 0.0 ? - 1.0 : 0.0 ; } t30 [ 0ULL ] = X_idx_2 * X_idx_1
; t23 [ 0ULL ] = ( X_idx_2 * X_idx_1 < - 523.59877559829886 ) ; t23 [ 1ULL ]
= ( X_idx_2 * X_idx_1 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & k_efOut . mField0 , ( void * ) &
k_efOut . mField1 , ( void * ) & k_efOut . mField2 , ( void * ) & k_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t30 , ( void * ) t23 , ( void *
) & _in1ivar ) ; t23 [ 0ULL ] = ( X_idx_2 * X_idx_1 < - 523.59877559829886 )
; t23 [ 1ULL ] = ( X_idx_2 * X_idx_1 <= 523.59877559829886 ) ; _in1ivar =
7ULL ; tlu2_1d_linear_nearest_value ( ( void * ) & l_efOut , ( void * )
k_efOut . mField0 , ( void * ) k_efOut . mField1 , ( void * ) k_efOut .
mField2 , ( void * ) k_efOut . mField3 , ( void * ) nonscalar2 , ( void * )
t23 , ( void * ) & _in1ivar ) ; out . mX [ 0 ] = ( int32_T ) ( X_idx_6 *
X_idx_3 > j_efOut [ 0 ] ) ; out . mX [ 1 ] = ( int32_T ) ( X_idx_7 * X_idx_2
> l_efOut [ 0 ] ) ; out . mX [ 2 ] = ( int32_T ) ( X_idx_8 * intrm_sf_mf_13 >
b_efOut [ 0 ] ) ; out . mX [ 3 ] = ( int32_T ) ( X_idx_9 * intrm_sf_mf_18 >
d_efOut [ 0 ] ) ; out . mX [ 4 ] = ( int32_T ) ( X_idx_10 * intrm_sf_mf_23 >
f_efOut [ 0 ] ) ; out . mX [ 5 ] = ( int32_T ) ( X_idx_11 * X_idx_4 > h_efOut
[ 0 ] ) ; ( void ) sys ; ( void ) t50 ; return 0 ; }
