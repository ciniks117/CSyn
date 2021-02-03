#include "__cf_closedLoop_toTune.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
boolean_T closedLoop_toTune_b924f1e8_1_getTargetStatus ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const size_t
targetIndex ) { return true ; } void closedLoop_toTune_b924f1e8_1_setTargets
( const RuntimeDerivedValuesBundle * rtdv , CTarget * targets ) { ( void )
rtdv ; ( void ) targets ; } void
closedLoop_toTune_b924f1e8_1_resetStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [
0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0
] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ]
; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ]
; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ]
; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ]
; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ]
; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; } static PmfMessageId
initializeTrackedAngleState_0 ( const RuntimeDerivedValuesBundle * rtdv ,
const double * motionData , double * state , NeuDiagnosticManager * neDiagMgr
) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi =
rtdv -> mInts . mValues ; double xx [ 19 ] ; ( void ) rtdvd ; ( void ) rtdvi
; ( void ) neDiagMgr ; xx [ 0 ] = 3.393780417072501e-4 ; xx [ 1 ] =
0.1217147440922071 ; xx [ 2 ] = 2.437305475440299e-3 ; xx [ 3 ] = -
0.9925620713260872 ; xx [ 4 ] = motionData [ 42 ] ; xx [ 5 ] = motionData [
43 ] ; xx [ 6 ] = motionData [ 44 ] ; xx [ 7 ] = motionData [ 45 ] ; xx [ 8 ]
= motionData [ 70 ] ; xx [ 9 ] = motionData [ 71 ] ; xx [ 10 ] = motionData [
72 ] ; xx [ 11 ] = motionData [ 73 ] ; pm_math_quatInverseCompose ( xx + 4 ,
xx + 8 , xx + 12 ) ; pm_math_quatInverseCompose ( xx + 0 , xx + 12 , xx + 4 )
; xx [ 0 ] = 8.039551964356129e-5 ; xx [ 1 ] = 0.9999878887291285 ; xx [ 2 ]
= 4.920968565308659e-3 ; xx [ 8 ] = motionData [ 120 ] ; xx [ 9 ] =
motionData [ 121 ] ; xx [ 10 ] = motionData [ 122 ] ;
pm_math_quatInverseXform ( xx + 12 , xx + 8 , xx + 16 ) ; xx [ 8 ] =
motionData [ 114 ] - xx [ 16 ] ; xx [ 9 ] = motionData [ 115 ] - xx [ 17 ] ;
xx [ 10 ] = motionData [ 116 ] - xx [ 18 ] ; state [ 20 ] =
sm_core_canonicalAngle ( 2.0 * atan2 ( sqrt ( xx [ 5 ] * xx [ 5 ] + xx [ 6 ]
* xx [ 6 ] + xx [ 7 ] * xx [ 7 ] ) , fabs ( xx [ 4 ] ) ) * ( ( pm_math_dot3 (
xx + 5 , xx + 0 ) * xx [ 4 ] ) < 0.0 ? - 1.0 : + 1.0 ) ) ; state [ 21 ] =
pm_math_dot3 ( xx + 8 , xx + 0 ) ; return NULL ; } static PmfMessageId
initializeTrackedAngleState_1 ( const RuntimeDerivedValuesBundle * rtdv ,
const double * motionData , double * state , NeuDiagnosticManager * neDiagMgr
) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi =
rtdv -> mInts . mValues ; double xx [ 19 ] ; ( void ) rtdvd ; ( void ) rtdvi
; ( void ) neDiagMgr ; xx [ 0 ] = - 0.9925620713260874 ; xx [ 1 ] =
2.437305475440188e-3 ; xx [ 2 ] = - 0.1217147440922072 ; xx [ 3 ] = -
3.393780417073611e-4 ; xx [ 4 ] = motionData [ 63 ] ; xx [ 5 ] = motionData [
64 ] ; xx [ 6 ] = motionData [ 65 ] ; xx [ 7 ] = motionData [ 66 ] ; xx [ 8 ]
= motionData [ 77 ] ; xx [ 9 ] = motionData [ 78 ] ; xx [ 10 ] = motionData [
79 ] ; xx [ 11 ] = motionData [ 80 ] ; pm_math_quatInverseCompose ( xx + 4 ,
xx + 8 , xx + 12 ) ; pm_math_quatInverseCompose ( xx + 0 , xx + 12 , xx + 4 )
; xx [ 0 ] = - 8.039551964383884e-5 ; xx [ 1 ] = - 0.9999878887291287 ; xx [
2 ] = - 4.920968565308881e-3 ; xx [ 8 ] = motionData [ 138 ] ; xx [ 9 ] =
motionData [ 139 ] ; xx [ 10 ] = motionData [ 140 ] ;
pm_math_quatInverseXform ( xx + 12 , xx + 8 , xx + 16 ) ; xx [ 8 ] =
motionData [ 132 ] - xx [ 16 ] ; xx [ 9 ] = motionData [ 133 ] - xx [ 17 ] ;
xx [ 10 ] = motionData [ 134 ] - xx [ 18 ] ; state [ 22 ] =
sm_core_canonicalAngle ( 2.0 * atan2 ( sqrt ( xx [ 5 ] * xx [ 5 ] + xx [ 6 ]
* xx [ 6 ] + xx [ 7 ] * xx [ 7 ] ) , fabs ( xx [ 4 ] ) ) * ( ( pm_math_dot3 (
xx + 5 , xx + 0 ) * xx [ 4 ] ) < 0.0 ? - 1.0 : + 1.0 ) ) ; state [ 23 ] =
pm_math_dot3 ( xx + 8 , xx + 0 ) ; return NULL ; } void
closedLoop_toTune_b924f1e8_1_initializeTrackedAngleState ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , const double * motionData ,
double * state , void * neDiagMgr0 ) { NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ;
initializeTrackedAngleState_0 ( rtdv , motionData , state , neDiagMgr ) ;
initializeTrackedAngleState_1 ( rtdv , motionData , state , neDiagMgr ) ; }
void closedLoop_toTune_b924f1e8_1_computeDiscreteState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , double * state ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
} void closedLoop_toTune_b924f1e8_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] =
state [ 0 ] + dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ;
state [ 4 ] = state [ 4 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] +
dofDeltas [ 3 ] ; state [ 8 ] = state [ 8 ] + dofDeltas [ 4 ] ; state [ 10 ]
= state [ 10 ] + dofDeltas [ 5 ] ; state [ 12 ] = state [ 12 ] + dofDeltas [
6 ] ; state [ 14 ] = state [ 14 ] + dofDeltas [ 7 ] ; state [ 16 ] = state [
16 ] + dofDeltas [ 8 ] ; state [ 18 ] = state [ 18 ] + dofDeltas [ 9 ] ; }
static void perturbJointPrimitiveState_0_0 ( double mag , double * state ) {
state [ 0 ] = state [ 0 ] + mag ; } static void
perturbJointPrimitiveState_0_0v ( double mag , double * state ) { state [ 0 ]
= state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; } static void
perturbJointPrimitiveState_1_0 ( double mag , double * state ) { state [ 2 ]
= state [ 2 ] + mag ; } static void perturbJointPrimitiveState_1_0v ( double
mag , double * state ) { state [ 2 ] = state [ 2 ] + mag ; state [ 3 ] =
state [ 3 ] - 0.875 * mag ; } static void perturbJointPrimitiveState_2_0 (
double mag , double * state ) { state [ 4 ] = state [ 4 ] + mag ; } static
void perturbJointPrimitiveState_2_0v ( double mag , double * state ) { state
[ 4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; }
static void perturbJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbJointPrimitiveState_3_0v ( double mag , double * state ) { state [ 6 ]
= state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static void
perturbJointPrimitiveState_4_0 ( double mag , double * state ) { state [ 8 ]
= state [ 8 ] + mag ; } static void perturbJointPrimitiveState_4_0v ( double
mag , double * state ) { state [ 8 ] = state [ 8 ] + mag ; state [ 9 ] =
state [ 9 ] - 0.875 * mag ; } static void perturbJointPrimitiveState_5_0 (
double mag , double * state ) { state [ 10 ] = state [ 10 ] + mag ; } static
void perturbJointPrimitiveState_5_0v ( double mag , double * state ) { state
[ 10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbJointPrimitiveState_6_0 ( double mag , double * state ) {
state [ 12 ] = state [ 12 ] + mag ; } static void
perturbJointPrimitiveState_6_0v ( double mag , double * state ) { state [ 12
] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] - 0.875 * mag ; } static
void perturbJointPrimitiveState_7_0 ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; } static void perturbJointPrimitiveState_7_0v (
double mag , double * state ) { state [ 14 ] = state [ 14 ] + mag ; state [
15 ] = state [ 15 ] - 0.875 * mag ; } static void
perturbJointPrimitiveState_8_0 ( double mag , double * state ) { state [ 16 ]
= state [ 16 ] + mag ; } static void perturbJointPrimitiveState_8_0v ( double
mag , double * state ) { state [ 16 ] = state [ 16 ] + mag ; state [ 17 ] =
state [ 17 ] - 0.875 * mag ; } static void perturbJointPrimitiveState_9_0 (
double mag , double * state ) { state [ 18 ] = state [ 18 ] + mag ; } static
void perturbJointPrimitiveState_9_0v ( double mag , double * state ) { state
[ 18 ] = state [ 18 ] + mag ; state [ 19 ] = state [ 19 ] - 0.875 * mag ; }
void closedLoop_toTune_b924f1e8_1_perturbJointPrimitiveState ( const void *
mech , size_t stageIdx , size_t primIdx , double mag , boolean_T
doPerturbVelocity , double * state ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ;
switch ( ( stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) {
case 0 : perturbJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbJointPrimitiveState_8_0v ( mag , state ) ; break ; case 108 :
perturbJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbJointPrimitiveState_9_0v ( mag , state ) ; break ; } } void
closedLoop_toTune_b924f1e8_1_perturbFlexibleBodyState ( const void * mech ,
size_t stageIdx , double mag , boolean_T doPerturbVelocity , double * state )
{ ( void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void )
doPerturbVelocity ; ( void ) state ; switch ( stageIdx * 2 + (
doPerturbVelocity ? 1 : 0 ) ) { } } void
closedLoop_toTune_b924f1e8_1_computeDofBlendMatrix ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { } } void
closedLoop_toTune_b924f1e8_1_projectPartiallyTargetedPos ( const void * mech
, size_t stageIdx , size_t primIdx , const double * origState , int
partialType , double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void )
primIdx ; ( void ) origState ; ( void ) partialType ; ( void ) state ; switch
( ( stageIdx * 6 + primIdx ) ) { } } void
closedLoop_toTune_b924f1e8_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 174 ] ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = - 0.9998464520016095 ; xx [ 1 ] =
- 4.627184746475166e-9 ; xx [ 2 ] = - 1.4514488742845e-10 ; xx [ 3 ] =
0.01752348195403571 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 0 ] ; xx
[ 6 ] = 0.03504158251691365 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
0.9993858551604131 ; xx [ 9 ] = 9.258035449377644e-9 ; xx [ 10 ] = cos ( xx [
5 ] ) ; xx [ 11 ] = - ( xx [ 6 ] * xx [ 7 ] ) ; xx [ 12 ] = xx [ 8 ] * xx [ 7
] ; xx [ 13 ] = - ( xx [ 9 ] * xx [ 7 ] ) ; pm_math_quatCompose ( xx + 0 , xx
+ 10 , xx + 14 ) ; xx [ 0 ] = - 0.02637382682333418 ; xx [ 1 ] = -
3.60452004155962e-3 ; xx [ 2 ] = 9.554012575467549e-11 ; pm_math_quatXform (
xx + 14 , xx + 0 , xx + 10 ) ; xx [ 0 ] = - 0.9998475545126857 ; xx [ 1 ] =
4.62807808743193e-9 ; xx [ 2 ] = 1.445651376386081e-10 ; xx [ 3 ] = -
0.01746046205007074 ; xx [ 5 ] = xx [ 4 ] * state [ 2 ] ; xx [ 7 ] =
1.260590941853934e-4 ; xx [ 13 ] = sin ( xx [ 5 ] ) ; xx [ 18 ] =
0.9999999920545524 ; xx [ 19 ] = 1.774136393351e-12 ; xx [ 20 ] = cos ( xx [
5 ] ) ; xx [ 21 ] = - ( xx [ 7 ] * xx [ 13 ] ) ; xx [ 22 ] = xx [ 18 ] * xx [
13 ] ; xx [ 23 ] = xx [ 19 ] * xx [ 13 ] ; pm_math_quatCompose ( xx + 0 , xx
+ 20 , xx + 24 ) ; xx [ 0 ] = - 0.05692659527302101 ; xx [ 1 ] = -
0.04413317908031012 ; xx [ 2 ] = - 8.515302288232607e-14 ; pm_math_quatXform
( xx + 24 , xx + 0 , xx + 20 ) ; xx [ 0 ] = 0.07547017254630675 - xx [ 20 ] ;
xx [ 1 ] = - ( 0.04502537774068344 + xx [ 21 ] ) ; xx [ 2 ] =
5.246701361570897e-10 - xx [ 22 ] ; xx [ 20 ] = - 0.9999999980191991 ; xx [
21 ] = 2.23856606067822e-7 ; xx [ 22 ] = - 3.321689057863772e-8 ; xx [ 23 ] =
- 6.294084901737286e-5 ; xx [ 3 ] = xx [ 4 ] * state [ 4 ] ; xx [ 5 ] =
6.646453320689627e-8 ; xx [ 13 ] = sin ( xx [ 3 ] ) ; xx [ 28 ] =
4.477090296885221e-7 ; xx [ 29 ] = cos ( xx [ 3 ] ) ; xx [ 30 ] = - ( xx [ 5
] * xx [ 13 ] ) ; xx [ 31 ] = - ( xx [ 28 ] * xx [ 13 ] ) ; xx [ 32 ] = xx [
13 ] ; pm_math_quatCompose ( xx + 20 , xx + 29 , xx + 33 ) ; xx [ 20 ] = -
0.01066688412615721 ; xx [ 21 ] = 1.687864625317035e-8 ; xx [ 22 ] = -
0.04623419529374339 ; pm_math_quatXform ( xx + 33 , xx + 20 , xx + 29 ) ; xx
[ 3 ] = 0.05228786378974412 - xx [ 29 ] ; xx [ 13 ] = - (
1.712170543057558e-4 + xx [ 30 ] ) ; xx [ 20 ] = - ( 0.0462341942006417 + xx
[ 31 ] ) ; xx [ 29 ] = - 0.999999999999855 ; xx [ 30 ] = -
2.870853866298734e-7 ; xx [ 31 ] = 4.297010822439871e-7 ; xx [ 32 ] = -
1.513696003818457e-7 ; xx [ 21 ] = xx [ 4 ] * state [ 6 ] ; xx [ 22 ] = sin (
xx [ 21 ] ) ; xx [ 23 ] = 1.253430232384112e-7 ; xx [ 37 ] =
7.929375664961213e-7 ; xx [ 38 ] = cos ( xx [ 21 ] ) ; xx [ 39 ] = - xx [ 22
] ; xx [ 40 ] = xx [ 23 ] * xx [ 22 ] ; xx [ 41 ] = xx [ 37 ] * xx [ 22 ] ;
pm_math_quatCompose ( xx + 29 , xx + 38 , xx + 42 ) ; xx [ 29 ] = -
0.01788532900613876 ; xx [ 30 ] = 1.868031335988478e-9 ; xx [ 31 ] =
1.701036284661743e-8 ; pm_math_quatXform ( xx + 42 , xx + 29 , xx + 38 ) ; xx
[ 21 ] = 0.02616311280090799 - xx [ 38 ] ; xx [ 22 ] = 2.712688936742104e-9 -
xx [ 39 ] ; xx [ 29 ] = 1.355023982453589e-9 - xx [ 40 ] ; xx [ 38 ] = -
0.99302022896367 ; xx [ 39 ] = 0.1066412368322485 ; xx [ 40 ] = -
0.03120900126866927 ; xx [ 41 ] = - 0.03955337805600653 ; xx [ 30 ] = xx [ 4
] * state [ 8 ] ; xx [ 31 ] = 0.07189840968753769 ; xx [ 32 ] = sin ( xx [ 30
] ) ; xx [ 46 ] = 0.9741263695734882 ; xx [ 47 ] = 0.2142625370567126 ; xx [
48 ] = cos ( xx [ 30 ] ) ; xx [ 49 ] = xx [ 31 ] * xx [ 32 ] ; xx [ 50 ] = xx
[ 46 ] * xx [ 32 ] ; xx [ 51 ] = xx [ 47 ] * xx [ 32 ] ; pm_math_quatCompose
( xx + 38 , xx + 48 , xx + 52 ) ; xx [ 30 ] = 0.01083666099717944 ; xx [ 38 ]
= - 6.666465945763514e-3 ; xx [ 39 ] = - 8.669348660839774e-3 ; xx [ 40 ] =
1.866534164845896e-3 ; pm_math_quatXform ( xx + 52 , xx + 38 , xx + 48 ) ; xx
[ 32 ] = xx [ 30 ] - xx [ 48 ] ; xx [ 38 ] = 9.180105591304477e-3 ; xx [ 39 ]
= - ( xx [ 38 ] + xx [ 49 ] ) ; xx [ 40 ] = 0.01115600460345469 ; xx [ 41 ] =
- ( xx [ 40 ] + xx [ 50 ] ) ; xx [ 56 ] = 0.05182593581663095 ; xx [ 57 ] = -
0.1519742715228705 ; xx [ 58 ] = - 0.1034434723147636 ; xx [ 59 ] =
0.981589191671999 ; xx [ 51 ] = xx [ 4 ] * state [ 10 ] ; xx [ 60 ] =
8.039551964383884e-5 ; xx [ 61 ] = sin ( xx [ 51 ] ) ; xx [ 62 ] =
0.9999878887291287 ; xx [ 63 ] = 4.920968565308881e-3 ; xx [ 64 ] = cos ( xx
[ 51 ] ) ; xx [ 65 ] = - ( xx [ 60 ] * xx [ 61 ] ) ; xx [ 66 ] = - ( xx [ 62
] * xx [ 61 ] ) ; xx [ 67 ] = - ( xx [ 63 ] * xx [ 61 ] ) ;
pm_math_quatCompose ( xx + 56 , xx + 64 , xx + 68 ) ; xx [ 56 ] = -
0.02929060823879809 ; xx [ 57 ] = 7.402384199146024e-3 ; xx [ 58 ] =
5.50599994432713e-4 ; pm_math_quatXform ( xx + 68 , xx + 56 , xx + 64 ) ; xx
[ 51 ] = 0.01141939320659117 - xx [ 64 ] ; xx [ 56 ] = - (
7.654873829231559e-3 + xx [ 65 ] ) ; xx [ 57 ] = - ( 5.163891526827933e-4 +
xx [ 66 ] ) ; xx [ 58 ] = 3.964687873836087e-7 ; xx [ 59 ] = xx [ 4 ] * state
[ 12 ] ; xx [ 61 ] = sin ( xx [ 59 ] ) ; xx [ 64 ] = 0.9999999999999174 ; xx
[ 65 ] = cos ( xx [ 59 ] ) ; xx [ 59 ] = xx [ 58 ] * xx [ 61 ] - xx [ 64 ] *
xx [ 65 ] ; xx [ 66 ] = 6.323084164593961e-8 ; xx [ 67 ] =
6.267148658367121e-8 ; xx [ 72 ] = xx [ 66 ] * xx [ 65 ] - xx [ 67 ] * xx [
61 ] ; xx [ 73 ] = xx [ 64 ] * xx [ 61 ] + xx [ 58 ] * xx [ 65 ] ; xx [ 74 ]
= - xx [ 73 ] ; xx [ 75 ] = xx [ 67 ] * xx [ 65 ] + xx [ 66 ] * xx [ 61 ] ;
xx [ 61 ] = 8.748612304055577e-3 ; xx [ 65 ] = 2.0 ; xx [ 76 ] = xx [ 72 ] ;
xx [ 77 ] = xx [ 74 ] ; xx [ 78 ] = xx [ 75 ] ; xx [ 79 ] =
9.180102448427657e-3 ; xx [ 80 ] = xx [ 75 ] * xx [ 79 ] ; xx [ 81 ] = xx [
75 ] * xx [ 61 ] ; xx [ 82 ] = xx [ 73 ] * xx [ 61 ] - xx [ 79 ] * xx [ 72 ]
; pm_math_cross3 ( xx + 76 , xx + 80 , xx + 83 ) ; xx [ 73 ] =
0.03128971074738664 - ( xx [ 61 ] + xx [ 65 ] * ( xx [ 83 ] + xx [ 80 ] * xx
[ 59 ] ) ) ; xx [ 76 ] = - ( 9.1801074382113e-3 + ( xx [ 81 ] * xx [ 59 ] +
xx [ 84 ] ) * xx [ 65 ] - xx [ 79 ] ) ; xx [ 77 ] = - ( 5.488375390709461e-3
+ ( xx [ 82 ] * xx [ 59 ] + xx [ 85 ] ) * xx [ 65 ] ) ; xx [ 78 ] = -
0.993020263593104 ; xx [ 79 ] = - 0.1066411692347894 ; xx [ 80 ] =
0.03120822428610398 ; xx [ 81 ] = - 0.03955330396602025 ; xx [ 82 ] = xx [ 4
] * state [ 14 ] ; xx [ 83 ] = 0.07189841740695141 ; xx [ 84 ] = sin ( xx [
82 ] ) ; xx [ 85 ] = 0.9741263571870624 ; xx [ 86 ] = 0.2142625907801925 ; xx
[ 87 ] = cos ( xx [ 82 ] ) ; xx [ 88 ] = xx [ 83 ] * xx [ 84 ] ; xx [ 89 ] =
xx [ 85 ] * xx [ 84 ] ; xx [ 90 ] = - ( xx [ 86 ] * xx [ 84 ] ) ;
pm_math_quatCompose ( xx + 78 , xx + 87 , xx + 91 ) ; xx [ 78 ] =
0.01083667868920278 ; xx [ 79 ] = - 6.666465301335936e-3 ; xx [ 80 ] = -
8.669348610704675e-3 ; xx [ 81 ] = - 1.866533332507701e-3 ; pm_math_quatXform
( xx + 91 , xx + 79 , xx + 87 ) ; xx [ 79 ] = xx [ 78 ] - xx [ 87 ] ; xx [ 80
] = 9.180102769692503e-3 ; xx [ 81 ] = - ( xx [ 80 ] + xx [ 88 ] ) ; xx [ 82
] = 0.01115599539653812 ; xx [ 84 ] = xx [ 82 ] - xx [ 89 ] ; xx [ 95 ] = -
0.9815891861559222 ; xx [ 96 ] = 0.1034434979269754 ; xx [ 97 ] = -
0.1519742864170317 ; xx [ 98 ] = 0.05182594549470909 ; xx [ 90 ] = xx [ 4 ] *
state [ 16 ] ; xx [ 99 ] = 8.039551964356129e-5 ; xx [ 100 ] = sin ( xx [ 90
] ) ; xx [ 101 ] = 0.9999878887291285 ; xx [ 102 ] = 4.920968565308659e-3 ;
xx [ 103 ] = cos ( xx [ 90 ] ) ; xx [ 104 ] = xx [ 99 ] * xx [ 100 ] ; xx [
105 ] = xx [ 101 ] * xx [ 100 ] ; xx [ 106 ] = xx [ 102 ] * xx [ 100 ] ;
pm_math_quatCompose ( xx + 95 , xx + 103 , xx + 107 ) ; xx [ 95 ] = -
0.02929179843054367 ; xx [ 96 ] = - 7.401641399973765e-3 ; xx [ 97 ] =
4.777489675008928e-4 ; pm_math_quatXform ( xx + 107 , xx + 95 , xx + 103 ) ;
xx [ 90 ] = 0.01141939394132858 - xx [ 103 ] ; xx [ 95 ] = - (
7.654873922132995e-3 + xx [ 104 ] ) ; xx [ 96 ] = 5.163893604838405e-4 - xx [
105 ] ; xx [ 97 ] = xx [ 4 ] * state [ 18 ] ; xx [ 4 ] = sin ( xx [ 97 ] ) ;
xx [ 98 ] = cos ( xx [ 97 ] ) ; xx [ 97 ] = xx [ 58 ] * xx [ 4 ] - xx [ 64 ]
* xx [ 98 ] ; xx [ 100 ] = xx [ 66 ] * xx [ 98 ] - xx [ 67 ] * xx [ 4 ] ; xx
[ 103 ] = xx [ 64 ] * xx [ 4 ] + xx [ 58 ] * xx [ 98 ] ; xx [ 58 ] = - xx [
103 ] ; xx [ 64 ] = xx [ 67 ] * xx [ 98 ] + xx [ 66 ] * xx [ 4 ] ; xx [ 104 ]
= xx [ 100 ] ; xx [ 105 ] = xx [ 58 ] ; xx [ 106 ] = xx [ 64 ] ; xx [ 4 ] =
9.180102448427653e-3 ; xx [ 66 ] = xx [ 64 ] * xx [ 4 ] ; xx [ 67 ] = xx [ 64
] * xx [ 61 ] ; xx [ 98 ] = xx [ 103 ] * xx [ 61 ] - xx [ 4 ] * xx [ 100 ] ;
xx [ 111 ] = xx [ 66 ] ; xx [ 112 ] = xx [ 67 ] ; xx [ 113 ] = xx [ 98 ] ;
pm_math_cross3 ( xx + 104 , xx + 111 , xx + 114 ) ; xx [ 103 ] =
0.03128971945123185 - ( xx [ 61 ] + xx [ 65 ] * ( xx [ 114 ] + xx [ 66 ] * xx
[ 97 ] ) ) ; xx [ 66 ] = - ( 9.18010605007873e-3 + ( xx [ 67 ] * xx [ 97 ] +
xx [ 115 ] ) * xx [ 65 ] - xx [ 4 ] ) ; xx [ 4 ] = 5.488333747817018e-3 - (
xx [ 98 ] * xx [ 97 ] + xx [ 116 ] ) * xx [ 65 ] ; pm_math_quatCompose ( xx +
52 , xx + 68 , xx + 111 ) ; xx [ 104 ] = xx [ 51 ] ; xx [ 105 ] = xx [ 56 ] ;
xx [ 106 ] = xx [ 57 ] ; pm_math_quatXform ( xx + 52 , xx + 104 , xx + 115 )
; pm_math_quatCompose ( xx + 91 , xx + 107 , xx + 118 ) ; xx [ 122 ] = xx [
90 ] ; xx [ 123 ] = xx [ 95 ] ; xx [ 124 ] = xx [ 96 ] ; pm_math_quatXform (
xx + 91 , xx + 122 , xx + 125 ) ; xx [ 65 ] = - ( xx [ 6 ] * state [ 1 ] ) ;
xx [ 6 ] = xx [ 8 ] * state [ 1 ] ; xx [ 8 ] = - ( xx [ 9 ] * state [ 1 ] ) ;
xx [ 9 ] = 6.211067595671864e-11 * state [ 1 ] ; xx [ 67 ] =
2.475177008664836e-10 * state [ 1 ] ; xx [ 98 ] = 0.02648393756016065 * state
[ 1 ] ; xx [ 128 ] = xx [ 65 ] ; xx [ 129 ] = xx [ 6 ] ; xx [ 130 ] = xx [ 8
] ; pm_math_quatInverseXform ( xx + 24 , xx + 128 , xx + 131 ) ; xx [ 134 ] =
xx [ 131 ] - xx [ 7 ] * state [ 3 ] ; xx [ 7 ] = xx [ 132 ] + xx [ 18 ] *
state [ 3 ] ; xx [ 18 ] = xx [ 133 ] + xx [ 19 ] * state [ 3 ] ;
pm_math_cross3 ( xx + 128 , xx + 0 , xx + 131 ) ; xx [ 128 ] = xx [ 131 ] -
xx [ 9 ] ; xx [ 129 ] = xx [ 132 ] - xx [ 67 ] ; xx [ 130 ] = xx [ 133 ] - xx
[ 98 ] ; pm_math_quatInverseXform ( xx + 24 , xx + 128 , xx + 131 ) ; xx [ 19
] = xx [ 132 ] + 1.010062787363613e-13 * state [ 3 ] ; xx [ 128 ] = xx [ 133
] - 0.05693215820929211 * state [ 3 ] ; xx [ 135 ] = xx [ 134 ] ; xx [ 136 ]
= xx [ 7 ] ; xx [ 137 ] = xx [ 18 ] ; pm_math_quatInverseXform ( xx + 33 , xx
+ 135 , xx + 138 ) ; xx [ 129 ] = xx [ 138 ] - xx [ 5 ] * state [ 5 ] ; xx [
5 ] = xx [ 139 ] - xx [ 28 ] * state [ 5 ] ; xx [ 28 ] = xx [ 140 ] + state [
5 ] ; xx [ 138 ] = xx [ 3 ] ; xx [ 139 ] = xx [ 13 ] ; xx [ 140 ] = xx [ 20 ]
; pm_math_cross3 ( xx + 135 , xx + 138 , xx + 141 ) ; xx [ 135 ] = xx [ 141 ]
+ xx [ 131 ] ; xx [ 136 ] = xx [ 142 ] + xx [ 19 ] ; xx [ 137 ] = xx [ 143 ]
+ xx [ 128 ] ; pm_math_quatInverseXform ( xx + 33 , xx + 135 , xx + 138 ) ;
xx [ 130 ] = xx [ 138 ] - 3.820820460222869e-9 * state [ 5 ] ; xx [ 132 ] =
xx [ 139 ] + 0.01066688719909032 * state [ 5 ] ; xx [ 133 ] = xx [ 140 ] +
4.775661463753087e-9 * state [ 5 ] ; xx [ 135 ] = xx [ 129 ] ; xx [ 136 ] =
xx [ 5 ] ; xx [ 137 ] = xx [ 28 ] ; pm_math_quatInverseXform ( xx + 42 , xx +
135 , xx + 138 ) ; xx [ 141 ] = xx [ 138 ] - state [ 7 ] ; xx [ 142 ] = xx [
139 ] + xx [ 23 ] * state [ 7 ] ; xx [ 23 ] = xx [ 140 ] + xx [ 37 ] * state
[ 7 ] ; xx [ 138 ] = xx [ 21 ] ; xx [ 139 ] = xx [ 22 ] ; xx [ 140 ] = xx [
29 ] ; pm_math_cross3 ( xx + 135 , xx + 138 , xx + 143 ) ; xx [ 135 ] = xx [
143 ] + xx [ 130 ] ; xx [ 136 ] = xx [ 144 ] + xx [ 132 ] ; xx [ 137 ] = xx [
145 ] + xx [ 133 ] ; pm_math_quatInverseXform ( xx + 42 , xx + 135 , xx + 138
) ; xx [ 37 ] = xx [ 138 ] - 6.50898083880172e-16 * state [ 7 ] ; xx [ 135 ]
= xx [ 139 ] - 2.828413588501791e-9 * state [ 7 ] ; xx [ 136 ] = xx [ 140 ] -
3.737698732552031e-10 * state [ 7 ] ; xx [ 137 ] = xx [ 141 ] ; xx [ 138 ] =
xx [ 142 ] ; xx [ 139 ] = xx [ 23 ] ; pm_math_quatInverseXform ( xx + 52 , xx
+ 137 , xx + 143 ) ; xx [ 140 ] = xx [ 143 ] + xx [ 31 ] * state [ 9 ] ; xx [
31 ] = xx [ 144 ] + xx [ 46 ] * state [ 9 ] ; xx [ 46 ] = xx [ 145 ] + xx [
47 ] * state [ 9 ] ; xx [ 143 ] = xx [ 32 ] ; xx [ 144 ] = xx [ 39 ] ; xx [
145 ] = xx [ 41 ] ; pm_math_cross3 ( xx + 137 , xx + 143 , xx + 146 ) ; xx [
143 ] = xx [ 146 ] + xx [ 37 ] ; xx [ 144 ] = xx [ 147 ] + xx [ 135 ] ; xx [
145 ] = xx [ 148 ] + xx [ 136 ] ; pm_math_quatInverseXform ( xx + 52 , xx +
143 , xx + 146 ) ; xx [ 47 ] = xx [ 146 ] - 3.67575678838696e-3 * state [ 9 ]
; xx [ 143 ] = xx [ 147 ] + 1.562574744821344e-3 * state [ 9 ] ; xx [ 144 ] =
xx [ 148 ] - 5.870667887890738e-3 * state [ 9 ] ; xx [ 145 ] = xx [ 140 ] ;
xx [ 146 ] = xx [ 31 ] ; xx [ 147 ] = xx [ 46 ] ; pm_math_quatInverseXform (
xx + 68 , xx + 145 , xx + 148 ) ; pm_math_cross3 ( xx + 145 , xx + 104 , xx +
151 ) ; xx [ 104 ] = xx [ 151 ] + xx [ 47 ] ; xx [ 105 ] = xx [ 152 ] + xx [
143 ] ; xx [ 106 ] = xx [ 153 ] + xx [ 144 ] ; pm_math_quatInverseXform ( xx
+ 68 , xx + 104 , xx + 145 ) ; xx [ 151 ] = xx [ 59 ] ; xx [ 152 ] = xx [ 72
] ; xx [ 153 ] = xx [ 74 ] ; xx [ 154 ] = xx [ 75 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 137 , xx + 104 ) ; xx [ 155 ] = xx
[ 73 ] ; xx [ 156 ] = xx [ 76 ] ; xx [ 157 ] = xx [ 77 ] ; pm_math_cross3 (
xx + 137 , xx + 155 , xx + 158 ) ; xx [ 155 ] = xx [ 158 ] + xx [ 37 ] ; xx [
156 ] = xx [ 159 ] + xx [ 135 ] ; xx [ 157 ] = xx [ 160 ] + xx [ 136 ] ;
pm_math_quatInverseXform ( xx + 151 , xx + 155 , xx + 158 ) ;
pm_math_quatInverseXform ( xx + 91 , xx + 137 , xx + 151 ) ; xx [ 154 ] = xx
[ 151 ] + xx [ 83 ] * state [ 15 ] ; xx [ 83 ] = xx [ 152 ] + xx [ 85 ] *
state [ 15 ] ; xx [ 85 ] = xx [ 153 ] - xx [ 86 ] * state [ 15 ] ; xx [ 151 ]
= xx [ 79 ] ; xx [ 152 ] = xx [ 81 ] ; xx [ 153 ] = xx [ 84 ] ;
pm_math_cross3 ( xx + 137 , xx + 151 , xx + 155 ) ; xx [ 151 ] = xx [ 155 ] +
xx [ 37 ] ; xx [ 152 ] = xx [ 156 ] + xx [ 135 ] ; xx [ 153 ] = xx [ 157 ] +
xx [ 136 ] ; pm_math_quatInverseXform ( xx + 91 , xx + 151 , xx + 155 ) ; xx
[ 86 ] = xx [ 155 ] + 3.6757564094702e-3 * state [ 15 ] ; xx [ 151 ] = xx [
156 ] - 1.562574919455121e-3 * state [ 15 ] ; xx [ 152 ] = xx [ 157 ] -
5.870667114245509e-3 * state [ 15 ] ; xx [ 155 ] = xx [ 154 ] ; xx [ 156 ] =
xx [ 83 ] ; xx [ 157 ] = xx [ 85 ] ; pm_math_quatInverseXform ( xx + 107 , xx
+ 155 , xx + 161 ) ; pm_math_cross3 ( xx + 155 , xx + 122 , xx + 164 ) ; xx [
122 ] = xx [ 164 ] + xx [ 86 ] ; xx [ 123 ] = xx [ 165 ] + xx [ 151 ] ; xx [
124 ] = xx [ 166 ] + xx [ 152 ] ; pm_math_quatInverseXform ( xx + 107 , xx +
122 , xx + 155 ) ; xx [ 164 ] = xx [ 97 ] ; xx [ 165 ] = xx [ 100 ] ; xx [
166 ] = xx [ 58 ] ; xx [ 167 ] = xx [ 64 ] ; pm_math_quatInverseXform ( xx +
164 , xx + 137 , xx + 122 ) ; xx [ 168 ] = xx [ 103 ] ; xx [ 169 ] = xx [ 66
] ; xx [ 170 ] = xx [ 4 ] ; pm_math_cross3 ( xx + 137 , xx + 168 , xx + 171 )
; xx [ 137 ] = xx [ 171 ] + xx [ 37 ] ; xx [ 138 ] = xx [ 172 ] + xx [ 135 ]
; xx [ 139 ] = xx [ 173 ] + xx [ 136 ] ; pm_math_quatInverseXform ( xx + 164
, xx + 137 , xx + 168 ) ; motionData [ 0 ] = xx [ 14 ] ; motionData [ 1 ] =
xx [ 15 ] ; motionData [ 2 ] = xx [ 16 ] ; motionData [ 3 ] = xx [ 17 ] ;
motionData [ 4 ] = - ( 0.0127 + xx [ 10 ] ) ; motionData [ 5 ] =
0.1321950183311473 - xx [ 11 ] ; motionData [ 6 ] = - xx [ 12 ] ; motionData
[ 7 ] = xx [ 24 ] ; motionData [ 8 ] = xx [ 25 ] ; motionData [ 9 ] = xx [ 26
] ; motionData [ 10 ] = xx [ 27 ] ; motionData [ 11 ] = xx [ 0 ] ; motionData
[ 12 ] = xx [ 1 ] ; motionData [ 13 ] = xx [ 2 ] ; motionData [ 14 ] = xx [
33 ] ; motionData [ 15 ] = xx [ 34 ] ; motionData [ 16 ] = xx [ 35 ] ;
motionData [ 17 ] = xx [ 36 ] ; motionData [ 18 ] = xx [ 3 ] ; motionData [
19 ] = xx [ 13 ] ; motionData [ 20 ] = xx [ 20 ] ; motionData [ 21 ] = xx [
42 ] ; motionData [ 22 ] = xx [ 43 ] ; motionData [ 23 ] = xx [ 44 ] ;
motionData [ 24 ] = xx [ 45 ] ; motionData [ 25 ] = xx [ 21 ] ; motionData [
26 ] = xx [ 22 ] ; motionData [ 27 ] = xx [ 29 ] ; motionData [ 28 ] = xx [
52 ] ; motionData [ 29 ] = xx [ 53 ] ; motionData [ 30 ] = xx [ 54 ] ;
motionData [ 31 ] = xx [ 55 ] ; motionData [ 32 ] = xx [ 32 ] ; motionData [
33 ] = xx [ 39 ] ; motionData [ 34 ] = xx [ 41 ] ; motionData [ 35 ] = xx [
68 ] ; motionData [ 36 ] = xx [ 69 ] ; motionData [ 37 ] = xx [ 70 ] ;
motionData [ 38 ] = xx [ 71 ] ; motionData [ 39 ] = xx [ 51 ] ; motionData [
40 ] = xx [ 56 ] ; motionData [ 41 ] = xx [ 57 ] ; motionData [ 42 ] = xx [
59 ] ; motionData [ 43 ] = xx [ 72 ] ; motionData [ 44 ] = xx [ 74 ] ;
motionData [ 45 ] = xx [ 75 ] ; motionData [ 46 ] = xx [ 73 ] ; motionData [
47 ] = xx [ 76 ] ; motionData [ 48 ] = xx [ 77 ] ; motionData [ 49 ] = xx [
91 ] ; motionData [ 50 ] = xx [ 92 ] ; motionData [ 51 ] = xx [ 93 ] ;
motionData [ 52 ] = xx [ 94 ] ; motionData [ 53 ] = xx [ 79 ] ; motionData [
54 ] = xx [ 81 ] ; motionData [ 55 ] = xx [ 84 ] ; motionData [ 56 ] = xx [
107 ] ; motionData [ 57 ] = xx [ 108 ] ; motionData [ 58 ] = xx [ 109 ] ;
motionData [ 59 ] = xx [ 110 ] ; motionData [ 60 ] = xx [ 90 ] ; motionData [
61 ] = xx [ 95 ] ; motionData [ 62 ] = xx [ 96 ] ; motionData [ 63 ] = xx [
97 ] ; motionData [ 64 ] = xx [ 100 ] ; motionData [ 65 ] = xx [ 58 ] ;
motionData [ 66 ] = xx [ 64 ] ; motionData [ 67 ] = xx [ 103 ] ; motionData [
68 ] = xx [ 66 ] ; motionData [ 69 ] = xx [ 4 ] ; motionData [ 70 ] = xx [
111 ] ; motionData [ 71 ] = xx [ 112 ] ; motionData [ 72 ] = xx [ 113 ] ;
motionData [ 73 ] = xx [ 114 ] ; motionData [ 74 ] = xx [ 115 ] - xx [ 48 ] +
xx [ 30 ] ; motionData [ 75 ] = xx [ 116 ] - xx [ 49 ] - xx [ 38 ] ;
motionData [ 76 ] = xx [ 117 ] - xx [ 50 ] - xx [ 40 ] ; motionData [ 77 ] =
xx [ 118 ] ; motionData [ 78 ] = xx [ 119 ] ; motionData [ 79 ] = xx [ 120 ]
; motionData [ 80 ] = xx [ 121 ] ; motionData [ 81 ] = xx [ 125 ] - xx [ 87 ]
+ xx [ 78 ] ; motionData [ 82 ] = xx [ 126 ] - xx [ 88 ] - xx [ 80 ] ;
motionData [ 83 ] = xx [ 127 ] - xx [ 89 ] + xx [ 82 ] ; motionData [ 84 ] =
xx [ 65 ] ; motionData [ 85 ] = xx [ 6 ] ; motionData [ 86 ] = xx [ 8 ] ;
motionData [ 87 ] = - xx [ 9 ] ; motionData [ 88 ] = - xx [ 67 ] ; motionData
[ 89 ] = - xx [ 98 ] ; motionData [ 90 ] = xx [ 134 ] ; motionData [ 91 ] =
xx [ 7 ] ; motionData [ 92 ] = xx [ 18 ] ; motionData [ 93 ] = xx [ 131 ] ;
motionData [ 94 ] = xx [ 19 ] ; motionData [ 95 ] = xx [ 128 ] ; motionData [
96 ] = xx [ 129 ] ; motionData [ 97 ] = xx [ 5 ] ; motionData [ 98 ] = xx [
28 ] ; motionData [ 99 ] = xx [ 130 ] ; motionData [ 100 ] = xx [ 132 ] ;
motionData [ 101 ] = xx [ 133 ] ; motionData [ 102 ] = xx [ 141 ] ;
motionData [ 103 ] = xx [ 142 ] ; motionData [ 104 ] = xx [ 23 ] ; motionData
[ 105 ] = xx [ 37 ] ; motionData [ 106 ] = xx [ 135 ] ; motionData [ 107 ] =
xx [ 136 ] ; motionData [ 108 ] = xx [ 140 ] ; motionData [ 109 ] = xx [ 31 ]
; motionData [ 110 ] = xx [ 46 ] ; motionData [ 111 ] = xx [ 47 ] ;
motionData [ 112 ] = xx [ 143 ] ; motionData [ 113 ] = xx [ 144 ] ;
motionData [ 114 ] = xx [ 148 ] - xx [ 60 ] * state [ 11 ] ; motionData [ 115
] = xx [ 149 ] - xx [ 62 ] * state [ 11 ] ; motionData [ 116 ] = xx [ 150 ] -
xx [ 63 ] * state [ 11 ] ; motionData [ 117 ] = xx [ 145 ] +
5.14166426014702e-4 * state [ 11 ] ; motionData [ 118 ] = xx [ 146 ] -
1.44182428174571e-4 * state [ 11 ] ; motionData [ 119 ] = xx [ 147 ] +
0.02929084861083201 * state [ 11 ] ; motionData [ 120 ] = xx [ 104 ] ;
motionData [ 121 ] = xx [ 105 ] + state [ 13 ] ; motionData [ 122 ] = xx [
106 ] ; motionData [ 123 ] = xx [ 158 ] ; motionData [ 124 ] = xx [ 159 ] ;
motionData [ 125 ] = xx [ 160 ] + xx [ 61 ] * state [ 13 ] ; motionData [ 126
] = xx [ 154 ] ; motionData [ 127 ] = xx [ 83 ] ; motionData [ 128 ] = xx [
85 ] ; motionData [ 129 ] = xx [ 86 ] ; motionData [ 130 ] = xx [ 151 ] ;
motionData [ 131 ] = xx [ 152 ] ; motionData [ 132 ] = xx [ 161 ] + xx [ 99 ]
* state [ 17 ] ; motionData [ 133 ] = xx [ 162 ] + xx [ 101 ] * state [ 17 ]
; motionData [ 134 ] = xx [ 163 ] + xx [ 102 ] * state [ 17 ] ; motionData [
135 ] = xx [ 155 ] - 5.141664260146969e-4 * state [ 17 ] ; motionData [ 136 ]
= xx [ 156 ] + 1.441824281745643e-4 * state [ 17 ] ; motionData [ 137 ] = xx
[ 157 ] - 0.029290848610832 * state [ 17 ] ; motionData [ 138 ] = xx [ 122 ]
; motionData [ 139 ] = xx [ 123 ] + state [ 19 ] ; motionData [ 140 ] = xx [
124 ] ; motionData [ 141 ] = xx [ 168 ] ; motionData [ 142 ] = xx [ 169 ] ;
motionData [ 143 ] = xx [ 170 ] + xx [ 61 ] * state [ 19 ] ; } static size_t
computeAssemblyError_0 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const double * motionData , double * error ) { const double
* rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 19 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; xx [ 0 ] = motionData [ 42 ] ; xx [ 1 ] = motionData [ 43 ] ; xx [ 2 ] =
motionData [ 44 ] ; xx [ 3 ] = motionData [ 45 ] ; xx [ 4 ] = 0.5 ; xx [ 5 ]
= xx [ 4 ] ; xx [ 6 ] = xx [ 4 ] ; xx [ 7 ] = - xx [ 4 ] ; xx [ 8 ] = xx [ 4
] ; pm_math_quatCompose ( xx + 0 , xx + 5 , xx + 9 ) ; xx [ 0 ] = motionData
[ 70 ] ; xx [ 1 ] = motionData [ 71 ] ; xx [ 2 ] = motionData [ 72 ] ; xx [ 3
] = motionData [ 73 ] ; xx [ 4 ] = 0.4364726273338067 ; xx [ 5 ] = -
0.4343746999000736 ; xx [ 6 ] = - 0.5557500659505734 ; xx [ 7 ] = -
0.558526749467721 ; pm_math_quatCompose ( xx + 0 , xx + 4 , xx + 13 ) ;
pm_math_quatInverseCompose ( xx + 9 , xx + 13 , xx + 4 ) ; xx [ 7 ] = -
7.044490589730112e-3 ; xx [ 8 ] = - 6.108478301373796e-3 ; xx [ 9 ] = -
4.589550344615505e-3 ; pm_math_quatXform ( xx + 0 , xx + 7 , xx + 10 ) ; xx [
0 ] = 2.0 ; xx [ 1 ] = motionData [ 43 ] ; xx [ 2 ] = motionData [ 44 ] ; xx
[ 3 ] = motionData [ 45 ] ; xx [ 4 ] = 6.132102448427665e-3 ; xx [ 7 ] = xx [
4 ] * motionData [ 45 ] ; xx [ 8 ] = 0.01309538769594443 ; xx [ 9 ] = xx [ 4
] * motionData [ 43 ] + xx [ 8 ] * motionData [ 44 ] ; xx [ 13 ] = - xx [ 7 ]
; xx [ 14 ] = - ( xx [ 8 ] * motionData [ 45 ] ) ; xx [ 15 ] = xx [ 9 ] ;
pm_math_cross3 ( xx + 1 , xx + 13 , xx + 16 ) ; error [ 0 ] = xx [ 5 ] ;
error [ 1 ] = xx [ 6 ] ; error [ 2 ] = xx [ 10 ] + motionData [ 74 ] - ( xx [
0 ] * ( xx [ 16 ] - xx [ 7 ] * motionData [ 42 ] ) + motionData [ 46 ] ) + xx
[ 8 ] ; error [ 3 ] = xx [ 11 ] + motionData [ 75 ] - ( ( xx [ 17 ] - xx [ 8
] * motionData [ 42 ] * motionData [ 45 ] ) * xx [ 0 ] + motionData [ 47 ] )
- xx [ 4 ] ; error [ 4 ] = xx [ 12 ] + motionData [ 76 ] - ( ( xx [ 9 ] *
motionData [ 42 ] + xx [ 18 ] ) * xx [ 0 ] + motionData [ 48 ] ) ; return 5 ;
} static size_t computeAssemblyError_1 ( const RuntimeDerivedValuesBundle *
rtdv , const double * state , const double * motionData , double * error ) {
const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv
-> mInts . mValues ; double xx [ 19 ] ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) state ; xx [ 0 ] = motionData [ 63 ] ; xx [ 1 ] = motionData [ 64 ] ;
xx [ 2 ] = motionData [ 65 ] ; xx [ 3 ] = motionData [ 66 ] ; xx [ 4 ] = 0.5
; xx [ 5 ] = xx [ 4 ] ; xx [ 6 ] = xx [ 4 ] ; xx [ 7 ] = - xx [ 4 ] ; xx [ 8
] = xx [ 4 ] ; pm_math_quatCompose ( xx + 0 , xx + 5 , xx + 9 ) ; xx [ 0 ] =
motionData [ 77 ] ; xx [ 1 ] = motionData [ 78 ] ; xx [ 2 ] = motionData [ 79
] ; xx [ 3 ] = motionData [ 80 ] ; xx [ 4 ] = 0.4343746999000737 ; xx [ 5 ] =
0.4364726273338065 ; xx [ 6 ] = - 0.5585267494677211 ; xx [ 7 ] =
0.5557500659505735 ; pm_math_quatCompose ( xx + 0 , xx + 4 , xx + 13 ) ;
pm_math_quatInverseCompose ( xx + 9 , xx + 13 , xx + 4 ) ; xx [ 7 ] = -
7.043504602604413e-3 ; xx [ 8 ] = 6.155578060373999e-3 ; xx [ 9 ] = -
4.529198577839576e-3 ; pm_math_quatXform ( xx + 0 , xx + 7 , xx + 10 ) ; xx [
0 ] = 2.0 ; xx [ 1 ] = motionData [ 64 ] ; xx [ 2 ] = motionData [ 65 ] ; xx
[ 3 ] = motionData [ 66 ] ; xx [ 4 ] = 6.132102448427664e-3 ; xx [ 7 ] = xx [
4 ] * motionData [ 66 ] ; xx [ 8 ] = 0.01309538769594443 ; xx [ 9 ] = xx [ 4
] * motionData [ 64 ] + xx [ 8 ] * motionData [ 65 ] ; xx [ 13 ] = - xx [ 7 ]
; xx [ 14 ] = - ( xx [ 8 ] * motionData [ 66 ] ) ; xx [ 15 ] = xx [ 9 ] ;
pm_math_cross3 ( xx + 1 , xx + 13 , xx + 16 ) ; error [ 0 ] = xx [ 5 ] ;
error [ 1 ] = xx [ 6 ] ; error [ 2 ] = xx [ 10 ] + motionData [ 81 ] - ( xx [
0 ] * ( xx [ 16 ] - xx [ 7 ] * motionData [ 63 ] ) + motionData [ 67 ] ) + xx
[ 8 ] ; error [ 3 ] = xx [ 11 ] + motionData [ 82 ] - ( ( xx [ 17 ] - xx [ 8
] * motionData [ 63 ] * motionData [ 66 ] ) * xx [ 0 ] + motionData [ 68 ] )
- xx [ 4 ] ; error [ 4 ] = xx [ 12 ] + motionData [ 83 ] - ( ( xx [ 9 ] *
motionData [ 63 ] + xx [ 18 ] ) * xx [ 0 ] + motionData [ 69 ] ) ; return 5 ;
} size_t closedLoop_toTune_b924f1e8_1_computeAssemblyError ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const
double * state , const double * motionData , double * error ) { ( void ) mech
; ( void ) rtdv ; ( void ) state ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { case 0 : return computeAssemblyError_0 ( rtdv ,
state , motionData , error ) ; case 1 : return computeAssemblyError_1 ( rtdv
, state , motionData , error ) ; } return 0 ; } static size_t
computeAssemblyJacobian_0 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const double * motionData , double * J ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 46 ] ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.0
; xx [ 1 ] = motionData [ 42 ] ; xx [ 2 ] = motionData [ 43 ] ; xx [ 3 ] =
motionData [ 44 ] ; xx [ 4 ] = motionData [ 45 ] ; xx [ 5 ] = 0.5 ; xx [ 6 ]
= xx [ 5 ] ; xx [ 7 ] = xx [ 5 ] ; xx [ 8 ] = - xx [ 5 ] ; xx [ 9 ] = xx [ 5
] ; pm_math_quatCompose ( xx + 1 , xx + 6 , xx + 10 ) ; xx [ 1 ] = motionData
[ 70 ] ; xx [ 2 ] = motionData [ 71 ] ; xx [ 3 ] = motionData [ 72 ] ; xx [ 4
] = motionData [ 73 ] ; xx [ 6 ] = 0.4364726273338067 ; xx [ 7 ] = -
0.4343746999000736 ; xx [ 8 ] = - 0.5557500659505734 ; xx [ 9 ] = -
0.558526749467721 ; pm_math_quatCompose ( xx + 1 , xx + 6 , xx + 14 ) ;
pm_math_quatInverseCompose ( xx + 10 , xx + 14 , xx + 1 ) ; xx [ 10 ] =
motionData [ 35 ] ; xx [ 11 ] = motionData [ 36 ] ; xx [ 12 ] = motionData [
37 ] ; xx [ 13 ] = motionData [ 38 ] ; xx [ 18 ] = 0.07189840968753769 ; xx [
19 ] = 0.9741263695734882 ; xx [ 20 ] = 0.2142625370567126 ;
pm_math_quatInverseXform ( xx + 10 , xx + 18 , xx + 21 ) ;
pm_math_quatInverseXform ( xx + 6 , xx + 21 , xx + 24 ) ; pm_math_quatDeriv (
xx + 1 , xx + 24 , xx + 6 ) ; xx [ 24 ] = - 1.665334536937735e-16 ; xx [ 25 ]
= - 1.110223024625157e-16 ; xx [ 26 ] = - 1.0 ; pm_math_quatDeriv ( xx + 1 ,
xx + 24 , xx + 27 ) ; xx [ 24 ] = 2.0 ; xx [ 31 ] = xx [ 24 ] * ( motionData
[ 43 ] * motionData [ 44 ] - motionData [ 42 ] * motionData [ 45 ] ) ; xx [
32 ] = 1.0 - ( motionData [ 45 ] * motionData [ 45 ] + motionData [ 43 ] *
motionData [ 43 ] ) * xx [ 24 ] ; xx [ 33 ] = ( motionData [ 42 ] *
motionData [ 43 ] + motionData [ 44 ] * motionData [ 45 ] ) * xx [ 24 ] ;
pm_math_quatInverseXform ( xx + 14 , xx + 31 , xx + 34 ) ; xx [ 14 ] = - xx [
34 ] ; xx [ 15 ] = - xx [ 35 ] ; xx [ 16 ] = - xx [ 36 ] ; pm_math_quatDeriv
( xx + 1 , xx + 14 , xx + 31 ) ; xx [ 1 ] = - 0.99302022896367 ; xx [ 2 ] =
0.1066412368322485 ; xx [ 3 ] = - 0.03120900126866927 ; xx [ 4 ] = -
0.03955337805600653 ; xx [ 6 ] = xx [ 5 ] * state [ 8 ] ; xx [ 9 ] = sin ( xx
[ 6 ] ) ; xx [ 14 ] = cos ( xx [ 6 ] ) ; xx [ 15 ] = xx [ 18 ] * xx [ 9 ] ;
xx [ 16 ] = xx [ 19 ] * xx [ 9 ] ; xx [ 17 ] = xx [ 20 ] * xx [ 9 ] ;
pm_math_quatCompose ( xx + 1 , xx + 14 , xx + 34 ) ; pm_math_quatCompose ( xx
+ 34 , xx + 10 , xx + 1 ) ; xx [ 9 ] = - 7.044490589730112e-3 ; xx [ 10 ] = -
6.108478301373796e-3 ; xx [ 11 ] = - 4.589550344615505e-3 ; pm_math_cross3 (
xx + 21 , xx + 9 , xx + 12 ) ; pm_math_quatXform ( xx + 1 , xx + 12 , xx + 9
) ; xx [ 1 ] = motionData [ 39 ] ; xx [ 2 ] = motionData [ 40 ] ; xx [ 3 ] =
motionData [ 41 ] ; pm_math_cross3 ( xx + 18 , xx + 1 , xx + 12 ) ;
pm_math_quatXform ( xx + 34 , xx + 12 , xx + 1 ) ; xx [ 12 ] = -
3.67575678838696e-3 ; xx [ 13 ] = 1.562574744821344e-3 ; xx [ 14 ] = -
5.870667887890738e-3 ; pm_math_quatXform ( xx + 34 , xx + 12 , xx + 15 ) ; xx
[ 18 ] = motionData [ 28 ] ; xx [ 19 ] = motionData [ 29 ] ; xx [ 20 ] =
motionData [ 30 ] ; xx [ 21 ] = motionData [ 31 ] ; xx [ 34 ] =
0.05182593581663095 ; xx [ 35 ] = - 0.1519742715228705 ; xx [ 36 ] = -
0.1034434723147636 ; xx [ 37 ] = 0.981589191671999 ; xx [ 4 ] = xx [ 5 ] *
state [ 10 ] ; xx [ 6 ] = sin ( xx [ 4 ] ) ; xx [ 38 ] = cos ( xx [ 4 ] ) ;
xx [ 39 ] = - ( 8.039551964383884e-5 * xx [ 6 ] ) ; xx [ 40 ] = - (
0.9999878887291287 * xx [ 6 ] ) ; xx [ 41 ] = - ( 4.920968565308881e-3 * xx [
6 ] ) ; pm_math_quatCompose ( xx + 34 , xx + 38 , xx + 42 ) ;
pm_math_quatCompose ( xx + 18 , xx + 42 , xx + 34 ) ; xx [ 12 ] =
4.559435129625171e-3 ; xx [ 13 ] = 3.429673746578918e-5 ; xx [ 14 ] = -
7.043914177709157e-3 ; pm_math_quatXform ( xx + 34 , xx + 12 , xx + 25 ) ; xx
[ 12 ] = 5.14166426014702e-4 ; xx [ 13 ] = - 1.44182428174571e-4 ; xx [ 14 ]
= 0.02929084861083201 ; pm_math_quatXform ( xx + 42 , xx + 12 , xx + 34 ) ;
pm_math_quatXform ( xx + 18 , xx + 34 , xx + 12 ) ; xx [ 4 ] =
6.267148658367121e-8 ; xx [ 6 ] = xx [ 5 ] * state [ 12 ] ; xx [ 5 ] = cos (
xx [ 6 ] ) ; xx [ 18 ] = 6.323084164593961e-8 ; xx [ 19 ] = sin ( xx [ 6 ] )
; xx [ 6 ] = xx [ 4 ] * xx [ 5 ] + xx [ 18 ] * xx [ 19 ] ; xx [ 20 ] =
0.01309538769594443 ; xx [ 21 ] = xx [ 18 ] * xx [ 5 ] - xx [ 4 ] * xx [ 19 ]
; xx [ 4 ] = xx [ 20 ] * xx [ 21 ] ; xx [ 18 ] = 0.9999999999999174 ; xx [ 22
] = 3.964687873836087e-7 ; xx [ 23 ] = xx [ 18 ] * xx [ 19 ] + xx [ 22 ] * xx
[ 5 ] ; xx [ 30 ] = xx [ 23 ] * xx [ 20 ] ; xx [ 20 ] = xx [ 22 ] * xx [ 19 ]
- xx [ 18 ] * xx [ 5 ] ; xx [ 5 ] = 8.748612304055577e-3 ; xx [ 18 ] = xx [ 5
] * xx [ 21 ] ; xx [ 19 ] = xx [ 23 ] * xx [ 5 ] ; J [ 4 ] = xx [ 7 ] ; J [ 5
] = xx [ 28 ] ; J [ 6 ] = xx [ 32 ] ; J [ 14 ] = xx [ 8 ] ; J [ 15 ] = xx [
29 ] ; J [ 16 ] = xx [ 33 ] ; J [ 24 ] = xx [ 9 ] + xx [ 1 ] + xx [ 15 ] ; J
[ 25 ] = xx [ 25 ] + xx [ 12 ] ; J [ 26 ] = - ( ( xx [ 6 ] * xx [ 4 ] - xx [
30 ] * xx [ 20 ] ) * xx [ 24 ] + ( xx [ 6 ] * xx [ 18 ] - xx [ 19 ] * xx [ 20
] ) * xx [ 24 ] ) ; J [ 34 ] = xx [ 10 ] + xx [ 2 ] + xx [ 16 ] ; J [ 35 ] =
xx [ 26 ] + xx [ 13 ] ; J [ 36 ] = xx [ 24 ] * ( xx [ 6 ] * xx [ 30 ] + xx [
4 ] * xx [ 20 ] ) + xx [ 24 ] * ( xx [ 6 ] * xx [ 19 ] + xx [ 18 ] * xx [ 20
] ) ; J [ 44 ] = xx [ 11 ] + xx [ 3 ] + xx [ 17 ] ; J [ 45 ] = xx [ 27 ] + xx
[ 14 ] ; J [ 46 ] = ( xx [ 4 ] * xx [ 21 ] + xx [ 23 ] * xx [ 30 ] ) * xx [
24 ] + ( xx [ 18 ] * xx [ 21 ] + xx [ 23 ] * xx [ 19 ] ) * xx [ 24 ] -
0.021844 ; return 5 ; } static size_t computeAssemblyJacobian_1 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const double *
motionData , double * J ) { const double * rtdvd = rtdv -> mDoubles . mValues
; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 45 ] ; ( void )
rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.0 ; xx [ 1 ] = motionData [ 63 ] ; xx [
2 ] = motionData [ 64 ] ; xx [ 3 ] = motionData [ 65 ] ; xx [ 4 ] =
motionData [ 66 ] ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] ; xx [ 7 ] = xx [ 5
] ; xx [ 8 ] = - xx [ 5 ] ; xx [ 9 ] = xx [ 5 ] ; pm_math_quatCompose ( xx +
1 , xx + 6 , xx + 10 ) ; xx [ 1 ] = motionData [ 77 ] ; xx [ 2 ] = motionData
[ 78 ] ; xx [ 3 ] = motionData [ 79 ] ; xx [ 4 ] = motionData [ 80 ] ; xx [ 6
] = 0.4343746999000737 ; xx [ 7 ] = 0.4364726273338065 ; xx [ 8 ] = -
0.5585267494677211 ; xx [ 9 ] = 0.5557500659505735 ; pm_math_quatCompose ( xx
+ 1 , xx + 6 , xx + 14 ) ; pm_math_quatInverseCompose ( xx + 10 , xx + 14 ,
xx + 1 ) ; xx [ 10 ] = motionData [ 56 ] ; xx [ 11 ] = motionData [ 57 ] ; xx
[ 12 ] = motionData [ 58 ] ; xx [ 13 ] = motionData [ 59 ] ; xx [ 18 ] =
0.07189841740695141 ; xx [ 19 ] = 0.9741263571870624 ; xx [ 20 ] =
0.2142625907801925 ; xx [ 21 ] = xx [ 18 ] ; xx [ 22 ] = xx [ 19 ] ; xx [ 23
] = - xx [ 20 ] ; pm_math_quatInverseXform ( xx + 10 , xx + 21 , xx + 24 ) ;
pm_math_quatInverseXform ( xx + 6 , xx + 24 , xx + 27 ) ; pm_math_quatDeriv (
xx + 1 , xx + 27 , xx + 6 ) ; xx [ 27 ] = 3.33066907387547e-16 ; xx [ 28 ] =
- 2.220446049250313e-16 ; xx [ 29 ] = - 1.0 ; pm_math_quatDeriv ( xx + 1 , xx
+ 27 , xx + 30 ) ; xx [ 27 ] = 2.0 ; xx [ 34 ] = xx [ 27 ] * ( motionData [
64 ] * motionData [ 65 ] - motionData [ 63 ] * motionData [ 66 ] ) ; xx [ 35
] = 1.0 - ( motionData [ 66 ] * motionData [ 66 ] + motionData [ 64 ] *
motionData [ 64 ] ) * xx [ 27 ] ; xx [ 36 ] = ( motionData [ 63 ] *
motionData [ 64 ] + motionData [ 65 ] * motionData [ 66 ] ) * xx [ 27 ] ;
pm_math_quatInverseXform ( xx + 14 , xx + 34 , xx + 37 ) ; xx [ 14 ] = - xx [
37 ] ; xx [ 15 ] = - xx [ 38 ] ; xx [ 16 ] = - xx [ 39 ] ; pm_math_quatDeriv
( xx + 1 , xx + 14 , xx + 34 ) ; xx [ 1 ] = - 0.993020263593104 ; xx [ 2 ] =
- 0.1066411692347894 ; xx [ 3 ] = 0.03120822428610398 ; xx [ 4 ] = -
0.03955330396602025 ; xx [ 6 ] = xx [ 5 ] * state [ 14 ] ; xx [ 9 ] = sin (
xx [ 6 ] ) ; xx [ 14 ] = cos ( xx [ 6 ] ) ; xx [ 15 ] = xx [ 18 ] * xx [ 9 ]
; xx [ 16 ] = xx [ 19 ] * xx [ 9 ] ; xx [ 17 ] = - ( xx [ 20 ] * xx [ 9 ] ) ;
pm_math_quatCompose ( xx + 1 , xx + 14 , xx + 37 ) ; pm_math_quatCompose ( xx
+ 37 , xx + 10 , xx + 1 ) ; xx [ 9 ] = - 7.043504602604413e-3 ; xx [ 10 ] =
6.155578060373999e-3 ; xx [ 11 ] = - 4.529198577839576e-3 ; pm_math_cross3 (
xx + 24 , xx + 9 , xx + 12 ) ; pm_math_quatXform ( xx + 1 , xx + 12 , xx + 9
) ; xx [ 1 ] = motionData [ 60 ] ; xx [ 2 ] = motionData [ 61 ] ; xx [ 3 ] =
motionData [ 62 ] ; pm_math_cross3 ( xx + 21 , xx + 1 , xx + 12 ) ;
pm_math_quatXform ( xx + 37 , xx + 12 , xx + 1 ) ; xx [ 12 ] =
3.6757564094702e-3 ; xx [ 13 ] = - 1.562574919455121e-3 ; xx [ 14 ] = -
5.870667114245509e-3 ; pm_math_quatXform ( xx + 37 , xx + 12 , xx + 15 ) ; xx
[ 18 ] = motionData [ 49 ] ; xx [ 19 ] = motionData [ 50 ] ; xx [ 20 ] =
motionData [ 51 ] ; xx [ 21 ] = motionData [ 52 ] ; xx [ 22 ] = -
0.9815891861559222 ; xx [ 23 ] = 0.1034434979269754 ; xx [ 24 ] = -
0.1519742864170317 ; xx [ 25 ] = 0.05182594549470909 ; xx [ 4 ] = xx [ 5 ] *
state [ 16 ] ; xx [ 6 ] = sin ( xx [ 4 ] ) ; xx [ 37 ] = cos ( xx [ 4 ] ) ;
xx [ 38 ] = 8.039551964356129e-5 * xx [ 6 ] ; xx [ 39 ] = 0.9999878887291285
* xx [ 6 ] ; xx [ 40 ] = 4.920968565308659e-3 * xx [ 6 ] ;
pm_math_quatCompose ( xx + 22 , xx + 37 , xx + 41 ) ; pm_math_quatCompose (
xx + 18 , xx + 41 , xx + 22 ) ; xx [ 12 ] = - 4.559435129625173e-3 ; xx [ 13
] = - 3.429673746578889e-5 ; xx [ 14 ] = 7.043914177709156e-3 ;
pm_math_quatXform ( xx + 22 , xx + 12 , xx + 28 ) ; xx [ 12 ] = -
5.141664260146969e-4 ; xx [ 13 ] = 1.441824281745643e-4 ; xx [ 14 ] = -
0.029290848610832 ; pm_math_quatXform ( xx + 41 , xx + 12 , xx + 22 ) ;
pm_math_quatXform ( xx + 18 , xx + 22 , xx + 12 ) ; xx [ 4 ] =
6.267148658367121e-8 ; xx [ 6 ] = xx [ 5 ] * state [ 18 ] ; xx [ 5 ] = cos (
xx [ 6 ] ) ; xx [ 18 ] = 6.323084164593961e-8 ; xx [ 19 ] = sin ( xx [ 6 ] )
; xx [ 6 ] = xx [ 4 ] * xx [ 5 ] + xx [ 18 ] * xx [ 19 ] ; xx [ 20 ] =
0.01309538769594443 ; xx [ 21 ] = xx [ 18 ] * xx [ 5 ] - xx [ 4 ] * xx [ 19 ]
; xx [ 4 ] = xx [ 20 ] * xx [ 21 ] ; xx [ 18 ] = 0.9999999999999174 ; xx [ 22
] = 3.964687873836087e-7 ; xx [ 23 ] = xx [ 18 ] * xx [ 19 ] + xx [ 22 ] * xx
[ 5 ] ; xx [ 24 ] = xx [ 23 ] * xx [ 20 ] ; xx [ 20 ] = xx [ 22 ] * xx [ 19 ]
- xx [ 18 ] * xx [ 5 ] ; xx [ 5 ] = 8.748612304055577e-3 ; xx [ 18 ] = xx [ 5
] * xx [ 21 ] ; xx [ 19 ] = xx [ 23 ] * xx [ 5 ] ; J [ 7 ] = xx [ 7 ] ; J [ 8
] = xx [ 31 ] ; J [ 9 ] = xx [ 35 ] ; J [ 17 ] = xx [ 8 ] ; J [ 18 ] = xx [
32 ] ; J [ 19 ] = xx [ 36 ] ; J [ 27 ] = xx [ 9 ] + xx [ 1 ] + xx [ 15 ] ; J
[ 28 ] = xx [ 28 ] + xx [ 12 ] ; J [ 29 ] = - ( ( xx [ 6 ] * xx [ 4 ] - xx [
24 ] * xx [ 20 ] ) * xx [ 27 ] + ( xx [ 6 ] * xx [ 18 ] - xx [ 19 ] * xx [ 20
] ) * xx [ 27 ] ) ; J [ 37 ] = xx [ 10 ] + xx [ 2 ] + xx [ 16 ] ; J [ 38 ] =
xx [ 29 ] + xx [ 13 ] ; J [ 39 ] = xx [ 27 ] * ( xx [ 6 ] * xx [ 24 ] + xx [
4 ] * xx [ 20 ] ) + xx [ 27 ] * ( xx [ 6 ] * xx [ 19 ] + xx [ 18 ] * xx [ 20
] ) ; J [ 47 ] = xx [ 11 ] + xx [ 3 ] + xx [ 17 ] ; J [ 48 ] = xx [ 30 ] + xx
[ 14 ] ; J [ 49 ] = ( xx [ 4 ] * xx [ 21 ] + xx [ 23 ] * xx [ 24 ] ) * xx [
27 ] + ( xx [ 18 ] * xx [ 21 ] + xx [ 23 ] * xx [ 19 ] ) * xx [ 27 ] -
0.021844 ; return 5 ; } size_t
closedLoop_toTune_b924f1e8_1_computeAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const double * motionData ,
double * J ) { ( void ) mech ; ( void ) rtdv ; ( void ) state ; ( void )
forVelocitySatisfaction ; ( void ) motionData ; ( void ) J ; switch (
constraintIdx ) { case 0 : return computeAssemblyJacobian_0 ( rtdv , state ,
motionData , J ) ; case 1 : return computeAssemblyJacobian_1 ( rtdv , state ,
motionData , J ) ; } return 0 ; } size_t
closedLoop_toTune_b924f1e8_1_computeFullAssemblyJacobian ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , const double * state , const
double * motionData , double * J ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 80 ] ;
( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.0 ; xx [ 1 ] =
motionData [ 42 ] ; xx [ 2 ] = motionData [ 43 ] ; xx [ 3 ] = motionData [ 44
] ; xx [ 4 ] = motionData [ 45 ] ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] ; xx
[ 7 ] = xx [ 5 ] ; xx [ 8 ] = - xx [ 5 ] ; xx [ 9 ] = xx [ 5 ] ;
pm_math_quatCompose ( xx + 1 , xx + 6 , xx + 10 ) ; xx [ 1 ] = motionData [
70 ] ; xx [ 2 ] = motionData [ 71 ] ; xx [ 3 ] = motionData [ 72 ] ; xx [ 4 ]
= motionData [ 73 ] ; xx [ 14 ] = 0.4364726273338067 ; xx [ 15 ] = -
0.4343746999000736 ; xx [ 16 ] = - 0.5557500659505734 ; xx [ 17 ] = -
0.558526749467721 ; pm_math_quatCompose ( xx + 1 , xx + 14 , xx + 18 ) ;
pm_math_quatInverseCompose ( xx + 10 , xx + 18 , xx + 1 ) ; xx [ 10 ] =
motionData [ 35 ] ; xx [ 11 ] = motionData [ 36 ] ; xx [ 12 ] = motionData [
37 ] ; xx [ 13 ] = motionData [ 38 ] ; xx [ 22 ] = 0.07189840968753769 ; xx [
23 ] = 0.9741263695734882 ; xx [ 24 ] = 0.2142625370567126 ;
pm_math_quatInverseXform ( xx + 10 , xx + 22 , xx + 25 ) ;
pm_math_quatInverseXform ( xx + 14 , xx + 25 , xx + 28 ) ; pm_math_quatDeriv
( xx + 1 , xx + 28 , xx + 14 ) ; xx [ 28 ] = - 1.0 ; xx [ 29 ] = -
1.665334536937735e-16 ; xx [ 30 ] = - 1.110223024625157e-16 ; xx [ 31 ] = xx
[ 28 ] ; pm_math_quatDeriv ( xx + 1 , xx + 29 , xx + 32 ) ; xx [ 29 ] = 2.0 ;
xx [ 30 ] = 1.0 ; xx [ 36 ] = xx [ 29 ] * ( motionData [ 43 ] * motionData [
44 ] - motionData [ 42 ] * motionData [ 45 ] ) ; xx [ 37 ] = xx [ 30 ] - (
motionData [ 45 ] * motionData [ 45 ] + motionData [ 43 ] * motionData [ 43 ]
) * xx [ 29 ] ; xx [ 38 ] = ( motionData [ 42 ] * motionData [ 43 ] +
motionData [ 44 ] * motionData [ 45 ] ) * xx [ 29 ] ;
pm_math_quatInverseXform ( xx + 18 , xx + 36 , xx + 39 ) ; xx [ 18 ] = - xx [
39 ] ; xx [ 19 ] = - xx [ 40 ] ; xx [ 20 ] = - xx [ 41 ] ; pm_math_quatDeriv
( xx + 1 , xx + 18 , xx + 36 ) ; xx [ 1 ] = - 0.99302022896367 ; xx [ 2 ] =
0.1066412368322485 ; xx [ 3 ] = - 0.03120900126866927 ; xx [ 4 ] = -
0.03955337805600653 ; xx [ 14 ] = xx [ 5 ] * state [ 8 ] ; xx [ 17 ] = sin (
xx [ 14 ] ) ; xx [ 18 ] = cos ( xx [ 14 ] ) ; xx [ 19 ] = xx [ 22 ] * xx [ 17
] ; xx [ 20 ] = xx [ 23 ] * xx [ 17 ] ; xx [ 21 ] = xx [ 24 ] * xx [ 17 ] ;
pm_math_quatCompose ( xx + 1 , xx + 18 , xx + 39 ) ; pm_math_quatCompose ( xx
+ 39 , xx + 10 , xx + 1 ) ; xx [ 10 ] = - 7.044490589730112e-3 ; xx [ 11 ] =
- 6.108478301373796e-3 ; xx [ 12 ] = - 4.589550344615505e-3 ; pm_math_cross3
( xx + 25 , xx + 10 , xx + 17 ) ; pm_math_quatXform ( xx + 1 , xx + 17 , xx +
10 ) ; xx [ 1 ] = motionData [ 39 ] ; xx [ 2 ] = motionData [ 40 ] ; xx [ 3 ]
= motionData [ 41 ] ; pm_math_cross3 ( xx + 22 , xx + 1 , xx + 17 ) ;
pm_math_quatXform ( xx + 39 , xx + 17 , xx + 1 ) ; xx [ 17 ] = -
3.67575678838696e-3 ; xx [ 18 ] = 1.562574744821344e-3 ; xx [ 19 ] = -
5.870667887890738e-3 ; pm_math_quatXform ( xx + 39 , xx + 17 , xx + 20 ) ; xx
[ 23 ] = motionData [ 28 ] ; xx [ 24 ] = motionData [ 29 ] ; xx [ 25 ] =
motionData [ 30 ] ; xx [ 26 ] = motionData [ 31 ] ; xx [ 39 ] =
0.05182593581663095 ; xx [ 40 ] = - 0.1519742715228705 ; xx [ 41 ] = -
0.1034434723147636 ; xx [ 42 ] = 0.981589191671999 ; xx [ 4 ] = xx [ 5 ] *
state [ 10 ] ; xx [ 13 ] = sin ( xx [ 4 ] ) ; xx [ 43 ] = cos ( xx [ 4 ] ) ;
xx [ 44 ] = - ( 8.039551964383884e-5 * xx [ 13 ] ) ; xx [ 45 ] = - (
0.9999878887291287 * xx [ 13 ] ) ; xx [ 46 ] = - ( 4.920968565308881e-3 * xx
[ 13 ] ) ; pm_math_quatCompose ( xx + 39 , xx + 43 , xx + 47 ) ;
pm_math_quatCompose ( xx + 23 , xx + 47 , xx + 39 ) ; xx [ 17 ] =
4.559435129625171e-3 ; xx [ 18 ] = 3.429673746578918e-5 ; xx [ 19 ] = -
7.043914177709157e-3 ; pm_math_quatXform ( xx + 39 , xx + 17 , xx + 43 ) ; xx
[ 17 ] = 5.14166426014702e-4 ; xx [ 18 ] = - 1.44182428174571e-4 ; xx [ 19 ]
= 0.02929084861083201 ; pm_math_quatXform ( xx + 47 , xx + 17 , xx + 39 ) ;
pm_math_quatXform ( xx + 23 , xx + 39 , xx + 17 ) ; xx [ 4 ] =
6.267148658367121e-8 ; xx [ 13 ] = xx [ 5 ] * state [ 12 ] ; xx [ 14 ] = cos
( xx [ 13 ] ) ; xx [ 23 ] = 6.323084164593961e-8 ; xx [ 24 ] = sin ( xx [ 13
] ) ; xx [ 13 ] = xx [ 4 ] * xx [ 14 ] + xx [ 23 ] * xx [ 24 ] ; xx [ 25 ] =
0.01309538769594443 ; xx [ 26 ] = xx [ 23 ] * xx [ 14 ] - xx [ 4 ] * xx [ 24
] ; xx [ 27 ] = xx [ 25 ] * xx [ 26 ] ; xx [ 31 ] = 0.9999999999999174 ; xx [
32 ] = 3.964687873836087e-7 ; xx [ 35 ] = xx [ 31 ] * xx [ 24 ] + xx [ 32 ] *
xx [ 14 ] ; xx [ 36 ] = xx [ 35 ] * xx [ 25 ] ; xx [ 39 ] = xx [ 32 ] * xx [
24 ] - xx [ 31 ] * xx [ 14 ] ; xx [ 14 ] = 8.748612304055577e-3 ; xx [ 24 ] =
xx [ 14 ] * xx [ 26 ] ; xx [ 40 ] = xx [ 35 ] * xx [ 14 ] ; xx [ 41 ] =
0.021844 ; xx [ 46 ] = motionData [ 63 ] ; xx [ 47 ] = motionData [ 64 ] ; xx
[ 48 ] = motionData [ 65 ] ; xx [ 49 ] = motionData [ 66 ] ;
pm_math_quatCompose ( xx + 46 , xx + 6 , xx + 50 ) ; xx [ 6 ] = motionData [
77 ] ; xx [ 7 ] = motionData [ 78 ] ; xx [ 8 ] = motionData [ 79 ] ; xx [ 9 ]
= motionData [ 80 ] ; xx [ 46 ] = 0.4343746999000737 ; xx [ 47 ] =
0.4364726273338065 ; xx [ 48 ] = - 0.5585267494677211 ; xx [ 49 ] =
0.5557500659505735 ; pm_math_quatCompose ( xx + 6 , xx + 46 , xx + 54 ) ;
pm_math_quatInverseCompose ( xx + 50 , xx + 54 , xx + 6 ) ; xx [ 50 ] =
motionData [ 56 ] ; xx [ 51 ] = motionData [ 57 ] ; xx [ 52 ] = motionData [
58 ] ; xx [ 53 ] = motionData [ 59 ] ; xx [ 42 ] = 0.07189841740695141 ; xx [
58 ] = 0.9741263571870624 ; xx [ 59 ] = 0.2142625907801925 ; xx [ 60 ] = xx [
42 ] ; xx [ 61 ] = xx [ 58 ] ; xx [ 62 ] = - xx [ 59 ] ;
pm_math_quatInverseXform ( xx + 50 , xx + 60 , xx + 63 ) ;
pm_math_quatInverseXform ( xx + 46 , xx + 63 , xx + 66 ) ; pm_math_quatDeriv
( xx + 6 , xx + 66 , xx + 46 ) ; xx [ 66 ] = 3.33066907387547e-16 ; xx [ 67 ]
= - 2.220446049250313e-16 ; xx [ 68 ] = xx [ 28 ] ; pm_math_quatDeriv ( xx +
6 , xx + 66 , xx + 69 ) ; xx [ 66 ] = xx [ 29 ] * ( motionData [ 64 ] *
motionData [ 65 ] - motionData [ 63 ] * motionData [ 66 ] ) ; xx [ 67 ] = xx
[ 30 ] - ( motionData [ 66 ] * motionData [ 66 ] + motionData [ 64 ] *
motionData [ 64 ] ) * xx [ 29 ] ; xx [ 68 ] = ( motionData [ 63 ] *
motionData [ 64 ] + motionData [ 65 ] * motionData [ 66 ] ) * xx [ 29 ] ;
pm_math_quatInverseXform ( xx + 54 , xx + 66 , xx + 73 ) ; xx [ 54 ] = - xx [
73 ] ; xx [ 55 ] = - xx [ 74 ] ; xx [ 56 ] = - xx [ 75 ] ; pm_math_quatDeriv
( xx + 6 , xx + 54 , xx + 73 ) ; xx [ 6 ] = - 0.993020263593104 ; xx [ 7 ] =
- 0.1066411692347894 ; xx [ 8 ] = 0.03120822428610398 ; xx [ 9 ] = -
0.03955330396602025 ; xx [ 28 ] = xx [ 5 ] * state [ 14 ] ; xx [ 30 ] = sin (
xx [ 28 ] ) ; xx [ 54 ] = cos ( xx [ 28 ] ) ; xx [ 55 ] = xx [ 42 ] * xx [ 30
] ; xx [ 56 ] = xx [ 58 ] * xx [ 30 ] ; xx [ 57 ] = - ( xx [ 59 ] * xx [ 30 ]
) ; pm_math_quatCompose ( xx + 6 , xx + 54 , xx + 66 ) ; pm_math_quatCompose
( xx + 66 , xx + 50 , xx + 6 ) ; xx [ 49 ] = - 7.043504602604413e-3 ; xx [ 50
] = 6.155578060373999e-3 ; xx [ 51 ] = - 4.529198577839576e-3 ;
pm_math_cross3 ( xx + 63 , xx + 49 , xx + 52 ) ; pm_math_quatXform ( xx + 6 ,
xx + 52 , xx + 49 ) ; xx [ 6 ] = motionData [ 60 ] ; xx [ 7 ] = motionData [
61 ] ; xx [ 8 ] = motionData [ 62 ] ; pm_math_cross3 ( xx + 60 , xx + 6 , xx
+ 52 ) ; pm_math_quatXform ( xx + 66 , xx + 52 , xx + 6 ) ; xx [ 52 ] =
3.6757564094702e-3 ; xx [ 53 ] = - 1.562574919455121e-3 ; xx [ 54 ] = -
5.870667114245509e-3 ; pm_math_quatXform ( xx + 66 , xx + 52 , xx + 55 ) ; xx
[ 58 ] = motionData [ 49 ] ; xx [ 59 ] = motionData [ 50 ] ; xx [ 60 ] =
motionData [ 51 ] ; xx [ 61 ] = motionData [ 52 ] ; xx [ 62 ] = -
0.9815891861559222 ; xx [ 63 ] = 0.1034434979269754 ; xx [ 64 ] = -
0.1519742864170317 ; xx [ 65 ] = 0.05182594549470909 ; xx [ 9 ] = xx [ 5 ] *
state [ 16 ] ; xx [ 28 ] = sin ( xx [ 9 ] ) ; xx [ 66 ] = cos ( xx [ 9 ] ) ;
xx [ 67 ] = 8.039551964356129e-5 * xx [ 28 ] ; xx [ 68 ] = 0.9999878887291285
* xx [ 28 ] ; xx [ 69 ] = 4.920968565308659e-3 * xx [ 28 ] ;
pm_math_quatCompose ( xx + 62 , xx + 66 , xx + 76 ) ; pm_math_quatCompose (
xx + 58 , xx + 76 , xx + 62 ) ; xx [ 52 ] = - 4.559435129625173e-3 ; xx [ 53
] = - 3.429673746578889e-5 ; xx [ 54 ] = 7.043914177709156e-3 ;
pm_math_quatXform ( xx + 62 , xx + 52 , xx + 66 ) ; xx [ 52 ] = -
5.141664260146969e-4 ; xx [ 53 ] = 1.441824281745643e-4 ; xx [ 54 ] = -
0.029290848610832 ; pm_math_quatXform ( xx + 76 , xx + 52 , xx + 62 ) ;
pm_math_quatXform ( xx + 58 , xx + 62 , xx + 52 ) ; xx [ 9 ] = xx [ 5 ] *
state [ 18 ] ; xx [ 5 ] = cos ( xx [ 9 ] ) ; xx [ 28 ] = sin ( xx [ 9 ] ) ;
xx [ 9 ] = xx [ 4 ] * xx [ 5 ] + xx [ 23 ] * xx [ 28 ] ; xx [ 30 ] = xx [ 23
] * xx [ 5 ] - xx [ 4 ] * xx [ 28 ] ; xx [ 4 ] = xx [ 25 ] * xx [ 30 ] ; xx [
23 ] = xx [ 31 ] * xx [ 28 ] + xx [ 32 ] * xx [ 5 ] ; xx [ 42 ] = xx [ 23 ] *
xx [ 25 ] ; xx [ 25 ] = xx [ 32 ] * xx [ 28 ] - xx [ 31 ] * xx [ 5 ] ; xx [ 5
] = xx [ 14 ] * xx [ 30 ] ; xx [ 28 ] = xx [ 23 ] * xx [ 14 ] ; J [ 4 ] = xx
[ 15 ] ; J [ 5 ] = xx [ 33 ] ; J [ 6 ] = xx [ 37 ] ; J [ 14 ] = xx [ 16 ] ; J
[ 15 ] = xx [ 34 ] ; J [ 16 ] = xx [ 38 ] ; J [ 24 ] = xx [ 10 ] + xx [ 1 ] +
xx [ 20 ] ; J [ 25 ] = xx [ 43 ] + xx [ 17 ] ; J [ 26 ] = - ( ( xx [ 13 ] *
xx [ 27 ] - xx [ 36 ] * xx [ 39 ] ) * xx [ 29 ] + ( xx [ 13 ] * xx [ 24 ] -
xx [ 40 ] * xx [ 39 ] ) * xx [ 29 ] ) ; J [ 34 ] = xx [ 11 ] + xx [ 2 ] + xx
[ 21 ] ; J [ 35 ] = xx [ 44 ] + xx [ 18 ] ; J [ 36 ] = xx [ 29 ] * ( xx [ 13
] * xx [ 36 ] + xx [ 27 ] * xx [ 39 ] ) + xx [ 29 ] * ( xx [ 13 ] * xx [ 40 ]
+ xx [ 24 ] * xx [ 39 ] ) ; J [ 44 ] = xx [ 12 ] + xx [ 3 ] + xx [ 22 ] ; J [
45 ] = xx [ 45 ] + xx [ 19 ] ; J [ 46 ] = ( xx [ 27 ] * xx [ 26 ] + xx [ 35 ]
* xx [ 36 ] ) * xx [ 29 ] + ( xx [ 24 ] * xx [ 26 ] + xx [ 35 ] * xx [ 40 ] )
* xx [ 29 ] - xx [ 41 ] ; J [ 57 ] = xx [ 47 ] ; J [ 58 ] = xx [ 70 ] ; J [
59 ] = xx [ 74 ] ; J [ 67 ] = xx [ 48 ] ; J [ 68 ] = xx [ 71 ] ; J [ 69 ] =
xx [ 75 ] ; J [ 77 ] = xx [ 49 ] + xx [ 6 ] + xx [ 55 ] ; J [ 78 ] = xx [ 66
] + xx [ 52 ] ; J [ 79 ] = - ( ( xx [ 9 ] * xx [ 4 ] - xx [ 42 ] * xx [ 25 ]
) * xx [ 29 ] + ( xx [ 9 ] * xx [ 5 ] - xx [ 28 ] * xx [ 25 ] ) * xx [ 29 ] )
; J [ 87 ] = xx [ 50 ] + xx [ 7 ] + xx [ 56 ] ; J [ 88 ] = xx [ 67 ] + xx [
53 ] ; J [ 89 ] = xx [ 29 ] * ( xx [ 9 ] * xx [ 42 ] + xx [ 4 ] * xx [ 25 ] )
+ xx [ 29 ] * ( xx [ 9 ] * xx [ 28 ] + xx [ 5 ] * xx [ 25 ] ) ; J [ 97 ] = xx
[ 51 ] + xx [ 8 ] + xx [ 57 ] ; J [ 98 ] = xx [ 68 ] + xx [ 54 ] ; J [ 99 ] =
( xx [ 4 ] * xx [ 30 ] + xx [ 23 ] * xx [ 42 ] ) * xx [ 29 ] + ( xx [ 5 ] *
xx [ 30 ] + xx [ 23 ] * xx [ 28 ] ) * xx [ 29 ] - xx [ 41 ] ; return 10 ; }
static int isInKinematicSingularity_0 ( const RuntimeDerivedValuesBundle *
rtdv , const double * motionData ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) motionData ; return 0 ; } static int
isInKinematicSingularity_1 ( const RuntimeDerivedValuesBundle * rtdv , const
double * motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ;
const int * rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi
; ( void ) motionData ; return 0 ; } int
closedLoop_toTune_b924f1e8_1_isInKinematicSingularity ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const double
* motionData ) { ( void ) mech ; ( void ) rtdv ; ( void ) motionData ; switch
( constraintIdx ) { case 0 : return isInKinematicSingularity_0 ( rtdv ,
motionData ) ; case 1 : return isInKinematicSingularity_1 ( rtdv , motionData
) ; } return 0 ; } PmfMessageId
closedLoop_toTune_b924f1e8_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double
* asmState , double * simState , void * neDiagMgr0 ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) asmMech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) simMech ; ( void
) neDiagMgr ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1
] ; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ;
simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState
[ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] =
asmState [ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState
[ 10 ] ; simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12
] ; simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] = asmState [ 14 ] ;
simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] = asmState [ 16 ] ;
simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] = asmState [ 18 ] ;
simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] = asmState [ 20 ] ;
simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] = asmState [ 22 ] ;
simState [ 23 ] = asmState [ 23 ] ; return NULL ; } void
closedLoop_toTune_b924f1e8_1_constructStateVector ( const void * mech , const
double * solverState , const double * u , const double * uDot , double *
discreteState , double * fullState ) { ( void ) mech ; ( void ) u ; ( void )
uDot ; ( void ) discreteState ; fullState [ 0 ] = solverState [ 0 ] ;
fullState [ 1 ] = solverState [ 1 ] ; fullState [ 2 ] = solverState [ 2 ] ;
fullState [ 3 ] = solverState [ 3 ] ; fullState [ 4 ] = solverState [ 4 ] ;
fullState [ 5 ] = solverState [ 5 ] ; fullState [ 6 ] = solverState [ 6 ] ;
fullState [ 7 ] = solverState [ 7 ] ; fullState [ 8 ] = solverState [ 8 ] ;
fullState [ 9 ] = solverState [ 9 ] ; fullState [ 10 ] = solverState [ 10 ] ;
fullState [ 11 ] = solverState [ 11 ] ; fullState [ 12 ] = solverState [ 12 ]
; fullState [ 13 ] = solverState [ 13 ] ; fullState [ 14 ] = solverState [ 14
] ; fullState [ 15 ] = solverState [ 15 ] ; fullState [ 16 ] = solverState [
16 ] ; fullState [ 17 ] = solverState [ 17 ] ; fullState [ 18 ] = solverState
[ 18 ] ; fullState [ 19 ] = solverState [ 19 ] ; fullState [ 20 ] =
solverState [ 20 ] ; fullState [ 21 ] = solverState [ 21 ] ; fullState [ 22 ]
= solverState [ 22 ] ; fullState [ 23 ] = solverState [ 23 ] ; } void
closedLoop_toTune_b924f1e8_1_extractSolverStateVector ( const void * mech ,
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
] = fullState [ 23 ] ; } int closedLoop_toTune_b924f1e8_1_isPositionViolation
( const void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
eqnEnableFlags , const double * state ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii [ 3
] ; double xx [ 58 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) eqnEnableFlags ; xx [ 0 ] = - 0.99302022896367 ; xx [ 1 ] =
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
pm_math_cross3 ( xx + 46 , xx + 49 , xx + 55 ) ; xx [ 46 ] = fabs ( xx [ 8 ]
+ xx [ 5 ] - xx [ 15 ] - ( xx [ 0 ] * ( xx [ 31 ] - xx [ 24 ] * xx [ 23 ] ) -
xx [ 0 ] * ( xx [ 37 ] + xx [ 12 ] * xx [ 23 ] ) ) + 1.390950249792803e-3 ) ;
xx [ 47 ] = fabs ( xx [ 9 ] + xx [ 6 ] - xx [ 16 ] - ( ( xx [ 32 ] - xx [ 26
] * xx [ 23 ] ) * xx [ 0 ] - ( xx [ 29 ] * xx [ 23 ] + xx [ 38 ] ) * xx [ 0 ]
) - 0.0153122030499485 ) ; xx [ 48 ] = fabs ( xx [ 10 ] + xx [ 7 ] - xx [ 17
] - ( ( xx [ 27 ] * xx [ 23 ] + xx [ 33 ] ) * xx [ 0 ] - ( xx [ 19 ] * xx [
23 ] + xx [ 39 ] ) * xx [ 0 ] ) - 5.667629212745225e-3 ) ; xx [ 49 ] = fabs (
xx [ 34 ] + xx [ 40 ] - xx [ 43 ] - ( xx [ 0 ] * ( xx [ 52 ] - xx [ 11 ] * xx
[ 1 ] ) - xx [ 0 ] * ( xx [ 55 ] + xx [ 4 ] * xx [ 1 ] ) ) +
1.390959237970934e-3 ) ; xx [ 50 ] = fabs ( xx [ 35 ] + xx [ 41 ] - xx [ 44 ]
- ( ( xx [ 53 ] - xx [ 21 ] * xx [ 1 ] ) * xx [ 0 ] - ( xx [ 13 ] * xx [ 1 ]
+ xx [ 56 ] ) * xx [ 0 ] ) - 0.01531220161646909 ) ; xx [ 51 ] = fabs ( xx [
36 ] + xx [ 42 ] - xx [ 45 ] - ( ( xx [ 22 ] * xx [ 1 ] + xx [ 54 ] ) * xx [
0 ] - ( xx [ 14 ] * xx [ 1 ] + xx [ 57 ] ) * xx [ 0 ] ) +
5.667661648721102e-3 ) ; ii [ 0 ] = 46 ; { int ll ; for ( ll = 47 ; ll < 52 ;
++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 46 ;
xx [ 0 ] = xx [ 46 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - 1.0e-9 ; if ( xx
[ 1 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 1 ] > 0.0 ) ii [ 0 ] = + 1 ;
else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ;
return ii [ 1 ] ; } int closedLoop_toTune_b924f1e8_1_isVelocityViolation (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
eqnEnableFlags , const double * state ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii [ 3
] ; double xx [ 54 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) eqnEnableFlags ; xx [ 0 ] = - 0.99302022896367 ; xx [ 1 ] =
0.1066412368322485 ; xx [ 2 ] = - 0.03120900126866927 ; xx [ 3 ] = -
0.03955337805600653 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 8 ] ; xx
[ 6 ] = 0.07189840968753769 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
0.9741263695734882 ; xx [ 9 ] = 0.2142625370567126 ; xx [ 10 ] = cos ( xx [ 5
] ) ; xx [ 11 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 12 ] = xx [ 8 ] * xx [ 7 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 7 ] ; pm_math_quatCompose ( xx + 0 , xx + 10 , xx +
14 ) ; xx [ 0 ] = 0.05182593581663095 ; xx [ 1 ] = - 0.1519742715228705 ; xx
[ 2 ] = - 0.1034434723147636 ; xx [ 3 ] = 0.981589191671999 ; xx [ 5 ] = xx [
4 ] * state [ 10 ] ; xx [ 7 ] = 8.039551964383884e-5 ; xx [ 10 ] = sin ( xx [
5 ] ) ; xx [ 11 ] = 0.9999878887291287 ; xx [ 12 ] = 4.920968565308881e-3 ;
xx [ 18 ] = cos ( xx [ 5 ] ) ; xx [ 19 ] = - ( xx [ 7 ] * xx [ 10 ] ) ; xx [
20 ] = - ( xx [ 11 ] * xx [ 10 ] ) ; xx [ 21 ] = - ( xx [ 12 ] * xx [ 10 ] )
; pm_math_quatCompose ( xx + 0 , xx + 18 , xx + 22 ) ; pm_math_quatCompose (
xx + 14 , xx + 22 , xx + 0 ) ; xx [ 18 ] = xx [ 6 ] * state [ 9 ] ; xx [ 19 ]
= xx [ 8 ] * state [ 9 ] ; xx [ 20 ] = xx [ 9 ] * state [ 9 ] ;
pm_math_quatInverseXform ( xx + 22 , xx + 18 , xx + 8 ) ; xx [ 26 ] = xx [ 8
] - xx [ 7 ] * state [ 11 ] ; xx [ 27 ] = xx [ 9 ] - xx [ 11 ] * state [ 11 ]
; xx [ 28 ] = xx [ 10 ] - xx [ 12 ] * state [ 11 ] ; xx [ 5 ] = -
7.044490589730112e-3 ; xx [ 6 ] = - 6.108478301373796e-3 ; xx [ 7 ] = -
4.589550344615505e-3 ; pm_math_cross3 ( xx + 26 , xx + 5 , xx + 8 ) ;
pm_math_quatXform ( xx + 0 , xx + 8 , xx + 5 ) ; xx [ 0 ] = -
3.67575678838696e-3 ; xx [ 1 ] = 1.562574744821344e-3 ; xx [ 2 ] = -
5.870667887890738e-3 ; pm_math_quatXform ( xx + 14 , xx + 0 , xx + 8 ) ; xx [
0 ] = 5.14166426014702e-4 ; xx [ 1 ] = - 1.44182428174571e-4 ; xx [ 2 ] =
0.02929084861083201 ; pm_math_quatXform ( xx + 22 , xx + 0 , xx + 11 ) ; xx [
0 ] = - 0.02929060823879809 ; xx [ 1 ] = 7.402384199146024e-3 ; xx [ 2 ] =
5.50599994432713e-4 ; pm_math_quatXform ( xx + 22 , xx + 0 , xx + 26 ) ; xx [
0 ] = 0.01141939320659117 - xx [ 26 ] ; xx [ 1 ] = - ( 7.654873829231559e-3 +
xx [ 27 ] ) ; xx [ 2 ] = - ( 5.163891526827933e-4 + xx [ 28 ] ) ;
pm_math_cross3 ( xx + 18 , xx + 0 , xx + 21 ) ; xx [ 0 ] = xx [ 11 ] * state
[ 11 ] + xx [ 21 ] ; xx [ 1 ] = xx [ 12 ] * state [ 11 ] + xx [ 22 ] ; xx [ 2
] = xx [ 13 ] * state [ 11 ] + xx [ 23 ] ; pm_math_quatXform ( xx + 14 , xx +
0 , xx + 11 ) ; xx [ 0 ] = 2.0 ; xx [ 1 ] = 6.267148658367121e-8 ; xx [ 2 ] =
xx [ 4 ] * state [ 12 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 14 ] =
6.323084164593961e-8 ; xx [ 15 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 1 ] *
xx [ 3 ] + xx [ 14 ] * xx [ 15 ] ; xx [ 16 ] = 8.748612304055577e-3 ; xx [ 17
] = xx [ 14 ] * xx [ 3 ] - xx [ 1 ] * xx [ 15 ] ; xx [ 18 ] = xx [ 16 ] * xx
[ 17 ] ; xx [ 19 ] = 0.9999999999999174 ; xx [ 20 ] = 3.964687873836087e-7 ;
xx [ 21 ] = xx [ 19 ] * xx [ 15 ] + xx [ 20 ] * xx [ 3 ] ; xx [ 22 ] = xx [
21 ] * xx [ 16 ] ; xx [ 23 ] = xx [ 20 ] * xx [ 15 ] - xx [ 19 ] * xx [ 3 ] ;
xx [ 3 ] = 0.01309538769594443 ; xx [ 15 ] = xx [ 3 ] * state [ 13 ] ; xx [
24 ] = xx [ 21 ] * xx [ 15 ] ; xx [ 25 ] = xx [ 15 ] * xx [ 17 ] ; xx [ 26 ]
= - 0.993020263593104 ; xx [ 27 ] = - 0.1066411692347894 ; xx [ 28 ] =
0.03120822428610398 ; xx [ 29 ] = - 0.03955330396602025 ; xx [ 30 ] = xx [ 4
] * state [ 14 ] ; xx [ 31 ] = 0.07189841740695141 ; xx [ 32 ] = sin ( xx [
30 ] ) ; xx [ 33 ] = 0.9741263571870624 ; xx [ 34 ] = 0.2142625907801925 ; xx
[ 35 ] = cos ( xx [ 30 ] ) ; xx [ 36 ] = xx [ 31 ] * xx [ 32 ] ; xx [ 37 ] =
xx [ 33 ] * xx [ 32 ] ; xx [ 38 ] = - ( xx [ 34 ] * xx [ 32 ] ) ;
pm_math_quatCompose ( xx + 26 , xx + 35 , xx + 39 ) ; xx [ 26 ] = -
0.9815891861559222 ; xx [ 27 ] = 0.1034434979269754 ; xx [ 28 ] = -
0.1519742864170317 ; xx [ 29 ] = 0.05182594549470909 ; xx [ 30 ] = xx [ 4 ] *
state [ 16 ] ; xx [ 32 ] = 8.039551964356129e-5 ; xx [ 35 ] = sin ( xx [ 30 ]
) ; xx [ 36 ] = 0.9999878887291285 ; xx [ 37 ] = 4.920968565308659e-3 ; xx [
43 ] = cos ( xx [ 30 ] ) ; xx [ 44 ] = xx [ 32 ] * xx [ 35 ] ; xx [ 45 ] = xx
[ 36 ] * xx [ 35 ] ; xx [ 46 ] = xx [ 37 ] * xx [ 35 ] ; pm_math_quatCompose
( xx + 26 , xx + 43 , xx + 47 ) ; pm_math_quatCompose ( xx + 39 , xx + 47 ,
xx + 26 ) ; xx [ 43 ] = xx [ 31 ] * state [ 15 ] ; xx [ 44 ] = xx [ 33 ] *
state [ 15 ] ; xx [ 45 ] = - ( xx [ 34 ] * state [ 15 ] ) ;
pm_math_quatInverseXform ( xx + 47 , xx + 43 , xx + 33 ) ; xx [ 51 ] = xx [
33 ] + xx [ 32 ] * state [ 17 ] ; xx [ 52 ] = xx [ 34 ] + xx [ 36 ] * state [
17 ] ; xx [ 53 ] = xx [ 35 ] + xx [ 37 ] * state [ 17 ] ; xx [ 30 ] = -
7.043504602604413e-3 ; xx [ 31 ] = 6.155578060373999e-3 ; xx [ 32 ] = -
4.529198577839576e-3 ; pm_math_cross3 ( xx + 51 , xx + 30 , xx + 33 ) ;
pm_math_quatXform ( xx + 26 , xx + 33 , xx + 30 ) ; xx [ 26 ] =
3.6757564094702e-3 ; xx [ 27 ] = - 1.562574919455121e-3 ; xx [ 28 ] = -
5.870667114245509e-3 ; pm_math_quatXform ( xx + 39 , xx + 26 , xx + 33 ) ; xx
[ 26 ] = - 5.141664260146969e-4 ; xx [ 27 ] = 1.441824281745643e-4 ; xx [ 28
] = - 0.029290848610832 ; pm_math_quatXform ( xx + 47 , xx + 26 , xx + 36 ) ;
xx [ 26 ] = - 0.02929179843054367 ; xx [ 27 ] = - 7.401641399973765e-3 ; xx [
28 ] = 4.777489675008928e-4 ; pm_math_quatXform ( xx + 47 , xx + 26 , xx + 51
) ; xx [ 26 ] = 0.01141939394132858 - xx [ 51 ] ; xx [ 27 ] = - (
7.654873922132995e-3 + xx [ 52 ] ) ; xx [ 28 ] = 5.163893604838405e-4 - xx [
53 ] ; pm_math_cross3 ( xx + 43 , xx + 26 , xx + 46 ) ; xx [ 26 ] = xx [ 36 ]
* state [ 17 ] + xx [ 46 ] ; xx [ 27 ] = xx [ 37 ] * state [ 17 ] + xx [ 47 ]
; xx [ 28 ] = xx [ 38 ] * state [ 17 ] + xx [ 48 ] ; pm_math_quatXform ( xx +
39 , xx + 26 , xx + 36 ) ; xx [ 26 ] = xx [ 4 ] * state [ 18 ] ; xx [ 4 ] =
cos ( xx [ 26 ] ) ; xx [ 27 ] = sin ( xx [ 26 ] ) ; xx [ 26 ] = xx [ 1 ] * xx
[ 4 ] + xx [ 14 ] * xx [ 27 ] ; xx [ 28 ] = xx [ 14 ] * xx [ 4 ] - xx [ 1 ] *
xx [ 27 ] ; xx [ 1 ] = xx [ 16 ] * xx [ 28 ] ; xx [ 14 ] = xx [ 19 ] * xx [
27 ] + xx [ 20 ] * xx [ 4 ] ; xx [ 29 ] = xx [ 14 ] * xx [ 16 ] ; xx [ 39 ] =
xx [ 20 ] * xx [ 27 ] - xx [ 19 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 3 ] * state [
19 ] ; xx [ 3 ] = xx [ 14 ] * xx [ 4 ] ; xx [ 19 ] = xx [ 4 ] * xx [ 28 ] ;
xx [ 40 ] = fabs ( xx [ 5 ] + xx [ 8 ] * state [ 9 ] + xx [ 11 ] - ( xx [ 0 ]
* ( xx [ 2 ] * xx [ 18 ] - xx [ 22 ] * xx [ 23 ] ) * state [ 13 ] - ( xx [ 24
] * xx [ 23 ] - xx [ 2 ] * xx [ 25 ] ) * xx [ 0 ] ) ) ; xx [ 41 ] = fabs ( xx
[ 6 ] + xx [ 9 ] * state [ 9 ] + xx [ 12 ] + xx [ 0 ] * ( xx [ 25 ] * xx [ 23
] + xx [ 2 ] * xx [ 24 ] ) + xx [ 0 ] * ( xx [ 2 ] * xx [ 22 ] + xx [ 18 ] *
xx [ 23 ] ) * state [ 13 ] ) ; xx [ 42 ] = fabs ( xx [ 7 ] + xx [ 10 ] *
state [ 9 ] + xx [ 13 ] - ( xx [ 15 ] - ( xx [ 25 ] * xx [ 17 ] + xx [ 21 ] *
xx [ 24 ] ) * xx [ 0 ] + ( xx [ 16 ] - ( xx [ 18 ] * xx [ 17 ] + xx [ 21 ] *
xx [ 22 ] ) * xx [ 0 ] ) * state [ 13 ] ) ) ; xx [ 43 ] = fabs ( xx [ 30 ] +
xx [ 33 ] * state [ 15 ] + xx [ 36 ] - ( xx [ 0 ] * ( xx [ 26 ] * xx [ 1 ] -
xx [ 29 ] * xx [ 39 ] ) * state [ 19 ] - ( xx [ 3 ] * xx [ 39 ] - xx [ 26 ] *
xx [ 19 ] ) * xx [ 0 ] ) ) ; xx [ 44 ] = fabs ( xx [ 31 ] + xx [ 34 ] * state
[ 15 ] + xx [ 37 ] + xx [ 0 ] * ( xx [ 19 ] * xx [ 39 ] + xx [ 26 ] * xx [ 3
] ) + xx [ 0 ] * ( xx [ 26 ] * xx [ 29 ] + xx [ 1 ] * xx [ 39 ] ) * state [
19 ] ) ; xx [ 45 ] = fabs ( xx [ 32 ] + xx [ 35 ] * state [ 15 ] + xx [ 38 ]
- ( xx [ 4 ] - ( xx [ 19 ] * xx [ 28 ] + xx [ 14 ] * xx [ 3 ] ) * xx [ 0 ] +
( xx [ 16 ] - ( xx [ 1 ] * xx [ 28 ] + xx [ 14 ] * xx [ 29 ] ) * xx [ 0 ] ) *
state [ 19 ] ) ) ; ii [ 0 ] = 40 ; { int ll ; for ( ll = 41 ; ll < 46 ; ++ ll
) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 40 ; xx [
0 ] = xx [ 40 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - 1.0e-9 ; if ( xx [ 1 ]
< 0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 1 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii
[ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; return
ii [ 1 ] ; } PmfMessageId closedLoop_toTune_b924f1e8_1_projectStateSim (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
eqnEnableFlags , const double * input , double * state , void * neDiagMgr0 )
{ const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi =
rtdv -> mInts . mValues ; NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; int ii [ 6 ] ; double xx [ 344 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; (
void ) input ; ( void ) neDiagMgr ; xx [ 0 ] = 0.0 ; xx [ 1 ] = -
0.99302022896367 ; xx [ 2 ] = 0.1066412368322485 ; xx [ 3 ] = -
0.03120900126866927 ; xx [ 4 ] = - 0.03955337805600653 ; xx [ 5 ] = 0.5 ; xx
[ 6 ] = xx [ 5 ] * state [ 8 ] ; xx [ 7 ] = 0.07189840968753769 ; xx [ 8 ] =
sin ( xx [ 6 ] ) ; xx [ 9 ] = 0.9741263695734882 ; xx [ 10 ] =
0.2142625370567126 ; xx [ 11 ] = cos ( xx [ 6 ] ) ; xx [ 12 ] = xx [ 7 ] * xx
[ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ;
pm_math_quatCompose ( xx + 1 , xx + 11 , xx + 15 ) ; xx [ 11 ] =
0.05182593581663095 ; xx [ 12 ] = - 0.1519742715228705 ; xx [ 13 ] = -
0.1034434723147636 ; xx [ 14 ] = 0.981589191671999 ; xx [ 6 ] = xx [ 5 ] *
state [ 10 ] ; xx [ 8 ] = 8.039551964383884e-5 ; xx [ 19 ] = sin ( xx [ 6 ] )
; xx [ 20 ] = 0.9999878887291287 ; xx [ 21 ] = 4.920968565308881e-3 ; xx [ 22
] = cos ( xx [ 6 ] ) ; xx [ 23 ] = - ( xx [ 8 ] * xx [ 19 ] ) ; xx [ 24 ] = -
( xx [ 20 ] * xx [ 19 ] ) ; xx [ 25 ] = - ( xx [ 21 ] * xx [ 19 ] ) ;
pm_math_quatCompose ( xx + 11 , xx + 22 , xx + 26 ) ; pm_math_quatCompose (
xx + 15 , xx + 26 , xx + 22 ) ; xx [ 30 ] = xx [ 7 ] ; xx [ 31 ] = xx [ 9 ] ;
xx [ 32 ] = xx [ 10 ] ; pm_math_quatInverseXform ( xx + 26 , xx + 30 , xx +
33 ) ; xx [ 36 ] = - 7.044490589730112e-3 ; xx [ 37 ] = -
6.108478301373796e-3 ; xx [ 38 ] = - 4.589550344615505e-3 ; pm_math_cross3 (
xx + 33 , xx + 36 , xx + 39 ) ; pm_math_quatXform ( xx + 22 , xx + 39 , xx +
33 ) ; xx [ 6 ] = 0.01141939320659117 ; xx [ 39 ] = - 0.02929060823879809 ;
xx [ 40 ] = 7.402384199146024e-3 ; xx [ 41 ] = 5.50599994432713e-4 ;
pm_math_quatXform ( xx + 26 , xx + 39 , xx + 42 ) ; xx [ 19 ] =
7.654873829231559e-3 ; xx [ 45 ] = 5.163891526827933e-4 ; xx [ 46 ] = xx [ 6
] - xx [ 42 ] ; xx [ 47 ] = - ( xx [ 19 ] + xx [ 43 ] ) ; xx [ 48 ] = - ( xx
[ 45 ] + xx [ 44 ] ) ; pm_math_cross3 ( xx + 30 , xx + 46 , xx + 42 ) ;
pm_math_quatXform ( xx + 15 , xx + 42 , xx + 49 ) ; xx [ 42 ] = -
3.67575678838696e-3 ; xx [ 43 ] = 1.562574744821344e-3 ; xx [ 44 ] = -
5.870667887890738e-3 ; pm_math_quatXform ( xx + 15 , xx + 42 , xx + 52 ) ; xx
[ 55 ] = 4.559435129625171e-3 ; xx [ 56 ] = 3.429673746578918e-5 ; xx [ 57 ]
= - 7.043914177709157e-3 ; pm_math_quatXform ( xx + 22 , xx + 55 , xx + 58 )
; xx [ 61 ] = 5.14166426014702e-4 ; xx [ 62 ] = - 1.44182428174571e-4 ; xx [
63 ] = 0.02929084861083201 ; pm_math_quatXform ( xx + 26 , xx + 61 , xx + 64
) ; pm_math_quatXform ( xx + 15 , xx + 64 , xx + 26 ) ; xx [ 29 ] =
6.267148658367121e-8 ; xx [ 64 ] = xx [ 5 ] * state [ 12 ] ; xx [ 65 ] = cos
( xx [ 64 ] ) ; xx [ 66 ] = 6.323084164593961e-8 ; xx [ 67 ] = sin ( xx [ 64
] ) ; xx [ 64 ] = xx [ 29 ] * xx [ 65 ] + xx [ 66 ] * xx [ 67 ] ; xx [ 68 ] =
0.01309538769594443 ; xx [ 69 ] = xx [ 66 ] * xx [ 65 ] - xx [ 29 ] * xx [ 67
] ; xx [ 70 ] = xx [ 68 ] * xx [ 69 ] ; xx [ 71 ] = 0.9999999999999174 ; xx [
72 ] = 3.964687873836087e-7 ; xx [ 73 ] = xx [ 71 ] * xx [ 67 ] + xx [ 72 ] *
xx [ 65 ] ; xx [ 74 ] = xx [ 73 ] * xx [ 68 ] ; xx [ 75 ] = xx [ 72 ] * xx [
67 ] - xx [ 71 ] * xx [ 65 ] ; xx [ 65 ] = 2.0 ; xx [ 67 ] =
8.748612304055577e-3 ; xx [ 76 ] = xx [ 67 ] * xx [ 69 ] ; xx [ 77 ] = xx [
73 ] * xx [ 67 ] ; xx [ 78 ] = 0.021844 ; xx [ 79 ] = - 0.993020263593104 ;
xx [ 80 ] = - 0.1066411692347894 ; xx [ 81 ] = 0.03120822428610398 ; xx [ 82
] = - 0.03955330396602025 ; xx [ 83 ] = xx [ 5 ] * state [ 14 ] ; xx [ 84 ] =
0.07189841740695141 ; xx [ 85 ] = sin ( xx [ 83 ] ) ; xx [ 86 ] =
0.9741263571870624 ; xx [ 87 ] = 0.2142625907801925 ; xx [ 88 ] = cos ( xx [
83 ] ) ; xx [ 89 ] = xx [ 84 ] * xx [ 85 ] ; xx [ 90 ] = xx [ 86 ] * xx [ 85
] ; xx [ 91 ] = - ( xx [ 87 ] * xx [ 85 ] ) ; pm_math_quatCompose ( xx + 79 ,
xx + 88 , xx + 92 ) ; xx [ 88 ] = - 0.9815891861559222 ; xx [ 89 ] =
0.1034434979269754 ; xx [ 90 ] = - 0.1519742864170317 ; xx [ 91 ] =
0.05182594549470909 ; xx [ 83 ] = xx [ 5 ] * state [ 16 ] ; xx [ 85 ] =
8.039551964356129e-5 ; xx [ 96 ] = sin ( xx [ 83 ] ) ; xx [ 97 ] =
0.9999878887291285 ; xx [ 98 ] = 4.920968565308659e-3 ; xx [ 99 ] = cos ( xx
[ 83 ] ) ; xx [ 100 ] = xx [ 85 ] * xx [ 96 ] ; xx [ 101 ] = xx [ 97 ] * xx [
96 ] ; xx [ 102 ] = xx [ 98 ] * xx [ 96 ] ; pm_math_quatCompose ( xx + 88 ,
xx + 99 , xx + 103 ) ; pm_math_quatCompose ( xx + 92 , xx + 103 , xx + 99 ) ;
xx [ 107 ] = xx [ 84 ] ; xx [ 108 ] = xx [ 86 ] ; xx [ 109 ] = - xx [ 87 ] ;
pm_math_quatInverseXform ( xx + 103 , xx + 107 , xx + 110 ) ; xx [ 113 ] = -
7.043504602604413e-3 ; xx [ 114 ] = 6.155578060373999e-3 ; xx [ 115 ] = -
4.529198577839576e-3 ; pm_math_cross3 ( xx + 110 , xx + 113 , xx + 116 ) ;
pm_math_quatXform ( xx + 99 , xx + 116 , xx + 110 ) ; xx [ 83 ] =
0.01141939394132858 ; xx [ 116 ] = - 0.02929179843054367 ; xx [ 117 ] = -
7.401641399973765e-3 ; xx [ 118 ] = 4.777489675008928e-4 ; pm_math_quatXform
( xx + 103 , xx + 116 , xx + 119 ) ; xx [ 96 ] = 7.654873922132995e-3 ; xx [
122 ] = 5.163893604838405e-4 ; xx [ 123 ] = xx [ 83 ] - xx [ 119 ] ; xx [ 124
] = - ( xx [ 96 ] + xx [ 120 ] ) ; xx [ 125 ] = xx [ 122 ] - xx [ 121 ] ;
pm_math_cross3 ( xx + 107 , xx + 123 , xx + 119 ) ; pm_math_quatXform ( xx +
92 , xx + 119 , xx + 126 ) ; xx [ 119 ] = 3.6757564094702e-3 ; xx [ 120 ] = -
1.562574919455121e-3 ; xx [ 121 ] = - 5.870667114245509e-3 ;
pm_math_quatXform ( xx + 92 , xx + 119 , xx + 129 ) ; xx [ 132 ] = -
4.559435129625173e-3 ; xx [ 133 ] = - 3.429673746578889e-5 ; xx [ 134 ] =
7.043914177709156e-3 ; pm_math_quatXform ( xx + 99 , xx + 132 , xx + 135 ) ;
xx [ 138 ] = - 5.141664260146969e-4 ; xx [ 139 ] = 1.441824281745643e-4 ; xx
[ 140 ] = - 0.029290848610832 ; pm_math_quatXform ( xx + 103 , xx + 138 , xx
+ 141 ) ; pm_math_quatXform ( xx + 92 , xx + 141 , xx + 103 ) ; xx [ 106 ] =
xx [ 5 ] * state [ 18 ] ; xx [ 141 ] = cos ( xx [ 106 ] ) ; xx [ 142 ] = sin
( xx [ 106 ] ) ; xx [ 106 ] = xx [ 29 ] * xx [ 141 ] + xx [ 66 ] * xx [ 142 ]
; xx [ 143 ] = xx [ 66 ] * xx [ 141 ] - xx [ 29 ] * xx [ 142 ] ; xx [ 144 ] =
xx [ 68 ] * xx [ 143 ] ; xx [ 145 ] = xx [ 71 ] * xx [ 142 ] + xx [ 72 ] * xx
[ 141 ] ; xx [ 146 ] = xx [ 145 ] * xx [ 68 ] ; xx [ 147 ] = xx [ 72 ] * xx [
142 ] - xx [ 71 ] * xx [ 141 ] ; xx [ 141 ] = xx [ 67 ] * xx [ 143 ] ; xx [
142 ] = xx [ 145 ] * xx [ 67 ] ; xx [ 148 ] = xx [ 0 ] ; xx [ 149 ] = xx [ 0
] ; xx [ 150 ] = xx [ 0 ] ; xx [ 151 ] = xx [ 0 ] ; xx [ 152 ] = xx [ 33 ] +
xx [ 49 ] + xx [ 52 ] ; xx [ 153 ] = xx [ 58 ] + xx [ 26 ] ; xx [ 154 ] = - (
( xx [ 64 ] * xx [ 70 ] - xx [ 74 ] * xx [ 75 ] ) * xx [ 65 ] + ( xx [ 64 ] *
xx [ 76 ] - xx [ 77 ] * xx [ 75 ] ) * xx [ 65 ] ) ; xx [ 155 ] = xx [ 0 ] ;
xx [ 156 ] = xx [ 0 ] ; xx [ 157 ] = xx [ 0 ] ; xx [ 158 ] = xx [ 0 ] ; xx [
159 ] = xx [ 0 ] ; xx [ 160 ] = xx [ 0 ] ; xx [ 161 ] = xx [ 0 ] ; xx [ 162 ]
= xx [ 34 ] + xx [ 50 ] + xx [ 53 ] ; xx [ 163 ] = xx [ 59 ] + xx [ 27 ] ; xx
[ 164 ] = xx [ 65 ] * ( xx [ 64 ] * xx [ 74 ] + xx [ 70 ] * xx [ 75 ] ) + xx
[ 65 ] * ( xx [ 64 ] * xx [ 77 ] + xx [ 76 ] * xx [ 75 ] ) ; xx [ 165 ] = xx
[ 0 ] ; xx [ 166 ] = xx [ 0 ] ; xx [ 167 ] = xx [ 0 ] ; xx [ 168 ] = xx [ 0 ]
; xx [ 169 ] = xx [ 0 ] ; xx [ 170 ] = xx [ 0 ] ; xx [ 171 ] = xx [ 0 ] ; xx
[ 172 ] = xx [ 35 ] + xx [ 51 ] + xx [ 54 ] ; xx [ 173 ] = xx [ 60 ] + xx [
28 ] ; xx [ 174 ] = ( xx [ 70 ] * xx [ 69 ] + xx [ 73 ] * xx [ 74 ] ) * xx [
65 ] + ( xx [ 76 ] * xx [ 69 ] + xx [ 73 ] * xx [ 77 ] ) * xx [ 65 ] - xx [
78 ] ; xx [ 175 ] = xx [ 0 ] ; xx [ 176 ] = xx [ 0 ] ; xx [ 177 ] = xx [ 0 ]
; xx [ 178 ] = xx [ 0 ] ; xx [ 179 ] = xx [ 0 ] ; xx [ 180 ] = xx [ 0 ] ; xx
[ 181 ] = xx [ 0 ] ; xx [ 182 ] = xx [ 0 ] ; xx [ 183 ] = xx [ 0 ] ; xx [ 184
] = xx [ 0 ] ; xx [ 185 ] = xx [ 110 ] + xx [ 126 ] + xx [ 129 ] ; xx [ 186 ]
= xx [ 135 ] + xx [ 103 ] ; xx [ 187 ] = - ( ( xx [ 106 ] * xx [ 144 ] - xx [
146 ] * xx [ 147 ] ) * xx [ 65 ] + ( xx [ 106 ] * xx [ 141 ] - xx [ 142 ] *
xx [ 147 ] ) * xx [ 65 ] ) ; xx [ 188 ] = xx [ 0 ] ; xx [ 189 ] = xx [ 0 ] ;
xx [ 190 ] = xx [ 0 ] ; xx [ 191 ] = xx [ 0 ] ; xx [ 192 ] = xx [ 0 ] ; xx [
193 ] = xx [ 0 ] ; xx [ 194 ] = xx [ 0 ] ; xx [ 195 ] = xx [ 111 ] + xx [ 127
] + xx [ 130 ] ; xx [ 196 ] = xx [ 136 ] + xx [ 104 ] ; xx [ 197 ] = xx [ 65
] * ( xx [ 106 ] * xx [ 146 ] + xx [ 144 ] * xx [ 147 ] ) + xx [ 65 ] * ( xx
[ 106 ] * xx [ 142 ] + xx [ 141 ] * xx [ 147 ] ) ; xx [ 198 ] = xx [ 0 ] ; xx
[ 199 ] = xx [ 0 ] ; xx [ 200 ] = xx [ 0 ] ; xx [ 201 ] = xx [ 0 ] ; xx [ 202
] = xx [ 0 ] ; xx [ 203 ] = xx [ 0 ] ; xx [ 204 ] = xx [ 0 ] ; xx [ 205 ] =
xx [ 112 ] + xx [ 128 ] + xx [ 131 ] ; xx [ 206 ] = xx [ 137 ] + xx [ 105 ] ;
xx [ 207 ] = ( xx [ 144 ] * xx [ 143 ] + xx [ 145 ] * xx [ 146 ] ) * xx [ 65
] + ( xx [ 141 ] * xx [ 143 ] + xx [ 145 ] * xx [ 142 ] ) * xx [ 65 ] - xx [
78 ] ; pm_math_quatXform ( xx + 22 , xx + 36 , xx + 26 ) ; pm_math_quatXform
( xx + 15 , xx + 46 , xx + 22 ) ; xx [ 33 ] = - 6.666465945763514e-3 ; xx [
34 ] = - 8.669348660839774e-3 ; xx [ 35 ] = 1.866534164845896e-3 ;
pm_math_quatXform ( xx + 15 , xx + 33 , xx + 46 ) ; xx [ 15 ] = xx [ 69 ] ;
xx [ 16 ] = - xx [ 73 ] ; xx [ 17 ] = xx [ 64 ] ; xx [ 18 ] =
6.132102448427665e-3 ; xx [ 25 ] = xx [ 64 ] * xx [ 18 ] ; xx [ 49 ] = xx [
64 ] * xx [ 68 ] ; xx [ 50 ] = xx [ 18 ] * xx [ 69 ] - xx [ 74 ] ; xx [ 51 ]
= - xx [ 25 ] ; xx [ 52 ] = - xx [ 49 ] ; xx [ 53 ] = xx [ 50 ] ;
pm_math_cross3 ( xx + 15 , xx + 51 , xx + 58 ) ; xx [ 51 ] =
9.180102448427657e-3 ; xx [ 52 ] = xx [ 64 ] * xx [ 51 ] ; xx [ 53 ] = xx [
64 ] * xx [ 67 ] ; xx [ 54 ] = xx [ 77 ] - xx [ 51 ] * xx [ 69 ] ;
pm_math_cross3 ( xx + 15 , xx + 52 , xx + 103 ) ; xx [ 15 ] =
1.390950249792803e-3 ; xx [ 16 ] = 0.0153122030499485 ; xx [ 17 ] =
5.667629212745225e-3 ; pm_math_quatXform ( xx + 99 , xx + 113 , xx + 110 ) ;
pm_math_quatXform ( xx + 92 , xx + 123 , xx + 99 ) ; xx [ 123 ] = -
6.666465301335936e-3 ; xx [ 124 ] = - 8.669348610704675e-3 ; xx [ 125 ] = -
1.866533332507701e-3 ; pm_math_quatXform ( xx + 92 , xx + 123 , xx + 126 ) ;
xx [ 92 ] = xx [ 143 ] ; xx [ 93 ] = - xx [ 145 ] ; xx [ 94 ] = xx [ 106 ] ;
xx [ 64 ] = 6.132102448427664e-3 ; xx [ 69 ] = xx [ 106 ] * xx [ 64 ] ; xx [
70 ] = xx [ 106 ] * xx [ 68 ] ; xx [ 73 ] = xx [ 64 ] * xx [ 143 ] - xx [ 146
] ; xx [ 129 ] = - xx [ 69 ] ; xx [ 130 ] = - xx [ 70 ] ; xx [ 131 ] = xx [
73 ] ; pm_math_cross3 ( xx + 92 , xx + 129 , xx + 135 ) ; xx [ 74 ] =
9.180102448427653e-3 ; xx [ 76 ] = xx [ 106 ] * xx [ 74 ] ; xx [ 77 ] = xx [
106 ] * xx [ 67 ] ; xx [ 95 ] = xx [ 142 ] - xx [ 74 ] * xx [ 143 ] ; xx [
129 ] = xx [ 76 ] ; xx [ 130 ] = xx [ 77 ] ; xx [ 131 ] = xx [ 95 ] ;
pm_math_cross3 ( xx + 92 , xx + 129 , xx + 141 ) ; xx [ 92 ] =
1.390959237970934e-3 ; xx [ 93 ] = 0.01531220161646909 ; xx [ 94 ] =
5.667661648721102e-3 ; xx [ 208 ] = - ( xx [ 26 ] + xx [ 22 ] - xx [ 46 ] - (
xx [ 65 ] * ( xx [ 58 ] - xx [ 25 ] * xx [ 75 ] ) - xx [ 65 ] * ( xx [ 103 ]
+ xx [ 52 ] * xx [ 75 ] ) ) + xx [ 15 ] ) ; xx [ 209 ] = - ( xx [ 27 ] + xx [
23 ] - xx [ 47 ] - ( ( xx [ 59 ] - xx [ 49 ] * xx [ 75 ] ) * xx [ 65 ] - ( xx
[ 53 ] * xx [ 75 ] + xx [ 104 ] ) * xx [ 65 ] ) - xx [ 16 ] ) ; xx [ 210 ] =
- ( xx [ 28 ] + xx [ 24 ] - xx [ 48 ] - ( ( xx [ 50 ] * xx [ 75 ] + xx [ 60 ]
) * xx [ 65 ] - ( xx [ 54 ] * xx [ 75 ] + xx [ 105 ] ) * xx [ 65 ] ) - xx [
17 ] ) ; xx [ 211 ] = - ( xx [ 110 ] + xx [ 99 ] - xx [ 126 ] - ( xx [ 65 ] *
( xx [ 135 ] - xx [ 69 ] * xx [ 147 ] ) - xx [ 65 ] * ( xx [ 141 ] + xx [ 76
] * xx [ 147 ] ) ) + xx [ 92 ] ) ; xx [ 212 ] = - ( xx [ 111 ] + xx [ 100 ] -
xx [ 127 ] - ( ( xx [ 136 ] - xx [ 70 ] * xx [ 147 ] ) * xx [ 65 ] - ( xx [
77 ] * xx [ 147 ] + xx [ 142 ] ) * xx [ 65 ] ) - xx [ 93 ] ) ; xx [ 213 ] = -
( xx [ 112 ] + xx [ 101 ] - xx [ 128 ] - ( ( xx [ 73 ] * xx [ 147 ] + xx [
137 ] ) * xx [ 65 ] - ( xx [ 95 ] * xx [ 147 ] + xx [ 143 ] ) * xx [ 65 ] ) +
xx [ 94 ] ) ; xx [ 22 ] = 1.0e-8 ; memcpy ( xx + 224 , xx + 148 , 60 * sizeof
( double ) ) ; factorAndSolveWide ( 6 , 10 , xx + 224 , xx + 23 , xx + 99 ,
ii + 0 , xx + 208 , xx [ 22 ] , xx + 214 ) ; xx [ 23 ] = state [ 8 ] + xx [
218 ] ; xx [ 24 ] = xx [ 23 ] * xx [ 5 ] ; xx [ 25 ] = sin ( xx [ 24 ] ) ; xx
[ 46 ] = cos ( xx [ 24 ] ) ; xx [ 47 ] = xx [ 7 ] * xx [ 25 ] ; xx [ 48 ] =
xx [ 9 ] * xx [ 25 ] ; xx [ 49 ] = xx [ 10 ] * xx [ 25 ] ;
pm_math_quatCompose ( xx + 1 , xx + 46 , xx + 24 ) ; xx [ 28 ] = state [ 10 ]
+ xx [ 219 ] ; xx [ 46 ] = xx [ 28 ] * xx [ 5 ] ; xx [ 47 ] = sin ( xx [ 46 ]
) ; xx [ 99 ] = cos ( xx [ 46 ] ) ; xx [ 100 ] = - ( xx [ 8 ] * xx [ 47 ] ) ;
xx [ 101 ] = - ( xx [ 20 ] * xx [ 47 ] ) ; xx [ 102 ] = - ( xx [ 21 ] * xx [
47 ] ) ; pm_math_quatCompose ( xx + 11 , xx + 99 , xx + 46 ) ;
pm_math_quatCompose ( xx + 24 , xx + 46 , xx + 99 ) ;
pm_math_quatInverseXform ( xx + 46 , xx + 30 , xx + 52 ) ; pm_math_cross3 (
xx + 52 , xx + 36 , xx + 58 ) ; pm_math_quatXform ( xx + 99 , xx + 58 , xx +
52 ) ; pm_math_quatXform ( xx + 46 , xx + 39 , xx + 58 ) ; xx [ 75 ] = xx [ 6
] - xx [ 58 ] ; xx [ 76 ] = - ( xx [ 19 ] + xx [ 59 ] ) ; xx [ 77 ] = - ( xx
[ 45 ] + xx [ 60 ] ) ; pm_math_cross3 ( xx + 30 , xx + 75 , xx + 58 ) ;
pm_math_quatXform ( xx + 24 , xx + 58 , xx + 103 ) ; pm_math_quatXform ( xx +
24 , xx + 42 , xx + 58 ) ; pm_math_quatXform ( xx + 99 , xx + 55 , xx + 110 )
; pm_math_quatXform ( xx + 46 , xx + 61 , xx + 126 ) ; pm_math_quatXform ( xx
+ 24 , xx + 126 , xx + 46 ) ; xx [ 49 ] = state [ 12 ] + xx [ 220 ] ; xx [ 50
] = xx [ 49 ] * xx [ 5 ] ; xx [ 69 ] = cos ( xx [ 50 ] ) ; xx [ 70 ] = sin (
xx [ 50 ] ) ; xx [ 50 ] = xx [ 29 ] * xx [ 69 ] + xx [ 66 ] * xx [ 70 ] ; xx
[ 73 ] = xx [ 66 ] * xx [ 69 ] - xx [ 29 ] * xx [ 70 ] ; xx [ 95 ] = xx [ 68
] * xx [ 73 ] ; xx [ 106 ] = xx [ 71 ] * xx [ 70 ] + xx [ 72 ] * xx [ 69 ] ;
xx [ 126 ] = xx [ 106 ] * xx [ 68 ] ; xx [ 127 ] = xx [ 72 ] * xx [ 70 ] - xx
[ 71 ] * xx [ 69 ] ; xx [ 69 ] = xx [ 67 ] * xx [ 73 ] ; xx [ 70 ] = xx [ 106
] * xx [ 67 ] ; xx [ 128 ] = state [ 14 ] + xx [ 221 ] ; xx [ 129 ] = xx [
128 ] * xx [ 5 ] ; xx [ 130 ] = sin ( xx [ 129 ] ) ; xx [ 141 ] = cos ( xx [
129 ] ) ; xx [ 142 ] = xx [ 84 ] * xx [ 130 ] ; xx [ 143 ] = xx [ 86 ] * xx [
130 ] ; xx [ 144 ] = - ( xx [ 87 ] * xx [ 130 ] ) ; pm_math_quatCompose ( xx
+ 79 , xx + 141 , xx + 145 ) ; xx [ 129 ] = state [ 16 ] + xx [ 222 ] ; xx [
130 ] = xx [ 129 ] * xx [ 5 ] ; xx [ 131 ] = sin ( xx [ 130 ] ) ; xx [ 141 ]
= cos ( xx [ 130 ] ) ; xx [ 142 ] = xx [ 85 ] * xx [ 131 ] ; xx [ 143 ] = xx
[ 97 ] * xx [ 131 ] ; xx [ 144 ] = xx [ 98 ] * xx [ 131 ] ;
pm_math_quatCompose ( xx + 88 , xx + 141 , xx + 149 ) ; pm_math_quatCompose (
xx + 145 , xx + 149 , xx + 141 ) ; pm_math_quatInverseXform ( xx + 149 , xx +
107 , xx + 135 ) ; pm_math_cross3 ( xx + 135 , xx + 113 , xx + 153 ) ;
pm_math_quatXform ( xx + 141 , xx + 153 , xx + 135 ) ; pm_math_quatXform ( xx
+ 149 , xx + 116 , xx + 153 ) ; xx [ 156 ] = xx [ 83 ] - xx [ 153 ] ; xx [
157 ] = - ( xx [ 96 ] + xx [ 154 ] ) ; xx [ 158 ] = xx [ 122 ] - xx [ 155 ] ;
pm_math_cross3 ( xx + 107 , xx + 156 , xx + 153 ) ; pm_math_quatXform ( xx +
145 , xx + 153 , xx + 159 ) ; pm_math_quatXform ( xx + 145 , xx + 119 , xx +
153 ) ; pm_math_quatXform ( xx + 141 , xx + 132 , xx + 162 ) ;
pm_math_quatXform ( xx + 149 , xx + 138 , xx + 165 ) ; pm_math_quatXform ( xx
+ 145 , xx + 165 , xx + 149 ) ; xx [ 130 ] = state [ 18 ] + xx [ 223 ] ; xx [
131 ] = xx [ 130 ] * xx [ 5 ] ; xx [ 152 ] = cos ( xx [ 131 ] ) ; xx [ 165 ]
= sin ( xx [ 131 ] ) ; xx [ 131 ] = xx [ 29 ] * xx [ 152 ] + xx [ 66 ] * xx [
165 ] ; xx [ 166 ] = xx [ 66 ] * xx [ 152 ] - xx [ 29 ] * xx [ 165 ] ; xx [
167 ] = xx [ 68 ] * xx [ 166 ] ; xx [ 168 ] = xx [ 71 ] * xx [ 165 ] + xx [
72 ] * xx [ 152 ] ; xx [ 169 ] = xx [ 168 ] * xx [ 68 ] ; xx [ 170 ] = xx [
72 ] * xx [ 165 ] - xx [ 71 ] * xx [ 152 ] ; xx [ 152 ] = xx [ 67 ] * xx [
166 ] ; xx [ 165 ] = xx [ 168 ] * xx [ 67 ] ; xx [ 224 ] = xx [ 0 ] ; xx [
225 ] = xx [ 0 ] ; xx [ 226 ] = xx [ 0 ] ; xx [ 227 ] = xx [ 0 ] ; xx [ 228 ]
= xx [ 52 ] + xx [ 103 ] + xx [ 58 ] ; xx [ 229 ] = xx [ 110 ] + xx [ 46 ] ;
xx [ 230 ] = - ( ( xx [ 50 ] * xx [ 95 ] - xx [ 126 ] * xx [ 127 ] ) * xx [
65 ] + ( xx [ 50 ] * xx [ 69 ] - xx [ 70 ] * xx [ 127 ] ) * xx [ 65 ] ) ; xx
[ 231 ] = xx [ 0 ] ; xx [ 232 ] = xx [ 0 ] ; xx [ 233 ] = xx [ 0 ] ; xx [ 234
] = xx [ 0 ] ; xx [ 235 ] = xx [ 0 ] ; xx [ 236 ] = xx [ 0 ] ; xx [ 237 ] =
xx [ 0 ] ; xx [ 238 ] = xx [ 53 ] + xx [ 104 ] + xx [ 59 ] ; xx [ 239 ] = xx
[ 111 ] + xx [ 47 ] ; xx [ 240 ] = xx [ 65 ] * ( xx [ 50 ] * xx [ 126 ] + xx
[ 95 ] * xx [ 127 ] ) + xx [ 65 ] * ( xx [ 50 ] * xx [ 70 ] + xx [ 69 ] * xx
[ 127 ] ) ; xx [ 241 ] = xx [ 0 ] ; xx [ 242 ] = xx [ 0 ] ; xx [ 243 ] = xx [
0 ] ; xx [ 244 ] = xx [ 0 ] ; xx [ 245 ] = xx [ 0 ] ; xx [ 246 ] = xx [ 0 ] ;
xx [ 247 ] = xx [ 0 ] ; xx [ 248 ] = xx [ 54 ] + xx [ 105 ] + xx [ 60 ] ; xx
[ 249 ] = xx [ 112 ] + xx [ 48 ] ; xx [ 250 ] = ( xx [ 95 ] * xx [ 73 ] + xx
[ 106 ] * xx [ 126 ] ) * xx [ 65 ] + ( xx [ 69 ] * xx [ 73 ] + xx [ 106 ] *
xx [ 70 ] ) * xx [ 65 ] - xx [ 78 ] ; xx [ 251 ] = xx [ 0 ] ; xx [ 252 ] = xx
[ 0 ] ; xx [ 253 ] = xx [ 0 ] ; xx [ 254 ] = xx [ 0 ] ; xx [ 255 ] = xx [ 0 ]
; xx [ 256 ] = xx [ 0 ] ; xx [ 257 ] = xx [ 0 ] ; xx [ 258 ] = xx [ 0 ] ; xx
[ 259 ] = xx [ 0 ] ; xx [ 260 ] = xx [ 0 ] ; xx [ 261 ] = xx [ 135 ] + xx [
159 ] + xx [ 153 ] ; xx [ 262 ] = xx [ 162 ] + xx [ 149 ] ; xx [ 263 ] = - (
( xx [ 131 ] * xx [ 167 ] - xx [ 169 ] * xx [ 170 ] ) * xx [ 65 ] + ( xx [
131 ] * xx [ 152 ] - xx [ 165 ] * xx [ 170 ] ) * xx [ 65 ] ) ; xx [ 264 ] =
xx [ 0 ] ; xx [ 265 ] = xx [ 0 ] ; xx [ 266 ] = xx [ 0 ] ; xx [ 267 ] = xx [
0 ] ; xx [ 268 ] = xx [ 0 ] ; xx [ 269 ] = xx [ 0 ] ; xx [ 270 ] = xx [ 0 ] ;
xx [ 271 ] = xx [ 136 ] + xx [ 160 ] + xx [ 154 ] ; xx [ 272 ] = xx [ 163 ] +
xx [ 150 ] ; xx [ 273 ] = xx [ 65 ] * ( xx [ 131 ] * xx [ 169 ] + xx [ 167 ]
* xx [ 170 ] ) + xx [ 65 ] * ( xx [ 131 ] * xx [ 165 ] + xx [ 152 ] * xx [
170 ] ) ; xx [ 274 ] = xx [ 0 ] ; xx [ 275 ] = xx [ 0 ] ; xx [ 276 ] = xx [ 0
] ; xx [ 277 ] = xx [ 0 ] ; xx [ 278 ] = xx [ 0 ] ; xx [ 279 ] = xx [ 0 ] ;
xx [ 280 ] = xx [ 0 ] ; xx [ 281 ] = xx [ 137 ] + xx [ 161 ] + xx [ 155 ] ;
xx [ 282 ] = xx [ 164 ] + xx [ 151 ] ; xx [ 283 ] = ( xx [ 167 ] * xx [ 166 ]
+ xx [ 168 ] * xx [ 169 ] ) * xx [ 65 ] + ( xx [ 152 ] * xx [ 166 ] + xx [
168 ] * xx [ 165 ] ) * xx [ 65 ] - xx [ 78 ] ; pm_math_quatXform ( xx + 99 ,
xx + 36 , xx + 46 ) ; pm_math_quatXform ( xx + 24 , xx + 75 , xx + 52 ) ;
pm_math_quatXform ( xx + 24 , xx + 33 , xx + 58 ) ; xx [ 24 ] = xx [ 73 ] ;
xx [ 25 ] = - xx [ 106 ] ; xx [ 26 ] = xx [ 50 ] ; xx [ 27 ] = xx [ 50 ] * xx
[ 18 ] ; xx [ 69 ] = xx [ 50 ] * xx [ 68 ] ; xx [ 75 ] = xx [ 18 ] * xx [ 73
] - xx [ 126 ] ; xx [ 99 ] = - xx [ 27 ] ; xx [ 100 ] = - xx [ 69 ] ; xx [
101 ] = xx [ 75 ] ; pm_math_cross3 ( xx + 24 , xx + 99 , xx + 102 ) ; xx [ 76
] = xx [ 50 ] * xx [ 51 ] ; xx [ 77 ] = xx [ 50 ] * xx [ 67 ] ; xx [ 50 ] =
xx [ 70 ] - xx [ 51 ] * xx [ 73 ] ; xx [ 99 ] = xx [ 76 ] ; xx [ 100 ] = xx [
77 ] ; xx [ 101 ] = xx [ 50 ] ; pm_math_cross3 ( xx + 24 , xx + 99 , xx + 110
) ; pm_math_quatXform ( xx + 141 , xx + 113 , xx + 24 ) ; pm_math_quatXform (
xx + 145 , xx + 156 , xx + 99 ) ; pm_math_quatXform ( xx + 145 , xx + 123 ,
xx + 135 ) ; xx [ 141 ] = xx [ 166 ] ; xx [ 142 ] = - xx [ 168 ] ; xx [ 143 ]
= xx [ 131 ] ; xx [ 70 ] = xx [ 131 ] * xx [ 64 ] ; xx [ 73 ] = xx [ 131 ] *
xx [ 68 ] ; xx [ 95 ] = xx [ 64 ] * xx [ 166 ] - xx [ 169 ] ; xx [ 144 ] = -
xx [ 70 ] ; xx [ 145 ] = - xx [ 73 ] ; xx [ 146 ] = xx [ 95 ] ;
pm_math_cross3 ( xx + 141 , xx + 144 , xx + 147 ) ; xx [ 105 ] = xx [ 131 ] *
xx [ 74 ] ; xx [ 106 ] = xx [ 131 ] * xx [ 67 ] ; xx [ 126 ] = xx [ 165 ] -
xx [ 74 ] * xx [ 166 ] ; xx [ 144 ] = xx [ 105 ] ; xx [ 145 ] = xx [ 106 ] ;
xx [ 146 ] = xx [ 126 ] ; pm_math_cross3 ( xx + 141 , xx + 144 , xx + 150 ) ;
xx [ 141 ] = - ( xx [ 46 ] + xx [ 52 ] - xx [ 58 ] - ( xx [ 65 ] * ( xx [ 102
] - xx [ 27 ] * xx [ 127 ] ) - xx [ 65 ] * ( xx [ 110 ] + xx [ 76 ] * xx [
127 ] ) ) + xx [ 15 ] ) ; xx [ 142 ] = - ( xx [ 47 ] + xx [ 53 ] - xx [ 59 ]
- ( ( xx [ 103 ] - xx [ 69 ] * xx [ 127 ] ) * xx [ 65 ] - ( xx [ 77 ] * xx [
127 ] + xx [ 111 ] ) * xx [ 65 ] ) - xx [ 16 ] ) ; xx [ 143 ] = - ( xx [ 48 ]
+ xx [ 54 ] - xx [ 60 ] - ( ( xx [ 75 ] * xx [ 127 ] + xx [ 104 ] ) * xx [ 65
] - ( xx [ 50 ] * xx [ 127 ] + xx [ 112 ] ) * xx [ 65 ] ) - xx [ 17 ] ) ; xx
[ 144 ] = - ( xx [ 24 ] + xx [ 99 ] - xx [ 135 ] - ( xx [ 65 ] * ( xx [ 147 ]
- xx [ 70 ] * xx [ 170 ] ) - xx [ 65 ] * ( xx [ 150 ] + xx [ 105 ] * xx [ 170
] ) ) + xx [ 92 ] ) ; xx [ 145 ] = - ( xx [ 25 ] + xx [ 100 ] - xx [ 136 ] -
( ( xx [ 148 ] - xx [ 73 ] * xx [ 170 ] ) * xx [ 65 ] - ( xx [ 106 ] * xx [
170 ] + xx [ 151 ] ) * xx [ 65 ] ) - xx [ 93 ] ) ; xx [ 146 ] = - ( xx [ 26 ]
+ xx [ 101 ] - xx [ 137 ] - ( ( xx [ 95 ] * xx [ 170 ] + xx [ 149 ] ) * xx [
65 ] - ( xx [ 126 ] * xx [ 170 ] + xx [ 152 ] ) * xx [ 65 ] ) + xx [ 94 ] ) ;
memcpy ( xx + 284 , xx + 224 , 60 * sizeof ( double ) ) ; factorAndSolveWide
( 6 , 10 , xx + 284 , xx + 99 , xx + 157 , ii + 0 , xx + 141 , xx [ 22 ] , xx
+ 147 ) ; xx [ 24 ] = xx [ 23 ] + xx [ 151 ] ; xx [ 23 ] = xx [ 28 ] + xx [
152 ] ; xx [ 25 ] = xx [ 49 ] + xx [ 153 ] ; xx [ 26 ] = xx [ 128 ] + xx [
154 ] ; xx [ 27 ] = xx [ 129 ] + xx [ 155 ] ; xx [ 28 ] = xx [ 130 ] + xx [
156 ] ; xx [ 151 ] = state [ 0 ] + xx [ 214 ] + xx [ 147 ] ; xx [ 152 ] =
state [ 1 ] ; xx [ 153 ] = state [ 2 ] + xx [ 215 ] + xx [ 148 ] ; xx [ 154 ]
= state [ 3 ] ; xx [ 155 ] = state [ 4 ] + xx [ 216 ] + xx [ 149 ] ; xx [ 156
] = state [ 5 ] ; xx [ 157 ] = state [ 6 ] + xx [ 217 ] + xx [ 150 ] ; xx [
158 ] = state [ 7 ] ; xx [ 159 ] = xx [ 24 ] ; xx [ 160 ] = state [ 9 ] ; xx
[ 161 ] = xx [ 23 ] ; xx [ 162 ] = state [ 11 ] ; xx [ 163 ] = xx [ 25 ] ; xx
[ 164 ] = state [ 13 ] ; xx [ 165 ] = xx [ 26 ] ; xx [ 166 ] = state [ 15 ] ;
xx [ 167 ] = xx [ 27 ] ; xx [ 168 ] = state [ 17 ] ; xx [ 169 ] = xx [ 28 ] ;
xx [ 170 ] = state [ 19 ] ; xx [ 171 ] = state [ 20 ] ; xx [ 172 ] = state [
21 ] ; xx [ 173 ] = state [ 22 ] ; xx [ 174 ] = state [ 23 ] ; xx [ 46 ] = xx
[ 24 ] * xx [ 5 ] ; xx [ 24 ] = sin ( xx [ 46 ] ) ; xx [ 47 ] = cos ( xx [ 46
] ) ; xx [ 48 ] = xx [ 7 ] * xx [ 24 ] ; xx [ 49 ] = xx [ 9 ] * xx [ 24 ] ;
xx [ 50 ] = xx [ 10 ] * xx [ 24 ] ; pm_math_quatCompose ( xx + 1 , xx + 47 ,
xx + 99 ) ; xx [ 24 ] = xx [ 23 ] * xx [ 5 ] ; xx [ 23 ] = sin ( xx [ 24 ] )
; xx [ 46 ] = cos ( xx [ 24 ] ) ; xx [ 47 ] = - ( xx [ 8 ] * xx [ 23 ] ) ; xx
[ 48 ] = - ( xx [ 20 ] * xx [ 23 ] ) ; xx [ 49 ] = - ( xx [ 21 ] * xx [ 23 ]
) ; pm_math_quatCompose ( xx + 11 , xx + 46 , xx + 103 ) ;
pm_math_quatCompose ( xx + 99 , xx + 103 , xx + 46 ) ; pm_math_quatXform ( xx
+ 46 , xx + 36 , xx + 52 ) ; pm_math_quatXform ( xx + 103 , xx + 39 , xx + 46
) ; xx [ 58 ] = xx [ 6 ] - xx [ 46 ] ; xx [ 59 ] = - ( xx [ 19 ] + xx [ 47 ]
) ; xx [ 60 ] = - ( xx [ 45 ] + xx [ 48 ] ) ; pm_math_quatXform ( xx + 99 ,
xx + 58 , xx + 46 ) ; pm_math_quatXform ( xx + 99 , xx + 33 , xx + 58 ) ; xx
[ 23 ] = xx [ 25 ] * xx [ 5 ] ; xx [ 24 ] = cos ( xx [ 23 ] ) ; xx [ 25 ] =
sin ( xx [ 23 ] ) ; xx [ 23 ] = xx [ 66 ] * xx [ 24 ] - xx [ 29 ] * xx [ 25 ]
; xx [ 33 ] = xx [ 71 ] * xx [ 25 ] + xx [ 72 ] * xx [ 24 ] ; xx [ 34 ] = xx
[ 29 ] * xx [ 24 ] + xx [ 66 ] * xx [ 25 ] ; xx [ 75 ] = xx [ 23 ] ; xx [ 76
] = - xx [ 33 ] ; xx [ 77 ] = xx [ 34 ] ; xx [ 35 ] = xx [ 34 ] * xx [ 18 ] ;
xx [ 49 ] = xx [ 34 ] * xx [ 68 ] ; xx [ 50 ] = xx [ 18 ] * xx [ 23 ] - xx [
33 ] * xx [ 68 ] ; xx [ 99 ] = - xx [ 35 ] ; xx [ 100 ] = - xx [ 49 ] ; xx [
101 ] = xx [ 50 ] ; pm_math_cross3 ( xx + 75 , xx + 99 , xx + 102 ) ; xx [ 18
] = xx [ 72 ] * xx [ 25 ] - xx [ 71 ] * xx [ 24 ] ; xx [ 24 ] = xx [ 34 ] *
xx [ 51 ] ; xx [ 25 ] = xx [ 34 ] * xx [ 67 ] ; xx [ 34 ] = xx [ 33 ] * xx [
67 ] - xx [ 51 ] * xx [ 23 ] ; xx [ 99 ] = xx [ 24 ] ; xx [ 100 ] = xx [ 25 ]
; xx [ 101 ] = xx [ 34 ] ; pm_math_cross3 ( xx + 75 , xx + 99 , xx + 110 ) ;
xx [ 23 ] = xx [ 26 ] * xx [ 5 ] ; xx [ 26 ] = sin ( xx [ 23 ] ) ; xx [ 126 ]
= cos ( xx [ 23 ] ) ; xx [ 127 ] = xx [ 84 ] * xx [ 26 ] ; xx [ 128 ] = xx [
86 ] * xx [ 26 ] ; xx [ 129 ] = - ( xx [ 87 ] * xx [ 26 ] ) ;
pm_math_quatCompose ( xx + 79 , xx + 126 , xx + 141 ) ; xx [ 23 ] = xx [ 27 ]
* xx [ 5 ] ; xx [ 26 ] = sin ( xx [ 23 ] ) ; xx [ 126 ] = cos ( xx [ 23 ] ) ;
xx [ 127 ] = xx [ 85 ] * xx [ 26 ] ; xx [ 128 ] = xx [ 97 ] * xx [ 26 ] ; xx
[ 129 ] = xx [ 98 ] * xx [ 26 ] ; pm_math_quatCompose ( xx + 88 , xx + 126 ,
xx + 145 ) ; pm_math_quatCompose ( xx + 141 , xx + 145 , xx + 126 ) ;
pm_math_quatXform ( xx + 126 , xx + 113 , xx + 75 ) ; pm_math_quatXform ( xx
+ 145 , xx + 116 , xx + 99 ) ; xx [ 126 ] = xx [ 83 ] - xx [ 99 ] ; xx [ 127
] = - ( xx [ 96 ] + xx [ 100 ] ) ; xx [ 128 ] = xx [ 122 ] - xx [ 101 ] ;
pm_math_quatXform ( xx + 141 , xx + 126 , xx + 99 ) ; pm_math_quatXform ( xx
+ 141 , xx + 123 , xx + 126 ) ; xx [ 23 ] = xx [ 28 ] * xx [ 5 ] ; xx [ 26 ]
= cos ( xx [ 23 ] ) ; xx [ 27 ] = sin ( xx [ 23 ] ) ; xx [ 23 ] = xx [ 66 ] *
xx [ 26 ] - xx [ 29 ] * xx [ 27 ] ; xx [ 28 ] = xx [ 71 ] * xx [ 27 ] + xx [
72 ] * xx [ 26 ] ; xx [ 33 ] = xx [ 29 ] * xx [ 26 ] + xx [ 66 ] * xx [ 27 ]
; xx [ 123 ] = xx [ 23 ] ; xx [ 124 ] = - xx [ 28 ] ; xx [ 125 ] = xx [ 33 ]
; xx [ 51 ] = xx [ 33 ] * xx [ 64 ] ; xx [ 69 ] = xx [ 33 ] * xx [ 68 ] ; xx
[ 70 ] = xx [ 64 ] * xx [ 23 ] - xx [ 28 ] * xx [ 68 ] ; xx [ 129 ] = - xx [
51 ] ; xx [ 130 ] = - xx [ 69 ] ; xx [ 131 ] = xx [ 70 ] ; pm_math_cross3 (
xx + 123 , xx + 129 , xx + 135 ) ; xx [ 64 ] = xx [ 72 ] * xx [ 27 ] - xx [
71 ] * xx [ 26 ] ; xx [ 26 ] = xx [ 33 ] * xx [ 74 ] ; xx [ 27 ] = xx [ 33 ]
* xx [ 67 ] ; xx [ 33 ] = xx [ 28 ] * xx [ 67 ] - xx [ 74 ] * xx [ 23 ] ; xx
[ 129 ] = xx [ 26 ] ; xx [ 130 ] = xx [ 27 ] ; xx [ 131 ] = xx [ 33 ] ;
pm_math_cross3 ( xx + 123 , xx + 129 , xx + 141 ) ; xx [ 144 ] = fabs ( xx [
52 ] + xx [ 46 ] - xx [ 58 ] - ( xx [ 65 ] * ( xx [ 102 ] - xx [ 35 ] * xx [
18 ] ) - xx [ 65 ] * ( xx [ 110 ] + xx [ 24 ] * xx [ 18 ] ) ) + xx [ 15 ] ) ;
xx [ 145 ] = fabs ( xx [ 53 ] + xx [ 47 ] - xx [ 59 ] - ( ( xx [ 103 ] - xx [
49 ] * xx [ 18 ] ) * xx [ 65 ] - ( xx [ 25 ] * xx [ 18 ] + xx [ 111 ] ) * xx
[ 65 ] ) - xx [ 16 ] ) ; xx [ 146 ] = fabs ( xx [ 54 ] + xx [ 48 ] - xx [ 60
] - ( ( xx [ 50 ] * xx [ 18 ] + xx [ 104 ] ) * xx [ 65 ] - ( xx [ 34 ] * xx [
18 ] + xx [ 112 ] ) * xx [ 65 ] ) - xx [ 17 ] ) ; xx [ 147 ] = fabs ( xx [ 75
] + xx [ 99 ] - xx [ 126 ] - ( xx [ 65 ] * ( xx [ 135 ] - xx [ 51 ] * xx [ 64
] ) - xx [ 65 ] * ( xx [ 141 ] + xx [ 26 ] * xx [ 64 ] ) ) + xx [ 92 ] ) ; xx
[ 148 ] = fabs ( xx [ 76 ] + xx [ 100 ] - xx [ 127 ] - ( ( xx [ 136 ] - xx [
69 ] * xx [ 64 ] ) * xx [ 65 ] - ( xx [ 27 ] * xx [ 64 ] + xx [ 142 ] ) * xx
[ 65 ] ) - xx [ 93 ] ) ; xx [ 149 ] = fabs ( xx [ 77 ] + xx [ 101 ] - xx [
128 ] - ( ( xx [ 70 ] * xx [ 64 ] + xx [ 137 ] ) * xx [ 65 ] - ( xx [ 33 ] *
xx [ 64 ] + xx [ 143 ] ) * xx [ 65 ] ) + xx [ 94 ] ) ; ii [ 0 ] = 144 ; { int
ll ; for ( ll = 145 ; ll < 150 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] )
ii [ 0 ] = ll ; } ii [ 0 ] -= 144 ; xx [ 15 ] = xx [ 144 + ( ii [ 0 ] ) ] ;
xx [ 16 ] = 1.0e-9 ; xx [ 17 ] = xx [ 15 ] - xx [ 16 ] ; if ( xx [ 17 ] < 0.0
) ii [ 1 ] = - 1 ; else if ( xx [ 17 ] > 0.0 ) ii [ 1 ] = + 1 ; else ii [ 1 ]
= 0 ; ii [ 2 ] = ii [ 1 ] ; if ( 0 > ii [ 2 ] ) ii [ 2 ] = 0 ; if ( ii [ 2 ]
!= 0 ) { switch ( ii [ 0 ] ) { case 0 : case 1 : case 2 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute B' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute B' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 15 ] = xx [ 5 ] * xx [ 159 ] ; xx [ 17 ] = sin (
xx [ 15 ] ) ; xx [ 23 ] = cos ( xx [ 15 ] ) ; xx [ 24 ] = xx [ 7 ] * xx [ 17
] ; xx [ 25 ] = xx [ 9 ] * xx [ 17 ] ; xx [ 26 ] = xx [ 10 ] * xx [ 17 ] ;
pm_math_quatCompose ( xx + 1 , xx + 23 , xx + 46 ) ; xx [ 15 ] = xx [ 5 ] *
xx [ 161 ] ; xx [ 17 ] = sin ( xx [ 15 ] ) ; xx [ 23 ] = cos ( xx [ 15 ] ) ;
xx [ 24 ] = - ( xx [ 8 ] * xx [ 17 ] ) ; xx [ 25 ] = - ( xx [ 20 ] * xx [ 17
] ) ; xx [ 26 ] = - ( xx [ 21 ] * xx [ 17 ] ) ; pm_math_quatCompose ( xx + 11
, xx + 23 , xx + 50 ) ; pm_math_quatCompose ( xx + 46 , xx + 50 , xx + 23 ) ;
pm_math_quatInverseXform ( xx + 50 , xx + 30 , xx + 33 ) ; pm_math_cross3 (
xx + 33 , xx + 36 , xx + 58 ) ; pm_math_quatXform ( xx + 23 , xx + 58 , xx +
33 ) ; pm_math_quatXform ( xx + 50 , xx + 39 , xx + 58 ) ; xx [ 39 ] = xx [ 6
] - xx [ 58 ] ; xx [ 40 ] = - ( xx [ 19 ] + xx [ 59 ] ) ; xx [ 41 ] = - ( xx
[ 45 ] + xx [ 60 ] ) ; pm_math_cross3 ( xx + 30 , xx + 39 , xx + 17 ) ;
pm_math_quatXform ( xx + 46 , xx + 17 , xx + 30 ) ; pm_math_quatXform ( xx +
46 , xx + 42 , xx + 17 ) ; pm_math_quatXform ( xx + 23 , xx + 55 , xx + 42 )
; pm_math_quatXform ( xx + 50 , xx + 61 , xx + 54 ) ; pm_math_quatXform ( xx
+ 46 , xx + 54 , xx + 57 ) ; xx [ 6 ] = xx [ 5 ] * xx [ 163 ] ; xx [ 15 ] =
cos ( xx [ 6 ] ) ; xx [ 27 ] = sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 29 ] * xx [
15 ] + xx [ 66 ] * xx [ 27 ] ; xx [ 28 ] = xx [ 66 ] * xx [ 15 ] - xx [ 29 ]
* xx [ 27 ] ; xx [ 45 ] = xx [ 68 ] * xx [ 28 ] ; xx [ 60 ] = xx [ 71 ] * xx
[ 27 ] + xx [ 72 ] * xx [ 15 ] ; xx [ 61 ] = xx [ 60 ] * xx [ 68 ] ; xx [ 62
] = xx [ 72 ] * xx [ 27 ] - xx [ 71 ] * xx [ 15 ] ; xx [ 15 ] = xx [ 67 ] *
xx [ 28 ] ; xx [ 27 ] = xx [ 60 ] * xx [ 67 ] ; xx [ 63 ] = xx [ 6 ] * xx [
15 ] - xx [ 27 ] * xx [ 62 ] ; xx [ 64 ] = xx [ 63 ] * xx [ 65 ] ; xx [ 69 ]
= xx [ 6 ] * xx [ 27 ] + xx [ 15 ] * xx [ 62 ] ; xx [ 70 ] = xx [ 65 ] * xx [
69 ] ; xx [ 73 ] = ( xx [ 15 ] * xx [ 28 ] + xx [ 60 ] * xx [ 27 ] ) * xx [
65 ] ; xx [ 15 ] = xx [ 5 ] * xx [ 165 ] ; xx [ 27 ] = sin ( xx [ 15 ] ) ; xx
[ 74 ] = cos ( xx [ 15 ] ) ; xx [ 75 ] = xx [ 84 ] * xx [ 27 ] ; xx [ 76 ] =
xx [ 86 ] * xx [ 27 ] ; xx [ 77 ] = - ( xx [ 87 ] * xx [ 27 ] ) ;
pm_math_quatCompose ( xx + 79 , xx + 74 , xx + 92 ) ; xx [ 15 ] = xx [ 5 ] *
xx [ 167 ] ; xx [ 27 ] = sin ( xx [ 15 ] ) ; xx [ 74 ] = cos ( xx [ 15 ] ) ;
xx [ 75 ] = xx [ 85 ] * xx [ 27 ] ; xx [ 76 ] = xx [ 97 ] * xx [ 27 ] ; xx [
77 ] = xx [ 98 ] * xx [ 27 ] ; pm_math_quatCompose ( xx + 88 , xx + 74 , xx +
99 ) ; pm_math_quatCompose ( xx + 92 , xx + 99 , xx + 74 ) ;
pm_math_quatInverseXform ( xx + 99 , xx + 107 , xx + 103 ) ; pm_math_cross3 (
xx + 103 , xx + 113 , xx + 110 ) ; pm_math_quatXform ( xx + 74 , xx + 110 ,
xx + 103 ) ; pm_math_quatXform ( xx + 99 , xx + 116 , xx + 110 ) ; xx [ 116 ]
= xx [ 83 ] - xx [ 110 ] ; xx [ 117 ] = - ( xx [ 96 ] + xx [ 111 ] ) ; xx [
118 ] = xx [ 122 ] - xx [ 112 ] ; pm_math_cross3 ( xx + 107 , xx + 116 , xx +
110 ) ; pm_math_quatXform ( xx + 92 , xx + 110 , xx + 106 ) ;
pm_math_quatXform ( xx + 92 , xx + 119 , xx + 109 ) ; pm_math_quatXform ( xx
+ 74 , xx + 132 , xx + 119 ) ; pm_math_quatXform ( xx + 99 , xx + 138 , xx +
122 ) ; pm_math_quatXform ( xx + 92 , xx + 122 , xx + 125 ) ; xx [ 15 ] = xx
[ 5 ] * xx [ 169 ] ; xx [ 27 ] = cos ( xx [ 15 ] ) ; xx [ 83 ] = sin ( xx [
15 ] ) ; xx [ 15 ] = xx [ 29 ] * xx [ 27 ] + xx [ 66 ] * xx [ 83 ] ; xx [ 96
] = xx [ 66 ] * xx [ 27 ] - xx [ 29 ] * xx [ 83 ] ; xx [ 112 ] = xx [ 68 ] *
xx [ 96 ] ; xx [ 128 ] = xx [ 71 ] * xx [ 83 ] + xx [ 72 ] * xx [ 27 ] ; xx [
129 ] = xx [ 128 ] * xx [ 68 ] ; xx [ 130 ] = xx [ 72 ] * xx [ 83 ] - xx [ 71
] * xx [ 27 ] ; xx [ 27 ] = xx [ 67 ] * xx [ 96 ] ; xx [ 83 ] = xx [ 128 ] *
xx [ 67 ] ; xx [ 131 ] = xx [ 15 ] * xx [ 27 ] - xx [ 83 ] * xx [ 130 ] ; xx
[ 132 ] = xx [ 131 ] * xx [ 65 ] ; xx [ 133 ] = xx [ 15 ] * xx [ 83 ] + xx [
27 ] * xx [ 130 ] ; xx [ 134 ] = xx [ 65 ] * xx [ 133 ] ; xx [ 135 ] = ( xx [
27 ] * xx [ 96 ] + xx [ 128 ] * xx [ 83 ] ) * xx [ 65 ] ; xx [ 175 ] = xx [ 0
] ; xx [ 176 ] = xx [ 0 ] ; xx [ 177 ] = xx [ 0 ] ; xx [ 178 ] = xx [ 0 ] ;
xx [ 179 ] = xx [ 33 ] + xx [ 30 ] + xx [ 17 ] ; xx [ 180 ] = xx [ 42 ] + xx
[ 57 ] ; xx [ 181 ] = - ( ( xx [ 6 ] * xx [ 45 ] - xx [ 61 ] * xx [ 62 ] ) *
xx [ 65 ] + xx [ 64 ] ) ; xx [ 182 ] = xx [ 0 ] ; xx [ 183 ] = xx [ 0 ] ; xx
[ 184 ] = xx [ 0 ] ; xx [ 185 ] = xx [ 0 ] ; xx [ 186 ] = xx [ 0 ] ; xx [ 187
] = xx [ 0 ] ; xx [ 188 ] = xx [ 0 ] ; xx [ 189 ] = xx [ 34 ] + xx [ 31 ] +
xx [ 18 ] ; xx [ 190 ] = xx [ 43 ] + xx [ 58 ] ; xx [ 191 ] = xx [ 65 ] * (
xx [ 6 ] * xx [ 61 ] + xx [ 45 ] * xx [ 62 ] ) + xx [ 70 ] ; xx [ 192 ] = xx
[ 0 ] ; xx [ 193 ] = xx [ 0 ] ; xx [ 194 ] = xx [ 0 ] ; xx [ 195 ] = xx [ 0 ]
; xx [ 196 ] = xx [ 0 ] ; xx [ 197 ] = xx [ 0 ] ; xx [ 198 ] = xx [ 0 ] ; xx
[ 199 ] = xx [ 35 ] + xx [ 32 ] + xx [ 19 ] ; xx [ 200 ] = xx [ 44 ] + xx [
59 ] ; xx [ 201 ] = ( xx [ 45 ] * xx [ 28 ] + xx [ 60 ] * xx [ 61 ] ) * xx [
65 ] + xx [ 73 ] - xx [ 78 ] ; xx [ 202 ] = xx [ 0 ] ; xx [ 203 ] = xx [ 0 ]
; xx [ 204 ] = xx [ 0 ] ; xx [ 205 ] = xx [ 0 ] ; xx [ 206 ] = xx [ 0 ] ; xx
[ 207 ] = xx [ 0 ] ; xx [ 208 ] = xx [ 0 ] ; xx [ 209 ] = xx [ 0 ] ; xx [ 210
] = xx [ 0 ] ; xx [ 211 ] = xx [ 0 ] ; xx [ 212 ] = xx [ 103 ] + xx [ 106 ] +
xx [ 109 ] ; xx [ 213 ] = xx [ 119 ] + xx [ 125 ] ; xx [ 214 ] = - ( ( xx [
15 ] * xx [ 112 ] - xx [ 129 ] * xx [ 130 ] ) * xx [ 65 ] + xx [ 132 ] ) ; xx
[ 215 ] = xx [ 0 ] ; xx [ 216 ] = xx [ 0 ] ; xx [ 217 ] = xx [ 0 ] ; xx [ 218
] = xx [ 0 ] ; xx [ 219 ] = xx [ 0 ] ; xx [ 220 ] = xx [ 0 ] ; xx [ 221 ] =
xx [ 0 ] ; xx [ 222 ] = xx [ 104 ] + xx [ 107 ] + xx [ 110 ] ; xx [ 223 ] =
xx [ 120 ] + xx [ 126 ] ; xx [ 224 ] = xx [ 65 ] * ( xx [ 15 ] * xx [ 129 ] +
xx [ 112 ] * xx [ 130 ] ) + xx [ 134 ] ; xx [ 225 ] = xx [ 0 ] ; xx [ 226 ] =
xx [ 0 ] ; xx [ 227 ] = xx [ 0 ] ; xx [ 228 ] = xx [ 0 ] ; xx [ 229 ] = xx [
0 ] ; xx [ 230 ] = xx [ 0 ] ; xx [ 231 ] = xx [ 0 ] ; xx [ 232 ] = xx [ 105 ]
+ xx [ 108 ] + xx [ 111 ] ; xx [ 233 ] = xx [ 121 ] + xx [ 127 ] ; xx [ 234 ]
= ( xx [ 112 ] * xx [ 96 ] + xx [ 128 ] * xx [ 129 ] ) * xx [ 65 ] + xx [ 135
] - xx [ 78 ] ; xx [ 0 ] = xx [ 68 ] * xx [ 164 ] ; xx [ 27 ] = xx [ 60 ] *
xx [ 0 ] ; xx [ 30 ] = xx [ 0 ] * xx [ 28 ] ; xx [ 31 ] = xx [ 7 ] * xx [ 160
] ; xx [ 32 ] = xx [ 9 ] * xx [ 160 ] ; xx [ 33 ] = xx [ 10 ] * xx [ 160 ] ;
pm_math_quatInverseXform ( xx + 50 , xx + 31 , xx + 42 ) ; xx [ 57 ] = xx [
42 ] - xx [ 8 ] * xx [ 162 ] ; xx [ 58 ] = xx [ 43 ] - xx [ 20 ] * xx [ 162 ]
; xx [ 59 ] = xx [ 44 ] - xx [ 21 ] * xx [ 162 ] ; pm_math_cross3 ( xx + 57 ,
xx + 36 , xx + 42 ) ; pm_math_quatXform ( xx + 23 , xx + 42 , xx + 57 ) ;
pm_math_cross3 ( xx + 31 , xx + 39 , xx + 42 ) ; xx [ 31 ] = xx [ 54 ] * xx [
162 ] + xx [ 42 ] ; xx [ 32 ] = xx [ 55 ] * xx [ 162 ] + xx [ 43 ] ; xx [ 33
] = xx [ 56 ] * xx [ 162 ] + xx [ 44 ] ; pm_math_quatXform ( xx + 46 , xx +
31 , xx + 42 ) ; xx [ 31 ] = xx [ 67 ] - xx [ 73 ] ; xx [ 32 ] = xx [ 68 ] *
xx [ 170 ] ; xx [ 33 ] = xx [ 128 ] * xx [ 32 ] ; xx [ 34 ] = xx [ 32 ] * xx
[ 96 ] ; xx [ 103 ] = xx [ 84 ] * xx [ 166 ] ; xx [ 104 ] = xx [ 86 ] * xx [
166 ] ; xx [ 105 ] = - ( xx [ 87 ] * xx [ 166 ] ) ; pm_math_quatInverseXform
( xx + 99 , xx + 103 , xx + 106 ) ; xx [ 119 ] = xx [ 106 ] + xx [ 85 ] * xx
[ 168 ] ; xx [ 120 ] = xx [ 107 ] + xx [ 97 ] * xx [ 168 ] ; xx [ 121 ] = xx
[ 108 ] + xx [ 98 ] * xx [ 168 ] ; pm_math_cross3 ( xx + 119 , xx + 113 , xx
+ 106 ) ; pm_math_quatXform ( xx + 74 , xx + 106 , xx + 119 ) ;
pm_math_cross3 ( xx + 103 , xx + 116 , xx + 106 ) ; xx [ 103 ] = xx [ 122 ] *
xx [ 168 ] + xx [ 106 ] ; xx [ 104 ] = xx [ 123 ] * xx [ 168 ] + xx [ 107 ] ;
xx [ 105 ] = xx [ 124 ] * xx [ 168 ] + xx [ 108 ] ; pm_math_quatXform ( xx +
92 , xx + 103 , xx + 106 ) ; xx [ 35 ] = xx [ 67 ] - xx [ 135 ] ; xx [ 135 ]
= xx [ 65 ] * xx [ 63 ] * xx [ 164 ] - ( xx [ 27 ] * xx [ 62 ] - xx [ 6 ] *
xx [ 30 ] ) * xx [ 65 ] - ( xx [ 57 ] + xx [ 17 ] * xx [ 160 ] + xx [ 42 ] )
; xx [ 136 ] = - ( xx [ 65 ] * ( xx [ 30 ] * xx [ 62 ] + xx [ 6 ] * xx [ 27 ]
) + xx [ 65 ] * xx [ 164 ] * xx [ 69 ] + xx [ 58 ] + xx [ 18 ] * xx [ 160 ] +
xx [ 43 ] ) ; xx [ 137 ] = xx [ 0 ] - ( xx [ 30 ] * xx [ 28 ] + xx [ 60 ] *
xx [ 27 ] ) * xx [ 65 ] + xx [ 164 ] * xx [ 31 ] - ( xx [ 59 ] + xx [ 19 ] *
xx [ 160 ] + xx [ 44 ] ) ; xx [ 138 ] = xx [ 65 ] * xx [ 131 ] * xx [ 170 ] -
( xx [ 33 ] * xx [ 130 ] - xx [ 15 ] * xx [ 34 ] ) * xx [ 65 ] - ( xx [ 119 ]
+ xx [ 109 ] * xx [ 166 ] + xx [ 106 ] ) ; xx [ 139 ] = - ( xx [ 65 ] * ( xx
[ 34 ] * xx [ 130 ] + xx [ 15 ] * xx [ 33 ] ) + xx [ 65 ] * xx [ 170 ] * xx [
133 ] + xx [ 120 ] + xx [ 110 ] * xx [ 166 ] + xx [ 107 ] ) ; xx [ 140 ] = xx
[ 32 ] - ( xx [ 34 ] * xx [ 96 ] + xx [ 128 ] * xx [ 33 ] ) * xx [ 65 ] + xx
[ 170 ] * xx [ 35 ] - ( xx [ 121 ] + xx [ 111 ] * xx [ 166 ] + xx [ 108 ] ) ;
memcpy ( xx + 235 , xx + 175 , 60 * sizeof ( double ) ) ; factorAndSolveWide
( 6 , 10 , xx + 235 , xx + 103 , xx + 295 , ii + 0 , xx + 135 , xx [ 22 ] ,
xx + 141 ) ; xx [ 0 ] = xx [ 160 ] + xx [ 145 ] ; xx [ 22 ] = xx [ 162 ] + xx
[ 146 ] ; xx [ 27 ] = xx [ 164 ] + xx [ 147 ] ; xx [ 30 ] = xx [ 166 ] + xx [
148 ] ; xx [ 32 ] = xx [ 168 ] + xx [ 149 ] ; xx [ 33 ] = xx [ 170 ] + xx [
150 ] ; xx [ 175 ] = xx [ 151 ] ; xx [ 176 ] = xx [ 152 ] + xx [ 141 ] ; xx [
177 ] = xx [ 153 ] ; xx [ 178 ] = xx [ 154 ] + xx [ 142 ] ; xx [ 179 ] = xx [
155 ] ; xx [ 180 ] = xx [ 156 ] + xx [ 143 ] ; xx [ 181 ] = xx [ 157 ] ; xx [
182 ] = xx [ 158 ] + xx [ 144 ] ; xx [ 183 ] = xx [ 159 ] ; xx [ 184 ] = xx [
0 ] ; xx [ 185 ] = xx [ 161 ] ; xx [ 186 ] = xx [ 22 ] ; xx [ 187 ] = xx [
163 ] ; xx [ 188 ] = xx [ 27 ] ; xx [ 189 ] = xx [ 165 ] ; xx [ 190 ] = xx [
30 ] ; xx [ 191 ] = xx [ 167 ] ; xx [ 192 ] = xx [ 32 ] ; xx [ 193 ] = xx [
169 ] ; xx [ 194 ] = xx [ 33 ] ; xx [ 195 ] = xx [ 171 ] ; xx [ 196 ] = xx [
172 ] ; xx [ 197 ] = xx [ 173 ] ; xx [ 198 ] = xx [ 174 ] ; xx [ 42 ] = xx [
0 ] * xx [ 7 ] ; xx [ 43 ] = xx [ 0 ] * xx [ 9 ] ; xx [ 44 ] = xx [ 0 ] * xx
[ 10 ] ; pm_math_quatInverseXform ( xx + 50 , xx + 42 , xx + 57 ) ; xx [ 50 ]
= xx [ 57 ] - xx [ 22 ] * xx [ 8 ] ; xx [ 51 ] = xx [ 58 ] - xx [ 22 ] * xx [
20 ] ; xx [ 52 ] = xx [ 59 ] - xx [ 22 ] * xx [ 21 ] ; pm_math_cross3 ( xx +
50 , xx + 36 , xx + 57 ) ; pm_math_quatXform ( xx + 23 , xx + 57 , xx + 36 )
; pm_math_cross3 ( xx + 42 , xx + 39 , xx + 23 ) ; xx [ 39 ] = xx [ 22 ] * xx
[ 54 ] + xx [ 23 ] ; xx [ 40 ] = xx [ 22 ] * xx [ 55 ] + xx [ 24 ] ; xx [ 41
] = xx [ 22 ] * xx [ 56 ] + xx [ 25 ] ; pm_math_quatXform ( xx + 46 , xx + 39
, xx + 22 ) ; xx [ 25 ] = xx [ 27 ] * xx [ 68 ] ; xx [ 26 ] = xx [ 60 ] * xx
[ 25 ] ; xx [ 34 ] = xx [ 25 ] * xx [ 28 ] ; xx [ 39 ] = xx [ 30 ] * xx [ 84
] ; xx [ 40 ] = xx [ 30 ] * xx [ 86 ] ; xx [ 41 ] = - ( xx [ 30 ] * xx [ 87 ]
) ; pm_math_quatInverseXform ( xx + 99 , xx + 39 , xx + 42 ) ; xx [ 45 ] = xx
[ 42 ] + xx [ 32 ] * xx [ 85 ] ; xx [ 46 ] = xx [ 43 ] + xx [ 32 ] * xx [ 97
] ; xx [ 47 ] = xx [ 44 ] + xx [ 32 ] * xx [ 98 ] ; pm_math_cross3 ( xx + 45
, xx + 113 , xx + 42 ) ; pm_math_quatXform ( xx + 74 , xx + 42 , xx + 45 ) ;
pm_math_cross3 ( xx + 39 , xx + 116 , xx + 42 ) ; xx [ 39 ] = xx [ 32 ] * xx
[ 122 ] + xx [ 42 ] ; xx [ 40 ] = xx [ 32 ] * xx [ 123 ] + xx [ 43 ] ; xx [
41 ] = xx [ 32 ] * xx [ 124 ] + xx [ 44 ] ; pm_math_quatXform ( xx + 92 , xx
+ 39 , xx + 42 ) ; xx [ 32 ] = xx [ 33 ] * xx [ 68 ] ; xx [ 39 ] = xx [ 128 ]
* xx [ 32 ] ; xx [ 40 ] = xx [ 32 ] * xx [ 96 ] ; xx [ 48 ] = fabs ( xx [ 36
] + xx [ 0 ] * xx [ 17 ] + xx [ 22 ] - ( xx [ 27 ] * xx [ 64 ] - ( xx [ 26 ]
* xx [ 62 ] - xx [ 6 ] * xx [ 34 ] ) * xx [ 65 ] ) ) ; xx [ 49 ] = fabs ( xx
[ 37 ] + xx [ 0 ] * xx [ 18 ] + xx [ 23 ] + xx [ 65 ] * ( xx [ 34 ] * xx [ 62
] + xx [ 6 ] * xx [ 26 ] ) + xx [ 27 ] * xx [ 70 ] ) ; xx [ 50 ] = fabs ( xx
[ 38 ] + xx [ 0 ] * xx [ 19 ] + xx [ 24 ] - ( xx [ 25 ] - ( xx [ 34 ] * xx [
28 ] + xx [ 60 ] * xx [ 26 ] ) * xx [ 65 ] + xx [ 27 ] * xx [ 31 ] ) ) ; xx [
51 ] = fabs ( xx [ 45 ] + xx [ 30 ] * xx [ 109 ] + xx [ 42 ] - ( xx [ 33 ] *
xx [ 132 ] - ( xx [ 39 ] * xx [ 130 ] - xx [ 15 ] * xx [ 40 ] ) * xx [ 65 ] )
) ; xx [ 52 ] = fabs ( xx [ 46 ] + xx [ 30 ] * xx [ 110 ] + xx [ 43 ] + xx [
65 ] * ( xx [ 40 ] * xx [ 130 ] + xx [ 15 ] * xx [ 39 ] ) + xx [ 33 ] * xx [
134 ] ) ; xx [ 53 ] = fabs ( xx [ 47 ] + xx [ 30 ] * xx [ 111 ] + xx [ 44 ] -
( xx [ 32 ] - ( xx [ 40 ] * xx [ 96 ] + xx [ 128 ] * xx [ 39 ] ) * xx [ 65 ]
+ xx [ 33 ] * xx [ 35 ] ) ) ; ii [ 0 ] = 48 ; { int ll ; for ( ll = 49 ; ll <
54 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -=
48 ; xx [ 0 ] = xx [ 48 + ( ii [ 0 ] ) ] ; xx [ 6 ] = xx [ 0 ] - xx [ 16 ] ;
if ( xx [ 6 ] < 0.0 ) ii [ 1 ] = - 1 ; else if ( xx [ 6 ] > 0.0 ) ii [ 1 ] =
+ 1 ; else ii [ 1 ] = 0 ; ii [ 2 ] = ii [ 1 ] ; if ( 0 > ii [ 2 ] ) ii [ 2 ]
= 0 ; if ( ii [ 2 ] != 0 ) { switch ( ii [ 0 ] ) { case 0 : case 1 : case 2 :
{ return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute B' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute B' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 15 ] = 3.393780417072501e-4 ; xx [ 16 ] =
0.1217147440922071 ; xx [ 17 ] = 2.437305475440299e-3 ; xx [ 18 ] = -
0.9925620713260872 ; xx [ 0 ] = xx [ 5 ] * xx [ 187 ] ; xx [ 6 ] = sin ( xx [
0 ] ) ; xx [ 19 ] = cos ( xx [ 0 ] ) ; xx [ 22 ] = xx [ 72 ] * xx [ 6 ] - xx
[ 71 ] * xx [ 19 ] ; xx [ 23 ] = xx [ 66 ] * xx [ 19 ] - xx [ 29 ] * xx [ 6 ]
; xx [ 24 ] = - ( xx [ 71 ] * xx [ 6 ] + xx [ 72 ] * xx [ 19 ] ) ; xx [ 25 ]
= xx [ 29 ] * xx [ 19 ] + xx [ 66 ] * xx [ 6 ] ; xx [ 0 ] = xx [ 5 ] * xx [
183 ] ; xx [ 6 ] = sin ( xx [ 0 ] ) ; xx [ 30 ] = cos ( xx [ 0 ] ) ; xx [ 31
] = xx [ 7 ] * xx [ 6 ] ; xx [ 32 ] = xx [ 9 ] * xx [ 6 ] ; xx [ 33 ] = xx [
10 ] * xx [ 6 ] ; pm_math_quatCompose ( xx + 1 , xx + 30 , xx + 34 ) ; xx [ 0
] = xx [ 5 ] * xx [ 185 ] ; xx [ 1 ] = sin ( xx [ 0 ] ) ; xx [ 30 ] = cos (
xx [ 0 ] ) ; xx [ 31 ] = - ( xx [ 8 ] * xx [ 1 ] ) ; xx [ 32 ] = - ( xx [ 20
] * xx [ 1 ] ) ; xx [ 33 ] = - ( xx [ 21 ] * xx [ 1 ] ) ; pm_math_quatCompose
( xx + 11 , xx + 30 , xx + 0 ) ; pm_math_quatCompose ( xx + 34 , xx + 0 , xx
+ 11 ) ; pm_math_quatInverseCompose ( xx + 22 , xx + 11 , xx + 30 ) ;
pm_math_quatInverseCompose ( xx + 15 , xx + 30 , xx + 11 ) ; xx [ 15 ] = xx [
85 ] ; xx [ 16 ] = xx [ 97 ] ; xx [ 17 ] = xx [ 98 ] ; xx [ 38 ] = -
0.999999999999855 ; xx [ 39 ] = - 2.870853866298734e-7 ; xx [ 40 ] =
4.297010822439871e-7 ; xx [ 41 ] = - 1.513696003818457e-7 ; xx [ 4 ] = xx [ 5
] * xx [ 181 ] ; xx [ 6 ] = sin ( xx [ 4 ] ) ; xx [ 18 ] =
1.253430232384112e-7 ; xx [ 19 ] = 7.929375664961213e-7 ; xx [ 42 ] = cos (
xx [ 4 ] ) ; xx [ 43 ] = - xx [ 6 ] ; xx [ 44 ] = xx [ 18 ] * xx [ 6 ] ; xx [
45 ] = xx [ 19 ] * xx [ 6 ] ; pm_math_quatCompose ( xx + 38 , xx + 42 , xx +
46 ) ; xx [ 38 ] = - 0.9999999980191991 ; xx [ 39 ] = 2.23856606067822e-7 ;
xx [ 40 ] = - 3.321689057863772e-8 ; xx [ 41 ] = - 6.294084901737286e-5 ; xx
[ 4 ] = xx [ 5 ] * xx [ 179 ] ; xx [ 6 ] = 6.646453320689627e-8 ; xx [ 26 ] =
sin ( xx [ 4 ] ) ; xx [ 27 ] = 4.477090296885221e-7 ; xx [ 42 ] = cos ( xx [
4 ] ) ; xx [ 43 ] = - ( xx [ 6 ] * xx [ 26 ] ) ; xx [ 44 ] = - ( xx [ 27 ] *
xx [ 26 ] ) ; xx [ 45 ] = xx [ 26 ] ; pm_math_quatCompose ( xx + 38 , xx + 42
, xx + 50 ) ; xx [ 38 ] = - 0.9998475545126857 ; xx [ 39 ] =
4.62807808743193e-9 ; xx [ 40 ] = 1.445651376386081e-10 ; xx [ 41 ] = -
0.01746046205007074 ; xx [ 4 ] = xx [ 5 ] * xx [ 177 ] ; xx [ 26 ] =
1.260590941853934e-4 ; xx [ 28 ] = sin ( xx [ 4 ] ) ; xx [ 42 ] =
0.9999999920545524 ; xx [ 43 ] = 1.774136393351e-12 ; xx [ 54 ] = cos ( xx [
4 ] ) ; xx [ 55 ] = - ( xx [ 26 ] * xx [ 28 ] ) ; xx [ 56 ] = xx [ 42 ] * xx
[ 28 ] ; xx [ 57 ] = xx [ 43 ] * xx [ 28 ] ; pm_math_quatCompose ( xx + 38 ,
xx + 54 , xx + 58 ) ; xx [ 38 ] = - ( 0.03504158251691365 * xx [ 176 ] ) ; xx
[ 39 ] = 0.9993858551604131 * xx [ 176 ] ; xx [ 40 ] = - (
9.258035449377644e-9 * xx [ 176 ] ) ; pm_math_quatInverseXform ( xx + 58 , xx
+ 38 , xx + 54 ) ; xx [ 38 ] = xx [ 54 ] - xx [ 26 ] * xx [ 178 ] ; xx [ 39 ]
= xx [ 55 ] + xx [ 42 ] * xx [ 178 ] ; xx [ 40 ] = xx [ 56 ] + xx [ 43 ] * xx
[ 178 ] ; pm_math_quatInverseXform ( xx + 50 , xx + 38 , xx + 41 ) ; xx [ 38
] = xx [ 41 ] - xx [ 6 ] * xx [ 180 ] ; xx [ 39 ] = xx [ 42 ] - xx [ 27 ] *
xx [ 180 ] ; xx [ 40 ] = xx [ 43 ] + xx [ 180 ] ; pm_math_quatInverseXform (
xx + 46 , xx + 38 , xx + 26 ) ; xx [ 38 ] = xx [ 26 ] - xx [ 182 ] ; xx [ 39
] = xx [ 27 ] + xx [ 18 ] * xx [ 182 ] ; xx [ 40 ] = xx [ 28 ] + xx [ 19 ] *
xx [ 182 ] ; pm_math_quatInverseXform ( xx + 34 , xx + 38 , xx + 26 ) ; xx [
34 ] = xx [ 26 ] + xx [ 7 ] * xx [ 184 ] ; xx [ 35 ] = xx [ 27 ] + xx [ 9 ] *
xx [ 184 ] ; xx [ 36 ] = xx [ 28 ] + xx [ 10 ] * xx [ 184 ] ;
pm_math_quatInverseXform ( xx + 0 , xx + 34 , xx + 26 ) ;
pm_math_quatInverseXform ( xx + 22 , xx + 38 , xx + 0 ) ; xx [ 22 ] = xx [ 0
] ; xx [ 23 ] = xx [ 1 ] + xx [ 188 ] ; xx [ 24 ] = xx [ 2 ] ;
pm_math_quatInverseXform ( xx + 30 , xx + 22 , xx + 0 ) ; xx [ 22 ] = xx [ 26
] - xx [ 8 ] * xx [ 186 ] - xx [ 0 ] ; xx [ 23 ] = xx [ 27 ] - xx [ 20 ] * xx
[ 186 ] - xx [ 1 ] ; xx [ 24 ] = xx [ 28 ] - xx [ 21 ] * xx [ 186 ] - xx [ 2
] ; xx [ 0 ] = - 0.9925620713260874 ; xx [ 1 ] = 2.437305475440188e-3 ; xx [
2 ] = - 0.1217147440922072 ; xx [ 3 ] = - 3.393780417073611e-4 ; xx [ 4 ] =
xx [ 5 ] * xx [ 193 ] ; xx [ 6 ] = sin ( xx [ 4 ] ) ; xx [ 7 ] = cos ( xx [ 4
] ) ; xx [ 25 ] = xx [ 72 ] * xx [ 6 ] - xx [ 71 ] * xx [ 7 ] ; xx [ 26 ] =
xx [ 66 ] * xx [ 7 ] - xx [ 29 ] * xx [ 6 ] ; xx [ 27 ] = - ( xx [ 71 ] * xx
[ 6 ] + xx [ 72 ] * xx [ 7 ] ) ; xx [ 28 ] = xx [ 29 ] * xx [ 7 ] + xx [ 66 ]
* xx [ 6 ] ; xx [ 4 ] = xx [ 5 ] * xx [ 189 ] ; xx [ 6 ] = sin ( xx [ 4 ] ) ;
xx [ 29 ] = cos ( xx [ 4 ] ) ; xx [ 30 ] = xx [ 84 ] * xx [ 6 ] ; xx [ 31 ] =
xx [ 86 ] * xx [ 6 ] ; xx [ 32 ] = - ( xx [ 87 ] * xx [ 6 ] ) ;
pm_math_quatCompose ( xx + 79 , xx + 29 , xx + 33 ) ; xx [ 4 ] = xx [ 5 ] *
xx [ 191 ] ; xx [ 5 ] = sin ( xx [ 4 ] ) ; xx [ 29 ] = cos ( xx [ 4 ] ) ; xx
[ 30 ] = xx [ 85 ] * xx [ 5 ] ; xx [ 31 ] = xx [ 97 ] * xx [ 5 ] ; xx [ 32 ]
= xx [ 98 ] * xx [ 5 ] ; pm_math_quatCompose ( xx + 88 , xx + 29 , xx + 4 ) ;
pm_math_quatCompose ( xx + 33 , xx + 4 , xx + 29 ) ;
pm_math_quatInverseCompose ( xx + 25 , xx + 29 , xx + 41 ) ;
pm_math_quatInverseCompose ( xx + 0 , xx + 41 , xx + 29 ) ; xx [ 0 ] = - xx [
8 ] ; xx [ 1 ] = - xx [ 20 ] ; xx [ 2 ] = - xx [ 21 ] ;
pm_math_quatInverseXform ( xx + 33 , xx + 38 , xx + 8 ) ; xx [ 18 ] = xx [ 8
] + xx [ 84 ] * xx [ 190 ] ; xx [ 19 ] = xx [ 9 ] + xx [ 86 ] * xx [ 190 ] ;
xx [ 20 ] = xx [ 10 ] - xx [ 87 ] * xx [ 190 ] ; pm_math_quatInverseXform (
xx + 4 , xx + 18 , xx + 8 ) ; pm_math_quatInverseXform ( xx + 25 , xx + 38 ,
xx + 3 ) ; xx [ 18 ] = xx [ 3 ] ; xx [ 19 ] = xx [ 4 ] + xx [ 194 ] ; xx [ 20
] = xx [ 5 ] ; pm_math_quatInverseXform ( xx + 41 , xx + 18 , xx + 3 ) ; xx [
18 ] = xx [ 8 ] + xx [ 85 ] * xx [ 192 ] - xx [ 3 ] ; xx [ 19 ] = xx [ 9 ] +
xx [ 97 ] * xx [ 192 ] - xx [ 4 ] ; xx [ 20 ] = xx [ 10 ] + xx [ 98 ] * xx [
192 ] - xx [ 5 ] ; state [ 0 ] = xx [ 175 ] ; state [ 1 ] = xx [ 176 ] ;
state [ 2 ] = xx [ 177 ] ; state [ 3 ] = xx [ 178 ] ; state [ 4 ] = xx [ 179
] ; state [ 5 ] = xx [ 180 ] ; state [ 6 ] = xx [ 181 ] ; state [ 7 ] = xx [
182 ] ; state [ 8 ] = xx [ 183 ] ; state [ 9 ] = xx [ 184 ] ; state [ 10 ] =
xx [ 185 ] ; state [ 11 ] = xx [ 186 ] ; state [ 12 ] = xx [ 187 ] ; state [
13 ] = xx [ 188 ] ; state [ 14 ] = xx [ 189 ] ; state [ 15 ] = xx [ 190 ] ;
state [ 16 ] = xx [ 191 ] ; state [ 17 ] = xx [ 192 ] ; state [ 18 ] = xx [
193 ] ; state [ 19 ] = xx [ 194 ] ; state [ 20 ] = xx [ 195 ] +
sm_core_canonicalAngle ( xx [ 65 ] * atan2 ( sqrt ( xx [ 12 ] * xx [ 12 ] +
xx [ 13 ] * xx [ 13 ] + xx [ 14 ] * xx [ 14 ] ) , fabs ( xx [ 11 ] ) ) * ( (
pm_math_dot3 ( xx + 12 , xx + 15 ) * xx [ 11 ] ) < 0.0 ? - 1.0 : + 1.0 ) - xx
[ 195 ] ) ; state [ 21 ] = pm_math_dot3 ( xx + 22 , xx + 15 ) ; state [ 22 ]
= xx [ 197 ] + sm_core_canonicalAngle ( xx [ 65 ] * atan2 ( sqrt ( xx [ 30 ]
* xx [ 30 ] + xx [ 31 ] * xx [ 31 ] + xx [ 32 ] * xx [ 32 ] ) , fabs ( xx [
29 ] ) ) * ( ( pm_math_dot3 ( xx + 30 , xx + 0 ) * xx [ 29 ] ) < 0.0 ? - 1.0
: + 1.0 ) - xx [ 197 ] ) ; state [ 23 ] = pm_math_dot3 ( xx + 18 , xx + 0 ) ;
return NULL ; }
