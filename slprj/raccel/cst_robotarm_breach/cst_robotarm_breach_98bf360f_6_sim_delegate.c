#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void cst_robotarm_breach_98bf360f_6_resetSimStateVector ( const void * mech ,
double * state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [
0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3
] = xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ]
= xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] =
xx [ 0 ] ; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] =
xx [ 0 ] ; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] =
xx [ 0 ] ; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] =
xx [ 0 ] ; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] =
xx [ 0 ] ; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] =
xx [ 0 ] ; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] =
xx [ 0 ] ; state [ 28 ] = xx [ 0 ] ; } static void
perturbSimJointPrimitiveState_0_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbSimJointPrimitiveState_0_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 1 ]
= state [ 1 ] - 0.875 * mag ; } static void perturbSimJointPrimitiveState_1_0
( double mag , double * state ) { state [ 2 ] = state [ 2 ] + mag ; } static
void perturbSimJointPrimitiveState_1_0v ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_2_0 ( double mag , double * state )
{ state [ 4 ] = state [ 4 ] + mag ; } static void
perturbSimJointPrimitiveState_2_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbSimJointPrimitiveState_3_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_4_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbSimJointPrimitiveState_4_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbSimJointPrimitiveState_5_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_6_0 ( double mag , double * state )
{ state [ 12 ] = state [ 12 ] + mag ; } static void
perturbSimJointPrimitiveState_6_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void
perturbSimJointPrimitiveState_7_0v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_8_0 ( double mag , double * state )
{ state [ 16 ] = state [ 16 ] + mag ; } static void
perturbSimJointPrimitiveState_8_0v ( double mag , double * state ) { state [
16 ] = state [ 16 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_9_0 ( double mag , double * state )
{ state [ 18 ] = state [ 18 ] + mag ; } static void
perturbSimJointPrimitiveState_9_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 19 ] = state [ 19 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 20 ] = state [ 20 ] + mag ; } static void
perturbSimJointPrimitiveState_10_0v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
void cst_robotarm_breach_98bf360f_6_perturbSimJointPrimitiveState ( const
void * mech , size_t stageIdx , size_t primIdx , double mag , boolean_T
doPerturbVelocity , double * state ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ;
switch ( ( stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) {
case 0 : perturbSimJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbSimJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbSimJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbSimJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbSimJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbSimJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbSimJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbSimJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbSimJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbSimJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbSimJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbSimJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbSimJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbSimJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbSimJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbSimJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbSimJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbSimJointPrimitiveState_8_0v ( mag , state ) ; break ; case 108 :
perturbSimJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbSimJointPrimitiveState_9_0v ( mag , state ) ; break ; case 120 :
perturbSimJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbSimJointPrimitiveState_10_0v ( mag , state ) ; break ; } } void
cst_robotarm_breach_98bf360f_6_perturbFlexibleBodyState ( const void * mech ,
size_t stageIdx , double mag , boolean_T doPerturbVelocity , double * state )
{ ( void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void )
doPerturbVelocity ; ( void ) state ; switch ( stageIdx * 2 + (
doPerturbVelocity ? 1 : 0 ) ) { } } void
cst_robotarm_breach_98bf360f_6_constructStateVector ( const void * mech ,
const double * solverState , const double * u , const double * uDot , double
* discreteState , double * fullState ) { ( void ) mech ; ( void ) u ; ( void
) uDot ; fullState [ 0 ] = solverState [ 0 ] ; fullState [ 1 ] = solverState
[ 1 ] ; fullState [ 2 ] = solverState [ 2 ] ; fullState [ 3 ] = solverState [
3 ] ; fullState [ 4 ] = solverState [ 4 ] ; fullState [ 5 ] = solverState [ 5
] ; fullState [ 6 ] = solverState [ 6 ] ; fullState [ 7 ] = solverState [ 7 ]
; fullState [ 8 ] = solverState [ 8 ] ; fullState [ 9 ] = solverState [ 9 ] ;
fullState [ 10 ] = solverState [ 10 ] ; fullState [ 11 ] = solverState [ 11 ]
; fullState [ 12 ] = solverState [ 12 ] ; fullState [ 13 ] = solverState [ 13
] ; fullState [ 14 ] = solverState [ 14 ] ; fullState [ 15 ] = solverState [
15 ] ; fullState [ 16 ] = solverState [ 16 ] ; fullState [ 17 ] = solverState
[ 17 ] ; fullState [ 18 ] = solverState [ 18 ] ; fullState [ 19 ] =
solverState [ 19 ] ; fullState [ 20 ] = solverState [ 20 ] ; fullState [ 21 ]
= solverState [ 21 ] ; fullState [ 22 ] = solverState [ 22 ] ; fullState [ 23
] = solverState [ 23 ] ; fullState [ 24 ] = solverState [ 24 ] ; fullState [
25 ] = solverState [ 25 ] ; fullState [ 26 ] = solverState [ 26 ] ; fullState
[ 27 ] = solverState [ 27 ] ; fullState [ 28 ] = discreteState [ 0 ] ; } void
cst_robotarm_breach_98bf360f_6_extractSolverStateVector ( const void * mech ,
const double * fullState , double * solverState ) { ( void ) mech ;
solverState [ 0 ] = fullState [ 0 ] ; solverState [ 1 ] = fullState [ 1 ] ;
solverState [ 2 ] = fullState [ 2 ] ; solverState [ 3 ] = fullState [ 3 ] ;
solverState [ 4 ] = fullState [ 4 ] ; solverState [ 5 ] = fullState [ 5 ] ;
solverState [ 6 ] = fullState [ 6 ] ; solverState [ 7 ] = fullState [ 7 ] ;
solverState [ 8 ] = fullState [ 8 ] ; solverState [ 9 ] = fullState [ 9 ] ;
solverState [ 10 ] = fullState [ 10 ] ; solverState [ 11 ] = fullState [ 11 ]
; solverState [ 12 ] = fullState [ 12 ] ; solverState [ 13 ] = fullState [ 13
] ; solverState [ 14 ] = fullState [ 14 ] ; solverState [ 15 ] = fullState [
15 ] ; solverState [ 16 ] = fullState [ 16 ] ; solverState [ 17 ] = fullState
[ 17 ] ; solverState [ 18 ] = fullState [ 18 ] ; solverState [ 19 ] =
fullState [ 19 ] ; solverState [ 20 ] = fullState [ 20 ] ; solverState [ 21 ]
= fullState [ 21 ] ; solverState [ 22 ] = fullState [ 22 ] ; solverState [ 23
] = fullState [ 23 ] ; solverState [ 24 ] = fullState [ 24 ] ; solverState [
25 ] = fullState [ 25 ] ; solverState [ 26 ] = fullState [ 26 ] ; solverState
[ 27 ] = fullState [ 27 ] ; } int
cst_robotarm_breach_98bf360f_6_isPositionViolation ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const
double * state , const int * modeVector ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii [ 3
] ; double xx [ 53 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) eqnEnableFlags ; ( void ) modeVector ; xx [ 0 ] = 2.0 ; xx [ 1 ] =
0.6953254828680254 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 12 ] ; xx
[ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] = 0.4061050908592153 ; xx [ 6 ] = cos (
xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [ 4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ]
= xx [ 2 ] * state [ 18 ] ; xx [ 8 ] = sin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 1 ]
* xx [ 6 ] + xx [ 5 ] * xx [ 4 ] ; xx [ 1 ] = cos ( xx [ 7 ] ) ; xx [ 5 ] =
0.5912864502323997 ; xx [ 7 ] = 0.04451361391915684 ; xx [ 10 ] = xx [ 5 ] *
xx [ 4 ] - xx [ 7 ] * xx [ 6 ] ; xx [ 11 ] = xx [ 7 ] * xx [ 4 ] + xx [ 5 ] *
xx [ 6 ] ; xx [ 4 ] = - ( xx [ 3 ] * xx [ 8 ] - xx [ 9 ] * xx [ 1 ] ) ; xx [
5 ] = xx [ 10 ] * xx [ 1 ] + xx [ 11 ] * xx [ 8 ] ; xx [ 6 ] = xx [ 10 ] * xx
[ 8 ] - xx [ 11 ] * xx [ 1 ] ; xx [ 7 ] = - ( xx [ 9 ] * xx [ 8 ] + xx [ 3 ]
* xx [ 1 ] ) ; xx [ 12 ] = - 0.9899003997337941 ; xx [ 13 ] = xx [ 12 ] ; xx
[ 14 ] = 0.01994045583473794 ; xx [ 15 ] = 0.09771574456570448 ; xx [ 16 ] =
0.1007532138045611 ; xx [ 17 ] = xx [ 2 ] * state [ 20 ] ; xx [ 18 ] = sin (
xx [ 17 ] ) ; xx [ 19 ] = 0.9801080229701458 ; xx [ 20 ] = cos ( xx [ 17 ] )
; xx [ 21 ] = - ( 0.1974758392319079 * xx [ 18 ] ) ; xx [ 22 ] =
0.0197877797947617 * xx [ 18 ] ; xx [ 23 ] = - ( xx [ 19 ] * xx [ 18 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 13 , xx + 20 , xx + 24 ) ;
pm_math_Quaternion_compose_ra ( xx + 4 , xx + 24 , xx + 13 ) ; xx [ 20 ] =
0.3857454927643891 ; xx [ 21 ] = 0.5034016931648384 ; xx [ 22 ] =
0.5842144511346662 ; xx [ 23 ] = 0.5064391624036924 ;
pm_math_Quaternion_compose_ra ( xx + 13 , xx + 20 , xx + 28 ) ; xx [ 17 ] =
1.0 ; xx [ 20 ] = xx [ 0 ] * ( xx [ 28 ] * xx [ 30 ] + xx [ 29 ] * xx [ 31 ]
) ; xx [ 21 ] = xx [ 0 ] * ( xx [ 30 ] * xx [ 31 ] - xx [ 28 ] * xx [ 29 ] )
; xx [ 22 ] = xx [ 17 ] - xx [ 0 ] * ( xx [ 29 ] * xx [ 29 ] + xx [ 30 ] * xx
[ 30 ] ) ; xx [ 28 ] = 0.3415522478515933 ; xx [ 29 ] = - 0.03450918424939525
; xx [ 30 ] = 0.9392290339368587 ; xx [ 31 ] = 5.728444065062708e-4 ; xx [ 32
] = - 0.0463662621131998 ; xx [ 33 ] = 7.575300750045659e-3 ;
pm_math_Quaternion_xform_ra ( xx + 13 , xx + 31 , xx + 34 ) ; xx [ 13 ] = -
0.0265553585823144 ; xx [ 14 ] = - 1.235088037631146e-3 ; xx [ 15 ] = -
2.882515487549136e-3 ; pm_math_Quaternion_xform_ra ( xx + 24 , xx + 13 , xx +
31 ) ; xx [ 13 ] = - ( 8.500000000000004e-3 + xx [ 31 ] ) ; xx [ 14 ] = - xx
[ 32 ] ; xx [ 15 ] = 9.999999999999992e-4 - xx [ 33 ] ;
pm_math_Quaternion_xform_ra ( xx + 4 , xx + 13 , xx + 23 ) ; xx [ 4 ] = xx [
10 ] ; xx [ 5 ] = - xx [ 9 ] ; xx [ 6 ] = xx [ 3 ] ; xx [ 7 ] = - xx [ 11 ] ;
xx [ 13 ] = 8.500005402767106e-3 ; xx [ 14 ] = 2.534418181099341e-9 * xx [ 1
] - xx [ 13 ] * xx [ 8 ] ; xx [ 15 ] = 6.499999983768677e-3 ; xx [ 31 ] = - (
xx [ 13 ] + xx [ 0 ] * xx [ 14 ] * xx [ 8 ] ) ; xx [ 32 ] = xx [ 0 ] * xx [
14 ] * xx [ 1 ] + 7.499997465581819e-3 ; xx [ 33 ] = xx [ 0 ] * ( xx [ 15 ] *
xx [ 1 ] * xx [ 1 ] + xx [ 15 ] * xx [ 8 ] * xx [ 8 ] ) - 0.01420789472061078
; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 31 , xx + 13 ) ; xx [ 31 ] = -
6.31742519402702e-9 ; xx [ 32 ] = 6.11133899174537e-11 ; xx [ 33 ] = -
0.01723973036822852 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 31 , xx +
37 ) ; xx [ 1 ] = 1.144603405378138e-3 + xx [ 37 ] ; xx [ 8 ] =
4.103366750367182e-3 ; xx [ 16 ] = 4.83817857357089e-3 - xx [ 38 ] ; xx [ 18
] = 0.0139940128625294 ; xx [ 26 ] = 5.457891674323079e-3 + xx [ 39 ] ; xx [
27 ] = 0.02757292748492293 ; xx [ 31 ] = xx [ 34 ] + xx [ 23 ] + xx [ 13 ] -
xx [ 1 ] - xx [ 8 ] ; xx [ 32 ] = xx [ 35 ] + xx [ 24 ] + xx [ 14 ] + xx [ 16
] - xx [ 18 ] ; xx [ 33 ] = xx [ 36 ] + xx [ 25 ] + xx [ 15 ] - xx [ 26 ] -
xx [ 27 ] ; xx [ 13 ] = - 0.3826804379272111 ; xx [ 14 ] = 0.9076319526101295
; xx [ 15 ] = 0.1725106403354915 ; xx [ 23 ] = xx [ 2 ] * state [ 14 ] ; xx [
24 ] = cos ( xx [ 23 ] ) ; xx [ 25 ] = sin ( xx [ 23 ] ) ; xx [ 34 ] = xx [
10 ] * xx [ 24 ] + xx [ 11 ] * xx [ 25 ] ; xx [ 35 ] = xx [ 3 ] * xx [ 25 ] -
xx [ 9 ] * xx [ 24 ] ; xx [ 36 ] = xx [ 3 ] * xx [ 24 ] + xx [ 9 ] * xx [ 25
] ; xx [ 37 ] = xx [ 10 ] * xx [ 25 ] - xx [ 11 ] * xx [ 24 ] ; xx [ 38 ] =
xx [ 12 ] ; xx [ 39 ] = - 0.01994045583473804 ; xx [ 40 ] = -
0.09771574456570453 ; xx [ 41 ] = 0.1007532138045611 ; xx [ 3 ] = xx [ 2 ] *
state [ 16 ] ; xx [ 9 ] = sin ( xx [ 3 ] ) ; xx [ 42 ] = cos ( xx [ 3 ] ) ;
xx [ 43 ] = 0.197475839231908 * xx [ 9 ] ; xx [ 44 ] = - (
0.01978777979476189 * xx [ 9 ] ) ; xx [ 45 ] = - ( xx [ 19 ] * xx [ 9 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 38 , xx + 42 , xx + 9 ) ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 9 , xx + 38 ) ; xx [ 42 ] =
0.5034016931648424 ; xx [ 43 ] = 0.3857454927643942 ; xx [ 44 ] =
0.5064391624036884 ; xx [ 45 ] = 0.5842144511346627 ;
pm_math_Quaternion_compose_ra ( xx + 38 , xx + 42 , xx + 46 ) ; xx [ 42 ] =
xx [ 0 ] * ( xx [ 46 ] * xx [ 48 ] + xx [ 47 ] * xx [ 49 ] ) ; xx [ 43 ] = xx
[ 0 ] * ( xx [ 48 ] * xx [ 49 ] - xx [ 46 ] * xx [ 47 ] ) ; xx [ 44 ] = xx [
17 ] - xx [ 0 ] * ( xx [ 47 ] * xx [ 47 ] + xx [ 48 ] * xx [ 48 ] ) ; xx [ 45
] = - 0.01271019941645938 ; xx [ 46 ] = 0.02011896482120349 ; xx [ 47 ] = -
0.01159391418917814 ; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 45 , xx +
48 ) ; xx [ 38 ] = - 0.02695031004471146 ; xx [ 39 ] = - 1.195512210539264e-3
; xx [ 40 ] = 4.842731578975556e-3 ; pm_math_Quaternion_xform_ra ( xx + 9 ,
xx + 38 , xx + 45 ) ; xx [ 9 ] = 8.499999999999994e-3 - xx [ 45 ] ; xx [ 10 ]
= - xx [ 46 ] ; xx [ 11 ] = 1.000000000000001e-3 - xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 9 , xx + 38 ) ; xx [ 3 ] =
8.499995046130028e-3 ; xx [ 9 ] = 3.566398367738088e-9 * xx [ 25 ] ; xx [ 10
] = xx [ 3 ] * xx [ 25 ] ; xx [ 34 ] = xx [ 3 ] - xx [ 0 ] * ( xx [ 9 ] * xx
[ 24 ] + xx [ 10 ] * xx [ 25 ] ) ; xx [ 35 ] = - ( 7.499996433601628e-3 + xx
[ 0 ] * ( xx [ 9 ] * xx [ 25 ] - xx [ 10 ] * xx [ 24 ] ) ) ; xx [ 36 ] = -
1.207894729634444e-3 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 34 , xx +
9 ) ; xx [ 3 ] = xx [ 48 ] + xx [ 38 ] + xx [ 9 ] - xx [ 1 ] - xx [ 8 ] ; xx
[ 4 ] = xx [ 49 ] + xx [ 39 ] + xx [ 10 ] + xx [ 16 ] - xx [ 18 ] ; xx [ 5 ]
= xx [ 50 ] + xx [ 40 ] + xx [ 11 ] - xx [ 26 ] - xx [ 27 ] ; xx [ 6 ] = -
0.215751709792892 ; xx [ 7 ] = - 0.2981849626920737 ; xx [ 8 ] = -
2.033832353854736e-3 ; xx [ 9 ] = - 0.929802554993116 ; xx [ 1 ] = xx [ 2 ] *
state [ 10 ] ; xx [ 10 ] = sin ( xx [ 1 ] ) ; xx [ 23 ] = cos ( xx [ 1 ] ) ;
xx [ 24 ] = - ( 0.3826804379272233 * xx [ 10 ] ) ; xx [ 25 ] =
0.9076319526101237 * xx [ 10 ] ; xx [ 26 ] = 0.1725106403354957 * xx [ 10 ] ;
pm_math_Quaternion_compose_ra ( xx + 6 , xx + 23 , xx + 34 ) ; xx [ 6 ] =
0.01025445069467229 ; xx [ 7 ] = - 9.847964366436174e-3 ; xx [ 8 ] = -
0.01014277598357412 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 6 , xx + 9
) ; xx [ 6 ] = 0.01409005672401682 ; xx [ 7 ] = - 0.01894515942744741 ; xx [
8 ] = - 0.01187185013165681 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 6
, xx + 23 ) ; xx [ 38 ] = - 0.9890584029719356 ; xx [ 39 ] =
0.02451507747925197 ; xx [ 40 ] = - 0.1451159893451954 ; xx [ 41 ] = -
0.01019000113620927 ; xx [ 1 ] = xx [ 2 ] * state [ 8 ] ; xx [ 2 ] = sin ( xx
[ 1 ] ) ; xx [ 45 ] = cos ( xx [ 1 ] ) ; xx [ 46 ] = - ( 0.01619418156754471
* xx [ 2 ] ) ; xx [ 47 ] = - ( 0.9998688656410684 * xx [ 2 ] ) ; xx [ 48 ] =
- ( 2.236298900726297e-6 * xx [ 2 ] ) ; pm_math_Quaternion_compose_ra ( xx +
38 , xx + 45 , xx + 49 ) ; xx [ 6 ] = - 1.779962358034746e-3 ; xx [ 7 ] = -
2.813288543230789e-4 ; xx [ 8 ] = - 3.860324031167178e-7 ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 6 , xx + 38 ) ; xx [ 6 ] = -
1.734877756550734e-3 ; xx [ 7 ] = 2.502306067621761e-3 ; xx [ 8 ] = -
3.798065468850008e-7 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 6 , xx +
45 ) ; xx [ 6 ] = xx [ 9 ] - xx [ 23 ] + 0.0308855674310194 - ( xx [ 38 ] -
xx [ 45 ] - 7.499921419650881e-3 ) ; xx [ 7 ] = xx [ 10 ] - xx [ 24 ] -
9.289825552270628e-3 - ( xx [ 39 ] - xx [ 46 ] - 0.01644245306791676 ) ; xx [
8 ] = xx [ 11 ] - xx [ 25 ] - 6.447531210979022e-4 - ( xx [ 40 ] - xx [ 47 ]
+ 0.01026010879458929 ) ; xx [ 9 ] = 0.7070832170269247 ; xx [ 10 ] =
0.7070839779596056 ; xx [ 11 ] = - 5.77635371758612e-3 ; xx [ 12 ] = -
5.675037392355237e-3 ; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 9 , xx
+ 23 ) ; xx [ 1 ] = xx [ 24 ] * xx [ 25 ] ; xx [ 2 ] = xx [ 23 ] * xx [ 26 ]
; xx [ 9 ] = xx [ 26 ] * xx [ 26 ] ; xx [ 10 ] = xx [ 0 ] * ( xx [ 1 ] - xx [
2 ] ) ; xx [ 11 ] = xx [ 17 ] - xx [ 0 ] * ( xx [ 9 ] + xx [ 24 ] * xx [ 24 ]
) ; xx [ 12 ] = xx [ 0 ] * ( xx [ 23 ] * xx [ 24 ] + xx [ 25 ] * xx [ 26 ] )
; xx [ 38 ] = xx [ 17 ] - xx [ 0 ] * ( xx [ 25 ] * xx [ 25 ] + xx [ 9 ] ) ;
xx [ 39 ] = xx [ 0 ] * ( xx [ 2 ] + xx [ 1 ] ) ; xx [ 40 ] = xx [ 0 ] * ( xx
[ 24 ] * xx [ 26 ] - xx [ 23 ] * xx [ 25 ] ) ; xx [ 23 ] = -
0.2643737754551072 ; xx [ 24 ] = - 0.029879175111395 ; xx [ 25 ] =
0.6425355357697462 ; xx [ 26 ] = 0.7185832081390159 ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 23 , xx + 45 ) ; xx [ 1 ] = xx
[ 46 ] * xx [ 47 ] ; xx [ 2 ] = xx [ 45 ] * xx [ 48 ] ; xx [ 9 ] = xx [ 48 ]
* xx [ 48 ] ; xx [ 23 ] = xx [ 0 ] * ( xx [ 1 ] - xx [ 2 ] ) ; xx [ 24 ] = xx
[ 17 ] - xx [ 0 ] * ( xx [ 9 ] + xx [ 46 ] * xx [ 46 ] ) ; xx [ 25 ] = xx [ 0
] * ( xx [ 45 ] * xx [ 46 ] + xx [ 47 ] * xx [ 48 ] ) ; xx [ 34 ] = xx [ 17 ]
- xx [ 0 ] * ( xx [ 47 ] * xx [ 47 ] + xx [ 9 ] ) ; xx [ 35 ] = xx [ 0 ] * (
xx [ 2 ] + xx [ 1 ] ) ; xx [ 36 ] = xx [ 0 ] * ( xx [ 46 ] * xx [ 48 ] - xx [
45 ] * xx [ 47 ] ) ; xx [ 45 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 20 , xx
+ 28 ) ) ; xx [ 46 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 31 , xx + 13 ) )
; xx [ 47 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 42 , xx + 28 ) ) ; xx [ 48
] = fabs ( pm_math_Vector3_dot_ra ( xx + 3 , xx + 13 ) ) ; xx [ 49 ] = fabs (
sm_core_canonicalAngle ( state [ 26 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 6 , xx + 10 ) , pm_math_Vector3_dot_ra ( xx + 6
, xx + 38 ) ) - state [ 26 ] ) - state [ 28 ] + atan2 (
pm_math_Vector3_dot_ra ( xx + 6 , xx + 23 ) , pm_math_Vector3_dot_ra ( xx + 6
, xx + 34 ) ) ) ) ; ii [ 0 ] = 45 ; { int ll ; for ( ll = 46 ; ll < 50 ; ++
ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 45 ; xx
[ 0 ] = xx [ 45 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - 1.0e-9 ; if ( xx [ 1
] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 1 ] > 0.0 ) ii [ 0 ] = + 1 ; else
ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ;
return ii [ 1 ] ; } int cst_robotarm_breach_98bf360f_6_isVelocityViolation (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
eqnEnableFlags , const double * state , const int * modeVector ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; int ii [ 3 ] ; double xx [ 72 ] ; ( void ) mech ; ( void )
rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; xx [
0 ] = 0.6953254828680254 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 12
] ; xx [ 3 ] = sin ( xx [ 2 ] ) ; xx [ 4 ] = 0.4061050908592153 ; xx [ 5 ] =
cos ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 0 ] * xx [ 3 ] - xx [ 4 ] * xx [ 5 ] ; xx
[ 6 ] = xx [ 1 ] * state [ 18 ] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = xx
[ 0 ] * xx [ 5 ] + xx [ 4 ] * xx [ 3 ] ; xx [ 0 ] = cos ( xx [ 6 ] ) ; xx [ 4
] = 0.5912864502323997 ; xx [ 6 ] = 0.04451361391915684 ; xx [ 9 ] = xx [ 4 ]
* xx [ 3 ] - xx [ 6 ] * xx [ 5 ] ; xx [ 10 ] = xx [ 6 ] * xx [ 3 ] + xx [ 4 ]
* xx [ 5 ] ; xx [ 3 ] = - ( xx [ 2 ] * xx [ 7 ] - xx [ 8 ] * xx [ 0 ] ) ; xx
[ 4 ] = xx [ 9 ] * xx [ 0 ] + xx [ 10 ] * xx [ 7 ] ; xx [ 5 ] = xx [ 9 ] * xx
[ 7 ] - xx [ 10 ] * xx [ 0 ] ; xx [ 6 ] = - ( xx [ 8 ] * xx [ 7 ] + xx [ 2 ]
* xx [ 0 ] ) ; xx [ 11 ] = - 0.9899003997337941 ; xx [ 12 ] = xx [ 11 ] ; xx
[ 13 ] = 0.01994045583473794 ; xx [ 14 ] = 0.09771574456570448 ; xx [ 15 ] =
0.1007532138045611 ; xx [ 16 ] = xx [ 1 ] * state [ 20 ] ; xx [ 17 ] =
0.1974758392319079 ; xx [ 18 ] = sin ( xx [ 16 ] ) ; xx [ 19 ] =
0.0197877797947617 ; xx [ 20 ] = 0.9801080229701458 ; xx [ 21 ] = cos ( xx [
16 ] ) ; xx [ 22 ] = - ( xx [ 17 ] * xx [ 18 ] ) ; xx [ 23 ] = xx [ 19 ] * xx
[ 18 ] ; xx [ 24 ] = - ( xx [ 20 ] * xx [ 18 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 12 , xx + 21 , xx + 25 ) ;
pm_math_Quaternion_compose_ra ( xx + 3 , xx + 25 , xx + 12 ) ; xx [ 16 ] =
2.0 ; xx [ 18 ] = state [ 13 ] - xx [ 16 ] * ( state [ 13 ] * xx [ 0 ] * xx [
0 ] + state [ 13 ] * xx [ 7 ] * xx [ 7 ] ) - state [ 19 ] ; xx [ 21 ] = xx [
18 ] * xx [ 26 ] ; xx [ 22 ] = xx [ 18 ] * xx [ 27 ] ; xx [ 29 ] = xx [ 16 ]
* ( xx [ 21 ] * xx [ 28 ] - xx [ 22 ] * xx [ 25 ] ) - xx [ 17 ] * state [ 21
] ; xx [ 30 ] = xx [ 16 ] * ( xx [ 21 ] * xx [ 25 ] + xx [ 22 ] * xx [ 28 ] )
+ xx [ 19 ] * state [ 21 ] ; xx [ 31 ] = xx [ 18 ] - xx [ 16 ] * ( xx [ 21 ]
* xx [ 26 ] + xx [ 22 ] * xx [ 27 ] ) - xx [ 20 ] * state [ 21 ] ; xx [ 21 ]
= 0.9606008463440403 ; xx [ 22 ] = 0.2033682862169496 ; xx [ 23 ] = -
0.1894395791916104 ; pm_math_Vector3_cross_ra ( xx + 29 , xx + 21 , xx + 32 )
; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 32 , xx + 21 ) ; xx [ 17 ] =
0.9392290339368587 ; xx [ 32 ] = 0.3415522478515933 ; xx [ 33 ] = -
0.03450918424939525 ; xx [ 34 ] = xx [ 17 ] ; xx [ 35 ] =
5.728444065062708e-4 ; xx [ 36 ] = - 0.0463662621131998 ; xx [ 37 ] =
7.575300750045659e-3 ; pm_math_Vector3_cross_ra ( xx + 29 , xx + 35 , xx + 38
) ; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 38 , xx + 29 ) ; xx [ 12 ] =
6.11133899174537e-11 ; xx [ 13 ] = - xx [ 8 ] ; xx [ 14 ] = xx [ 2 ] ; xx [
15 ] = - xx [ 10 ] ; xx [ 19 ] = 6.31742519402702e-9 ; xx [ 24 ] = xx [ 19 ]
* xx [ 10 ] ; xx [ 35 ] = xx [ 12 ] * xx [ 10 ] ; xx [ 36 ] = xx [ 19 ] * xx
[ 8 ] + xx [ 12 ] * xx [ 2 ] ; xx [ 37 ] = xx [ 24 ] ; xx [ 38 ] = - xx [ 35
] ; xx [ 39 ] = - xx [ 36 ] ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 37 ,
xx + 40 ) ; xx [ 37 ] = state [ 13 ] * ( xx [ 12 ] + xx [ 16 ] * ( xx [ 40 ]
+ xx [ 24 ] * xx [ 9 ] ) ) ; xx [ 12 ] = 8.500005402767106e-3 ; xx [ 24 ] =
2.534418181099341e-9 ; xx [ 38 ] = xx [ 12 ] * xx [ 0 ] + xx [ 24 ] * xx [ 7
] ; xx [ 39 ] = xx [ 24 ] * xx [ 0 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 43 ] =
state [ 19 ] * ( xx [ 16 ] * xx [ 38 ] * xx [ 7 ] - xx [ 24 ] ) - state [ 13
] * ( xx [ 16 ] * xx [ 39 ] * xx [ 0 ] + 7.499997465581819e-3 ) ; xx [ 24 ] =
( xx [ 12 ] - xx [ 16 ] * xx [ 38 ] * xx [ 0 ] ) * state [ 19 ] - state [ 13
] * ( xx [ 12 ] + xx [ 16 ] * xx [ 39 ] * xx [ 7 ] ) ; xx [ 0 ] = xx [ 24 ] *
xx [ 10 ] ; xx [ 7 ] = xx [ 43 ] * xx [ 10 ] ; xx [ 12 ] = xx [ 24 ] * xx [ 8
] + xx [ 43 ] * xx [ 2 ] ; xx [ 44 ] = xx [ 0 ] ; xx [ 45 ] = - xx [ 7 ] ; xx
[ 46 ] = - xx [ 12 ] ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 44 , xx + 47
) ; xx [ 44 ] = 1.267558276479352e-3 ; xx [ 45 ] = - 0.02545789283437272 ; xx
[ 46 ] = - 7.693716347542733e-4 ; pm_math_Quaternion_xform_ra ( xx + 25 , xx
+ 44 , xx + 50 ) ; xx [ 44 ] = - 0.0265553585823144 ; xx [ 45 ] = -
1.235088037631146e-3 ; xx [ 46 ] = - 2.882515487549136e-3 ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 44 , xx + 53 ) ; xx [ 25 ] =
state [ 21 ] * xx [ 50 ] + xx [ 18 ] * xx [ 54 ] ; xx [ 26 ] = state [ 21 ] *
xx [ 51 ] - xx [ 18 ] * ( 8.500000000000004e-3 + xx [ 53 ] ) ; xx [ 27 ] =
state [ 21 ] * xx [ 52 ] ; pm_math_Quaternion_xform_ra ( xx + 3 , xx + 25 ,
xx + 44 ) ; xx [ 3 ] = state [ 13 ] * ( xx [ 19 ] + xx [ 16 ] * ( xx [ 41 ] -
xx [ 35 ] * xx [ 9 ] ) ) ; xx [ 4 ] = xx [ 16 ] * state [ 13 ] * ( xx [ 42 ]
- xx [ 36 ] * xx [ 9 ] ) ; xx [ 25 ] = xx [ 29 ] + xx [ 37 ] + xx [ 43 ] + xx
[ 16 ] * ( xx [ 47 ] + xx [ 0 ] * xx [ 9 ] ) + xx [ 44 ] ; xx [ 26 ] = xx [
30 ] + xx [ 3 ] + xx [ 24 ] + xx [ 16 ] * ( xx [ 48 ] - xx [ 7 ] * xx [ 9 ] )
+ xx [ 45 ] ; xx [ 27 ] = xx [ 31 ] + xx [ 4 ] + xx [ 16 ] * ( xx [ 49 ] - xx
[ 12 ] * xx [ 9 ] ) + xx [ 46 ] ; xx [ 5 ] = - 0.3826804379272111 ; xx [ 6 ]
= 0.9076319526101295 ; xx [ 7 ] = 0.1725106403354915 ; xx [ 0 ] = xx [ 1 ] *
state [ 14 ] ; xx [ 12 ] = cos ( xx [ 0 ] ) ; xx [ 18 ] = sin ( xx [ 0 ] ) ;
xx [ 28 ] = xx [ 9 ] * xx [ 12 ] + xx [ 10 ] * xx [ 18 ] ; xx [ 29 ] = xx [ 2
] * xx [ 18 ] - xx [ 8 ] * xx [ 12 ] ; xx [ 30 ] = xx [ 2 ] * xx [ 12 ] + xx
[ 8 ] * xx [ 18 ] ; xx [ 31 ] = xx [ 9 ] * xx [ 18 ] - xx [ 10 ] * xx [ 12 ]
; xx [ 38 ] = xx [ 11 ] ; xx [ 39 ] = - 0.01994045583473804 ; xx [ 40 ] = -
0.09771574456570453 ; xx [ 41 ] = 0.1007532138045611 ; xx [ 0 ] = xx [ 1 ] *
state [ 16 ] ; xx [ 11 ] = 0.197475839231908 ; xx [ 19 ] = sin ( xx [ 0 ] ) ;
xx [ 24 ] = 0.01978777979476189 ; xx [ 42 ] = cos ( xx [ 0 ] ) ; xx [ 43 ] =
xx [ 11 ] * xx [ 19 ] ; xx [ 44 ] = - ( xx [ 24 ] * xx [ 19 ] ) ; xx [ 45 ] =
- ( xx [ 20 ] * xx [ 19 ] ) ; pm_math_Quaternion_compose_ra ( xx + 38 , xx +
42 , xx + 46 ) ; pm_math_Quaternion_compose_ra ( xx + 28 , xx + 46 , xx + 38
) ; xx [ 0 ] = state [ 13 ] + state [ 15 ] ; xx [ 19 ] = xx [ 0 ] * xx [ 47 ]
; xx [ 35 ] = xx [ 0 ] * xx [ 48 ] ; xx [ 42 ] = xx [ 16 ] * ( xx [ 19 ] * xx
[ 49 ] - xx [ 35 ] * xx [ 46 ] ) + xx [ 11 ] * state [ 17 ] ; xx [ 43 ] = xx
[ 16 ] * ( xx [ 19 ] * xx [ 46 ] + xx [ 35 ] * xx [ 49 ] ) - xx [ 24 ] *
state [ 17 ] ; xx [ 44 ] = xx [ 0 ] - xx [ 16 ] * ( xx [ 19 ] * xx [ 47 ] +
xx [ 35 ] * xx [ 48 ] ) - xx [ 20 ] * state [ 17 ] ; xx [ 50 ] =
0.9606008463440439 ; xx [ 51 ] = 0.2033682862169333 ; xx [ 52 ] =
0.1894395791916108 ; pm_math_Vector3_cross_ra ( xx + 42 , xx + 50 , xx + 53 )
; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 53 , xx + 50 ) ; xx [ 53 ] = -
0.01271019941645938 ; xx [ 54 ] = 0.02011896482120349 ; xx [ 55 ] = -
0.01159391418917814 ; pm_math_Vector3_cross_ra ( xx + 42 , xx + 53 , xx + 56
) ; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 56 , xx + 42 ) ; xx [ 11 ] =
3.566398367738088e-9 ; xx [ 19 ] = xx [ 11 ] * xx [ 18 ] ; xx [ 20 ] = xx [
19 ] * xx [ 18 ] ; xx [ 24 ] = 8.499995046130028e-3 ; xx [ 35 ] = xx [ 24 ] *
xx [ 18 ] ; xx [ 36 ] = xx [ 35 ] * xx [ 12 ] ; xx [ 38 ] = (
7.499996433601628e-3 + xx [ 16 ] * ( xx [ 20 ] - xx [ 36 ] ) ) * state [ 13 ]
- ( xx [ 11 ] + xx [ 16 ] * ( xx [ 36 ] - xx [ 20 ] ) ) * state [ 15 ] ; xx [
11 ] = xx [ 19 ] * xx [ 12 ] ; xx [ 12 ] = xx [ 35 ] * xx [ 18 ] ; xx [ 18 ]
= state [ 15 ] * ( xx [ 24 ] - xx [ 16 ] * ( xx [ 11 ] + xx [ 12 ] ) ) - ( xx
[ 16 ] * ( xx [ 11 ] + xx [ 12 ] ) - xx [ 24 ] ) * state [ 13 ] ; xx [ 11 ] =
xx [ 18 ] * xx [ 10 ] ; xx [ 12 ] = xx [ 38 ] * xx [ 10 ] ; xx [ 10 ] = xx [
18 ] * xx [ 8 ] + xx [ 38 ] * xx [ 2 ] ; xx [ 39 ] = xx [ 11 ] ; xx [ 40 ] =
- xx [ 12 ] ; xx [ 41 ] = - xx [ 10 ] ; pm_math_Vector3_cross_ra ( xx + 13 ,
xx + 39 , xx + 53 ) ; xx [ 13 ] = 1.267558015198214e-3 ; xx [ 14 ] = -
0.02545789261362155 ; xx [ 15 ] = 7.693715776535444e-4 ;
pm_math_Quaternion_xform_ra ( xx + 46 , xx + 13 , xx + 39 ) ; xx [ 13 ] = -
0.02695031004471146 ; xx [ 14 ] = - 1.195512210539264e-3 ; xx [ 15 ] =
4.842731578975556e-3 ; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 13 , xx +
56 ) ; xx [ 13 ] = state [ 17 ] * xx [ 39 ] + xx [ 0 ] * xx [ 57 ] ; xx [ 14
] = state [ 17 ] * xx [ 40 ] + ( 8.499999999999994e-3 - xx [ 56 ] ) * xx [ 0
] ; xx [ 15 ] = state [ 17 ] * xx [ 41 ] ; pm_math_Quaternion_xform_ra ( xx +
28 , xx + 13 , xx + 39 ) ; xx [ 13 ] = xx [ 42 ] + xx [ 37 ] + xx [ 38 ] + xx
[ 16 ] * ( xx [ 53 ] + xx [ 11 ] * xx [ 9 ] ) + xx [ 39 ] ; xx [ 14 ] = xx [
43 ] + xx [ 3 ] + xx [ 18 ] + xx [ 16 ] * ( xx [ 54 ] - xx [ 12 ] * xx [ 9 ]
) + xx [ 40 ] ; xx [ 15 ] = xx [ 44 ] + xx [ 4 ] + xx [ 16 ] * ( xx [ 55 ] -
xx [ 10 ] * xx [ 9 ] ) + xx [ 41 ] ; xx [ 8 ] = - 0.215751709792892 ; xx [ 9
] = - 0.2981849626920737 ; xx [ 10 ] = - 2.033832353854736e-3 ; xx [ 11 ] = -
0.929802554993116 ; xx [ 0 ] = xx [ 1 ] * state [ 10 ] ; xx [ 2 ] =
0.3826804379272233 ; xx [ 3 ] = sin ( xx [ 0 ] ) ; xx [ 4 ] =
0.9076319526101237 ; xx [ 12 ] = 0.1725106403354957 ; xx [ 28 ] = cos ( xx [
0 ] ) ; xx [ 29 ] = - ( xx [ 2 ] * xx [ 3 ] ) ; xx [ 30 ] = xx [ 4 ] * xx [ 3
] ; xx [ 31 ] = xx [ 12 ] * xx [ 3 ] ; pm_math_Quaternion_compose_ra ( xx + 8
, xx + 28 , xx + 35 ) ; xx [ 8 ] = 0.01025445069467229 ; xx [ 9 ] = -
9.847964366436174e-3 ; xx [ 10 ] = - 0.01014277598357412 ;
pm_math_Quaternion_xform_ra ( xx + 35 , xx + 8 , xx + 18 ) ; xx [ 28 ] =
0.01409005672401682 ; xx [ 29 ] = - 0.01894515942744741 ; xx [ 30 ] = -
0.01187185013165681 ; pm_math_Quaternion_xform_ra ( xx + 35 , xx + 28 , xx +
39 ) ; xx [ 28 ] = - 0.9890584029719356 ; xx [ 29 ] = 0.02451507747925197 ;
xx [ 30 ] = - 0.1451159893451954 ; xx [ 31 ] = - 0.01019000113620927 ; xx [ 0
] = xx [ 1 ] * state [ 8 ] ; xx [ 1 ] = 0.01619418156754471 ; xx [ 3 ] = sin
( xx [ 0 ] ) ; xx [ 11 ] = 0.9998688656410684 ; xx [ 24 ] =
2.236298900726297e-6 ; xx [ 42 ] = cos ( xx [ 0 ] ) ; xx [ 43 ] = - ( xx [ 1
] * xx [ 3 ] ) ; xx [ 44 ] = - ( xx [ 11 ] * xx [ 3 ] ) ; xx [ 45 ] = - ( xx
[ 24 ] * xx [ 3 ] ) ; pm_math_Quaternion_compose_ra ( xx + 28 , xx + 42 , xx
+ 46 ) ; xx [ 28 ] = - 1.779962358034746e-3 ; xx [ 29 ] = -
2.813288543230789e-4 ; xx [ 30 ] = - 3.860324031167178e-7 ;
pm_math_Quaternion_xform_ra ( xx + 46 , xx + 28 , xx + 42 ) ; xx [ 53 ] = -
1.734877756550734e-3 ; xx [ 54 ] = 2.502306067621761e-3 ; xx [ 55 ] = -
3.798065468850008e-7 ; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 53 , xx +
56 ) ; xx [ 53 ] = xx [ 18 ] - xx [ 39 ] + 0.0308855674310194 - ( xx [ 42 ] -
xx [ 56 ] - 7.499921419650881e-3 ) ; xx [ 54 ] = xx [ 19 ] - xx [ 40 ] -
9.289825552270628e-3 - ( xx [ 43 ] - xx [ 57 ] - 0.01644245306791676 ) ; xx [
55 ] = xx [ 20 ] - xx [ 41 ] - 6.447531210979022e-4 - ( xx [ 44 ] - xx [ 58 ]
+ 0.01026010879458929 ) ; xx [ 0 ] = 1.0 ; xx [ 39 ] = 0.7070832170269247 ;
xx [ 40 ] = 0.7070839779596056 ; xx [ 41 ] = - 5.77635371758612e-3 ; xx [ 42
] = - 5.675037392355237e-3 ; pm_math_Quaternion_compose_ra ( xx + 46 , xx +
39 , xx + 56 ) ; xx [ 3 ] = xx [ 59 ] * xx [ 59 ] ; xx [ 18 ] = xx [ 56 ] *
xx [ 59 ] ; xx [ 19 ] = xx [ 57 ] * xx [ 58 ] ; xx [ 39 ] = xx [ 0 ] - xx [
16 ] * ( xx [ 58 ] * xx [ 58 ] + xx [ 3 ] ) ; xx [ 40 ] = xx [ 16 ] * ( xx [
18 ] + xx [ 19 ] ) ; xx [ 41 ] = xx [ 16 ] * ( xx [ 57 ] * xx [ 59 ] - xx [
56 ] * xx [ 58 ] ) ; xx [ 20 ] = pm_math_Vector3_dot_ra ( xx + 53 , xx + 39 )
; xx [ 42 ] = - ( xx [ 2 ] * state [ 11 ] ) ; xx [ 43 ] = xx [ 4 ] * state [
11 ] ; xx [ 44 ] = xx [ 12 ] * state [ 11 ] ; pm_math_Vector3_cross_ra ( xx +
42 , xx + 8 , xx + 60 ) ; pm_math_Quaternion_xform_ra ( xx + 35 , xx + 60 ,
xx + 8 ) ; xx [ 60 ] = 7.507028932003423e-3 ; xx [ 61 ] =
2.112440099565195e-3 ; xx [ 62 ] = 5.538643790510151e-3 ;
pm_math_Quaternion_xform_ra ( xx + 35 , xx + 60 , xx + 63 ) ; xx [ 60 ] = - (
xx [ 1 ] * state [ 9 ] ) ; xx [ 61 ] = - ( xx [ 11 ] * state [ 9 ] ) ; xx [
62 ] = - ( xx [ 24 ] * state [ 9 ] ) ; pm_math_Vector3_cross_ra ( xx + 60 ,
xx + 28 , xx + 66 ) ; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 66 , xx +
28 ) ; xx [ 66 ] = - 3.853526455052602e-7 ; xx [ 67 ] = 2.270950960928974e-9
; xx [ 68 ] = 1.775173053264939e-3 ; pm_math_Quaternion_xform_ra ( xx + 46 ,
xx + 66 , xx + 69 ) ; xx [ 66 ] = xx [ 8 ] + state [ 11 ] * xx [ 63 ] - ( xx
[ 28 ] + state [ 9 ] * xx [ 69 ] ) ; xx [ 67 ] = xx [ 9 ] + state [ 11 ] * xx
[ 64 ] - ( xx [ 29 ] + state [ 9 ] * xx [ 70 ] ) ; xx [ 68 ] = xx [ 10 ] +
state [ 11 ] * xx [ 65 ] - ( xx [ 30 ] + state [ 9 ] * xx [ 71 ] ) ; xx [ 8 ]
= xx [ 16 ] * ( xx [ 19 ] - xx [ 18 ] ) ; xx [ 9 ] = xx [ 0 ] - xx [ 16 ] * (
xx [ 3 ] + xx [ 57 ] * xx [ 57 ] ) ; xx [ 10 ] = xx [ 16 ] * ( xx [ 56 ] * xx
[ 57 ] + xx [ 58 ] * xx [ 59 ] ) ; xx [ 1 ] = - 1.432869371958412e-4 ; xx [ 2
] = 8.412683150105238e-8 ; xx [ 3 ] = 0.9999999897344236 ;
pm_math_Vector3_cross_ra ( xx + 60 , xx + 1 , xx + 28 ) ;
pm_math_Quaternion_xform_ra ( xx + 46 , xx + 28 , xx + 1 ) ; xx [ 4 ] =
pm_math_Vector3_dot_ra ( xx + 53 , xx + 8 ) ; xx [ 28 ] = 0.9998688553766502
; xx [ 29 ] = - 0.01619418172173436 ; xx [ 30 ] = 1.432695097203628e-4 ;
pm_math_Vector3_cross_ra ( xx + 60 , xx + 28 , xx + 56 ) ;
pm_math_Quaternion_xform_ra ( xx + 46 , xx + 56 , xx + 28 ) ; xx [ 11 ] = xx
[ 20 ] * xx [ 20 ] + xx [ 4 ] * xx [ 4 ] ; xx [ 11 ] = xx [ 11 ] == 0.0 ? 0.0
: ( xx [ 20 ] * ( pm_math_Vector3_dot_ra ( xx + 66 , xx + 8 ) +
pm_math_Vector3_dot_ra ( xx + 53 , xx + 1 ) ) - xx [ 4 ] * (
pm_math_Vector3_dot_ra ( xx + 66 , xx + 39 ) + pm_math_Vector3_dot_ra ( xx +
53 , xx + 28 ) ) ) / xx [ 11 ] ; xx [ 1 ] = - 0.2643737754551072 ; xx [ 2 ] =
- 0.029879175111395 ; xx [ 3 ] = 0.6425355357697462 ; xx [ 4 ] =
0.7185832081390159 ; pm_math_Quaternion_compose_ra ( xx + 35 , xx + 1 , xx +
28 ) ; xx [ 1 ] = xx [ 31 ] * xx [ 31 ] ; xx [ 2 ] = xx [ 28 ] * xx [ 31 ] ;
xx [ 3 ] = xx [ 29 ] * xx [ 30 ] ; xx [ 8 ] = xx [ 0 ] - xx [ 16 ] * ( xx [
30 ] * xx [ 30 ] + xx [ 1 ] ) ; xx [ 9 ] = xx [ 16 ] * ( xx [ 2 ] + xx [ 3 ]
) ; xx [ 10 ] = xx [ 16 ] * ( xx [ 29 ] * xx [ 31 ] - xx [ 28 ] * xx [ 30 ] )
; xx [ 4 ] = pm_math_Vector3_dot_ra ( xx + 53 , xx + 8 ) ; xx [ 18 ] = xx [
16 ] * ( xx [ 3 ] - xx [ 2 ] ) ; xx [ 19 ] = xx [ 0 ] - xx [ 16 ] * ( xx [ 1
] + xx [ 29 ] * xx [ 29 ] ) ; xx [ 20 ] = xx [ 16 ] * ( xx [ 28 ] * xx [ 29 ]
+ xx [ 30 ] * xx [ 31 ] ) ; xx [ 0 ] = 0.341552247851593 ; xx [ 1 ] = -
0.03450918424939553 ; xx [ 2 ] = xx [ 17 ] ; pm_math_Vector3_cross_ra ( xx +
42 , xx + 0 , xx + 28 ) ; pm_math_Quaternion_xform_ra ( xx + 35 , xx + 28 ,
xx + 0 ) ; xx [ 3 ] = pm_math_Vector3_dot_ra ( xx + 53 , xx + 18 ) ; xx [ 28
] = - 0.8584274834925503 ; xx [ 29 ] = - 0.418345975005826 ; xx [ 30 ] =
0.2967977438948485 ; pm_math_Vector3_cross_ra ( xx + 42 , xx + 28 , xx + 39 )
; pm_math_Quaternion_xform_ra ( xx + 35 , xx + 39 , xx + 28 ) ; xx [ 12 ] =
xx [ 4 ] * xx [ 4 ] + xx [ 3 ] * xx [ 3 ] ; xx [ 12 ] = xx [ 12 ] == 0.0 ?
0.0 : ( xx [ 4 ] * ( pm_math_Vector3_dot_ra ( xx + 66 , xx + 18 ) +
pm_math_Vector3_dot_ra ( xx + 53 , xx + 0 ) ) - xx [ 3 ] * (
pm_math_Vector3_dot_ra ( xx + 66 , xx + 8 ) + pm_math_Vector3_dot_ra ( xx +
53 , xx + 28 ) ) ) / xx [ 12 ] ; xx [ 0 ] = fabs ( pm_math_Vector3_dot_ra (
xx + 21 , xx + 32 ) ) ; xx [ 1 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 25 ,
xx + 5 ) ) ; xx [ 2 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 50 , xx + 32 ) )
; xx [ 3 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 13 , xx + 5 ) ) ; xx [ 4 ]
= fabs ( xx [ 11 ] + xx [ 12 ] ) ; ii [ 0 ] = 0 ; { int ll ; for ( ll = 1 ;
ll < 5 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0
] -= 0 ; xx [ 5 ] = xx [ 0 + ( ii [ 0 ] ) ] ; xx [ 0 ] = xx [ 5 ] - 1.0e-9 ;
if ( xx [ 0 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 0 ] > 0.0 ) ii [ 0 ] =
+ 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ]
= 0 ; return ii [ 1 ] ; } PmfMessageId
cst_robotarm_breach_98bf360f_6_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
modeVector , const double * input , double * state , void * neDiagMgr0 ) {
const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv
-> mInts . mValues ; NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; int ii [ 5 ] ; double xx [ 394 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; (
void ) modeVector ; ( void ) input ; ( void ) neDiagMgr ; xx [ 0 ] = 0.0 ; xx
[ 1 ] = 0.5912864502323997 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [
12 ] ; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] = 0.04451361391915684 ; xx [ 6
] = cos ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [ 4 ] - xx [ 5 ] * xx [ 6 ] ;
xx [ 7 ] = 0.6953254828680254 ; xx [ 8 ] = 0.4061050908592153 ; xx [ 9 ] = xx
[ 7 ] * xx [ 6 ] + xx [ 8 ] * xx [ 4 ] ; xx [ 10 ] = - xx [ 9 ] ; xx [ 11 ] =
xx [ 7 ] * xx [ 4 ] - xx [ 8 ] * xx [ 6 ] ; xx [ 12 ] = xx [ 5 ] * xx [ 4 ] +
xx [ 1 ] * xx [ 6 ] ; xx [ 4 ] = - xx [ 12 ] ; xx [ 13 ] = xx [ 3 ] ; xx [ 14
] = xx [ 10 ] ; xx [ 15 ] = xx [ 11 ] ; xx [ 16 ] = xx [ 4 ] ; xx [ 6 ] = xx
[ 2 ] * state [ 18 ] ; xx [ 17 ] = cos ( xx [ 6 ] ) ; xx [ 18 ] = -
0.9899003997337941 ; xx [ 19 ] = xx [ 18 ] ; xx [ 20 ] = 0.01994045583473794
; xx [ 21 ] = 0.09771574456570448 ; xx [ 22 ] = 0.1007532138045611 ; xx [ 23
] = xx [ 2 ] * state [ 20 ] ; xx [ 24 ] = 0.1974758392319079 ; xx [ 25 ] =
sin ( xx [ 23 ] ) ; xx [ 26 ] = 0.0197877797947617 ; xx [ 27 ] =
0.9801080229701458 ; xx [ 28 ] = cos ( xx [ 23 ] ) ; xx [ 29 ] = - ( xx [ 24
] * xx [ 25 ] ) ; xx [ 30 ] = xx [ 26 ] * xx [ 25 ] ; xx [ 31 ] = - ( xx [ 27
] * xx [ 25 ] ) ; pm_math_Quaternion_compose_ra ( xx + 19 , xx + 28 , xx + 32
) ; xx [ 23 ] = sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 17 ] * xx [ 33 ] + xx [ 23
] * xx [ 34 ] ; xx [ 25 ] = xx [ 17 ] * xx [ 32 ] + xx [ 23 ] * xx [ 35 ] ;
xx [ 28 ] = xx [ 23 ] * xx [ 32 ] - xx [ 17 ] * xx [ 35 ] ; xx [ 29 ] = xx [
17 ] * xx [ 34 ] - xx [ 23 ] * xx [ 33 ] ; xx [ 36 ] = - xx [ 6 ] ; xx [ 37 ]
= xx [ 25 ] ; xx [ 38 ] = xx [ 28 ] ; xx [ 39 ] = xx [ 29 ] ;
pm_math_Quaternion_compose_ra ( xx + 13 , xx + 36 , xx + 40 ) ; xx [ 30 ] =
2.0 ; xx [ 31 ] = 1.0 ; xx [ 36 ] = xx [ 30 ] * ( xx [ 28 ] * xx [ 6 ] + xx [
29 ] * xx [ 25 ] ) ; xx [ 37 ] = xx [ 30 ] * ( xx [ 29 ] * xx [ 28 ] - xx [
25 ] * xx [ 6 ] ) ; xx [ 38 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 25 ] * xx [ 25
] + xx [ 28 ] * xx [ 28 ] ) ; xx [ 6 ] = 0.9606008463440403 ; xx [ 25 ] =
0.2033682862169496 ; xx [ 44 ] = xx [ 6 ] ; xx [ 45 ] = xx [ 25 ] ; xx [ 46 ]
= - 0.1894395791916104 ; pm_math_Vector3_cross_ra ( xx + 36 , xx + 44 , xx +
47 ) ; pm_math_Quaternion_xform_ra ( xx + 40 , xx + 47 , xx + 50 ) ; xx [ 28
] = 0.9392290339368587 ; xx [ 47 ] = 0.3415522478515933 ; xx [ 48 ] = -
0.03450918424939525 ; xx [ 49 ] = xx [ 28 ] ; xx [ 53 ] = - ( xx [ 11 ] * xx
[ 23 ] - xx [ 9 ] * xx [ 17 ] ) ; xx [ 54 ] = xx [ 3 ] * xx [ 17 ] + xx [ 12
] * xx [ 23 ] ; xx [ 55 ] = xx [ 3 ] * xx [ 23 ] - xx [ 12 ] * xx [ 17 ] ; xx
[ 56 ] = - ( xx [ 9 ] * xx [ 23 ] + xx [ 11 ] * xx [ 17 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 53 , xx + 32 , xx + 57 ) ; xx [ 61 ] =
xx [ 30 ] * ( xx [ 32 ] * xx [ 34 ] - xx [ 33 ] * xx [ 35 ] ) ; xx [ 62 ] = -
( xx [ 30 ] * ( xx [ 32 ] * xx [ 33 ] + xx [ 34 ] * xx [ 35 ] ) ) ; xx [ 63 ]
= xx [ 30 ] * ( xx [ 33 ] * xx [ 33 ] + xx [ 34 ] * xx [ 34 ] ) - xx [ 31 ] ;
pm_math_Vector3_cross_ra ( xx + 61 , xx + 44 , xx + 64 ) ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 64 , xx + 67 ) ; xx [ 64 ] =
0.1955743002614654 ; xx [ 65 ] = - 0.9789023362583088 ; xx [ 66 ] = -
0.05916848101196455 ; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 64 , xx +
70 ) ; xx [ 73 ] = 5.728444065062708e-4 ; xx [ 74 ] = - 0.0463662621131998 ;
xx [ 75 ] = 7.575300750045659e-3 ; pm_math_Vector3_cross_ra ( xx + 36 , xx +
73 , xx + 76 ) ; pm_math_Quaternion_xform_ra ( xx + 40 , xx + 76 , xx + 36 )
; xx [ 39 ] = xx [ 10 ] ; xx [ 40 ] = xx [ 11 ] ; xx [ 41 ] = xx [ 4 ] ; xx [
4 ] = 8.500000000000004e-3 ; xx [ 76 ] = - 0.0265553585823144 ; xx [ 77 ] = -
1.235088037631146e-3 ; xx [ 78 ] = - 2.882515487549136e-3 ;
pm_math_Quaternion_xform_ra ( xx + 32 , xx + 76 , xx + 79 ) ; xx [ 10 ] = xx
[ 4 ] + xx [ 79 ] ; xx [ 29 ] = xx [ 17 ] * xx [ 80 ] - xx [ 10 ] * xx [ 23 ]
; xx [ 42 ] = 8.500005402767106e-3 ; xx [ 43 ] = 2.534418181099341e-9 ; xx [
82 ] = xx [ 43 ] * xx [ 17 ] - xx [ 42 ] * xx [ 23 ] ; xx [ 83 ] = xx [ 42 ]
+ xx [ 30 ] * xx [ 82 ] * xx [ 23 ] ; xx [ 84 ] = xx [ 10 ] + xx [ 30 ] * xx
[ 29 ] * xx [ 23 ] + xx [ 83 ] ; xx [ 85 ] = xx [ 84 ] * xx [ 12 ] ; xx [ 86
] = xx [ 43 ] - xx [ 30 ] * xx [ 82 ] * xx [ 17 ] ; xx [ 82 ] =
7.500000000000001e-3 ; xx [ 87 ] = xx [ 30 ] * xx [ 29 ] * xx [ 17 ] - ( xx [
80 ] + xx [ 86 ] ) + xx [ 82 ] ; xx [ 29 ] = xx [ 87 ] * xx [ 12 ] ; xx [ 88
] = xx [ 84 ] * xx [ 9 ] + xx [ 11 ] * xx [ 87 ] ; xx [ 89 ] = - xx [ 85 ] ;
xx [ 90 ] = xx [ 29 ] ; xx [ 91 ] = xx [ 88 ] ; pm_math_Vector3_cross_ra ( xx
+ 39 , xx + 89 , xx + 92 ) ; xx [ 89 ] = 6.31742519402702e-9 ; xx [ 90 ] = xx
[ 89 ] * xx [ 12 ] ; xx [ 91 ] = 6.11133899174537e-11 ; xx [ 95 ] = xx [ 91 ]
* xx [ 12 ] ; xx [ 96 ] = xx [ 89 ] * xx [ 9 ] + xx [ 91 ] * xx [ 11 ] ; xx [
97 ] = xx [ 90 ] ; xx [ 98 ] = - xx [ 95 ] ; xx [ 99 ] = - xx [ 96 ] ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 97 , xx + 100 ) ; xx [ 97 ] = xx [
30 ] * ( xx [ 100 ] + xx [ 90 ] * xx [ 3 ] ) ; xx [ 90 ] = xx [ 30 ] * ( xx [
101 ] - xx [ 95 ] * xx [ 3 ] ) ; xx [ 95 ] = xx [ 30 ] * ( xx [ 102 ] - xx [
96 ] * xx [ 3 ] ) ; xx [ 98 ] = xx [ 36 ] + xx [ 30 ] * ( xx [ 92 ] - xx [ 85
] * xx [ 3 ] ) + xx [ 97 ] - xx [ 87 ] + xx [ 91 ] ; xx [ 99 ] = xx [ 37 ] +
xx [ 30 ] * ( xx [ 93 ] + xx [ 29 ] * xx [ 3 ] ) - xx [ 84 ] + xx [ 90 ] + xx
[ 89 ] ; xx [ 100 ] = xx [ 38 ] + xx [ 30 ] * ( xx [ 3 ] * xx [ 88 ] + xx [
94 ] ) + xx [ 95 ] ; xx [ 36 ] = - 0.3826804379272111 ; xx [ 37 ] =
0.9076319526101295 ; xx [ 38 ] = 0.1725106403354915 ;
pm_math_Vector3_cross_ra ( xx + 61 , xx + 73 , xx + 92 ) ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 92 , xx + 61 ) ; xx [ 29 ] = xx
[ 23 ] * xx [ 80 ] + xx [ 10 ] * xx [ 17 ] ; xx [ 84 ] = xx [ 42 ] * xx [ 17
] + xx [ 43 ] * xx [ 23 ] ; xx [ 85 ] = xx [ 30 ] * xx [ 29 ] * xx [ 23 ] +
xx [ 30 ] * xx [ 84 ] * xx [ 23 ] - xx [ 80 ] - xx [ 43 ] ; xx [ 87 ] = xx [
42 ] - ( xx [ 30 ] * xx [ 84 ] * xx [ 17 ] - xx [ 10 ] + xx [ 30 ] * xx [ 29
] * xx [ 17 ] ) ; xx [ 29 ] = xx [ 87 ] * xx [ 12 ] ; xx [ 84 ] = xx [ 85 ] *
xx [ 12 ] ; xx [ 88 ] = xx [ 87 ] * xx [ 9 ] + xx [ 11 ] * xx [ 85 ] ; xx [
92 ] = xx [ 29 ] ; xx [ 93 ] = - xx [ 84 ] ; xx [ 94 ] = - xx [ 88 ] ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 92 , xx + 101 ) ; xx [ 92 ] = xx [
61 ] + xx [ 85 ] + xx [ 30 ] * ( xx [ 101 ] + xx [ 29 ] * xx [ 3 ] ) ; xx [
93 ] = xx [ 62 ] + xx [ 87 ] + xx [ 30 ] * ( xx [ 102 ] - xx [ 84 ] * xx [ 3
] ) ; xx [ 94 ] = xx [ 63 ] + xx [ 30 ] * ( xx [ 103 ] - xx [ 88 ] * xx [ 3 ]
) ; xx [ 61 ] = - 0.04529404710916283 ; xx [ 62 ] = 9.34489474319e-4 ; xx [
63 ] = 9.144881203878137e-3 ; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 61
, xx + 101 ) ; xx [ 104 ] = 1.267558276479352e-3 ; xx [ 105 ] = -
0.02545789283437272 ; xx [ 106 ] = - 7.693716347542733e-4 ;
pm_math_Quaternion_xform_ra ( xx + 32 , xx + 104 , xx + 107 ) ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 107 , xx + 32 ) ; xx [ 107 ] =
xx [ 101 ] + xx [ 32 ] ; xx [ 108 ] = xx [ 102 ] + xx [ 33 ] ; xx [ 109 ] =
xx [ 103 ] + xx [ 34 ] ; xx [ 29 ] = xx [ 2 ] * state [ 14 ] ; xx [ 32 ] =
cos ( xx [ 29 ] ) ; xx [ 110 ] = xx [ 18 ] ; xx [ 111 ] = -
0.01994045583473804 ; xx [ 112 ] = - 0.09771574456570453 ; xx [ 113 ] =
0.1007532138045611 ; xx [ 18 ] = xx [ 2 ] * state [ 16 ] ; xx [ 33 ] =
0.197475839231908 ; xx [ 34 ] = sin ( xx [ 18 ] ) ; xx [ 35 ] =
0.01978777979476189 ; xx [ 114 ] = cos ( xx [ 18 ] ) ; xx [ 115 ] = xx [ 33 ]
* xx [ 34 ] ; xx [ 116 ] = - ( xx [ 35 ] * xx [ 34 ] ) ; xx [ 117 ] = - ( xx
[ 27 ] * xx [ 34 ] ) ; pm_math_Quaternion_compose_ra ( xx + 110 , xx + 114 ,
xx + 118 ) ; xx [ 18 ] = sin ( xx [ 29 ] ) ; xx [ 29 ] = xx [ 32 ] * xx [ 118
] - xx [ 18 ] * xx [ 121 ] ; xx [ 34 ] = xx [ 32 ] * xx [ 119 ] - xx [ 18 ] *
xx [ 120 ] ; xx [ 84 ] = xx [ 32 ] * xx [ 120 ] + xx [ 18 ] * xx [ 119 ] ; xx
[ 85 ] = xx [ 32 ] * xx [ 121 ] + xx [ 18 ] * xx [ 118 ] ; xx [ 114 ] = xx [
29 ] ; xx [ 115 ] = xx [ 34 ] ; xx [ 116 ] = xx [ 84 ] ; xx [ 117 ] = xx [ 85
] ; pm_math_Quaternion_compose_ra ( xx + 13 , xx + 114 , xx + 122 ) ; xx [
101 ] = xx [ 30 ] * ( xx [ 34 ] * xx [ 85 ] - xx [ 29 ] * xx [ 84 ] ) ; xx [
102 ] = xx [ 30 ] * ( xx [ 29 ] * xx [ 34 ] + xx [ 84 ] * xx [ 85 ] ) ; xx [
103 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 34 ] * xx [ 34 ] + xx [ 84 ] * xx [ 84
] ) ; xx [ 29 ] = 0.9606008463440439 ; xx [ 34 ] = 0.2033682862169333 ; xx [
84 ] = 0.1894395791916108 ; xx [ 114 ] = xx [ 29 ] ; xx [ 115 ] = xx [ 34 ] ;
xx [ 116 ] = xx [ 84 ] ; pm_math_Vector3_cross_ra ( xx + 101 , xx + 114 , xx
+ 126 ) ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 126 , xx + 129 ) ; xx
[ 132 ] = xx [ 3 ] * xx [ 32 ] + xx [ 12 ] * xx [ 18 ] ; xx [ 133 ] = xx [ 11
] * xx [ 18 ] - xx [ 9 ] * xx [ 32 ] ; xx [ 134 ] = xx [ 11 ] * xx [ 32 ] +
xx [ 9 ] * xx [ 18 ] ; xx [ 135 ] = xx [ 3 ] * xx [ 18 ] - xx [ 12 ] * xx [
32 ] ; pm_math_Quaternion_compose_ra ( xx + 132 , xx + 118 , xx + 136 ) ; xx
[ 126 ] = xx [ 30 ] * ( xx [ 119 ] * xx [ 121 ] - xx [ 118 ] * xx [ 120 ] ) ;
xx [ 127 ] = xx [ 30 ] * ( xx [ 118 ] * xx [ 119 ] + xx [ 120 ] * xx [ 121 ]
) ; xx [ 128 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 119 ] * xx [ 119 ] + xx [ 120
] * xx [ 120 ] ) ; pm_math_Vector3_cross_ra ( xx + 126 , xx + 114 , xx + 140
) ; pm_math_Quaternion_xform_ra ( xx + 136 , xx + 140 , xx + 143 ) ; xx [ 140
] = 0.1955743002614493 ; xx [ 141 ] = - 0.9789023362583125 ; xx [ 142 ] =
0.0591684810119616 ; pm_math_Quaternion_xform_ra ( xx + 136 , xx + 140 , xx +
146 ) ; xx [ 149 ] = - 0.01271019941645938 ; xx [ 150 ] = 0.02011896482120349
; xx [ 151 ] = - 0.01159391418917814 ; pm_math_Vector3_cross_ra ( xx + 101 ,
xx + 149 , xx + 152 ) ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 152 ,
xx + 101 ) ; xx [ 85 ] = 8.499999999999994e-3 ; xx [ 122 ] = -
0.02695031004471146 ; xx [ 123 ] = - 1.195512210539264e-3 ; xx [ 124 ] =
4.842731578975556e-3 ; pm_math_Quaternion_xform_ra ( xx + 118 , xx + 122 , xx
+ 152 ) ; xx [ 87 ] = xx [ 85 ] - xx [ 152 ] ; xx [ 88 ] = xx [ 18 ] * xx [
153 ] ; xx [ 96 ] = xx [ 87 ] * xx [ 18 ] ; xx [ 117 ] = xx [ 87 ] + xx [ 30
] * ( xx [ 88 ] * xx [ 32 ] - xx [ 96 ] * xx [ 18 ] ) ; xx [ 125 ] =
3.566398367738088e-9 ; xx [ 155 ] = xx [ 125 ] * xx [ 18 ] ; xx [ 156 ] = xx
[ 155 ] * xx [ 32 ] ; xx [ 157 ] = 8.499995046130028e-3 ; xx [ 158 ] = xx [
157 ] * xx [ 18 ] ; xx [ 159 ] = xx [ 158 ] * xx [ 18 ] ; xx [ 160 ] = xx [
30 ] * ( xx [ 156 ] + xx [ 159 ] ) - xx [ 157 ] ; xx [ 161 ] = xx [ 117 ] -
xx [ 160 ] ; xx [ 162 ] = xx [ 161 ] * xx [ 12 ] ; xx [ 163 ] = xx [ 30 ] * (
xx [ 96 ] * xx [ 32 ] + xx [ 88 ] * xx [ 18 ] ) ; xx [ 88 ] = xx [ 155 ] * xx
[ 18 ] ; xx [ 18 ] = xx [ 158 ] * xx [ 32 ] ; xx [ 32 ] = xx [ 30 ] * ( xx [
88 ] - xx [ 18 ] ) - xx [ 125 ] ; xx [ 96 ] = 7.499999999999995e-3 ; xx [ 155
] = xx [ 163 ] - ( xx [ 153 ] + xx [ 32 ] ) - xx [ 96 ] ; xx [ 158 ] = xx [
155 ] * xx [ 12 ] ; xx [ 164 ] = xx [ 11 ] * xx [ 155 ] - xx [ 161 ] * xx [ 9
] ; xx [ 165 ] = xx [ 162 ] ; xx [ 166 ] = xx [ 158 ] ; xx [ 167 ] = xx [ 164
] ; pm_math_Vector3_cross_ra ( xx + 39 , xx + 165 , xx + 168 ) ; xx [ 165 ] =
xx [ 101 ] + xx [ 30 ] * ( xx [ 168 ] + xx [ 162 ] * xx [ 3 ] ) + xx [ 97 ] -
xx [ 155 ] + xx [ 91 ] ; xx [ 166 ] = xx [ 102 ] + xx [ 161 ] + xx [ 30 ] * (
xx [ 169 ] + xx [ 158 ] * xx [ 3 ] ) + xx [ 90 ] + xx [ 89 ] ; xx [ 167 ] =
xx [ 103 ] + xx [ 30 ] * ( xx [ 3 ] * xx [ 164 ] + xx [ 170 ] ) + xx [ 95 ] ;
pm_math_Vector3_cross_ra ( xx + 126 , xx + 149 , xx + 101 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 101 , xx + 126 ) ; xx [ 90 ] =
xx [ 153 ] - ( xx [ 163 ] + xx [ 30 ] * ( xx [ 18 ] - xx [ 88 ] ) ) - xx [
125 ] ; xx [ 18 ] = xx [ 117 ] - xx [ 30 ] * ( xx [ 156 ] + xx [ 159 ] ) + xx
[ 157 ] ; xx [ 88 ] = xx [ 18 ] * xx [ 12 ] ; xx [ 95 ] = xx [ 90 ] * xx [ 12
] ; xx [ 12 ] = xx [ 18 ] * xx [ 9 ] + xx [ 11 ] * xx [ 90 ] ; xx [ 101 ] =
xx [ 88 ] ; xx [ 102 ] = - xx [ 95 ] ; xx [ 103 ] = - xx [ 12 ] ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 101 , xx + 161 ) ; xx [ 39 ] = xx [
126 ] + xx [ 90 ] + xx [ 30 ] * ( xx [ 161 ] + xx [ 88 ] * xx [ 3 ] ) ; xx [
40 ] = xx [ 127 ] + xx [ 18 ] + xx [ 30 ] * ( xx [ 162 ] - xx [ 95 ] * xx [ 3
] ) ; xx [ 41 ] = xx [ 128 ] + xx [ 30 ] * ( xx [ 163 ] - xx [ 12 ] * xx [ 3
] ) ; xx [ 101 ] = 0.01994817665605048 ; xx [ 102 ] = 0.01474688635611298 ;
xx [ 103 ] = 3.721502835343984e-3 ; pm_math_Quaternion_xform_ra ( xx + 136 ,
xx + 101 , xx + 126 ) ; xx [ 161 ] = 1.267558015198214e-3 ; xx [ 162 ] = -
0.02545789261362155 ; xx [ 163 ] = 7.693715776535444e-4 ;
pm_math_Quaternion_xform_ra ( xx + 118 , xx + 161 , xx + 168 ) ;
pm_math_Quaternion_xform_ra ( xx + 132 , xx + 168 , xx + 117 ) ; xx [ 168 ] =
xx [ 126 ] + xx [ 117 ] ; xx [ 169 ] = xx [ 127 ] + xx [ 118 ] ; xx [ 170 ] =
xx [ 128 ] + xx [ 119 ] ; xx [ 117 ] = - 0.215751709792892 ; xx [ 118 ] = -
0.2981849626920737 ; xx [ 119 ] = - 2.033832353854736e-3 ; xx [ 120 ] = -
0.929802554993116 ; xx [ 3 ] = xx [ 2 ] * state [ 10 ] ; xx [ 9 ] =
0.3826804379272233 ; xx [ 11 ] = sin ( xx [ 3 ] ) ; xx [ 12 ] =
0.9076319526101237 ; xx [ 18 ] = 0.1725106403354957 ; xx [ 171 ] = cos ( xx [
3 ] ) ; xx [ 172 ] = - ( xx [ 9 ] * xx [ 11 ] ) ; xx [ 173 ] = xx [ 12 ] * xx
[ 11 ] ; xx [ 174 ] = xx [ 18 ] * xx [ 11 ] ; pm_math_Quaternion_compose_ra (
xx + 117 , xx + 171 , xx + 175 ) ; xx [ 126 ] = 0.01025445069467229 ; xx [
127 ] = - 9.847964366436174e-3 ; xx [ 128 ] = - 0.01014277598357412 ;
pm_math_Quaternion_xform_ra ( xx + 175 , xx + 126 , xx + 171 ) ; xx [ 179 ] =
0.01409005672401682 ; xx [ 180 ] = - 0.01894515942744741 ; xx [ 181 ] = -
0.01187185013165681 ; pm_math_Quaternion_xform_ra ( xx + 175 , xx + 179 , xx
+ 182 ) ; xx [ 3 ] = 0.0308855674310194 ; xx [ 185 ] = - 0.9890584029719356 ;
xx [ 186 ] = 0.02451507747925197 ; xx [ 187 ] = - 0.1451159893451954 ; xx [
188 ] = - 0.01019000113620927 ; xx [ 11 ] = xx [ 2 ] * state [ 8 ] ; xx [ 88
] = 0.01619418156754471 ; xx [ 90 ] = sin ( xx [ 11 ] ) ; xx [ 95 ] =
0.9998688656410684 ; xx [ 97 ] = 2.236298900726297e-6 ; xx [ 189 ] = cos ( xx
[ 11 ] ) ; xx [ 190 ] = - ( xx [ 88 ] * xx [ 90 ] ) ; xx [ 191 ] = - ( xx [
95 ] * xx [ 90 ] ) ; xx [ 192 ] = - ( xx [ 97 ] * xx [ 90 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 185 , xx + 189 , xx + 193 ) ; xx [ 189 ]
= - 1.779962358034746e-3 ; xx [ 190 ] = - 2.813288543230789e-4 ; xx [ 191 ] =
- 3.860324031167178e-7 ; pm_math_Quaternion_xform_ra ( xx + 193 , xx + 189 ,
xx + 197 ) ; xx [ 200 ] = - 1.734877756550734e-3 ; xx [ 201 ] =
2.502306067621761e-3 ; xx [ 202 ] = - 3.798065468850008e-7 ;
pm_math_Quaternion_xform_ra ( xx + 193 , xx + 200 , xx + 203 ) ; xx [ 11 ] =
7.499921419650881e-3 ; xx [ 90 ] = 9.289825552270628e-3 ; xx [ 121 ] =
0.01644245306791676 ; xx [ 155 ] = 6.447531210979022e-4 ; xx [ 156 ] =
0.01026010879458929 ; xx [ 206 ] = xx [ 171 ] - xx [ 182 ] + xx [ 3 ] - ( xx
[ 197 ] - xx [ 203 ] - xx [ 11 ] ) ; xx [ 207 ] = xx [ 172 ] - xx [ 183 ] -
xx [ 90 ] - ( xx [ 198 ] - xx [ 204 ] - xx [ 121 ] ) ; xx [ 208 ] = xx [ 173
] - xx [ 184 ] - xx [ 155 ] - ( xx [ 199 ] - xx [ 205 ] + xx [ 156 ] ) ; xx [
171 ] = 0.7070832170269247 ; xx [ 172 ] = 0.7070839779596056 ; xx [ 173 ] = -
5.77635371758612e-3 ; xx [ 174 ] = - 5.675037392355237e-3 ;
pm_math_Quaternion_compose_ra ( xx + 193 , xx + 171 , xx + 209 ) ; xx [ 158 ]
= xx [ 212 ] * xx [ 212 ] ; xx [ 159 ] = xx [ 209 ] * xx [ 212 ] ; xx [ 164 ]
= xx [ 210 ] * xx [ 211 ] ; xx [ 182 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 211 ]
* xx [ 211 ] + xx [ 158 ] ) ; xx [ 183 ] = xx [ 30 ] * ( xx [ 159 ] + xx [
164 ] ) ; xx [ 184 ] = xx [ 30 ] * ( xx [ 210 ] * xx [ 212 ] - xx [ 209 ] *
xx [ 211 ] ) ; xx [ 192 ] = pm_math_Vector3_dot_ra ( xx + 206 , xx + 182 ) ;
xx [ 197 ] = - 0.9998688553766499 ; xx [ 198 ] = 0.01619418172173452 ; xx [
199 ] = - 1.432695097203727e-4 ; pm_math_Quaternion_xform_ra ( xx + 193 , xx
+ 197 , xx + 203 ) ; xx [ 213 ] = 3.853526455973429e-7 ; xx [ 214 ] = -
2.270950962420449e-9 ; xx [ 215 ] = - 1.775173053264905e-3 ;
pm_math_Quaternion_xform_ra ( xx + 193 , xx + 213 , xx + 216 ) ; xx [ 219 ] =
- 3.853526455052602e-7 ; xx [ 220 ] = 2.270950960928974e-9 ; xx [ 221 ] =
1.775173053264939e-3 ; pm_math_Quaternion_xform_ra ( xx + 193 , xx + 219 , xx
+ 222 ) ; xx [ 225 ] = xx [ 216 ] + xx [ 222 ] ; xx [ 226 ] = xx [ 217 ] + xx
[ 223 ] ; xx [ 227 ] = xx [ 218 ] + xx [ 224 ] ; xx [ 216 ] = xx [ 30 ] * (
xx [ 164 ] - xx [ 159 ] ) ; xx [ 217 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 158 ]
+ xx [ 210 ] * xx [ 210 ] ) ; xx [ 218 ] = xx [ 30 ] * ( xx [ 209 ] * xx [
210 ] + xx [ 211 ] * xx [ 212 ] ) ; xx [ 158 ] = pm_math_Vector3_dot_ra ( xx
+ 206 , xx + 216 ) ; xx [ 209 ] = - 1.432869371958337e-4 ; xx [ 210 ] =
8.412683135540379e-8 ; xx [ 211 ] = 0.9999999897344243 ;
pm_math_Quaternion_xform_ra ( xx + 193 , xx + 209 , xx + 222 ) ; xx [ 159 ] =
xx [ 192 ] * xx [ 192 ] + xx [ 158 ] * xx [ 158 ] ; xx [ 164 ] = xx [ 159 ]
== 0.0 ? 0.0 : ( xx [ 192 ] * ( pm_math_Vector3_dot_ra ( xx + 206 , xx + 203
) - pm_math_Vector3_dot_ra ( xx + 225 , xx + 216 ) ) - xx [ 158 ] * (
pm_math_Vector3_dot_ra ( xx + 206 , xx + 222 ) - pm_math_Vector3_dot_ra ( xx
+ 225 , xx + 182 ) ) ) / xx [ 159 ] ; xx [ 193 ] = - 0.2643737754551072 ; xx
[ 194 ] = - 0.029879175111395 ; xx [ 195 ] = 0.6425355357697462 ; xx [ 196 ]
= 0.7185832081390159 ; pm_math_Quaternion_compose_ra ( xx + 175 , xx + 193 ,
xx + 228 ) ; xx [ 203 ] = xx [ 229 ] * xx [ 230 ] ; xx [ 204 ] = xx [ 228 ] *
xx [ 231 ] ; xx [ 205 ] = xx [ 231 ] * xx [ 231 ] ; xx [ 222 ] = xx [ 30 ] *
( xx [ 203 ] - xx [ 204 ] ) ; xx [ 223 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 205
] + xx [ 229 ] * xx [ 229 ] ) ; xx [ 224 ] = xx [ 30 ] * ( xx [ 228 ] * xx [
229 ] + xx [ 230 ] * xx [ 231 ] ) ; xx [ 212 ] = pm_math_Vector3_dot_ra ( xx
+ 206 , xx + 222 ) ; xx [ 232 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 230 ] * xx [
230 ] + xx [ 205 ] ) ; xx [ 233 ] = xx [ 30 ] * ( xx [ 204 ] + xx [ 203 ] ) ;
xx [ 234 ] = xx [ 30 ] * ( xx [ 229 ] * xx [ 231 ] - xx [ 228 ] * xx [ 230 ]
) ; xx [ 203 ] = pm_math_Vector3_dot_ra ( xx + 206 , xx + 232 ) ; xx [ 204 ]
= xx [ 203 ] * xx [ 203 ] + xx [ 212 ] * xx [ 212 ] ; xx [ 205 ] = xx [ 204 ]
== 0.0 ? 0.0 : ( xx [ 212 ] * pm_math_Vector3_dot_ra ( xx + 225 , xx + 232 )
- xx [ 203 ] * pm_math_Vector3_dot_ra ( xx + 225 , xx + 222 ) ) / xx [ 204 ]
; xx [ 225 ] = - 7.507028932003404e-3 ; xx [ 226 ] = - 2.112440099565184e-3 ;
xx [ 227 ] = - 5.538643790510167e-3 ; pm_math_Quaternion_xform_ra ( xx + 175
, xx + 225 , xx + 228 ) ; xx [ 235 ] = 7.507028932003423e-3 ; xx [ 236 ] =
2.112440099565195e-3 ; xx [ 237 ] = 5.538643790510151e-3 ;
pm_math_Quaternion_xform_ra ( xx + 175 , xx + 235 , xx + 238 ) ; xx [ 241 ] =
xx [ 228 ] + xx [ 238 ] ; xx [ 242 ] = xx [ 229 ] + xx [ 239 ] ; xx [ 243 ] =
xx [ 230 ] + xx [ 240 ] ; xx [ 228 ] = xx [ 159 ] == 0.0 ? 0.0 : ( xx [ 192 ]
* pm_math_Vector3_dot_ra ( xx + 241 , xx + 216 ) - xx [ 158 ] *
pm_math_Vector3_dot_ra ( xx + 241 , xx + 182 ) ) / xx [ 159 ] ; xx [ 182 ] =
0.8584274834925502 ; xx [ 183 ] = 0.4183459750058262 ; xx [ 184 ] = -
0.2967977438948484 ; pm_math_Quaternion_xform_ra ( xx + 175 , xx + 182 , xx +
216 ) ; xx [ 229 ] = 0.3415522478515931 ; xx [ 230 ] = - 0.03450918424939552
; xx [ 231 ] = 0.9392290339368589 ; pm_math_Quaternion_xform_ra ( xx + 175 ,
xx + 229 , xx + 238 ) ; xx [ 159 ] = xx [ 204 ] == 0.0 ? 0.0 : ( xx [ 203 ] *
( pm_math_Vector3_dot_ra ( xx + 241 , xx + 222 ) + pm_math_Vector3_dot_ra (
xx + 206 , xx + 216 ) ) - xx [ 212 ] * ( pm_math_Vector3_dot_ra ( xx + 241 ,
xx + 232 ) + pm_math_Vector3_dot_ra ( xx + 206 , xx + 238 ) ) ) / xx [ 204 ]
; xx [ 238 ] = xx [ 0 ] ; xx [ 239 ] = xx [ 0 ] ; xx [ 240 ] = xx [ 0 ] ; xx
[ 241 ] = xx [ 0 ] ; xx [ 242 ] = xx [ 0 ] ; xx [ 243 ] = xx [ 0 ] ; xx [ 244
] = pm_math_Vector3_dot_ra ( xx + 50 , xx + 47 ) ; xx [ 245 ] = xx [ 0 ] ; xx
[ 246 ] = xx [ 0 ] ; xx [ 247 ] = pm_math_Vector3_dot_ra ( xx + 67 , xx + 47
) ; xx [ 248 ] = pm_math_Vector3_dot_ra ( xx + 70 , xx + 47 ) ; xx [ 249 ] =
xx [ 0 ] ; xx [ 250 ] = xx [ 0 ] ; xx [ 251 ] = xx [ 0 ] ; xx [ 252 ] = xx [
0 ] ; xx [ 253 ] = xx [ 0 ] ; xx [ 254 ] = xx [ 0 ] ; xx [ 255 ] =
pm_math_Vector3_dot_ra ( xx + 98 , xx + 36 ) ; xx [ 256 ] = xx [ 0 ] ; xx [
257 ] = xx [ 0 ] ; xx [ 258 ] = pm_math_Vector3_dot_ra ( xx + 92 , xx + 36 )
; xx [ 259 ] = pm_math_Vector3_dot_ra ( xx + 107 , xx + 36 ) ; xx [ 260 ] =
xx [ 0 ] ; xx [ 261 ] = xx [ 0 ] ; xx [ 262 ] = xx [ 0 ] ; xx [ 263 ] = xx [
0 ] ; xx [ 264 ] = xx [ 0 ] ; xx [ 265 ] = xx [ 0 ] ; xx [ 266 ] =
pm_math_Vector3_dot_ra ( xx + 129 , xx + 47 ) ; xx [ 267 ] =
pm_math_Vector3_dot_ra ( xx + 143 , xx + 47 ) ; xx [ 268 ] =
pm_math_Vector3_dot_ra ( xx + 146 , xx + 47 ) ; xx [ 269 ] = xx [ 0 ] ; xx [
270 ] = xx [ 0 ] ; xx [ 271 ] = xx [ 0 ] ; xx [ 272 ] = xx [ 0 ] ; xx [ 273 ]
= xx [ 0 ] ; xx [ 274 ] = xx [ 0 ] ; xx [ 275 ] = xx [ 0 ] ; xx [ 276 ] = xx
[ 0 ] ; xx [ 277 ] = pm_math_Vector3_dot_ra ( xx + 165 , xx + 36 ) ; xx [ 278
] = pm_math_Vector3_dot_ra ( xx + 39 , xx + 36 ) ; xx [ 279 ] =
pm_math_Vector3_dot_ra ( xx + 168 , xx + 36 ) ; xx [ 280 ] = xx [ 0 ] ; xx [
281 ] = xx [ 0 ] ; xx [ 282 ] = xx [ 0 ] ; xx [ 283 ] = xx [ 0 ] ; xx [ 284 ]
= xx [ 0 ] ; xx [ 285 ] = xx [ 0 ] ; xx [ 286 ] = xx [ 164 ] + xx [ 205 ] ;
xx [ 287 ] = xx [ 228 ] + xx [ 159 ] ; xx [ 288 ] = xx [ 0 ] ; xx [ 289 ] =
xx [ 0 ] ; xx [ 290 ] = xx [ 0 ] ; xx [ 291 ] = xx [ 0 ] ; xx [ 292 ] = xx [
0 ] ; xx [ 67 ] = 0.3857454927643891 ; xx [ 68 ] = 0.5034016931648384 ; xx [
69 ] = 0.5842144511346662 ; xx [ 70 ] = 0.5064391624036924 ;
pm_math_Quaternion_compose_ra ( xx + 57 , xx + 67 , xx + 143 ) ; xx [ 39 ] =
xx [ 30 ] * ( xx [ 143 ] * xx [ 145 ] + xx [ 144 ] * xx [ 146 ] ) ; xx [ 40 ]
= xx [ 30 ] * ( xx [ 145 ] * xx [ 146 ] - xx [ 143 ] * xx [ 144 ] ) ; xx [ 41
] = xx [ 31 ] - xx [ 30 ] * ( xx [ 144 ] * xx [ 144 ] + xx [ 145 ] * xx [ 145
] ) ; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 73 , xx + 50 ) ; xx [ 57 ]
= 9.999999999999992e-4 ; xx [ 58 ] = - xx [ 10 ] ; xx [ 59 ] = - xx [ 80 ] ;
xx [ 60 ] = xx [ 57 ] - xx [ 81 ] ; pm_math_Quaternion_xform_ra ( xx + 53 ,
xx + 58 , xx + 79 ) ; xx [ 10 ] = 6.499999983768677e-3 ; xx [ 53 ] =
0.01420789472061078 ; xx [ 54 ] = - xx [ 83 ] ; xx [ 55 ] = xx [ 82 ] - xx [
86 ] ; xx [ 56 ] = xx [ 30 ] * ( xx [ 10 ] * xx [ 17 ] * xx [ 17 ] + xx [ 10
] * xx [ 23 ] * xx [ 23 ] ) - xx [ 53 ] ; pm_math_Quaternion_xform_ra ( xx +
13 , xx + 54 , xx + 58 ) ; xx [ 17 ] = 1.144603405378138e-3 ; xx [ 54 ] = -
xx [ 89 ] ; xx [ 55 ] = xx [ 91 ] ; xx [ 56 ] = - 0.01723973036822852 ;
pm_math_Quaternion_xform_ra ( xx + 13 , xx + 54 , xx + 92 ) ; xx [ 23 ] = xx
[ 17 ] + xx [ 92 ] ; xx [ 71 ] = 4.103366750367182e-3 ; xx [ 72 ] =
4.83817857357089e-3 ; xx [ 83 ] = xx [ 72 ] - xx [ 93 ] ; xx [ 86 ] =
0.0139940128625294 ; xx [ 98 ] = 5.457891674323079e-3 ; xx [ 92 ] = xx [ 98 ]
+ xx [ 94 ] ; xx [ 93 ] = 0.02757292748492293 ; xx [ 107 ] = xx [ 50 ] + xx [
79 ] + xx [ 58 ] - xx [ 23 ] - xx [ 71 ] ; xx [ 108 ] = xx [ 51 ] + xx [ 80 ]
+ xx [ 59 ] + xx [ 83 ] - xx [ 86 ] ; xx [ 109 ] = xx [ 52 ] + xx [ 81 ] + xx
[ 60 ] - xx [ 92 ] - xx [ 93 ] ; xx [ 143 ] = 0.5034016931648424 ; xx [ 144 ]
= 0.3857454927643942 ; xx [ 145 ] = 0.5064391624036884 ; xx [ 146 ] =
0.5842144511346627 ; pm_math_Quaternion_compose_ra ( xx + 136 , xx + 143 , xx
+ 164 ) ; xx [ 50 ] = xx [ 30 ] * ( xx [ 164 ] * xx [ 166 ] + xx [ 165 ] * xx
[ 167 ] ) ; xx [ 51 ] = xx [ 30 ] * ( xx [ 166 ] * xx [ 167 ] - xx [ 164 ] *
xx [ 165 ] ) ; xx [ 52 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 165 ] * xx [ 165 ]
+ xx [ 166 ] * xx [ 166 ] ) ; pm_math_Quaternion_xform_ra ( xx + 136 , xx +
149 , xx + 58 ) ; xx [ 79 ] = 1.000000000000001e-3 ; xx [ 129 ] = xx [ 87 ] ;
xx [ 130 ] = - xx [ 153 ] ; xx [ 131 ] = xx [ 79 ] - xx [ 154 ] ;
pm_math_Quaternion_xform_ra ( xx + 132 , xx + 129 , xx + 136 ) ; xx [ 80 ] =
- 1.207894729634444e-3 ; xx [ 129 ] = - xx [ 160 ] ; xx [ 130 ] = - ( xx [ 96
] + xx [ 32 ] ) ; xx [ 131 ] = xx [ 80 ] ; pm_math_Quaternion_xform_ra ( xx +
13 , xx + 129 , xx + 132 ) ; xx [ 13 ] = xx [ 58 ] + xx [ 136 ] + xx [ 132 ]
- xx [ 23 ] - xx [ 71 ] ; xx [ 14 ] = xx [ 59 ] + xx [ 137 ] + xx [ 133 ] +
xx [ 83 ] - xx [ 86 ] ; xx [ 15 ] = xx [ 60 ] + xx [ 138 ] + xx [ 134 ] - xx
[ 92 ] - xx [ 93 ] ; xx [ 129 ] = - pm_math_Vector3_dot_ra ( xx + 39 , xx +
47 ) ; xx [ 130 ] = - pm_math_Vector3_dot_ra ( xx + 107 , xx + 36 ) ; xx [
131 ] = - pm_math_Vector3_dot_ra ( xx + 50 , xx + 47 ) ; xx [ 132 ] = -
pm_math_Vector3_dot_ra ( xx + 13 , xx + 36 ) ; xx [ 133 ] = -
sm_core_canonicalAngle ( state [ 26 ] + sm_core_canonicalAngle ( atan2 ( xx [
158 ] , xx [ 192 ] ) - state [ 26 ] ) - state [ 28 ] + atan2 ( xx [ 212 ] ,
xx [ 203 ] ) ) ; xx [ 13 ] = 1.0e-8 ; memcpy ( xx + 304 , xx + 238 , 55 *
sizeof ( double ) ) ; factorAndSolveWide ( 5 , 11 , xx + 304 , xx + 134 , xx
+ 164 , ii + 0 , xx + 129 , xx [ 13 ] , xx + 293 ) ; xx [ 14 ] = state [ 12 ]
+ xx [ 299 ] ; xx [ 15 ] = xx [ 2 ] * xx [ 14 ] ; xx [ 16 ] = sin ( xx [ 15 ]
) ; xx [ 23 ] = cos ( xx [ 15 ] ) ; xx [ 15 ] = xx [ 1 ] * xx [ 16 ] - xx [ 5
] * xx [ 23 ] ; xx [ 32 ] = xx [ 7 ] * xx [ 23 ] + xx [ 8 ] * xx [ 16 ] ; xx
[ 39 ] = - xx [ 32 ] ; xx [ 40 ] = xx [ 7 ] * xx [ 16 ] - xx [ 8 ] * xx [ 23
] ; xx [ 41 ] = xx [ 5 ] * xx [ 16 ] + xx [ 1 ] * xx [ 23 ] ; xx [ 16 ] = -
xx [ 41 ] ; xx [ 129 ] = xx [ 15 ] ; xx [ 130 ] = xx [ 39 ] ; xx [ 131 ] = xx
[ 40 ] ; xx [ 132 ] = xx [ 16 ] ; xx [ 23 ] = state [ 18 ] + xx [ 302 ] ; xx
[ 50 ] = xx [ 2 ] * xx [ 23 ] ; xx [ 51 ] = cos ( xx [ 50 ] ) ; xx [ 52 ] =
state [ 20 ] + xx [ 303 ] ; xx [ 58 ] = xx [ 2 ] * xx [ 52 ] ; xx [ 59 ] =
sin ( xx [ 58 ] ) ; xx [ 133 ] = cos ( xx [ 58 ] ) ; xx [ 134 ] = - ( xx [ 24
] * xx [ 59 ] ) ; xx [ 135 ] = xx [ 26 ] * xx [ 59 ] ; xx [ 136 ] = - ( xx [
27 ] * xx [ 59 ] ) ; pm_math_Quaternion_compose_ra ( xx + 19 , xx + 133 , xx
+ 164 ) ; xx [ 58 ] = sin ( xx [ 50 ] ) ; xx [ 50 ] = xx [ 51 ] * xx [ 165 ]
+ xx [ 58 ] * xx [ 166 ] ; xx [ 59 ] = xx [ 51 ] * xx [ 164 ] + xx [ 58 ] *
xx [ 167 ] ; xx [ 60 ] = xx [ 58 ] * xx [ 164 ] - xx [ 51 ] * xx [ 167 ] ; xx
[ 81 ] = xx [ 51 ] * xx [ 166 ] - xx [ 58 ] * xx [ 165 ] ; xx [ 133 ] = - xx
[ 50 ] ; xx [ 134 ] = xx [ 59 ] ; xx [ 135 ] = xx [ 60 ] ; xx [ 136 ] = xx [
81 ] ; pm_math_Quaternion_compose_ra ( xx + 129 , xx + 133 , xx + 175 ) ; xx
[ 107 ] = xx [ 30 ] * ( xx [ 60 ] * xx [ 50 ] + xx [ 81 ] * xx [ 59 ] ) ; xx
[ 108 ] = xx [ 30 ] * ( xx [ 81 ] * xx [ 60 ] - xx [ 59 ] * xx [ 50 ] ) ; xx
[ 109 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 59 ] * xx [ 59 ] + xx [ 60 ] * xx [
60 ] ) ; pm_math_Vector3_cross_ra ( xx + 107 , xx + 44 , xx + 133 ) ;
pm_math_Quaternion_xform_ra ( xx + 175 , xx + 133 , xx + 136 ) ; xx [ 203 ] =
- ( xx [ 40 ] * xx [ 58 ] - xx [ 32 ] * xx [ 51 ] ) ; xx [ 204 ] = xx [ 15 ]
* xx [ 51 ] + xx [ 41 ] * xx [ 58 ] ; xx [ 205 ] = xx [ 15 ] * xx [ 58 ] - xx
[ 41 ] * xx [ 51 ] ; xx [ 206 ] = - ( xx [ 32 ] * xx [ 58 ] + xx [ 40 ] * xx
[ 51 ] ) ; pm_math_Quaternion_compose_ra ( xx + 203 , xx + 164 , xx + 238 ) ;
xx [ 133 ] = xx [ 30 ] * ( xx [ 164 ] * xx [ 166 ] - xx [ 165 ] * xx [ 167 ]
) ; xx [ 134 ] = - ( xx [ 30 ] * ( xx [ 164 ] * xx [ 165 ] + xx [ 166 ] * xx
[ 167 ] ) ) ; xx [ 135 ] = xx [ 30 ] * ( xx [ 165 ] * xx [ 165 ] + xx [ 166 ]
* xx [ 166 ] ) - xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 133 , xx + 44 ,
xx + 152 ) ; pm_math_Quaternion_xform_ra ( xx + 238 , xx + 152 , xx + 158 ) ;
pm_math_Quaternion_xform_ra ( xx + 238 , xx + 64 , xx + 152 ) ;
pm_math_Vector3_cross_ra ( xx + 107 , xx + 73 , xx + 168 ) ;
pm_math_Quaternion_xform_ra ( xx + 175 , xx + 168 , xx + 107 ) ; xx [ 168 ] =
xx [ 39 ] ; xx [ 169 ] = xx [ 40 ] ; xx [ 170 ] = xx [ 16 ] ;
pm_math_Quaternion_xform_ra ( xx + 164 , xx + 76 , xx + 175 ) ; xx [ 16 ] =
xx [ 4 ] + xx [ 175 ] ; xx [ 39 ] = xx [ 51 ] * xx [ 176 ] - xx [ 16 ] * xx [
58 ] ; xx [ 50 ] = xx [ 43 ] * xx [ 51 ] - xx [ 42 ] * xx [ 58 ] ; xx [ 59 ]
= xx [ 42 ] + xx [ 30 ] * xx [ 50 ] * xx [ 58 ] ; xx [ 60 ] = xx [ 16 ] + xx
[ 30 ] * xx [ 39 ] * xx [ 58 ] + xx [ 59 ] ; xx [ 81 ] = xx [ 60 ] * xx [ 41
] ; xx [ 83 ] = xx [ 43 ] - xx [ 30 ] * xx [ 50 ] * xx [ 51 ] ; xx [ 50 ] =
xx [ 30 ] * xx [ 39 ] * xx [ 51 ] - ( xx [ 176 ] + xx [ 83 ] ) + xx [ 82 ] ;
xx [ 39 ] = xx [ 50 ] * xx [ 41 ] ; xx [ 87 ] = xx [ 60 ] * xx [ 32 ] + xx [
40 ] * xx [ 50 ] ; xx [ 216 ] = - xx [ 81 ] ; xx [ 217 ] = xx [ 39 ] ; xx [
218 ] = xx [ 87 ] ; pm_math_Vector3_cross_ra ( xx + 168 , xx + 216 , xx + 222
) ; xx [ 92 ] = xx [ 89 ] * xx [ 41 ] ; xx [ 94 ] = xx [ 91 ] * xx [ 41 ] ;
xx [ 99 ] = xx [ 89 ] * xx [ 32 ] + xx [ 91 ] * xx [ 40 ] ; xx [ 216 ] = xx [
92 ] ; xx [ 217 ] = - xx [ 94 ] ; xx [ 218 ] = - xx [ 99 ] ;
pm_math_Vector3_cross_ra ( xx + 168 , xx + 216 , xx + 232 ) ; xx [ 100 ] = xx
[ 30 ] * ( xx [ 232 ] + xx [ 92 ] * xx [ 15 ] ) ; xx [ 92 ] = xx [ 30 ] * (
xx [ 233 ] - xx [ 94 ] * xx [ 15 ] ) ; xx [ 94 ] = xx [ 30 ] * ( xx [ 234 ] -
xx [ 99 ] * xx [ 15 ] ) ; xx [ 216 ] = xx [ 107 ] + xx [ 30 ] * ( xx [ 222 ]
- xx [ 81 ] * xx [ 15 ] ) + xx [ 100 ] - xx [ 50 ] + xx [ 91 ] ; xx [ 217 ] =
xx [ 108 ] + xx [ 30 ] * ( xx [ 223 ] + xx [ 39 ] * xx [ 15 ] ) - xx [ 60 ] +
xx [ 92 ] + xx [ 89 ] ; xx [ 218 ] = xx [ 109 ] + xx [ 30 ] * ( xx [ 15 ] *
xx [ 87 ] + xx [ 224 ] ) + xx [ 94 ] ; pm_math_Vector3_cross_ra ( xx + 133 ,
xx + 73 , xx + 107 ) ; pm_math_Quaternion_xform_ra ( xx + 238 , xx + 107 , xx
+ 133 ) ; xx [ 39 ] = xx [ 58 ] * xx [ 176 ] + xx [ 16 ] * xx [ 51 ] ; xx [
50 ] = xx [ 42 ] * xx [ 51 ] + xx [ 43 ] * xx [ 58 ] ; xx [ 60 ] = xx [ 30 ]
* xx [ 39 ] * xx [ 58 ] + xx [ 30 ] * xx [ 50 ] * xx [ 58 ] - xx [ 176 ] - xx
[ 43 ] ; xx [ 81 ] = xx [ 42 ] - ( xx [ 30 ] * xx [ 50 ] * xx [ 51 ] - xx [
16 ] + xx [ 30 ] * xx [ 39 ] * xx [ 51 ] ) ; xx [ 39 ] = xx [ 81 ] * xx [ 41
] ; xx [ 50 ] = xx [ 60 ] * xx [ 41 ] ; xx [ 87 ] = xx [ 81 ] * xx [ 32 ] +
xx [ 40 ] * xx [ 60 ] ; xx [ 107 ] = xx [ 39 ] ; xx [ 108 ] = - xx [ 50 ] ;
xx [ 109 ] = - xx [ 87 ] ; pm_math_Vector3_cross_ra ( xx + 168 , xx + 107 ,
xx + 222 ) ; xx [ 107 ] = xx [ 133 ] + xx [ 60 ] + xx [ 30 ] * ( xx [ 222 ] +
xx [ 39 ] * xx [ 15 ] ) ; xx [ 108 ] = xx [ 134 ] + xx [ 81 ] + xx [ 30 ] * (
xx [ 223 ] - xx [ 50 ] * xx [ 15 ] ) ; xx [ 109 ] = xx [ 135 ] + xx [ 30 ] *
( xx [ 224 ] - xx [ 87 ] * xx [ 15 ] ) ; pm_math_Quaternion_xform_ra ( xx +
238 , xx + 61 , xx + 133 ) ; pm_math_Quaternion_xform_ra ( xx + 164 , xx +
104 , xx + 222 ) ; pm_math_Quaternion_xform_ra ( xx + 203 , xx + 222 , xx +
164 ) ; xx [ 222 ] = xx [ 133 ] + xx [ 164 ] ; xx [ 223 ] = xx [ 134 ] + xx [
165 ] ; xx [ 224 ] = xx [ 135 ] + xx [ 166 ] ; xx [ 39 ] = state [ 14 ] + xx
[ 300 ] ; xx [ 50 ] = xx [ 2 ] * xx [ 39 ] ; xx [ 60 ] = cos ( xx [ 50 ] ) ;
xx [ 81 ] = state [ 16 ] + xx [ 301 ] ; xx [ 87 ] = xx [ 2 ] * xx [ 81 ] ; xx
[ 99 ] = sin ( xx [ 87 ] ) ; xx [ 164 ] = cos ( xx [ 87 ] ) ; xx [ 165 ] = xx
[ 33 ] * xx [ 99 ] ; xx [ 166 ] = - ( xx [ 35 ] * xx [ 99 ] ) ; xx [ 167 ] =
- ( xx [ 27 ] * xx [ 99 ] ) ; pm_math_Quaternion_compose_ra ( xx + 110 , xx +
164 , xx + 242 ) ; xx [ 87 ] = sin ( xx [ 50 ] ) ; xx [ 50 ] = xx [ 60 ] * xx
[ 242 ] - xx [ 87 ] * xx [ 245 ] ; xx [ 99 ] = xx [ 60 ] * xx [ 243 ] - xx [
87 ] * xx [ 244 ] ; xx [ 133 ] = xx [ 60 ] * xx [ 244 ] + xx [ 87 ] * xx [
243 ] ; xx [ 134 ] = xx [ 60 ] * xx [ 245 ] + xx [ 87 ] * xx [ 242 ] ; xx [
164 ] = xx [ 50 ] ; xx [ 165 ] = xx [ 99 ] ; xx [ 166 ] = xx [ 133 ] ; xx [
167 ] = xx [ 134 ] ; pm_math_Quaternion_compose_ra ( xx + 129 , xx + 164 , xx
+ 246 ) ; xx [ 164 ] = xx [ 30 ] * ( xx [ 99 ] * xx [ 134 ] - xx [ 50 ] * xx
[ 133 ] ) ; xx [ 165 ] = xx [ 30 ] * ( xx [ 50 ] * xx [ 99 ] + xx [ 133 ] *
xx [ 134 ] ) ; xx [ 166 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 99 ] * xx [ 99 ] +
xx [ 133 ] * xx [ 133 ] ) ; pm_math_Vector3_cross_ra ( xx + 164 , xx + 114 ,
xx + 133 ) ; pm_math_Quaternion_xform_ra ( xx + 246 , xx + 133 , xx + 232 ) ;
xx [ 250 ] = xx [ 15 ] * xx [ 60 ] + xx [ 41 ] * xx [ 87 ] ; xx [ 251 ] = xx
[ 40 ] * xx [ 87 ] - xx [ 32 ] * xx [ 60 ] ; xx [ 252 ] = xx [ 40 ] * xx [ 60
] + xx [ 32 ] * xx [ 87 ] ; xx [ 253 ] = xx [ 15 ] * xx [ 87 ] - xx [ 41 ] *
xx [ 60 ] ; pm_math_Quaternion_compose_ra ( xx + 250 , xx + 242 , xx + 254 )
; xx [ 133 ] = xx [ 30 ] * ( xx [ 243 ] * xx [ 245 ] - xx [ 242 ] * xx [ 244
] ) ; xx [ 134 ] = xx [ 30 ] * ( xx [ 242 ] * xx [ 243 ] + xx [ 244 ] * xx [
245 ] ) ; xx [ 135 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 243 ] * xx [ 243 ] + xx
[ 244 ] * xx [ 244 ] ) ; pm_math_Vector3_cross_ra ( xx + 133 , xx + 114 , xx
+ 258 ) ; pm_math_Quaternion_xform_ra ( xx + 254 , xx + 258 , xx + 261 ) ;
pm_math_Quaternion_xform_ra ( xx + 254 , xx + 140 , xx + 258 ) ;
pm_math_Vector3_cross_ra ( xx + 164 , xx + 149 , xx + 264 ) ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 264 , xx + 164 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 122 , xx + 246 ) ; xx [ 50 ] =
xx [ 85 ] - xx [ 246 ] ; xx [ 99 ] = xx [ 87 ] * xx [ 247 ] ; xx [ 139 ] = xx
[ 50 ] * xx [ 87 ] ; xx [ 147 ] = xx [ 50 ] + xx [ 30 ] * ( xx [ 99 ] * xx [
60 ] - xx [ 139 ] * xx [ 87 ] ) ; xx [ 148 ] = xx [ 125 ] * xx [ 87 ] ; xx [
167 ] = xx [ 148 ] * xx [ 60 ] ; xx [ 178 ] = xx [ 157 ] * xx [ 87 ] ; xx [
192 ] = xx [ 178 ] * xx [ 87 ] ; xx [ 207 ] = xx [ 30 ] * ( xx [ 167 ] + xx [
192 ] ) - xx [ 157 ] ; xx [ 208 ] = xx [ 147 ] - xx [ 207 ] ; xx [ 212 ] = xx
[ 208 ] * xx [ 41 ] ; xx [ 228 ] = xx [ 30 ] * ( xx [ 139 ] * xx [ 60 ] + xx
[ 99 ] * xx [ 87 ] ) ; xx [ 99 ] = xx [ 148 ] * xx [ 87 ] ; xx [ 87 ] = xx [
178 ] * xx [ 60 ] ; xx [ 60 ] = xx [ 30 ] * ( xx [ 99 ] - xx [ 87 ] ) - xx [
125 ] ; xx [ 139 ] = xx [ 228 ] - ( xx [ 247 ] + xx [ 60 ] ) - xx [ 96 ] ; xx
[ 148 ] = xx [ 139 ] * xx [ 41 ] ; xx [ 178 ] = xx [ 40 ] * xx [ 139 ] - xx [
208 ] * xx [ 32 ] ; xx [ 264 ] = xx [ 212 ] ; xx [ 265 ] = xx [ 148 ] ; xx [
266 ] = xx [ 178 ] ; pm_math_Vector3_cross_ra ( xx + 168 , xx + 264 , xx +
267 ) ; xx [ 264 ] = xx [ 164 ] + xx [ 30 ] * ( xx [ 267 ] + xx [ 212 ] * xx
[ 15 ] ) + xx [ 100 ] - xx [ 139 ] + xx [ 91 ] ; xx [ 265 ] = xx [ 165 ] + xx
[ 208 ] + xx [ 30 ] * ( xx [ 268 ] + xx [ 148 ] * xx [ 15 ] ) + xx [ 92 ] +
xx [ 89 ] ; xx [ 266 ] = xx [ 166 ] + xx [ 30 ] * ( xx [ 15 ] * xx [ 178 ] +
xx [ 269 ] ) + xx [ 94 ] ; pm_math_Vector3_cross_ra ( xx + 133 , xx + 149 ,
xx + 164 ) ; pm_math_Quaternion_xform_ra ( xx + 254 , xx + 164 , xx + 133 ) ;
xx [ 92 ] = xx [ 247 ] - ( xx [ 228 ] + xx [ 30 ] * ( xx [ 87 ] - xx [ 99 ] )
) - xx [ 125 ] ; xx [ 87 ] = xx [ 147 ] - xx [ 30 ] * ( xx [ 167 ] + xx [ 192
] ) + xx [ 157 ] ; xx [ 94 ] = xx [ 87 ] * xx [ 41 ] ; xx [ 99 ] = xx [ 92 ]
* xx [ 41 ] ; xx [ 41 ] = xx [ 87 ] * xx [ 32 ] + xx [ 40 ] * xx [ 92 ] ; xx
[ 164 ] = xx [ 94 ] ; xx [ 165 ] = - xx [ 99 ] ; xx [ 166 ] = - xx [ 41 ] ;
pm_math_Vector3_cross_ra ( xx + 168 , xx + 164 , xx + 267 ) ; xx [ 164 ] = xx
[ 133 ] + xx [ 92 ] + xx [ 30 ] * ( xx [ 267 ] + xx [ 94 ] * xx [ 15 ] ) ; xx
[ 165 ] = xx [ 134 ] + xx [ 87 ] + xx [ 30 ] * ( xx [ 268 ] - xx [ 99 ] * xx
[ 15 ] ) ; xx [ 166 ] = xx [ 135 ] + xx [ 30 ] * ( xx [ 269 ] - xx [ 41 ] *
xx [ 15 ] ) ; pm_math_Quaternion_xform_ra ( xx + 254 , xx + 101 , xx + 133 )
; pm_math_Quaternion_xform_ra ( xx + 242 , xx + 161 , xx + 167 ) ;
pm_math_Quaternion_xform_ra ( xx + 250 , xx + 167 , xx + 242 ) ; xx [ 167 ] =
xx [ 133 ] + xx [ 242 ] ; xx [ 168 ] = xx [ 134 ] + xx [ 243 ] ; xx [ 169 ] =
xx [ 135 ] + xx [ 244 ] ; xx [ 15 ] = state [ 10 ] + xx [ 298 ] ; xx [ 32 ] =
xx [ 2 ] * xx [ 15 ] ; xx [ 40 ] = sin ( xx [ 32 ] ) ; xx [ 242 ] = cos ( xx
[ 32 ] ) ; xx [ 243 ] = - ( xx [ 9 ] * xx [ 40 ] ) ; xx [ 244 ] = xx [ 12 ] *
xx [ 40 ] ; xx [ 245 ] = xx [ 18 ] * xx [ 40 ] ;
pm_math_Quaternion_compose_ra ( xx + 117 , xx + 242 , xx + 267 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 126 , xx + 133 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 179 , xx + 242 ) ; xx [ 32 ] =
state [ 8 ] + xx [ 297 ] ; xx [ 40 ] = xx [ 2 ] * xx [ 32 ] ; xx [ 41 ] = sin
( xx [ 40 ] ) ; xx [ 271 ] = cos ( xx [ 40 ] ) ; xx [ 272 ] = - ( xx [ 88 ] *
xx [ 41 ] ) ; xx [ 273 ] = - ( xx [ 95 ] * xx [ 41 ] ) ; xx [ 274 ] = - ( xx
[ 97 ] * xx [ 41 ] ) ; pm_math_Quaternion_compose_ra ( xx + 185 , xx + 271 ,
xx + 275 ) ; pm_math_Quaternion_xform_ra ( xx + 275 , xx + 189 , xx + 271 ) ;
pm_math_Quaternion_xform_ra ( xx + 275 , xx + 200 , xx + 279 ) ; xx [ 282 ] =
xx [ 133 ] - xx [ 242 ] + xx [ 3 ] - ( xx [ 271 ] - xx [ 279 ] - xx [ 11 ] )
; xx [ 283 ] = xx [ 134 ] - xx [ 243 ] - xx [ 90 ] - ( xx [ 272 ] - xx [ 280
] - xx [ 121 ] ) ; xx [ 284 ] = xx [ 135 ] - xx [ 244 ] - xx [ 155 ] - ( xx [
273 ] - xx [ 281 ] + xx [ 156 ] ) ; pm_math_Quaternion_compose_ra ( xx + 275
, xx + 171 , xx + 242 ) ; xx [ 40 ] = xx [ 245 ] * xx [ 245 ] ; xx [ 41 ] =
xx [ 242 ] * xx [ 245 ] ; xx [ 87 ] = xx [ 243 ] * xx [ 244 ] ; xx [ 133 ] =
xx [ 31 ] - xx [ 30 ] * ( xx [ 244 ] * xx [ 244 ] + xx [ 40 ] ) ; xx [ 134 ]
= xx [ 30 ] * ( xx [ 41 ] + xx [ 87 ] ) ; xx [ 135 ] = xx [ 30 ] * ( xx [ 243
] * xx [ 245 ] - xx [ 242 ] * xx [ 244 ] ) ; xx [ 92 ] =
pm_math_Vector3_dot_ra ( xx + 282 , xx + 133 ) ; pm_math_Quaternion_xform_ra
( xx + 275 , xx + 197 , xx + 271 ) ; pm_math_Quaternion_xform_ra ( xx + 275 ,
xx + 213 , xx + 279 ) ; pm_math_Quaternion_xform_ra ( xx + 275 , xx + 219 ,
xx + 285 ) ; xx [ 288 ] = xx [ 279 ] + xx [ 285 ] ; xx [ 289 ] = xx [ 280 ] +
xx [ 286 ] ; xx [ 290 ] = xx [ 281 ] + xx [ 287 ] ; xx [ 279 ] = xx [ 30 ] *
( xx [ 87 ] - xx [ 41 ] ) ; xx [ 280 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 40 ]
+ xx [ 243 ] * xx [ 243 ] ) ; xx [ 281 ] = xx [ 30 ] * ( xx [ 242 ] * xx [
243 ] + xx [ 244 ] * xx [ 245 ] ) ; xx [ 40 ] = pm_math_Vector3_dot_ra ( xx +
282 , xx + 279 ) ; pm_math_Quaternion_xform_ra ( xx + 275 , xx + 209 , xx +
242 ) ; xx [ 41 ] = xx [ 92 ] * xx [ 92 ] + xx [ 40 ] * xx [ 40 ] ; xx [ 87 ]
= xx [ 41 ] == 0.0 ? 0.0 : ( xx [ 92 ] * ( pm_math_Vector3_dot_ra ( xx + 282
, xx + 271 ) - pm_math_Vector3_dot_ra ( xx + 288 , xx + 279 ) ) - xx [ 40 ] *
( pm_math_Vector3_dot_ra ( xx + 282 , xx + 242 ) - pm_math_Vector3_dot_ra (
xx + 288 , xx + 133 ) ) ) / xx [ 41 ] ; pm_math_Quaternion_compose_ra ( xx +
267 , xx + 193 , xx + 242 ) ; xx [ 94 ] = xx [ 243 ] * xx [ 244 ] ; xx [ 99 ]
= xx [ 242 ] * xx [ 245 ] ; xx [ 100 ] = xx [ 245 ] * xx [ 245 ] ; xx [ 271 ]
= xx [ 30 ] * ( xx [ 94 ] - xx [ 99 ] ) ; xx [ 272 ] = xx [ 31 ] - xx [ 30 ]
* ( xx [ 100 ] + xx [ 243 ] * xx [ 243 ] ) ; xx [ 273 ] = xx [ 30 ] * ( xx [
242 ] * xx [ 243 ] + xx [ 244 ] * xx [ 245 ] ) ; xx [ 139 ] =
pm_math_Vector3_dot_ra ( xx + 282 , xx + 271 ) ; xx [ 274 ] = xx [ 31 ] - xx
[ 30 ] * ( xx [ 244 ] * xx [ 244 ] + xx [ 100 ] ) ; xx [ 275 ] = xx [ 30 ] *
( xx [ 99 ] + xx [ 94 ] ) ; xx [ 276 ] = xx [ 30 ] * ( xx [ 243 ] * xx [ 245
] - xx [ 242 ] * xx [ 244 ] ) ; xx [ 94 ] = pm_math_Vector3_dot_ra ( xx + 282
, xx + 274 ) ; xx [ 99 ] = xx [ 94 ] * xx [ 94 ] + xx [ 139 ] * xx [ 139 ] ;
xx [ 100 ] = xx [ 99 ] == 0.0 ? 0.0 : ( xx [ 139 ] * pm_math_Vector3_dot_ra (
xx + 288 , xx + 274 ) - xx [ 94 ] * pm_math_Vector3_dot_ra ( xx + 288 , xx +
271 ) ) / xx [ 99 ] ; pm_math_Quaternion_xform_ra ( xx + 267 , xx + 225 , xx
+ 242 ) ; pm_math_Quaternion_xform_ra ( xx + 267 , xx + 235 , xx + 285 ) ; xx
[ 288 ] = xx [ 242 ] + xx [ 285 ] ; xx [ 289 ] = xx [ 243 ] + xx [ 286 ] ; xx
[ 290 ] = xx [ 244 ] + xx [ 287 ] ; xx [ 147 ] = xx [ 41 ] == 0.0 ? 0.0 : (
xx [ 92 ] * pm_math_Vector3_dot_ra ( xx + 288 , xx + 279 ) - xx [ 40 ] *
pm_math_Vector3_dot_ra ( xx + 288 , xx + 133 ) ) / xx [ 41 ] ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 182 , xx + 133 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 229 , xx + 242 ) ; xx [ 41 ] =
xx [ 99 ] == 0.0 ? 0.0 : ( xx [ 94 ] * ( pm_math_Vector3_dot_ra ( xx + 288 ,
xx + 271 ) + pm_math_Vector3_dot_ra ( xx + 282 , xx + 133 ) ) - xx [ 139 ] *
( pm_math_Vector3_dot_ra ( xx + 288 , xx + 274 ) + pm_math_Vector3_dot_ra (
xx + 282 , xx + 242 ) ) ) / xx [ 99 ] ; xx [ 304 ] = xx [ 0 ] ; xx [ 305 ] =
xx [ 0 ] ; xx [ 306 ] = xx [ 0 ] ; xx [ 307 ] = xx [ 0 ] ; xx [ 308 ] = xx [
0 ] ; xx [ 309 ] = xx [ 0 ] ; xx [ 310 ] = pm_math_Vector3_dot_ra ( xx + 136
, xx + 47 ) ; xx [ 311 ] = xx [ 0 ] ; xx [ 312 ] = xx [ 0 ] ; xx [ 313 ] =
pm_math_Vector3_dot_ra ( xx + 158 , xx + 47 ) ; xx [ 314 ] =
pm_math_Vector3_dot_ra ( xx + 152 , xx + 47 ) ; xx [ 315 ] = xx [ 0 ] ; xx [
316 ] = xx [ 0 ] ; xx [ 317 ] = xx [ 0 ] ; xx [ 318 ] = xx [ 0 ] ; xx [ 319 ]
= xx [ 0 ] ; xx [ 320 ] = xx [ 0 ] ; xx [ 321 ] = pm_math_Vector3_dot_ra ( xx
+ 216 , xx + 36 ) ; xx [ 322 ] = xx [ 0 ] ; xx [ 323 ] = xx [ 0 ] ; xx [ 324
] = pm_math_Vector3_dot_ra ( xx + 107 , xx + 36 ) ; xx [ 325 ] =
pm_math_Vector3_dot_ra ( xx + 222 , xx + 36 ) ; xx [ 326 ] = xx [ 0 ] ; xx [
327 ] = xx [ 0 ] ; xx [ 328 ] = xx [ 0 ] ; xx [ 329 ] = xx [ 0 ] ; xx [ 330 ]
= xx [ 0 ] ; xx [ 331 ] = xx [ 0 ] ; xx [ 332 ] = pm_math_Vector3_dot_ra ( xx
+ 232 , xx + 47 ) ; xx [ 333 ] = pm_math_Vector3_dot_ra ( xx + 261 , xx + 47
) ; xx [ 334 ] = pm_math_Vector3_dot_ra ( xx + 258 , xx + 47 ) ; xx [ 335 ] =
xx [ 0 ] ; xx [ 336 ] = xx [ 0 ] ; xx [ 337 ] = xx [ 0 ] ; xx [ 338 ] = xx [
0 ] ; xx [ 339 ] = xx [ 0 ] ; xx [ 340 ] = xx [ 0 ] ; xx [ 341 ] = xx [ 0 ] ;
xx [ 342 ] = xx [ 0 ] ; xx [ 343 ] = pm_math_Vector3_dot_ra ( xx + 264 , xx +
36 ) ; xx [ 344 ] = pm_math_Vector3_dot_ra ( xx + 164 , xx + 36 ) ; xx [ 345
] = pm_math_Vector3_dot_ra ( xx + 167 , xx + 36 ) ; xx [ 346 ] = xx [ 0 ] ;
xx [ 347 ] = xx [ 0 ] ; xx [ 348 ] = xx [ 0 ] ; xx [ 349 ] = xx [ 0 ] ; xx [
350 ] = xx [ 0 ] ; xx [ 351 ] = xx [ 0 ] ; xx [ 352 ] = xx [ 87 ] + xx [ 100
] ; xx [ 353 ] = xx [ 147 ] + xx [ 41 ] ; xx [ 354 ] = xx [ 0 ] ; xx [ 355 ]
= xx [ 0 ] ; xx [ 356 ] = xx [ 0 ] ; xx [ 357 ] = xx [ 0 ] ; xx [ 358 ] = xx
[ 0 ] ; pm_math_Quaternion_compose_ra ( xx + 238 , xx + 67 , xx + 133 ) ; xx
[ 107 ] = xx [ 30 ] * ( xx [ 133 ] * xx [ 135 ] + xx [ 134 ] * xx [ 136 ] ) ;
xx [ 108 ] = xx [ 30 ] * ( xx [ 135 ] * xx [ 136 ] - xx [ 133 ] * xx [ 134 ]
) ; xx [ 109 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 134 ] * xx [ 134 ] + xx [ 135
] * xx [ 135 ] ) ; pm_math_Quaternion_xform_ra ( xx + 238 , xx + 73 , xx +
133 ) ; xx [ 136 ] = - xx [ 16 ] ; xx [ 137 ] = - xx [ 176 ] ; xx [ 138 ] =
xx [ 57 ] - xx [ 177 ] ; pm_math_Quaternion_xform_ra ( xx + 203 , xx + 136 ,
xx + 152 ) ; xx [ 136 ] = - xx [ 59 ] ; xx [ 137 ] = xx [ 82 ] - xx [ 83 ] ;
xx [ 138 ] = xx [ 30 ] * ( xx [ 10 ] * xx [ 51 ] * xx [ 51 ] + xx [ 10 ] * xx
[ 58 ] * xx [ 58 ] ) - xx [ 53 ] ; pm_math_Quaternion_xform_ra ( xx + 129 ,
xx + 136 , xx + 158 ) ; pm_math_Quaternion_xform_ra ( xx + 129 , xx + 54 , xx
+ 136 ) ; xx [ 16 ] = xx [ 17 ] + xx [ 136 ] ; xx [ 41 ] = xx [ 72 ] - xx [
137 ] ; xx [ 51 ] = xx [ 98 ] + xx [ 138 ] ; xx [ 136 ] = xx [ 133 ] + xx [
152 ] + xx [ 158 ] - xx [ 16 ] - xx [ 71 ] ; xx [ 137 ] = xx [ 134 ] + xx [
153 ] + xx [ 159 ] + xx [ 41 ] - xx [ 86 ] ; xx [ 138 ] = xx [ 135 ] + xx [
154 ] + xx [ 160 ] - xx [ 51 ] - xx [ 93 ] ; pm_math_Quaternion_compose_ra (
xx + 254 , xx + 143 , xx + 164 ) ; xx [ 133 ] = xx [ 30 ] * ( xx [ 164 ] * xx
[ 166 ] + xx [ 165 ] * xx [ 167 ] ) ; xx [ 134 ] = xx [ 30 ] * ( xx [ 166 ] *
xx [ 167 ] - xx [ 164 ] * xx [ 165 ] ) ; xx [ 135 ] = xx [ 31 ] - xx [ 30 ] *
( xx [ 165 ] * xx [ 165 ] + xx [ 166 ] * xx [ 166 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 254 , xx + 149 , xx + 152 ) ; xx [ 158 ] =
xx [ 50 ] ; xx [ 159 ] = - xx [ 247 ] ; xx [ 160 ] = xx [ 79 ] - xx [ 248 ] ;
pm_math_Quaternion_xform_ra ( xx + 250 , xx + 158 , xx + 164 ) ; xx [ 158 ] =
- xx [ 207 ] ; xx [ 159 ] = - ( xx [ 96 ] + xx [ 60 ] ) ; xx [ 160 ] = xx [
80 ] ; pm_math_Quaternion_xform_ra ( xx + 129 , xx + 158 , xx + 58 ) ; xx [
129 ] = xx [ 152 ] + xx [ 164 ] + xx [ 58 ] - xx [ 16 ] - xx [ 71 ] ; xx [
130 ] = xx [ 153 ] + xx [ 165 ] + xx [ 59 ] + xx [ 41 ] - xx [ 86 ] ; xx [
131 ] = xx [ 154 ] + xx [ 166 ] + xx [ 60 ] - xx [ 51 ] - xx [ 93 ] ; xx [
164 ] = - pm_math_Vector3_dot_ra ( xx + 107 , xx + 47 ) ; xx [ 165 ] = -
pm_math_Vector3_dot_ra ( xx + 136 , xx + 36 ) ; xx [ 166 ] = -
pm_math_Vector3_dot_ra ( xx + 133 , xx + 47 ) ; xx [ 167 ] = -
pm_math_Vector3_dot_ra ( xx + 129 , xx + 36 ) ; xx [ 168 ] = -
sm_core_canonicalAngle ( state [ 26 ] + sm_core_canonicalAngle ( atan2 ( xx [
40 ] , xx [ 92 ] ) - state [ 26 ] ) - state [ 28 ] + atan2 ( xx [ 139 ] , xx
[ 94 ] ) ) ; memcpy ( xx + 238 , xx + 304 , 55 * sizeof ( double ) ) ;
factorAndSolveWide ( 5 , 11 , xx + 238 , xx + 203 , xx + 359 , ii + 0 , xx +
164 , xx [ 13 ] , xx + 129 ) ; xx [ 16 ] = xx [ 32 ] + xx [ 133 ] ; xx [ 32 ]
= xx [ 15 ] + xx [ 134 ] ; xx [ 15 ] = xx [ 14 ] + xx [ 135 ] ; xx [ 14 ] =
xx [ 39 ] + xx [ 136 ] ; xx [ 39 ] = xx [ 81 ] + xx [ 137 ] ; xx [ 40 ] = xx
[ 23 ] + xx [ 138 ] ; xx [ 23 ] = xx [ 52 ] + xx [ 139 ] ; xx [ 238 ] = state
[ 0 ] + xx [ 293 ] + xx [ 129 ] ; xx [ 239 ] = state [ 1 ] ; xx [ 240 ] =
state [ 2 ] + xx [ 294 ] + xx [ 130 ] ; xx [ 241 ] = state [ 3 ] ; xx [ 242 ]
= state [ 4 ] + xx [ 295 ] + xx [ 131 ] ; xx [ 243 ] = state [ 5 ] ; xx [ 244
] = state [ 6 ] + xx [ 296 ] + xx [ 132 ] ; xx [ 245 ] = state [ 7 ] ; xx [
246 ] = xx [ 16 ] ; xx [ 247 ] = state [ 9 ] ; xx [ 248 ] = xx [ 32 ] ; xx [
249 ] = state [ 11 ] ; xx [ 250 ] = xx [ 15 ] ; xx [ 251 ] = state [ 13 ] ;
xx [ 252 ] = xx [ 14 ] ; xx [ 253 ] = state [ 15 ] ; xx [ 254 ] = xx [ 39 ] ;
xx [ 255 ] = state [ 17 ] ; xx [ 256 ] = xx [ 40 ] ; xx [ 257 ] = state [ 19
] ; xx [ 258 ] = xx [ 23 ] ; xx [ 259 ] = state [ 21 ] ; xx [ 260 ] = state [
22 ] ; xx [ 261 ] = state [ 23 ] ; xx [ 262 ] = state [ 24 ] ; xx [ 263 ] =
state [ 25 ] ; xx [ 264 ] = state [ 26 ] ; xx [ 265 ] = state [ 27 ] ; xx [
266 ] = state [ 28 ] ; xx [ 41 ] = xx [ 2 ] * xx [ 15 ] ; xx [ 15 ] = sin (
xx [ 41 ] ) ; xx [ 50 ] = cos ( xx [ 41 ] ) ; xx [ 41 ] = xx [ 7 ] * xx [ 15
] - xx [ 8 ] * xx [ 50 ] ; xx [ 51 ] = xx [ 2 ] * xx [ 40 ] ; xx [ 40 ] = sin
( xx [ 51 ] ) ; xx [ 52 ] = xx [ 7 ] * xx [ 50 ] + xx [ 8 ] * xx [ 15 ] ; xx
[ 58 ] = cos ( xx [ 51 ] ) ; xx [ 51 ] = xx [ 1 ] * xx [ 15 ] - xx [ 5 ] * xx
[ 50 ] ; xx [ 59 ] = xx [ 5 ] * xx [ 15 ] + xx [ 1 ] * xx [ 50 ] ; xx [ 129 ]
= - ( xx [ 41 ] * xx [ 40 ] - xx [ 52 ] * xx [ 58 ] ) ; xx [ 130 ] = xx [ 51
] * xx [ 58 ] + xx [ 59 ] * xx [ 40 ] ; xx [ 131 ] = xx [ 51 ] * xx [ 40 ] -
xx [ 59 ] * xx [ 58 ] ; xx [ 132 ] = - ( xx [ 52 ] * xx [ 40 ] + xx [ 41 ] *
xx [ 58 ] ) ; xx [ 15 ] = xx [ 2 ] * xx [ 23 ] ; xx [ 23 ] = sin ( xx [ 15 ]
) ; xx [ 133 ] = cos ( xx [ 15 ] ) ; xx [ 134 ] = - ( xx [ 24 ] * xx [ 23 ] )
; xx [ 135 ] = xx [ 26 ] * xx [ 23 ] ; xx [ 136 ] = - ( xx [ 27 ] * xx [ 23 ]
) ; pm_math_Quaternion_compose_ra ( xx + 19 , xx + 133 , xx + 164 ) ;
pm_math_Quaternion_compose_ra ( xx + 129 , xx + 164 , xx + 133 ) ;
pm_math_Quaternion_compose_ra ( xx + 133 , xx + 67 , xx + 175 ) ; xx [ 67 ] =
xx [ 30 ] * ( xx [ 175 ] * xx [ 177 ] + xx [ 176 ] * xx [ 178 ] ) ; xx [ 68 ]
= xx [ 30 ] * ( xx [ 177 ] * xx [ 178 ] - xx [ 175 ] * xx [ 176 ] ) ; xx [ 69
] = xx [ 31 ] - xx [ 30 ] * ( xx [ 176 ] * xx [ 176 ] + xx [ 177 ] * xx [ 177
] ) ; pm_math_Quaternion_xform_ra ( xx + 133 , xx + 73 , xx + 81 ) ;
pm_math_Quaternion_xform_ra ( xx + 164 , xx + 76 , xx + 107 ) ; xx [ 133 ] =
- ( xx [ 4 ] + xx [ 107 ] ) ; xx [ 134 ] = - xx [ 108 ] ; xx [ 135 ] = xx [
57 ] - xx [ 109 ] ; pm_math_Quaternion_xform_ra ( xx + 129 , xx + 133 , xx +
107 ) ; xx [ 129 ] = xx [ 51 ] ; xx [ 130 ] = - xx [ 52 ] ; xx [ 131 ] = xx [
41 ] ; xx [ 132 ] = - xx [ 59 ] ; xx [ 15 ] = xx [ 43 ] * xx [ 58 ] - xx [ 42
] * xx [ 40 ] ; xx [ 23 ] = 7.499997465581819e-3 ; xx [ 133 ] = - ( xx [ 42 ]
+ xx [ 30 ] * xx [ 15 ] * xx [ 40 ] ) ; xx [ 134 ] = xx [ 30 ] * xx [ 15 ] *
xx [ 58 ] + xx [ 23 ] ; xx [ 135 ] = xx [ 30 ] * ( xx [ 10 ] * xx [ 58 ] * xx
[ 58 ] + xx [ 10 ] * xx [ 40 ] * xx [ 40 ] ) - xx [ 53 ] ;
pm_math_Quaternion_xform_ra ( xx + 129 , xx + 133 , xx + 136 ) ;
pm_math_Quaternion_xform_ra ( xx + 129 , xx + 54 , xx + 133 ) ; xx [ 10 ] =
xx [ 17 ] + xx [ 133 ] ; xx [ 15 ] = xx [ 72 ] - xx [ 134 ] ; xx [ 17 ] = xx
[ 98 ] + xx [ 135 ] ; xx [ 53 ] = xx [ 81 ] + xx [ 107 ] + xx [ 136 ] - xx [
10 ] - xx [ 71 ] ; xx [ 54 ] = xx [ 82 ] + xx [ 108 ] + xx [ 137 ] + xx [ 15
] - xx [ 86 ] ; xx [ 55 ] = xx [ 83 ] + xx [ 109 ] + xx [ 138 ] - xx [ 17 ] -
xx [ 93 ] ; xx [ 40 ] = xx [ 2 ] * xx [ 14 ] ; xx [ 14 ] = cos ( xx [ 40 ] )
; xx [ 50 ] = sin ( xx [ 40 ] ) ; xx [ 133 ] = xx [ 51 ] * xx [ 14 ] + xx [
59 ] * xx [ 50 ] ; xx [ 134 ] = xx [ 41 ] * xx [ 50 ] - xx [ 52 ] * xx [ 14 ]
; xx [ 135 ] = xx [ 41 ] * xx [ 14 ] + xx [ 52 ] * xx [ 50 ] ; xx [ 136 ] =
xx [ 51 ] * xx [ 50 ] - xx [ 59 ] * xx [ 14 ] ; xx [ 40 ] = xx [ 2 ] * xx [
39 ] ; xx [ 39 ] = sin ( xx [ 40 ] ) ; xx [ 56 ] = cos ( xx [ 40 ] ) ; xx [
57 ] = xx [ 33 ] * xx [ 39 ] ; xx [ 58 ] = - ( xx [ 35 ] * xx [ 39 ] ) ; xx [
59 ] = - ( xx [ 27 ] * xx [ 39 ] ) ; pm_math_Quaternion_compose_ra ( xx + 110
, xx + 56 , xx + 164 ) ; pm_math_Quaternion_compose_ra ( xx + 133 , xx + 164
, xx + 56 ) ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 143 , xx + 175 )
; xx [ 39 ] = xx [ 30 ] * ( xx [ 175 ] * xx [ 177 ] + xx [ 176 ] * xx [ 178 ]
) ; xx [ 40 ] = xx [ 30 ] * ( xx [ 177 ] * xx [ 178 ] - xx [ 175 ] * xx [ 176
] ) ; xx [ 41 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 176 ] * xx [ 176 ] + xx [
177 ] * xx [ 177 ] ) ; pm_math_Quaternion_xform_ra ( xx + 56 , xx + 149 , xx
+ 81 ) ; pm_math_Quaternion_xform_ra ( xx + 164 , xx + 122 , xx + 56 ) ; xx [
98 ] = xx [ 85 ] - xx [ 56 ] ; xx [ 99 ] = - xx [ 57 ] ; xx [ 100 ] = xx [ 79
] - xx [ 58 ] ; pm_math_Quaternion_xform_ra ( xx + 133 , xx + 98 , xx + 56 )
; xx [ 51 ] = xx [ 125 ] * xx [ 50 ] ; xx [ 52 ] = xx [ 157 ] * xx [ 50 ] ;
xx [ 59 ] = 7.499996433601628e-3 ; xx [ 98 ] = xx [ 157 ] - xx [ 30 ] * ( xx
[ 51 ] * xx [ 14 ] + xx [ 52 ] * xx [ 50 ] ) ; xx [ 99 ] = - ( xx [ 59 ] + xx
[ 30 ] * ( xx [ 51 ] * xx [ 50 ] - xx [ 52 ] * xx [ 14 ] ) ) ; xx [ 100 ] =
xx [ 80 ] ; pm_math_Quaternion_xform_ra ( xx + 129 , xx + 98 , xx + 50 ) ; xx
[ 98 ] = xx [ 81 ] + xx [ 56 ] + xx [ 50 ] - xx [ 10 ] - xx [ 71 ] ; xx [ 99
] = xx [ 82 ] + xx [ 57 ] + xx [ 51 ] + xx [ 15 ] - xx [ 86 ] ; xx [ 100 ] =
xx [ 83 ] + xx [ 58 ] + xx [ 52 ] - xx [ 17 ] - xx [ 93 ] ; xx [ 10 ] = xx [
2 ] * xx [ 32 ] ; xx [ 14 ] = sin ( xx [ 10 ] ) ; xx [ 79 ] = cos ( xx [ 10 ]
) ; xx [ 80 ] = - ( xx [ 9 ] * xx [ 14 ] ) ; xx [ 81 ] = xx [ 12 ] * xx [ 14
] ; xx [ 82 ] = xx [ 18 ] * xx [ 14 ] ; pm_math_Quaternion_compose_ra ( xx +
117 , xx + 79 , xx + 129 ) ; pm_math_Quaternion_xform_ra ( xx + 129 , xx +
126 , xx + 50 ) ; pm_math_Quaternion_xform_ra ( xx + 129 , xx + 179 , xx + 56
) ; xx [ 10 ] = xx [ 2 ] * xx [ 16 ] ; xx [ 14 ] = sin ( xx [ 10 ] ) ; xx [
79 ] = cos ( xx [ 10 ] ) ; xx [ 80 ] = - ( xx [ 88 ] * xx [ 14 ] ) ; xx [ 81
] = - ( xx [ 95 ] * xx [ 14 ] ) ; xx [ 82 ] = - ( xx [ 97 ] * xx [ 14 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 185 , xx + 79 , xx + 14 ) ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 189 , xx + 70 ) ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 200 , xx + 79 ) ; xx [ 92 ] = xx
[ 50 ] - xx [ 56 ] + xx [ 3 ] - ( xx [ 70 ] - xx [ 79 ] - xx [ 11 ] ) ; xx [
93 ] = xx [ 51 ] - xx [ 57 ] - xx [ 90 ] - ( xx [ 71 ] - xx [ 80 ] - xx [ 121
] ) ; xx [ 94 ] = xx [ 52 ] - xx [ 58 ] - xx [ 155 ] - ( xx [ 72 ] - xx [ 81
] + xx [ 156 ] ) ; pm_math_Quaternion_compose_ra ( xx + 14 , xx + 171 , xx +
79 ) ; xx [ 10 ] = xx [ 80 ] * xx [ 81 ] ; xx [ 14 ] = xx [ 79 ] * xx [ 82 ]
; xx [ 15 ] = xx [ 82 ] * xx [ 82 ] ; xx [ 50 ] = xx [ 30 ] * ( xx [ 10 ] -
xx [ 14 ] ) ; xx [ 51 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 15 ] + xx [ 80 ] *
xx [ 80 ] ) ; xx [ 52 ] = xx [ 30 ] * ( xx [ 79 ] * xx [ 80 ] + xx [ 81 ] *
xx [ 82 ] ) ; xx [ 56 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 81 ] * xx [ 81 ] +
xx [ 15 ] ) ; xx [ 57 ] = xx [ 30 ] * ( xx [ 14 ] + xx [ 10 ] ) ; xx [ 58 ] =
xx [ 30 ] * ( xx [ 80 ] * xx [ 82 ] - xx [ 79 ] * xx [ 81 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 129 , xx + 193 , xx + 14 ) ; xx [ 10 ] =
xx [ 15 ] * xx [ 16 ] ; xx [ 32 ] = xx [ 14 ] * xx [ 17 ] ; xx [ 60 ] = xx [
17 ] * xx [ 17 ] ; xx [ 70 ] = xx [ 30 ] * ( xx [ 10 ] - xx [ 32 ] ) ; xx [
71 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 60 ] + xx [ 15 ] * xx [ 15 ] ) ; xx [
72 ] = xx [ 30 ] * ( xx [ 14 ] * xx [ 15 ] + xx [ 16 ] * xx [ 17 ] ) ; xx [
79 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 16 ] * xx [ 16 ] + xx [ 60 ] ) ; xx [
80 ] = xx [ 30 ] * ( xx [ 32 ] + xx [ 10 ] ) ; xx [ 81 ] = xx [ 30 ] * ( xx [
15 ] * xx [ 17 ] - xx [ 14 ] * xx [ 16 ] ) ; xx [ 129 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 67 , xx + 47 ) ) ; xx [ 130 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 53 , xx + 36 ) ) ; xx [ 131 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 39 , xx + 47 ) ) ; xx [ 132 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 98 , xx + 36 ) ) ; xx [ 133 ] = fabs (
sm_core_canonicalAngle ( state [ 26 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 92 , xx + 50 ) , pm_math_Vector3_dot_ra ( xx +
92 , xx + 56 ) ) - state [ 26 ] ) - state [ 28 ] + atan2 (
pm_math_Vector3_dot_ra ( xx + 92 , xx + 70 ) , pm_math_Vector3_dot_ra ( xx +
92 , xx + 79 ) ) ) ) ; ii [ 0 ] = 129 ; { int ll ; for ( ll = 130 ; ll < 134
; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -=
129 ; xx [ 10 ] = xx [ 129 + ( ii [ 0 ] ) ] ; xx [ 14 ] = 1.0e-9 ; xx [ 15 ]
= xx [ 10 ] - xx [ 14 ] ; if ( xx [ 15 ] < 0.0 ) ii [ 1 ] = - 1 ; else if (
xx [ 15 ] > 0.0 ) ii [ 1 ] = + 1 ; else ii [ 1 ] = 0 ; ii [ 2 ] = ii [ 1 ] ;
if ( 0 > ii [ 2 ] ) ii [ 2 ] = 0 ; if ( ii [ 2 ] != 0 ) { switch ( ii [ 0 ] )
{ case 0 : case 1 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P2' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 2 : case 3 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 4 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gear Constraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 10 ] = xx [ 2 ] * xx [ 250 ] ; xx [ 15 ] = sin (
xx [ 10 ] ) ; xx [ 16 ] = cos ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 1 ] * xx [ 15
] - xx [ 5 ] * xx [ 16 ] ; xx [ 17 ] = xx [ 7 ] * xx [ 16 ] + xx [ 8 ] * xx [
15 ] ; xx [ 32 ] = - xx [ 17 ] ; xx [ 39 ] = xx [ 7 ] * xx [ 15 ] - xx [ 8 ]
* xx [ 16 ] ; xx [ 40 ] = xx [ 5 ] * xx [ 15 ] + xx [ 1 ] * xx [ 16 ] ; xx [
15 ] = - xx [ 40 ] ; xx [ 50 ] = xx [ 10 ] ; xx [ 51 ] = xx [ 32 ] ; xx [ 52
] = xx [ 39 ] ; xx [ 53 ] = xx [ 15 ] ; xx [ 16 ] = xx [ 2 ] * xx [ 256 ] ;
xx [ 41 ] = cos ( xx [ 16 ] ) ; xx [ 54 ] = xx [ 2 ] * xx [ 258 ] ; xx [ 55 ]
= sin ( xx [ 54 ] ) ; xx [ 67 ] = cos ( xx [ 54 ] ) ; xx [ 68 ] = - ( xx [ 24
] * xx [ 55 ] ) ; xx [ 69 ] = xx [ 26 ] * xx [ 55 ] ; xx [ 70 ] = - ( xx [ 27
] * xx [ 55 ] ) ; pm_math_Quaternion_compose_ra ( xx + 19 , xx + 67 , xx + 54
) ; xx [ 58 ] = sin ( xx [ 16 ] ) ; xx [ 16 ] = xx [ 41 ] * xx [ 55 ] + xx [
58 ] * xx [ 56 ] ; xx [ 60 ] = xx [ 41 ] * xx [ 54 ] + xx [ 58 ] * xx [ 57 ]
; xx [ 67 ] = xx [ 58 ] * xx [ 54 ] - xx [ 41 ] * xx [ 57 ] ; xx [ 68 ] = xx
[ 41 ] * xx [ 56 ] - xx [ 58 ] * xx [ 55 ] ; xx [ 69 ] = - xx [ 16 ] ; xx [
70 ] = xx [ 60 ] ; xx [ 71 ] = xx [ 67 ] ; xx [ 72 ] = xx [ 68 ] ;
pm_math_Quaternion_compose_ra ( xx + 50 , xx + 69 , xx + 79 ) ; xx [ 69 ] =
xx [ 30 ] * ( xx [ 67 ] * xx [ 16 ] + xx [ 68 ] * xx [ 60 ] ) ; xx [ 70 ] =
xx [ 30 ] * ( xx [ 68 ] * xx [ 67 ] - xx [ 60 ] * xx [ 16 ] ) ; xx [ 71 ] =
xx [ 31 ] - xx [ 30 ] * ( xx [ 60 ] * xx [ 60 ] + xx [ 67 ] * xx [ 67 ] ) ;
pm_math_Vector3_cross_ra ( xx + 69 , xx + 44 , xx + 92 ) ;
pm_math_Quaternion_xform_ra ( xx + 79 , xx + 92 , xx + 98 ) ; xx [ 129 ] = -
( xx [ 39 ] * xx [ 58 ] - xx [ 17 ] * xx [ 41 ] ) ; xx [ 130 ] = xx [ 10 ] *
xx [ 41 ] + xx [ 40 ] * xx [ 58 ] ; xx [ 131 ] = xx [ 10 ] * xx [ 58 ] - xx [
40 ] * xx [ 41 ] ; xx [ 132 ] = - ( xx [ 17 ] * xx [ 58 ] + xx [ 39 ] * xx [
41 ] ) ; pm_math_Quaternion_compose_ra ( xx + 129 , xx + 54 , xx + 133 ) ; xx
[ 92 ] = xx [ 30 ] * ( xx [ 54 ] * xx [ 56 ] - xx [ 55 ] * xx [ 57 ] ) ; xx [
93 ] = - ( xx [ 30 ] * ( xx [ 54 ] * xx [ 55 ] + xx [ 56 ] * xx [ 57 ] ) ) ;
xx [ 94 ] = xx [ 30 ] * ( xx [ 55 ] * xx [ 55 ] + xx [ 56 ] * xx [ 56 ] ) -
xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 92 , xx + 44 , xx + 107 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 107 , xx + 137 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 64 , xx + 107 ) ;
pm_math_Vector3_cross_ra ( xx + 69 , xx + 73 , xx + 64 ) ;
pm_math_Quaternion_xform_ra ( xx + 79 , xx + 64 , xx + 67 ) ; xx [ 64 ] = xx
[ 32 ] ; xx [ 65 ] = xx [ 39 ] ; xx [ 66 ] = xx [ 15 ] ;
pm_math_Quaternion_xform_ra ( xx + 54 , xx + 76 , xx + 70 ) ; xx [ 15 ] = xx
[ 4 ] + xx [ 70 ] ; xx [ 4 ] = xx [ 41 ] * xx [ 71 ] - xx [ 15 ] * xx [ 58 ]
; xx [ 16 ] = xx [ 43 ] * xx [ 41 ] - xx [ 42 ] * xx [ 58 ] ; xx [ 32 ] = xx
[ 42 ] + xx [ 30 ] * xx [ 16 ] * xx [ 58 ] ; xx [ 60 ] = xx [ 15 ] + xx [ 30
] * xx [ 4 ] * xx [ 58 ] + xx [ 32 ] ; xx [ 70 ] = xx [ 60 ] * xx [ 40 ] ; xx
[ 72 ] = xx [ 30 ] * xx [ 16 ] * xx [ 41 ] + xx [ 23 ] ; xx [ 16 ] = xx [ 30
] * xx [ 4 ] * xx [ 41 ] - xx [ 71 ] + xx [ 72 ] ; xx [ 4 ] = xx [ 16 ] * xx
[ 40 ] ; xx [ 23 ] = xx [ 60 ] * xx [ 17 ] + xx [ 39 ] * xx [ 16 ] ; xx [ 76
] = - xx [ 70 ] ; xx [ 77 ] = xx [ 4 ] ; xx [ 78 ] = xx [ 23 ] ;
pm_math_Vector3_cross_ra ( xx + 64 , xx + 76 , xx + 79 ) ; xx [ 76 ] = xx [
89 ] * xx [ 40 ] ; xx [ 77 ] = xx [ 91 ] * xx [ 40 ] ; xx [ 78 ] = xx [ 89 ]
* xx [ 17 ] + xx [ 91 ] * xx [ 39 ] ; xx [ 143 ] = xx [ 76 ] ; xx [ 144 ] = -
xx [ 77 ] ; xx [ 145 ] = - xx [ 78 ] ; pm_math_Vector3_cross_ra ( xx + 64 ,
xx + 143 , xx + 146 ) ; xx [ 82 ] = xx [ 30 ] * ( xx [ 146 ] + xx [ 76 ] * xx
[ 10 ] ) ; xx [ 76 ] = xx [ 30 ] * ( xx [ 147 ] - xx [ 77 ] * xx [ 10 ] ) ;
xx [ 77 ] = xx [ 148 ] - xx [ 78 ] * xx [ 10 ] ; xx [ 78 ] = xx [ 30 ] * xx [
77 ] ; xx [ 143 ] = xx [ 67 ] + xx [ 30 ] * ( xx [ 79 ] - xx [ 70 ] * xx [ 10
] ) + xx [ 82 ] - xx [ 16 ] + xx [ 91 ] ; xx [ 144 ] = xx [ 68 ] + xx [ 30 ]
* ( xx [ 80 ] + xx [ 4 ] * xx [ 10 ] ) - xx [ 60 ] + xx [ 76 ] + xx [ 89 ] ;
xx [ 145 ] = xx [ 69 ] + xx [ 30 ] * ( xx [ 10 ] * xx [ 23 ] + xx [ 81 ] ) +
xx [ 78 ] ; pm_math_Vector3_cross_ra ( xx + 92 , xx + 73 , xx + 67 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 67 , xx + 79 ) ; xx [ 4 ] = xx
[ 58 ] * xx [ 71 ] + xx [ 15 ] * xx [ 41 ] ; xx [ 16 ] = xx [ 42 ] * xx [ 41
] + xx [ 43 ] * xx [ 58 ] ; xx [ 23 ] = xx [ 30 ] * xx [ 16 ] * xx [ 58 ] ;
xx [ 60 ] = xx [ 30 ] * xx [ 4 ] * xx [ 58 ] + xx [ 23 ] - xx [ 71 ] - xx [
43 ] ; xx [ 67 ] = xx [ 30 ] * xx [ 16 ] * xx [ 41 ] ; xx [ 16 ] = xx [ 42 ]
- ( xx [ 67 ] - xx [ 15 ] + xx [ 30 ] * xx [ 4 ] * xx [ 41 ] ) ; xx [ 4 ] =
xx [ 16 ] * xx [ 40 ] ; xx [ 68 ] = xx [ 60 ] * xx [ 40 ] ; xx [ 69 ] = xx [
16 ] * xx [ 17 ] + xx [ 39 ] * xx [ 60 ] ; xx [ 92 ] = xx [ 4 ] ; xx [ 93 ] =
- xx [ 68 ] ; xx [ 94 ] = - xx [ 69 ] ; pm_math_Vector3_cross_ra ( xx + 64 ,
xx + 92 , xx + 146 ) ; xx [ 92 ] = xx [ 79 ] + xx [ 60 ] + xx [ 30 ] * ( xx [
146 ] + xx [ 4 ] * xx [ 10 ] ) ; xx [ 93 ] = xx [ 80 ] + xx [ 16 ] + xx [ 30
] * ( xx [ 147 ] - xx [ 68 ] * xx [ 10 ] ) ; xx [ 94 ] = xx [ 81 ] + xx [ 30
] * ( xx [ 148 ] - xx [ 69 ] * xx [ 10 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 133 , xx + 61 , xx + 68 ) ; pm_math_Quaternion_xform_ra ( xx + 54 , xx +
104 , xx + 60 ) ; pm_math_Quaternion_xform_ra ( xx + 129 , xx + 60 , xx + 79
) ; xx [ 104 ] = xx [ 68 ] + xx [ 79 ] ; xx [ 105 ] = xx [ 69 ] + xx [ 80 ] ;
xx [ 106 ] = xx [ 70 ] + xx [ 81 ] ; xx [ 4 ] = xx [ 2 ] * xx [ 252 ] ; xx [
16 ] = cos ( xx [ 4 ] ) ; xx [ 63 ] = xx [ 2 ] * xx [ 254 ] ; xx [ 68 ] = sin
( xx [ 63 ] ) ; xx [ 164 ] = cos ( xx [ 63 ] ) ; xx [ 165 ] = xx [ 33 ] * xx
[ 68 ] ; xx [ 166 ] = - ( xx [ 35 ] * xx [ 68 ] ) ; xx [ 167 ] = - ( xx [ 27
] * xx [ 68 ] ) ; pm_math_Quaternion_compose_ra ( xx + 110 , xx + 164 , xx +
175 ) ; xx [ 63 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 16 ] * xx [ 175 ] - xx
[ 63 ] * xx [ 178 ] ; xx [ 68 ] = xx [ 16 ] * xx [ 176 ] - xx [ 63 ] * xx [
177 ] ; xx [ 69 ] = xx [ 16 ] * xx [ 177 ] + xx [ 63 ] * xx [ 176 ] ; xx [ 70
] = xx [ 16 ] * xx [ 178 ] + xx [ 63 ] * xx [ 175 ] ; xx [ 164 ] = xx [ 4 ] ;
xx [ 165 ] = xx [ 68 ] ; xx [ 166 ] = xx [ 69 ] ; xx [ 167 ] = xx [ 70 ] ;
pm_math_Quaternion_compose_ra ( xx + 50 , xx + 164 , xx + 203 ) ; xx [ 50 ] =
xx [ 30 ] * ( xx [ 68 ] * xx [ 70 ] - xx [ 4 ] * xx [ 69 ] ) ; xx [ 51 ] = xx
[ 30 ] * ( xx [ 4 ] * xx [ 68 ] + xx [ 69 ] * xx [ 70 ] ) ; xx [ 52 ] = xx [
31 ] - xx [ 30 ] * ( xx [ 68 ] * xx [ 68 ] + xx [ 69 ] * xx [ 69 ] ) ;
pm_math_Vector3_cross_ra ( xx + 50 , xx + 114 , xx + 68 ) ;
pm_math_Quaternion_xform_ra ( xx + 203 , xx + 68 , xx + 79 ) ; xx [ 164 ] =
xx [ 10 ] * xx [ 16 ] + xx [ 40 ] * xx [ 63 ] ; xx [ 165 ] = xx [ 39 ] * xx [
63 ] - xx [ 17 ] * xx [ 16 ] ; xx [ 166 ] = xx [ 39 ] * xx [ 16 ] + xx [ 17 ]
* xx [ 63 ] ; xx [ 167 ] = xx [ 10 ] * xx [ 63 ] - xx [ 40 ] * xx [ 16 ] ;
pm_math_Quaternion_compose_ra ( xx + 164 , xx + 175 , xx + 267 ) ; xx [ 68 ]
= xx [ 30 ] * ( xx [ 176 ] * xx [ 178 ] - xx [ 175 ] * xx [ 177 ] ) ; xx [ 69
] = xx [ 30 ] * ( xx [ 175 ] * xx [ 176 ] + xx [ 177 ] * xx [ 178 ] ) ; xx [
70 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 176 ] * xx [ 176 ] + xx [ 177 ] * xx [
177 ] ) ; pm_math_Vector3_cross_ra ( xx + 68 , xx + 114 , xx + 146 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 146 , xx + 152 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 140 , xx + 146 ) ;
pm_math_Vector3_cross_ra ( xx + 50 , xx + 149 , xx + 140 ) ;
pm_math_Quaternion_xform_ra ( xx + 203 , xx + 140 , xx + 50 ) ;
pm_math_Quaternion_xform_ra ( xx + 175 , xx + 122 , xx + 140 ) ; xx [ 4 ] =
xx [ 85 ] - xx [ 140 ] ; xx [ 53 ] = xx [ 63 ] * xx [ 141 ] ; xx [ 83 ] = xx
[ 4 ] * xx [ 63 ] ; xx [ 85 ] = xx [ 4 ] + xx [ 30 ] * ( xx [ 53 ] * xx [ 16
] - xx [ 83 ] * xx [ 63 ] ) ; xx [ 86 ] = xx [ 125 ] * xx [ 63 ] ; xx [ 87 ]
= xx [ 86 ] * xx [ 16 ] ; xx [ 96 ] = xx [ 157 ] * xx [ 63 ] ; xx [ 122 ] =
xx [ 96 ] * xx [ 63 ] ; xx [ 123 ] = xx [ 30 ] * ( xx [ 87 ] + xx [ 122 ] ) -
xx [ 157 ] ; xx [ 124 ] = xx [ 85 ] - xx [ 123 ] ; xx [ 140 ] = xx [ 124 ] *
xx [ 40 ] ; xx [ 142 ] = xx [ 30 ] * ( xx [ 83 ] * xx [ 16 ] + xx [ 53 ] * xx
[ 63 ] ) ; xx [ 53 ] = xx [ 86 ] * xx [ 63 ] ; xx [ 63 ] = xx [ 96 ] * xx [
16 ] ; xx [ 16 ] = xx [ 59 ] + xx [ 30 ] * ( xx [ 53 ] - xx [ 63 ] ) ; xx [
59 ] = xx [ 142 ] - xx [ 141 ] - xx [ 16 ] ; xx [ 83 ] = xx [ 59 ] * xx [ 40
] ; xx [ 86 ] = xx [ 39 ] * xx [ 59 ] - xx [ 124 ] * xx [ 17 ] ; xx [ 158 ] =
xx [ 140 ] ; xx [ 159 ] = xx [ 83 ] ; xx [ 160 ] = xx [ 86 ] ;
pm_math_Vector3_cross_ra ( xx + 64 , xx + 158 , xx + 168 ) ; xx [ 158 ] = xx
[ 50 ] + xx [ 30 ] * ( xx [ 168 ] + xx [ 140 ] * xx [ 10 ] ) + xx [ 82 ] - xx
[ 59 ] + xx [ 91 ] ; xx [ 159 ] = xx [ 51 ] + xx [ 124 ] + xx [ 30 ] * ( xx [
169 ] + xx [ 83 ] * xx [ 10 ] ) + xx [ 76 ] + xx [ 89 ] ; xx [ 160 ] = xx [
52 ] + xx [ 30 ] * ( xx [ 10 ] * xx [ 86 ] + xx [ 170 ] ) + xx [ 78 ] ;
pm_math_Vector3_cross_ra ( xx + 68 , xx + 149 , xx + 50 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 50 , xx + 68 ) ; xx [ 50 ] = xx
[ 30 ] * ( xx [ 63 ] - xx [ 53 ] ) ; xx [ 51 ] = xx [ 141 ] - ( xx [ 142 ] +
xx [ 50 ] ) - xx [ 125 ] ; xx [ 52 ] = xx [ 30 ] * ( xx [ 87 ] + xx [ 122 ] )
; xx [ 53 ] = xx [ 85 ] - xx [ 52 ] + xx [ 157 ] ; xx [ 59 ] = xx [ 53 ] * xx
[ 40 ] ; xx [ 63 ] = xx [ 51 ] * xx [ 40 ] ; xx [ 83 ] = xx [ 53 ] * xx [ 17
] + xx [ 39 ] * xx [ 51 ] ; xx [ 85 ] = xx [ 59 ] ; xx [ 86 ] = - xx [ 63 ] ;
xx [ 87 ] = - xx [ 83 ] ; pm_math_Vector3_cross_ra ( xx + 64 , xx + 85 , xx +
168 ) ; xx [ 85 ] = xx [ 68 ] + xx [ 51 ] + xx [ 30 ] * ( xx [ 168 ] + xx [
59 ] * xx [ 10 ] ) ; xx [ 86 ] = xx [ 69 ] + xx [ 53 ] + xx [ 30 ] * ( xx [
169 ] - xx [ 63 ] * xx [ 10 ] ) ; xx [ 87 ] = xx [ 70 ] + xx [ 30 ] * ( xx [
170 ] - xx [ 83 ] * xx [ 10 ] ) ; pm_math_Quaternion_xform_ra ( xx + 267 , xx
+ 101 , xx + 68 ) ; pm_math_Quaternion_xform_ra ( xx + 175 , xx + 161 , xx +
101 ) ; pm_math_Quaternion_xform_ra ( xx + 164 , xx + 101 , xx + 161 ) ; xx [
168 ] = xx [ 68 ] + xx [ 161 ] ; xx [ 169 ] = xx [ 69 ] + xx [ 162 ] ; xx [
170 ] = xx [ 70 ] + xx [ 163 ] ; xx [ 51 ] = xx [ 2 ] * xx [ 248 ] ; xx [ 53
] = sin ( xx [ 51 ] ) ; xx [ 203 ] = cos ( xx [ 51 ] ) ; xx [ 204 ] = - ( xx
[ 9 ] * xx [ 53 ] ) ; xx [ 205 ] = xx [ 12 ] * xx [ 53 ] ; xx [ 206 ] = xx [
18 ] * xx [ 53 ] ; pm_math_Quaternion_compose_ra ( xx + 117 , xx + 203 , xx +
271 ) ; pm_math_Quaternion_xform_ra ( xx + 271 , xx + 126 , xx + 68 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 179 , xx + 161 ) ; xx [ 51 ] =
xx [ 2 ] * xx [ 246 ] ; xx [ 53 ] = sin ( xx [ 51 ] ) ; xx [ 203 ] = cos ( xx
[ 51 ] ) ; xx [ 204 ] = - ( xx [ 88 ] * xx [ 53 ] ) ; xx [ 205 ] = - ( xx [
95 ] * xx [ 53 ] ) ; xx [ 206 ] = - ( xx [ 97 ] * xx [ 53 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 185 , xx + 203 , xx + 275 ) ;
pm_math_Quaternion_xform_ra ( xx + 275 , xx + 189 , xx + 203 ) ;
pm_math_Quaternion_xform_ra ( xx + 275 , xx + 200 , xx + 206 ) ; xx [ 216 ] =
xx [ 68 ] - xx [ 161 ] + xx [ 3 ] - ( xx [ 203 ] - xx [ 206 ] - xx [ 11 ] ) ;
xx [ 217 ] = xx [ 69 ] - xx [ 162 ] - xx [ 90 ] - ( xx [ 204 ] - xx [ 207 ] -
xx [ 121 ] ) ; xx [ 218 ] = xx [ 70 ] - xx [ 163 ] - xx [ 155 ] - ( xx [ 205
] - xx [ 208 ] + xx [ 156 ] ) ; pm_math_Quaternion_compose_ra ( xx + 275 , xx
+ 171 , xx + 203 ) ; xx [ 51 ] = xx [ 206 ] * xx [ 206 ] ; xx [ 53 ] = xx [
203 ] * xx [ 206 ] ; xx [ 59 ] = xx [ 204 ] * xx [ 205 ] ; xx [ 68 ] = xx [
31 ] - xx [ 30 ] * ( xx [ 205 ] * xx [ 205 ] + xx [ 51 ] ) ; xx [ 69 ] = xx [
30 ] * ( xx [ 53 ] + xx [ 59 ] ) ; xx [ 70 ] = xx [ 30 ] * ( xx [ 204 ] * xx
[ 206 ] - xx [ 203 ] * xx [ 205 ] ) ; xx [ 63 ] = pm_math_Vector3_dot_ra ( xx
+ 216 , xx + 68 ) ; pm_math_Quaternion_xform_ra ( xx + 275 , xx + 197 , xx +
161 ) ; pm_math_Quaternion_xform_ra ( xx + 275 , xx + 213 , xx + 197 ) ;
pm_math_Quaternion_xform_ra ( xx + 275 , xx + 219 , xx + 212 ) ; xx [ 219 ] =
xx [ 197 ] + xx [ 212 ] ; xx [ 220 ] = xx [ 198 ] + xx [ 213 ] ; xx [ 221 ] =
xx [ 199 ] + xx [ 214 ] ; xx [ 197 ] = xx [ 30 ] * ( xx [ 59 ] - xx [ 53 ] )
; xx [ 198 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 51 ] + xx [ 204 ] * xx [ 204 ]
) ; xx [ 199 ] = xx [ 30 ] * ( xx [ 203 ] * xx [ 204 ] + xx [ 205 ] * xx [
206 ] ) ; xx [ 51 ] = pm_math_Vector3_dot_ra ( xx + 216 , xx + 197 ) ;
pm_math_Quaternion_xform_ra ( xx + 275 , xx + 209 , xx + 203 ) ; xx [ 53 ] =
xx [ 63 ] * xx [ 63 ] + xx [ 51 ] * xx [ 51 ] ; xx [ 59 ] = xx [ 53 ] == 0.0
? 0.0 : ( xx [ 63 ] * ( pm_math_Vector3_dot_ra ( xx + 216 , xx + 161 ) -
pm_math_Vector3_dot_ra ( xx + 219 , xx + 197 ) ) - xx [ 51 ] * (
pm_math_Vector3_dot_ra ( xx + 216 , xx + 203 ) - pm_math_Vector3_dot_ra ( xx
+ 219 , xx + 68 ) ) ) / xx [ 53 ] ; pm_math_Quaternion_compose_ra ( xx + 271
, xx + 193 , xx + 203 ) ; xx [ 83 ] = xx [ 204 ] * xx [ 205 ] ; xx [ 96 ] =
xx [ 203 ] * xx [ 206 ] ; xx [ 122 ] = xx [ 206 ] * xx [ 206 ] ; xx [ 161 ] =
xx [ 30 ] * ( xx [ 83 ] - xx [ 96 ] ) ; xx [ 162 ] = xx [ 31 ] - xx [ 30 ] *
( xx [ 122 ] + xx [ 204 ] * xx [ 204 ] ) ; xx [ 163 ] = xx [ 30 ] * ( xx [
203 ] * xx [ 204 ] + xx [ 205 ] * xx [ 206 ] ) ; xx [ 124 ] =
pm_math_Vector3_dot_ra ( xx + 216 , xx + 161 ) ; xx [ 192 ] = xx [ 31 ] - xx
[ 30 ] * ( xx [ 205 ] * xx [ 205 ] + xx [ 122 ] ) ; xx [ 193 ] = xx [ 30 ] *
( xx [ 96 ] + xx [ 83 ] ) ; xx [ 194 ] = xx [ 30 ] * ( xx [ 204 ] * xx [ 206
] - xx [ 203 ] * xx [ 205 ] ) ; xx [ 83 ] = pm_math_Vector3_dot_ra ( xx + 216
, xx + 192 ) ; xx [ 96 ] = xx [ 83 ] * xx [ 83 ] + xx [ 124 ] * xx [ 124 ] ;
xx [ 122 ] = xx [ 96 ] == 0.0 ? 0.0 : ( xx [ 124 ] * pm_math_Vector3_dot_ra (
xx + 219 , xx + 192 ) - xx [ 83 ] * pm_math_Vector3_dot_ra ( xx + 219 , xx +
161 ) ) / xx [ 96 ] ; pm_math_Quaternion_xform_ra ( xx + 271 , xx + 225 , xx
+ 203 ) ; pm_math_Quaternion_xform_ra ( xx + 271 , xx + 235 , xx + 206 ) ; xx
[ 209 ] = xx [ 203 ] + xx [ 206 ] ; xx [ 210 ] = xx [ 204 ] + xx [ 207 ] ; xx
[ 211 ] = xx [ 205 ] + xx [ 208 ] ; xx [ 140 ] = xx [ 53 ] == 0.0 ? 0.0 : (
xx [ 63 ] * pm_math_Vector3_dot_ra ( xx + 209 , xx + 197 ) - xx [ 51 ] *
pm_math_Vector3_dot_ra ( xx + 209 , xx + 68 ) ) / xx [ 53 ] ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 182 , xx + 203 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 229 , xx + 182 ) ; xx [ 142 ] =
xx [ 96 ] == 0.0 ? 0.0 : ( xx [ 83 ] * ( pm_math_Vector3_dot_ra ( xx + 209 ,
xx + 161 ) + pm_math_Vector3_dot_ra ( xx + 216 , xx + 203 ) ) - xx [ 124 ] *
( pm_math_Vector3_dot_ra ( xx + 209 , xx + 192 ) + pm_math_Vector3_dot_ra (
xx + 216 , xx + 182 ) ) ) / xx [ 96 ] ; xx [ 279 ] = xx [ 0 ] ; xx [ 280 ] =
xx [ 0 ] ; xx [ 281 ] = xx [ 0 ] ; xx [ 282 ] = xx [ 0 ] ; xx [ 283 ] = xx [
0 ] ; xx [ 284 ] = xx [ 0 ] ; xx [ 285 ] = pm_math_Vector3_dot_ra ( xx + 98 ,
xx + 47 ) ; xx [ 286 ] = xx [ 0 ] ; xx [ 287 ] = xx [ 0 ] ; xx [ 288 ] =
pm_math_Vector3_dot_ra ( xx + 137 , xx + 47 ) ; xx [ 289 ] =
pm_math_Vector3_dot_ra ( xx + 107 , xx + 47 ) ; xx [ 290 ] = xx [ 0 ] ; xx [
291 ] = xx [ 0 ] ; xx [ 292 ] = xx [ 0 ] ; xx [ 293 ] = xx [ 0 ] ; xx [ 294 ]
= xx [ 0 ] ; xx [ 295 ] = xx [ 0 ] ; xx [ 296 ] = pm_math_Vector3_dot_ra ( xx
+ 143 , xx + 36 ) ; xx [ 297 ] = xx [ 0 ] ; xx [ 298 ] = xx [ 0 ] ; xx [ 299
] = pm_math_Vector3_dot_ra ( xx + 92 , xx + 36 ) ; xx [ 300 ] =
pm_math_Vector3_dot_ra ( xx + 104 , xx + 36 ) ; xx [ 301 ] = xx [ 0 ] ; xx [
302 ] = xx [ 0 ] ; xx [ 303 ] = xx [ 0 ] ; xx [ 304 ] = xx [ 0 ] ; xx [ 305 ]
= xx [ 0 ] ; xx [ 306 ] = xx [ 0 ] ; xx [ 307 ] = pm_math_Vector3_dot_ra ( xx
+ 79 , xx + 47 ) ; xx [ 308 ] = pm_math_Vector3_dot_ra ( xx + 152 , xx + 47 )
; xx [ 309 ] = pm_math_Vector3_dot_ra ( xx + 146 , xx + 47 ) ; xx [ 310 ] =
xx [ 0 ] ; xx [ 311 ] = xx [ 0 ] ; xx [ 312 ] = xx [ 0 ] ; xx [ 313 ] = xx [
0 ] ; xx [ 314 ] = xx [ 0 ] ; xx [ 315 ] = xx [ 0 ] ; xx [ 316 ] = xx [ 0 ] ;
xx [ 317 ] = xx [ 0 ] ; xx [ 318 ] = pm_math_Vector3_dot_ra ( xx + 158 , xx +
36 ) ; xx [ 319 ] = pm_math_Vector3_dot_ra ( xx + 85 , xx + 36 ) ; xx [ 320 ]
= pm_math_Vector3_dot_ra ( xx + 168 , xx + 36 ) ; xx [ 321 ] = xx [ 0 ] ; xx
[ 322 ] = xx [ 0 ] ; xx [ 323 ] = xx [ 0 ] ; xx [ 324 ] = xx [ 0 ] ; xx [ 325
] = xx [ 0 ] ; xx [ 326 ] = xx [ 0 ] ; xx [ 327 ] = xx [ 59 ] + xx [ 122 ] ;
xx [ 328 ] = xx [ 140 ] + xx [ 142 ] ; xx [ 329 ] = xx [ 0 ] ; xx [ 330 ] =
xx [ 0 ] ; xx [ 331 ] = xx [ 0 ] ; xx [ 332 ] = xx [ 0 ] ; xx [ 333 ] = xx [
0 ] ; xx [ 0 ] = xx [ 251 ] - xx [ 30 ] * ( xx [ 41 ] * xx [ 251 ] * xx [ 41
] + xx [ 58 ] * xx [ 251 ] * xx [ 58 ] ) - xx [ 257 ] ; xx [ 59 ] = xx [ 0 ]
* xx [ 55 ] ; xx [ 79 ] = xx [ 0 ] * xx [ 56 ] ; xx [ 85 ] = xx [ 30 ] * ( xx
[ 59 ] * xx [ 57 ] - xx [ 79 ] * xx [ 54 ] ) - xx [ 24 ] * xx [ 259 ] ; xx [
86 ] = xx [ 30 ] * ( xx [ 59 ] * xx [ 54 ] + xx [ 79 ] * xx [ 57 ] ) + xx [
26 ] * xx [ 259 ] ; xx [ 87 ] = xx [ 0 ] - xx [ 30 ] * ( xx [ 59 ] * xx [ 55
] + xx [ 79 ] * xx [ 56 ] ) - xx [ 27 ] * xx [ 259 ] ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 44 , xx + 79 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 79 , xx + 92 ) ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 73 , xx + 79 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 79 , xx + 85 ) ; xx [ 59 ] = xx
[ 91 ] + xx [ 82 ] ; xx [ 79 ] = xx [ 59 ] * xx [ 251 ] ; xx [ 80 ] = xx [ 23
] - xx [ 43 ] ; xx [ 23 ] = xx [ 80 ] * xx [ 257 ] - xx [ 72 ] * xx [ 251 ] ;
xx [ 43 ] = xx [ 42 ] - xx [ 67 ] ; xx [ 42 ] = xx [ 43 ] * xx [ 257 ] - xx [
32 ] * xx [ 251 ] ; xx [ 67 ] = xx [ 42 ] * xx [ 40 ] ; xx [ 81 ] = xx [ 23 ]
* xx [ 40 ] ; xx [ 82 ] = xx [ 42 ] * xx [ 17 ] + xx [ 23 ] * xx [ 39 ] ; xx
[ 98 ] = xx [ 67 ] ; xx [ 99 ] = - xx [ 81 ] ; xx [ 100 ] = - xx [ 82 ] ;
pm_math_Vector3_cross_ra ( xx + 64 , xx + 98 , xx + 104 ) ; xx [ 98 ] = xx [
60 ] * xx [ 259 ] + xx [ 0 ] * xx [ 71 ] ; xx [ 99 ] = xx [ 61 ] * xx [ 259 ]
- xx [ 0 ] * xx [ 15 ] ; xx [ 100 ] = xx [ 62 ] * xx [ 259 ] ;
pm_math_Quaternion_xform_ra ( xx + 129 , xx + 98 , xx + 107 ) ; xx [ 0 ] = xx
[ 89 ] + xx [ 76 ] ; xx [ 76 ] = xx [ 0 ] * xx [ 251 ] ; xx [ 89 ] = xx [ 30
] * xx [ 77 ] * xx [ 251 ] ; xx [ 98 ] = xx [ 85 ] + xx [ 79 ] + xx [ 23 ] +
xx [ 30 ] * ( xx [ 104 ] + xx [ 67 ] * xx [ 10 ] ) + xx [ 107 ] ; xx [ 99 ] =
xx [ 86 ] + xx [ 76 ] + xx [ 42 ] + xx [ 30 ] * ( xx [ 105 ] - xx [ 81 ] * xx
[ 10 ] ) + xx [ 108 ] ; xx [ 100 ] = xx [ 87 ] + xx [ 89 ] + xx [ 30 ] * ( xx
[ 106 ] - xx [ 82 ] * xx [ 10 ] ) + xx [ 109 ] ; xx [ 23 ] = xx [ 251 ] + xx
[ 253 ] ; xx [ 42 ] = xx [ 23 ] * xx [ 176 ] ; xx [ 67 ] = xx [ 23 ] * xx [
177 ] ; xx [ 85 ] = xx [ 30 ] * ( xx [ 42 ] * xx [ 178 ] - xx [ 67 ] * xx [
175 ] ) + xx [ 33 ] * xx [ 255 ] ; xx [ 86 ] = xx [ 30 ] * ( xx [ 42 ] * xx [
175 ] + xx [ 67 ] * xx [ 178 ] ) - xx [ 35 ] * xx [ 255 ] ; xx [ 87 ] = xx [
23 ] - xx [ 30 ] * ( xx [ 42 ] * xx [ 176 ] + xx [ 67 ] * xx [ 177 ] ) - xx [
27 ] * xx [ 255 ] ; pm_math_Vector3_cross_ra ( xx + 85 , xx + 114 , xx + 104
) ; pm_math_Quaternion_xform_ra ( xx + 267 , xx + 104 , xx + 107 ) ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 149 , xx + 104 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 104 , xx + 85 ) ; xx [ 42 ] =
xx [ 125 ] + xx [ 50 ] ; xx [ 50 ] = xx [ 16 ] * xx [ 251 ] - xx [ 42 ] * xx
[ 253 ] ; xx [ 67 ] = xx [ 157 ] - xx [ 52 ] ; xx [ 52 ] = xx [ 67 ] * xx [
253 ] - xx [ 123 ] * xx [ 251 ] ; xx [ 77 ] = xx [ 52 ] * xx [ 40 ] ; xx [ 81
] = xx [ 50 ] * xx [ 40 ] ; xx [ 82 ] = xx [ 52 ] * xx [ 17 ] + xx [ 50 ] *
xx [ 39 ] ; xx [ 104 ] = xx [ 77 ] ; xx [ 105 ] = - xx [ 81 ] ; xx [ 106 ] =
- xx [ 82 ] ; pm_math_Vector3_cross_ra ( xx + 64 , xx + 104 , xx + 137 ) ; xx
[ 104 ] = xx [ 101 ] * xx [ 255 ] + xx [ 23 ] * xx [ 141 ] ; xx [ 105 ] = xx
[ 102 ] * xx [ 255 ] + xx [ 4 ] * xx [ 23 ] ; xx [ 106 ] = xx [ 103 ] * xx [
255 ] ; pm_math_Quaternion_xform_ra ( xx + 164 , xx + 104 , xx + 142 ) ; xx [
104 ] = xx [ 85 ] + xx [ 79 ] + xx [ 50 ] + xx [ 30 ] * ( xx [ 137 ] + xx [
77 ] * xx [ 10 ] ) + xx [ 142 ] ; xx [ 105 ] = xx [ 86 ] + xx [ 76 ] + xx [
52 ] + xx [ 30 ] * ( xx [ 138 ] - xx [ 81 ] * xx [ 10 ] ) + xx [ 143 ] ; xx [
106 ] = xx [ 87 ] + xx [ 89 ] + xx [ 30 ] * ( xx [ 139 ] - xx [ 82 ] * xx [
10 ] ) + xx [ 144 ] ; xx [ 85 ] = - ( xx [ 9 ] * xx [ 249 ] ) ; xx [ 86 ] =
xx [ 12 ] * xx [ 249 ] ; xx [ 87 ] = xx [ 18 ] * xx [ 249 ] ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 126 , xx + 137 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 137 , xx + 142 ) ; xx [ 137 ] =
- ( xx [ 88 ] * xx [ 247 ] ) ; xx [ 138 ] = - ( xx [ 95 ] * xx [ 247 ] ) ; xx
[ 139 ] = - ( xx [ 97 ] * xx [ 247 ] ) ; pm_math_Vector3_cross_ra ( xx + 137
, xx + 189 , xx + 145 ) ; pm_math_Quaternion_xform_ra ( xx + 275 , xx + 145 ,
xx + 152 ) ; xx [ 145 ] = xx [ 142 ] + xx [ 206 ] * xx [ 249 ] - ( xx [ 152 ]
+ xx [ 212 ] * xx [ 247 ] ) ; xx [ 146 ] = xx [ 143 ] + xx [ 207 ] * xx [ 249
] - ( xx [ 153 ] + xx [ 213 ] * xx [ 247 ] ) ; xx [ 147 ] = xx [ 144 ] + xx [
208 ] * xx [ 249 ] - ( xx [ 154 ] + xx [ 214 ] * xx [ 247 ] ) ; xx [ 142 ] =
- 1.432869371958412e-4 ; xx [ 143 ] = 8.412683150105238e-8 ; xx [ 144 ] =
0.9999999897344236 ; pm_math_Vector3_cross_ra ( xx + 137 , xx + 142 , xx +
152 ) ; pm_math_Quaternion_xform_ra ( xx + 275 , xx + 152 , xx + 157 ) ; xx [
152 ] = 0.9998688553766502 ; xx [ 153 ] = - 0.01619418172173436 ; xx [ 154 ]
= 1.432695097203628e-4 ; pm_math_Vector3_cross_ra ( xx + 137 , xx + 152 , xx
+ 168 ) ; pm_math_Quaternion_xform_ra ( xx + 275 , xx + 168 , xx + 137 ) ; xx
[ 23 ] = xx [ 53 ] == 0.0 ? 0.0 : ( xx [ 63 ] * ( pm_math_Vector3_dot_ra ( xx
+ 145 , xx + 197 ) + pm_math_Vector3_dot_ra ( xx + 216 , xx + 157 ) ) - xx [
51 ] * ( pm_math_Vector3_dot_ra ( xx + 145 , xx + 68 ) +
pm_math_Vector3_dot_ra ( xx + 216 , xx + 137 ) ) ) / xx [ 53 ] ; xx [ 137 ] =
0.341552247851593 ; xx [ 138 ] = - 0.03450918424939553 ; xx [ 139 ] = xx [ 28
] ; pm_math_Vector3_cross_ra ( xx + 85 , xx + 137 , xx + 157 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 157 , xx + 168 ) ; xx [ 157 ] =
- 0.8584274834925503 ; xx [ 158 ] = - 0.418345975005826 ; xx [ 159 ] =
0.2967977438948485 ; pm_math_Vector3_cross_ra ( xx + 85 , xx + 157 , xx + 182
) ; pm_math_Quaternion_xform_ra ( xx + 271 , xx + 182 , xx + 85 ) ; xx [ 28 ]
= xx [ 96 ] == 0.0 ? 0.0 : ( xx [ 83 ] * ( pm_math_Vector3_dot_ra ( xx + 145
, xx + 161 ) + pm_math_Vector3_dot_ra ( xx + 216 , xx + 168 ) ) - xx [ 124 ]
* ( pm_math_Vector3_dot_ra ( xx + 145 , xx + 192 ) + pm_math_Vector3_dot_ra (
xx + 216 , xx + 85 ) ) ) / xx [ 96 ] ; xx [ 219 ] = - pm_math_Vector3_dot_ra
( xx + 92 , xx + 47 ) ; xx [ 220 ] = - pm_math_Vector3_dot_ra ( xx + 98 , xx
+ 36 ) ; xx [ 221 ] = - pm_math_Vector3_dot_ra ( xx + 107 , xx + 47 ) ; xx [
222 ] = - pm_math_Vector3_dot_ra ( xx + 104 , xx + 36 ) ; xx [ 223 ] = - ( xx
[ 23 ] + xx [ 28 ] ) ; memcpy ( xx + 334 , xx + 279 , 55 * sizeof ( double )
) ; factorAndSolveWide ( 5 , 11 , xx + 334 , xx + 104 , xx + 389 , ii + 0 ,
xx + 219 , xx [ 13 ] , xx + 224 ) ; xx [ 13 ] = xx [ 247 ] + xx [ 228 ] ; xx
[ 23 ] = xx [ 249 ] + xx [ 229 ] ; xx [ 28 ] = xx [ 251 ] + xx [ 230 ] ; xx [
50 ] = xx [ 253 ] + xx [ 231 ] ; xx [ 52 ] = xx [ 255 ] + xx [ 232 ] ; xx [
76 ] = xx [ 257 ] + xx [ 233 ] ; xx [ 77 ] = xx [ 259 ] + xx [ 234 ] ; xx [
279 ] = xx [ 238 ] ; xx [ 280 ] = xx [ 239 ] + xx [ 224 ] ; xx [ 281 ] = xx [
240 ] ; xx [ 282 ] = xx [ 241 ] + xx [ 225 ] ; xx [ 283 ] = xx [ 242 ] ; xx [
284 ] = xx [ 243 ] + xx [ 226 ] ; xx [ 285 ] = xx [ 244 ] ; xx [ 286 ] = xx [
245 ] + xx [ 227 ] ; xx [ 287 ] = xx [ 246 ] ; xx [ 288 ] = xx [ 13 ] ; xx [
289 ] = xx [ 248 ] ; xx [ 290 ] = xx [ 23 ] ; xx [ 291 ] = xx [ 250 ] ; xx [
292 ] = xx [ 28 ] ; xx [ 293 ] = xx [ 252 ] ; xx [ 294 ] = xx [ 50 ] ; xx [
295 ] = xx [ 254 ] ; xx [ 296 ] = xx [ 52 ] ; xx [ 297 ] = xx [ 256 ] ; xx [
298 ] = xx [ 76 ] ; xx [ 299 ] = xx [ 258 ] ; xx [ 300 ] = xx [ 77 ] ; xx [
301 ] = xx [ 260 ] ; xx [ 302 ] = xx [ 261 ] ; xx [ 303 ] = xx [ 262 ] ; xx [
304 ] = xx [ 263 ] ; xx [ 305 ] = xx [ 264 ] ; xx [ 306 ] = xx [ 265 ] ; xx [
307 ] = xx [ 266 ] ; xx [ 79 ] = xx [ 28 ] - xx [ 30 ] * ( xx [ 28 ] * xx [
41 ] * xx [ 41 ] + xx [ 28 ] * xx [ 58 ] * xx [ 58 ] ) - xx [ 76 ] ; xx [ 41
] = xx [ 79 ] * xx [ 55 ] ; xx [ 58 ] = xx [ 79 ] * xx [ 56 ] ; xx [ 85 ] =
xx [ 30 ] * ( xx [ 41 ] * xx [ 57 ] - xx [ 58 ] * xx [ 54 ] ) - xx [ 24 ] *
xx [ 77 ] ; xx [ 86 ] = xx [ 30 ] * ( xx [ 41 ] * xx [ 54 ] + xx [ 58 ] * xx
[ 57 ] ) + xx [ 26 ] * xx [ 77 ] ; xx [ 87 ] = xx [ 79 ] - xx [ 30 ] * ( xx [
41 ] * xx [ 55 ] + xx [ 58 ] * xx [ 56 ] ) - xx [ 27 ] * xx [ 77 ] ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 44 , xx + 54 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 54 , xx + 44 ) ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 73 , xx + 54 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 54 , xx + 73 ) ; xx [ 41 ] = xx
[ 59 ] * xx [ 28 ] ; xx [ 54 ] = xx [ 80 ] * xx [ 76 ] - xx [ 72 ] * xx [ 28
] ; xx [ 55 ] = xx [ 43 ] * xx [ 76 ] - xx [ 32 ] * xx [ 28 ] ; xx [ 32 ] =
xx [ 55 ] * xx [ 40 ] ; xx [ 43 ] = xx [ 54 ] * xx [ 40 ] ; xx [ 56 ] = xx [
55 ] * xx [ 17 ] + xx [ 54 ] * xx [ 39 ] ; xx [ 57 ] = xx [ 32 ] ; xx [ 58 ]
= - xx [ 43 ] ; xx [ 59 ] = - xx [ 56 ] ; pm_math_Vector3_cross_ra ( xx + 64
, xx + 57 , xx + 80 ) ; xx [ 57 ] = xx [ 77 ] * xx [ 60 ] + xx [ 79 ] * xx [
71 ] ; xx [ 58 ] = xx [ 77 ] * xx [ 61 ] - xx [ 79 ] * xx [ 15 ] ; xx [ 59 ]
= xx [ 77 ] * xx [ 62 ] ; pm_math_Quaternion_xform_ra ( xx + 129 , xx + 57 ,
xx + 60 ) ; xx [ 15 ] = xx [ 0 ] * xx [ 28 ] ; xx [ 0 ] = xx [ 78 ] * xx [ 28
] ; xx [ 57 ] = xx [ 73 ] + xx [ 41 ] + xx [ 54 ] + xx [ 30 ] * ( xx [ 80 ] +
xx [ 32 ] * xx [ 10 ] ) + xx [ 60 ] ; xx [ 58 ] = xx [ 74 ] + xx [ 15 ] + xx
[ 55 ] + xx [ 30 ] * ( xx [ 81 ] - xx [ 43 ] * xx [ 10 ] ) + xx [ 61 ] ; xx [
59 ] = xx [ 75 ] + xx [ 0 ] + xx [ 30 ] * ( xx [ 82 ] - xx [ 56 ] * xx [ 10 ]
) + xx [ 62 ] ; xx [ 32 ] = xx [ 28 ] + xx [ 50 ] ; xx [ 43 ] = xx [ 32 ] *
xx [ 176 ] ; xx [ 54 ] = xx [ 32 ] * xx [ 177 ] ; xx [ 60 ] = xx [ 30 ] * (
xx [ 43 ] * xx [ 178 ] - xx [ 54 ] * xx [ 175 ] ) + xx [ 33 ] * xx [ 52 ] ;
xx [ 61 ] = xx [ 30 ] * ( xx [ 43 ] * xx [ 175 ] + xx [ 54 ] * xx [ 178 ] ) -
xx [ 35 ] * xx [ 52 ] ; xx [ 62 ] = xx [ 32 ] - xx [ 30 ] * ( xx [ 43 ] * xx
[ 176 ] + xx [ 54 ] * xx [ 177 ] ) - xx [ 27 ] * xx [ 52 ] ;
pm_math_Vector3_cross_ra ( xx + 60 , xx + 114 , xx + 54 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 54 , xx + 71 ) ;
pm_math_Vector3_cross_ra ( xx + 60 , xx + 149 , xx + 54 ) ;
pm_math_Quaternion_xform_ra ( xx + 267 , xx + 54 , xx + 60 ) ; xx [ 43 ] = xx
[ 16 ] * xx [ 28 ] - xx [ 42 ] * xx [ 50 ] ; xx [ 16 ] = xx [ 67 ] * xx [ 50
] - xx [ 123 ] * xx [ 28 ] ; xx [ 28 ] = xx [ 16 ] * xx [ 40 ] ; xx [ 42 ] =
xx [ 43 ] * xx [ 40 ] ; xx [ 40 ] = xx [ 16 ] * xx [ 17 ] + xx [ 43 ] * xx [
39 ] ; xx [ 54 ] = xx [ 28 ] ; xx [ 55 ] = - xx [ 42 ] ; xx [ 56 ] = - xx [
40 ] ; pm_math_Vector3_cross_ra ( xx + 64 , xx + 54 , xx + 74 ) ; xx [ 54 ] =
xx [ 52 ] * xx [ 101 ] + xx [ 32 ] * xx [ 141 ] ; xx [ 55 ] = xx [ 52 ] * xx
[ 102 ] + xx [ 4 ] * xx [ 32 ] ; xx [ 56 ] = xx [ 52 ] * xx [ 103 ] ;
pm_math_Quaternion_xform_ra ( xx + 164 , xx + 54 , xx + 64 ) ; xx [ 54 ] = xx
[ 60 ] + xx [ 41 ] + xx [ 43 ] + xx [ 30 ] * ( xx [ 74 ] + xx [ 28 ] * xx [
10 ] ) + xx [ 64 ] ; xx [ 55 ] = xx [ 61 ] + xx [ 15 ] + xx [ 16 ] + xx [ 30
] * ( xx [ 75 ] - xx [ 42 ] * xx [ 10 ] ) + xx [ 65 ] ; xx [ 56 ] = xx [ 62 ]
+ xx [ 0 ] + xx [ 30 ] * ( xx [ 76 ] - xx [ 40 ] * xx [ 10 ] ) + xx [ 66 ] ;
xx [ 15 ] = - ( xx [ 9 ] * xx [ 23 ] ) ; xx [ 16 ] = xx [ 12 ] * xx [ 23 ] ;
xx [ 17 ] = xx [ 18 ] * xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 15 , xx +
126 , xx + 39 ) ; pm_math_Quaternion_xform_ra ( xx + 271 , xx + 39 , xx + 60
) ; xx [ 39 ] = - ( xx [ 88 ] * xx [ 13 ] ) ; xx [ 40 ] = - ( xx [ 95 ] * xx
[ 13 ] ) ; xx [ 41 ] = - ( xx [ 97 ] * xx [ 13 ] ) ; pm_math_Vector3_cross_ra
( xx + 39 , xx + 189 , xx + 64 ) ; pm_math_Quaternion_xform_ra ( xx + 275 ,
xx + 64 , xx + 74 ) ; xx [ 64 ] = xx [ 60 ] + xx [ 23 ] * xx [ 206 ] - ( xx [
74 ] + xx [ 13 ] * xx [ 212 ] ) ; xx [ 65 ] = xx [ 61 ] + xx [ 23 ] * xx [
207 ] - ( xx [ 75 ] + xx [ 13 ] * xx [ 213 ] ) ; xx [ 66 ] = xx [ 62 ] + xx [
23 ] * xx [ 208 ] - ( xx [ 76 ] + xx [ 13 ] * xx [ 214 ] ) ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 142 , xx + 60 ) ;
pm_math_Quaternion_xform_ra ( xx + 275 , xx + 60 , xx + 74 ) ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 152 , xx + 60 ) ;
pm_math_Quaternion_xform_ra ( xx + 275 , xx + 60 , xx + 39 ) ; xx [ 0 ] = xx
[ 53 ] == 0.0 ? 0.0 : ( xx [ 63 ] * ( pm_math_Vector3_dot_ra ( xx + 64 , xx +
197 ) + pm_math_Vector3_dot_ra ( xx + 216 , xx + 74 ) ) - xx [ 51 ] * (
pm_math_Vector3_dot_ra ( xx + 64 , xx + 68 ) + pm_math_Vector3_dot_ra ( xx +
216 , xx + 39 ) ) ) / xx [ 53 ] ; pm_math_Vector3_cross_ra ( xx + 15 , xx +
137 , xx + 39 ) ; pm_math_Quaternion_xform_ra ( xx + 271 , xx + 39 , xx + 50
) ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 157 , xx + 39 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 39 , xx + 15 ) ; xx [ 4 ] = xx
[ 96 ] == 0.0 ? 0.0 : ( xx [ 83 ] * ( pm_math_Vector3_dot_ra ( xx + 64 , xx +
161 ) + pm_math_Vector3_dot_ra ( xx + 216 , xx + 50 ) ) - xx [ 124 ] * (
pm_math_Vector3_dot_ra ( xx + 64 , xx + 192 ) + pm_math_Vector3_dot_ra ( xx +
216 , xx + 15 ) ) ) / xx [ 96 ] ; xx [ 39 ] = fabs ( pm_math_Vector3_dot_ra (
xx + 44 , xx + 47 ) ) ; xx [ 40 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 57 ,
xx + 36 ) ) ; xx [ 41 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 71 , xx + 47 )
) ; xx [ 42 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 54 , xx + 36 ) ) ; xx [
43 ] = fabs ( xx [ 0 ] + xx [ 4 ] ) ; ii [ 0 ] = 39 ; { int ll ; for ( ll =
40 ; ll < 44 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; }
ii [ 0 ] -= 39 ; xx [ 0 ] = xx [ 39 + ( ii [ 0 ] ) ] ; xx [ 4 ] = xx [ 0 ] -
xx [ 14 ] ; if ( xx [ 4 ] < 0.0 ) ii [ 1 ] = - 1 ; else if ( xx [ 4 ] > 0.0 )
ii [ 1 ] = + 1 ; else ii [ 1 ] = 0 ; ii [ 2 ] = ii [ 1 ] ; if ( 0 > ii [ 2 ]
) ii [ 2 ] = 0 ; if ( ii [ 2 ] != 0 ) { switch ( ii [ 0 ] ) { case 0 : case 1
: { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P2' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 2 : case 3 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/P1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 4 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'cst_robotarm_breach/6 DOF Robot Arm/6 DOF Robot Arm Mechanics/Gear Constraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 13 ] = 0.3903970898504619 ; xx [ 14 ] =
0.4638409844798791 ; xx [ 15 ] = 0.6471879634523136 ; xx [ 16 ] =
0.4621573252859613 ; xx [ 0 ] = xx [ 2 ] * xx [ 291 ] ; xx [ 4 ] = sin ( xx [
0 ] ) ; xx [ 10 ] = cos ( xx [ 0 ] ) ; xx [ 0 ] = xx [ 7 ] * xx [ 4 ] - xx [
8 ] * xx [ 10 ] ; xx [ 17 ] = xx [ 2 ] * xx [ 297 ] ; xx [ 23 ] = sin ( xx [
17 ] ) ; xx [ 28 ] = xx [ 7 ] * xx [ 10 ] + xx [ 8 ] * xx [ 4 ] ; xx [ 7 ] =
cos ( xx [ 17 ] ) ; xx [ 8 ] = xx [ 1 ] * xx [ 4 ] - xx [ 5 ] * xx [ 10 ] ;
xx [ 17 ] = xx [ 5 ] * xx [ 4 ] + xx [ 1 ] * xx [ 10 ] ; xx [ 36 ] = - ( xx [
0 ] * xx [ 23 ] - xx [ 28 ] * xx [ 7 ] ) ; xx [ 37 ] = xx [ 8 ] * xx [ 7 ] +
xx [ 17 ] * xx [ 23 ] ; xx [ 38 ] = xx [ 8 ] * xx [ 23 ] - xx [ 17 ] * xx [ 7
] ; xx [ 39 ] = - ( xx [ 28 ] * xx [ 23 ] + xx [ 0 ] * xx [ 7 ] ) ; xx [ 1 ]
= xx [ 2 ] * xx [ 299 ] ; xx [ 4 ] = sin ( xx [ 1 ] ) ; xx [ 40 ] = cos ( xx
[ 1 ] ) ; xx [ 41 ] = - ( xx [ 24 ] * xx [ 4 ] ) ; xx [ 42 ] = xx [ 26 ] * xx
[ 4 ] ; xx [ 43 ] = - ( xx [ 27 ] * xx [ 4 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 19 , xx + 40 , xx + 44 ) ;
pm_math_Quaternion_compose_ra ( xx + 36 , xx + 44 , xx + 19 ) ; xx [ 36 ] = -
xx [ 19 ] ; xx [ 37 ] = - xx [ 20 ] ; xx [ 38 ] = - xx [ 21 ] ; xx [ 39 ] = -
xx [ 22 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 13 , xx + 36 , xx +
19 ) ; xx [ 13 ] = xx [ 6 ] ; xx [ 14 ] = xx [ 25 ] ; xx [ 15 ] = - xx [ 84 ]
; xx [ 40 ] = xx [ 8 ] ; xx [ 41 ] = - xx [ 28 ] ; xx [ 42 ] = xx [ 0 ] ; xx
[ 43 ] = - xx [ 17 ] ; xx [ 1 ] = xx [ 2 ] * xx [ 289 ] ; xx [ 4 ] = sin ( xx
[ 1 ] ) ; xx [ 48 ] = cos ( xx [ 1 ] ) ; xx [ 49 ] = - ( xx [ 9 ] * xx [ 4 ]
) ; xx [ 50 ] = xx [ 12 ] * xx [ 4 ] ; xx [ 51 ] = xx [ 18 ] * xx [ 4 ] ;
pm_math_Quaternion_compose_ra ( xx + 117 , xx + 48 , xx + 52 ) ; xx [ 48 ] =
- 0.3975057134756405 ; xx [ 49 ] = 0.5793752661493048 ; xx [ 50 ] =
0.6060569288980017 ; xx [ 51 ] = 0.3728384471367823 ; xx [ 1 ] = xx [ 2 ] *
xx [ 285 ] ; xx [ 4 ] = 0.9580321368312195 ; xx [ 5 ] = sin ( xx [ 1 ] ) ; xx
[ 6 ] = 3.123739533989145e-3 ; xx [ 10 ] = 0.2866437982059469 ; xx [ 56 ] =
cos ( xx [ 1 ] ) ; xx [ 57 ] = xx [ 4 ] * xx [ 5 ] ; xx [ 58 ] = - ( xx [ 6 ]
* xx [ 5 ] ) ; xx [ 59 ] = - ( xx [ 10 ] * xx [ 5 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 48 , xx + 56 , xx + 60 ) ; xx [ 48 ] = -
0.5306023599600851 ; xx [ 49 ] = 0.466893522841787 ; xx [ 50 ] = -
0.4674001539794631 ; xx [ 51 ] = 0.5310448851021436 ; xx [ 1 ] = xx [ 2 ] *
xx [ 283 ] ; xx [ 5 ] = 9.431509536441641e-4 ; xx [ 16 ] = sin ( xx [ 1 ] ) ;
xx [ 25 ] = 0.1270949996850012 ; xx [ 32 ] = 0.9918901005259344 ; xx [ 56 ] =
cos ( xx [ 1 ] ) ; xx [ 57 ] = - ( xx [ 5 ] * xx [ 16 ] ) ; xx [ 58 ] = xx [
25 ] * xx [ 16 ] ; xx [ 59 ] = xx [ 32 ] * xx [ 16 ] ;
pm_math_Quaternion_compose_ra ( xx + 48 , xx + 56 , xx + 64 ) ; xx [ 48 ] =
0.7159504556807283 ; xx [ 49 ] = 0.07585744831336452 ; xx [ 50 ] =
0.4515044164477732 ; xx [ 51 ] = 0.527071488959609 ; xx [ 1 ] = xx [ 2 ] * xx
[ 281 ] ; xx [ 16 ] = sin ( xx [ 1 ] ) ; xx [ 56 ] = 3.070998455534379e-9 ;
xx [ 57 ] = 1.310006828569854e-7 ; xx [ 68 ] = cos ( xx [ 1 ] ) ; xx [ 69 ] =
xx [ 16 ] ; xx [ 70 ] = xx [ 56 ] * xx [ 16 ] ; xx [ 71 ] = xx [ 57 ] * xx [
16 ] ; pm_math_Quaternion_compose_ra ( xx + 48 , xx + 68 , xx + 72 ) ; xx [
48 ] = 0.726474170332262 * xx [ 280 ] ; xx [ 49 ] = 0.3673297571223195 * xx [
280 ] ; xx [ 50 ] = 0.5807788988698797 * xx [ 280 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 72 , xx + 48 , xx + 68 ) ; xx [ 48
] = xx [ 68 ] + xx [ 282 ] ; xx [ 49 ] = xx [ 69 ] + xx [ 56 ] * xx [ 282 ] ;
xx [ 50 ] = xx [ 70 ] + xx [ 57 ] * xx [ 282 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 64 , xx + 48 , xx + 56 ) ; xx [ 48
] = xx [ 56 ] - xx [ 5 ] * xx [ 284 ] ; xx [ 49 ] = xx [ 57 ] + xx [ 25 ] *
xx [ 284 ] ; xx [ 50 ] = xx [ 58 ] + xx [ 32 ] * xx [ 284 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 60 , xx + 48 , xx + 56 ) ; xx [ 48
] = xx [ 56 ] + xx [ 4 ] * xx [ 286 ] ; xx [ 49 ] = xx [ 57 ] - xx [ 6 ] * xx
[ 286 ] ; xx [ 50 ] = xx [ 58 ] - xx [ 10 ] * xx [ 286 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 52 , xx + 48 , xx + 4 ) ; xx [ 56 ]
= xx [ 4 ] - xx [ 9 ] * xx [ 290 ] ; xx [ 57 ] = xx [ 5 ] + xx [ 12 ] * xx [
290 ] ; xx [ 58 ] = xx [ 6 ] + xx [ 18 ] * xx [ 290 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 40 , xx + 56 , xx + 4 ) ; xx [ 1 ]
= xx [ 7 ] * xx [ 5 ] - xx [ 23 ] * xx [ 4 ] ; xx [ 9 ] = xx [ 6 ] + xx [ 292
] ; xx [ 40 ] = xx [ 4 ] + xx [ 30 ] * xx [ 1 ] * xx [ 23 ] ; xx [ 41 ] = xx
[ 5 ] - xx [ 30 ] * xx [ 1 ] * xx [ 7 ] ; xx [ 42 ] = xx [ 9 ] - xx [ 30 ] *
( xx [ 9 ] * xx [ 7 ] * xx [ 7 ] + xx [ 9 ] * xx [ 23 ] * xx [ 23 ] ) - xx [
298 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 44 , xx + 40 , xx + 59 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 36 , xx + 56 , xx + 40 ) ; xx [ 36
] = xx [ 59 ] - xx [ 24 ] * xx [ 300 ] - xx [ 40 ] ; xx [ 37 ] = xx [ 60 ] +
xx [ 26 ] * xx [ 300 ] - xx [ 41 ] ; xx [ 38 ] = xx [ 61 ] - xx [ 27 ] * xx [
300 ] - xx [ 42 ] ; xx [ 23 ] = 0.245648950422414 ; xx [ 24 ] =
0.371074456249555 ; xx [ 25 ] = 0.7205531756845295 ; xx [ 26 ] =
0.5317550771609079 ; xx [ 1 ] = xx [ 2 ] * xx [ 293 ] ; xx [ 6 ] = cos ( xx [
1 ] ) ; xx [ 7 ] = sin ( xx [ 1 ] ) ; xx [ 39 ] = xx [ 8 ] * xx [ 6 ] + xx [
17 ] * xx [ 7 ] ; xx [ 40 ] = xx [ 0 ] * xx [ 7 ] - xx [ 28 ] * xx [ 6 ] ; xx
[ 41 ] = xx [ 0 ] * xx [ 6 ] + xx [ 28 ] * xx [ 7 ] ; xx [ 42 ] = xx [ 8 ] *
xx [ 7 ] - xx [ 17 ] * xx [ 6 ] ; xx [ 0 ] = xx [ 2 ] * xx [ 295 ] ; xx [ 1 ]
= sin ( xx [ 0 ] ) ; xx [ 43 ] = cos ( xx [ 0 ] ) ; xx [ 44 ] = xx [ 33 ] *
xx [ 1 ] ; xx [ 45 ] = - ( xx [ 35 ] * xx [ 1 ] ) ; xx [ 46 ] = - ( xx [ 27 ]
* xx [ 1 ] ) ; pm_math_Quaternion_compose_ra ( xx + 110 , xx + 43 , xx + 59 )
; pm_math_Quaternion_compose_ra ( xx + 39 , xx + 59 , xx + 43 ) ; xx [ 39 ] =
- xx [ 43 ] ; xx [ 40 ] = - xx [ 44 ] ; xx [ 41 ] = - xx [ 45 ] ; xx [ 42 ] =
- xx [ 46 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 23 , xx + 39 , xx +
43 ) ; xx [ 16 ] = xx [ 29 ] ; xx [ 17 ] = xx [ 34 ] ; xx [ 18 ] =
0.1894395791916105 ; xx [ 0 ] = xx [ 7 ] * xx [ 5 ] ; xx [ 1 ] = xx [ 7 ] *
xx [ 4 ] ; xx [ 23 ] = xx [ 4 ] + xx [ 30 ] * ( xx [ 0 ] * xx [ 6 ] - xx [ 1
] * xx [ 7 ] ) ; xx [ 24 ] = xx [ 5 ] - xx [ 30 ] * ( xx [ 1 ] * xx [ 6 ] +
xx [ 0 ] * xx [ 7 ] ) ; xx [ 25 ] = xx [ 9 ] + xx [ 294 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 59 , xx + 23 , xx + 4 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 56 , xx + 7 ) ; xx [ 23 ]
= xx [ 4 ] + xx [ 33 ] * xx [ 296 ] - xx [ 7 ] ; xx [ 24 ] = xx [ 5 ] - xx [
35 ] * xx [ 296 ] - xx [ 8 ] ; xx [ 25 ] = xx [ 6 ] - xx [ 27 ] * xx [ 296 ]
- xx [ 9 ] ; pm_math_Quaternion_xform_ra ( xx + 52 , xx + 126 , xx + 4 ) ;
pm_math_Quaternion_xform_ra ( xx + 52 , xx + 179 , xx + 7 ) ; xx [ 0 ] = xx [
2 ] * xx [ 287 ] ; xx [ 1 ] = sin ( xx [ 0 ] ) ; xx [ 26 ] = cos ( xx [ 0 ] )
; xx [ 27 ] = - ( xx [ 88 ] * xx [ 1 ] ) ; xx [ 28 ] = - ( xx [ 95 ] * xx [ 1
] ) ; xx [ 29 ] = - ( xx [ 97 ] * xx [ 1 ] ) ; pm_math_Quaternion_compose_ra
( xx + 185 , xx + 26 , xx + 32 ) ; pm_math_Quaternion_xform_ra ( xx + 32 , xx
+ 189 , xx + 26 ) ; pm_math_Quaternion_xform_ra ( xx + 32 , xx + 200 , xx +
39 ) ; xx [ 59 ] = xx [ 4 ] - xx [ 7 ] + xx [ 3 ] - ( xx [ 26 ] - xx [ 39 ] -
xx [ 11 ] ) ; xx [ 60 ] = xx [ 5 ] - xx [ 8 ] - xx [ 90 ] - ( xx [ 27 ] - xx
[ 40 ] - xx [ 121 ] ) ; xx [ 61 ] = xx [ 6 ] - xx [ 9 ] - xx [ 155 ] - ( xx [
28 ] - xx [ 41 ] + xx [ 156 ] ) ; pm_math_Quaternion_compose_ra ( xx + 32 ,
xx + 171 , xx + 3 ) ; xx [ 0 ] = xx [ 4 ] * xx [ 5 ] ; xx [ 1 ] = xx [ 3 ] *
xx [ 6 ] ; xx [ 7 ] = xx [ 6 ] * xx [ 6 ] ; xx [ 8 ] = xx [ 30 ] * ( xx [ 0 ]
- xx [ 1 ] ) ; xx [ 9 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 7 ] + xx [ 4 ] * xx
[ 4 ] ) ; xx [ 10 ] = xx [ 30 ] * ( xx [ 3 ] * xx [ 4 ] + xx [ 5 ] * xx [ 6 ]
) ; xx [ 26 ] = xx [ 31 ] - xx [ 30 ] * ( xx [ 5 ] * xx [ 5 ] + xx [ 7 ] ) ;
xx [ 27 ] = xx [ 30 ] * ( xx [ 1 ] + xx [ 0 ] ) ; xx [ 28 ] = xx [ 30 ] * (
xx [ 4 ] * xx [ 6 ] - xx [ 3 ] * xx [ 5 ] ) ; pm_math_Quaternion_xform_ra (
xx + 52 , xx + 56 , xx + 39 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 32
, xx + 48 , xx + 51 ) ; xx [ 47 ] = xx [ 51 ] - xx [ 88 ] * xx [ 288 ] ; xx [
48 ] = xx [ 52 ] - xx [ 95 ] * xx [ 288 ] ; xx [ 49 ] = xx [ 53 ] - xx [ 97 ]
* xx [ 288 ] ; pm_math_Quaternion_xform_ra ( xx + 32 , xx + 47 , xx + 50 ) ;
xx [ 31 ] = xx [ 39 ] - xx [ 50 ] ; xx [ 32 ] = xx [ 40 ] - xx [ 51 ] ; xx [
33 ] = xx [ 41 ] - xx [ 52 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 3 ,
xx + 31 , xx + 39 ) ; state [ 0 ] = xx [ 279 ] ; state [ 1 ] = xx [ 280 ] ;
state [ 2 ] = xx [ 281 ] ; state [ 3 ] = xx [ 282 ] ; state [ 4 ] = xx [ 283
] ; state [ 5 ] = xx [ 284 ] ; state [ 6 ] = xx [ 285 ] ; state [ 7 ] = xx [
286 ] ; state [ 8 ] = xx [ 287 ] ; state [ 9 ] = xx [ 288 ] ; state [ 10 ] =
xx [ 289 ] ; state [ 11 ] = xx [ 290 ] ; state [ 12 ] = xx [ 291 ] ; state [
13 ] = xx [ 292 ] ; state [ 14 ] = xx [ 293 ] ; state [ 15 ] = xx [ 294 ] ;
state [ 16 ] = xx [ 295 ] ; state [ 17 ] = xx [ 296 ] ; state [ 18 ] = xx [
297 ] ; state [ 19 ] = xx [ 298 ] ; state [ 20 ] = xx [ 299 ] ; state [ 21 ]
= xx [ 300 ] ; state [ 22 ] = xx [ 301 ] + sm_core_canonicalAngle ( xx [ 30 ]
* ( ( pm_math_Vector3_dot_ra ( xx + 20 , xx + 13 ) * xx [ 19 ] ) < 0.0 ? -
1.0 : + 1.0 ) * atan2 ( sqrt ( xx [ 20 ] * xx [ 20 ] + xx [ 21 ] * xx [ 21 ]
+ xx [ 22 ] * xx [ 22 ] ) , fabs ( xx [ 19 ] ) ) - xx [ 301 ] ) ; state [ 23
] = pm_math_Vector3_dot_ra ( xx + 36 , xx + 13 ) ; state [ 24 ] = xx [ 303 ]
+ sm_core_canonicalAngle ( xx [ 30 ] * ( ( pm_math_Vector3_dot_ra ( xx + 44 ,
xx + 16 ) * xx [ 43 ] ) < 0.0 ? - 1.0 : + 1.0 ) * atan2 ( sqrt ( xx [ 44 ] *
xx [ 44 ] + xx [ 45 ] * xx [ 45 ] + xx [ 46 ] * xx [ 46 ] ) , fabs ( xx [ 43
] ) ) - xx [ 303 ] ) ; state [ 25 ] = pm_math_Vector3_dot_ra ( xx + 23 , xx +
16 ) ; state [ 26 ] = xx [ 305 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 59 , xx + 8 ) , pm_math_Vector3_dot_ra ( xx +
59 , xx + 26 ) ) - xx [ 305 ] ) ; state [ 27 ] = xx [ 2 ] * xx [ 41 ] ; state
[ 28 ] = xx [ 307 ] ; return NULL ; } void
cst_robotarm_breach_98bf360f_6_computeConstraintError ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 53 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0
] = 2.0 ; xx [ 1 ] = 0.6953254828680254 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2
] * state [ 12 ] ; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] =
0.4061050908592153 ; xx [ 6 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [
4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 2 ] * state [ 18 ] ; xx [ 8 ] =
sin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 1 ] * xx [ 6 ] + xx [ 5 ] * xx [ 4 ] ; xx
[ 1 ] = cos ( xx [ 7 ] ) ; xx [ 5 ] = 0.5912864502323997 ; xx [ 7 ] =
0.04451361391915684 ; xx [ 10 ] = xx [ 5 ] * xx [ 4 ] - xx [ 7 ] * xx [ 6 ] ;
xx [ 11 ] = xx [ 7 ] * xx [ 4 ] + xx [ 5 ] * xx [ 6 ] ; xx [ 4 ] = - ( xx [ 3
] * xx [ 8 ] - xx [ 9 ] * xx [ 1 ] ) ; xx [ 5 ] = xx [ 10 ] * xx [ 1 ] + xx [
11 ] * xx [ 8 ] ; xx [ 6 ] = xx [ 10 ] * xx [ 8 ] - xx [ 11 ] * xx [ 1 ] ; xx
[ 7 ] = - ( xx [ 9 ] * xx [ 8 ] + xx [ 3 ] * xx [ 1 ] ) ; xx [ 12 ] = -
0.9899003997337941 ; xx [ 13 ] = xx [ 12 ] ; xx [ 14 ] = 0.01994045583473794
; xx [ 15 ] = 0.09771574456570448 ; xx [ 16 ] = 0.1007532138045611 ; xx [ 17
] = xx [ 2 ] * state [ 20 ] ; xx [ 18 ] = sin ( xx [ 17 ] ) ; xx [ 19 ] =
0.9801080229701458 ; xx [ 20 ] = cos ( xx [ 17 ] ) ; xx [ 21 ] = - (
0.1974758392319079 * xx [ 18 ] ) ; xx [ 22 ] = 0.0197877797947617 * xx [ 18 ]
; xx [ 23 ] = - ( xx [ 19 ] * xx [ 18 ] ) ; pm_math_Quaternion_compose_ra (
xx + 13 , xx + 20 , xx + 24 ) ; pm_math_Quaternion_compose_ra ( xx + 4 , xx +
24 , xx + 13 ) ; xx [ 20 ] = 0.3857454927643891 ; xx [ 21 ] =
0.5034016931648384 ; xx [ 22 ] = 0.5842144511346662 ; xx [ 23 ] =
0.5064391624036924 ; pm_math_Quaternion_compose_ra ( xx + 13 , xx + 20 , xx +
28 ) ; xx [ 17 ] = 1.0 ; xx [ 20 ] = xx [ 0 ] * ( xx [ 28 ] * xx [ 30 ] + xx
[ 29 ] * xx [ 31 ] ) ; xx [ 21 ] = xx [ 0 ] * ( xx [ 30 ] * xx [ 31 ] - xx [
28 ] * xx [ 29 ] ) ; xx [ 22 ] = xx [ 17 ] - xx [ 0 ] * ( xx [ 29 ] * xx [ 29
] + xx [ 30 ] * xx [ 30 ] ) ; xx [ 28 ] = 0.3415522478515933 ; xx [ 29 ] = -
0.03450918424939525 ; xx [ 30 ] = 0.9392290339368587 ; xx [ 31 ] =
5.728444065062708e-4 ; xx [ 32 ] = - 0.0463662621131998 ; xx [ 33 ] =
7.575300750045659e-3 ; pm_math_Quaternion_xform_ra ( xx + 13 , xx + 31 , xx +
34 ) ; xx [ 13 ] = - 0.0265553585823144 ; xx [ 14 ] = - 1.235088037631146e-3
; xx [ 15 ] = - 2.882515487549136e-3 ; pm_math_Quaternion_xform_ra ( xx + 24
, xx + 13 , xx + 31 ) ; xx [ 13 ] = - ( 8.500000000000004e-3 + xx [ 31 ] ) ;
xx [ 14 ] = - xx [ 32 ] ; xx [ 15 ] = 9.999999999999992e-4 - xx [ 33 ] ;
pm_math_Quaternion_xform_ra ( xx + 4 , xx + 13 , xx + 23 ) ; xx [ 4 ] = xx [
10 ] ; xx [ 5 ] = - xx [ 9 ] ; xx [ 6 ] = xx [ 3 ] ; xx [ 7 ] = - xx [ 11 ] ;
xx [ 13 ] = 8.500005402767106e-3 ; xx [ 14 ] = 2.534418181099341e-9 * xx [ 1
] - xx [ 13 ] * xx [ 8 ] ; xx [ 15 ] = 6.499999983768677e-3 ; xx [ 31 ] = - (
xx [ 13 ] + xx [ 0 ] * xx [ 14 ] * xx [ 8 ] ) ; xx [ 32 ] = xx [ 0 ] * xx [
14 ] * xx [ 1 ] + 7.499997465581819e-3 ; xx [ 33 ] = xx [ 0 ] * ( xx [ 15 ] *
xx [ 1 ] * xx [ 1 ] + xx [ 15 ] * xx [ 8 ] * xx [ 8 ] ) - 0.01420789472061078
; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 31 , xx + 13 ) ; xx [ 31 ] = -
6.31742519402702e-9 ; xx [ 32 ] = 6.11133899174537e-11 ; xx [ 33 ] = -
0.01723973036822852 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 31 , xx +
37 ) ; xx [ 1 ] = 1.144603405378138e-3 + xx [ 37 ] ; xx [ 8 ] =
4.103366750367182e-3 ; xx [ 16 ] = 4.83817857357089e-3 - xx [ 38 ] ; xx [ 18
] = 0.0139940128625294 ; xx [ 26 ] = 5.457891674323079e-3 + xx [ 39 ] ; xx [
27 ] = 0.02757292748492293 ; xx [ 31 ] = xx [ 34 ] + xx [ 23 ] + xx [ 13 ] -
xx [ 1 ] - xx [ 8 ] ; xx [ 32 ] = xx [ 35 ] + xx [ 24 ] + xx [ 14 ] + xx [ 16
] - xx [ 18 ] ; xx [ 33 ] = xx [ 36 ] + xx [ 25 ] + xx [ 15 ] - xx [ 26 ] -
xx [ 27 ] ; xx [ 13 ] = - 0.3826804379272111 ; xx [ 14 ] = 0.9076319526101295
; xx [ 15 ] = 0.1725106403354915 ; xx [ 23 ] = xx [ 2 ] * state [ 14 ] ; xx [
24 ] = cos ( xx [ 23 ] ) ; xx [ 25 ] = sin ( xx [ 23 ] ) ; xx [ 34 ] = xx [
10 ] * xx [ 24 ] + xx [ 11 ] * xx [ 25 ] ; xx [ 35 ] = xx [ 3 ] * xx [ 25 ] -
xx [ 9 ] * xx [ 24 ] ; xx [ 36 ] = xx [ 3 ] * xx [ 24 ] + xx [ 9 ] * xx [ 25
] ; xx [ 37 ] = xx [ 10 ] * xx [ 25 ] - xx [ 11 ] * xx [ 24 ] ; xx [ 38 ] =
xx [ 12 ] ; xx [ 39 ] = - 0.01994045583473804 ; xx [ 40 ] = -
0.09771574456570453 ; xx [ 41 ] = 0.1007532138045611 ; xx [ 3 ] = xx [ 2 ] *
state [ 16 ] ; xx [ 9 ] = sin ( xx [ 3 ] ) ; xx [ 42 ] = cos ( xx [ 3 ] ) ;
xx [ 43 ] = 0.197475839231908 * xx [ 9 ] ; xx [ 44 ] = - (
0.01978777979476189 * xx [ 9 ] ) ; xx [ 45 ] = - ( xx [ 19 ] * xx [ 9 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 38 , xx + 42 , xx + 9 ) ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 9 , xx + 38 ) ; xx [ 42 ] =
0.5034016931648424 ; xx [ 43 ] = 0.3857454927643942 ; xx [ 44 ] =
0.5064391624036884 ; xx [ 45 ] = 0.5842144511346627 ;
pm_math_Quaternion_compose_ra ( xx + 38 , xx + 42 , xx + 46 ) ; xx [ 42 ] =
xx [ 0 ] * ( xx [ 46 ] * xx [ 48 ] + xx [ 47 ] * xx [ 49 ] ) ; xx [ 43 ] = xx
[ 0 ] * ( xx [ 48 ] * xx [ 49 ] - xx [ 46 ] * xx [ 47 ] ) ; xx [ 44 ] = xx [
17 ] - xx [ 0 ] * ( xx [ 47 ] * xx [ 47 ] + xx [ 48 ] * xx [ 48 ] ) ; xx [ 45
] = - 0.01271019941645938 ; xx [ 46 ] = 0.02011896482120349 ; xx [ 47 ] = -
0.01159391418917814 ; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 45 , xx +
48 ) ; xx [ 38 ] = - 0.02695031004471146 ; xx [ 39 ] = - 1.195512210539264e-3
; xx [ 40 ] = 4.842731578975556e-3 ; pm_math_Quaternion_xform_ra ( xx + 9 ,
xx + 38 , xx + 45 ) ; xx [ 9 ] = 8.499999999999994e-3 - xx [ 45 ] ; xx [ 10 ]
= - xx [ 46 ] ; xx [ 11 ] = 1.000000000000001e-3 - xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 9 , xx + 38 ) ; xx [ 3 ] =
8.499995046130028e-3 ; xx [ 9 ] = 3.566398367738088e-9 * xx [ 25 ] ; xx [ 10
] = xx [ 3 ] * xx [ 25 ] ; xx [ 34 ] = xx [ 3 ] - xx [ 0 ] * ( xx [ 9 ] * xx
[ 24 ] + xx [ 10 ] * xx [ 25 ] ) ; xx [ 35 ] = - ( 7.499996433601628e-3 + xx
[ 0 ] * ( xx [ 9 ] * xx [ 25 ] - xx [ 10 ] * xx [ 24 ] ) ) ; xx [ 36 ] = -
1.207894729634444e-3 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 34 , xx +
9 ) ; xx [ 3 ] = xx [ 48 ] + xx [ 38 ] + xx [ 9 ] - xx [ 1 ] - xx [ 8 ] ; xx
[ 4 ] = xx [ 49 ] + xx [ 39 ] + xx [ 10 ] + xx [ 16 ] - xx [ 18 ] ; xx [ 5 ]
= xx [ 50 ] + xx [ 40 ] + xx [ 11 ] - xx [ 26 ] - xx [ 27 ] ; xx [ 6 ] = -
0.215751709792892 ; xx [ 7 ] = - 0.2981849626920737 ; xx [ 8 ] = -
2.033832353854736e-3 ; xx [ 9 ] = - 0.929802554993116 ; xx [ 1 ] = xx [ 2 ] *
state [ 10 ] ; xx [ 10 ] = sin ( xx [ 1 ] ) ; xx [ 23 ] = cos ( xx [ 1 ] ) ;
xx [ 24 ] = - ( 0.3826804379272233 * xx [ 10 ] ) ; xx [ 25 ] =
0.9076319526101237 * xx [ 10 ] ; xx [ 26 ] = 0.1725106403354957 * xx [ 10 ] ;
pm_math_Quaternion_compose_ra ( xx + 6 , xx + 23 , xx + 34 ) ; xx [ 6 ] =
0.01025445069467229 ; xx [ 7 ] = - 9.847964366436174e-3 ; xx [ 8 ] = -
0.01014277598357412 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 6 , xx + 9
) ; xx [ 6 ] = 0.01409005672401682 ; xx [ 7 ] = - 0.01894515942744741 ; xx [
8 ] = - 0.01187185013165681 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 6
, xx + 23 ) ; xx [ 38 ] = - 0.9890584029719356 ; xx [ 39 ] =
0.02451507747925197 ; xx [ 40 ] = - 0.1451159893451954 ; xx [ 41 ] = -
0.01019000113620927 ; xx [ 1 ] = xx [ 2 ] * state [ 8 ] ; xx [ 2 ] = sin ( xx
[ 1 ] ) ; xx [ 45 ] = cos ( xx [ 1 ] ) ; xx [ 46 ] = - ( 0.01619418156754471
* xx [ 2 ] ) ; xx [ 47 ] = - ( 0.9998688656410684 * xx [ 2 ] ) ; xx [ 48 ] =
- ( 2.236298900726297e-6 * xx [ 2 ] ) ; pm_math_Quaternion_compose_ra ( xx +
38 , xx + 45 , xx + 49 ) ; xx [ 6 ] = - 1.779962358034746e-3 ; xx [ 7 ] = -
2.813288543230789e-4 ; xx [ 8 ] = - 3.860324031167178e-7 ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 6 , xx + 38 ) ; xx [ 6 ] = -
1.734877756550734e-3 ; xx [ 7 ] = 2.502306067621761e-3 ; xx [ 8 ] = -
3.798065468850008e-7 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 6 , xx +
45 ) ; xx [ 6 ] = xx [ 9 ] - xx [ 23 ] + 0.0308855674310194 - ( xx [ 38 ] -
xx [ 45 ] - 7.499921419650881e-3 ) ; xx [ 7 ] = xx [ 10 ] - xx [ 24 ] -
9.289825552270628e-3 - ( xx [ 39 ] - xx [ 46 ] - 0.01644245306791676 ) ; xx [
8 ] = xx [ 11 ] - xx [ 25 ] - 6.447531210979022e-4 - ( xx [ 40 ] - xx [ 47 ]
+ 0.01026010879458929 ) ; xx [ 9 ] = 0.7070832170269247 ; xx [ 10 ] =
0.7070839779596056 ; xx [ 11 ] = - 5.77635371758612e-3 ; xx [ 12 ] = -
5.675037392355237e-3 ; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 9 , xx
+ 23 ) ; xx [ 1 ] = xx [ 24 ] * xx [ 25 ] ; xx [ 2 ] = xx [ 23 ] * xx [ 26 ]
; xx [ 9 ] = xx [ 26 ] * xx [ 26 ] ; xx [ 10 ] = xx [ 0 ] * ( xx [ 1 ] - xx [
2 ] ) ; xx [ 11 ] = xx [ 17 ] - xx [ 0 ] * ( xx [ 9 ] + xx [ 24 ] * xx [ 24 ]
) ; xx [ 12 ] = xx [ 0 ] * ( xx [ 23 ] * xx [ 24 ] + xx [ 25 ] * xx [ 26 ] )
; xx [ 38 ] = xx [ 17 ] - xx [ 0 ] * ( xx [ 25 ] * xx [ 25 ] + xx [ 9 ] ) ;
xx [ 39 ] = xx [ 0 ] * ( xx [ 2 ] + xx [ 1 ] ) ; xx [ 40 ] = xx [ 0 ] * ( xx
[ 24 ] * xx [ 26 ] - xx [ 23 ] * xx [ 25 ] ) ; xx [ 23 ] = -
0.2643737754551072 ; xx [ 24 ] = - 0.029879175111395 ; xx [ 25 ] =
0.6425355357697462 ; xx [ 26 ] = 0.7185832081390159 ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 23 , xx + 45 ) ; xx [ 1 ] = xx
[ 46 ] * xx [ 47 ] ; xx [ 2 ] = xx [ 45 ] * xx [ 48 ] ; xx [ 9 ] = xx [ 48 ]
* xx [ 48 ] ; xx [ 23 ] = xx [ 0 ] * ( xx [ 1 ] - xx [ 2 ] ) ; xx [ 24 ] = xx
[ 17 ] - xx [ 0 ] * ( xx [ 9 ] + xx [ 46 ] * xx [ 46 ] ) ; xx [ 25 ] = xx [ 0
] * ( xx [ 45 ] * xx [ 46 ] + xx [ 47 ] * xx [ 48 ] ) ; xx [ 34 ] = xx [ 17 ]
- xx [ 0 ] * ( xx [ 47 ] * xx [ 47 ] + xx [ 9 ] ) ; xx [ 35 ] = xx [ 0 ] * (
xx [ 2 ] + xx [ 1 ] ) ; xx [ 36 ] = xx [ 0 ] * ( xx [ 46 ] * xx [ 48 ] - xx [
45 ] * xx [ 47 ] ) ; error [ 0 ] = pm_math_Vector3_dot_ra ( xx + 20 , xx + 28
) ; error [ 1 ] = pm_math_Vector3_dot_ra ( xx + 31 , xx + 13 ) ; error [ 2 ]
= pm_math_Vector3_dot_ra ( xx + 42 , xx + 28 ) ; error [ 3 ] =
pm_math_Vector3_dot_ra ( xx + 3 , xx + 13 ) ; error [ 4 ] =
sm_core_canonicalAngle ( state [ 26 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 6 , xx + 10 ) , pm_math_Vector3_dot_ra ( xx + 6
, xx + 38 ) ) - state [ 26 ] ) - state [ 28 ] + atan2 (
pm_math_Vector3_dot_ra ( xx + 6 , xx + 23 ) , pm_math_Vector3_dot_ra ( xx + 6
, xx + 34 ) ) ) ; } void cst_robotarm_breach_98bf360f_6_resetModeVector (
const void * mech , int * modeVector ) { ( void ) mech ; ( void ) modeVector
; } boolean_T cst_robotarm_breach_98bf360f_6_hasJointDisToNormModeChange (
const void * mech , const int * prevModeVector , const int * modeVector ) { (
void ) mech ; ( void ) prevModeVector ; ( void ) modeVector ; return 0 ; }
PmfMessageId cst_robotarm_breach_98bf360f_6_performJointDisToNormModeChange (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
prevModeVector , const int * modeVector , const double * input , double *
state , void * neDiagMgr0 ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; NeuDiagnosticManager
* neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) prevModeVector ; ( void ) modeVector ; (
void ) input ; ( void ) state ; ( void ) neDiagMgr ; return NULL ; }
PmfMessageId cst_robotarm_breach_98bf360f_6_onModeChangedCutJoints ( const
void * mech , const int * prevModeVector , int * modeVector , double * state
, void * neDiagMgr0 ) { NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void ) prevModeVector
; ( void ) modeVector ; ( void ) state ; ( void ) neDiagMgr ; return NULL ; }
