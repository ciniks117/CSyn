#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void cst_robotarm_98bf360f_6_setTargets ( const RuntimeDerivedValuesBundle *
rtdv , CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
cst_robotarm_98bf360f_6_resetAsmStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [
0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0
] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ]
; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ]
; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ]
; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ]
; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ]
; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx [ 0 ]
; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx [ 0 ]
; state [ 28 ] = xx [ 0 ] ; } static PmfMessageId
initializeTrackedAngleState_0 ( const RuntimeDerivedValuesBundle * rtdv ,
const int * modeVector , const double * motionData , double * state ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 18 ] ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) neDiagMgr ;
xx [ 0 ] = 0.3903970898504619 ; xx [ 1 ] = 0.4638409844798791 ; xx [ 2 ] =
0.6471879634523136 ; xx [ 3 ] = 0.4621573252859613 ; xx [ 4 ] = - motionData
[ 84 ] ; xx [ 5 ] = - motionData [ 85 ] ; xx [ 6 ] = - motionData [ 86 ] ; xx
[ 7 ] = - motionData [ 87 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 0 ,
xx + 4 , xx + 8 ) ; xx [ 0 ] = 0.9606008463440403 ; xx [ 1 ] =
0.2033682862169496 ; xx [ 2 ] = - 0.1894395791916108 ; xx [ 12 ] = motionData
[ 149 ] ; xx [ 13 ] = motionData [ 150 ] ; xx [ 14 ] = motionData [ 151 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 12 , xx + 15 ) ; xx [ 3 ]
= motionData [ 179 ] - xx [ 15 ] ; xx [ 4 ] = motionData [ 180 ] - xx [ 16 ]
; xx [ 5 ] = motionData [ 181 ] - xx [ 17 ] ; state [ 22 ] =
sm_core_canonicalAngle ( 2.0 * ( ( pm_math_Vector3_dot_ra ( xx + 9 , xx + 0 )
* xx [ 8 ] ) < 0.0 ? - 1.0 : + 1.0 ) * atan2 ( sqrt ( xx [ 9 ] * xx [ 9 ] +
xx [ 10 ] * xx [ 10 ] + xx [ 11 ] * xx [ 11 ] ) , fabs ( xx [ 8 ] ) ) ) ;
state [ 23 ] = pm_math_Vector3_dot_ra ( xx + 3 , xx + 0 ) ; return NULL ; }
static PmfMessageId initializeTrackedAngleState_1 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * state , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 18 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) neDiagMgr ; xx [ 0 ] = 0.245648950422414 ; xx [ 1 ] =
0.371074456249555 ; xx [ 2 ] = 0.7205531756845295 ; xx [ 3 ] =
0.5317550771609079 ; xx [ 4 ] = - motionData [ 105 ] ; xx [ 5 ] = -
motionData [ 106 ] ; xx [ 6 ] = - motionData [ 107 ] ; xx [ 7 ] = -
motionData [ 108 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 4 ,
xx + 8 ) ; xx [ 0 ] = 0.9606008463440439 ; xx [ 1 ] = 0.2033682862169333 ; xx
[ 2 ] = 0.1894395791916105 ; xx [ 12 ] = motionData [ 149 ] ; xx [ 13 ] =
motionData [ 150 ] ; xx [ 14 ] = motionData [ 151 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 12 , xx + 15 ) ; xx [ 3 ]
= motionData [ 167 ] - xx [ 15 ] ; xx [ 4 ] = motionData [ 168 ] - xx [ 16 ]
; xx [ 5 ] = motionData [ 169 ] - xx [ 17 ] ; state [ 24 ] =
sm_core_canonicalAngle ( 2.0 * ( ( pm_math_Vector3_dot_ra ( xx + 9 , xx + 0 )
* xx [ 8 ] ) < 0.0 ? - 1.0 : + 1.0 ) * atan2 ( sqrt ( xx [ 9 ] * xx [ 9 ] +
xx [ 10 ] * xx [ 10 ] + xx [ 11 ] * xx [ 11 ] ) , fabs ( xx [ 8 ] ) ) ) ;
state [ 25 ] = pm_math_Vector3_dot_ra ( xx + 3 , xx + 0 ) ; return NULL ; }
static PmfMessageId initializeTrackedAngleState_2 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * state , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 28 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) neDiagMgr ; xx [ 0 ] = motionData [ 35 ] ; xx [ 1 ] =
motionData [ 36 ] ; xx [ 2 ] = motionData [ 37 ] ; xx [ 3 ] = motionData [ 38
] ; xx [ 4 ] = 0.01025445069467229 ; xx [ 5 ] = - 9.847964366436174e-3 ; xx [
6 ] = - 0.01014277598357412 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 ,
xx + 7 ) ; xx [ 10 ] = motionData [ 28 ] ; xx [ 11 ] = motionData [ 29 ] ; xx
[ 12 ] = motionData [ 30 ] ; xx [ 13 ] = motionData [ 31 ] ; xx [ 4 ] = -
1.779962358034746e-3 ; xx [ 5 ] = - 2.813288543230789e-4 ; xx [ 6 ] = -
3.860324031167178e-7 ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 4 , xx +
14 ) ; xx [ 4 ] = xx [ 7 ] + motionData [ 39 ] - ( xx [ 14 ] + motionData [
32 ] ) ; xx [ 5 ] = xx [ 8 ] + motionData [ 40 ] - ( xx [ 15 ] + motionData [
33 ] ) ; xx [ 6 ] = xx [ 9 ] + motionData [ 41 ] - ( xx [ 16 ] + motionData [
34 ] ) ; xx [ 7 ] = 2.0 ; xx [ 14 ] = 0.7070832170269247 ; xx [ 15 ] =
0.7070839779596056 ; xx [ 16 ] = - 5.77635371758612e-3 ; xx [ 17 ] = -
5.675037392355237e-3 ; pm_math_Quaternion_compose_ra ( xx + 10 , xx + 14 , xx
+ 18 ) ; xx [ 8 ] = xx [ 19 ] * xx [ 20 ] ; xx [ 9 ] = xx [ 18 ] * xx [ 21 ]
; xx [ 14 ] = 1.0 ; xx [ 15 ] = xx [ 21 ] * xx [ 21 ] ; xx [ 22 ] = xx [ 7 ]
* ( xx [ 8 ] - xx [ 9 ] ) ; xx [ 23 ] = xx [ 14 ] - xx [ 7 ] * ( xx [ 15 ] +
xx [ 19 ] * xx [ 19 ] ) ; xx [ 24 ] = xx [ 7 ] * ( xx [ 18 ] * xx [ 19 ] + xx
[ 20 ] * xx [ 21 ] ) ; xx [ 25 ] = xx [ 14 ] - xx [ 7 ] * ( xx [ 20 ] * xx [
20 ] + xx [ 15 ] ) ; xx [ 26 ] = xx [ 7 ] * ( xx [ 9 ] + xx [ 8 ] ) ; xx [ 27
] = xx [ 7 ] * ( xx [ 19 ] * xx [ 21 ] - xx [ 18 ] * xx [ 20 ] ) ; xx [ 7 ] =
motionData [ 149 ] ; xx [ 8 ] = motionData [ 150 ] ; xx [ 9 ] = motionData [
151 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 7 , xx + 14 ) ; xx [ 0 ]
= motionData [ 143 ] ; xx [ 1 ] = motionData [ 144 ] ; xx [ 2 ] = motionData
[ 145 ] ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 0 , xx + 7 ) ; xx [ 0
] = xx [ 14 ] - xx [ 7 ] ; xx [ 1 ] = xx [ 15 ] - xx [ 8 ] ; xx [ 2 ] = xx [
16 ] - xx [ 9 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 18 , xx + 0 , xx
+ 7 ) ; state [ 26 ] = sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 4 , xx + 22 ) , pm_math_Vector3_dot_ra ( xx + 4
, xx + 25 ) ) ) ; state [ 27 ] = 0.5 * xx [ 9 ] ; return NULL ; } void
cst_robotarm_98bf360f_6_initializeTrackedAngleState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const
double * motionData , double * state , void * neDiagMgr0 ) {
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) mech ; initializeTrackedAngleState_0 ( rtdv , modeVector , motionData
, state , neDiagMgr ) ; initializeTrackedAngleState_1 ( rtdv , modeVector ,
motionData , state , neDiagMgr ) ; initializeTrackedAngleState_2 ( rtdv ,
modeVector , motionData , state , neDiagMgr ) ; } void
cst_robotarm_98bf360f_6_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , double * state ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 27 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ]
= - 0.215751709792892 ; xx [ 1 ] = - 0.2981849626920737 ; xx [ 2 ] = -
2.033832353854736e-3 ; xx [ 3 ] = - 0.929802554993116 ; xx [ 4 ] = 0.5 ; xx [
5 ] = xx [ 4 ] * state [ 10 ] ; xx [ 6 ] = sin ( xx [ 5 ] ) ; xx [ 7 ] = cos
( xx [ 5 ] ) ; xx [ 8 ] = - ( 0.3826804379272233 * xx [ 6 ] ) ; xx [ 9 ] =
0.9076319526101237 * xx [ 6 ] ; xx [ 10 ] = 0.1725106403354957 * xx [ 6 ] ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 7 , xx + 11 ) ; xx [ 0 ] =
0.01025445069467229 ; xx [ 1 ] = - 9.847964366436174e-3 ; xx [ 2 ] = -
0.01014277598357412 ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 0 , xx + 5
) ; xx [ 0 ] = 0.01409005672401682 ; xx [ 1 ] = - 0.01894515942744741 ; xx [
2 ] = - 0.01187185013165681 ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 0
, xx + 8 ) ; xx [ 0 ] = - 0.9890584029719356 ; xx [ 1 ] = 0.02451507747925197
; xx [ 2 ] = - 0.1451159893451954 ; xx [ 3 ] = - 0.01019000113620927 ; xx [
15 ] = xx [ 4 ] * state [ 8 ] ; xx [ 4 ] = sin ( xx [ 15 ] ) ; xx [ 16 ] =
cos ( xx [ 15 ] ) ; xx [ 17 ] = - ( 0.01619418156754471 * xx [ 4 ] ) ; xx [
18 ] = - ( 0.9998688656410684 * xx [ 4 ] ) ; xx [ 19 ] = - (
2.236298900726297e-6 * xx [ 4 ] ) ; pm_math_Quaternion_compose_ra ( xx + 0 ,
xx + 16 , xx + 20 ) ; xx [ 0 ] = - 1.779962358034746e-3 ; xx [ 1 ] = -
2.813288543230789e-4 ; xx [ 2 ] = - 3.860324031167178e-7 ;
pm_math_Quaternion_xform_ra ( xx + 20 , xx + 0 , xx + 15 ) ; xx [ 0 ] = -
1.734877756550734e-3 ; xx [ 1 ] = 2.502306067621761e-3 ; xx [ 2 ] = -
3.798065468850008e-7 ; pm_math_Quaternion_xform_ra ( xx + 20 , xx + 0 , xx +
24 ) ; xx [ 0 ] = xx [ 5 ] - xx [ 8 ] + 0.0308855674310194 - ( xx [ 15 ] - xx
[ 24 ] - 7.499921419650881e-3 ) ; xx [ 1 ] = xx [ 6 ] - xx [ 9 ] -
9.289825552270628e-3 - ( xx [ 16 ] - xx [ 25 ] - 0.01644245306791676 ) ; xx [
2 ] = xx [ 7 ] - xx [ 10 ] - 6.447531210979022e-4 - ( xx [ 17 ] - xx [ 26 ] +
0.01026010879458929 ) ; xx [ 3 ] = 2.0 ; xx [ 4 ] = - 0.2643737754551072 ; xx
[ 5 ] = - 0.029879175111395 ; xx [ 6 ] = 0.6425355357697462 ; xx [ 7 ] =
0.7185832081390159 ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 4 , xx +
15 ) ; xx [ 4 ] = xx [ 16 ] * xx [ 17 ] ; xx [ 5 ] = xx [ 15 ] * xx [ 18 ] ;
xx [ 6 ] = 1.0 ; xx [ 7 ] = xx [ 18 ] * xx [ 18 ] ; xx [ 8 ] = xx [ 3 ] * (
xx [ 4 ] - xx [ 5 ] ) ; xx [ 9 ] = xx [ 6 ] - xx [ 3 ] * ( xx [ 7 ] + xx [ 16
] * xx [ 16 ] ) ; xx [ 10 ] = xx [ 3 ] * ( xx [ 15 ] * xx [ 16 ] + xx [ 17 ]
* xx [ 18 ] ) ; xx [ 11 ] = xx [ 6 ] - xx [ 3 ] * ( xx [ 17 ] * xx [ 17 ] +
xx [ 7 ] ) ; xx [ 12 ] = xx [ 3 ] * ( xx [ 5 ] + xx [ 4 ] ) ; xx [ 13 ] = xx
[ 3 ] * ( xx [ 16 ] * xx [ 18 ] - xx [ 15 ] * xx [ 17 ] ) ; state [ 28 ] =
state [ 26 ] + atan2 ( pm_math_Vector3_dot_ra ( xx + 0 , xx + 8 ) ,
pm_math_Vector3_dot_ra ( xx + 0 , xx + 11 ) ) ; } void
cst_robotarm_98bf360f_6_adjustPosition ( const void * mech , const double *
dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] = state [ 0 ] +
dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ; state [ 4 ] =
state [ 4 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] + dofDeltas [ 3 ] ;
state [ 8 ] = state [ 8 ] + dofDeltas [ 4 ] ; state [ 10 ] = state [ 10 ] +
dofDeltas [ 5 ] ; state [ 12 ] = state [ 12 ] + dofDeltas [ 6 ] ; state [ 14
] = state [ 14 ] + dofDeltas [ 7 ] ; state [ 16 ] = state [ 16 ] + dofDeltas
[ 8 ] ; state [ 18 ] = state [ 18 ] + dofDeltas [ 9 ] ; state [ 20 ] = state
[ 20 ] + dofDeltas [ 10 ] ; } static void perturbAsmJointPrimitiveState_0_0 (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; } static
void perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) {
state [ 0 ] = state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_1_0 ( double mag , double * state )
{ state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_1_0v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_2_0 ( double mag , double * state ) {
state [ 4 ] = state [ 4 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_4_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_6_0 ( double mag , double * state )
{ state [ 12 ] = state [ 12 ] + mag ; } static void
perturbAsmJointPrimitiveState_6_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_0v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_8_0 ( double mag , double * state )
{ state [ 16 ] = state [ 16 ] + mag ; } static void
perturbAsmJointPrimitiveState_8_0v ( double mag , double * state ) { state [
16 ] = state [ 16 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_9_0 ( double mag , double * state )
{ state [ 18 ] = state [ 18 ] + mag ; } static void
perturbAsmJointPrimitiveState_9_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 19 ] = state [ 19 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 20 ] = state [ 20 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_0v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
void cst_robotarm_98bf360f_6_perturbAsmJointPrimitiveState ( const void *
mech , size_t stageIdx , size_t primIdx , double mag , boolean_T
doPerturbVelocity , double * state ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ;
switch ( ( stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) {
case 0 : perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbAsmJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbAsmJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbAsmJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbAsmJointPrimitiveState_8_0v ( mag , state ) ; break ; case 108 :
perturbAsmJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbAsmJointPrimitiveState_9_0v ( mag , state ) ; break ; case 120 :
perturbAsmJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbAsmJointPrimitiveState_10_0v ( mag , state ) ; break ; } } void
cst_robotarm_98bf360f_6_computePosDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { } } void cst_robotarm_98bf360f_6_computeVelDofBlendMatrix (
const void * mech , size_t stageIdx , size_t primIdx , const double * state ,
int partialType , double * matrix ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) state ; ( void ) partialType ; ( void ) matrix ;
switch ( ( stageIdx * 6 + primIdx ) ) { } } void
cst_robotarm_98bf360f_6_projectPartiallyTargetedPos ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * origState , int partialType
, double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) origState ; ( void ) partialType ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) ) { } } void cst_robotarm_98bf360f_6_propagateMotion
( const void * mech , const RuntimeDerivedValuesBundle * rtdv , const double
* state , double * motionData ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 199 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = -
0.1692414246820599 ; xx [ 1 ] = - 0.3581204221974448 ; xx [ 2 ] = -
0.8093344294744581 ; xx [ 3 ] = - 0.4336875426432772 ; xx [ 4 ] = 0.5 ; xx [
5 ] = xx [ 4 ] * state [ 0 ] ; xx [ 6 ] = 0.726474170332262 ; xx [ 7 ] = sin
( xx [ 5 ] ) ; xx [ 8 ] = 0.3673297571223195 ; xx [ 9 ] = 0.5807788988698797
; xx [ 10 ] = cos ( xx [ 5 ] ) ; xx [ 11 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 12 ]
= xx [ 8 ] * xx [ 7 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 7 ] ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 10 , xx + 14 ) ; xx [ 0 ] = -
0.05048244279655015 ; xx [ 1 ] = - 0.01046499991598876 ; xx [ 2 ] = -
0.04830501008340782 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 0 , xx +
10 ) ; xx [ 0 ] = 0.7159504556807283 ; xx [ 1 ] = 0.07585744831336452 ; xx [
2 ] = 0.4515044164477732 ; xx [ 3 ] = 0.527071488959609 ; xx [ 5 ] = xx [ 4 ]
* state [ 2 ] ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 13 ] =
3.070998455534379e-9 ; xx [ 18 ] = 1.310006828569854e-7 ; xx [ 19 ] = cos (
xx [ 5 ] ) ; xx [ 20 ] = xx [ 7 ] ; xx [ 21 ] = xx [ 13 ] * xx [ 7 ] ; xx [
22 ] = xx [ 18 ] * xx [ 7 ] ; pm_math_Quaternion_compose_ra ( xx + 0 , xx +
19 , xx + 23 ) ; xx [ 0 ] = 0.02468880031958475 ; xx [ 1 ] = -
0.0762253912505382 ; xx [ 2 ] = 3.895808054025665e-9 ;
pm_math_Quaternion_xform_ra ( xx + 23 , xx + 0 , xx + 19 ) ; xx [ 0 ] =
9.610261677013888e-3 - xx [ 19 ] ; xx [ 1 ] = 0.03773161350321224 - xx [ 20 ]
; xx [ 2 ] = - ( 0.01036879698058195 + xx [ 21 ] ) ; xx [ 19 ] = -
0.5306023599600851 ; xx [ 20 ] = 0.466893522841787 ; xx [ 21 ] = -
0.4674001539794631 ; xx [ 22 ] = 0.5310448851021436 ; xx [ 3 ] = xx [ 4 ] *
state [ 4 ] ; xx [ 5 ] = 9.431509536441641e-4 ; xx [ 7 ] = sin ( xx [ 3 ] ) ;
xx [ 27 ] = 0.1270949996850012 ; xx [ 28 ] = 0.9918901005259344 ; xx [ 29 ] =
cos ( xx [ 3 ] ) ; xx [ 30 ] = - ( xx [ 5 ] * xx [ 7 ] ) ; xx [ 31 ] = xx [
27 ] * xx [ 7 ] ; xx [ 32 ] = xx [ 28 ] * xx [ 7 ] ;
pm_math_Quaternion_compose_ra ( xx + 19 , xx + 29 , xx + 33 ) ; xx [ 19 ] =
0.0657897969447355 ; xx [ 20 ] = - 7.833068200340101e-3 ; xx [ 21 ] = -
0.04051184310827824 ; pm_math_Quaternion_xform_ra ( xx + 33 , xx + 19 , xx +
29 ) ; xx [ 3 ] = - ( 0.040868600148552 + xx [ 29 ] ) ; xx [ 7 ] =
0.07621270854813512 - xx [ 30 ] ; xx [ 19 ] = - ( 6.185166645836258e-9 + xx [
31 ] ) ; xx [ 29 ] = - 0.3975057134756405 ; xx [ 30 ] = 0.5793752661493048 ;
xx [ 31 ] = 0.6060569288980017 ; xx [ 32 ] = 0.3728384471367823 ; xx [ 20 ] =
xx [ 4 ] * state [ 6 ] ; xx [ 21 ] = 0.9580321368312195 ; xx [ 22 ] = sin (
xx [ 20 ] ) ; xx [ 37 ] = 3.123739533989145e-3 ; xx [ 38 ] =
0.2866437982059469 ; xx [ 39 ] = cos ( xx [ 20 ] ) ; xx [ 40 ] = xx [ 21 ] *
xx [ 22 ] ; xx [ 41 ] = - ( xx [ 37 ] * xx [ 22 ] ) ; xx [ 42 ] = - ( xx [ 38
] * xx [ 22 ] ) ; pm_math_Quaternion_compose_ra ( xx + 29 , xx + 39 , xx + 43
) ; xx [ 29 ] = 0.05362010922911457 ; xx [ 30 ] = 0.02069388260901643 ; xx [
31 ] = - 9.063353666285667e-3 ; pm_math_Quaternion_xform_ra ( xx + 43 , xx +
29 , xx + 39 ) ; xx [ 20 ] = - ( 0.08443361020844066 + xx [ 39 ] ) ; xx [ 22
] = 4.246357609997923e-4 - xx [ 40 ] ; xx [ 29 ] = 0.02378691714157365 - xx [
41 ] ; xx [ 39 ] = - 0.9890584029719356 ; xx [ 40 ] = 0.02451507747925197 ;
xx [ 41 ] = - 0.1451159893451954 ; xx [ 42 ] = - 0.01019000113620927 ; xx [
30 ] = xx [ 4 ] * state [ 8 ] ; xx [ 31 ] = 0.01619418156754471 ; xx [ 32 ] =
sin ( xx [ 30 ] ) ; xx [ 47 ] = 0.9998688656410684 ; xx [ 48 ] =
2.236298900726297e-6 ; xx [ 49 ] = cos ( xx [ 30 ] ) ; xx [ 50 ] = - ( xx [
31 ] * xx [ 32 ] ) ; xx [ 51 ] = - ( xx [ 47 ] * xx [ 32 ] ) ; xx [ 52 ] = -
( xx [ 48 ] * xx [ 32 ] ) ; pm_math_Quaternion_compose_ra ( xx + 39 , xx + 49
, xx + 53 ) ; xx [ 39 ] = - 1.734877756550734e-3 ; xx [ 40 ] =
2.502306067621761e-3 ; xx [ 41 ] = - 3.798065468850008e-7 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 39 , xx + 49 ) ; xx [ 30 ] = - (
7.499921419650881e-3 + xx [ 49 ] ) ; xx [ 32 ] = - ( 0.01644245306791676 + xx
[ 50 ] ) ; xx [ 39 ] = 0.01026010879458929 - xx [ 51 ] ; xx [ 49 ] = -
0.215751709792892 ; xx [ 50 ] = - 0.2981849626920737 ; xx [ 51 ] = -
2.033832353854736e-3 ; xx [ 52 ] = - 0.929802554993116 ; xx [ 40 ] = xx [ 4 ]
* state [ 10 ] ; xx [ 41 ] = 0.3826804379272233 ; xx [ 42 ] = sin ( xx [ 40 ]
) ; xx [ 57 ] = 0.9076319526101237 ; xx [ 58 ] = 0.1725106403354957 ; xx [ 59
] = cos ( xx [ 40 ] ) ; xx [ 60 ] = - ( xx [ 41 ] * xx [ 42 ] ) ; xx [ 61 ] =
xx [ 57 ] * xx [ 42 ] ; xx [ 62 ] = xx [ 58 ] * xx [ 42 ] ;
pm_math_Quaternion_compose_ra ( xx + 49 , xx + 59 , xx + 63 ) ; xx [ 49 ] =
0.01409005672401682 ; xx [ 50 ] = - 0.01894515942744741 ; xx [ 51 ] = -
0.01187185013165681 ; pm_math_Quaternion_xform_ra ( xx + 63 , xx + 49 , xx +
59 ) ; xx [ 40 ] = 0.0308855674310194 - xx [ 59 ] ; xx [ 42 ] = - (
9.289825552270628e-3 + xx [ 60 ] ) ; xx [ 49 ] = - ( 6.447531210979022e-4 +
xx [ 61 ] ) ; xx [ 50 ] = 0.5912864502323997 ; xx [ 51 ] = xx [ 4 ] * state [
12 ] ; xx [ 52 ] = sin ( xx [ 51 ] ) ; xx [ 59 ] = 0.04451361391915684 ; xx [
60 ] = cos ( xx [ 51 ] ) ; xx [ 51 ] = xx [ 50 ] * xx [ 52 ] - xx [ 59 ] * xx
[ 60 ] ; xx [ 61 ] = 0.6953254828680254 ; xx [ 62 ] = 0.4061050908592153 ; xx
[ 67 ] = xx [ 61 ] * xx [ 60 ] + xx [ 62 ] * xx [ 52 ] ; xx [ 68 ] = - xx [
67 ] ; xx [ 69 ] = xx [ 61 ] * xx [ 52 ] - xx [ 62 ] * xx [ 60 ] ; xx [ 61 ]
= xx [ 59 ] * xx [ 52 ] + xx [ 50 ] * xx [ 60 ] ; xx [ 50 ] = - xx [ 61 ] ;
xx [ 70 ] = xx [ 51 ] ; xx [ 71 ] = xx [ 68 ] ; xx [ 72 ] = xx [ 69 ] ; xx [
73 ] = xx [ 50 ] ; xx [ 52 ] = 6.31742519402702e-9 ; xx [ 59 ] =
6.11133899174537e-11 ; xx [ 74 ] = - xx [ 52 ] ; xx [ 75 ] = xx [ 59 ] ; xx [
76 ] = - 0.01723973036822852 ; pm_math_Quaternion_xform_ra ( xx + 70 , xx +
74 , xx + 77 ) ; xx [ 60 ] = 1.144603405378138e-3 + xx [ 77 ] ; xx [ 62 ] = -
xx [ 60 ] ; xx [ 74 ] = 4.83817857357089e-3 - xx [ 78 ] ; xx [ 75 ] =
5.457891674323079e-3 + xx [ 79 ] ; xx [ 76 ] = - xx [ 75 ] ; xx [ 77 ] = xx [
4 ] * state [ 14 ] ; xx [ 78 ] = cos ( xx [ 77 ] ) ; xx [ 79 ] = 0.0 ; xx [
80 ] = sin ( xx [ 77 ] ) ; xx [ 77 ] = 2.0 ; xx [ 81 ] = 3.566398367738088e-9
; xx [ 82 ] = xx [ 81 ] * xx [ 80 ] ; xx [ 83 ] = 8.499995046130028e-3 ; xx [
84 ] = xx [ 83 ] * xx [ 80 ] ; xx [ 85 ] = xx [ 77 ] * ( xx [ 82 ] * xx [ 78
] + xx [ 84 ] * xx [ 80 ] ) - xx [ 83 ] ; xx [ 86 ] = - xx [ 85 ] ; xx [ 87 ]
= 7.499999999999995e-3 ; xx [ 88 ] = xx [ 77 ] * ( xx [ 82 ] * xx [ 80 ] - xx
[ 84 ] * xx [ 78 ] ) - xx [ 81 ] ; xx [ 82 ] = - ( xx [ 87 ] + xx [ 88 ] ) ;
xx [ 84 ] = - 1.207894729634444e-3 ; xx [ 89 ] = - 0.9899003997337941 ; xx [
90 ] = xx [ 89 ] ; xx [ 91 ] = - 0.01994045583473804 ; xx [ 92 ] = -
0.09771574456570453 ; xx [ 93 ] = 0.1007532138045611 ; xx [ 94 ] = xx [ 4 ] *
state [ 16 ] ; xx [ 95 ] = 0.197475839231908 ; xx [ 96 ] = sin ( xx [ 94 ] )
; xx [ 97 ] = 0.01978777979476189 ; xx [ 98 ] = 0.9801080229701458 ; xx [ 99
] = cos ( xx [ 94 ] ) ; xx [ 100 ] = xx [ 95 ] * xx [ 96 ] ; xx [ 101 ] = - (
xx [ 97 ] * xx [ 96 ] ) ; xx [ 102 ] = - ( xx [ 98 ] * xx [ 96 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 90 , xx + 99 , xx + 103 ) ; xx [ 90 ] =
- 0.02695031004471146 ; xx [ 91 ] = - 1.195512210539264e-3 ; xx [ 92 ] =
4.842731578975556e-3 ; pm_math_Quaternion_xform_ra ( xx + 103 , xx + 90 , xx
+ 99 ) ; xx [ 90 ] = 8.499999999999994e-3 - xx [ 99 ] ; xx [ 91 ] = - xx [
100 ] ; xx [ 92 ] = 1.000000000000001e-3 - xx [ 101 ] ; xx [ 93 ] = xx [ 4 ]
* state [ 18 ] ; xx [ 94 ] = cos ( xx [ 93 ] ) ; xx [ 96 ] = sin ( xx [ 93 ]
) ; xx [ 93 ] = 8.500005402767106e-3 ; xx [ 99 ] = 2.534418181099341e-9 ; xx
[ 102 ] = xx [ 99 ] * xx [ 94 ] - xx [ 93 ] * xx [ 96 ] ; xx [ 107 ] = xx [
93 ] + xx [ 77 ] * xx [ 102 ] * xx [ 96 ] ; xx [ 108 ] = - xx [ 107 ] ; xx [
109 ] = 7.500000000000001e-3 ; xx [ 110 ] = xx [ 99 ] - xx [ 77 ] * xx [ 102
] * xx [ 94 ] ; xx [ 102 ] = xx [ 109 ] - xx [ 110 ] ; xx [ 111 ] =
7.707894736842105e-3 ; xx [ 112 ] = 6.499999983768677e-3 ; xx [ 113 ] = xx [
112 ] - xx [ 77 ] * ( xx [ 112 ] * xx [ 94 ] * xx [ 94 ] + xx [ 112 ] * xx [
96 ] * xx [ 96 ] ) ; xx [ 112 ] = - ( xx [ 111 ] + xx [ 113 ] ) ; xx [ 114 ]
= xx [ 89 ] ; xx [ 115 ] = 0.01994045583473794 ; xx [ 116 ] =
0.09771574456570448 ; xx [ 117 ] = 0.1007532138045611 ; xx [ 89 ] = xx [ 4 ]
* state [ 20 ] ; xx [ 4 ] = 0.1974758392319079 ; xx [ 118 ] = sin ( xx [ 89 ]
) ; xx [ 119 ] = 0.0197877797947617 ; xx [ 120 ] = cos ( xx [ 89 ] ) ; xx [
121 ] = - ( xx [ 4 ] * xx [ 118 ] ) ; xx [ 122 ] = xx [ 119 ] * xx [ 118 ] ;
xx [ 123 ] = - ( xx [ 98 ] * xx [ 118 ] ) ; pm_math_Quaternion_compose_ra (
xx + 114 , xx + 120 , xx + 124 ) ; xx [ 114 ] = - 0.0265553585823144 ; xx [
115 ] = - 1.235088037631146e-3 ; xx [ 116 ] = - 2.882515487549136e-3 ;
pm_math_Quaternion_xform_ra ( xx + 124 , xx + 114 , xx + 120 ) ; xx [ 89 ] =
8.500000000000004e-3 + xx [ 120 ] ; xx [ 114 ] = - xx [ 89 ] ; xx [ 115 ] = -
xx [ 121 ] ; xx [ 116 ] = 9.999999999999992e-4 - xx [ 122 ] ; xx [ 117 ] = -
( xx [ 69 ] * xx [ 96 ] - xx [ 67 ] * xx [ 94 ] ) ; xx [ 118 ] = xx [ 51 ] *
xx [ 94 ] + xx [ 61 ] * xx [ 96 ] ; xx [ 120 ] = xx [ 51 ] * xx [ 96 ] - xx [
61 ] * xx [ 94 ] ; xx [ 122 ] = - ( xx [ 67 ] * xx [ 96 ] + xx [ 69 ] * xx [
94 ] ) ; xx [ 128 ] = xx [ 108 ] ; xx [ 129 ] = xx [ 102 ] ; xx [ 130 ] = xx
[ 112 ] ; pm_math_Quaternion_xform_ra ( xx + 70 , xx + 128 , xx + 131 ) ; xx
[ 123 ] = xx [ 131 ] - xx [ 60 ] ; xx [ 134 ] = xx [ 132 ] + xx [ 74 ] ; xx [
131 ] = xx [ 133 ] - xx [ 75 ] ; xx [ 135 ] = xx [ 117 ] ; xx [ 136 ] = xx [
118 ] ; xx [ 137 ] = xx [ 120 ] ; xx [ 138 ] = xx [ 122 ] ;
pm_math_Quaternion_compose_ra ( xx + 135 , xx + 124 , xx + 139 ) ;
pm_math_Quaternion_xform_ra ( xx + 135 , xx + 114 , xx + 143 ) ; xx [ 132 ] =
xx [ 94 ] * xx [ 121 ] - xx [ 89 ] * xx [ 96 ] ; xx [ 133 ] = xx [ 51 ] * xx
[ 78 ] + xx [ 61 ] * xx [ 80 ] ; xx [ 135 ] = xx [ 69 ] * xx [ 80 ] - xx [ 67
] * xx [ 78 ] ; xx [ 136 ] = xx [ 69 ] * xx [ 78 ] + xx [ 67 ] * xx [ 80 ] ;
xx [ 67 ] = xx [ 51 ] * xx [ 80 ] - xx [ 61 ] * xx [ 78 ] ; xx [ 146 ] = xx [
86 ] ; xx [ 147 ] = xx [ 82 ] ; xx [ 148 ] = xx [ 84 ] ;
pm_math_Quaternion_xform_ra ( xx + 70 , xx + 146 , xx + 149 ) ; xx [ 61 ] =
xx [ 149 ] - xx [ 60 ] ; xx [ 60 ] = xx [ 150 ] + xx [ 74 ] ; xx [ 137 ] = xx
[ 151 ] - xx [ 75 ] ; xx [ 149 ] = xx [ 133 ] ; xx [ 150 ] = xx [ 135 ] ; xx
[ 151 ] = xx [ 136 ] ; xx [ 152 ] = xx [ 67 ] ; pm_math_Quaternion_compose_ra
( xx + 149 , xx + 103 , xx + 153 ) ; pm_math_Quaternion_xform_ra ( xx + 149 ,
xx + 90 , xx + 157 ) ; xx [ 75 ] = xx [ 80 ] * xx [ 100 ] ; xx [ 138 ] = xx [
90 ] * xx [ 80 ] ; xx [ 149 ] = xx [ 6 ] * state [ 1 ] ; xx [ 6 ] = xx [ 8 ]
* state [ 1 ] ; xx [ 8 ] = xx [ 9 ] * state [ 1 ] ; xx [ 9 ] =
0.01166601649384806 * state [ 1 ] ; xx [ 150 ] = 5.773204583593171e-3 * state
[ 1 ] ; xx [ 151 ] = 0.01094115131990303 * state [ 1 ] ; xx [ 160 ] = xx [
149 ] ; xx [ 161 ] = xx [ 6 ] ; xx [ 162 ] = xx [ 8 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 23 , xx + 160 , xx + 163 ) ; xx [
152 ] = xx [ 163 ] + state [ 3 ] ; xx [ 166 ] = xx [ 164 ] + xx [ 13 ] *
state [ 3 ] ; xx [ 13 ] = xx [ 165 ] + xx [ 18 ] * state [ 3 ] ;
pm_math_Vector3_cross_ra ( xx + 160 , xx + 0 , xx + 163 ) ; xx [ 160 ] = xx [
163 ] + xx [ 9 ] ; xx [ 161 ] = xx [ 164 ] - xx [ 150 ] ; xx [ 162 ] = xx [
165 ] - xx [ 151 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 23 , xx + 160
, xx + 163 ) ; xx [ 18 ] = xx [ 163 ] - 9.985578316825407e-9 * state [ 3 ] ;
xx [ 160 ] = xx [ 164 ] + 6.615583532402706e-10 * state [ 3 ] ; xx [ 161 ] =
xx [ 165 ] + 0.07622539132635685 * state [ 3 ] ; xx [ 162 ] = xx [ 152 ] ; xx
[ 163 ] = xx [ 166 ] ; xx [ 164 ] = xx [ 13 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 33 , xx + 162 , xx + 167 ) ; xx [
165 ] = xx [ 167 ] - xx [ 5 ] * state [ 5 ] ; xx [ 5 ] = xx [ 168 ] + xx [ 27
] * state [ 5 ] ; xx [ 27 ] = xx [ 169 ] + xx [ 28 ] * state [ 5 ] ; xx [ 167
] = xx [ 3 ] ; xx [ 168 ] = xx [ 7 ] ; xx [ 169 ] = xx [ 19 ] ;
pm_math_Vector3_cross_ra ( xx + 162 , xx + 167 , xx + 170 ) ; xx [ 162 ] = xx
[ 170 ] + xx [ 18 ] ; xx [ 163 ] = xx [ 171 ] + xx [ 160 ] ; xx [ 164 ] = xx
[ 172 ] + xx [ 161 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 33 , xx +
162 , xx + 167 ) ; xx [ 28 ] = xx [ 167 ] - 2.620690117576402e-3 * state [ 5
] ; xx [ 162 ] = xx [ 168 ] - 0.06521803952163305 * state [ 5 ] ; xx [ 163 ]
= xx [ 169 ] + 8.354166456224339e-3 * state [ 5 ] ; xx [ 167 ] = xx [ 165 ] ;
xx [ 168 ] = xx [ 5 ] ; xx [ 169 ] = xx [ 27 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 43 , xx + 167 , xx + 170 ) ; xx [
164 ] = xx [ 170 ] + xx [ 21 ] * state [ 7 ] ; xx [ 21 ] = xx [ 171 ] - xx [
37 ] * state [ 7 ] ; xx [ 37 ] = xx [ 172 ] - xx [ 38 ] * state [ 7 ] ; xx [
170 ] = xx [ 20 ] ; xx [ 171 ] = xx [ 22 ] ; xx [ 172 ] = xx [ 29 ] ;
pm_math_Vector3_cross_ra ( xx + 167 , xx + 170 , xx + 173 ) ; xx [ 167 ] = xx
[ 173 ] + xx [ 28 ] ; xx [ 168 ] = xx [ 174 ] + xx [ 162 ] ; xx [ 169 ] = xx
[ 175 ] + xx [ 163 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 43 , xx +
167 , xx + 170 ) ; xx [ 38 ] = xx [ 170 ] - 5.960084666834363e-3 * state [ 7
] ; xx [ 167 ] = xx [ 171 ] + 6.686887689882423e-3 * state [ 7 ] ; xx [ 168 ]
= xx [ 172 ] - 0.01999289983026623 * state [ 7 ] ; xx [ 169 ] = xx [ 164 ] ;
xx [ 170 ] = xx [ 21 ] ; xx [ 171 ] = xx [ 37 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 53 , xx + 169 , xx + 172 ) ; xx [
175 ] = xx [ 30 ] ; xx [ 176 ] = xx [ 32 ] ; xx [ 177 ] = xx [ 39 ] ;
pm_math_Vector3_cross_ra ( xx + 169 , xx + 175 , xx + 178 ) ; xx [ 175 ] = xx
[ 178 ] + xx [ 38 ] ; xx [ 176 ] = xx [ 179 ] + xx [ 167 ] ; xx [ 177 ] = xx
[ 180 ] + xx [ 168 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 53 , xx +
175 , xx + 178 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 63 , xx + 169 ,
xx + 175 ) ; xx [ 181 ] = xx [ 175 ] - xx [ 41 ] * state [ 11 ] ; xx [ 41 ] =
xx [ 176 ] + xx [ 57 ] * state [ 11 ] ; xx [ 57 ] = xx [ 177 ] + xx [ 58 ] *
state [ 11 ] ; xx [ 175 ] = xx [ 40 ] ; xx [ 176 ] = xx [ 42 ] ; xx [ 177 ] =
xx [ 49 ] ; pm_math_Vector3_cross_ra ( xx + 169 , xx + 175 , xx + 182 ) ; xx
[ 169 ] = xx [ 182 ] + xx [ 38 ] ; xx [ 170 ] = xx [ 183 ] + xx [ 167 ] ; xx
[ 171 ] = xx [ 184 ] + xx [ 168 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
63 , xx + 169 , xx + 175 ) ; xx [ 58 ] = xx [ 175 ] + 7.507028932003423e-3 *
state [ 11 ] ; xx [ 169 ] = xx [ 176 ] + 2.112440099565195e-3 * state [ 11 ]
; xx [ 170 ] = xx [ 177 ] + 5.538643790510151e-3 * state [ 11 ] ; xx [ 175 ]
= xx [ 181 ] ; xx [ 176 ] = xx [ 41 ] ; xx [ 177 ] = xx [ 57 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 70 , xx + 175 , xx + 182 ) ; xx [
171 ] = xx [ 184 ] + state [ 13 ] ; xx [ 184 ] = xx [ 62 ] ; xx [ 185 ] = xx
[ 74 ] ; xx [ 186 ] = xx [ 76 ] ; pm_math_Vector3_cross_ra ( xx + 175 , xx +
184 , xx + 187 ) ; xx [ 175 ] = xx [ 187 ] + xx [ 58 ] ; xx [ 176 ] = xx [
188 ] + xx [ 169 ] ; xx [ 177 ] = xx [ 189 ] + xx [ 170 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 70 , xx + 175 , xx + 184 ) ; xx [
70 ] = xx [ 184 ] + xx [ 59 ] * state [ 13 ] ; xx [ 59 ] = xx [ 185 ] + xx [
52 ] * state [ 13 ] ; xx [ 52 ] = xx [ 80 ] * xx [ 183 ] ; xx [ 71 ] = xx [
80 ] * xx [ 182 ] ; xx [ 72 ] = xx [ 182 ] + xx [ 77 ] * ( xx [ 52 ] * xx [
78 ] - xx [ 71 ] * xx [ 80 ] ) ; xx [ 73 ] = xx [ 183 ] - xx [ 77 ] * ( xx [
71 ] * xx [ 78 ] + xx [ 52 ] * xx [ 80 ] ) ; xx [ 52 ] = xx [ 171 ] + state [
15 ] ; xx [ 175 ] = xx [ 182 ] ; xx [ 176 ] = xx [ 183 ] ; xx [ 177 ] = xx [
171 ] ; pm_math_Vector3_cross_ra ( xx + 175 , xx + 146 , xx + 187 ) ; xx [ 71
] = xx [ 187 ] + xx [ 70 ] ; xx [ 146 ] = xx [ 188 ] + xx [ 59 ] ; xx [ 147 ]
= xx [ 146 ] * xx [ 80 ] ; xx [ 148 ] = xx [ 71 ] * xx [ 80 ] ; xx [ 184 ] =
xx [ 71 ] + xx [ 77 ] * ( xx [ 147 ] * xx [ 78 ] - xx [ 148 ] * xx [ 80 ] ) -
xx [ 81 ] * state [ 15 ] ; xx [ 71 ] = xx [ 146 ] - xx [ 77 ] * ( xx [ 148 ]
* xx [ 78 ] + xx [ 147 ] * xx [ 80 ] ) + xx [ 83 ] * state [ 15 ] ; xx [ 81 ]
= xx [ 189 ] + xx [ 186 ] ; xx [ 146 ] = xx [ 72 ] ; xx [ 147 ] = xx [ 73 ] ;
xx [ 148 ] = xx [ 52 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 103 , xx +
146 , xx + 187 ) ; pm_math_Vector3_cross_ra ( xx + 146 , xx + 90 , xx + 190 )
; xx [ 146 ] = xx [ 190 ] + xx [ 184 ] ; xx [ 147 ] = xx [ 191 ] + xx [ 71 ]
; xx [ 148 ] = xx [ 192 ] + xx [ 81 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 103 , xx + 146 , xx + 190 ) ; xx [ 83 ] = xx [ 94 ] * xx [ 183 ] - xx [
96 ] * xx [ 182 ] ; xx [ 146 ] = xx [ 182 ] + xx [ 77 ] * xx [ 83 ] * xx [ 96
] ; xx [ 147 ] = xx [ 183 ] - xx [ 77 ] * xx [ 83 ] * xx [ 94 ] ; xx [ 83 ] =
xx [ 171 ] - xx [ 77 ] * ( xx [ 171 ] * xx [ 94 ] * xx [ 94 ] + xx [ 171 ] *
xx [ 96 ] * xx [ 96 ] ) - state [ 19 ] ; pm_math_Vector3_cross_ra ( xx + 175
, xx + 128 , xx + 193 ) ; xx [ 128 ] = xx [ 193 ] + xx [ 70 ] ; xx [ 129 ] =
xx [ 194 ] + xx [ 59 ] ; xx [ 130 ] = xx [ 129 ] * xx [ 94 ] - xx [ 128 ] *
xx [ 96 ] ; xx [ 148 ] = xx [ 128 ] + xx [ 77 ] * xx [ 130 ] * xx [ 96 ] - xx
[ 99 ] * state [ 19 ] ; xx [ 99 ] = xx [ 129 ] - xx [ 77 ] * xx [ 130 ] * xx
[ 94 ] + xx [ 93 ] * state [ 19 ] ; xx [ 93 ] = xx [ 195 ] + xx [ 186 ] ; xx
[ 128 ] = xx [ 93 ] - xx [ 77 ] * ( xx [ 93 ] * xx [ 94 ] * xx [ 94 ] + xx [
93 ] * xx [ 96 ] * xx [ 96 ] ) ; xx [ 175 ] = xx [ 146 ] ; xx [ 176 ] = xx [
147 ] ; xx [ 177 ] = xx [ 83 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
124 , xx + 175 , xx + 193 ) ; pm_math_Vector3_cross_ra ( xx + 175 , xx + 114
, xx + 196 ) ; xx [ 175 ] = xx [ 196 ] + xx [ 148 ] ; xx [ 176 ] = xx [ 197 ]
+ xx [ 99 ] ; xx [ 177 ] = xx [ 198 ] + xx [ 128 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 124 , xx + 175 , xx + 196 ) ;
motionData [ 0 ] = xx [ 14 ] ; motionData [ 1 ] = xx [ 15 ] ; motionData [ 2
] = xx [ 16 ] ; motionData [ 3 ] = xx [ 17 ] ; motionData [ 4 ] = - xx [ 10 ]
; motionData [ 5 ] = - xx [ 11 ] ; motionData [ 6 ] = - xx [ 12 ] ;
motionData [ 7 ] = xx [ 23 ] ; motionData [ 8 ] = xx [ 24 ] ; motionData [ 9
] = xx [ 25 ] ; motionData [ 10 ] = xx [ 26 ] ; motionData [ 11 ] = xx [ 0 ]
; motionData [ 12 ] = xx [ 1 ] ; motionData [ 13 ] = xx [ 2 ] ; motionData [
14 ] = xx [ 33 ] ; motionData [ 15 ] = xx [ 34 ] ; motionData [ 16 ] = xx [
35 ] ; motionData [ 17 ] = xx [ 36 ] ; motionData [ 18 ] = xx [ 3 ] ;
motionData [ 19 ] = xx [ 7 ] ; motionData [ 20 ] = xx [ 19 ] ; motionData [
21 ] = xx [ 43 ] ; motionData [ 22 ] = xx [ 44 ] ; motionData [ 23 ] = xx [
45 ] ; motionData [ 24 ] = xx [ 46 ] ; motionData [ 25 ] = xx [ 20 ] ;
motionData [ 26 ] = xx [ 22 ] ; motionData [ 27 ] = xx [ 29 ] ; motionData [
28 ] = xx [ 53 ] ; motionData [ 29 ] = xx [ 54 ] ; motionData [ 30 ] = xx [
55 ] ; motionData [ 31 ] = xx [ 56 ] ; motionData [ 32 ] = xx [ 30 ] ;
motionData [ 33 ] = xx [ 32 ] ; motionData [ 34 ] = xx [ 39 ] ; motionData [
35 ] = xx [ 63 ] ; motionData [ 36 ] = xx [ 64 ] ; motionData [ 37 ] = xx [
65 ] ; motionData [ 38 ] = xx [ 66 ] ; motionData [ 39 ] = xx [ 40 ] ;
motionData [ 40 ] = xx [ 42 ] ; motionData [ 41 ] = xx [ 49 ] ; motionData [
42 ] = xx [ 51 ] ; motionData [ 43 ] = xx [ 68 ] ; motionData [ 44 ] = xx [
69 ] ; motionData [ 45 ] = xx [ 50 ] ; motionData [ 46 ] = xx [ 62 ] ;
motionData [ 47 ] = xx [ 74 ] ; motionData [ 48 ] = xx [ 76 ] ; motionData [
49 ] = xx [ 78 ] ; motionData [ 50 ] = xx [ 79 ] ; motionData [ 51 ] = xx [
79 ] ; motionData [ 52 ] = xx [ 80 ] ; motionData [ 53 ] = xx [ 86 ] ;
motionData [ 54 ] = xx [ 82 ] ; motionData [ 55 ] = xx [ 84 ] ; motionData [
56 ] = xx [ 103 ] ; motionData [ 57 ] = xx [ 104 ] ; motionData [ 58 ] = xx [
105 ] ; motionData [ 59 ] = xx [ 106 ] ; motionData [ 60 ] = xx [ 90 ] ;
motionData [ 61 ] = xx [ 91 ] ; motionData [ 62 ] = xx [ 92 ] ; motionData [
63 ] = xx [ 79 ] ; motionData [ 64 ] = xx [ 94 ] ; motionData [ 65 ] = xx [
96 ] ; motionData [ 66 ] = xx [ 79 ] ; motionData [ 67 ] = xx [ 108 ] ;
motionData [ 68 ] = xx [ 102 ] ; motionData [ 69 ] = xx [ 112 ] ; motionData
[ 70 ] = xx [ 124 ] ; motionData [ 71 ] = xx [ 125 ] ; motionData [ 72 ] = xx
[ 126 ] ; motionData [ 73 ] = xx [ 127 ] ; motionData [ 74 ] = xx [ 114 ] ;
motionData [ 75 ] = xx [ 115 ] ; motionData [ 76 ] = xx [ 116 ] ; motionData
[ 77 ] = xx [ 117 ] ; motionData [ 78 ] = xx [ 118 ] ; motionData [ 79 ] = xx
[ 120 ] ; motionData [ 80 ] = xx [ 122 ] ; motionData [ 81 ] = xx [ 123 ] ;
motionData [ 82 ] = xx [ 134 ] ; motionData [ 83 ] = xx [ 131 ] ; motionData
[ 84 ] = xx [ 139 ] ; motionData [ 85 ] = xx [ 140 ] ; motionData [ 86 ] = xx
[ 141 ] ; motionData [ 87 ] = xx [ 142 ] ; motionData [ 88 ] = xx [ 143 ] +
xx [ 123 ] ; motionData [ 89 ] = xx [ 144 ] + xx [ 134 ] ; motionData [ 90 ]
= xx [ 145 ] + xx [ 131 ] ; motionData [ 91 ] = - ( xx [ 94 ] * xx [ 125 ] +
xx [ 96 ] * xx [ 126 ] ) ; motionData [ 92 ] = xx [ 94 ] * xx [ 124 ] + xx [
96 ] * xx [ 127 ] ; motionData [ 93 ] = xx [ 96 ] * xx [ 124 ] - xx [ 94 ] *
xx [ 127 ] ; motionData [ 94 ] = xx [ 94 ] * xx [ 126 ] - xx [ 96 ] * xx [
125 ] ; motionData [ 95 ] = - ( xx [ 89 ] + xx [ 77 ] * xx [ 132 ] * xx [ 96
] + xx [ 107 ] ) ; motionData [ 96 ] = xx [ 77 ] * xx [ 132 ] * xx [ 94 ] - (
xx [ 121 ] + xx [ 110 ] ) + xx [ 109 ] ; motionData [ 97 ] = xx [ 116 ] - (
xx [ 77 ] * ( xx [ 116 ] * xx [ 94 ] * xx [ 94 ] + xx [ 116 ] * xx [ 96 ] *
xx [ 96 ] ) + xx [ 113 ] ) - xx [ 111 ] ; motionData [ 98 ] = xx [ 133 ] ;
motionData [ 99 ] = xx [ 135 ] ; motionData [ 100 ] = xx [ 136 ] ; motionData
[ 101 ] = xx [ 67 ] ; motionData [ 102 ] = xx [ 61 ] ; motionData [ 103 ] =
xx [ 60 ] ; motionData [ 104 ] = xx [ 137 ] ; motionData [ 105 ] = xx [ 153 ]
; motionData [ 106 ] = xx [ 154 ] ; motionData [ 107 ] = xx [ 155 ] ;
motionData [ 108 ] = xx [ 156 ] ; motionData [ 109 ] = xx [ 157 ] + xx [ 61 ]
; motionData [ 110 ] = xx [ 158 ] + xx [ 60 ] ; motionData [ 111 ] = xx [ 159
] + xx [ 137 ] ; motionData [ 112 ] = xx [ 78 ] * xx [ 103 ] - xx [ 80 ] * xx
[ 106 ] ; motionData [ 113 ] = xx [ 78 ] * xx [ 104 ] - xx [ 80 ] * xx [ 105
] ; motionData [ 114 ] = xx [ 78 ] * xx [ 105 ] + xx [ 80 ] * xx [ 104 ] ;
motionData [ 115 ] = xx [ 78 ] * xx [ 106 ] + xx [ 80 ] * xx [ 103 ] ;
motionData [ 116 ] = xx [ 90 ] + xx [ 77 ] * ( xx [ 75 ] * xx [ 78 ] - xx [
138 ] * xx [ 80 ] ) - xx [ 85 ] ; motionData [ 117 ] = xx [ 77 ] * ( xx [ 138
] * xx [ 78 ] + xx [ 75 ] * xx [ 80 ] ) - ( xx [ 100 ] + xx [ 88 ] ) - xx [
87 ] ; motionData [ 118 ] = - ( 2.078947296344433e-4 + xx [ 101 ] ) ;
motionData [ 119 ] = xx [ 149 ] ; motionData [ 120 ] = xx [ 6 ] ; motionData
[ 121 ] = xx [ 8 ] ; motionData [ 122 ] = xx [ 9 ] ; motionData [ 123 ] = -
xx [ 150 ] ; motionData [ 124 ] = - xx [ 151 ] ; motionData [ 125 ] = xx [
152 ] ; motionData [ 126 ] = xx [ 166 ] ; motionData [ 127 ] = xx [ 13 ] ;
motionData [ 128 ] = xx [ 18 ] ; motionData [ 129 ] = xx [ 160 ] ; motionData
[ 130 ] = xx [ 161 ] ; motionData [ 131 ] = xx [ 165 ] ; motionData [ 132 ] =
xx [ 5 ] ; motionData [ 133 ] = xx [ 27 ] ; motionData [ 134 ] = xx [ 28 ] ;
motionData [ 135 ] = xx [ 162 ] ; motionData [ 136 ] = xx [ 163 ] ;
motionData [ 137 ] = xx [ 164 ] ; motionData [ 138 ] = xx [ 21 ] ; motionData
[ 139 ] = xx [ 37 ] ; motionData [ 140 ] = xx [ 38 ] ; motionData [ 141 ] =
xx [ 167 ] ; motionData [ 142 ] = xx [ 168 ] ; motionData [ 143 ] = xx [ 172
] - xx [ 31 ] * state [ 9 ] ; motionData [ 144 ] = xx [ 173 ] - xx [ 47 ] *
state [ 9 ] ; motionData [ 145 ] = xx [ 174 ] - xx [ 48 ] * state [ 9 ] ;
motionData [ 146 ] = xx [ 178 ] - 3.853526455052602e-7 * state [ 9 ] ;
motionData [ 147 ] = xx [ 179 ] + 2.270950960928974e-9 * state [ 9 ] ;
motionData [ 148 ] = xx [ 180 ] + 1.775173053264939e-3 * state [ 9 ] ;
motionData [ 149 ] = xx [ 181 ] ; motionData [ 150 ] = xx [ 41 ] ; motionData
[ 151 ] = xx [ 57 ] ; motionData [ 152 ] = xx [ 58 ] ; motionData [ 153 ] =
xx [ 169 ] ; motionData [ 154 ] = xx [ 170 ] ; motionData [ 155 ] = xx [ 182
] ; motionData [ 156 ] = xx [ 183 ] ; motionData [ 157 ] = xx [ 171 ] ;
motionData [ 158 ] = xx [ 70 ] ; motionData [ 159 ] = xx [ 59 ] ; motionData
[ 160 ] = xx [ 186 ] ; motionData [ 161 ] = xx [ 72 ] ; motionData [ 162 ] =
xx [ 73 ] ; motionData [ 163 ] = xx [ 52 ] ; motionData [ 164 ] = xx [ 184 ]
; motionData [ 165 ] = xx [ 71 ] ; motionData [ 166 ] = xx [ 81 ] ;
motionData [ 167 ] = xx [ 187 ] + xx [ 95 ] * state [ 17 ] ; motionData [ 168
] = xx [ 188 ] - xx [ 97 ] * state [ 17 ] ; motionData [ 169 ] = xx [ 189 ] -
xx [ 98 ] * state [ 17 ] ; motionData [ 170 ] = xx [ 190 ] +
1.267558015198214e-3 * state [ 17 ] ; motionData [ 171 ] = xx [ 191 ] -
0.02545789261362155 * state [ 17 ] ; motionData [ 172 ] = xx [ 192 ] +
7.693715776535444e-4 * state [ 17 ] ; motionData [ 173 ] = xx [ 146 ] ;
motionData [ 174 ] = xx [ 147 ] ; motionData [ 175 ] = xx [ 83 ] ; motionData
[ 176 ] = xx [ 148 ] ; motionData [ 177 ] = xx [ 99 ] ; motionData [ 178 ] =
xx [ 128 ] ; motionData [ 179 ] = xx [ 193 ] - xx [ 4 ] * state [ 21 ] ;
motionData [ 180 ] = xx [ 194 ] + xx [ 119 ] * state [ 21 ] ; motionData [
181 ] = xx [ 195 ] - xx [ 98 ] * state [ 21 ] ; motionData [ 182 ] = xx [ 196
] + 1.267558276479352e-3 * state [ 21 ] ; motionData [ 183 ] = xx [ 197 ] -
0.02545789283437272 * state [ 21 ] ; motionData [ 184 ] = xx [ 198 ] -
7.693716347542733e-4 * state [ 21 ] ; } static size_t computeAssemblyError_0
( const RuntimeDerivedValuesBundle * rtdv , const double * state , const int
* modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 16 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; ( void ) modeVector ; xx [ 0 ] = 0.6950555487140754 ; xx [ 1 ] = -
0.4332134671585962 ; xx [ 2 ] = - 0.4754690018336444 ; xx [ 3 ] = -
0.3211745699296897 ; xx [ 4 ] = motionData [ 84 ] ; xx [ 5 ] = motionData [
85 ] ; xx [ 6 ] = motionData [ 86 ] ; xx [ 7 ] = motionData [ 87 ] ; xx [ 8 ]
= 0.3857454927643891 ; xx [ 9 ] = 0.5034016931648384 ; xx [ 10 ] =
0.5842144511346662 ; xx [ 11 ] = 0.5064391624036924 ;
pm_math_Quaternion_compose_ra ( xx + 4 , xx + 8 , xx + 12 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 12 , xx + 8 ) ; xx [ 0 ]
= 5.728444065062708e-4 ; xx [ 1 ] = - 0.0463662621131998 ; xx [ 2 ] =
7.575300750045659e-3 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 0 , xx +
11 ) ; xx [ 0 ] = xx [ 11 ] + motionData [ 88 ] - 4.103366750367182e-3 ; xx [
1 ] = xx [ 12 ] + motionData [ 89 ] - 0.0139940128625294 ; xx [ 2 ] = xx [ 13
] + motionData [ 90 ] - 0.02757292748492293 ; xx [ 3 ] = - 0.3826804379272111
; xx [ 4 ] = 0.9076319526101295 ; xx [ 5 ] = 0.1725106403354915 ; error [ 0 ]
= xx [ 9 ] ; error [ 1 ] = xx [ 10 ] ; error [ 2 ] = pm_math_Vector3_dot_ra (
xx + 0 , xx + 3 ) ; return 3 ; } static size_t computeAssemblyError_1 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 16 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; ( void ) modeVector ; xx [ 0 ] = 0.6950555487140754 ; xx [ 1 ] = -
0.4332134671585962 ; xx [ 2 ] = - 0.4754690018336444 ; xx [ 3 ] = -
0.3211745699296897 ; xx [ 4 ] = motionData [ 105 ] ; xx [ 5 ] = motionData [
106 ] ; xx [ 6 ] = motionData [ 107 ] ; xx [ 7 ] = motionData [ 108 ] ; xx [
8 ] = 0.5034016931648424 ; xx [ 9 ] = 0.3857454927643942 ; xx [ 10 ] =
0.5064391624036884 ; xx [ 11 ] = 0.5842144511346627 ;
pm_math_Quaternion_compose_ra ( xx + 4 , xx + 8 , xx + 12 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 12 , xx + 8 ) ; xx [ 0 ]
= - 0.01271019941645938 ; xx [ 1 ] = 0.02011896482120349 ; xx [ 2 ] = -
0.01159391418917814 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 0 , xx + 11
) ; xx [ 0 ] = xx [ 11 ] + motionData [ 109 ] - 4.103366750367182e-3 ; xx [ 1
] = xx [ 12 ] + motionData [ 110 ] - 0.0139940128625294 ; xx [ 2 ] = xx [ 13
] + motionData [ 111 ] - 0.02757292748492293 ; xx [ 3 ] = -
0.3826804379272111 ; xx [ 4 ] = 0.9076319526101295 ; xx [ 5 ] =
0.1725106403354915 ; error [ 0 ] = xx [ 9 ] ; error [ 1 ] = xx [ 10 ] ; error
[ 2 ] = pm_math_Vector3_dot_ra ( xx + 0 , xx + 3 ) ; return 3 ; } static
size_t computeAssemblyError_2 ( const RuntimeDerivedValuesBundle * rtdv ,
const double * state , const int * modeVector , const double * motionData ,
double * error ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const
int * rtdvi = rtdv -> mInts . mValues ; double xx [ 21 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) state ; ( void ) modeVector ; xx [ 0 ] = motionData [
28 ] ; xx [ 1 ] = motionData [ 29 ] ; xx [ 2 ] = motionData [ 30 ] ; xx [ 3 ]
= motionData [ 31 ] ; xx [ 4 ] = 0.7070832170269247 ; xx [ 5 ] =
0.7070839779596056 ; xx [ 6 ] = - 5.77635371758612e-3 ; xx [ 7 ] = -
5.675037392355237e-3 ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 4 , xx +
8 ) ; xx [ 4 ] = motionData [ 35 ] ; xx [ 5 ] = motionData [ 36 ] ; xx [ 6 ]
= motionData [ 37 ] ; xx [ 7 ] = motionData [ 38 ] ; xx [ 12 ] = -
0.2643737754551072 ; xx [ 13 ] = - 0.029879175111395 ; xx [ 14 ] =
0.6425355357697462 ; xx [ 15 ] = 0.7185832081390159 ;
pm_math_Quaternion_compose_ra ( xx + 4 , xx + 12 , xx + 16 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 8 , xx + 16 , xx + 12 ) ; xx [ 15
] = 0.01025445069467229 ; xx [ 16 ] = - 9.847964366436174e-3 ; xx [ 17 ] = -
0.01014277598357412 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 15 , xx +
18 ) ; xx [ 4 ] = - 1.779962358034746e-3 ; xx [ 5 ] = - 2.813288543230789e-4
; xx [ 6 ] = - 3.860324031167178e-7 ; pm_math_Quaternion_xform_ra ( xx + 0 ,
xx + 4 , xx + 15 ) ; xx [ 0 ] = xx [ 18 ] + motionData [ 39 ] - ( xx [ 15 ] +
motionData [ 32 ] ) ; xx [ 1 ] = xx [ 19 ] + motionData [ 40 ] - ( xx [ 16 ]
+ motionData [ 33 ] ) ; xx [ 2 ] = xx [ 20 ] + motionData [ 41 ] - ( xx [ 17
] + motionData [ 34 ] ) ; xx [ 3 ] = 2.0 ; xx [ 4 ] = xx [ 3 ] * ( xx [ 8 ] *
xx [ 10 ] + xx [ 9 ] * xx [ 11 ] ) ; xx [ 5 ] = xx [ 3 ] * ( xx [ 10 ] * xx [
11 ] - xx [ 8 ] * xx [ 9 ] ) ; xx [ 6 ] = 1.0 - xx [ 3 ] * ( xx [ 9 ] * xx [
9 ] + xx [ 10 ] * xx [ 10 ] ) ; error [ 0 ] = xx [ 13 ] ; error [ 1 ] = xx [
14 ] ; error [ 2 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] * xx [ 1 ] + xx [
2 ] * xx [ 2 ] ) - 0.0398888296 ; error [ 3 ] = pm_math_Vector3_dot_ra ( xx +
0 , xx + 4 ) ; return 4 ; } size_t
cst_robotarm_98bf360f_6_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const double *
state , const int * modeVector , const double * motionData , double * error )
{ ( void ) mech ; ( void ) rtdv ; ( void ) state ; ( void ) modeVector ; (
void ) motionData ; ( void ) error ; switch ( constraintIdx ) { case 0 :
return computeAssemblyError_0 ( rtdv , state , modeVector , motionData ,
error ) ; case 1 : return computeAssemblyError_1 ( rtdv , state , modeVector
, motionData , error ) ; case 2 : return computeAssemblyError_2 ( rtdv ,
state , modeVector , motionData , error ) ; } return 0 ; } static size_t
computeAssemblyJacobian_0 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 41 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.6950555487140754
; xx [ 2 ] = - 0.4332134671585962 ; xx [ 3 ] = - 0.4754690018336444 ; xx [ 4
] = - 0.3211745699296897 ; xx [ 5 ] = motionData [ 84 ] ; xx [ 6 ] =
motionData [ 85 ] ; xx [ 7 ] = motionData [ 86 ] ; xx [ 8 ] = motionData [ 87
] ; xx [ 9 ] = 0.3857454927643891 ; xx [ 10 ] = 0.5034016931648384 ; xx [ 11
] = 0.5842144511346662 ; xx [ 12 ] = 0.5064391624036924 ;
pm_math_Quaternion_compose_ra ( xx + 5 , xx + 9 , xx + 13 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 1 , xx + 13 , xx + 5 ) ; xx [ 1 ]
= 2.0 ; xx [ 2 ] = 1.0 ; xx [ 13 ] = xx [ 1 ] * ( motionData [ 92 ] *
motionData [ 94 ] - motionData [ 91 ] * motionData [ 93 ] ) ; xx [ 14 ] = xx
[ 1 ] * ( motionData [ 91 ] * motionData [ 92 ] + motionData [ 93 ] *
motionData [ 94 ] ) ; xx [ 15 ] = xx [ 2 ] - xx [ 1 ] * ( motionData [ 92 ] *
motionData [ 92 ] + motionData [ 93 ] * motionData [ 93 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 13 , xx + 16 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 16 , xx + 19 ) ; xx [ 16 ] =
xx [ 1 ] * ( motionData [ 70 ] * motionData [ 72 ] - motionData [ 71 ] *
motionData [ 73 ] ) ; xx [ 17 ] = - ( xx [ 1 ] * ( motionData [ 70 ] *
motionData [ 71 ] + motionData [ 72 ] * motionData [ 73 ] ) ) ; xx [ 18 ] =
xx [ 1 ] * ( motionData [ 71 ] * motionData [ 71 ] + motionData [ 72 ] *
motionData [ 72 ] ) - xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 9
, xx + 16 , xx + 2 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 2 , xx
+ 9 ) ; xx [ 2 ] = - 2.775557561562891e-16 ; xx [ 3 ] = - 1.0 ; xx [ 4 ] =
1.48769885299771e-14 ; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 2 , xx
+ 23 ) ; xx [ 2 ] = 0.5912864502323997 ; xx [ 3 ] = 0.5 ; xx [ 4 ] = xx [ 3 ]
* state [ 12 ] ; xx [ 5 ] = sin ( xx [ 4 ] ) ; xx [ 6 ] = 0.04451361391915684
; xx [ 7 ] = cos ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 2 ] * xx [ 5 ] - xx [ 6 ] *
xx [ 7 ] ; xx [ 8 ] = 0.6953254828680254 ; xx [ 9 ] = 0.4061050908592153 ; xx
[ 12 ] = xx [ 8 ] * xx [ 7 ] + xx [ 9 ] * xx [ 5 ] ; xx [ 19 ] = - xx [ 12 ]
; xx [ 22 ] = xx [ 8 ] * xx [ 5 ] - xx [ 9 ] * xx [ 7 ] ; xx [ 8 ] = xx [ 6 ]
* xx [ 5 ] + xx [ 2 ] * xx [ 7 ] ; xx [ 2 ] = - xx [ 8 ] ; xx [ 26 ] = xx [ 4
] ; xx [ 27 ] = xx [ 19 ] ; xx [ 28 ] = xx [ 22 ] ; xx [ 29 ] = xx [ 2 ] ; xx
[ 30 ] = motionData [ 91 ] ; xx [ 31 ] = motionData [ 92 ] ; xx [ 32 ] =
motionData [ 93 ] ; xx [ 33 ] = motionData [ 94 ] ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 30 , xx + 34 ) ; xx [ 5 ] =
5.728444065062708e-4 ; xx [ 6 ] = - 0.0463662621131998 ; xx [ 7 ] =
7.575300750045659e-3 ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 5 , xx + 26
) ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 26 , xx + 13 ) ; xx [ 26 ] =
xx [ 19 ] ; xx [ 27 ] = xx [ 22 ] ; xx [ 28 ] = xx [ 2 ] ; xx [ 2 ] =
motionData [ 95 ] * xx [ 8 ] ; xx [ 9 ] = motionData [ 96 ] * xx [ 8 ] ; xx [
19 ] = xx [ 22 ] * motionData [ 96 ] - motionData [ 95 ] * xx [ 12 ] ; xx [
29 ] = xx [ 2 ] ; xx [ 30 ] = xx [ 9 ] ; xx [ 31 ] = xx [ 19 ] ;
pm_math_Vector3_cross_ra ( xx + 26 , xx + 29 , xx + 32 ) ; xx [ 23 ] =
6.31742519402702e-9 ; xx [ 29 ] = xx [ 23 ] * xx [ 8 ] ; xx [ 30 ] =
6.11133899174537e-11 ; xx [ 31 ] = xx [ 30 ] * xx [ 8 ] ; xx [ 8 ] = xx [ 23
] * xx [ 12 ] + xx [ 30 ] * xx [ 22 ] ; xx [ 35 ] = xx [ 29 ] ; xx [ 36 ] = -
xx [ 31 ] ; xx [ 37 ] = - xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx
+ 35 , xx + 38 ) ; xx [ 26 ] = xx [ 13 ] + xx [ 1 ] * ( xx [ 32 ] + xx [ 2 ]
* xx [ 4 ] ) + xx [ 1 ] * ( xx [ 38 ] + xx [ 29 ] * xx [ 4 ] ) - motionData [
96 ] + xx [ 30 ] ; xx [ 27 ] = xx [ 14 ] + motionData [ 95 ] + xx [ 1 ] * (
xx [ 33 ] + xx [ 9 ] * xx [ 4 ] ) + xx [ 1 ] * ( xx [ 39 ] - xx [ 31 ] * xx [
4 ] ) + xx [ 23 ] ; xx [ 28 ] = xx [ 15 ] + xx [ 1 ] * ( xx [ 4 ] * xx [ 19 ]
+ xx [ 34 ] ) + xx [ 1 ] * ( xx [ 40 ] - xx [ 8 ] * xx [ 4 ] ) ; xx [ 12 ] =
- 0.3826804379272111 ; xx [ 13 ] = 0.9076319526101295 ; xx [ 14 ] =
0.1725106403354915 ; xx [ 2 ] = xx [ 3 ] * state [ 18 ] ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 29 ] = - ( motionData [ 43 ] *
xx [ 4 ] + motionData [ 44 ] * xx [ 8 ] ) ; xx [ 30 ] = motionData [ 42 ] *
xx [ 4 ] - motionData [ 45 ] * xx [ 8 ] ; xx [ 31 ] = motionData [ 42 ] * xx
[ 8 ] + motionData [ 45 ] * xx [ 4 ] ; xx [ 32 ] = motionData [ 43 ] * xx [ 8
] - motionData [ 44 ] * xx [ 4 ] ; xx [ 33 ] = motionData [ 70 ] ; xx [ 34 ]
= motionData [ 71 ] ; xx [ 35 ] = motionData [ 72 ] ; xx [ 36 ] = motionData
[ 73 ] ; pm_math_Quaternion_compose_ra ( xx + 29 , xx + 33 , xx + 37 ) ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 5 , xx + 29 ) ;
pm_math_Quaternion_xform_ra ( xx + 37 , xx + 29 , xx + 5 ) ; xx [ 2 ] =
8.500005402767106e-3 ; xx [ 9 ] = 2.534418181099341e-9 ; xx [ 15 ] = xx [ 2 ]
* xx [ 4 ] + xx [ 9 ] * xx [ 8 ] ; xx [ 16 ] = motionData [ 74 ] * xx [ 4 ] +
motionData [ 75 ] * xx [ 8 ] ; xx [ 17 ] = motionData [ 75 ] + xx [ 1 ] * xx
[ 15 ] * xx [ 8 ] - xx [ 1 ] * xx [ 16 ] * xx [ 8 ] - xx [ 9 ] ; xx [ 29 ] =
motionData [ 43 ] ; xx [ 30 ] = motionData [ 44 ] ; xx [ 31 ] = motionData [
45 ] ; xx [ 8 ] = xx [ 1 ] * xx [ 16 ] * xx [ 4 ] - ( motionData [ 74 ] + xx
[ 1 ] * xx [ 15 ] * xx [ 4 ] ) + xx [ 2 ] ; xx [ 2 ] = motionData [ 45 ] * xx
[ 8 ] ; xx [ 4 ] = motionData [ 45 ] * xx [ 17 ] ; xx [ 9 ] = motionData [ 43
] * xx [ 8 ] - motionData [ 44 ] * xx [ 17 ] ; xx [ 32 ] = - xx [ 2 ] ; xx [
33 ] = xx [ 4 ] ; xx [ 34 ] = xx [ 9 ] ; pm_math_Vector3_cross_ra ( xx + 29 ,
xx + 32 , xx + 35 ) ; xx [ 29 ] = xx [ 5 ] + xx [ 17 ] + xx [ 1 ] * ( xx [ 35
] - xx [ 2 ] * motionData [ 42 ] ) ; xx [ 30 ] = xx [ 6 ] + xx [ 8 ] + xx [ 1
] * ( xx [ 4 ] * motionData [ 42 ] + xx [ 36 ] ) ; xx [ 31 ] = xx [ 7 ] + xx
[ 1 ] * ( xx [ 9 ] * motionData [ 42 ] + xx [ 37 ] ) ; xx [ 4 ] = motionData
[ 77 ] ; xx [ 5 ] = motionData [ 78 ] ; xx [ 6 ] = motionData [ 79 ] ; xx [ 7
] = motionData [ 80 ] ; xx [ 15 ] = - 0.9899003997337941 ; xx [ 16 ] =
0.01994045583473794 ; xx [ 17 ] = 0.09771574456570448 ; xx [ 18 ] =
0.1007532138045611 ; xx [ 1 ] = xx [ 3 ] * state [ 20 ] ; xx [ 2 ] = sin ( xx
[ 1 ] ) ; xx [ 32 ] = cos ( xx [ 1 ] ) ; xx [ 33 ] = - ( 0.1974758392319079 *
xx [ 2 ] ) ; xx [ 34 ] = 0.0197877797947617 * xx [ 2 ] ; xx [ 35 ] = - (
0.9801080229701458 * xx [ 2 ] ) ; pm_math_Quaternion_compose_ra ( xx + 15 ,
xx + 32 , xx + 36 ) ; pm_math_Quaternion_compose_ra ( xx + 4 , xx + 36 , xx +
15 ) ; xx [ 1 ] = - 0.04529404710916283 ; xx [ 2 ] = 9.34489474319e-4 ; xx [
3 ] = 9.144881203878137e-3 ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 1 ,
xx + 32 ) ; xx [ 1 ] = 1.267558276479352e-3 ; xx [ 2 ] = -
0.02545789283437272 ; xx [ 3 ] = - 7.693716347542733e-4 ;
pm_math_Quaternion_xform_ra ( xx + 36 , xx + 1 , xx + 15 ) ;
pm_math_Quaternion_xform_ra ( xx + 4 , xx + 15 , xx + 1 ) ; xx [ 4 ] = xx [
32 ] + xx [ 1 ] ; xx [ 5 ] = xx [ 33 ] + xx [ 2 ] ; xx [ 6 ] = xx [ 34 ] + xx
[ 3 ] ; J [ 6 ] = xx [ 20 ] ; J [ 9 ] = xx [ 10 ] ; J [ 10 ] = xx [ 24 ] ; J
[ 17 ] = xx [ 21 ] ; J [ 20 ] = xx [ 11 ] ; J [ 21 ] = xx [ 25 ] ; J [ 28 ] =
pm_math_Vector3_dot_ra ( xx + 26 , xx + 12 ) ; J [ 31 ] =
pm_math_Vector3_dot_ra ( xx + 29 , xx + 12 ) ; J [ 32 ] =
pm_math_Vector3_dot_ra ( xx + 4 , xx + 12 ) ; return 3 ; } static size_t
computeAssemblyJacobian_1 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 41 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.6950555487140754
; xx [ 2 ] = - 0.4332134671585962 ; xx [ 3 ] = - 0.4754690018336444 ; xx [ 4
] = - 0.3211745699296897 ; xx [ 5 ] = motionData [ 105 ] ; xx [ 6 ] =
motionData [ 106 ] ; xx [ 7 ] = motionData [ 107 ] ; xx [ 8 ] = motionData [
108 ] ; xx [ 9 ] = 0.5034016931648424 ; xx [ 10 ] = 0.3857454927643942 ; xx [
11 ] = 0.5064391624036884 ; xx [ 12 ] = 0.5842144511346627 ;
pm_math_Quaternion_compose_ra ( xx + 5 , xx + 9 , xx + 13 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 1 , xx + 13 , xx + 5 ) ; xx [ 1 ]
= 2.0 ; xx [ 2 ] = 1.0 ; xx [ 13 ] = xx [ 1 ] * ( motionData [ 113 ] *
motionData [ 115 ] - motionData [ 112 ] * motionData [ 114 ] ) ; xx [ 14 ] =
xx [ 1 ] * ( motionData [ 112 ] * motionData [ 113 ] + motionData [ 114 ] *
motionData [ 115 ] ) ; xx [ 15 ] = xx [ 2 ] - xx [ 1 ] * ( motionData [ 113 ]
* motionData [ 113 ] + motionData [ 114 ] * motionData [ 114 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 13 , xx + 16 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 16 , xx + 19 ) ; xx [ 16 ] =
xx [ 1 ] * ( motionData [ 57 ] * motionData [ 59 ] - motionData [ 56 ] *
motionData [ 58 ] ) ; xx [ 17 ] = xx [ 1 ] * ( motionData [ 56 ] * motionData
[ 57 ] + motionData [ 58 ] * motionData [ 59 ] ) ; xx [ 18 ] = xx [ 2 ] - xx
[ 1 ] * ( motionData [ 57 ] * motionData [ 57 ] + motionData [ 58 ] *
motionData [ 58 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 16 ,
xx + 2 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 2 , xx + 9 ) ; xx
[ 2 ] = - 3.05311331771918e-16 ; xx [ 3 ] = - 1.0 ; xx [ 4 ] = -
1.332267629550188e-14 ; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 2 ,
xx + 23 ) ; xx [ 2 ] = 0.5912864502323997 ; xx [ 3 ] = 0.5 ; xx [ 4 ] = xx [
3 ] * state [ 12 ] ; xx [ 5 ] = sin ( xx [ 4 ] ) ; xx [ 6 ] =
0.04451361391915684 ; xx [ 7 ] = cos ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 2 ] * xx
[ 5 ] - xx [ 6 ] * xx [ 7 ] ; xx [ 8 ] = 0.6953254828680254 ; xx [ 9 ] =
0.4061050908592153 ; xx [ 12 ] = xx [ 8 ] * xx [ 7 ] + xx [ 9 ] * xx [ 5 ] ;
xx [ 19 ] = - xx [ 12 ] ; xx [ 22 ] = xx [ 8 ] * xx [ 5 ] - xx [ 9 ] * xx [ 7
] ; xx [ 8 ] = xx [ 6 ] * xx [ 5 ] + xx [ 2 ] * xx [ 7 ] ; xx [ 2 ] = - xx [
8 ] ; xx [ 26 ] = xx [ 4 ] ; xx [ 27 ] = xx [ 19 ] ; xx [ 28 ] = xx [ 22 ] ;
xx [ 29 ] = xx [ 2 ] ; xx [ 30 ] = motionData [ 112 ] ; xx [ 31 ] =
motionData [ 113 ] ; xx [ 32 ] = motionData [ 114 ] ; xx [ 33 ] = motionData
[ 115 ] ; pm_math_Quaternion_compose_ra ( xx + 26 , xx + 30 , xx + 34 ) ; xx
[ 5 ] = - 0.01271019941645938 ; xx [ 6 ] = 0.02011896482120349 ; xx [ 7 ] = -
0.01159391418917814 ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 5 , xx + 26 )
; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 26 , xx + 13 ) ; xx [ 26 ] =
xx [ 19 ] ; xx [ 27 ] = xx [ 22 ] ; xx [ 28 ] = xx [ 2 ] ; xx [ 2 ] =
motionData [ 116 ] * xx [ 8 ] ; xx [ 9 ] = motionData [ 117 ] * xx [ 8 ] ; xx
[ 19 ] = xx [ 22 ] * motionData [ 117 ] - motionData [ 116 ] * xx [ 12 ] ; xx
[ 29 ] = xx [ 2 ] ; xx [ 30 ] = xx [ 9 ] ; xx [ 31 ] = xx [ 19 ] ;
pm_math_Vector3_cross_ra ( xx + 26 , xx + 29 , xx + 32 ) ; xx [ 23 ] =
6.31742519402702e-9 ; xx [ 29 ] = xx [ 23 ] * xx [ 8 ] ; xx [ 30 ] =
6.11133899174537e-11 ; xx [ 31 ] = xx [ 30 ] * xx [ 8 ] ; xx [ 8 ] = xx [ 23
] * xx [ 12 ] + xx [ 30 ] * xx [ 22 ] ; xx [ 35 ] = xx [ 29 ] ; xx [ 36 ] = -
xx [ 31 ] ; xx [ 37 ] = - xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx
+ 35 , xx + 38 ) ; xx [ 26 ] = xx [ 13 ] + xx [ 1 ] * ( xx [ 32 ] + xx [ 2 ]
* xx [ 4 ] ) + xx [ 1 ] * ( xx [ 38 ] + xx [ 29 ] * xx [ 4 ] ) - motionData [
117 ] + xx [ 30 ] ; xx [ 27 ] = xx [ 14 ] + motionData [ 116 ] + xx [ 1 ] * (
xx [ 33 ] + xx [ 9 ] * xx [ 4 ] ) + xx [ 1 ] * ( xx [ 39 ] - xx [ 31 ] * xx [
4 ] ) + xx [ 23 ] ; xx [ 28 ] = xx [ 15 ] + xx [ 1 ] * ( xx [ 4 ] * xx [ 19 ]
+ xx [ 34 ] ) + xx [ 1 ] * ( xx [ 40 ] - xx [ 8 ] * xx [ 4 ] ) ; xx [ 12 ] =
- 0.3826804379272111 ; xx [ 13 ] = 0.9076319526101295 ; xx [ 14 ] =
0.1725106403354915 ; xx [ 2 ] = xx [ 3 ] * state [ 14 ] ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 29 ] = motionData [ 42 ] * xx [
4 ] - motionData [ 45 ] * xx [ 8 ] ; xx [ 30 ] = motionData [ 43 ] * xx [ 4 ]
+ motionData [ 44 ] * xx [ 8 ] ; xx [ 31 ] = motionData [ 44 ] * xx [ 4 ] -
motionData [ 43 ] * xx [ 8 ] ; xx [ 32 ] = motionData [ 42 ] * xx [ 8 ] +
motionData [ 45 ] * xx [ 4 ] ; xx [ 33 ] = motionData [ 56 ] ; xx [ 34 ] =
motionData [ 57 ] ; xx [ 35 ] = motionData [ 58 ] ; xx [ 36 ] = motionData [
59 ] ; pm_math_Quaternion_compose_ra ( xx + 29 , xx + 33 , xx + 37 ) ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 5 , xx + 29 ) ;
pm_math_Quaternion_xform_ra ( xx + 37 , xx + 29 , xx + 5 ) ; xx [ 2 ] =
motionData [ 61 ] * xx [ 8 ] ; xx [ 9 ] = motionData [ 60 ] * xx [ 8 ] ; xx [
15 ] = 8.499995046130028e-3 ; xx [ 16 ] = xx [ 15 ] * xx [ 8 ] ; xx [ 17 ] =
3.566398367738088e-9 ; xx [ 18 ] = xx [ 17 ] * xx [ 8 ] ; xx [ 19 ] = xx [ 1
] * ( xx [ 2 ] * xx [ 8 ] - xx [ 9 ] * xx [ 4 ] ) - ( motionData [ 61 ] + xx
[ 1 ] * ( xx [ 16 ] * xx [ 4 ] - xx [ 18 ] * xx [ 8 ] ) ) - xx [ 17 ] ; xx [
29 ] = motionData [ 43 ] ; xx [ 30 ] = motionData [ 44 ] ; xx [ 31 ] =
motionData [ 45 ] ; xx [ 17 ] = motionData [ 60 ] - xx [ 1 ] * ( xx [ 18 ] *
xx [ 4 ] + xx [ 16 ] * xx [ 8 ] ) - xx [ 1 ] * ( xx [ 2 ] * xx [ 4 ] + xx [ 9
] * xx [ 8 ] ) + xx [ 15 ] ; xx [ 2 ] = motionData [ 45 ] * xx [ 17 ] ; xx [
4 ] = motionData [ 45 ] * xx [ 19 ] ; xx [ 8 ] = motionData [ 43 ] * xx [ 17
] - motionData [ 44 ] * xx [ 19 ] ; xx [ 32 ] = - xx [ 2 ] ; xx [ 33 ] = xx [
4 ] ; xx [ 34 ] = xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 29 , xx + 32 ,
xx + 35 ) ; xx [ 29 ] = xx [ 5 ] + xx [ 19 ] + xx [ 1 ] * ( xx [ 35 ] - xx [
2 ] * motionData [ 42 ] ) ; xx [ 30 ] = xx [ 6 ] + xx [ 17 ] + xx [ 1 ] * (
xx [ 4 ] * motionData [ 42 ] + xx [ 36 ] ) ; xx [ 31 ] = xx [ 7 ] + xx [ 1 ]
* ( xx [ 8 ] * motionData [ 42 ] + xx [ 37 ] ) ; xx [ 4 ] = motionData [ 98 ]
; xx [ 5 ] = motionData [ 99 ] ; xx [ 6 ] = motionData [ 100 ] ; xx [ 7 ] =
motionData [ 101 ] ; xx [ 15 ] = - 0.9899003997337941 ; xx [ 16 ] = -
0.01994045583473804 ; xx [ 17 ] = - 0.09771574456570453 ; xx [ 18 ] =
0.1007532138045611 ; xx [ 1 ] = xx [ 3 ] * state [ 16 ] ; xx [ 2 ] = sin ( xx
[ 1 ] ) ; xx [ 32 ] = cos ( xx [ 1 ] ) ; xx [ 33 ] = 0.197475839231908 * xx [
2 ] ; xx [ 34 ] = - ( 0.01978777979476189 * xx [ 2 ] ) ; xx [ 35 ] = - (
0.9801080229701458 * xx [ 2 ] ) ; pm_math_Quaternion_compose_ra ( xx + 15 ,
xx + 32 , xx + 36 ) ; pm_math_Quaternion_compose_ra ( xx + 4 , xx + 36 , xx +
15 ) ; xx [ 1 ] = 0.01994817665605048 ; xx [ 2 ] = 0.01474688635611298 ; xx [
3 ] = 3.721502835343984e-3 ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 1 ,
xx + 32 ) ; xx [ 1 ] = 1.267558015198214e-3 ; xx [ 2 ] = -
0.02545789261362155 ; xx [ 3 ] = 7.693715776535444e-4 ;
pm_math_Quaternion_xform_ra ( xx + 36 , xx + 1 , xx + 15 ) ;
pm_math_Quaternion_xform_ra ( xx + 4 , xx + 15 , xx + 1 ) ; xx [ 4 ] = xx [
32 ] + xx [ 1 ] ; xx [ 5 ] = xx [ 33 ] + xx [ 2 ] ; xx [ 6 ] = xx [ 34 ] + xx
[ 3 ] ; J [ 6 ] = xx [ 20 ] ; J [ 7 ] = xx [ 10 ] ; J [ 8 ] = xx [ 24 ] ; J [
17 ] = xx [ 21 ] ; J [ 18 ] = xx [ 11 ] ; J [ 19 ] = xx [ 25 ] ; J [ 28 ] =
pm_math_Vector3_dot_ra ( xx + 26 , xx + 12 ) ; J [ 29 ] =
pm_math_Vector3_dot_ra ( xx + 29 , xx + 12 ) ; J [ 30 ] =
pm_math_Vector3_dot_ra ( xx + 4 , xx + 12 ) ; return 3 ; } static size_t
computeAssemblyJacobian_2p ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 43 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = motionData [ 28 ] ;
xx [ 2 ] = motionData [ 29 ] ; xx [ 3 ] = motionData [ 30 ] ; xx [ 4 ] =
motionData [ 31 ] ; xx [ 5 ] = 0.7070832170269247 ; xx [ 6 ] =
0.7070839779596056 ; xx [ 7 ] = - 5.77635371758612e-3 ; xx [ 8 ] = -
5.675037392355237e-3 ; pm_math_Quaternion_compose_ra ( xx + 1 , xx + 5 , xx +
9 ) ; xx [ 5 ] = motionData [ 35 ] ; xx [ 6 ] = motionData [ 36 ] ; xx [ 7 ]
= motionData [ 37 ] ; xx [ 8 ] = motionData [ 38 ] ; xx [ 13 ] = -
0.2643737754551072 ; xx [ 14 ] = - 0.029879175111395 ; xx [ 15 ] =
0.6425355357697462 ; xx [ 16 ] = 0.7185832081390159 ;
pm_math_Quaternion_compose_ra ( xx + 5 , xx + 13 , xx + 17 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 9 , xx + 17 , xx + 13 ) ; xx [ 21
] = 0.01619418156754471 ; xx [ 22 ] = 0.9998688656410684 ; xx [ 23 ] =
2.236298900726297e-6 ; xx [ 24 ] = - xx [ 21 ] ; xx [ 25 ] = - xx [ 22 ] ; xx
[ 26 ] = - xx [ 23 ] ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 24 , xx +
27 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 17 , xx + 27 , xx + 24 ) ;
xx [ 17 ] = - xx [ 24 ] ; xx [ 18 ] = - xx [ 25 ] ; xx [ 19 ] = - xx [ 26 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 13 , xx + 17 , xx + 24 ) ; xx [ 17 ] =
1.665334536937735e-16 ; xx [ 18 ] = 2.220446049250313e-16 ; xx [ 19 ] =
0.9999999999999999 ; pm_math_Quaternion_compDeriv_ra ( xx + 13 , xx + 17 , xx
+ 28 ) ; xx [ 13 ] = - 0.9890584029719356 ; xx [ 14 ] = 0.02451507747925197 ;
xx [ 15 ] = - 0.1451159893451954 ; xx [ 16 ] = - 0.01019000113620927 ; xx [
17 ] = 0.5 ; xx [ 18 ] = xx [ 17 ] * state [ 8 ] ; xx [ 19 ] = sin ( xx [ 18
] ) ; xx [ 31 ] = cos ( xx [ 18 ] ) ; xx [ 32 ] = - ( xx [ 21 ] * xx [ 19 ] )
; xx [ 33 ] = - ( xx [ 22 ] * xx [ 19 ] ) ; xx [ 34 ] = - ( xx [ 23 ] * xx [
19 ] ) ; pm_math_Quaternion_compose_ra ( xx + 13 , xx + 31 , xx + 18 ) ; xx [
13 ] = 3.853526455973429e-7 ; xx [ 14 ] = - 2.270950962420449e-9 ; xx [ 15 ]
= - 1.775173053264905e-3 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 13 ,
xx + 22 ) ; xx [ 13 ] = - 3.853526455052602e-7 ; xx [ 14 ] =
2.270950960928974e-9 ; xx [ 15 ] = 1.775173053264939e-3 ;
pm_math_Quaternion_xform_ra ( xx + 18 , xx + 13 , xx + 31 ) ; xx [ 13 ] = xx
[ 22 ] + xx [ 31 ] ; xx [ 14 ] = xx [ 23 ] + xx [ 32 ] ; xx [ 15 ] = xx [ 24
] + xx [ 33 ] ; xx [ 22 ] = 0.01025445069467229 ; xx [ 23 ] = -
9.847964366436174e-3 ; xx [ 24 ] = - 0.01014277598357412 ;
pm_math_Quaternion_xform_ra ( xx + 5 , xx + 22 , xx + 31 ) ; xx [ 5 ] = -
1.779962358034746e-3 ; xx [ 6 ] = - 2.813288543230789e-4 ; xx [ 7 ] = -
3.860324031167178e-7 ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 5 , xx +
22 ) ; xx [ 1 ] = xx [ 31 ] + motionData [ 39 ] - ( xx [ 22 ] + motionData [
32 ] ) ; xx [ 2 ] = xx [ 32 ] + motionData [ 40 ] - ( xx [ 23 ] + motionData
[ 33 ] ) ; xx [ 3 ] = xx [ 33 ] + motionData [ 41 ] - ( xx [ 24 ] +
motionData [ 34 ] ) ; xx [ 4 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 2 ] * xx [
2 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 5 ] = xx [ 4 ] == 0.0 ? 0.0 : xx [ 1 ] /
xx [ 4 ] ; xx [ 6 ] = xx [ 4 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 4 ] ; xx [ 7 ]
= xx [ 4 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 4 ] ; xx [ 31 ] = -
0.215751709792892 ; xx [ 32 ] = - 0.2981849626920737 ; xx [ 33 ] = -
2.033832353854736e-3 ; xx [ 34 ] = - 0.929802554993116 ; xx [ 4 ] = xx [ 17 ]
* state [ 10 ] ; xx [ 8 ] = sin ( xx [ 4 ] ) ; xx [ 35 ] = cos ( xx [ 4 ] ) ;
xx [ 36 ] = - ( 0.3826804379272233 * xx [ 8 ] ) ; xx [ 37 ] =
0.9076319526101237 * xx [ 8 ] ; xx [ 38 ] = 0.1725106403354957 * xx [ 8 ] ;
pm_math_Quaternion_compose_ra ( xx + 31 , xx + 35 , xx + 39 ) ; xx [ 22 ] = -
7.507028932003404e-3 ; xx [ 23 ] = - 2.112440099565184e-3 ; xx [ 24 ] = -
5.538643790510167e-3 ; pm_math_Quaternion_xform_ra ( xx + 39 , xx + 22 , xx +
31 ) ; xx [ 22 ] = 7.507028932003423e-3 ; xx [ 23 ] = 2.112440099565195e-3 ;
xx [ 24 ] = 5.538643790510151e-3 ; pm_math_Quaternion_xform_ra ( xx + 39 , xx
+ 22 , xx + 34 ) ; xx [ 22 ] = xx [ 31 ] + xx [ 34 ] ; xx [ 23 ] = xx [ 32 ]
+ xx [ 35 ] ; xx [ 24 ] = xx [ 33 ] + xx [ 36 ] ; xx [ 31 ] = -
1.110079029024123e-16 ; xx [ 32 ] = 1.797569350196136e-18 ; xx [ 33 ] =
1.561251128379126e-16 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 31 , xx
+ 34 ) ; xx [ 4 ] = 2.0 ; xx [ 16 ] = xx [ 4 ] * ( xx [ 9 ] * xx [ 11 ] + xx
[ 10 ] * xx [ 12 ] ) ; xx [ 17 ] = xx [ 4 ] * ( xx [ 11 ] * xx [ 12 ] - xx [
9 ] * xx [ 10 ] ) ; xx [ 18 ] = 1.0 - xx [ 4 ] * ( xx [ 10 ] * xx [ 10 ] + xx
[ 11 ] * xx [ 11 ] ) ; J [ 4 ] = xx [ 25 ] ; J [ 5 ] = xx [ 29 ] ; J [ 15 ] =
xx [ 26 ] ; J [ 16 ] = xx [ 30 ] ; J [ 26 ] = - pm_math_Vector3_dot_ra ( xx +
13 , xx + 5 ) ; J [ 27 ] = pm_math_Vector3_dot_ra ( xx + 22 , xx + 5 ) ; J [
37 ] = pm_math_Vector3_dot_ra ( xx + 1 , xx + 34 ) - pm_math_Vector3_dot_ra (
xx + 13 , xx + 16 ) ; J [ 38 ] = pm_math_Vector3_dot_ra ( xx + 22 , xx + 16 )
; return 4 ; } static size_t computeAssemblyJacobian_2v ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 72 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx
[ 0 ] = 0.0 ; xx [ 1 ] = motionData [ 35 ] ; xx [ 2 ] = motionData [ 36 ] ;
xx [ 3 ] = motionData [ 37 ] ; xx [ 4 ] = motionData [ 38 ] ; xx [ 5 ] =
0.01025445069467229 ; xx [ 6 ] = - 9.847964366436174e-3 ; xx [ 7 ] = -
0.01014277598357412 ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 5 , xx + 8
) ; xx [ 11 ] = motionData [ 28 ] ; xx [ 12 ] = motionData [ 29 ] ; xx [ 13 ]
= motionData [ 30 ] ; xx [ 14 ] = motionData [ 31 ] ; xx [ 5 ] = -
1.779962358034746e-3 ; xx [ 6 ] = - 2.813288543230789e-4 ; xx [ 7 ] = -
3.860324031167178e-7 ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 5 , xx +
15 ) ; xx [ 5 ] = xx [ 8 ] + motionData [ 39 ] - ( xx [ 15 ] + motionData [
32 ] ) ; xx [ 6 ] = xx [ 9 ] + motionData [ 40 ] - ( xx [ 16 ] + motionData [
33 ] ) ; xx [ 7 ] = xx [ 10 ] + motionData [ 41 ] - ( xx [ 17 ] + motionData
[ 34 ] ) ; xx [ 8 ] = 1.0 ; xx [ 9 ] = 2.0 ; xx [ 15 ] = 0.7070832170269247 ;
xx [ 16 ] = 0.7070839779596056 ; xx [ 17 ] = - 5.77635371758612e-3 ; xx [ 18
] = - 5.675037392355237e-3 ; pm_math_Quaternion_compose_ra ( xx + 11 , xx +
15 , xx + 19 ) ; xx [ 10 ] = xx [ 21 ] * xx [ 21 ] ; xx [ 15 ] = xx [ 22 ] *
xx [ 22 ] ; xx [ 16 ] = xx [ 19 ] * xx [ 22 ] ; xx [ 17 ] = xx [ 20 ] * xx [
21 ] ; xx [ 18 ] = xx [ 20 ] * xx [ 22 ] ; xx [ 23 ] = xx [ 19 ] * xx [ 21 ]
; xx [ 24 ] = xx [ 8 ] - xx [ 9 ] * ( xx [ 10 ] + xx [ 15 ] ) ; xx [ 25 ] =
xx [ 9 ] * ( xx [ 16 ] + xx [ 17 ] ) ; xx [ 26 ] = xx [ 9 ] * ( xx [ 18 ] -
xx [ 23 ] ) ; xx [ 27 ] = pm_math_Vector3_dot_ra ( xx + 5 , xx + 24 ) ; xx [
28 ] = - 0.9890584029719356 ; xx [ 29 ] = 0.02451507747925197 ; xx [ 30 ] = -
0.1451159893451954 ; xx [ 31 ] = - 0.01019000113620927 ; xx [ 32 ] = 0.5 ; xx
[ 33 ] = xx [ 32 ] * state [ 8 ] ; xx [ 34 ] = 0.01619418156754471 ; xx [ 35
] = sin ( xx [ 33 ] ) ; xx [ 36 ] = 0.9998688656410684 ; xx [ 37 ] =
2.236298900726297e-6 ; xx [ 38 ] = cos ( xx [ 33 ] ) ; xx [ 39 ] = - ( xx [
34 ] * xx [ 35 ] ) ; xx [ 40 ] = - ( xx [ 36 ] * xx [ 35 ] ) ; xx [ 41 ] = -
( xx [ 37 ] * xx [ 35 ] ) ; pm_math_Quaternion_compose_ra ( xx + 28 , xx + 38
, xx + 42 ) ; xx [ 28 ] = - 0.9998688553766499 ; xx [ 29 ] =
0.01619418172173452 ; xx [ 30 ] = - 1.432695097203727e-4 ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 28 , xx + 38 ) ; xx [ 28 ] =
3.853526455973429e-7 ; xx [ 29 ] = - 2.270950962420449e-9 ; xx [ 30 ] = -
1.775173053264905e-3 ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 28 , xx +
46 ) ; xx [ 28 ] = - 3.853526455052602e-7 ; xx [ 29 ] = 2.270950960928974e-9
; xx [ 30 ] = 1.775173053264939e-3 ; pm_math_Quaternion_xform_ra ( xx + 42 ,
xx + 28 , xx + 49 ) ; xx [ 28 ] = xx [ 46 ] + xx [ 49 ] ; xx [ 29 ] = xx [ 47
] + xx [ 50 ] ; xx [ 30 ] = xx [ 48 ] + xx [ 51 ] ; xx [ 31 ] = xx [ 20 ] *
xx [ 20 ] ; xx [ 33 ] = xx [ 19 ] * xx [ 20 ] ; xx [ 35 ] = xx [ 21 ] * xx [
22 ] ; xx [ 46 ] = xx [ 9 ] * ( xx [ 17 ] - xx [ 16 ] ) ; xx [ 47 ] = xx [ 8
] - xx [ 9 ] * ( xx [ 15 ] + xx [ 31 ] ) ; xx [ 48 ] = xx [ 9 ] * ( xx [ 33 ]
+ xx [ 35 ] ) ; xx [ 15 ] = pm_math_Vector3_dot_ra ( xx + 5 , xx + 46 ) ; xx
[ 49 ] = - 1.432869371958337e-4 ; xx [ 50 ] = 8.412683135540379e-8 ; xx [ 51
] = 0.9999999897344243 ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 49 , xx
+ 52 ) ; xx [ 16 ] = 1.591118726857836e-5 ; xx [ 17 ] = xx [ 27 ] * xx [ 27 ]
+ xx [ 15 ] * xx [ 15 ] ; if ( xx [ 16 ] > xx [ 17 ] ) xx [ 17 ] = xx [ 16 ]
; xx [ 41 ] = xx [ 17 ] == 0.0 ? 0.0 : ( xx [ 27 ] * ( pm_math_Vector3_dot_ra
( xx + 5 , xx + 38 ) - pm_math_Vector3_dot_ra ( xx + 28 , xx + 46 ) ) - xx [
15 ] * ( pm_math_Vector3_dot_ra ( xx + 5 , xx + 52 ) - pm_math_Vector3_dot_ra
( xx + 28 , xx + 24 ) ) ) / xx [ 17 ] ; xx [ 49 ] = - 0.2643737754551072 ; xx
[ 50 ] = - 0.029879175111395 ; xx [ 51 ] = 0.6425355357697462 ; xx [ 52 ] =
0.7185832081390159 ; pm_math_Quaternion_compose_ra ( xx + 1 , xx + 49 , xx +
53 ) ; xx [ 1 ] = xx [ 54 ] * xx [ 55 ] ; xx [ 2 ] = xx [ 53 ] * xx [ 56 ] ;
xx [ 3 ] = xx [ 56 ] * xx [ 56 ] ; xx [ 38 ] = xx [ 9 ] * ( xx [ 1 ] - xx [ 2
] ) ; xx [ 39 ] = xx [ 8 ] - xx [ 9 ] * ( xx [ 3 ] + xx [ 54 ] * xx [ 54 ] )
; xx [ 40 ] = xx [ 9 ] * ( xx [ 53 ] * xx [ 54 ] + xx [ 55 ] * xx [ 56 ] ) ;
xx [ 4 ] = pm_math_Vector3_dot_ra ( xx + 5 , xx + 38 ) ; xx [ 49 ] = xx [ 8 ]
- xx [ 9 ] * ( xx [ 55 ] * xx [ 55 ] + xx [ 3 ] ) ; xx [ 50 ] = xx [ 9 ] * (
xx [ 2 ] + xx [ 1 ] ) ; xx [ 51 ] = xx [ 9 ] * ( xx [ 54 ] * xx [ 56 ] - xx [
53 ] * xx [ 55 ] ) ; xx [ 1 ] = pm_math_Vector3_dot_ra ( xx + 5 , xx + 49 ) ;
xx [ 2 ] = xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] ; if ( xx [ 16 ] > xx [
2 ] ) xx [ 2 ] = xx [ 16 ] ; xx [ 3 ] = xx [ 2 ] == 0.0 ? 0.0 : ( xx [ 4 ] *
pm_math_Vector3_dot_ra ( xx + 28 , xx + 49 ) - xx [ 1 ] *
pm_math_Vector3_dot_ra ( xx + 28 , xx + 38 ) ) / xx [ 2 ] ; xx [ 57 ] = -
0.215751709792892 ; xx [ 58 ] = - 0.2981849626920737 ; xx [ 59 ] = -
2.033832353854736e-3 ; xx [ 60 ] = - 0.929802554993116 ; xx [ 16 ] = xx [ 32
] * state [ 10 ] ; xx [ 32 ] = sin ( xx [ 16 ] ) ; xx [ 61 ] = cos ( xx [ 16
] ) ; xx [ 62 ] = - ( 0.3826804379272233 * xx [ 32 ] ) ; xx [ 63 ] =
0.9076319526101237 * xx [ 32 ] ; xx [ 64 ] = 0.1725106403354957 * xx [ 32 ] ;
pm_math_Quaternion_compose_ra ( xx + 57 , xx + 61 , xx + 65 ) ; xx [ 57 ] = -
7.507028932003404e-3 ; xx [ 58 ] = - 2.112440099565184e-3 ; xx [ 59 ] = -
5.538643790510167e-3 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx + 57 , xx +
60 ) ; xx [ 57 ] = 7.507028932003423e-3 ; xx [ 58 ] = 2.112440099565195e-3 ;
xx [ 59 ] = 5.538643790510151e-3 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx
+ 57 , xx + 69 ) ; xx [ 57 ] = xx [ 60 ] + xx [ 69 ] ; xx [ 58 ] = xx [ 61 ]
+ xx [ 70 ] ; xx [ 59 ] = xx [ 62 ] + xx [ 71 ] ; xx [ 16 ] = xx [ 17 ] ==
0.0 ? 0.0 : ( xx [ 27 ] * pm_math_Vector3_dot_ra ( xx + 57 , xx + 46 ) - xx [
15 ] * pm_math_Vector3_dot_ra ( xx + 57 , xx + 24 ) ) / xx [ 17 ] ; xx [ 24 ]
= 0.8584274834925502 ; xx [ 25 ] = 0.4183459750058262 ; xx [ 26 ] = -
0.2967977438948484 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx + 24 , xx +
46 ) ; xx [ 24 ] = 0.3415522478515931 ; xx [ 25 ] = - 0.03450918424939552 ;
xx [ 26 ] = 0.9392290339368589 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx +
24 , xx + 60 ) ; xx [ 15 ] = xx [ 2 ] == 0.0 ? 0.0 : ( xx [ 1 ] * (
pm_math_Vector3_dot_ra ( xx + 57 , xx + 38 ) + pm_math_Vector3_dot_ra ( xx +
5 , xx + 46 ) ) - xx [ 4 ] * ( pm_math_Vector3_dot_ra ( xx + 57 , xx + 49 ) +
pm_math_Vector3_dot_ra ( xx + 5 , xx + 60 ) ) ) / xx [ 2 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 19 , xx + 53 , xx + 24 ) ; xx [
19 ] = - xx [ 34 ] ; xx [ 20 ] = - xx [ 36 ] ; xx [ 21 ] = - xx [ 37 ] ;
pm_math_Quaternion_xform_ra ( xx + 11 , xx + 19 , xx + 36 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 53 , xx + 36 , xx + 11 ) ; xx [ 19
] = - xx [ 11 ] ; xx [ 20 ] = - xx [ 12 ] ; xx [ 21 ] = - xx [ 13 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 24 , xx + 19 , xx + 11 ) ; xx [ 19 ] =
1.665334536937735e-16 ; xx [ 20 ] = 2.220446049250313e-16 ; xx [ 21 ] =
0.9999999999999999 ; pm_math_Quaternion_compDeriv_ra ( xx + 24 , xx + 19 , xx
+ 36 ) ; xx [ 1 ] = sqrt ( xx [ 5 ] * xx [ 5 ] + xx [ 6 ] * xx [ 6 ] + xx [ 7
] * xx [ 7 ] ) ; xx [ 2 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ] ; xx
[ 4 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 6 ] / xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ==
0.0 ? 0.0 : xx [ 7 ] / xx [ 1 ] ; xx [ 19 ] = xx [ 2 ] ; xx [ 20 ] = xx [ 4 ]
; xx [ 21 ] = xx [ 11 ] ; xx [ 24 ] = - 1.110079029024123e-16 ; xx [ 25 ] =
1.797569350196136e-18 ; xx [ 26 ] = 1.561251128379126e-16 ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 24 , xx + 46 ) ; xx [ 24 ] = xx
[ 9 ] * ( xx [ 23 ] + xx [ 18 ] ) ; xx [ 25 ] = xx [ 9 ] * ( xx [ 35 ] - xx [
33 ] ) ; xx [ 26 ] = xx [ 8 ] - xx [ 9 ] * ( xx [ 31 ] + xx [ 10 ] ) ; J [ 4
] = xx [ 41 ] + xx [ 3 ] ; J [ 5 ] = xx [ 16 ] + xx [ 15 ] ; J [ 15 ] = xx [
12 ] ; J [ 16 ] = xx [ 37 ] ; J [ 26 ] = xx [ 13 ] ; J [ 27 ] = xx [ 38 ] ; J
[ 37 ] = - pm_math_Vector3_dot_ra ( xx + 28 , xx + 19 ) ; J [ 38 ] =
pm_math_Vector3_dot_ra ( xx + 57 , xx + 19 ) ; J [ 48 ] =
pm_math_Vector3_dot_ra ( xx + 5 , xx + 46 ) - pm_math_Vector3_dot_ra ( xx +
28 , xx + 24 ) ; J [ 49 ] = pm_math_Vector3_dot_ra ( xx + 57 , xx + 24 ) ;
return 5 ; } size_t cst_robotarm_98bf360f_6_computeAssemblyJacobian ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx
, boolean_T forVelocitySatisfaction , const double * state , const int *
modeVector , const double * motionData , double * J ) { ( void ) mech ; (
void ) rtdv ; ( void ) state ; ( void ) modeVector ; ( void )
forVelocitySatisfaction ; ( void ) motionData ; ( void ) J ; switch (
constraintIdx ) { case 0 : return computeAssemblyJacobian_0 ( rtdv , state ,
modeVector , motionData , J ) ; case 1 : return computeAssemblyJacobian_1 (
rtdv , state , modeVector , motionData , J ) ; case 2 : return
forVelocitySatisfaction ? computeAssemblyJacobian_2v ( rtdv , state ,
modeVector , motionData , J ) : computeAssemblyJacobian_2p ( rtdv , state ,
modeVector , motionData , J ) ; } return 0 ; } size_t
cst_robotarm_98bf360f_6_computeFullAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 108 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.6950555487140754 ; xx [ 2 ] = -
0.4332134671585962 ; xx [ 3 ] = - 0.4754690018336444 ; xx [ 4 ] = -
0.3211745699296897 ; xx [ 5 ] = motionData [ 84 ] ; xx [ 6 ] = motionData [
85 ] ; xx [ 7 ] = motionData [ 86 ] ; xx [ 8 ] = motionData [ 87 ] ; xx [ 9 ]
= 0.3857454927643891 ; xx [ 10 ] = 0.5034016931648384 ; xx [ 11 ] =
0.5842144511346662 ; xx [ 12 ] = 0.5064391624036924 ;
pm_math_Quaternion_compose_ra ( xx + 5 , xx + 9 , xx + 13 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 1 , xx + 13 , xx + 5 ) ; xx [ 13
] = 2.0 ; xx [ 14 ] = 1.0 ; xx [ 15 ] = xx [ 13 ] * ( motionData [ 92 ] *
motionData [ 94 ] - motionData [ 91 ] * motionData [ 93 ] ) ; xx [ 16 ] = xx
[ 13 ] * ( motionData [ 91 ] * motionData [ 92 ] + motionData [ 93 ] *
motionData [ 94 ] ) ; xx [ 17 ] = xx [ 14 ] - xx [ 13 ] * ( motionData [ 92 ]
* motionData [ 92 ] + motionData [ 93 ] * motionData [ 93 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 15 , xx + 18 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 18 , xx + 21 ) ; xx [ 18 ] =
xx [ 13 ] * ( motionData [ 70 ] * motionData [ 72 ] - motionData [ 71 ] *
motionData [ 73 ] ) ; xx [ 19 ] = - ( xx [ 13 ] * ( motionData [ 70 ] *
motionData [ 71 ] + motionData [ 72 ] * motionData [ 73 ] ) ) ; xx [ 20 ] =
xx [ 13 ] * ( motionData [ 71 ] * motionData [ 71 ] + motionData [ 72 ] *
motionData [ 72 ] ) - xx [ 14 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 9
, xx + 18 , xx + 25 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 25 ,
xx + 9 ) ; xx [ 25 ] = - 2.775557561562891e-16 ; xx [ 26 ] = - 1.0 ; xx [ 27
] = 1.48769885299771e-14 ; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 25
, xx + 28 ) ; xx [ 5 ] = 0.5912864502323997 ; xx [ 6 ] = 0.5 ; xx [ 7 ] = xx
[ 6 ] * state [ 12 ] ; xx [ 8 ] = sin ( xx [ 7 ] ) ; xx [ 9 ] =
0.04451361391915684 ; xx [ 12 ] = cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 5 ] * xx
[ 8 ] - xx [ 9 ] * xx [ 12 ] ; xx [ 21 ] = 0.6953254828680254 ; xx [ 24 ] =
0.4061050908592153 ; xx [ 25 ] = xx [ 21 ] * xx [ 12 ] + xx [ 24 ] * xx [ 8 ]
; xx [ 26 ] = - xx [ 25 ] ; xx [ 27 ] = xx [ 21 ] * xx [ 8 ] - xx [ 24 ] * xx
[ 12 ] ; xx [ 21 ] = xx [ 9 ] * xx [ 8 ] + xx [ 5 ] * xx [ 12 ] ; xx [ 5 ] =
- xx [ 21 ] ; xx [ 31 ] = xx [ 7 ] ; xx [ 32 ] = xx [ 26 ] ; xx [ 33 ] = xx [
27 ] ; xx [ 34 ] = xx [ 5 ] ; xx [ 35 ] = motionData [ 91 ] ; xx [ 36 ] =
motionData [ 92 ] ; xx [ 37 ] = motionData [ 93 ] ; xx [ 38 ] = motionData [
94 ] ; pm_math_Quaternion_compose_ra ( xx + 31 , xx + 35 , xx + 39 ) ; xx [
35 ] = 5.728444065062708e-4 ; xx [ 36 ] = - 0.0463662621131998 ; xx [ 37 ] =
7.575300750045659e-3 ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 35 , xx + 43
) ; pm_math_Quaternion_xform_ra ( xx + 39 , xx + 43 , xx + 15 ) ; xx [ 38 ] =
xx [ 26 ] ; xx [ 39 ] = xx [ 27 ] ; xx [ 40 ] = xx [ 5 ] ; xx [ 5 ] =
motionData [ 95 ] * xx [ 21 ] ; xx [ 8 ] = motionData [ 96 ] * xx [ 21 ] ; xx
[ 9 ] = xx [ 27 ] * motionData [ 96 ] - motionData [ 95 ] * xx [ 25 ] ; xx [
41 ] = xx [ 5 ] ; xx [ 42 ] = xx [ 8 ] ; xx [ 43 ] = xx [ 9 ] ;
pm_math_Vector3_cross_ra ( xx + 38 , xx + 41 , xx + 44 ) ; xx [ 12 ] =
6.31742519402702e-9 ; xx [ 24 ] = xx [ 12 ] * xx [ 21 ] ; xx [ 26 ] =
6.11133899174537e-11 ; xx [ 28 ] = xx [ 26 ] * xx [ 21 ] ; xx [ 41 ] = xx [
12 ] * xx [ 25 ] + xx [ 26 ] * xx [ 27 ] ; xx [ 47 ] = xx [ 24 ] ; xx [ 48 ]
= - xx [ 28 ] ; xx [ 49 ] = - xx [ 41 ] ; pm_math_Vector3_cross_ra ( xx + 38
, xx + 47 , xx + 50 ) ; xx [ 42 ] = xx [ 13 ] * ( xx [ 50 ] + xx [ 24 ] * xx
[ 7 ] ) ; xx [ 24 ] = xx [ 13 ] * ( xx [ 51 ] - xx [ 28 ] * xx [ 7 ] ) ; xx [
28 ] = xx [ 13 ] * ( xx [ 52 ] - xx [ 41 ] * xx [ 7 ] ) ; xx [ 47 ] = xx [ 15
] + xx [ 13 ] * ( xx [ 44 ] + xx [ 5 ] * xx [ 7 ] ) + xx [ 42 ] - motionData
[ 96 ] + xx [ 26 ] ; xx [ 48 ] = xx [ 16 ] + motionData [ 95 ] + xx [ 13 ] *
( xx [ 45 ] + xx [ 8 ] * xx [ 7 ] ) + xx [ 24 ] + xx [ 12 ] ; xx [ 49 ] = xx
[ 17 ] + xx [ 13 ] * ( xx [ 7 ] * xx [ 9 ] + xx [ 46 ] ) + xx [ 28 ] ; xx [
15 ] = - 0.3826804379272111 ; xx [ 16 ] = 0.9076319526101295 ; xx [ 17 ] =
0.1725106403354915 ; xx [ 5 ] = xx [ 6 ] * state [ 18 ] ; xx [ 8 ] = cos ( xx
[ 5 ] ) ; xx [ 9 ] = sin ( xx [ 5 ] ) ; xx [ 43 ] = - ( motionData [ 43 ] *
xx [ 8 ] + motionData [ 44 ] * xx [ 9 ] ) ; xx [ 44 ] = motionData [ 42 ] *
xx [ 8 ] - motionData [ 45 ] * xx [ 9 ] ; xx [ 45 ] = motionData [ 42 ] * xx
[ 9 ] + motionData [ 45 ] * xx [ 8 ] ; xx [ 46 ] = motionData [ 43 ] * xx [ 9
] - motionData [ 44 ] * xx [ 8 ] ; xx [ 50 ] = motionData [ 70 ] ; xx [ 51 ]
= motionData [ 71 ] ; xx [ 52 ] = motionData [ 72 ] ; xx [ 53 ] = motionData
[ 73 ] ; pm_math_Quaternion_compose_ra ( xx + 43 , xx + 50 , xx + 54 ) ;
pm_math_Vector3_cross_ra ( xx + 18 , xx + 35 , xx + 43 ) ;
pm_math_Quaternion_xform_ra ( xx + 54 , xx + 43 , xx + 18 ) ; xx [ 5 ] =
8.500005402767106e-3 ; xx [ 35 ] = 2.534418181099341e-9 ; xx [ 36 ] = xx [ 5
] * xx [ 8 ] + xx [ 35 ] * xx [ 9 ] ; xx [ 37 ] = motionData [ 74 ] * xx [ 8
] + motionData [ 75 ] * xx [ 9 ] ; xx [ 41 ] = motionData [ 75 ] + xx [ 13 ]
* xx [ 36 ] * xx [ 9 ] - xx [ 13 ] * xx [ 37 ] * xx [ 9 ] - xx [ 35 ] ; xx [
43 ] = motionData [ 43 ] ; xx [ 44 ] = motionData [ 44 ] ; xx [ 45 ] =
motionData [ 45 ] ; xx [ 9 ] = xx [ 13 ] * xx [ 37 ] * xx [ 8 ] - (
motionData [ 74 ] + xx [ 13 ] * xx [ 36 ] * xx [ 8 ] ) + xx [ 5 ] ; xx [ 5 ]
= motionData [ 45 ] * xx [ 9 ] ; xx [ 8 ] = motionData [ 45 ] * xx [ 41 ] ;
xx [ 35 ] = motionData [ 43 ] * xx [ 9 ] - motionData [ 44 ] * xx [ 41 ] ; xx
[ 50 ] = - xx [ 5 ] ; xx [ 51 ] = xx [ 8 ] ; xx [ 52 ] = xx [ 35 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 50 , xx + 53 ) ; xx [ 50 ] = xx [
18 ] + xx [ 41 ] + xx [ 13 ] * ( xx [ 53 ] - xx [ 5 ] * motionData [ 42 ] ) ;
xx [ 51 ] = xx [ 19 ] + xx [ 9 ] + xx [ 13 ] * ( xx [ 8 ] * motionData [ 42 ]
+ xx [ 54 ] ) ; xx [ 52 ] = xx [ 20 ] + xx [ 13 ] * ( xx [ 35 ] * motionData
[ 42 ] + xx [ 55 ] ) ; xx [ 53 ] = motionData [ 77 ] ; xx [ 54 ] = motionData
[ 78 ] ; xx [ 55 ] = motionData [ 79 ] ; xx [ 56 ] = motionData [ 80 ] ; xx [
5 ] = - 0.9899003997337941 ; xx [ 57 ] = xx [ 5 ] ; xx [ 58 ] =
0.01994045583473794 ; xx [ 59 ] = 0.09771574456570448 ; xx [ 60 ] =
0.1007532138045611 ; xx [ 8 ] = xx [ 6 ] * state [ 20 ] ; xx [ 9 ] = sin ( xx
[ 8 ] ) ; xx [ 18 ] = 0.9801080229701458 ; xx [ 61 ] = cos ( xx [ 8 ] ) ; xx
[ 62 ] = - ( 0.1974758392319079 * xx [ 9 ] ) ; xx [ 63 ] = 0.0197877797947617
* xx [ 9 ] ; xx [ 64 ] = - ( xx [ 18 ] * xx [ 9 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 57 , xx + 61 , xx + 65 ) ;
pm_math_Quaternion_compose_ra ( xx + 53 , xx + 65 , xx + 57 ) ; xx [ 35 ] = -
0.04529404710916283 ; xx [ 36 ] = 9.34489474319e-4 ; xx [ 37 ] =
9.144881203878137e-3 ; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 35 , xx +
61 ) ; xx [ 35 ] = 1.267558276479352e-3 ; xx [ 36 ] = - 0.02545789283437272 ;
xx [ 37 ] = - 7.693716347542733e-4 ; pm_math_Quaternion_xform_ra ( xx + 65 ,
xx + 35 , xx + 57 ) ; pm_math_Quaternion_xform_ra ( xx + 53 , xx + 57 , xx +
35 ) ; xx [ 53 ] = xx [ 61 ] + xx [ 35 ] ; xx [ 54 ] = xx [ 62 ] + xx [ 36 ]
; xx [ 55 ] = xx [ 63 ] + xx [ 37 ] ; xx [ 56 ] = motionData [ 105 ] ; xx [
57 ] = motionData [ 106 ] ; xx [ 58 ] = motionData [ 107 ] ; xx [ 59 ] =
motionData [ 108 ] ; xx [ 60 ] = 0.5034016931648424 ; xx [ 61 ] =
0.3857454927643942 ; xx [ 62 ] = 0.5064391624036884 ; xx [ 63 ] =
0.5842144511346627 ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 60 , xx +
64 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 1 , xx + 64 , xx + 56 ) ;
xx [ 1 ] = xx [ 13 ] * ( motionData [ 113 ] * motionData [ 115 ] - motionData
[ 112 ] * motionData [ 114 ] ) ; xx [ 2 ] = xx [ 13 ] * ( motionData [ 112 ]
* motionData [ 113 ] + motionData [ 114 ] * motionData [ 115 ] ) ; xx [ 3 ] =
xx [ 14 ] - xx [ 13 ] * ( motionData [ 113 ] * motionData [ 113 ] +
motionData [ 114 ] * motionData [ 114 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 60 , xx + 1 , xx + 35 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 56 , xx + 35 , xx + 64 ) ; xx [ 35 ] =
xx [ 13 ] * ( motionData [ 57 ] * motionData [ 59 ] - motionData [ 56 ] *
motionData [ 58 ] ) ; xx [ 36 ] = xx [ 13 ] * ( motionData [ 56 ] *
motionData [ 57 ] + motionData [ 58 ] * motionData [ 59 ] ) ; xx [ 37 ] = xx
[ 14 ] - xx [ 13 ] * ( motionData [ 57 ] * motionData [ 57 ] + motionData [
58 ] * motionData [ 58 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 60 ,
xx + 35 , xx + 68 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 56 , xx + 68 ,
xx + 60 ) ; xx [ 68 ] = - 3.05311331771918e-16 ; xx [ 69 ] = - 1.0 ; xx [ 70
] = - 1.332267629550188e-14 ; pm_math_Quaternion_compDeriv_ra ( xx + 56 , xx
+ 68 , xx + 71 ) ; xx [ 56 ] = motionData [ 112 ] ; xx [ 57 ] = motionData [
113 ] ; xx [ 58 ] = motionData [ 114 ] ; xx [ 59 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 31 , xx + 56 , xx + 67 ) ; xx [ 31 ] = -
0.01271019941645938 ; xx [ 32 ] = 0.02011896482120349 ; xx [ 33 ] = -
0.01159391418917814 ; pm_math_Vector3_cross_ra ( xx + 1 , xx + 31 , xx + 56 )
; pm_math_Quaternion_xform_ra ( xx + 67 , xx + 56 , xx + 1 ) ; xx [ 4 ] =
motionData [ 116 ] * xx [ 21 ] ; xx [ 8 ] = motionData [ 117 ] * xx [ 21 ] ;
xx [ 9 ] = xx [ 27 ] * motionData [ 117 ] - motionData [ 116 ] * xx [ 25 ] ;
xx [ 19 ] = xx [ 4 ] ; xx [ 20 ] = xx [ 8 ] ; xx [ 21 ] = xx [ 9 ] ;
pm_math_Vector3_cross_ra ( xx + 38 , xx + 19 , xx + 56 ) ; xx [ 19 ] = xx [ 1
] + xx [ 13 ] * ( xx [ 56 ] + xx [ 4 ] * xx [ 7 ] ) + xx [ 42 ] - motionData
[ 117 ] + xx [ 26 ] ; xx [ 20 ] = xx [ 2 ] + motionData [ 116 ] + xx [ 13 ] *
( xx [ 57 ] + xx [ 8 ] * xx [ 7 ] ) + xx [ 24 ] + xx [ 12 ] ; xx [ 21 ] = xx
[ 3 ] + xx [ 13 ] * ( xx [ 7 ] * xx [ 9 ] + xx [ 58 ] ) + xx [ 28 ] ; xx [ 1
] = xx [ 6 ] * state [ 14 ] ; xx [ 2 ] = cos ( xx [ 1 ] ) ; xx [ 3 ] = sin (
xx [ 1 ] ) ; xx [ 24 ] = motionData [ 42 ] * xx [ 2 ] - motionData [ 45 ] *
xx [ 3 ] ; xx [ 25 ] = motionData [ 43 ] * xx [ 2 ] + motionData [ 44 ] * xx
[ 3 ] ; xx [ 26 ] = motionData [ 44 ] * xx [ 2 ] - motionData [ 43 ] * xx [ 3
] ; xx [ 27 ] = motionData [ 42 ] * xx [ 3 ] + motionData [ 45 ] * xx [ 2 ] ;
xx [ 38 ] = motionData [ 56 ] ; xx [ 39 ] = motionData [ 57 ] ; xx [ 40 ] =
motionData [ 58 ] ; xx [ 41 ] = motionData [ 59 ] ;
pm_math_Quaternion_compose_ra ( xx + 24 , xx + 38 , xx + 56 ) ;
pm_math_Vector3_cross_ra ( xx + 35 , xx + 31 , xx + 7 ) ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 7 , xx + 24 ) ; xx [ 1 ] =
motionData [ 61 ] * xx [ 3 ] ; xx [ 4 ] = motionData [ 60 ] * xx [ 3 ] ; xx [
7 ] = 8.499995046130028e-3 ; xx [ 8 ] = xx [ 7 ] * xx [ 3 ] ; xx [ 9 ] =
3.566398367738088e-9 ; xx [ 12 ] = xx [ 9 ] * xx [ 3 ] ; xx [ 27 ] = xx [ 13
] * ( xx [ 1 ] * xx [ 3 ] - xx [ 4 ] * xx [ 2 ] ) - ( motionData [ 61 ] + xx
[ 13 ] * ( xx [ 8 ] * xx [ 2 ] - xx [ 12 ] * xx [ 3 ] ) ) - xx [ 9 ] ; xx [ 9
] = motionData [ 60 ] - xx [ 13 ] * ( xx [ 12 ] * xx [ 2 ] + xx [ 8 ] * xx [
3 ] ) - xx [ 13 ] * ( xx [ 1 ] * xx [ 2 ] + xx [ 4 ] * xx [ 3 ] ) + xx [ 7 ]
; xx [ 1 ] = motionData [ 45 ] * xx [ 9 ] ; xx [ 2 ] = motionData [ 45 ] * xx
[ 27 ] ; xx [ 3 ] = motionData [ 43 ] * xx [ 9 ] - motionData [ 44 ] * xx [
27 ] ; xx [ 31 ] = - xx [ 1 ] ; xx [ 32 ] = xx [ 2 ] ; xx [ 33 ] = xx [ 3 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 31 , xx + 34 ) ; xx [ 31 ] = xx [
24 ] + xx [ 27 ] + xx [ 13 ] * ( xx [ 34 ] - xx [ 1 ] * motionData [ 42 ] ) ;
xx [ 32 ] = xx [ 25 ] + xx [ 9 ] + xx [ 13 ] * ( xx [ 2 ] * motionData [ 42 ]
+ xx [ 35 ] ) ; xx [ 33 ] = xx [ 26 ] + xx [ 13 ] * ( xx [ 3 ] * motionData [
42 ] + xx [ 36 ] ) ; xx [ 1 ] = motionData [ 98 ] ; xx [ 2 ] = motionData [
99 ] ; xx [ 3 ] = motionData [ 100 ] ; xx [ 4 ] = motionData [ 101 ] ; xx [
24 ] = xx [ 5 ] ; xx [ 25 ] = - 0.01994045583473804 ; xx [ 26 ] = -
0.09771574456570453 ; xx [ 27 ] = 0.1007532138045611 ; xx [ 5 ] = xx [ 6 ] *
state [ 16 ] ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 34 ] = cos ( xx [ 5 ] ) ;
xx [ 35 ] = 0.197475839231908 * xx [ 7 ] ; xx [ 36 ] = - (
0.01978777979476189 * xx [ 7 ] ) ; xx [ 37 ] = - ( xx [ 18 ] * xx [ 7 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 24 , xx + 34 , xx + 38 ) ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 38 , xx + 24 ) ; xx [ 7 ] =
0.01994817665605048 ; xx [ 8 ] = 0.01474688635611298 ; xx [ 9 ] =
3.721502835343984e-3 ; pm_math_Quaternion_xform_ra ( xx + 24 , xx + 7 , xx +
34 ) ; xx [ 7 ] = 1.267558015198214e-3 ; xx [ 8 ] = - 0.02545789261362155 ;
xx [ 9 ] = 7.693715776535444e-4 ; pm_math_Quaternion_xform_ra ( xx + 38 , xx
+ 7 , xx + 24 ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 24 , xx + 7 ) ;
xx [ 1 ] = xx [ 34 ] + xx [ 7 ] ; xx [ 2 ] = xx [ 35 ] + xx [ 8 ] ; xx [ 3 ]
= xx [ 36 ] + xx [ 9 ] ; xx [ 24 ] = motionData [ 35 ] ; xx [ 25 ] =
motionData [ 36 ] ; xx [ 26 ] = motionData [ 37 ] ; xx [ 27 ] = motionData [
38 ] ; xx [ 7 ] = 0.01025445069467229 ; xx [ 8 ] = - 9.847964366436174e-3 ;
xx [ 9 ] = - 0.01014277598357412 ; pm_math_Quaternion_xform_ra ( xx + 24 , xx
+ 7 , xx + 34 ) ; xx [ 37 ] = motionData [ 28 ] ; xx [ 38 ] = motionData [ 29
] ; xx [ 39 ] = motionData [ 30 ] ; xx [ 40 ] = motionData [ 31 ] ; xx [ 7 ]
= - 1.779962358034746e-3 ; xx [ 8 ] = - 2.813288543230789e-4 ; xx [ 9 ] = -
3.860324031167178e-7 ; pm_math_Quaternion_xform_ra ( xx + 37 , xx + 7 , xx +
41 ) ; xx [ 4 ] = xx [ 34 ] + motionData [ 39 ] - ( xx [ 41 ] + motionData [
32 ] ) ; xx [ 5 ] = xx [ 35 ] + motionData [ 40 ] - ( xx [ 42 ] + motionData
[ 33 ] ) ; xx [ 7 ] = xx [ 36 ] + motionData [ 41 ] - ( xx [ 43 ] +
motionData [ 34 ] ) ; xx [ 34 ] = xx [ 4 ] ; xx [ 35 ] = xx [ 5 ] ; xx [ 36 ]
= xx [ 7 ] ; xx [ 41 ] = 0.7070832170269247 ; xx [ 42 ] = 0.7070839779596056
; xx [ 43 ] = - 5.77635371758612e-3 ; xx [ 44 ] = - 5.675037392355237e-3 ;
pm_math_Quaternion_compose_ra ( xx + 37 , xx + 41 , xx + 56 ) ; xx [ 8 ] = xx
[ 58 ] * xx [ 58 ] ; xx [ 9 ] = xx [ 59 ] * xx [ 59 ] ; xx [ 12 ] = xx [ 56 ]
* xx [ 59 ] ; xx [ 18 ] = xx [ 57 ] * xx [ 58 ] ; xx [ 28 ] = xx [ 57 ] * xx
[ 59 ] ; xx [ 41 ] = xx [ 56 ] * xx [ 58 ] ; xx [ 42 ] = xx [ 14 ] - xx [ 13
] * ( xx [ 8 ] + xx [ 9 ] ) ; xx [ 43 ] = xx [ 13 ] * ( xx [ 12 ] + xx [ 18 ]
) ; xx [ 44 ] = xx [ 13 ] * ( xx [ 28 ] - xx [ 41 ] ) ; xx [ 45 ] =
pm_math_Vector3_dot_ra ( xx + 34 , xx + 42 ) ; xx [ 67 ] = -
0.9890584029719356 ; xx [ 68 ] = 0.02451507747925197 ; xx [ 69 ] = -
0.1451159893451954 ; xx [ 70 ] = - 0.01019000113620927 ; xx [ 46 ] = xx [ 6 ]
* state [ 8 ] ; xx [ 60 ] = 0.01619418156754471 ; xx [ 63 ] = sin ( xx [ 46 ]
) ; xx [ 64 ] = 0.9998688656410684 ; xx [ 71 ] = 2.236298900726297e-6 ; xx [
74 ] = cos ( xx [ 46 ] ) ; xx [ 75 ] = - ( xx [ 60 ] * xx [ 63 ] ) ; xx [ 76
] = - ( xx [ 64 ] * xx [ 63 ] ) ; xx [ 77 ] = - ( xx [ 71 ] * xx [ 63 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 67 , xx + 74 , xx + 78 ) ; xx [ 67 ] = -
0.9998688553766499 ; xx [ 68 ] = 0.01619418172173452 ; xx [ 69 ] = -
1.432695097203727e-4 ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 67 , xx +
74 ) ; xx [ 67 ] = 3.853526455973429e-7 ; xx [ 68 ] = - 2.270950962420449e-9
; xx [ 69 ] = - 1.775173053264905e-3 ; pm_math_Quaternion_xform_ra ( xx + 78
, xx + 67 , xx + 82 ) ; xx [ 67 ] = - 3.853526455052602e-7 ; xx [ 68 ] =
2.270950960928974e-9 ; xx [ 69 ] = 1.775173053264939e-3 ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 67 , xx + 85 ) ; xx [ 67 ] = xx
[ 82 ] + xx [ 85 ] ; xx [ 68 ] = xx [ 83 ] + xx [ 86 ] ; xx [ 69 ] = xx [ 84
] + xx [ 87 ] ; xx [ 46 ] = xx [ 57 ] * xx [ 57 ] ; xx [ 63 ] = xx [ 56 ] *
xx [ 57 ] ; xx [ 70 ] = xx [ 58 ] * xx [ 59 ] ; xx [ 82 ] = xx [ 13 ] * ( xx
[ 18 ] - xx [ 12 ] ) ; xx [ 83 ] = xx [ 14 ] - xx [ 13 ] * ( xx [ 9 ] + xx [
46 ] ) ; xx [ 84 ] = xx [ 13 ] * ( xx [ 63 ] + xx [ 70 ] ) ; xx [ 9 ] =
pm_math_Vector3_dot_ra ( xx + 34 , xx + 82 ) ; xx [ 85 ] = -
1.432869371958337e-4 ; xx [ 86 ] = 8.412683135540379e-8 ; xx [ 87 ] =
0.9999999897344243 ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 85 , xx +
88 ) ; xx [ 12 ] = 1.591118726857836e-5 ; xx [ 18 ] = xx [ 45 ] * xx [ 45 ] +
xx [ 9 ] * xx [ 9 ] ; if ( xx [ 12 ] > xx [ 18 ] ) xx [ 18 ] = xx [ 12 ] ; xx
[ 77 ] = xx [ 18 ] == 0.0 ? 0.0 : ( xx [ 45 ] * ( pm_math_Vector3_dot_ra ( xx
+ 34 , xx + 74 ) - pm_math_Vector3_dot_ra ( xx + 67 , xx + 82 ) ) - xx [ 9 ]
* ( pm_math_Vector3_dot_ra ( xx + 34 , xx + 88 ) - pm_math_Vector3_dot_ra (
xx + 67 , xx + 42 ) ) ) / xx [ 18 ] ; xx [ 85 ] = - 0.2643737754551072 ; xx [
86 ] = - 0.029879175111395 ; xx [ 87 ] = 0.6425355357697462 ; xx [ 88 ] =
0.7185832081390159 ; pm_math_Quaternion_compose_ra ( xx + 24 , xx + 85 , xx +
89 ) ; xx [ 24 ] = xx [ 90 ] * xx [ 91 ] ; xx [ 25 ] = xx [ 89 ] * xx [ 92 ]
; xx [ 26 ] = xx [ 92 ] * xx [ 92 ] ; xx [ 74 ] = xx [ 13 ] * ( xx [ 24 ] -
xx [ 25 ] ) ; xx [ 75 ] = xx [ 14 ] - xx [ 13 ] * ( xx [ 26 ] + xx [ 90 ] *
xx [ 90 ] ) ; xx [ 76 ] = xx [ 13 ] * ( xx [ 89 ] * xx [ 90 ] + xx [ 91 ] *
xx [ 92 ] ) ; xx [ 27 ] = pm_math_Vector3_dot_ra ( xx + 34 , xx + 74 ) ; xx [
85 ] = xx [ 14 ] - xx [ 13 ] * ( xx [ 91 ] * xx [ 91 ] + xx [ 26 ] ) ; xx [
86 ] = xx [ 13 ] * ( xx [ 25 ] + xx [ 24 ] ) ; xx [ 87 ] = xx [ 13 ] * ( xx [
90 ] * xx [ 92 ] - xx [ 89 ] * xx [ 91 ] ) ; xx [ 24 ] =
pm_math_Vector3_dot_ra ( xx + 34 , xx + 85 ) ; xx [ 25 ] = xx [ 24 ] * xx [
24 ] + xx [ 27 ] * xx [ 27 ] ; if ( xx [ 12 ] > xx [ 25 ] ) xx [ 25 ] = xx [
12 ] ; xx [ 12 ] = xx [ 25 ] == 0.0 ? 0.0 : ( xx [ 27 ] *
pm_math_Vector3_dot_ra ( xx + 67 , xx + 85 ) - xx [ 24 ] *
pm_math_Vector3_dot_ra ( xx + 67 , xx + 74 ) ) / xx [ 25 ] ; xx [ 93 ] = -
0.215751709792892 ; xx [ 94 ] = - 0.2981849626920737 ; xx [ 95 ] = -
2.033832353854736e-3 ; xx [ 96 ] = - 0.929802554993116 ; xx [ 26 ] = xx [ 6 ]
* state [ 10 ] ; xx [ 6 ] = sin ( xx [ 26 ] ) ; xx [ 97 ] = cos ( xx [ 26 ] )
; xx [ 98 ] = - ( 0.3826804379272233 * xx [ 6 ] ) ; xx [ 99 ] =
0.9076319526101237 * xx [ 6 ] ; xx [ 100 ] = 0.1725106403354957 * xx [ 6 ] ;
pm_math_Quaternion_compose_ra ( xx + 93 , xx + 97 , xx + 101 ) ; xx [ 93 ] =
- 7.507028932003404e-3 ; xx [ 94 ] = - 2.112440099565184e-3 ; xx [ 95 ] = -
5.538643790510167e-3 ; pm_math_Quaternion_xform_ra ( xx + 101 , xx + 93 , xx
+ 96 ) ; xx [ 93 ] = 7.507028932003423e-3 ; xx [ 94 ] = 2.112440099565195e-3
; xx [ 95 ] = 5.538643790510151e-3 ; pm_math_Quaternion_xform_ra ( xx + 101 ,
xx + 93 , xx + 105 ) ; xx [ 93 ] = xx [ 96 ] + xx [ 105 ] ; xx [ 94 ] = xx [
97 ] + xx [ 106 ] ; xx [ 95 ] = xx [ 98 ] + xx [ 107 ] ; xx [ 6 ] = xx [ 18 ]
== 0.0 ? 0.0 : ( xx [ 45 ] * pm_math_Vector3_dot_ra ( xx + 93 , xx + 82 ) -
xx [ 9 ] * pm_math_Vector3_dot_ra ( xx + 93 , xx + 42 ) ) / xx [ 18 ] ; xx [
42 ] = 0.8584274834925502 ; xx [ 43 ] = 0.4183459750058262 ; xx [ 44 ] = -
0.2967977438948484 ; pm_math_Quaternion_xform_ra ( xx + 101 , xx + 42 , xx +
82 ) ; xx [ 42 ] = 0.3415522478515931 ; xx [ 43 ] = - 0.03450918424939552 ;
xx [ 44 ] = 0.9392290339368589 ; pm_math_Quaternion_xform_ra ( xx + 101 , xx
+ 42 , xx + 96 ) ; xx [ 9 ] = xx [ 25 ] == 0.0 ? 0.0 : ( xx [ 24 ] * (
pm_math_Vector3_dot_ra ( xx + 93 , xx + 74 ) + pm_math_Vector3_dot_ra ( xx +
34 , xx + 82 ) ) - xx [ 27 ] * ( pm_math_Vector3_dot_ra ( xx + 93 , xx + 85 )
+ pm_math_Vector3_dot_ra ( xx + 34 , xx + 96 ) ) ) / xx [ 25 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 56 , xx + 89 , xx + 24 ) ; xx [
42 ] = - xx [ 60 ] ; xx [ 43 ] = - xx [ 64 ] ; xx [ 44 ] = - xx [ 71 ] ;
pm_math_Quaternion_xform_ra ( xx + 37 , xx + 42 , xx + 56 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 56 , xx + 37 ) ; xx [ 42
] = - xx [ 37 ] ; xx [ 43 ] = - xx [ 38 ] ; xx [ 44 ] = - xx [ 39 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 24 , xx + 42 , xx + 37 ) ; xx [ 42 ] =
1.665334536937735e-16 ; xx [ 43 ] = 2.220446049250313e-16 ; xx [ 44 ] =
0.9999999999999999 ; pm_math_Quaternion_compDeriv_ra ( xx + 24 , xx + 42 , xx
+ 56 ) ; xx [ 18 ] = sqrt ( xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] + xx [
7 ] * xx [ 7 ] ) ; xx [ 24 ] = xx [ 18 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 18 ]
; xx [ 4 ] = xx [ 18 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 18 ] ; xx [ 5 ] = xx [
18 ] == 0.0 ? 0.0 : xx [ 7 ] / xx [ 18 ] ; xx [ 25 ] = xx [ 24 ] ; xx [ 26 ]
= xx [ 4 ] ; xx [ 27 ] = xx [ 5 ] ; xx [ 42 ] = - 1.110079029024123e-16 ; xx
[ 43 ] = 1.797569350196136e-18 ; xx [ 44 ] = 1.561251128379126e-16 ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 42 , xx + 74 ) ; xx [ 42 ] = xx
[ 13 ] * ( xx [ 41 ] + xx [ 28 ] ) ; xx [ 43 ] = xx [ 13 ] * ( xx [ 70 ] - xx
[ 63 ] ) ; xx [ 44 ] = xx [ 14 ] - xx [ 13 ] * ( xx [ 46 ] + xx [ 8 ] ) ; J [
6 ] = xx [ 22 ] ; J [ 9 ] = xx [ 10 ] ; J [ 10 ] = xx [ 29 ] ; J [ 17 ] = xx
[ 23 ] ; J [ 20 ] = xx [ 11 ] ; J [ 21 ] = xx [ 30 ] ; J [ 28 ] =
pm_math_Vector3_dot_ra ( xx + 47 , xx + 15 ) ; J [ 31 ] =
pm_math_Vector3_dot_ra ( xx + 50 , xx + 15 ) ; J [ 32 ] =
pm_math_Vector3_dot_ra ( xx + 53 , xx + 15 ) ; J [ 39 ] = xx [ 65 ] ; J [ 40
] = xx [ 61 ] ; J [ 41 ] = xx [ 72 ] ; J [ 50 ] = xx [ 66 ] ; J [ 51 ] = xx [
62 ] ; J [ 52 ] = xx [ 73 ] ; J [ 61 ] = pm_math_Vector3_dot_ra ( xx + 19 ,
xx + 15 ) ; J [ 62 ] = pm_math_Vector3_dot_ra ( xx + 31 , xx + 15 ) ; J [ 63
] = pm_math_Vector3_dot_ra ( xx + 1 , xx + 15 ) ; J [ 70 ] = xx [ 77 ] + xx [
12 ] ; J [ 71 ] = xx [ 6 ] + xx [ 9 ] ; J [ 81 ] = xx [ 38 ] ; J [ 82 ] = xx
[ 57 ] ; J [ 92 ] = xx [ 39 ] ; J [ 93 ] = xx [ 58 ] ; J [ 103 ] = -
pm_math_Vector3_dot_ra ( xx + 67 , xx + 25 ) ; J [ 104 ] =
pm_math_Vector3_dot_ra ( xx + 93 , xx + 25 ) ; J [ 114 ] =
pm_math_Vector3_dot_ra ( xx + 34 , xx + 74 ) - pm_math_Vector3_dot_ra ( xx +
67 , xx + 42 ) ; J [ 115 ] = pm_math_Vector3_dot_ra ( xx + 93 , xx + 42 ) ;
return 11 ; } static int isInKinematicSingularity_0 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static int
isInKinematicSingularity_1 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } static int isInKinematicSingularity_2 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } int
cst_robotarm_98bf360f_6_isInKinematicSingularity ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ; (
void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { case 0 :
return isInKinematicSingularity_0 ( rtdv , modeVector , motionData ) ; case 1
: return isInKinematicSingularity_1 ( rtdv , modeVector , motionData ) ; case
2 : return isInKinematicSingularity_2 ( rtdv , modeVector , motionData ) ; }
return 0 ; } PmfMessageId cst_robotarm_98bf360f_6_convertStateVector ( const
void * asmMech , const RuntimeDerivedValuesBundle * rtdv , const void *
simMech , const double * asmState , const int * asmModeVector , const int *
simModeVector , double * simState , void * neDiagMgr0 ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * )
neDiagMgr0 ; ( void ) asmMech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
simMech ; ( void ) asmModeVector ; ( void ) simModeVector ; ( void )
neDiagMgr ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ]
; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ;
simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState
[ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] =
asmState [ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState
[ 10 ] ; simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12
] ; simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] = asmState [ 14 ] ;
simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] = asmState [ 16 ] ;
simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] = asmState [ 18 ] ;
simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] = asmState [ 20 ] ;
simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] = asmState [ 22 ] ;
simState [ 23 ] = asmState [ 23 ] ; simState [ 24 ] = asmState [ 24 ] ;
simState [ 25 ] = asmState [ 25 ] ; simState [ 26 ] = asmState [ 26 ] ;
simState [ 27 ] = asmState [ 27 ] ; simState [ 28 ] = asmState [ 28 ] ;
return NULL ; }
