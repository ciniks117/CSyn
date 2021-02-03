#include "__cf_closedLoop_tuned.h"
#include "ne_ds.h"
#include "closedLoop_tuned_57a28c5_2_ds_dxf.h"
#include "closedLoop_tuned_57a28c5_2_ds_sys_struct.h"
#include "closedLoop_tuned_57a28c5_2_ds_externals.h"
#include "closedLoop_tuned_57a28c5_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T closedLoop_tuned_57a28c5_2_ds_dxf ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t111 , NeDsMethodOutput * t112 ) { PmRealVector
out ; real_T nonscalar0 [ 7 ] ; real_T nonscalar2 [ 7 ] ; real_T nonscalar3 [
7 ] ; real_T nonscalar1 [ 7 ] ; real_T t8 ; real_T t9 ; real_T t10 ; real_T
t12 ; real_T t14 ; real_T t16 ; real_T t18 ; boolean_T t38 [ 2 ] ; real_T t48
[ 1 ] ; real_T t76 ; real_T t77 ; ETTS0 efOut ; size_t _in1ivar ; real_T
b_efOut [ 1 ] ; ETTS0 c_efOut ; real_T d_efOut [ 1 ] ; ETTS0 e_efOut ; real_T
f_efOut [ 1 ] ; ETTS0 g_efOut ; real_T h_efOut [ 1 ] ; ETTS0 i_efOut ; real_T
j_efOut [ 1 ] ; ETTS0 k_efOut ; real_T l_efOut [ 1 ] ; real_T X_idx_8 ;
real_T X_idx_9 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T X_idx_6 ; real_T
X_idx_7 ; real_T X_idx_24 ; real_T X_idx_0 ; real_T X_idx_26 ; real_T X_idx_2
; real_T X_idx_27 ; real_T X_idx_3 ; real_T X_idx_28 ; real_T X_idx_4 ;
real_T X_idx_29 ; real_T X_idx_5 ; real_T X_idx_25 ; real_T X_idx_1 ; int32_T
M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_2 ; int32_T M_idx_3 ; int32_T
M_idx_4 ; int32_T M_idx_5 ; M_idx_0 = t111 -> mM . mX [ 0 ] ; M_idx_1 = t111
-> mM . mX [ 1 ] ; M_idx_2 = t111 -> mM . mX [ 2 ] ; M_idx_3 = t111 -> mM .
mX [ 3 ] ; M_idx_4 = t111 -> mM . mX [ 4 ] ; M_idx_5 = t111 -> mM . mX [ 5 ]
; X_idx_0 = t111 -> mX . mX [ 0 ] ; X_idx_1 = t111 -> mX . mX [ 1 ] ; X_idx_2
= t111 -> mX . mX [ 2 ] ; X_idx_3 = t111 -> mX . mX [ 3 ] ; X_idx_4 = t111 ->
mX . mX [ 4 ] ; X_idx_5 = t111 -> mX . mX [ 5 ] ; X_idx_6 = t111 -> mX . mX [
6 ] ; X_idx_7 = t111 -> mX . mX [ 7 ] ; X_idx_8 = t111 -> mX . mX [ 8 ] ;
X_idx_9 = t111 -> mX . mX [ 9 ] ; X_idx_10 = t111 -> mX . mX [ 10 ] ;
X_idx_11 = t111 -> mX . mX [ 11 ] ; X_idx_24 = t111 -> mX . mX [ 24 ] ;
X_idx_25 = t111 -> mX . mX [ 25 ] ; X_idx_26 = t111 -> mX . mX [ 26 ] ;
X_idx_27 = t111 -> mX . mX [ 27 ] ; X_idx_28 = t111 -> mX . mX [ 28 ] ;
X_idx_29 = t111 -> mX . mX [ 29 ] ; out = t112 -> mDXF ; nonscalar0 [ 0 ] = -
523.59877559829886 ; nonscalar0 [ 1 ] = - 518.36278784231581 ; nonscalar0 [ 2
] = - 513.12680008633288 ; nonscalar0 [ 3 ] = - 0.0 ; nonscalar0 [ 4 ] =
513.12680008633288 ; nonscalar0 [ 5 ] = 518.36278784231581 ; nonscalar0 [ 6 ]
= 523.59877559829886 ; nonscalar2 [ 0 ] = 0.0 ; nonscalar2 [ 1 ] = 1.9 ;
nonscalar2 [ 2 ] = 1.9 ; nonscalar2 [ 3 ] = 1.9 ; nonscalar2 [ 4 ] = 1.9 ;
nonscalar2 [ 5 ] = 1.9 ; nonscalar2 [ 6 ] = 0.0 ; nonscalar3 [ 0 ] = 0.0 ;
nonscalar3 [ 1 ] = 7.0 ; nonscalar3 [ 2 ] = 7.0 ; nonscalar3 [ 3 ] = 7.0 ;
nonscalar3 [ 4 ] = 7.0 ; nonscalar3 [ 5 ] = 7.0 ; nonscalar3 [ 6 ] = 0.0 ;
nonscalar1 [ 0 ] = 0.0 ; nonscalar1 [ 1 ] = 4.0 ; nonscalar1 [ 2 ] = 4.0 ;
nonscalar1 [ 3 ] = 4.0 ; nonscalar1 [ 4 ] = 4.0 ; nonscalar1 [ 5 ] = 4.0 ;
nonscalar1 [ 6 ] = 0.0 ; if ( X_idx_8 > 0.0 ) { t12 = 1.0 ; } else { t12 =
X_idx_8 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_9 > 0.0 ) { t14 = 1.0 ; } else {
t14 = X_idx_9 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_10 > 0.0 ) { t16 = 1.0 ; }
else { t16 = X_idx_10 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_11 > 0.0 ) { t18 =
1.0 ; } else { t18 = X_idx_11 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_6 > 0.0 ) {
t8 = 1.0 ; } else { t8 = X_idx_6 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_7 > 0.0 )
{ t10 = 1.0 ; } else { t10 = X_idx_7 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_6 >
0.0 ) { t9 = 1.0 ; } else { t9 = X_idx_6 < 0.0 ? - 1.0 : 0.0 ; } if (
X_idx_11 > 0.0 ) { t77 = 1.0 ; } else { t77 = X_idx_11 < 0.0 ? - 1.0 : 0.0 ;
} if ( X_idx_7 > 0.0 ) { t76 = 1.0 ; } else { t76 = X_idx_7 < 0.0 ? - 1.0 :
0.0 ; } if ( X_idx_8 > 0.0 ) { X_idx_8 = 1.0 ; } else { X_idx_8 = X_idx_8 <
0.0 ? - 1.0 : 0.0 ; } if ( X_idx_9 > 0.0 ) { X_idx_7 = 1.0 ; } else { X_idx_7
= X_idx_9 < 0.0 ? - 1.0 : 0.0 ; } if ( X_idx_10 > 0.0 ) { X_idx_11 = 1.0 ; }
else { X_idx_11 = X_idx_10 < 0.0 ? - 1.0 : 0.0 ; } t48 [ 0ULL ] = t9 *
X_idx_0 ; t38 [ 0ULL ] = ( t8 * X_idx_0 < - 523.59877559829886 ) ; t38 [ 1ULL
] = ( t8 * X_idx_0 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & efOut . mField0 , ( void * ) &
efOut . mField1 , ( void * ) & efOut . mField2 , ( void * ) & efOut . mField3
, ( void * ) nonscalar0 , ( void * ) t48 , ( void * ) t38 , ( void * ) &
_in1ivar ) ; t38 [ 0ULL ] = ( t8 * X_idx_0 < - 523.59877559829886 ) ; t38 [
1ULL ] = ( t8 * X_idx_0 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_1d_linear_nearest_derivatives ( ( void * ) & b_efOut , ( void * ) efOut
. mField0 , ( void * ) efOut . mField1 , ( void * ) efOut . mField2 , ( void
* ) efOut . mField3 , ( void * ) nonscalar1 , ( void * ) t38 , ( void * ) &
_in1ivar ) ; t48 [ 0ULL ] = t77 * X_idx_5 ; t38 [ 0ULL ] = ( t18 * X_idx_5 <
- 523.59877559829886 ) ; t38 [ 1ULL ] = ( t18 * X_idx_5 <= 523.59877559829886
) ; _in1ivar = 7ULL ; tlu2_linear_nearest_prelookup ( ( void * ) & c_efOut .
mField0 , ( void * ) & c_efOut . mField1 , ( void * ) & c_efOut . mField2 , (
void * ) & c_efOut . mField3 , ( void * ) nonscalar0 , ( void * ) t48 , (
void * ) t38 , ( void * ) & _in1ivar ) ; t38 [ 0ULL ] = ( t18 * X_idx_5 < -
523.59877559829886 ) ; t38 [ 1ULL ] = ( t18 * X_idx_5 <= 523.59877559829886 )
; _in1ivar = 7ULL ; tlu2_1d_linear_nearest_derivatives ( ( void * ) & d_efOut
, ( void * ) c_efOut . mField0 , ( void * ) c_efOut . mField1 , ( void * )
c_efOut . mField2 , ( void * ) c_efOut . mField3 , ( void * ) nonscalar1 , (
void * ) t38 , ( void * ) & _in1ivar ) ; t48 [ 0ULL ] = t76 * X_idx_1 ; t38 [
0ULL ] = ( t10 * X_idx_1 < - 523.59877559829886 ) ; t38 [ 1ULL ] = ( t10 *
X_idx_1 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & e_efOut . mField0 , ( void * ) &
e_efOut . mField1 , ( void * ) & e_efOut . mField2 , ( void * ) & e_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t48 , ( void * ) t38 , ( void *
) & _in1ivar ) ; t38 [ 0ULL ] = ( t10 * X_idx_1 < - 523.59877559829886 ) ;
t38 [ 1ULL ] = ( t10 * X_idx_1 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_1d_linear_nearest_derivatives ( ( void * ) & f_efOut , ( void * )
e_efOut . mField0 , ( void * ) e_efOut . mField1 , ( void * ) e_efOut .
mField2 , ( void * ) e_efOut . mField3 , ( void * ) nonscalar2 , ( void * )
t38 , ( void * ) & _in1ivar ) ; t48 [ 0ULL ] = X_idx_8 * X_idx_2 ; t38 [ 0ULL
] = ( t12 * X_idx_2 < - 523.59877559829886 ) ; t38 [ 1ULL ] = ( t12 * X_idx_2
<= 523.59877559829886 ) ; _in1ivar = 7ULL ; tlu2_linear_nearest_prelookup ( (
void * ) & g_efOut . mField0 , ( void * ) & g_efOut . mField1 , ( void * ) &
g_efOut . mField2 , ( void * ) & g_efOut . mField3 , ( void * ) nonscalar0 ,
( void * ) t48 , ( void * ) t38 , ( void * ) & _in1ivar ) ; t38 [ 0ULL ] = (
t12 * X_idx_2 < - 523.59877559829886 ) ; t38 [ 1ULL ] = ( t12 * X_idx_2 <=
523.59877559829886 ) ; _in1ivar = 7ULL ; tlu2_1d_linear_nearest_derivatives (
( void * ) & h_efOut , ( void * ) g_efOut . mField0 , ( void * ) g_efOut .
mField1 , ( void * ) g_efOut . mField2 , ( void * ) g_efOut . mField3 , (
void * ) nonscalar2 , ( void * ) t38 , ( void * ) & _in1ivar ) ; t48 [ 0ULL ]
= X_idx_7 * X_idx_3 ; t38 [ 0ULL ] = ( t14 * X_idx_3 < - 523.59877559829886 )
; t38 [ 1ULL ] = ( t14 * X_idx_3 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & i_efOut . mField0 , ( void * ) &
i_efOut . mField1 , ( void * ) & i_efOut . mField2 , ( void * ) & i_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t48 , ( void * ) t38 , ( void *
) & _in1ivar ) ; t38 [ 0ULL ] = ( t14 * X_idx_3 < - 523.59877559829886 ) ;
t38 [ 1ULL ] = ( t14 * X_idx_3 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_1d_linear_nearest_derivatives ( ( void * ) & j_efOut , ( void * )
i_efOut . mField0 , ( void * ) i_efOut . mField1 , ( void * ) i_efOut .
mField2 , ( void * ) i_efOut . mField3 , ( void * ) nonscalar2 , ( void * )
t38 , ( void * ) & _in1ivar ) ; t48 [ 0ULL ] = X_idx_11 * X_idx_4 ; t38 [
0ULL ] = ( t16 * X_idx_4 < - 523.59877559829886 ) ; t38 [ 1ULL ] = ( t16 *
X_idx_4 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_linear_nearest_prelookup ( ( void * ) & k_efOut . mField0 , ( void * ) &
k_efOut . mField1 , ( void * ) & k_efOut . mField2 , ( void * ) & k_efOut .
mField3 , ( void * ) nonscalar0 , ( void * ) t48 , ( void * ) t38 , ( void *
) & _in1ivar ) ; t38 [ 0ULL ] = ( t16 * X_idx_4 < - 523.59877559829886 ) ;
t38 [ 1ULL ] = ( t16 * X_idx_4 <= 523.59877559829886 ) ; _in1ivar = 7ULL ;
tlu2_1d_linear_nearest_derivatives ( ( void * ) & l_efOut , ( void * )
k_efOut . mField0 , ( void * ) k_efOut . mField1 , ( void * ) k_efOut .
mField2 , ( void * ) k_efOut . mField3 , ( void * ) nonscalar3 , ( void * )
t38 , ( void * ) & _in1ivar ) ; if ( M_idx_0 != 0 ) { X_idx_6 = - ( b_efOut [
0 ] * t9 * t9 ) ; } else { X_idx_6 = 0.0 ; } if ( M_idx_1 != 0 ) { t9 = - (
f_efOut [ 0 ] * t76 * t76 ) ; } else { t9 = 0.0 ; } if ( M_idx_2 != 0 ) { t76
= - ( h_efOut [ 0 ] * X_idx_8 * X_idx_8 ) ; } else { t76 = 0.0 ; } if (
M_idx_3 != 0 ) { X_idx_8 = - ( j_efOut [ 0 ] * X_idx_7 * X_idx_7 ) ; } else {
X_idx_8 = 0.0 ; } if ( M_idx_4 != 0 ) { X_idx_7 = - ( l_efOut [ 0 ] *
X_idx_11 * X_idx_11 ) ; } else { X_idx_7 = 0.0 ; } if ( M_idx_5 != 0 ) {
X_idx_11 = - ( d_efOut [ 0 ] * t77 * t77 ) ; } else { X_idx_11 = 0.0 ; } out
. mX [ 0 ] = - ( 0.083333333333333329 * ( X_idx_24 * 0.001 ) * 1000.0 ) ; out
. mX [ 1 ] = X_idx_6 ; out . mX [ 2 ] = - ( 0.083333333333333329 * ( X_idx_25
* 0.001 ) * 1000.0 ) ; out . mX [ 3 ] = t9 ; out . mX [ 4 ] = - (
0.083333333333333329 * ( X_idx_26 * 0.001 ) * 1000.0 ) ; out . mX [ 5 ] = t76
; out . mX [ 6 ] = - ( 0.083333333333333329 * ( X_idx_27 * 0.001 ) * 1000.0 )
; out . mX [ 7 ] = X_idx_8 ; out . mX [ 8 ] = - ( 0.083333333333333329 * (
X_idx_28 * 0.001 ) * 1000.0 ) ; out . mX [ 9 ] = X_idx_7 ; out . mX [ 10 ] =
- ( 0.083333333333333329 * ( X_idx_29 * 0.001 ) * 1000.0 ) ; out . mX [ 11 ]
= X_idx_11 ; out . mX [ 12 ] = M_idx_0 != 0 ? 0.0 : - 1.0 ; out . mX [ 13 ] =
M_idx_1 != 0 ? 0.0 : - 1.0 ; out . mX [ 14 ] = M_idx_2 != 0 ? 0.0 : - 1.0 ;
out . mX [ 15 ] = M_idx_3 != 0 ? 0.0 : - 1.0 ; out . mX [ 16 ] = M_idx_4 != 0
? 0.0 : - 1.0 ; out . mX [ 17 ] = M_idx_5 != 0 ? 0.0 : - 1.0 ; out . mX [ 18
] = - ( 0.083333333333333329 * ( X_idx_0 * 0.001 ) * 1000.0 ) ; out . mX [ 19
] = 1.0 ; out . mX [ 20 ] = - ( 0.083333333333333329 * ( X_idx_1 * 0.001 ) *
1000.0 ) ; out . mX [ 21 ] = 1.0 ; out . mX [ 22 ] = - ( 0.083333333333333329
* ( X_idx_2 * 0.001 ) * 1000.0 ) ; out . mX [ 23 ] = 1.0 ; out . mX [ 24 ] =
- ( 0.083333333333333329 * ( X_idx_3 * 0.001 ) * 1000.0 ) ; out . mX [ 25 ] =
1.0 ; out . mX [ 26 ] = - ( 0.083333333333333329 * ( X_idx_4 * 0.001 ) *
1000.0 ) ; out . mX [ 27 ] = 1.0 ; out . mX [ 28 ] = - ( 0.083333333333333329
* ( X_idx_5 * 0.001 ) * 1000.0 ) ; out . mX [ 29 ] = 1.0 ; ( void ) sys ; (
void ) t112 ; return 0 ; }
