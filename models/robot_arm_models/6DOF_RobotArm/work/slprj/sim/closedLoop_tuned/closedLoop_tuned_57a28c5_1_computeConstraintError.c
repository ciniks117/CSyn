#include "__cf_closedLoop_tuned.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void closedLoop_tuned_57a28c5_1_computeConstraintError ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const double * state , double *
error ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; double xx [ 58 ] ; ( void ) mech ; ( void )
rtdvd ; ( void ) rtdvi ; xx [ 0 ] = - 0.99302022896367 ; xx [ 1 ] =
0.1066412368322485 ; xx [ 2 ] = - 0.03120900126866927 ; xx [ 3 ] = -
0.03955337805600653 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 8 ] ; xx
[ 6 ] = sin ( xx [ 5 ] ) ; xx [ 7 ] = cos ( xx [ 5 ] ) ; xx [ 8 ] =
0.07189840968753769 * xx [ 6 ] ; xx [ 9 ] = 0.9741263695734882 * xx [ 6 ] ;
xx [ 10 ] = 0.2142625370567126 * xx [ 6 ] ; pm_math_quatCompose ( xx + 0 , xx
+ 7 , xx + 11 ) ; xx [ 0 ] = 0.05182593581663095 ; xx [ 1 ] = -
0.1519742715228705 ; xx [ 2 ] = - 0.1034434723147636 ; xx [ 3 ] =
0.981589191671999 ; xx [ 5 ] = xx [ 4 ] * state [ 10 ] ; xx [ 6 ] = sin ( xx
[ 5 ] ) ; xx [ 7 ] = cos ( xx [ 5 ] ) ; xx [ 8 ] = - ( 8.039551964383884e-5 *
xx [ 6 ] ) ; xx [ 9 ] = - ( 0.9999878887291287 * xx [ 6 ] ) ; xx [ 10 ] = - (
4.920968565308881e-3 * xx [ 6 ] ) ; pm_math_quatCompose ( xx + 0 , xx + 7 ,
xx + 15 ) ; pm_math_quatCompose ( xx + 11 , xx + 15 , xx + 0 ) ; xx [ 5 ] = -
7.044490589730112e-3 ; xx [ 6 ] = - 6.108478301373796e-3 ; xx [ 7 ] = -
4.589550344615505e-3 ; pm_math_quatXform ( xx + 0 , xx + 5 , xx + 8 ) ; xx [
0 ] = - 0.02929060823879809 ; xx [ 1 ] = 7.402384199146024e-3 ; xx [ 2 ] =
5.50599994432713e-4 ; pm_math_quatXform ( xx + 15 , xx + 0 , xx + 5 ) ; xx [
0 ] = 0.01141939320659117 - xx [ 5 ] ; xx [ 1 ] = - ( 7.654873829231559e-3 +
xx [ 6 ] ) ; xx [ 2 ] = - ( 5.163891526827933e-4 + xx [ 7 ] ) ;
pm_math_quatXform ( xx + 11 , xx + 0 , xx + 5 ) ; xx [ 0 ] = -
6.666465945763514e-3 ; xx [ 1 ] = - 8.669348660839774e-3 ; xx [ 2 ] =
1.866534164845896e-3 ; pm_math_quatXform ( xx + 11 , xx + 0 , xx + 15 ) ; xx
[ 0 ] = 2.0 ; xx [ 1 ] = 6.323084164593961e-8 ; xx [ 2 ] = xx [ 4 ] * state [
12 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 11 ] = 6.267148658367121e-8 ; xx [
12 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 1 ] * xx [ 3 ] - xx [ 11 ] * xx [
12 ] ; xx [ 13 ] = 0.9999999999999174 ; xx [ 14 ] = 3.964687873836087e-7 ; xx
[ 18 ] = xx [ 13 ] * xx [ 12 ] + xx [ 14 ] * xx [ 3 ] ; xx [ 19 ] = xx [ 11 ]
* xx [ 3 ] + xx [ 1 ] * xx [ 12 ] ; xx [ 20 ] = xx [ 2 ] ; xx [ 21 ] = - xx [
18 ] ; xx [ 22 ] = xx [ 19 ] ; xx [ 23 ] = 6.132102448427665e-3 ; xx [ 24 ] =
xx [ 19 ] * xx [ 23 ] ; xx [ 25 ] = 0.01309538769594443 ; xx [ 26 ] = xx [ 19
] * xx [ 25 ] ; xx [ 27 ] = xx [ 23 ] * xx [ 2 ] - xx [ 18 ] * xx [ 25 ] ; xx
[ 28 ] = - xx [ 24 ] ; xx [ 29 ] = - xx [ 26 ] ; xx [ 30 ] = xx [ 27 ] ;
pm_math_cross3 ( xx + 20 , xx + 28 , xx + 31 ) ; xx [ 23 ] = xx [ 14 ] * xx [
12 ] - xx [ 13 ] * xx [ 3 ] ; xx [ 3 ] = 9.180102448427657e-3 ; xx [ 12 ] =
xx [ 19 ] * xx [ 3 ] ; xx [ 28 ] = 8.748612304055577e-3 ; xx [ 29 ] = xx [ 19
] * xx [ 28 ] ; xx [ 19 ] = xx [ 18 ] * xx [ 28 ] - xx [ 3 ] * xx [ 2 ] ; xx
[ 34 ] = xx [ 12 ] ; xx [ 35 ] = xx [ 29 ] ; xx [ 36 ] = xx [ 19 ] ;
pm_math_cross3 ( xx + 20 , xx + 34 , xx + 37 ) ; xx [ 40 ] = -
0.993020263593104 ; xx [ 41 ] = - 0.1066411692347894 ; xx [ 42 ] =
0.03120822428610398 ; xx [ 43 ] = - 0.03955330396602025 ; xx [ 2 ] = xx [ 4 ]
* state [ 14 ] ; xx [ 3 ] = sin ( xx [ 2 ] ) ; xx [ 44 ] = cos ( xx [ 2 ] ) ;
xx [ 45 ] = 0.07189841740695141 * xx [ 3 ] ; xx [ 46 ] = 0.9741263571870624 *
xx [ 3 ] ; xx [ 47 ] = - ( 0.2142625907801925 * xx [ 3 ] ) ;
pm_math_quatCompose ( xx + 40 , xx + 44 , xx + 48 ) ; xx [ 40 ] = -
0.9815891861559222 ; xx [ 41 ] = 0.1034434979269754 ; xx [ 42 ] = -
0.1519742864170317 ; xx [ 43 ] = 0.05182594549470909 ; xx [ 2 ] = xx [ 4 ] *
state [ 16 ] ; xx [ 3 ] = sin ( xx [ 2 ] ) ; xx [ 44 ] = cos ( xx [ 2 ] ) ;
xx [ 45 ] = 8.039551964356129e-5 * xx [ 3 ] ; xx [ 46 ] = 0.9999878887291285
* xx [ 3 ] ; xx [ 47 ] = 4.920968565308659e-3 * xx [ 3 ] ;
pm_math_quatCompose ( xx + 40 , xx + 44 , xx + 52 ) ; pm_math_quatCompose (
xx + 48 , xx + 52 , xx + 40 ) ; xx [ 20 ] = - 7.043504602604413e-3 ; xx [ 21
] = 6.155578060373999e-3 ; xx [ 22 ] = - 4.529198577839576e-3 ;
pm_math_quatXform ( xx + 40 , xx + 20 , xx + 34 ) ; xx [ 20 ] = -
0.02929179843054367 ; xx [ 21 ] = - 7.401641399973765e-3 ; xx [ 22 ] =
4.777489675008928e-4 ; pm_math_quatXform ( xx + 52 , xx + 20 , xx + 40 ) ; xx
[ 20 ] = 0.01141939394132858 - xx [ 40 ] ; xx [ 21 ] = - (
7.654873922132995e-3 + xx [ 41 ] ) ; xx [ 22 ] = 5.163893604838405e-4 - xx [
42 ] ; pm_math_quatXform ( xx + 48 , xx + 20 , xx + 40 ) ; xx [ 20 ] = -
6.666465301335936e-3 ; xx [ 21 ] = - 8.669348610704675e-3 ; xx [ 22 ] = -
1.866533332507701e-3 ; pm_math_quatXform ( xx + 48 , xx + 20 , xx + 43 ) ; xx
[ 2 ] = xx [ 4 ] * state [ 18 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] =
sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 1 ] * xx [ 3 ] - xx [ 11 ] * xx [ 4 ] ; xx
[ 18 ] = xx [ 13 ] * xx [ 4 ] + xx [ 14 ] * xx [ 3 ] ; xx [ 20 ] = xx [ 11 ]
* xx [ 3 ] + xx [ 1 ] * xx [ 4 ] ; xx [ 46 ] = xx [ 2 ] ; xx [ 47 ] = - xx [
18 ] ; xx [ 48 ] = xx [ 20 ] ; xx [ 1 ] = 6.132102448427664e-3 ; xx [ 11 ] =
xx [ 20 ] * xx [ 1 ] ; xx [ 21 ] = xx [ 20 ] * xx [ 25 ] ; xx [ 22 ] = xx [ 1
] * xx [ 2 ] - xx [ 18 ] * xx [ 25 ] ; xx [ 49 ] = - xx [ 11 ] ; xx [ 50 ] =
- xx [ 21 ] ; xx [ 51 ] = xx [ 22 ] ; pm_math_cross3 ( xx + 46 , xx + 49 , xx
+ 52 ) ; xx [ 1 ] = xx [ 14 ] * xx [ 4 ] - xx [ 13 ] * xx [ 3 ] ; xx [ 3 ] =
9.180102448427653e-3 ; xx [ 4 ] = xx [ 20 ] * xx [ 3 ] ; xx [ 13 ] = xx [ 20
] * xx [ 28 ] ; xx [ 14 ] = xx [ 18 ] * xx [ 28 ] - xx [ 3 ] * xx [ 2 ] ; xx
[ 49 ] = xx [ 4 ] ; xx [ 50 ] = xx [ 13 ] ; xx [ 51 ] = xx [ 14 ] ;
pm_math_cross3 ( xx + 46 , xx + 49 , xx + 55 ) ; error [ 0 ] = xx [ 8 ] + xx
[ 5 ] - xx [ 15 ] - ( xx [ 0 ] * ( xx [ 31 ] - xx [ 24 ] * xx [ 23 ] ) - xx [
0 ] * ( xx [ 37 ] + xx [ 12 ] * xx [ 23 ] ) ) + 1.390950249792803e-3 ; error
[ 1 ] = xx [ 9 ] + xx [ 6 ] - xx [ 16 ] - ( ( xx [ 32 ] - xx [ 26 ] * xx [ 23
] ) * xx [ 0 ] - ( xx [ 29 ] * xx [ 23 ] + xx [ 38 ] ) * xx [ 0 ] ) -
0.0153122030499485 ; error [ 2 ] = xx [ 10 ] + xx [ 7 ] - xx [ 17 ] - ( ( xx
[ 27 ] * xx [ 23 ] + xx [ 33 ] ) * xx [ 0 ] - ( xx [ 19 ] * xx [ 23 ] + xx [
39 ] ) * xx [ 0 ] ) - 5.667629212745225e-3 ; error [ 3 ] = xx [ 34 ] + xx [
40 ] - xx [ 43 ] - ( xx [ 0 ] * ( xx [ 52 ] - xx [ 11 ] * xx [ 1 ] ) - xx [ 0
] * ( xx [ 55 ] + xx [ 4 ] * xx [ 1 ] ) ) + 1.390959237970934e-3 ; error [ 4
] = xx [ 35 ] + xx [ 41 ] - xx [ 44 ] - ( ( xx [ 53 ] - xx [ 21 ] * xx [ 1 ]
) * xx [ 0 ] - ( xx [ 13 ] * xx [ 1 ] + xx [ 56 ] ) * xx [ 0 ] ) -
0.01531220161646909 ; error [ 5 ] = xx [ 36 ] + xx [ 42 ] - xx [ 45 ] - ( (
xx [ 22 ] * xx [ 1 ] + xx [ 54 ] ) * xx [ 0 ] - ( xx [ 14 ] * xx [ 1 ] + xx [
57 ] ) * xx [ 0 ] ) + 5.667661648721102e-3 ; }
