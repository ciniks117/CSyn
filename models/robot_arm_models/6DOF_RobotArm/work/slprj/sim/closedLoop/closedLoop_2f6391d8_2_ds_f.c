#include "__cf_closedLoop.h"
#include "ne_ds.h"
#include "closedLoop_2f6391d8_2_ds_f.h"
#include "closedLoop_2f6391d8_2_ds_sys_struct.h"
#include "closedLoop_2f6391d8_2_ds_externals.h"
#include "closedLoop_2f6391d8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_2f6391d8_2_ds_f ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t66 , NeDsMethodOutput * t67 ) { PmRealVector out ;
real_T nonscalar0 [ 7 ] ; real_T nonscalar2 [ 7 ] ; real_T nonscalar3 [ 7 ] ;
real_T nonscalar1 [ 7 ] ; real_T zc_int1 ; real_T zc_int11 ; real_T t10 ;
real_T t12 ; real_T t15 ; real_T t18 ; real_T t21 ; boolean_T t38 [ 2 ] ;
real_T t48 [ 1 ] ; real_T t50 ; real_T t53 ; ETTS0 efOut ; size_t _in1ivar ;
real_T b_efOut [ 1 ] ; ETTS0 c_efOut ; real_T d_efOut [ 1 ] ; ETTS0 e_efOut ;
real_T f_efOut [ 1 ] ; ETTS0 g_efOut ; real_T h_efOut [ 1 ] ; ETTS0 i_efOut ;
real_T j_efOut [ 1 ] ; ETTS0 k_efOut ; real_T l_efOut [ 1 ] ; real_T X_idx_8
; real_T X_idx_9 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T X_idx_6 ;
real_T X_idx_7 ; real_T X_idx_0 ; real_T X_idx_5 ; real_T X_idx_1 ; real_T
X_idx_2 ; real_T X_idx_3 ; real_T X_idx_4 ; real_T X_idx_24 ; real_T X_idx_25
; real_T X_idx_26 ; real_T X_idx_27 ; real_T X_idx_28 ; real_T X_idx_29 ;
int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_2 ; int32_T M_idx_3 ;
int32_T M_idx_4 ; int32_T M_idx_5 ; M_idx_0 = t66 -> mM . mX [ 0 ] ; M_idx_1
= t66 -> mM . mX [ 1 ] ; M_idx_2 = t66 -> mM . mX [ 2 ] ; M_idx_3 = t66 -> mM
. mX [ 3 ] ; M_idx_4 = t66 -> mM . mX [ 4 ] ; M_idx_5 = t66 -> mM . mX [ 5 ]
; X_idx_0 = t66 -> mX . mX [ 0 ] ; X_idx_1 = t66 -> mX . mX [ 1 ] ; X_idx_2 =
t66 -> mX . mX [ 2 ] ; X_idx_3 = t66 -> mX . mX [ 3 ] ; X_idx_4 = t66 -> mX .
mX [ 4 ] ; X_idx_5 = t66 -> mX . mX [ 5 ] ; X_idx_6 = t66 -> mX . mX [ 6 ] ;
X_idx_7 = t66 -> mX . mX [ 7 ] ; X_idx_8 = t66 -> mX . mX [ 8 ] ; X_idx_9 =
t66 -> mX . mX [ 9 ] ; X_idx_10 = t66 -> mX . mX [ 10 ] ; X_idx_11 = t66 ->
mX . mX [ 11 ] ; X_idx_24 = t66 -> mX . mX [ 24 ] ; X_idx_25 = t66 -> mX . mX
[ 25 ] ; X_idx_26 = t66 -> mX . mX [ 26 ] ; X_idx_27 = t66 -> mX . mX [ 27 ]
; X_idx_28 = t66 -> mX . mX [ 28 ] ; X_idx_29 = t66 -> mX . mX [ 29 ] ; out =
t67 -> mF ; nonscalar0 [ 0 ] = - 523.59877559829886 ; nonscalar0 [ 1 ] = -
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
{ t15 = 1.0 ; } else { t15 = X_idx_8 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_9 >
0.0 ) { t18 = 1.0 ; } else { t18 = X_idx_9 < 0.0 ? - 1.0 : 0.0 ; } if (
X_idx_10 > 0.0 ) { t21 = 1.0 ; } else { t21 = X_idx_10 < 0.0 ? - 1.0 : 0.0 ;
} if ( X_idx_11 > 0.0 ) { zc_int11 = 1.0 ; } else { zc_int11 = X_idx_11 < 0.0
? - 1.0 : 0.0 ; } if ( X_idx_6 > 0.0 ) { zc_int1 = 1.0 ; } else { zc_int1 =
X_idx_6 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_7 > 0.0 ) { t12 = 1.0 ; } else {
t12 = X_idx_7 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_6 > 0.0 ) { t10 = 1.0 ; }
else { t10 = X_idx_6 < 0.0 ? - 1.0 : 0.0 ; } t48 [ 0ULL ] = t10 * X_idx_0 ;
t38 [ 0ULL ] = ( zc_int1 * X_idx_0 < - 523.59877559829886 ) ; t38 [ 1ULL ] =
( zc_int1 * X_idx_0 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & efOut . mField0 , ( void * ) &
efOut . mField1 , ( void * ) & efOut . mField2 , ( void * ) & efOut . mField3
, ( void * ) nonscalar0 , ( void * ) t48 , ( void * ) t38 , ( void * ) &
_in1ivar ) ; t38 [ 0ULL ] = ( zc_int1 * X_idx_0 < - 523.59877559829886 ) ;
t38 [ 1ULL ] = ( zc_int1 * X_idx_0 <= 523.59877559829886 ) ; _in1ivar = 7ULL
; tlu2_1d_linear_nearest_value ( ( void * ) & b_efOut , ( void * ) efOut .
mField0 , ( void * ) efOut . mField1 , ( void * ) efOut . mField2 , ( void *
) efOut . mField3 , ( void * ) nonscalar1 , ( void * ) t38 , ( void * ) &
_in1ivar ) ; if ( X_idx_11 > 0.0 ) { t53 = 1.0 ; } else { t53 = X_idx_11 <
0.0 ? - 1.0 : 0.0 ; } t48 [ 0ULL ] = t53 * X_idx_5 ; t38 [ 0ULL ] = (
zc_int11 * X_idx_5 < - 523.59877559829886 ) ; t38 [ 1ULL ] = ( zc_int11 *
X_idx_5 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & c_efOut . mField0 , ( void * ) &
c_efOut . mField1 , ( void * ) & c_efOut . mField2 , ( void * ) & c_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t48 , ( void * ) t38 , ( void *
) & _in1ivar ) ; t38 [ 0ULL ] = ( zc_int11 * X_idx_5 < - 523.59877559829886 )
; t38 [ 1ULL ] = ( zc_int11 * X_idx_5 <= 523.59877559829886 ) ; _in1ivar =
7ULL ; tlu2_1d_linear_nearest_value ( ( void * ) & d_efOut , ( void * )
c_efOut . mField0 , ( void * ) c_efOut . mField1 , ( void * ) c_efOut .
mField2 , ( void * ) c_efOut . mField3 , ( void * ) nonscalar1 , ( void * )
t38 , ( void * ) & _in1ivar ) ; if ( X_idx_7 > 0.0 ) { zc_int1 = 1.0 ; } else
{ zc_int1 = X_idx_7 < 0.0 ? - 1.0 : 0.0 ; } t48 [ 0ULL ] = zc_int1 * X_idx_1
; t38 [ 0ULL ] = ( t12 * X_idx_1 < - 523.59877559829886 ) ; t38 [ 1ULL ] = (
t12 * X_idx_1 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & e_efOut . mField0 , ( void * ) &
e_efOut . mField1 , ( void * ) & e_efOut . mField2 , ( void * ) & e_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t48 , ( void * ) t38 , ( void *
) & _in1ivar ) ; t38 [ 0ULL ] = ( t12 * X_idx_1 < - 523.59877559829886 ) ;
t38 [ 1ULL ] = ( t12 * X_idx_1 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_1d_linear_nearest_value ( ( void * ) & f_efOut , ( void * ) e_efOut .
mField0 , ( void * ) e_efOut . mField1 , ( void * ) e_efOut . mField2 , (
void * ) e_efOut . mField3 , ( void * ) nonscalar2 , ( void * ) t38 , ( void
* ) & _in1ivar ) ; if ( X_idx_8 > 0.0 ) { zc_int11 = 1.0 ; } else { zc_int11
= X_idx_8 < 0.0 ? - 1.0 : 0.0 ; } t48 [ 0ULL ] = zc_int11 * X_idx_2 ; t38 [
0ULL ] = ( t15 * X_idx_2 < - 523.59877559829886 ) ; t38 [ 1ULL ] = ( t15 *
X_idx_2 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & g_efOut . mField0 , ( void * ) &
g_efOut . mField1 , ( void * ) & g_efOut . mField2 , ( void * ) & g_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t48 , ( void * ) t38 , ( void *
) & _in1ivar ) ; t38 [ 0ULL ] = ( t15 * X_idx_2 < - 523.59877559829886 ) ;
t38 [ 1ULL ] = ( t15 * X_idx_2 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_1d_linear_nearest_value ( ( void * ) & h_efOut , ( void * ) g_efOut .
mField0 , ( void * ) g_efOut . mField1 , ( void * ) g_efOut . mField2 , (
void * ) g_efOut . mField3 , ( void * ) nonscalar2 , ( void * ) t38 , ( void
* ) & _in1ivar ) ; if ( X_idx_9 > 0.0 ) { t12 = 1.0 ; } else { t12 = X_idx_9
< 0.0 ? - 1.0 : 0.0 ; } t48 [ 0ULL ] = t12 * X_idx_3 ; t38 [ 0ULL ] = ( t18 *
X_idx_3 < - 523.59877559829886 ) ; t38 [ 1ULL ] = ( t18 * X_idx_3 <=
523.59877559829886 ) ; _in1ivar = 7ULL ; tlu2_linear_nearest_prelookup ( (
void * ) & i_efOut . mField0 , ( void * ) & i_efOut . mField1 , ( void * ) &
i_efOut . mField2 , ( void * ) & i_efOut . mField3 , ( void * ) nonscalar0 ,
( void * ) t48 , ( void * ) t38 , ( void * ) & _in1ivar ) ; t38 [ 0ULL ] = (
t18 * X_idx_3 < - 523.59877559829886 ) ; t38 [ 1ULL ] = ( t18 * X_idx_3 <=
523.59877559829886 ) ; _in1ivar = 7ULL ; tlu2_1d_linear_nearest_value ( (
void * ) & j_efOut , ( void * ) i_efOut . mField0 , ( void * ) i_efOut .
mField1 , ( void * ) i_efOut . mField2 , ( void * ) i_efOut . mField3 , (
void * ) nonscalar2 , ( void * ) t38 , ( void * ) & _in1ivar ) ; if (
X_idx_10 > 0.0 ) { t50 = 1.0 ; } else { t50 = X_idx_10 < 0.0 ? - 1.0 : 0.0 ;
} t48 [ 0ULL ] = t50 * X_idx_4 ; t38 [ 0ULL ] = ( t21 * X_idx_4 < -
523.59877559829886 ) ; t38 [ 1ULL ] = ( t21 * X_idx_4 <= 523.59877559829886 )
; _in1ivar = 7ULL ; tlu2_linear_nearest_prelookup ( ( void * ) & k_efOut .
mField0 , ( void * ) & k_efOut . mField1 , ( void * ) & k_efOut . mField2 , (
void * ) & k_efOut . mField3 , ( void * ) nonscalar0 , ( void * ) t48 , (
void * ) t38 , ( void * ) & _in1ivar ) ; t38 [ 0ULL ] = ( t21 * X_idx_4 < -
523.59877559829886 ) ; t38 [ 1ULL ] = ( t21 * X_idx_4 <= 523.59877559829886 )
; _in1ivar = 7ULL ; tlu2_1d_linear_nearest_value ( ( void * ) & l_efOut , (
void * ) k_efOut . mField0 , ( void * ) k_efOut . mField1 , ( void * )
k_efOut . mField2 , ( void * ) k_efOut . mField3 , ( void * ) nonscalar3 , (
void * ) t38 , ( void * ) & _in1ivar ) ; if ( M_idx_0 != 0 ) { X_idx_6 =
X_idx_24 - t10 * b_efOut [ 0 ] ; } else { X_idx_6 = X_idx_24 - X_idx_6 ; } if
( M_idx_1 != 0 ) { t18 = X_idx_25 - zc_int1 * f_efOut [ 0 ] ; } else { t18 =
X_idx_25 - X_idx_7 ; } if ( M_idx_2 != 0 ) { t15 = X_idx_26 - zc_int11 *
h_efOut [ 0 ] ; } else { t15 = X_idx_26 - X_idx_8 ; } if ( M_idx_3 != 0 ) {
t12 = X_idx_27 - t12 * j_efOut [ 0 ] ; } else { t12 = X_idx_27 - X_idx_9 ; }
if ( M_idx_4 != 0 ) { zc_int11 = X_idx_28 - t50 * l_efOut [ 0 ] ; } else {
zc_int11 = X_idx_28 - X_idx_10 ; } if ( M_idx_5 != 0 ) { zc_int1 = X_idx_29 -
t53 * d_efOut [ 0 ] ; } else { zc_int1 = X_idx_29 - X_idx_11 ; } out . mX [ 0
] = - 0.0 ; out . mX [ 1 ] = - 0.0 ; out . mX [ 2 ] = - 0.0 ; out . mX [ 3 ]
= - 0.0 ; out . mX [ 4 ] = - 0.0 ; out . mX [ 5 ] = - 0.0 ; out . mX [ 6 ] =
- 0.0 ; out . mX [ 7 ] = - 0.0 ; out . mX [ 8 ] = - 0.0 ; out . mX [ 9 ] = -
0.0 ; out . mX [ 10 ] = - 0.0 ; out . mX [ 11 ] = - 0.0 ; out . mX [ 12 ] =
0.0 ; out . mX [ 13 ] = 0.0 ; out . mX [ 14 ] = 0.0 ; out . mX [ 15 ] = 0.0 ;
out . mX [ 16 ] = 0.0 ; out . mX [ 17 ] = 0.0 ; out . mX [ 18 ] = - ( X_idx_0
* X_idx_24 * 0.001 / 12.0 * 1000.0 ) ; out . mX [ 19 ] = X_idx_6 ; out . mX [
20 ] = - ( X_idx_1 * X_idx_25 * 0.001 / 12.0 * 1000.0 ) ; out . mX [ 21 ] =
t18 ; out . mX [ 22 ] = - ( X_idx_2 * X_idx_26 * 0.001 / 12.0 * 1000.0 ) ;
out . mX [ 23 ] = t15 ; out . mX [ 24 ] = - ( X_idx_3 * X_idx_27 * 0.001 /
12.0 * 1000.0 ) ; out . mX [ 25 ] = t12 ; out . mX [ 26 ] = - ( X_idx_4 *
X_idx_28 * 0.001 / 12.0 * 1000.0 ) ; out . mX [ 27 ] = zc_int11 ; out . mX [
28 ] = - ( X_idx_5 * X_idx_29 * 0.001 / 12.0 * 1000.0 ) ; out . mX [ 29 ] =
zc_int1 ; ( void ) sys ; ( void ) t67 ; return 0 ; }
